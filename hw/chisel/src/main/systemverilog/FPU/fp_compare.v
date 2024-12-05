module fp_compare #(
        parameter DATA_WIDTH = 32,
        parameter EXPO_WIDTH = 8,
        parameter MANT_WIDTH = 23
) (
        input           [DATA_WIDTH-1:0] oprand_A,
        input           [DATA_WIDTH-1:0] oprand_B,
        output   reg    [DATA_WIDTH-1:0] oprand_bigger
);
        wire [MANT_WIDTH-1:0] mant_a,mant_b;
        wire [EXPO_WIDTH-1:0] expo_a,expo_b;
        wire                  sign_a,sign_b;

        assign mant_a = oprand_A[MANT_WIDTH-1:0];
        assign mant_b = oprand_B[MANT_WIDTH-1:0];
        assign expo_a = oprand_A[DATA_WIDTH-2:MANT_WIDTH];
        assign expo_b = oprand_B[DATA_WIDTH-2:MANT_WIDTH];
        assign sign_a = oprand_A[DATA_WIDTH-1];
        assign sign_b = oprand_B[DATA_WIDTH-1];
        wire abs_a_bigger_than_abs_b;
        assign abs_a_bigger_than_abs_b = (expo_a > expo_b) | ((expo_a==expo_b) & (mant_a>mant_b));

        always @(*) begin
                case({sign_a,sign_b}) 
                        2'b00:oprand_bigger = abs_a_bigger_than_abs_b ? (oprand_A) : (oprand_B);
                        2'b01:oprand_bigger = oprand_A;
                        2'b10:oprand_bigger = oprand_B;
                        2'b11:oprand_bigger = abs_a_bigger_than_abs_b ? (oprand_B) : (oprand_A);
                endcase
        end
endmodule
