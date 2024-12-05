module csa_1bit_compressor (
    input   op1,
    input   op2,
    input   op3,
    input   op4,
    input   E_in,
    output  E_out,
    output  C,
    output  S
);
wire mid0;
wire mid1;
wire mid2;
wire C_mid;
assign mid0  = op3 ^op4;
assign E_out = mid0 ? op2:op4;
assign mid1  = op2 ^op1;
assign mid2  = mid0 ^mid1;
assign C     = mid2 ? E_in:op1;
assign S     = E_in^mid2;
endmodule
