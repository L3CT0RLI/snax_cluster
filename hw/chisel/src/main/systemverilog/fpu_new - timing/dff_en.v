module dff_en #(parameter WIDTH = 1) 
(
  input [WIDTH-1:0] D,
  input CLK, 
  input EN, 
  input RST_N,
  output reg [WIDTH-1:0] Q
);
always @(posedge CLK or negedge RST_N)
  if (!RST_N) begin   
    Q <= 0;    
  end  
  else if(EN)begin
    Q <= D;  
  end
  else begin
    Q<=Q;
  end

endmodule
