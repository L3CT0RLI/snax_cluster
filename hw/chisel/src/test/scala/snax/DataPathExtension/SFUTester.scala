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
          Try(BigInt(line.trim,16)).toOption
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
    (1 << 30) +     // Function Selection
    (1 << 25) // Softmax Total Amount of Number
  )

  val input_data_vec: Seq[BigInt] = BigIntReader.fromFile("src/main/systemverilog/sfu/testvectors/vectors_softmax.txt")
  val output_data_vec: Seq[BigInt] = BigIntReader.fromFile("src/main/systemverilog/sfu/testvectors/output_softmax.txt")
  println(input_data_vec)
  println("----------------------------")
  println(output_data_vec)
}
