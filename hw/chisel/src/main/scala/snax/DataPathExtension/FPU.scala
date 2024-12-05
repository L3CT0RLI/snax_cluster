package snax.DataPathExtension

import chisel3._
import chisel3.util._

object HasFPU extends HasDataPathExtension {
  implicit val extensionParam: DataPathExtensionParam =
    new DataPathExtensionParam(
      moduleName = "FPU",
      userCsrNum = 1,
      dataWidth = 512
    )
  def instantiate(clusterName: String): SystemVerilogDataPathExtension = Module(
    new SystemVerilogDataPathExtension(
      topmodule = "FPU",
      dir = "src/main/systemverilog/FPU"
    ) {
      override def desiredName = clusterName + namePostfix
    }
  )
}
