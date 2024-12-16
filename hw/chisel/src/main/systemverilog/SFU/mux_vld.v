module mux_vld #(
    parameter WIDTH=32
) (
    input sel,
    input [WIDTH-1:0]A,
    input [WIDTH-1:0]B,
    output[WIDTH-1:0]C,
    input            vld_A,
    input            vld_B,
    output           vld_C
);
    assign C=sel?A:B;
    assign vld_C = sel?vld_A:vld_B;
endmodule
