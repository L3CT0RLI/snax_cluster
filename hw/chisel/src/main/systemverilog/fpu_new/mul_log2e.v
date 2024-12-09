module mul_log2e #(
    parameter DATA_WIDTH = 32,
    parameter EXPO_WIDTH = 8,
    parameter MANT_WIDTH = 23,
    parameter WIDTH      = 32
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A_D,
    output  [DATA_WIDTH-1:0]  Result_out,    
    input                      clk,
    input                      rst_n,
    input                      en,
    input                      vld_in,
    output                     vld_out
 );
 wire                          sign_A;
 wire       [EXPO_WIDTH-1:0]   Expo_A;
 wire       [MANT_WIDTH-1:0]   Mant_A;
 wire       [MANT_WIDTH:0]     Ext_Mant_A;
 wire signed[MANT_WIDTH+1:0]   A_B_chop;
 wire [MANT_WIDTH+1:0]   A_B_mul_compare;
 wire       [EXPO_WIDTH-1:0]   Expo_norm_0;
 wire       [MANT_WIDTH-1:0]   Mant_norm_0;
 wire                          Zero_flag;
 wire                          Inf_flag;
 wire                           flag;
 //////////////////////////////////////////////////////
 wire en_stage0,en_stage1;
 wire vld_reg0;
 wire shift;
 assign en_stage0 = en;// & vld_in;
 assign en_stage1 = en;// & vld_reg0;
 wire   [DATA_WIDTH-1:0]  Oprand_A;
 wire   [DATA_WIDTH-1:0]  Result;
 dff_en #(.WIDTH(DATA_WIDTH))  dff_Oprand_A_reg0 (Oprand_A_D, clk, en, rst_n, Oprand_A);
 dff_en #(.WIDTH(1)) dff_vld0 (vld_in,clk,en,rst_n,vld_reg0);
 dff_en #(.WIDTH(DATA_WIDTH))  dff_Result (Result, clk, en, rst_n, Result_out);
 dff_en #(.WIDTH(1)) dff_vld_out (vld_reg0,clk,en,rst_n,vld_out);
 ///////////////////////////////////////////////////////
 assign sign_A = Oprand_A[DATA_WIDTH-1];
 assign Expo_A = Oprand_A[DATA_WIDTH-2:MANT_WIDTH];
 assign Mant_A = Oprand_A[MANT_WIDTH-1:0];
 assign Ext_Mant_A = {1'b1,Mant_A[MANT_WIDTH-1:0]};
 wire [2:0]  temp0;
 wire [4:0]  temp1;
 wire [5:0]  temp2;
 wire [6:0]  temp3;
 wire [10:0] temp4;
 wire [12:0] temp5;
 wire [14:0] temp6;
 wire [16:0] temp7;
 wire [20:0] temp8;
 wire [21:0] temp9;
 wire [22:0] temp10;
 wire [24:0] temp11;
 assign temp0   = {1'b0,Ext_Mant_A[MANT_WIDTH]} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-1];
 assign temp1   = {1'b0,temp0} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-3];
 assign temp2   = temp1 + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-4];
 assign temp3   = temp2 + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-5];
 assign temp4   = {3'd0,temp3} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-9];
 assign temp5   = {1'b0,temp4} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-11];
 assign temp6   = {1'b0,temp5} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-13];
 assign temp7   = {1'b0,temp6} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-15];
 assign temp8   = {3'd0,temp7} + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-19];
 assign temp9   = temp8 + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-20];
 assign temp10  = temp9 + Ext_Mant_A[MANT_WIDTH:MANT_WIDTH-21];
 assign temp11  = {1'b0,temp10} + Ext_Mant_A[MANT_WIDTH:0];
  assign A_B_mul_compare   = temp11;
 //Ext_Mant_A * 24'hb8aa3b;
 assign A_B_chop  = A_B_mul_compare;
 assign shift     = A_B_chop[MANT_WIDTH+1];
 ////////normalization///////////////////////////////////////
assign Zero_flag = (Expo_A==0);
assign Inf_flag  = (Expo_A ==255)|((Expo_A==254)&(shift==1));
assign flag      = Zero_flag | Inf_flag;
assign Expo_norm_0 = shift? Expo_A+1: Expo_A;
assign Mant_norm_0 = shift? A_B_chop[MANT_WIDTH:1]:A_B_chop[MANT_WIDTH-1:0];
assign Result = {sign_A,(flag ? Expo_A : Expo_norm_0[EXPO_WIDTH-1:0]),((flag)?23'd0:Mant_norm_0[MANT_WIDTH-1:0])};
endmodule