package snax.xdma.xdmaExtension

import chisel3._
import chisel3.util._
import snax.xdma.DesignParams._

object HasTransposer extends HasDMAExtension {
  implicit val extensionParam: DMAExtensionParam = new DMAExtensionParam(
    moduleName = "Transposer",
    userCsrNum = 0,
    dataWidth = 512
  )

  def instantiate: Transposer = Module(new Transposer)
}

class Transposer()(implicit extensionParam: DMAExtensionParam)
    extends DMAExtension {

  require(
    extensionParam.dataWidth == 512 && 512 == extensionParam.dataWidth,
    "transposeInWidth must be 512 for now"
  )

  // fixed pattern: transpose 8x8 matrix
  val out_data_array = Wire(Vec(8, Vec(8, UInt(8.W))))

  for (i <- 0 until 8) {
    for (j <- 0 until 8) {
      out_data_array(i)(j) := ext_data_i.bits(
        i * 8 + j * 8 * 8 + 7,
        i * 8 + j * 8 * 8 + 0
      )
    }
  }
  ext_data_i.ready := ext_data_o.ready
  ext_data_o.valid := ext_data_i.valid
  ext_busy_o := false.B
  ext_data_o.bits := out_data_array.asUInt
}

object TransposerEmitter extends App {
  println(
    getVerilogString(
      new Transposer()(
        extensionParam = new DMAExtensionParam(
          moduleName = "Transposer",
          userCsrNum = 1,
          dataWidth = 512
        )
      )
    )
  )
}
