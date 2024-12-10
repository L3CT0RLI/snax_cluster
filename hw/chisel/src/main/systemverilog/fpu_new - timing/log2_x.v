module log2_X #(
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
    input                     clk,
    input                     rst_n,
    input                     en,
    input                     vld_in,
    output                    vld_out
 );
 
wire overflow;
wire [MANT_WIDTH-1:0] mant_A;
wire [DATA_WIDTH-2:MANT_WIDTH] expo_A;
wire signed[EXPO_WIDTH-1:0] expo_A_minus_127;
wire signed[EXPO_WIDTH-1:0] expo_127_minus_A;
wire expo_sign;
wire [$clog2(LUT_SIZE)-1:0] n_a,n_b;
wire [$clog2(LUT_SIZE)-1:0] n_b_reg0;
wire      [LUT_BITS-1:0]                   q_a;
wire       [LUT_BITS-1:0]                   q_b;
wire      [LUT_BITS-1:0]                   y_a;
wire       [LUT_BITS-1:0]                   y_b;
wire we;
wire signed[MANT_WIDTH:0] M_plus_Ya;
wire signed[MANT_WIDTH-$clog2(LUT_SIZE):0] M_minus_Xa;
wire  signed     [10:0]                          Yb_minus_Ya;
wire  signed     [15:0]                          Yb_minus_Ya_temp;
wire  signed     [DATA_WIDTH-2:0]                          mult_result;
wire  signed     [DATA_WIDTH-13:0]            mult_result_set;
wire  signed     [MANT_WIDTH:0]               result_real;
wire              [WIDTH-1:0]                 Adder_op1_pre;
wire              [WIDTH-1:0]                 Adder_op1;
wire              [WIDTH-1:0]                 Adder_op2;
wire              [$clog2(WIDTH)-1:0]         shift_bits;  
wire              [WIDTH-1:0]                 Adder_Result ;  
wire              [WIDTH-1:0]                 Adder_Result_shifted ;  
wire              [MANT_WIDTH-1:0]                 Mant_normed ;  
wire              [EXPO_WIDTH-1:0]            Expo_normed ;    
wire             zero_flag,zero_flag_reg3;
wire              inf_flag, inf_flag_reg3;
wire shift_right;

/////////////////////////////////////
wire en_stage_0,en_stage_1,en_stage_2,en_stage_3,en_stage_4;
wire vld_in_reg0,vld_in_reg1,vld_in_reg2,vld_in_reg3,vld_in_reg4;
assign en_stage_0 = en;// & vld_in;
assign en_stage_1 = en;// & vld_in_reg0;
assign en_stage_2 = en;// & vld_in_reg1;
assign en_stage_3 = en;// & vld_in_reg2;
assign en_stage_4 = en;// & vld_in_reg3;
///////////pipelines//////////////////////////////////////////////
wire     [DATA_WIDTH-1:0]          Oprand_A_reg0;
dff_en #(.WIDTH(DATA_WIDTH))  dff_Oprand_A_reg0 (Oprand_A, clk, en_stage_0, rst_n, Oprand_A_reg0);

dff_en #(.WIDTH($clog2(LUT_SIZE)))  dff_n_b (n_b, clk, en_stage_0, rst_n,n_b_reg0);


dff_en #(.WIDTH(1)) dff_vld_0 (vld_in,clk,en_stage_0,rst_n,vld_in_reg0);
/////////////////////////////////////////////////////////////////////

wire     [LUT_BITS-1:0]          y_a_reg1;
dff_en #(.WIDTH(LUT_BITS))  dff_y_a_reg1 (y_a, clk, en_stage_1, rst_n, y_a_reg1);

wire     [MANT_WIDTH-1:0]          mant_A_reg1;
dff_en #(.WIDTH(MANT_WIDTH))  dff_mant_A_reg1 (mant_A, clk, en_stage_1, rst_n, mant_A_reg1);
wire     [EXPO_WIDTH-1:0]          expo_A_reg1;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_reg1 (expo_A, clk, en_stage_1, rst_n, expo_A_reg1);

dff_en #(.WIDTH(1)) dff_vld_1 (vld_in_reg0,clk,en_stage_1,rst_n,vld_in_reg1);
///////////////////////////////////////////////////////////
wire     [EXPO_WIDTH-1:0]          expo_A_reg2;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_reg2 (expo_A_reg1, clk, en_stage_2, rst_n, expo_A_reg2);

wire signed[MANT_WIDTH:0] M_plus_Ya_reg2;
dff_en #(.WIDTH(MANT_WIDTH+1))  dff_M_plus_Ya_reg2 (M_plus_Ya, clk, en_stage_2, rst_n, M_plus_Ya_reg2);

dff_en #(.WIDTH(1)) dff_vld_2 (vld_in_reg1,clk,en_stage_2,rst_n,vld_in_reg2);
/////////////////////////////////////////////////////
wire     [EXPO_WIDTH-1:0]          expo_A_reg3;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_reg3 (expo_A_reg2, clk, en_stage_3, rst_n, expo_A_reg3);

wire signed[MANT_WIDTH:0] M_plus_Ya_reg3;
dff_en #(.WIDTH(MANT_WIDTH+1))  dff_M_plus_Ya_reg3 (M_plus_Ya_reg2, clk, en_stage_3, rst_n, M_plus_Ya_reg3);

dff_en #(.WIDTH(1)) dff_vld_3 (vld_in_reg2,clk,en_stage_3,rst_n,vld_in_reg3);
//////////////////////////////////////////////////////////
wire signed[EXPO_WIDTH-1:0] expo_A_minus_127_reg3;
wire              [WIDTH-1:0]                 Adder_op1_reg3;
wire              [WIDTH-1:0]                 Adder_op2_reg3;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_A_minus_127_reg3 (expo_A_minus_127, clk, en_stage_3, rst_n, expo_A_minus_127_reg3);
dff_en #(.WIDTH(WIDTH))  dff_Adder_op1_reg3 (Adder_op1, clk, en_stage_3, rst_n,Adder_op1_reg3);
dff_en #(.WIDTH(WIDTH))  dff_Adder_op2_reg3 (Adder_op2, clk, en_stage_3, rst_n,Adder_op2_reg3);
dff_en #(.WIDTH(1))  dff_zero_flag (zero_flag, clk, en_stage_3, rst_n,zero_flag_reg3);
dff_en #(.WIDTH(1))  dff_inf_flag (inf_flag, clk, en_stage_3, rst_n,inf_flag_reg3);

dff_en #(.WIDTH(1)) dff_vld_4 (vld_in_reg3,clk,en_stage_3,rst_n,vld_in_reg4);
/////////////////////////////////////////////////////////////////
wire     [DATA_WIDTH-1:0]  Result_D;
dff_en #(.WIDTH(DATA_WIDTH))  dff_Result_reg (Result_D, clk, en_stage_4, rst_n, Result);

dff_en #(.WIDTH(1)) dff_vld_out (vld_in_reg4,clk,en_stage_4,rst_n,vld_out);
//////////////////////////////////////
assign we = 0;

assign expo_A           = Oprand_A_reg0[DATA_WIDTH-2:MANT_WIDTH];
assign expo_A_minus_127 = expo_A_reg3 - 127;
assign expo_127_minus_A = 127 - expo_A_reg3;
assign expo_sign        = expo_A_minus_127[EXPO_WIDTH-1];

 assign mant_A = Oprand_A_reg0[MANT_WIDTH-1:0];
 assign n_b    = Oprand_A[MANT_WIDTH-1:MANT_WIDTH-5];
 assign n_a    = n_b-1;
 
 assign M_plus_Ya   = mant_A_reg1 + {y_a_reg1[LUT_BITS-1:0],7'd0};
 assign M_minus_Xa  = {1'b0,mant_A[MANT_WIDTH-6:0]};
 assign Yb_minus_Ya = Yb_minus_Ya_temp[10:0];
 assign Yb_minus_Ya_temp =y_b -y_a;
 assign y_a         = (n_b_reg0==0) ? 0 : q_a;
 assign y_b         = q_b;
 //assign mult_result = Yb_minus_Ya * M_minus_Xa;

 assign mult_result_set = mult_result[DATA_WIDTH-2:11];
 assign result_real     = {{4{mult_result_set[DATA_WIDTH-13]}},mult_result_set} + M_plus_Ya_reg3;

 assign Adder_op1_pre = {{8{result_real[MANT_WIDTH]}},result_real[MANT_WIDTH:0]};
 assign Adder_op2     = {1'b0,(expo_sign?expo_127_minus_A[EXPO_WIDTH-1:0]: expo_A_minus_127[EXPO_WIDTH-1:0]),23'd0};
 assign Adder_op1     = expo_sign? ~Adder_op1_pre : Adder_op1_pre;
 assign zero_flag     = (expo_A_reg3 == 0);
 assign inf_flag     = (expo_A_reg3 == 255);
 assign overflow = zero_flag_reg3|inf_flag_reg3;
  lza_log2 #(
    .WIDTH ( WIDTH ))
 u_lza_log2 (
    .A                       ( Adder_op1_reg3           [WIDTH-1:0]         ),
    .B                       ( Adder_op2_reg3           [WIDTH-1:0]         ),
    .C_in                    ( expo_A_minus_127_reg3[EXPO_WIDTH-1]     ),

    .shift_bits              ( shift_bits  [$clog2(WIDTH)-1:0] ),
    .shift_right             ( shift_right                      ),
    .Result                  ( Adder_Result      [WIDTH-1:0]         )
);

int_multiplier_csa_12 #(
    .WIDTH_A ( 19 ),
    .WIDTH_B ( 12 ))
 u_int_multiplier_csa_12 (
    .Operand_A               ( M_minus_Xa                       ),
    .Operand_B               ( {Yb_minus_Ya[10],Yb_minus_Ya[10:0]} ),
    .Enable                  ( en                               ),
    .clk                     ( clk                              ),
    .rst_n                   ( rst_n                            ),

    .Result                  ( mult_result     [30:0]           )
);

assign Adder_Result_shifted = shift_right ? (Adder_Result>>shift_bits) : (Adder_Result<<shift_bits);
assign Mant_normed          = Adder_Result_shifted[MANT_WIDTH-1:0];
assign Expo_normed          = shift_right ? (127 + {3'd0,shift_bits}) : ({3'b011,~shift_bits[$clog2(WIDTH)-1:0]});
assign Result_D               = {(overflow? (zero_flag_reg3): expo_A_minus_127_reg3[EXPO_WIDTH-1]), ((inf_flag_reg3|zero_flag_reg3) ? 8'd255: ((Adder_Result==0))? 8'd0: Expo_normed[EXPO_WIDTH-1:0]), (overflow ? 23'd0:Mant_normed[MANT_WIDTH-1:0])};
 dual_port_ram_log #(
    .ADDR_WIDTH ( $clog2(LUT_SIZE) ),
    .DATA_WIDTH ( LUT_BITS ))
 u_dual_port_ram_log (
    .clk                     ( clk                      ),
    .addr_a                  ( n_a  [$clog2(LUT_SIZE)-1:0] ),
    .addr_b                  ( n_b  [$clog2(LUT_SIZE)-1:0] ),
    .data_a                  ( 'd0                        ),
    .data_b                  ( 'd0                        ),
    .we_a                    ( we                     ),
    .we_b                    ( we                     ),
    .rst_n                   (rst_n),
    .q_a                     ( q_a     [LUT_BITS-1:0]           ),
    .q_b                     ( q_b     [LUT_BITS-1:0]           )
);
endmodule
