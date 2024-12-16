module _2_power_X #(
        parameter DATA_WIDTH      = 32,
        parameter EXPO_WIDTH      = 8,
        parameter MANT_WIDTH      = 23,
        parameter WIDTH           = 32,
        parameter INPUT_INT_WIDTH = 7,
        parameter LUT_SIZE        = 32,
        parameter LUT_BITS        = 16
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A,
    output  [DATA_WIDTH-1:0]  Result,
    input clk,
    input en,
    input rst_n,
    input vld_in,
    output vld_out
 );

wire en_stage_0,en_stage_1,en_stage_2,en_stage_3,en_stage_4,en_stage_5;
wire vld_in_reg0,vld_in_reg1,vld_in_reg2,vld_in_reg3,vld_in_reg4;
assign en_stage_0 = en;// & vld_in;     
assign en_stage_1 = en;// & vld_in_reg0;
assign en_stage_2 = en;// & vld_in_reg1;
assign en_stage_3 = en;// & vld_in_reg2;
assign en_stage_4 = en;// & vld_in_reg3;
assign en_stage_5 = en;// & vld_in_reg4;

wire [0:0]                                   sign_A;
wire [EXPO_WIDTH-1:0]                        expo_A;
wire [MANT_WIDTH:0]                          real_A;
wire signed[EXPO_WIDTH-1:0]                  real_expo_A;
wire signed[EXPO_WIDTH-1:0]                  real_expo_A_com;
wire                                         real_expo_A_smaller_than_zero;
wire                                         overflow_flag;
wire                                         zero_flag;
wire                                         inf_flag;
wire                                         one_flag;
wire [4:0]                                   shift_bits;
wire [MANT_WIDTH+7:0]                        shifted_real_A;
wire [7:0]                                   int_A;
wire [MANT_WIDTH:0]                          frac_A;
wire [$clog2(LUT_SIZE)-1:0]                  n_a,n_b;
wire      [LUT_BITS-1:0]                     q_a2;
wire      [LUT_BITS-1:0]                     q_b2;
wire      [LUT_BITS-1:0]                     y_a;
wire      [LUT_BITS-1:0]                     y_b;
wire signed [10:0]                           y_a_minus_y_b;
wire signed [MANT_WIDTH:0]                   M_minus_Cn;    
wire signed [MANT_WIDTH-$clog2(LUT_SIZE)-1:0]SM_minus_n; 
wire signed [DATA_WIDTH-3:0]                 mult_result;
wire signed [DATA_WIDTH-14:0]                mult_result_set;
wire [$clog2(LUT_SIZE)-1:0]                  addr_a2,addr_b2;
wire  signed     [MANT_WIDTH:0]              result_real;
wire  [EXPO_WIDTH-1:0]                       expo_result;
wire  [DATA_WIDTH-1:0]                       Result_normal;

/////////////////////////////pipeline///////////////////////////////////////


/////////////////////////////stage1 ///////////////////////////////////////////
wire     [EXPO_WIDTH-1:0]          expo_A_reg0;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_reg0 (expo_A, clk, en_stage_0, rst_n, expo_A_reg0);
wire               sign_A_reg0;
dff_en #(.WIDTH(1))  dff_sign_A_reg0 (sign_A, clk, en_stage_0, rst_n, sign_A_reg0);
wire     [MANT_WIDTH+7:0]          shifted_real_A_reg0;
dff_en #(.WIDTH(MANT_WIDTH+8))  dff_shifted_real_A_reg0 (shifted_real_A, clk, en_stage_0, rst_n, shifted_real_A_reg0);
wire signed[EXPO_WIDTH-1:0]                  real_expo_A_reg0;
wire signed[EXPO_WIDTH-1:0]                  real_expo_A_com_reg0;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_real_expo_A_reg0 (real_expo_A,clk,en_stage_0,rst_n,real_expo_A_reg0);
dff_en #(.WIDTH(EXPO_WIDTH)) dff_real_expo_A_com_reg0 (real_expo_A_com,clk,en_stage_0,rst_n,real_expo_A_com_reg0);

dff_en #(.WIDTH(1)) dff_vld_0 (vld_in,clk,en_stage_0,rst_n,vld_in_reg0);
/////////////////////////////////////////////////////////////////////////////////
wire [MANT_WIDTH:0]                          frac_A_reg1;
dff_en #(.WIDTH(MANT_WIDTH+1)) dff_frac_A_reg1 (frac_A,clk,en_stage_1,rst_n,frac_A_reg1);
wire [MANT_WIDTH+7:0]                        shifted_real_A_reg1;
dff_en #(.WIDTH(MANT_WIDTH+8)) dff_shifted_real_A_reg1 (shifted_real_A_reg0,clk,en_stage_1,rst_n,shifted_real_A_reg1);
wire     [EXPO_WIDTH-1:0]          expo_A_reg1;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_reg1 (expo_A_reg0, clk, en_stage_1, rst_n, expo_A_reg1);
wire               sign_A_reg1;
dff_en #(.WIDTH(1))  dff_sign_A_reg1 (sign_A_reg0, clk, en_stage_1, rst_n, sign_A_reg1);
wire signed[EXPO_WIDTH-1:0]         real_expo_A_reg1;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_real_expo_A_reg1 (real_expo_A_reg0,clk,en_stage_1,rst_n,real_expo_A_reg1);
wire signed[EXPO_WIDTH-1:0]         real_expo_A_com_reg1;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_real_expo_A_com_reg1 (real_expo_A_com_reg0,clk,en_stage_1,rst_n,real_expo_A_com_reg1);

dff_en #(.WIDTH(1)) dff_vld_1 (vld_in_reg0,clk,en_stage_1,rst_n,vld_in_reg1);
///////////////////////////////////////////////////////////////////////////////////
wire [MANT_WIDTH:0]                          frac_A_reg2;
dff_en #(.WIDTH(MANT_WIDTH+1)) dff_frac_A_reg2 (frac_A_reg1,clk,en_stage_2,rst_n,frac_A_reg2);

wire      [LUT_BITS-1:0]                     y_a_reg2;
dff_en #(.WIDTH(LUT_BITS)) dff_y_a_reg2 (y_a,clk,en_stage_2,rst_n,y_a_reg2);

wire  [EXPO_WIDTH-1:0]                       expo_result_reg2;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_expo_result_reg2 (expo_result,clk,en_stage_2,rst_n,expo_result_reg2);

wire inf_flag_part_reg2;
dff_en #(.WIDTH(1)) dff_inf_flag_part_reg2 (!sign_A_reg1,clk,en_stage_2,rst_n,inf_flag_part_reg2);

wire zero_flag_part_reg2;
dff_en #(.WIDTH(1)) dff_zero_flag_part_reg2 ((overflow_flag)|(expo_A_reg1==255),clk,en_stage_2,rst_n,zero_flag_part_reg2);

wire sign_A_reg2;
dff_en #(.WIDTH(1)) dff_sign_A_reg2 (sign_A_reg1,clk,en_stage_2,rst_n,sign_A_reg2);


wire one_flag_reg2;
dff_en #(.WIDTH(1)) dff_one_flag_reg2 (one_flag,clk,en_stage_2,rst_n,one_flag_reg2);

dff_en #(.WIDTH(1)) dff_vld_2 (vld_in_reg1,clk,en_stage_2,rst_n,vld_in_reg2);
/////////////////////////////////////////////////////////////////
wire signed [MANT_WIDTH:0]                   M_minus_Cn_reg3;  
dff_en #(.WIDTH(MANT_WIDTH+1)) dff_M_minus_Cn_reg3 (M_minus_Cn,clk,en_stage_3,rst_n,M_minus_Cn_reg3);

wire  [EXPO_WIDTH-1:0]                       expo_result_reg3;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_expo_result_reg3 (expo_result_reg2,clk,en_stage_3,rst_n,expo_result_reg3);

wire inf_flag_part_reg3;
dff_en #(.WIDTH(1)) dff_inf_flag_part_reg3 (inf_flag_part_reg2,clk,en_stage_3,rst_n,inf_flag_part_reg3);

wire zero_flag_part_reg3;
dff_en #(.WIDTH(1)) dff_zero_flag_part_reg3 (zero_flag_part_reg2,clk,en_stage_3,rst_n,zero_flag_part_reg3);

wire sign_A_reg3;
dff_en #(.WIDTH(1)) dff_sign_A_reg3 (sign_A_reg2,clk,en_stage_3,rst_n,sign_A_reg3);


wire one_flag_reg3;
dff_en #(.WIDTH(1)) dff_one_reg3 (one_flag_reg2,clk,en_stage_3,rst_n,one_flag_reg3);

dff_en #(.WIDTH(1)) dff_vld_3 (vld_in_reg2,clk,en_stage_3,rst_n,vld_in_reg3);
///////////////////////////////////////////////////////////////////
wire signed [MANT_WIDTH:0]                   M_minus_Cn_reg4;  
dff_en #(.WIDTH(MANT_WIDTH+1)) dff_M_minus_Cn_reg4 (M_minus_Cn_reg3,clk,en_stage_4,rst_n,M_minus_Cn_reg4);

wire  [EXPO_WIDTH-1:0]                       expo_result_reg4;
dff_en #(.WIDTH(EXPO_WIDTH)) dff_expo_result_reg4 (expo_result_reg3,clk,en_stage_4,rst_n,expo_result_reg4);

wire inf_flag_part_reg4;
dff_en #(.WIDTH(1)) dff_inf_flag_part_reg4 (inf_flag_part_reg3,clk,en_stage_4,rst_n,inf_flag_part_reg4);

wire zero_flag_part_reg4;
dff_en #(.WIDTH(1)) dff_zero_flag_part_reg4 (zero_flag_part_reg3,clk,en_stage_4,rst_n,zero_flag_part_reg4);

wire sign_A_reg4;
dff_en #(.WIDTH(1)) dff_sign_A_reg4 (sign_A_reg3,clk,en_stage_4,rst_n,sign_A_reg4);


wire one_flag_reg4;
dff_en #(.WIDTH(1)) dff_one_reg4 (one_flag_reg3,clk,en_stage_4,rst_n,one_flag_reg4);

dff_en #(.WIDTH(1)) dff_vld_4 (vld_in_reg3,clk,en_stage_4,rst_n,vld_in_reg4);
//////////////////////////////////////////////////////////////////

wire [DATA_WIDTH-1:0]Result_D;
dff_en #(.WIDTH(DATA_WIDTH)) dff_Result (Result_D,clk,en_stage_5,rst_n,Result);

dff_en #(.WIDTH(1)) dff_vld_out (vld_in_reg4,clk,en_stage_5,rst_n,vld_out);

assign sign_A           =  Oprand_A [DATA_WIDTH-1];
assign expo_A           =  Oprand_A [DATA_WIDTH-2: MANT_WIDTH];
assign real_A           =  {1'b1,Oprand_A [MANT_WIDTH-1:0]};
assign real_expo_A      =  expo_A - 8'd127;
assign real_expo_A_com  =  8'd127 - expo_A;
assign real_expo_A_smaller_than_zero  = real_expo_A[EXPO_WIDTH-1];

assign overflow_flag    =  (real_expo_A_reg1>6);
assign inf_flag         =  (zero_flag_part_reg4) & (!sign_A_reg4);
assign zero_flag        =  (zero_flag_part_reg4) & (sign_A_reg4);
assign one_flag         =  (real_expo_A_reg1[EXPO_WIDTH-1])&(real_expo_A_com_reg1 >23);
assign shift_bits       =  real_expo_A_smaller_than_zero ? real_expo_A_com [4:0] :real_expo_A [4:0];
assign shifted_real_A   =  real_expo_A_smaller_than_zero ? ({7'd0,real_A} >> shift_bits) : ({7'd0,real_A} << shift_bits);
assign int_A            =  shifted_real_A_reg1 [MANT_WIDTH+7:MANT_WIDTH];
assign frac_A           =  {1'b0,sign_A_reg0 ? ~shifted_real_A_reg0 [MANT_WIDTH-1:0]:shifted_real_A_reg0 [MANT_WIDTH-1:0]};

assign M_minus_Cn       =  frac_A_reg2 - {y_a_reg2[LUT_BITS-1:0],7'd0};
wire [15:0] y_a_minus_y_b_temp;
assign y_a_minus_y_b_temp =  y_a - y_b;
assign y_a_minus_y_b    =  y_a_minus_y_b_temp[10:0];
assign n_b              =  frac_A[MANT_WIDTH-1:MANT_WIDTH-$clog2(LUT_SIZE)];
assign n_a              =  n_b-1;
assign y_a              = (frac_A_reg1[MANT_WIDTH-1:MANT_WIDTH-$clog2(LUT_SIZE)]==0) ? 0 : q_a2;
assign y_b              =  q_b2;
assign SM_minus_n       =  {frac_A_reg1[MANT_WIDTH-$clog2(LUT_SIZE)-1:0]};

//assign mult_result      = SM_minus_n * y_a_minus_y_b;
assign mult_result_set  = mult_result[DATA_WIDTH-3:11];
assign result_real      = {{5{mult_result[DATA_WIDTH-3]}},mult_result_set} + M_minus_Cn_reg4;
assign expo_result      = (sign_A_reg1 ? ~int_A : int_A) + 127;

assign addr_a2          = n_a;
assign addr_b2          = n_b; 
assign Result_normal    = {1'b0,expo_result_reg4[EXPO_WIDTH-1:0],result_real[MANT_WIDTH-1:0]};
assign Result_D         = zero_flag ? 32'h00000000 : inf_flag ? 32'h7f800000 : one_flag_reg4 ? 32'h3f800000 : Result_normal;


int_multiplier_csa_12 #(
    .WIDTH_A ( 18 ),
    .WIDTH_B ( 12 ))
 u_int_multiplier_csa_12 (
    .Operand_A               ( SM_minus_n                       ),
    .Operand_B               ( {y_a_minus_y_b[10],y_a_minus_y_b[10:0]} ),
    .Enable                  ( en                               ),
    .clk                     ( clk                              ),
    .rst_n                   ( rst_n                            ),

    .Result                  ( mult_result     [29:0]     )
);



dual_port_ram_pos #(
    .ADDR_WIDTH ( $clog2(LUT_SIZE) ),
    .DATA_WIDTH ( LUT_BITS ))
 u_dual_port_ram_pos (
    .clk                     ( clk                      ),
    .addr_a                  ( addr_a2  [$clog2(LUT_SIZE)-1:0] ),
    .addr_b                  ( addr_b2  [$clog2(LUT_SIZE)-1:0] ),
    .data_a                  ( 'd0 ),
    .data_b                  ( 'd0 ),
    .we_a                    ( 0                     ),
    .we_b                    ( 0                     ),
    .rst_n                   ( rst_n                    ),

    .q_a                     ( q_a2     [LUT_BITS-1:0] ),
    .q_b                     ( q_b2     [LUT_BITS-1:0] ),
    .en(en)
);
endmodule
