package snax

package streamer

import chisel3._
import chisel3.util._

/** The temporal address generation unit is a module that generates addresses
  * based on a nested for loop configuration.
  *
  * an example of a 2-dimensional nested for loop is:
  *
  * for (i = 0 until 4) for (j = 0 until 4) addr_out = addr_in + i * 16 + j * 32
  *
  * The loop bounds in this example are 4 and 4. The address is generated by
  * multiplying multiplying the loop counters by the strides 16 and 32
  * respectively.
  *
  * The temporal address generation unit generates a new address every clock
  * cycle. The address generation is finished when all the loop counters reach
  * their loop bounds.
  *
  * The number of nested for loops is parametrizeable at design time. The loop
  * bounds and strides are programmable at run time.
  */

/** This class represents the input/output interface for the Temporal Address
  * Generation Unit.
  *
  * @param loopDim
  *   The dimension of the temporal loops = the number of for loops.
  * @param loopBoundWidth
  *   The bit width of the loop bounds.
  * @param addrWidth
  *   The bit width of the address.
  */
class TemporalAddrGenUnitIO(
    params: TemporalAddrGenUnitParams
) extends Bundle {

  // input configuration signals to program the temporal address generation unit
  val loopBounds_i = Flipped(
    Decoupled(Vec(params.loopDim, UInt(params.loopBoundWidth.W)))
  )
  val strides_i = Flipped(
    Decoupled(Vec(params.loopDim, UInt(params.addrWidth.W)))
  )
  val ptr_i = Flipped(Decoupled(UInt(params.addrWidth.W)))

  // generated output address
  val ptr_o = Decoupled(UInt(params.addrWidth.W))

  // done signal indicating current transaction is done, ready for next config and transaction
  val done = Output(Bool())

  // signal to indicate the case when any of the loop bounds are zero
  val zeroLoopBoundCase = Output(Bool())
}

/** TemporalAddrGenUnit is a module that generates addresses based on a nested
  * for loop configuration. The configuration can be programmed through the
  * input interface. After the configuration is programmed, the module will
  * generate addresses until the end of the nested for loops.
  *
  * @param loopDim
  *   The number of nested loops.
  * @param loopBoundWidth
  *   The bit width of the loop bounds.
  * @param addrWidth
  *   The bit width of the addresses.
  */
class TemporalAddrGenUnit(
    params: TemporalAddrGenUnitParams,
    tagName: String = ""
) extends Module
    with RequireAsyncReset {
  override val desiredName = tagName + "TemporalAddrGenUnit"

  // the input/output interface of the module
  val io = IO(
    new TemporalAddrGenUnitIO(
      params
    )
  )

  // control signals for the FSM
  // config_valid is asserted when all the configuration signals are valid
  val config_valid = WireInit(0.B)
  config_valid := io.loopBounds_i.fire && io.strides_i.fire && io.ptr_i.fire
  // addr_gen_finish is asserted when all the for loops have been traversed
  val addr_gen_finish = WireInit(0.B)

  // registers to store the programmable configuration
  val loopBounds = RegInit(
    VecInit(Seq.fill(params.loopDim)(1.U(params.loopBoundWidth.W)))
  )
  val strides = RegInit(
    VecInit(Seq.fill(params.loopDim)(0.U(params.addrWidth.W)))
  )
  val ptr = RegInit(0.U((params.addrWidth).W))

  // signal to indicate the case when any of the loop bounds are zero
  val zeroLoopBoundCase = WireInit(0.B)

  /** The following code is the FSM for the TemporalAddrGenUnit module.
    *
    * The FSM has two states: IDLE and BUSY.
    *
    * In the IDLE state, if the configuration signals are valid, the incoming
    * configuration signals are stored and the FSM transitions to the BUSY
    * state.
    *
    * In the BUSY state, the address generation is started. The FSM remains in
    * the BUSY state until the address generation is finished. When the address
    * generation is finished, the FSM transitions back to the IDLE state.
    */

  // State declaration
  val sIDLE :: sBUSY :: Nil = Enum(2)
  // current state and next state
  val cstate = RegInit(sIDLE)
  val nstate = WireInit(sIDLE)
  cstate := nstate

  // FSM state transition logic
  chisel3.dontTouch(cstate)
  switch(cstate) {
    is(sIDLE) {
      when(config_valid) {
        nstate := sBUSY
      }.otherwise {
        nstate := sIDLE
      }
    }
    is(sBUSY) {
      when(addr_gen_finish) {
        nstate := sIDLE
      }.otherwise {
        nstate := sBUSY
      }
    }
  }

  // program the configuration registers when the
  // configuration signals are valid
  when(config_valid && cstate === sIDLE) {
    loopBounds := io.loopBounds_i.bits
    strides := io.strides_i.bits
    ptr := io.ptr_i.bits
  }

  // special case test for when any loop bound is zero
  zeroLoopBoundCase := cstate === sBUSY && loopBounds.exists(_ === 0.U)
  io.zeroLoopBoundCase := zeroLoopBoundCase

  /** Generates a nested loop counter based on the provided parameters.
    */

  val loop_counters = RegInit(
    VecInit(Seq.fill(params.loopDim)(0.U(params.loopBoundWidth.W)))
  )
  val loop_counters_next = WireInit(
    VecInit(Seq.fill(params.loopDim)(0.U(params.loopBoundWidth.W)))
  )
  val loop_counters_valid = WireInit(VecInit(Seq.fill(params.loopDim)(0.B)))
  val loop_counters_last = WireInit(VecInit(Seq.fill(params.loopDim)(0.B)))

  for (i <- 0 until params.loopDim) {
    // the next loop counter is the current loop counter plus 1
    loop_counters_next(i) := loop_counters(i) + 1.U
    // the loop counter reaches the last value when the
    // next loop counter equals the loop bound
    loop_counters_last(i) := loop_counters_next(i) === loopBounds(i)
  }

  loop_counters_valid(0) := io.ptr_o.fire
  for (i <- 1 until params.loopDim) {
    // every loop counter must be incremented when the previous loop counter
    // reaches the last value and is incremented
    loop_counters_valid(i) := loop_counters_last(
      i - 1
    ) && loop_counters_valid(i - 1)
  }

  when(cstate === sBUSY) {
    for (i <- 0 until params.loopDim) {
      when(loop_counters_valid(i)) {
        loop_counters(i) := Mux(
          loop_counters_last(i),
          0.U,
          loop_counters_next(i)
        )
      }.otherwise {
        loop_counters(i) := loop_counters(i)
      }
    }
  }.otherwise {
    for (i <- 0 until params.loopDim) {
      loop_counters(i) := 0.U
    }
  }

  // to generate the address, the loop counters are multiplied by the strides
  io.ptr_o.bits := (loop_counters
    .zip(strides)
    .map { case (a, b) => a * b })
    .reduce(_ +& _) +& ptr

  addr_gen_finish := (loop_counters_last.reduce(
    _ & _
  ) && io.ptr_o.fire) || zeroLoopBoundCase

  // the decoupled interface is driven by the module state
  io.ptr_o.valid := cstate === sBUSY && !zeroLoopBoundCase

  io.loopBounds_i.ready := cstate === sIDLE
  io.strides_i.ready := cstate === sIDLE
  io.ptr_i.ready := cstate === sIDLE

  io.done := addr_gen_finish
}
