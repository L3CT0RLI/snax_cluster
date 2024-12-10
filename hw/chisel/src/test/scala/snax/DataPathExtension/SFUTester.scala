package snax.DataPathExtension

import chisel3._
import chisel3.util._

import snax.DataPathExtension.HasSFU

import scala.io.Source
import scala.util.Try

object BigIntReader {
  def fromFile(filePath: String): Seq[BigInt] = {
    val source = Source.fromFile(filePath)
    try {
      source
        .getLines()
        .flatMap { line =>
          Try(BigInt(line.trim)).toOption
        }
        .toSeq
    } finally {
      source.close()
    }
  }
}

class SFUSigmoidTester extends DataPathExtensionTester {

  def hasExtension = HasSFU

  // System Val
  val extension_width = 512
  val csr_vec = Seq(
    (1 << 26) +     // Function Selection
    (0 << (20 - 2)) // Softmax Total Amount of Number
  )

  val input_data_vec: Seq[BigInt] = BigIntReader.fromFile("src/main/systemverilog/sfu/testvectors/vector_softmax.txt")
  val output_data_vec: Seq[BigInt] = BigIntReader.fromFile("src/main/systemverilog/sfu/testvectors/output_sigmoid.txt")
  println(input_data_vec)
  println("----------------------------")
  println(output_data_vec)
}
