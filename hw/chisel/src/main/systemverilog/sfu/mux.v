module mux #(
    parameter WIDTH=32
) (
    input sel,
    input [WIDTH-1:0]A,
    input [WIDTH-1:0]B,
    output[WIDTH-1:0]C
);
    assign C=sel?A:B;
endmodule
