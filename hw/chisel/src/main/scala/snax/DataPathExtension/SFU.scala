package snax.DataPathExtension

import chisel3._
import chisel3.util._

object HasSFU extends HasDataPathExtension {
  implicit val extensionParam: DataPathExtensionParam =
    new DataPathExtensionParam(
      moduleName = "SFU",
      userCsrNum = 1,
      dataWidth = 512
    )
  def instantiate(clusterName: String): SystemVerilogDataPathExtension = Module(
    new SystemVerilogDataPathExtension(
      topmodule = "SFU",
      dir = "src/main/systemverilog/sfu"
    ) {
      override def desiredName = clusterName + namePostfix
    }
  )
}
