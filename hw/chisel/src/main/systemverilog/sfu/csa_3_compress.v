module csa_3_compress #(
    parameter OP_WIDTH = 32
) (
    input   [OP_WIDTH-1:0]  op1,
    input   [OP_WIDTH-1:0]  op2,
    input   [OP_WIDTH-1:0]  op3,
    output  [OP_WIDTH  :0]  C,
    output  [OP_WIDTH  :0]  S

    
);
    wire[OP_WIDTH -1:0]  C_mid;
    assign S= {1'b0,op1^op2^op3};
    assign C = {C_mid,1'b0};
    assign C_mid= (op1 & op2) | (op1 & op3) | (op2 & op3); 
endmodule
