module csa_42_compress #(
    parameter OP_WIDTH = 32
) (
    input   [OP_WIDTH-1:0]  op1,
    input   [OP_WIDTH-1:0]  op2,
    input   [OP_WIDTH-1:0]  op3,
    input   [OP_WIDTH-1:0]  op4,
    output  [OP_WIDTH  :0]  C,
    output  [OP_WIDTH  :0]  S
);

wire [OP_WIDTH-1 :0] C_mid;
wire [OP_WIDTH-1 :0] S_mid;
wire [OP_WIDTH:0]  E_in;
wire E_0;
assign C= C_mid<<1;
assign S={E_in[OP_WIDTH-1],S_mid};
assign E_0 =1'b0;
genvar i;
    csa_1bit_compressor  csa_1bit_compressor_i (
    .op1                     ( op1[0]     ),
    .op2                     ( op2[0]     ),
    .op3                     ( op3[0]     ),
    .op4                     ( op4[0]     ),
    .E_in                    ( E_0         ),

    .E_out                   ( E_in[0]    ),
    .C                       ( C_mid[0]          ),
    .S                       ( S_mid[0]          )
);   
generate
    for(i=1; i<OP_WIDTH; i=i+1) begin : gen
    csa_1bit_compressor  csa_1bit_compressor_i (
    .op1                     ( op1[i]     ),
    .op2                     ( op2[i]     ),
    .op3                     ( op3[i]     ),
    .op4                     ( op4[i]     ),
    .E_in                    ( E_in[i-1]  ),

    .E_out                   ( E_in[i]    ),
    .C                       ( C_mid[i]          ),
    .S                       ( S_mid[i]          )
);
    end
endgenerate
endmodule
