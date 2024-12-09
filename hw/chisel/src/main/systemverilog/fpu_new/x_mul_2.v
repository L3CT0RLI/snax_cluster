module x_mul_2 #(
    parameter DATA_WIDTH = 32,
    parameter EXPO_WIDTH = 8,
    parameter MANT_WIDTH = 23,
    parameter WIDTH      = 32
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A,
    input                     vld_in,
    output  [DATA_WIDTH-1:0]  Result,
    output                    vld_out,
    input clk,
    input en,
    input rst_n
 );
 wire                          sign_A;
 wire       [EXPO_WIDTH-1:0]   Expo_A;
 wire       [MANT_WIDTH-1:0]   Mant_A;
 wire       [EXPO_WIDTH-1:0]   Expo_norm_0;
 wire                          overflow_flag;
 wire       [1:0]              add_bits_expo;
 wire       [DATA_WIDTH-1:0]   Result_d;
 assign sign_A = Oprand_A[DATA_WIDTH-1];
 assign Expo_A = Oprand_A[DATA_WIDTH-2:MANT_WIDTH];
 assign Mant_A = Oprand_A[MANT_WIDTH-1:0];
 assign overflow_flag = (Expo_norm_0 <Expo_A)||(Expo_norm_0==255);
 ////////normalization///////////////////////////////////////
assign add_bits_expo = (Expo_A==255)? 0:1;
assign Expo_norm_0 = Expo_A + {6'd0,add_bits_expo};
assign Result_d = {sign_A,Expo_norm_0[EXPO_WIDTH-1:0],Mant_A};
dff_en #(.WIDTH(WIDTH)) dff_Result (Result_d,clk,vld_in&en,rst_n,Result);
dff_en #(.WIDTH(1))     dff_vld (vld_in,clk,vld_in&en,rst_n,vld_out);
endmodule
