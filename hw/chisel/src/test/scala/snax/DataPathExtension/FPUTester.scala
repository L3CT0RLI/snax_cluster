package snax.DataPathExtension

import chisel3._
import chisel3.util._

import scala.util.Random
import snax.DataPathExtension.HasFPU

class FPUTester extends DataPathExtensionTester {

  def hasExtension = HasFPU

  // System Val
  val extension_width = 512
  val csr_vec = Seq(0) // 8 -> 1 Pooling

  val input_data_vec: Seq[BigInt] = Seq(BigInt(0))
  val output_data_vec: Seq[BigInt] = Seq(BigInt(0))
}
