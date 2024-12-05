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
assign en_stage_0 = en & vld_in;
assign en_stage_1 = en & vld_in_reg0;
assign en_stage_2 = en & vld_in_reg1;
assign en_stage_3 = en & vld_in_reg2;
assign en_stage_4 = en & vld_in_reg3;
assign en_stage_5 = en & vld_in_reg4;

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
    .q_b                     ( q_b2     [LUT_BITS-1:0] )
);
endmodule
module dual_port_ram_log #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 20
) (
    input wire clk,
    input wire rst_n,
    input wire [ADDR_WIDTH-1:0] addr_a,  // Port A address
    input wire [ADDR_WIDTH-1:0] addr_b,  // Port B address
    input wire [DATA_WIDTH-1:0] data_a,  // Port A data input
    input wire [DATA_WIDTH-1:0] data_b,  // Port B data input
    input wire we_a,                     // Port A write enable
    input wire we_b,                     // Port B write enable
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b      // Port B data output
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_log2.mem", ram);
    end

    always @(posedge clk or negedge rst_n) begin
        // Port A operations
        //if (we_a) begin
        //    ram[addr_a] <= data_a;
        //end
                // Port B operations
        //if (we_b) begin
        //    ram[addr_b] <= data_b;
        //end
        if(!rst_n)begin
            q_a <= 0;
            q_b <= 0;
        end
        else begin
            q_a <= ram[addr_a];
            q_b <= ram[addr_b];
        end
    end

endmodule
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
assign en_stage_0 = en & vld_in;
assign en_stage_1 = en & vld_in_reg0;
assign en_stage_2 = en & vld_in_reg1;
assign en_stage_3 = en & vld_in_reg2;
assign en_stage_4 = en & vld_in_reg3;
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
module dff_en #(parameter WIDTH = 1) 
(
  input [WIDTH-1:0] D,
  input CLK, 
  input EN, 
  input RST_N,
  output reg [WIDTH-1:0] Q
);
always @(posedge CLK or negedge RST_N)
  if (!RST_N) begin   
    Q <= 0;    
  end  
  else if(EN)begin
    Q <= D;  
  end
  else begin
    Q<=Q;
  end

endmodule
module fp_32_compare_tree #(
        parameter OP_NUM =4,
        parameter DATA_WIDTH = 32,
        parameter EXPO_WIDTH = 8,
        parameter MANT_WIDTH = 23
) (
        input [OP_NUM * DATA_WIDTH-1:0]      oprands_in,
        input                                valid,
        input                                clk,
        input                                rst_n,
        input                                en,
        output [DATA_WIDTH-1:0]              oprand_max,
        output                               vld_out
);
genvar i;
genvar j;

wire    [DATA_WIDTH-1:0]  oprands   [OP_NUM-1:0];
wire    [DATA_WIDTH-1:0]  oprand_max_D;
wire    [$clog2(OP_NUM):0]  en_stage;
wire     [$clog2(OP_NUM):0]  valid_reg;
//wire     valid_reg0,valid_reg1,valid_reg2,valid_reg3,valid_reg4,valid_reg5;
//assign en_stage[0] = en&valid;
//ssign en_stage[1] = en&valid_reg0;
//assign en_stage[2] = en&valid_reg1;
//assign en_stage[3] = en&valid_reg2;
//assign en_stage[4] = en&valid_reg3;
//assign en_stage[5] = en&valid_reg4;
///////////////////////////////////////////////////////////
//dff_en #(.WIDTH(1)) dff_valid_reg0 (valid,clk,en_stage[0],rst_n,valid_reg0);
//dff_en #(.WIDTH(1)) dff_valid_reg1 (valid_reg0,clk,en_stage[1],rst_n,valid_reg1);
//dff_en #(.WIDTH(1)) dff_valid_reg2 (valid_reg1,clk,en_stage[2],rst_n,valid_reg2);
//dff_en #(.WIDTH(1)) dff_valid_reg3 (valid_reg2,clk,en_stage[3],rst_n,vld_out);
//dff_en #(.WIDTH(1)) dff_valid_reg4 (valid_reg3,clk,en_stage[4],rst_n,vld_out);
//dff_en #(.WIDTH(1)) dff_valid_reg5 (valid_reg4,clk,en_stage[5],rst_n,vld_out);
///////////////////////////////////////////////////////////
assign en_stage[0] = en&valid;
for (i=1;i<=$clog2(OP_NUM);i=i+1)begin:gen_en
        assign en_stage[i] = en&valid_reg[i-1];
end

dff_en #(.WIDTH(1)) dff_valid_reg0 (valid,clk,en_stage[0],rst_n,valid_reg[0]);
generate
        for (i=1;i<=$clog2(OP_NUM);i=i+1)begin:gen_en_vld
             dff_en #(.WIDTH(1)) dff_valid_reg (valid_reg[i-1],clk,en_stage[i],rst_n,valid_reg[i]);   
        
        end
endgenerate

assign vld_out = valid_reg[$clog2(OP_NUM)];

for (i=0;i<OP_NUM;i=i+1)begin
        assign    oprands[i]      =       oprands_in[i*DATA_WIDTH+:DATA_WIDTH];
end
for (i=0;i<$clog2(OP_NUM);i=i+1)begin
        assign    oprands[i]      =       oprands_in[i*DATA_WIDTH+:DATA_WIDTH];
end
generate
for (i=0;i<$clog2(OP_NUM);i=i+1)begin: gen_tree
        wire  [DATA_WIDTH-1:0]  oprands_mid      [(OP_NUM/2)>>i:0];
        wire  [DATA_WIDTH-1:0]  oprands_mid_reg  [(OP_NUM/2)>>i:0];
        for(j=0;j<(OP_NUM/2)>>i;j=j+1)begin: gen_compare
            if(i==0)begin
                fp_compare #(
                        .DATA_WIDTH ( DATA_WIDTH ),
                        .EXPO_WIDTH ( EXPO_WIDTH ),
                        .MANT_WIDTH ( MANT_WIDTH ))
                     u_fp_compare (
                        .oprand_A                ( oprands[2*j] ),
                        .oprand_B                ( oprands[2*j+1] ),
                    
                        .oprand_bigger           ( gen_tree[i].oprands_mid[j] )
                    );
            end
            else begin
                fp_compare #(
                        .DATA_WIDTH ( DATA_WIDTH ),
                        .EXPO_WIDTH ( EXPO_WIDTH ),
                        .MANT_WIDTH ( MANT_WIDTH ))
                     u_fp_compare (
                        .oprand_A                ( gen_tree[i-1].oprands_mid_reg[2*j] ),
                        .oprand_B                ( gen_tree[i-1].oprands_mid_reg[2*j+1] ),
                    
                        .oprand_bigger           ( gen_tree[i].oprands_mid[j] )
                    );
            end
            dff_en #(.WIDTH(DATA_WIDTH)) dff_oprands_mid_reg (gen_tree[i].oprands_mid[j],clk,en_stage[i],rst_n,gen_tree[i].oprands_mid_reg[j]);
        end
    end
    fp_compare #(
        .DATA_WIDTH ( DATA_WIDTH ),
        .EXPO_WIDTH ( EXPO_WIDTH ),
        .MANT_WIDTH ( MANT_WIDTH ))
     u_max_compare (
        .oprand_A                ( oprand_max ),
        .oprand_B                ( gen_tree[$clog2(OP_NUM)-1].oprands_mid_reg[0] ),
    
        .oprand_bigger           ( oprand_max_D )
    );
endgenerate

dff_en #(.WIDTH(DATA_WIDTH)) dff_oprand_max (oprand_max_D,clk,en,rst_n,oprand_max);
endmodule
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
///////////////leading zero/one predictor/////////////////////////////////
module lza_log2 #(
    parameter WIDTH=32
) (
    input   [WIDTH-1:0]         A,
    input   [WIDTH-1:0]         B,
    input                       C_in,
    /*input clk,
    input rst_n,
    input en,*/
    output  [$clog2(WIDTH)-1:0] shift_bits,
    output  [WIDTH-1:0]         Result,
    output shift_right
);
/*wire  [$clog2(WIDTH)-1:0] shift_bits;
wire  [WIDTH-1:0] Result;
wire  [WIDTH-1:0]         A;
wire  [WIDTH-1:0]         B;
wire C_in;
dff_en #(1) u_dff_en_C ( Carry_in, clk, en, rst_n, C_in);
dff_en #(.WIDTH(WIDTH)) u_dff_en_A ( A_in, clk, en, rst_n, A);
dff_en #(.WIDTH(WIDTH)) u_dff_en_B ( B_in, clk, en, rst_n, B);
dff_en #(.WIDTH(WIDTH)) u_dff_result ( Result,clk, en, rst_n, Result_out);
dff_en #(.WIDTH($clog2(WIDTH))) u_dff_bits ( shift_bits,clk, en, rst_n, shift_bits_out);*/
    wire    [WIDTH:0] p,g,z;
    wire    [WIDTH:0]C;
    wire    [WIDTH-1:0] zero_ind;//,one_ind;
    wire    [WIDTH-1:0] zero_F;//,one_F;
    wire    [WIDTH-1:0] zero_location;//,one_location;
    wire    [WIDTH-1:0] final_location;
    wire    [WIDTH-1:0] zero_location_shifted;//,one_location_shifted;
    reg     [$clog2(WIDTH)-1:0] Index;
    wire zero_flag;
    assign  shift_bits = Index;
    genvar i;
    /*assign  C[0]=C_in;
    generate
        for(i=1; i<=WIDTH; i=i+1) begin
            assign C[i] = g[i-1] | (p[i-1] & C[i-1]);
        end
    endgenerate*/
    assign p ={1'b0,A^B};
    assign g ={1'b0,A&B};
    assign z ={1'b0,(~A)&(~B)};
///////////////////////////////////
    assign zero_ind[0] = p[0];
    //assign one_ind[0]  = !p[0];
    generate
        for(i=WIDTH-1;i>0;i=i-1)begin
            assign zero_ind[i] = p[i] ^ (!z[i-1]);
            //assign one_ind[i]  = p[i] ^ (!g[i-1]);
        end
    endgenerate
    assign zero_F   [WIDTH-1] = zero_ind[WIDTH-1];
    //assign one_F    [WIDTH-1] = one_ind[WIDTH-1];
    assign Result             = p[WIDTH-1:0] ^ C[WIDTH-1:0];
    generate
        for(i=1;i<WIDTH;i=i+1)begin
            assign zero_F[WIDTH-1-i] = |zero_ind[WIDTH-1:WIDTH-1-i];  
            //assign one_F[WIDTH-1-i] =  |one_ind[WIDTH-1:WIDTH-1-i];  
        end
    endgenerate

    assign zero_location = ({1'b1,~zero_F[WIDTH-1:1]}) & zero_ind;
    //assign one_location = ({1'b1,~one_F[WIDTH-1:1]}) & one_ind;
    assign zero_flag= ((zero_location&C[WIDTH-1:0])!=0) ;
    //assign one_flag= ((one_location&C)==0) ;
    assign zero_location_shifted = zero_flag ? zero_location <<1 : zero_location;
    //assign one_location_shifted  = one_flag ? one_location <<1 : one_location;
    assign final_location = zero_location_shifted;//Result[31] ? one_location_shifted :zero_location_shifted;

    always @(*) begin
        case (1'b1)
            final_location[0]:  Index = 24;
            final_location[1]:  Index = 23;
            final_location[2]:  Index = 22;
            final_location[3]:  Index = 21;
            final_location[4]:  Index = 20;
            final_location[5]:  Index = 19;
            final_location[6]:  Index = 18;
            final_location[7]:  Index = 17;
            final_location[8]:  Index = 16;
            final_location[9]:  Index = 15;
            final_location[10]: Index = 14;
            final_location[11]: Index = 13;
            final_location[12]: Index = 12;
            final_location[13]: Index = 11;
            final_location[14]: Index = 10;
            final_location[15]: Index = 9;
            final_location[16]: Index = 8;
            final_location[17]: Index = 7;
            final_location[18]: Index = 6;
            final_location[19]: Index = 5;
            final_location[20]: Index = 4;
            final_location[21]: Index = 3;
            final_location[22]: Index = 2;
            final_location[23]: Index = 1 ;
            final_location[24]: Index = 0 ;
            final_location[25]: Index = 1 ;
            final_location[26]: Index = 2 ;
            final_location[27]: Index = 3 ;
            final_location[28]: Index = 4 ;
            final_location[29]: Index = 5 ;
            final_location[30]: Index = 6 ;
            final_location[31]: Index = 7 ;
            default:Index =0;
        endcase
    end

    assign shift_right = (final_location[31:24]!=0);
    wire [7:0] C0,C_10,C_11,C_20,C_21,C_30,C_31;
    wire C_out_0,C_out_10,C_out_11,C_out_20,C_out_21,C_out_30,C_out_31;
    wire C_r1,C_r2,Carry_out;
    assign C_r1 = C_out_0 ? C_out_11 :C_out_10;
    assign C_r2 = C_r1 ? C_out_21 :C_out_20;
    assign Carry_out = C_r2 ? C_out_31:C_out_30;
    assign C={Carry_out, C_r2 ? C_31[7:0] : C_30[7:0],C_r1 ? C_21[7:0] : C_20[7:0], C_out_0 ? C_11[7:0] : C_10[7:0],C0[7:0]};
////////group 1///////////////////////
wire C00,C01,C02,C03,C04,C05,C06,C07;
        assign C00 =C_in;
    assign C01 =g[0] | (p[0] & C00);
    assign C02 =g[1] | (p[1] & C01);
    assign C03 =g[2] | (p[2] & C02);
    assign C04 =g[3] | (p[3] & C03);
    assign C05 =g[4] | (p[4] & C04);
    assign C06 =g[5] | (p[5] & C05);
    assign C07 =g[6] | (p[6] & C06);
    assign C_out_0 = g[7] | (p[7] & C07);
    assign C0 ={C07,C06,C05,C04,C03,C02,C01,C00};

///////group 2//////////////////////////
    /*assign C_10[0] =0;
    assign C_11[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_10[i] = g[i+7] | (p[i+7]&C_10[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_11[i] = g[i+7] | (p[i+7]&C_11[i-1]);
        end
    endgenerate*/
wire C_100;
wire C_110;
wire C_101;
wire C_111;
wire C_102;
wire C_112;
wire C_103;
wire C_113;
wire C_104;
wire C_114;
wire C_105;
wire C_115;
wire C_106;
wire C_116;
wire C_107;
wire C_117;
assign C_10={C_107,C_106,C_105,C_104,C_103,C_102,C_101,C_100};
assign C_11={C_117,C_116,C_115,C_114,C_113,C_112,C_111,C_110};
assign C_100=0;
assign C_110=1;
assign C_101 = g[8] | (p[8]&C_100);
assign C_111 = g[8] | (p[8]&C_110);
assign C_102 = g[9] | (p[9]&C_101);
assign C_112 = g[9] | (p[9]&C_111);
assign C_103 = g[10] | (p[10]&C_102);
assign C_113 = g[10] | (p[10]&C_112);
assign C_104 = g[11] | (p[11]&C_103);
assign C_114 = g[11] | (p[11]&C_113);
assign C_105 = g[12] | (p[12]&C_104);
assign C_115 = g[12] | (p[12]&C_114);
assign C_106 = g[13] | (p[13]&C_105);
assign C_116 = g[13] | (p[13]&C_115);
assign C_107 = g[14] | (p[14]&C_106);
assign C_117 = g[14] | (p[14]&C_116);

    assign C_out_10 = g[15] | (p[15] & C_107);
    assign C_out_11 = g[15] | (p[15] & C_117);
//////////group3///////////////////////////////////
   /*assign C_20[0] =0;
    assign C_21[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_20[i] = g[i+15] | (p[i+15]&C_20[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_21[i] = g[i+15] | (p[i+15]&C_21[i-1]);
        end
    endgenerate*/
wire C_200;
wire C_210;
wire C_201;
wire C_211;
wire C_202;
wire C_212;
wire C_203;
wire C_213;
wire C_204;
wire C_214;
wire C_205;
wire C_215;
wire C_206;
wire C_216;
wire C_207;
wire C_217;
assign C_20={C_207,C_206,C_205,C_204,C_203,C_202,C_201,C_200};
assign C_21={C_217,C_216,C_215,C_214,C_213,C_212,C_211,C_210};
assign C_200=0;
assign C_210=1;
assign C_201 = g[16] | (p[16]&C_200);
assign C_211 = g[16] | (p[16]&C_210);
assign C_202 = g[17] | (p[17]&C_201);
assign C_212 = g[17] | (p[17]&C_211);
assign C_203 = g[18] | (p[18]&C_202);
assign C_213 = g[18] | (p[18]&C_212);
assign C_204 = g[19] | (p[19]&C_203);
assign C_214 = g[19] | (p[19]&C_213);
assign C_205 = g[20] | (p[20]&C_204);
assign C_215 = g[20] | (p[20]&C_214);
assign C_206 = g[21] | (p[21]&C_205);
assign C_216 = g[21] | (p[21]&C_215);
assign C_207 = g[22] | (p[22]&C_206);
assign C_217 = g[22] | (p[22]&C_216);

    assign C_out_20 = g[23] | (p[23] & C_207);
    assign C_out_21 = g[23] | (p[23] & C_217);
//////////group4////////////////////////////////////////
    /*assign C_30[0] =0;
    assign C_31[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_30[i] = g[i+23] | (p[i+23]&C_30[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_31[i] = g[i+23] | (p[i+23]&C_31[i-1]);
        end
    endgenerate*/
    wire C_300;
wire C_310;
wire C_301;
wire C_311;
wire C_302;
wire C_312;
wire C_303;
wire C_313;
wire C_304;
wire C_314;
wire C_305;
wire C_315;
wire C_306;
wire C_316;
wire C_307;
wire C_317;
assign C_30={C_307,C_306,C_305,C_304,C_303,C_302,C_301,C_300};
assign C_31={C_317,C_316,C_315,C_314,C_313,C_312,C_311,C_310};
assign C_300=0;
assign C_310=1;
assign C_301 = g[24] | (p[24]&C_300);
assign C_311 = g[24] | (p[24]&C_310);
assign C_302 = g[25] | (p[25]&C_301);
assign C_312 = g[25] | (p[25]&C_311);
assign C_303 = g[26] | (p[26]&C_302);
assign C_313 = g[26] | (p[26]&C_312);
assign C_304 = g[27] | (p[27]&C_303);
assign C_314 = g[27] | (p[27]&C_313);
assign C_305 = g[28] | (p[28]&C_304);
assign C_315 = g[28] | (p[28]&C_314);
assign C_306 = g[29] | (p[29]&C_305);
assign C_316 = g[29] | (p[29]&C_315);
assign C_307 = g[30] | (p[30]&C_306);
assign C_317 = g[30] | (p[30]&C_316);

    assign C_out_30 = g[31] | (p[31] & C_307);
    assign C_out_31 = g[31] | (p[31] & C_317);
endmodule
    
module fp_32_oprand_tree #(
        parameter DATA_WIDTH = 32,
        parameter EXPO_WIDTH = 8,
        parameter MANT_WIDTH = 23,
        parameter WIDTH      = 32, 
        parameter OP_NUM     = 32
) (
        input [OP_NUM * WIDTH-1:0]           oprands_in,
        input                                valid,
        input                                clk,
        input                                rst_n,
        input                                en,
        output [WIDTH-1:0]                   result,
        output                               done
);
        genvar i;
        genvar j;
        wire [WIDTH-1:0]                                oprands                [OP_NUM-1:0];
        wire [WIDTH-1:0]                                oprands_reg            [OP_NUM-1:0];
        wire [MANT_WIDTH-1:0]                           mants                  [OP_NUM-1:0];
        wire [EXPO_WIDTH-1:0]                           expos                  [OP_NUM-1:0];
        wire                                            signs                  [OP_NUM-1:0];
        wire [MANT_WIDTH-1:0]                           mants_reg                  [OP_NUM-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_reg                  [OP_NUM-1:0];
        wire                                            signs_reg                  [OP_NUM-1:0];
        wire   [EXPO_WIDTH-1:0]                         expos_difference       [OP_NUM-1:0];
        wire   [5:0]                                    mant_shift_bits        [OP_NUM-1:0];
        wire                                            shift_out_of_bound     [OP_NUM-1:0];
        wire [OP_NUM * (MANT_WIDTH+4)-1:0]              ops_in;
        wire [MANT_WIDTH+$clog2(OP_NUM)+3:0]            add_mant_result;
        wire [MANT_WIDTH+$clog2(OP_NUM)+3:0]            add_mant_result_shifted;
        wire [$clog2(WIDTH)-1:0]                        leading_zeros;
        wire [EXPO_WIDTH-1:0]                           expo_offset;
        wire [EXPO_WIDTH:0]                             expo_normed;
        wire [MANT_WIDTH-1:0]                           mant_normed;
 //       wire [EXPO_WIDTH-1:0]                         expos_mid              [$clog2(OP_NUM)-1:0][OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_mid_0              [OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_mid_1              [OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_mid_2              [OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_mid_3              [OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expos_mid_4              [OP_NUM/2-1:0];
        wire [EXPO_WIDTH-1:0]                           expo_max;
        wire [WIDTH-1:0]                                result_D1,result_D2;
/////////////pipeline regs/////////////////////////////////////////
        wire     [EXPO_WIDTH-1:0]          expo_max_reg0,expo_max_reg1,expo_max_reg2,expo_max_reg3,expo_max_reg4,expo_max_reg5,expo_max_reg6;
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg0 (expo_max     , clk, en, rst_n, expo_max_reg0);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg1 (expo_max_reg0, clk, en, rst_n, expo_max_reg1);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg2 (expo_max_reg1, clk, en, rst_n, expo_max_reg2);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg3 (expo_max_reg2, clk, en, rst_n, expo_max_reg3);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg4 (expo_max_reg3, clk, en, rst_n, expo_max_reg4);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg5 (expo_max_reg4, clk, en, rst_n, expo_max_reg5);
                dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_max_reg6 (expo_max_reg5, clk, en, rst_n, expo_max_reg6);

                //dff_en #(.WIDTH(8))  dff_valid_reg ({valid_reg[6:0],valid}, clk, en, rst_n, valid_reg);
                dff_en #(.WIDTH(WIDTH))  dff_result_reg0 (result_D1, clk, en, rst_n, result_D2);
                dff_en #(.WIDTH(WIDTH))  dff_result (result_D2, clk, en, rst_n, result);

                wire     valid_reg0,valid_reg1,valid_reg2,valid_reg3,valid_reg4,valid_reg5,valid_reg6,valid_reg7;
                dff_en #(.WIDTH(1)) dff_valid_reg0 (valid,clk,en,rst_n,valid_reg0);
                dff_en #(.WIDTH(1)) dff_valid_reg1 (valid_reg0,clk,en,rst_n,valid_reg1);
                dff_en #(.WIDTH(1)) dff_valid_reg2 (valid_reg1,clk,en,rst_n,valid_reg2);
                dff_en #(.WIDTH(1)) dff_valid_reg3 (valid_reg2,clk,en,rst_n,valid_reg3);
                dff_en #(.WIDTH(1)) dff_valid_reg4 (valid_reg3,clk,en,rst_n,valid_reg4);
                dff_en #(.WIDTH(1)) dff_valid_reg5 (valid_reg4,clk,en,rst_n,valid_reg5);
                dff_en #(.WIDTH(1)) dff_valid_reg6 (valid_reg5,clk,en,rst_n,valid_reg6);
                dff_en #(.WIDTH(1)) dff_valid_reg7 (valid_reg6,clk,en,rst_n,valid_reg7);
                dff_en #(.WIDTH(1)) dff_done       (valid_reg7,clk,en,rst_n,done);
/////////////////////////////////////////////////////////////////////////////////////////////////
        wire   [MANT_WIDTH+3:0]  mant_adder_in_reg          [OP_NUM-1:0];
        wire   [MANT_WIDTH+3:0]  mant_adder_in              [OP_NUM-1:0];
        for (i=0;i<OP_NUM;i=i+1)begin

                assign mant_adder_in[i] = (expos_reg[i]==0)?0:(shift_out_of_bound[i] ? 0 :({1'b1,mants_reg[i][MANT_WIDTH-1:0],3'b000}>>>(mant_shift_bits[i])));
                dff_en #(.WIDTH(WIDTH))  dff_oprands_reg (oprands[i], clk, en, rst_n,oprands_reg[i]) ;
                dff_en #(.WIDTH(MANT_WIDTH+4))  dff_mant_adder_in_reg (mant_adder_in[i], clk, en, rst_n, mant_adder_in_reg[i]);
        end

///////////////////////////////////////////////////////////////////
        for (i=0;i<OP_NUM;i=i+1)begin
                assign {signs[i],expos[i][EXPO_WIDTH-1:0],mants[i][MANT_WIDTH-1:0]} = oprands[i];
                assign {signs_reg[i],expos_reg[i][EXPO_WIDTH-1:0],mants_reg[i][MANT_WIDTH-1:0]} = oprands_reg[i];
        end

        for(i=0; i<OP_NUM; i=i+1) begin
                assign  oprands[i] = oprands_in[i*WIDTH +: WIDTH];
        end
//////////compare tree/////////////////////////////////////
        assign expo_max = expos_mid_4[0];
 /*       for (i=0;i<$clog2(OP_NUM);i=i+1)begin
            for(j=0;j<(OP_NUM/2)>>i;j=j+1)begin
                if(i==0)begin
                        expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos[2*j]     ),
                            .expo_b                  ( expos[2*j+1]   ),

                            .expo_bigger             ( expos_mid[i][j] )
                        );
                end
                else begin
                        expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos_mid[i-1][2*j]     ),
                            .expo_b                  ( expos_mid[i-1][2*j+1]   ),

                            .expo_bigger             ( expos_mid[i][j] )
                        );
                end
            end
        end*/

        for(j=0;j<(OP_NUM/2);j=j+1)begin
                 expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos[2*j]     ),
                            .expo_b                  ( expos[2*j+1]   ),

                            .expo_bigger             ( expos_mid_0[j] )
                        );
        end

        for(j=0;j<(OP_NUM/4);j=j+1)begin
                 expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos_mid_0[2*j]     ),
                            .expo_b                  ( expos_mid_0[2*j+1]   ),

                            .expo_bigger             ( expos_mid_1[j] )
                        );
        end

        for(j=0;j<(OP_NUM/8);j=j+1)begin
                 expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos_mid_1[2*j]     ),
                            .expo_b                  ( expos_mid_1[2*j+1]   ),

                            .expo_bigger             ( expos_mid_2[j] )
                        );
        end

        for(j=0;j<(OP_NUM/16);j=j+1)begin
                 expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos_mid_2[2*j]     ),
                            .expo_b                  ( expos_mid_2[2*j+1]   ),

                            .expo_bigger             ( expos_mid_3[j] )
                        );
        end

        for(j=0;j<(OP_NUM/32);j=j+1)begin
                 expo_compare #(.EXPO_WIDTH ( EXPO_WIDTH ))
                         u_expo_compare (
                            .expo_a                  ( expos_mid_3[2*j]     ),
                            .expo_b                  ( expos_mid_3[2*j+1]   ),

                            .expo_bigger             ( expos_mid_4[j] )
                        );
        end
/////////////////////////genrate all bits should be shifted of all mants/////////////////// 
        assign expo_offset = 5 - {3'd0,leading_zeros};
        assign expo_normed = (add_mant_result==0)?0:(expo_max_reg6 + expo_offset);
        assign add_mant_result_shifted = add_mant_result << leading_zeros;
        assign mant_normed = add_mant_result_shifted[WIDTH-2:WIDTH-MANT_WIDTH-1];
        assign result_D1      = {1'b0,expo_normed[EXPO_WIDTH-1:0],mant_normed[MANT_WIDTH-1:0]};

        for (i=0;i<OP_NUM;i=i+1)begin
                assign expos_difference[i] = expo_max_reg0 - expos_reg[i];
                assign mant_shift_bits[i] = expos_difference[i][5:0];
                assign shift_out_of_bound [i] = (expos_difference[i]>=24);
                assign ops_in[i*(MANT_WIDTH+4)+:(MANT_WIDTH+4)]    =     mant_adder_in_reg[i];
        end
////////////////////////adding all mants/////////////////////////////////////////////////////////////////////
        CSA_adder_gen #(
            .OP_WIDTH ( MANT_WIDTH+4 ),
            .OP_NUM   ( OP_NUM   ))
         u_CSA_adder_gen (
            .ops_in                  ( ops_in  [OP_NUM * (MANT_WIDTH+4)-1:0]                               ),
            .shift_bits_out          ( leading_zeros  [$clog2(WIDTH)-1:0]                                  ),
            .result                  ( add_mant_result  [MANT_WIDTH+$clog2(OP_NUM)+3:0]                         ),
            .rst_n(rst_n),
            .clk  (clk  ),
            .en   (en   )
        );

endmodule
module dual_port_ram_pos #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 20
) (
    input wire clk,
    input wire [ADDR_WIDTH-1:0] addr_a,  // Port A address
    input wire [ADDR_WIDTH-1:0] addr_b,  // Port B address
    input wire [DATA_WIDTH-1:0] data_a,  // Port A data input
    input wire [DATA_WIDTH-1:0] data_b,  // Port B data input
    input wire we_a,                     // Port A write enable
    input wire we_b,                     // Port B write enable
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b,      // Port B data output
    input rst_n
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_exp_pos.mem", ram);
    end

    always @(posedge clk) begin
        if(!rst_n)begin
            q_a <= 0;
            q_b <= 0;
        end
        else begin
            q_a <= ram[addr_a];
            q_b <= ram[addr_b];
        end
    end

endmodule
///////////////leading zero/one predictor/////////////////////////////////
module lza_fp_tree #(
    parameter WIDTH=32
) (
    input   [WIDTH-1:0]         A_in,
    input   [WIDTH-1:0]         B_in,
    input                       Carry_in,
    input clk,
    input rst_n,
    input en,
    output  [$clog2(WIDTH)-1:0] shift_bits_out,
    output  [WIDTH-1:0]         Result_out
);
wire  [$clog2(WIDTH)-1:0] shift_bits;
wire  [WIDTH-1:0] Result;
wire  [WIDTH-1:0]         A;
wire  [WIDTH-1:0]         B;
wire C_in;
/*dff_en #(1) u_dff_en_C ( Carry_in, clk, en, rst_n, C_in);
dff_en #(.WIDTH(WIDTH)) u_dff_en_A ( A_in, clk, en, rst_n, A);
dff_en #(.WIDTH(WIDTH)) u_dff_en_B ( B_in, clk, en, rst_n, B);
dff_en #(.WIDTH(WIDTH)) u_dff_result ( Result,clk, en, rst_n, Result_out);
dff_en #(.WIDTH($clog2(WIDTH))) u_dff_bits ( shift_bits,clk, en, rst_n, shift_bits_out);*/
assign C_in = Carry_in;
assign A = A_in;
assign B = B_in;
assign Result_out = Result;
assign shift_bits_out = shift_bits;
//////////////////////////////////////////////////////////////////////// 
    wire    [WIDTH:0] p,g,z;
    wire    [WIDTH:0]C;
    wire    [WIDTH-1:0] zero_ind,one_ind;
    wire    [WIDTH-1:0] zero_F,one_F;
    wire    [WIDTH-1:0] zero_location,one_location;
    wire    [WIDTH-1:0] final_location;
    wire    [WIDTH-1:0] zero_location_shifted,one_location_shifted;
    reg     [$clog2(WIDTH)-1:0] Index;
    assign  shift_bits = Index;
    genvar i;
    /*assign  C[0]=C_in;
    generate
        for(i=1; i<=WIDTH; i=i+1) begin
            assign C[i] = g[i-1] | (p[i-1] & C[i-1]);
        end
    endgenerate*/
    assign p ={1'b0,A^B};
    assign g ={1'b0,A&B};
    assign z ={1'b0,(~A)&(~B)};
///////////////////////////////////
    assign zero_ind[0] = p[0];
    assign one_ind[0]  = !p[0];
    generate
        for(i=WIDTH-1;i>0;i=i-1)begin
            assign zero_ind[i] = p[i] ^ (!z[i-1]);
            assign one_ind[i]  = p[i] ^ (!g[i-1]);
        end
    endgenerate
    assign zero_F   [WIDTH-1] = zero_ind[WIDTH-1];
    assign one_F    [WIDTH-1] = one_ind[WIDTH-1];
    assign Result             = p[WIDTH-1:0] ^ C[WIDTH-1:0];
    generate
        for(i=1;i<WIDTH;i=i+1)begin
            assign zero_F[WIDTH-1-i] = |zero_ind[WIDTH-1:WIDTH-1-i];  
            assign one_F[WIDTH-1-i] =  |one_ind[WIDTH-1:WIDTH-1-i];  
        end
    endgenerate
wire zero_flag;
    assign zero_location = ({1'b1,~zero_F[WIDTH-1:1]}) & zero_ind;
    assign zero_flag= ((zero_location&C[WIDTH-1:0])!=0) ;
    assign zero_location_shifted = zero_flag ? zero_location <<1 : zero_location;
    assign final_location = zero_location_shifted;

    
    always @(*) begin
        case (1'b1)
            final_location[0]:  Index = 0;
            final_location[1]:  Index = 31;
            final_location[2]:  Index = 30;
            final_location[3]:  Index = 29;
            final_location[4]:  Index = 28;
            final_location[5]:  Index = 27;
            final_location[6]:  Index = 26;
            final_location[7]:  Index = 25;
            final_location[8]:  Index = 24;
            final_location[9]:  Index = 23;
            final_location[10]: Index = 22;
            final_location[11]: Index = 21;
            final_location[12]: Index = 20;
            final_location[13]: Index = 19;
            final_location[14]: Index = 18;
            final_location[15]: Index = 17;
            final_location[16]: Index = 16;
            final_location[17]: Index = 15;
            final_location[18]: Index = 14;
            final_location[19]: Index = 13;
            final_location[20]: Index = 12;
            final_location[21]: Index = 11;
            final_location[22]: Index = 10;
            final_location[23]: Index = 9 ;
            final_location[24]: Index = 8 ;
            final_location[25]: Index = 7 ;
            final_location[26]: Index = 6 ;
            final_location[27]: Index = 5 ;
            final_location[28]: Index = 4 ;
            final_location[29]: Index = 3 ;
            final_location[30]: Index = 2 ;
            final_location[31]: Index = 1 ;
            default:Index =0;
            
        endcase
    end


    wire [7:0] C0,C_10,C_11,C_20,C_21,C_30,C_31;
    wire C_out_0,C_out_10,C_out_11,C_out_20,C_out_21,C_out_30,C_out_31;
    wire C_r1,C_r2,Carry_out;
    assign C_r1 = C_out_0 ? C_out_11 :C_out_10;
    assign C_r2 = C_r1 ? C_out_21 :C_out_20;
    assign Carry_out = C_r2 ? C_out_31:C_out_30;
    assign C={Carry_out, C_r2 ? C_31[7:0] : C_30[7:0],C_r1 ? C_21[7:0] : C_20[7:0], C_out_0 ? C_11[7:0] : C_10[7:0],C0[7:0]};
    ////////////////////////////////////////////
    wire C00,C01,C02,C03,C04,C05,C06,C07;
    assign C00 =C_in;
    assign C01 =g[0] | (p[0] & C00);
    assign C02 =g[1] | (p[1] & C01);
    assign C03 =g[2] | (p[2] & C02);
    assign C04 =g[3] | (p[3] & C03);
    assign C05 =g[4] | (p[4] & C04);
    assign C06 =g[5] | (p[5] & C05);
    assign C07 =g[6] | (p[6] & C06);
    assign C_out_0 = g[7] | (p[7] & C07);
    assign C0 ={C07,C06,C05,C04,C03,C02,C01,C00};

///////group 2//////////////////////////
    /*assign C_10[0] =0;
    assign C_11[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_10[i] = g[i+7] | (p[i+7]&C_10[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_11[i] = g[i+7] | (p[i+7]&C_11[i-1]);
        end
    endgenerate*/
wire C_100;
wire C_110;
wire C_101;
wire C_111;
wire C_102;
wire C_112;
wire C_103;
wire C_113;
wire C_104;
wire C_114;
wire C_105;
wire C_115;
wire C_106;
wire C_116;
wire C_107;
wire C_117;
assign C_10={C_107,C_106,C_105,C_104,C_103,C_102,C_101,C_100};
assign C_11={C_117,C_116,C_115,C_114,C_113,C_112,C_111,C_110};
assign C_100=0;
assign C_110=1;
assign C_101 = g[8] | (p[8]&C_100);
assign C_111 = g[8] | (p[8]&C_110);
assign C_102 = g[9] | (p[9]&C_101);
assign C_112 = g[9] | (p[9]&C_111);
assign C_103 = g[10] | (p[10]&C_102);
assign C_113 = g[10] | (p[10]&C_112);
assign C_104 = g[11] | (p[11]&C_103);
assign C_114 = g[11] | (p[11]&C_113);
assign C_105 = g[12] | (p[12]&C_104);
assign C_115 = g[12] | (p[12]&C_114);
assign C_106 = g[13] | (p[13]&C_105);
assign C_116 = g[13] | (p[13]&C_115);
assign C_107 = g[14] | (p[14]&C_106);
assign C_117 = g[14] | (p[14]&C_116);

    assign C_out_10 = g[15] | (p[15] & C_107);
    assign C_out_11 = g[15] | (p[15] & C_117);
//////////group3///////////////////////////////////
   /*assign C_20[0] =0;
    assign C_21[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_20[i] = g[i+15] | (p[i+15]&C_20[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_21[i] = g[i+15] | (p[i+15]&C_21[i-1]);
        end
    endgenerate*/
wire C_200;
wire C_210;
wire C_201;
wire C_211;
wire C_202;
wire C_212;
wire C_203;
wire C_213;
wire C_204;
wire C_214;
wire C_205;
wire C_215;
wire C_206;
wire C_216;
wire C_207;
wire C_217;
assign C_20={C_207,C_206,C_205,C_204,C_203,C_202,C_201,C_200};
assign C_21={C_217,C_216,C_215,C_214,C_213,C_212,C_211,C_210};
assign C_200=0;
assign C_210=1;
assign C_201 = g[16] | (p[16]&C_200);
assign C_211 = g[16] | (p[16]&C_210);
assign C_202 = g[17] | (p[17]&C_201);
assign C_212 = g[17] | (p[17]&C_211);
assign C_203 = g[18] | (p[18]&C_202);
assign C_213 = g[18] | (p[18]&C_212);
assign C_204 = g[19] | (p[19]&C_203);
assign C_214 = g[19] | (p[19]&C_213);
assign C_205 = g[20] | (p[20]&C_204);
assign C_215 = g[20] | (p[20]&C_214);
assign C_206 = g[21] | (p[21]&C_205);
assign C_216 = g[21] | (p[21]&C_215);
assign C_207 = g[22] | (p[22]&C_206);
assign C_217 = g[22] | (p[22]&C_216);

    assign C_out_20 = g[23] | (p[23] & C_207);
    assign C_out_21 = g[23] | (p[23] & C_217);
//////////group4////////////////////////////////////////
    /*assign C_30[0] =0;
    assign C_31[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_30[i] = g[i+23] | (p[i+23]&C_30[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_31[i] = g[i+23] | (p[i+23]&C_31[i-1]);
        end
    endgenerate*/
    wire C_300;
wire C_310;
wire C_301;
wire C_311;
wire C_302;
wire C_312;
wire C_303;
wire C_313;
wire C_304;
wire C_314;
wire C_305;
wire C_315;
wire C_306;
wire C_316;
wire C_307;
wire C_317;
assign C_30={C_307,C_306,C_305,C_304,C_303,C_302,C_301,C_300};
assign C_31={C_317,C_316,C_315,C_314,C_313,C_312,C_311,C_310};
assign C_300=0;
assign C_310=1;
assign C_301 = g[24] | (p[24]&C_300);
assign C_311 = g[24] | (p[24]&C_310);
assign C_302 = g[25] | (p[25]&C_301);
assign C_312 = g[25] | (p[25]&C_311);
assign C_303 = g[26] | (p[26]&C_302);
assign C_313 = g[26] | (p[26]&C_312);
assign C_304 = g[27] | (p[27]&C_303);
assign C_314 = g[27] | (p[27]&C_313);
assign C_305 = g[28] | (p[28]&C_304);
assign C_315 = g[28] | (p[28]&C_314);
assign C_306 = g[29] | (p[29]&C_305);
assign C_316 = g[29] | (p[29]&C_315);
assign C_307 = g[30] | (p[30]&C_306);
assign C_317 = g[30] | (p[30]&C_316);

    assign C_out_30 = g[31] | (p[31] & C_307);
    assign C_out_31 = g[31] | (p[31] & C_317);
endmodule
module fifo_out #(
        parameter FIFO_DEPTH = 16,
        parameter DATA_WIDTH = 32
) (
        input clk,
        input rst_n,
        input rd_en,
        input wr_en,
        input [DATA_WIDTH-1:0] data_in,
        output reg[DATA_WIDTH-1:0] data_out,
        output reg full,
        output reg data_valid
);
        reg [$clog2(FIFO_DEPTH):0] wr_cnt,rd_cnt;
        wire[$clog2(FIFO_DEPTH):0] wr_cnt_nxt,rd_cnt_nxt;
        reg [DATA_WIDTH-1:0] ram [0:FIFO_DEPTH-1];
        reg empty;
        //wire[$clog2(FIFO_DEPTH)-1:0] data_num;
        integer i;
        assign wr_cnt_nxt = (wr_en & (!full))? wr_cnt +1'b1:wr_cnt;
        assign rd_cnt_nxt = (rd_en & (!empty))?rd_cnt +1'b1:rd_cnt;

        //assign data_num = (wr_cnt[$clog2(FIFO_DEPTH)]==rd_cnt[$clog2(FIFO_DEPTH)])?(wr_cnt[$clog2(FIFO_DEPTH):0]-rd_cnt[$clog2(FIFO_DEPTH):0]):(FIFO_DEPTH-wr_cnt[$clog2(FIFO_DEPTH):0]+rd_cnt[$clog2(FIFO_DEPTH):0]);
        //assign full=(wr_cnt[$clog2(FIFO_DEPTH)]!=rd_cnt[$clog2(FIFO_DEPTH)])&(wr_cnt[$clog2(FIFO_DEPTH)-1:0]==rd_cnt[$clog2(FIFO_DEPTH)-1:0]);
        //assign empty= (wr_cnt==rd_cnt);


        always @(posedge clk or negedge rst_n) begin
                if(!rst_n)begin
                        empty <= 1'b1;
                end
                else if(wr_cnt_nxt==rd_cnt_nxt)begin
                        empty <= 1'b1;
                end
                else empty <=0;
        end

        always @(posedge clk or negedge rst_n) begin
                if(!rst_n)begin
                        full <= 1'b0;
                end
                else if((wr_cnt_nxt[$clog2(FIFO_DEPTH)]!=rd_cnt_nxt[$clog2(FIFO_DEPTH)])&(wr_cnt_nxt[$clog2(FIFO_DEPTH)-1:0]==rd_cnt_nxt[$clog2(FIFO_DEPTH)-1:0]))begin
                        full <= 1'b1;
                end
                else full <=0;
        end

        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)begin
                        data_out <=0;
                        data_valid <=0;
                end
                else if(rd_en & (!empty))begin
                        data_out <= ram[rd_cnt[$clog2(FIFO_DEPTH)-1:0]];
                        data_valid <= 1;
                end
                else begin
                        data_out <= data_out;
                        data_valid <= 0;
                end
        end

        always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
                for(i=0;i<FIFO_DEPTH;i=i+1)begin
                        ram[i] <= 'd0;
                end
                end
        else begin
                if(wr_en & (!full))begin
                        ram[wr_cnt[$clog2(FIFO_DEPTH)-1:0]] <= data_in;
                end
                else begin
                        for(i=0;i<FIFO_DEPTH;i=i+1)begin
                                ram[i] <= ram[i];
                        end
                end
        end
        end
        
        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)begin
                        rd_cnt <= 'd0;
                end
                else begin
                        rd_cnt <= rd_cnt_nxt;
                end
        end

        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)begin
                        wr_cnt <= 'd0;
                end
                else begin
                        wr_cnt <= wr_cnt_nxt;
                end
        end


endmodule
module CSA_adder_gen #(
    parameter OP_WIDTH = 27,
    parameter OP_NUM = 32
) (
    input [OP_NUM * OP_WIDTH-1:0]    ops_in,
    output [OP_WIDTH+$clog2(OP_NUM)-1:0] result,
    output [$clog2(32)-1:0] shift_bits_out ,
    input    clk,
    input    rst_n,
    input    en
);

genvar i;
genvar j;
genvar idx;
genvar idy;
genvar idz;


wire [OP_WIDTH-1:0]                     pairs [OP_NUM-1:0];
wire [OP_WIDTH+$clog2(OP_NUM)-1:0]      result_D;
wire [$clog2(32)-1:0]                   shift_bits_out_D;
generate
    for(i=0; i<OP_NUM; i=i+1) begin:assign_blocks
       assign  pairs[i] = ops_in[i*OP_WIDTH +: OP_WIDTH];
    end
endgenerate

generate
    for (idx = 0; idx < $clog2(OP_NUM)-1; idx = idx + 1) begin : gen_blocks
        wire [OP_WIDTH+idx:0] in_sigs    [(OP_NUM/2)>>idx:0];
        wire [OP_WIDTH+idx:0] in_sigs_reg[(OP_NUM/2)>>idx:0];
        for(idy = 0; idy < (idx == 0 ? OP_NUM/4 : (OP_NUM/4)>>idx); idy = idy + 1) begin : gen_blocks_in
            if(idx == 0)begin
                csa_42_compress #( .OP_WIDTH(OP_WIDTH) ) u_csa_42_compress_0(
                        .op1  (pairs[4*idy]),
                        .op2  (pairs[4*idy+1]),
                        .op3  (pairs[4*idy+2]),
                        .op4  (pairs[4*idy+3]),
                        .C    (gen_blocks[0].in_sigs[2*idy]),
                        .S    (gen_blocks[0].in_sigs[2*idy+1])
                );
            end
            else begin
                csa_42_compress #( .OP_WIDTH(OP_WIDTH+idx) ) u_csa_42_compress_1(
                        .op1  (gen_blocks[idx-1].in_sigs_reg[4*idy]),
                        .op2  (gen_blocks[idx-1].in_sigs_reg[4*idy+1]),
                        .op3  (gen_blocks[idx-1].in_sigs_reg[4*idy+2]),
                        .op4  (gen_blocks[idx-1].in_sigs_reg[4*idy+3]),
                        .C    (gen_blocks[idx].in_sigs[2*idy]),
                        .S    (gen_blocks[idx].in_sigs[2*idy+1])
                );
            end

            for(idz = 0; idz < 2 ; idz=idz+1)begin:gen_dff0
                dff_en #(.WIDTH(OP_WIDTH+idx+1)) dff_sigs_reg0 (gen_blocks[idx].in_sigs[2*idy+idz],clk,en,rst_n,gen_blocks[idx].in_sigs_reg[2*idy+idz]);
                end
        end
    end
    // CSA output is added to get the final result
    lza_fp_tree #(
    .WIDTH ( OP_WIDTH+$clog2(OP_NUM) ))
 u_lza_fp_tree (
    .A_in                    ( {1'b0,gen_blocks[$clog2(OP_NUM)-2].in_sigs_reg[0]}   ),
    .B_in                    ( {1'b0,gen_blocks[$clog2(OP_NUM)-2].in_sigs_reg[1]}   ),
    .Carry_in                ( 1'b0                                ),
    .clk                     ( clk                                 ),
    .rst_n                   ( rst_n                               ),
    .en                      ( en                                  ),

    .shift_bits_out          ( shift_bits_out_D  [$clog2(32)-1:0] ),
    .Result_out              ( result_D          [OP_WIDTH+$clog2(OP_NUM)-1:0]         )
);

dff_en #(.WIDTH($clog2(32))) dff_shift_bits_out (shift_bits_out_D,clk,en,rst_n,shift_bits_out);
dff_en #(.WIDTH(OP_WIDTH+$clog2(OP_NUM)))              dff_result         (result_D,clk,en,rst_n,result                );
endgenerate

endmodule
module dual_port_ram_gelu #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 20
) (
    input wire clk,
    input wire rst_n,
    input wire [ADDR_WIDTH-1:0] addr_a,  // Port A address
    input wire [ADDR_WIDTH-1:0] addr_b,  // Port B address
    input wire [DATA_WIDTH-1:0] data_a,  // Port A data input
    input wire [DATA_WIDTH-1:0] data_b,  // Port B data input
    input wire we_a,                     // Port A write enable
    input wire we_b,                     // Port B write enable
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b      // Port B data output
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_gelu.mem", ram);
    end

    always @(posedge clk or negedge rst_n) begin
        // Port A operations
        //if (we_a) begin
        //    ram[addr_a] <= data_a;
        //end
                // Port B operations
        //if (we_b) begin
        //    ram[addr_b] <= data_b;
        //end
        if(!rst_n)begin
            q_a <= 0;
            q_b <= 0;
        end
        else begin
            q_a <= ram[addr_a];
            q_b <= ram[addr_b];
        end
    end

endmodule
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
module int_multiplier_csa_12 #(
    parameter WIDTH_A = 18,
    parameter WIDTH_B = 12
) (
    input   [WIDTH_A-1:0]     Operand_A,
    input   [WIDTH_B-1:0]     Operand_B,
    input                   Enable,
    input                   clk,
    input                   rst_n,
    output  [WIDTH_A+WIDTH_B-1:0]   Result
);

wire en;
assign en = Enable;
wire B_minus;
wire B_minus_reg0,B_minus_reg1;
wire   [WIDTH_B-1:0]     Operand_B_sel;
assign B_minus = Operand_B[WIDTH_B-1];
assign Operand_B_sel = B_minus ? ~Operand_B+1 : Operand_B;
dff_en #(.WIDTH(1)) dff_B_sign0(
    .D(B_minus),
    .CLK(clk),
    .RST_N(rst_n),
    .EN(en),  // Assuming 'en' is your enable signal
    .Q(B_minus_reg0)
);

dff_en #(.WIDTH(1)) dff_B_sign1(
    .D(B_minus_reg0),
    .CLK(clk),
    .RST_N(rst_n),
    .EN(en),  // Assuming 'en' is your enable signal
    .Q(B_minus_reg1)
);
//////////////////////////////////////

    wire [WIDTH_A+1:0] layer_0 [WIDTH_B-1:0];
    wire [WIDTH_A+2:0] C_0     [WIDTH_B/3-1:0];
    wire [WIDTH_A+2:0] S_0     [WIDTH_B/3-1:0];
    assign layer_0[0] = Operand_B_sel[0] ? {2'b00,Operand_A[WIDTH_A-1:0]} : 0;
    assign layer_0[1] = Operand_B_sel[1] ? {1'b0,Operand_A[WIDTH_A-1:0],1'b0} : 0;
    assign layer_0[2] = Operand_B_sel[2] ? {Operand_A[WIDTH_A-1:0],2'b00} : 0;

    assign layer_0[3] = Operand_B_sel[3] ? {2'b00,Operand_A[WIDTH_A-1:0]} : 0;
    assign layer_0[4] = Operand_B_sel[4] ? {1'b0,Operand_A[WIDTH_A-1:0],1'b0} : 0;
    assign layer_0[5] = Operand_B_sel[5] ? {Operand_A[WIDTH_A-1:0],2'b00} : 0;

    assign layer_0[6] = Operand_B_sel[6] ? {2'b00,Operand_A[WIDTH_A-1:0]} : 0;
    assign layer_0[7] = Operand_B_sel[7] ? {1'b0,Operand_A[WIDTH_A-1:0],1'b0} : 0;
    assign layer_0[8] = Operand_B_sel[8] ? {Operand_A[WIDTH_A-1:0],2'b00} : 0;

    assign layer_0[9] = Operand_B_sel[9] ? {2'b00,Operand_A[WIDTH_A-1:0]} : 0;
    assign layer_0[10] = Operand_B_sel[10] ? {1'b0,Operand_A[WIDTH_A-1:0],1'b0} : 0;
    assign layer_0[11] = Operand_B_sel[11] ?{Operand_A[WIDTH_A-1:0],2'b00} : 0;

    genvar i;
    generate
        for(i=0;i<WIDTH_B/3;i=i+1)begin: stage0
            csa_3_compress #(
                .OP_WIDTH ( WIDTH_A+2 ))
             u_csa_3_compress (
                .op1                     ( layer_0  [3*i] ),
                .op2                     ( layer_0  [3*i+1] ),
                .op3                     ( layer_0  [3*i+2] ),
            
                .C                       ( C_0    [i] ),
                .S                       ( S_0    [i] )
            );
            
        end
    endgenerate


    ////////////////layer 1/////////////////////////////

    wire [WIDTH_A+5:0] layer_1 [WIDTH_B*2/3-1:0];
    wire [WIDTH_A+6:0] C_1     [WIDTH_B/6-1:0];
    wire [WIDTH_A+6:0] S_1     [WIDTH_B/6-1:0];
    
    assign layer_1 [0] = {3'd0,S_0[0]};
    assign layer_1 [1] = {3'd0,C_0[0]};
    assign layer_1 [2] = {S_0[1],3'd0};
    assign layer_1 [3] = {C_0[1],3'd0};

    assign layer_1 [4] = {3'd0,S_0[2]};
    assign layer_1 [5] = {3'd0,C_0[2]};
    assign layer_1 [6] = {S_0[3],3'd0};
    assign layer_1 [7] = {C_0[3],3'd0};


    generate
        for(i=0;i<WIDTH_B/6;i=i+1)begin: stage1
            csa_42_compress #(
              .OP_WIDTH ( WIDTH_A+6 ))
            u_csa_42_compress (
              .op1                     ( layer_1[4*i] ),
              .op2                     ( layer_1[4*i+1] ),
              .op3                     ( layer_1[4*i+2] ),
              .op4                     ( layer_1[4*i+3] ),
    
              .C                       ( C_1[i] ),
              .S                       ( S_1[i] )
            );
        end
    endgenerate
///////////////////////////////////////////////////////////////////////////
    /////////////////layer 2///////////////////////////////////////////
    wire [WIDTH_A+12:0] layer_2 [WIDTH_B/3-1:0];
    wire [WIDTH_A+13:0] C_2     [WIDTH_B/12-1:0];
    wire [WIDTH_A+13:0] S_2     [WIDTH_B/12-1:0];

    assign layer_2[0] = {6'd0,S_1[0]};
    assign layer_2[1] = {6'd0,C_1[0]};
    
    assign layer_2[2] = {S_1[1],6'd0};
    assign layer_2[3] = {C_1[1],6'd0};

    generate
        for(i=0;i<WIDTH_B/12;i=i+1)begin: stage2
            csa_42_compress #(
              .OP_WIDTH ( WIDTH_A+13 ))
            u_csa_42_compress (
              .op1                     ( layer_2[4*i] ),
              .op2                     ( layer_2[4*i+1] ),
              .op3                     ( layer_2[4*i+2] ),
              .op4                     ( layer_2[4*i+3] ),
    
              .C                       ( C_2[i] ),
              .S                       ( S_2[i] )
            );
        end
    endgenerate
///////////////////////pipeline//////////////////////////////////////////
wire [WIDTH_A+13:0] C_2_reg ;
wire [WIDTH_A+13:0] S_2_reg ;
wire [WIDTH_A+13:0] C_2_reg_2 ;
wire [WIDTH_A+13:0] S_2_reg_2 ;
generate
  for( i=0;i<WIDTH_B/12;i=i+1)begin: stage2_reg
    dff_en #(.WIDTH(WIDTH_A+14)) stage2_dff_C(
        .D(C_2[i]),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(C_2_reg)
    );

    dff_en #(.WIDTH(WIDTH_A+14)) stage2_dff_S(
        .D(S_2[i]),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(S_2_reg)
    );
  end
endgenerate
///////////////////stage 3///////////////////////////////////////////
wire [WIDTH_A+WIDTH_B-1:0] C2_plus_S2_reg;
dff_en #(.WIDTH(WIDTH_A+WIDTH_B)) C2_plus_S2(
        .D(~C_2_reg[WIDTH_A+WIDTH_B-1:0] + ~S_2_reg[WIDTH_A+WIDTH_B-1:0]),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(C2_plus_S2_reg)
    );

    dff_en #(.WIDTH(WIDTH_A+14)) stage3_dff_C2(
        .D(C_2_reg),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(C_2_reg_2)
    );

    dff_en #(.WIDTH(WIDTH_A+14)) stage3_dff_S2(
        .D(S_2_reg),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(S_2_reg_2)
    );
/////////////////////////////////////////////
wire [WIDTH_A+WIDTH_B-1:0] result_D_sel;
assign result_D_sel = B_minus_reg1 ? (C2_plus_S2_reg+2):(C_2_reg_2[WIDTH_A+WIDTH_B-2:0] + S_2_reg_2[WIDTH_A+WIDTH_B-2:0]) ;
dff_en #(.WIDTH(WIDTH_A+WIDTH_B)) result_dff_S(
        .D(result_D_sel[WIDTH_A+WIDTH_B-1:0]),
        .CLK(clk),
        .RST_N(rst_n),
        .EN(en),  // Assuming 'en' is your enable signal
        .Q(Result)
    );




endmodule
module FPU #(
    parameter int UserCsrNum      = 1,
    parameter int DataWidth       = 128,
    parameter int FP_WIDTH        = 32,
    parameter int PE_NUM          = DataWidth/FP_WIDTH,
    parameter int NUM_SOFTMAX_MAX = 128,
    parameter int OUT_BUFFER_DEPTH= NUM_SOFTMAX_MAX/PE_NUM
) (
    input  logic clk_i,
    input  logic rst_ni,
    output logic ext_data_i_ready,
    input  logic ext_data_i_valid,
    input  logic [DataWidth-1:0] ext_data_i_bits,
    input  logic ext_data_o_ready,
    output logic ext_data_o_valid,
    output logic [DataWidth-1:0] ext_data_o_bits,
    input  logic [31:0]ext_csr_i_0,
    input  logic ext_start_i,
    output logic ext_busy_o
);

reg  [5:0]              state                  ;
reg  [5:0]              state_nxt              ;
wire en;
assign     en   = 1;
localparam IDLE =  6'b000001;
localparam MAX_SEEK           = 6'b000010           ;
localparam COMPUTE_EXP_SUM    = 6'b000100           ;
localparam SUM                = 6'b001000           ;
localparam SUM_PHASE2         = 6'b010000           ;
localparam COMPUTE_RESULT     = 6'b100000           ;
  //////////

genvar i;
wire valid_compare;
wire valid_compare_out;
wire vld_PE;
wire vld_PE_out[PE_NUM-1:0];
wire exp_x_minus_xmax_vld_out[PE_NUM-1:0];
wire [FP_WIDTH*PE_NUM-1:0]pe_data_in ;
wire [FP_WIDTH*PE_NUM-1:0]pe_data_out;
wire [FP_WIDTH*PE_NUM-1:0]exp_x_minus_xmax;
wire  [FP_WIDTH-1:0] x_max;
wire [FP_WIDTH*NUM_SOFTMAX_MAX/PE_NUM-1:0]sum_tree_input ;
wire state_sum2_reg;
wire vld_out_sum_tree;
wire pe_x_max_vld;
wire [FP_WIDTH-1:0] result_sum_tree;
wire [5:0]func;
wire [$clog2(NUM_SOFTMAX_MAX/PE_NUM):0]softmax_op_num;
wire out_buffer_empty,out_buffer_full;

reg [$clog2(NUM_SOFTMAX_MAX/PE_NUM):0] cnt;
reg [$clog2(NUM_SOFTMAX_MAX/PE_NUM):0] cnt_1;
reg sum_exp_vld;
reg [FP_WIDTH*NUM_SOFTMAX_MAX/PE_NUM-1:0] sum_result_shifter;
reg vld_sum2;
reg sum_tree_vld_in;
////////////////////////////////////////////
assign func           = ext_csr_i_0[31:26];
assign softmax_op_num = ext_csr_i_0 [25:25-$clog2(NUM_SOFTMAX_MAX/PE_NUM)];
assign pe_data_in = ext_data_i_bits;
//assign ext_data_o_bits  = pe_data_out;
//assign ext_data_o_valid = vld_PE_out[0];
assign vld_PE           = ((state_nxt==MAX_SEEK)|(func[4] !=1'b1))&(ext_data_i_ready&ext_data_i_valid);
assign sum_tree_input = (state == SUM_PHASE2|state == COMPUTE_RESULT)? sum_result_shifter :{exp_x_minus_xmax,896'd0};
assign valid_compare = (state_nxt==MAX_SEEK)&(ext_data_i_ready&ext_data_i_valid);
assign pe_x_max_vld = (state==COMPUTE_EXP_SUM)&(cnt_1!=0);
//////////////////////////////////////////////////////////////////
always @(posedge clk_i or negedge rst_ni)begin
        if(!rst_ni)
                state <= IDLE;
        else
                state <= state_nxt;
end
 
always @(*)begin
        case(state)
                IDLE:begin
                        state_nxt = ((func[4] ==1'b1)&ext_start_i) ? MAX_SEEK: IDLE;
                end
                MAX_SEEK:begin
                        state_nxt = (cnt=='d0) ? COMPUTE_EXP_SUM: MAX_SEEK;
                end
                /*COMPUTE_EXP: begin
                        state_nxt = (exp_x_minus_xmax_vld_out[0]==1'b1) ? SUM: COMPUTE_EXP;
                end*/
                COMPUTE_EXP_SUM:begin
                        state_nxt = (cnt =='d0) ? ((softmax_op_num!=1)?SUM_PHASE2:COMPUTE_RESULT): COMPUTE_EXP_SUM;
                end
                SUM_PHASE2:begin
                        state_nxt = vld_out_sum_tree ? COMPUTE_RESULT: SUM_PHASE2;
                end
                COMPUTE_RESULT:begin
                        state_nxt = (cnt=='d0) ? IDLE: COMPUTE_RESULT;
                end
                default: begin
                        state_nxt = IDLE;
                end
        endcase
end

always @(*)begin
        case(state)
                IDLE: begin
                        sum_tree_vld_in = 0;
                end
                MAX_SEEK: begin
                        sum_tree_vld_in = 0;
                end
                COMPUTE_EXP_SUM: begin
                        sum_tree_vld_in = (exp_x_minus_xmax_vld_out[0]==1'b1);
                end
                /*SUM: begin
                        sum_tree_vld_in = (cnt_1!=0);
                end*/
                SUM_PHASE2: begin
                        sum_tree_vld_in = vld_sum2;
                end
                COMPUTE_RESULT: begin
                        sum_tree_vld_in = 0;
                end
                default: begin
                        sum_tree_vld_in = 0;
                end
        endcase
end

always @(posedge clk_i or negedge rst_ni)begin
        if(!rst_ni)begin

        end
        else begin
                        cnt <= 'd0;  
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d0;
                        cnt_1 <='d0;
                        ext_busy_o<='d0;
        case(state)
        IDLE: begin
                        cnt<= softmax_op_num-1;
                        ext_data_i_ready <= 1;
                        sum_exp_vld<='d0;
                        cnt_1 <='d0;
                        ext_busy_o<='d0;
                end

        MAX_SEEK: begin
                        cnt <= (state_nxt==COMPUTE_EXP_SUM)? softmax_op_num-1 :valid_compare_out ? cnt-1: cnt;
                        ext_data_i_ready <= (state_nxt != COMPUTE_EXP_SUM);
                        sum_exp_vld<='d0;
                        cnt_1 <= softmax_op_num;
                        ext_busy_o<='d1;
                        
                end

        COMPUTE_EXP_SUM: begin
                        cnt <= vld_out_sum_tree ? cnt-1: cnt;
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d0;
                        cnt_1 <= (cnt_1 ==0)?cnt_1:cnt_1-1;
                        ext_busy_o<='d1;
                end

        /*SUM: begin
                        cnt   <= vld_out_sum_tree ? cnt-1: cnt;
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d0;
                        cnt_1 <= (cnt_1==0) ?0 : cnt_1-1;
                end*/
        SUM_PHASE2: begin
                        cnt <= (state_nxt == COMPUTE_RESULT) ? softmax_op_num: 'd0;
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d0;
                        cnt_1 <='d0;
                        ext_busy_o<='d1;
                end
        COMPUTE_RESULT: begin
                        cnt <= vld_PE_out[0] ? cnt-1: cnt;
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d1;
                        cnt_1 <='d0;
                        ext_busy_o<='d1;
                end
                default: begin
                        cnt <= 'd0;  
                        ext_data_i_ready <='d0;
                        sum_exp_vld<='d0;
                        cnt_1 <='d0;
                        ext_busy_o<='d0;
                end
        endcase
        end
end

dff_en #(.WIDTH(1))  dff_state_sum2 ((state_nxt==SUM_PHASE2), clk_i, en, rst_ni, state_sum2_reg);
dff_en #(.WIDTH(1))  dff_state_sum2_1 ((state_nxt==SUM_PHASE2)&(~state_sum2_reg), clk_i, en, rst_ni, vld_sum2);


fp_32_compare_tree #(
    .OP_NUM     ( PE_NUM     ),
    .DATA_WIDTH ( FP_WIDTH),
    .EXPO_WIDTH ( 8 ),
    .MANT_WIDTH ( 23 ))
 u_fp_32_compare_tree (
    .oprands_in              ( ext_data_i_bits [PE_NUM * FP_WIDTH-1:0] ),
    .valid                   ( valid_compare                         ),
    .clk                     ( clk_i                                   ),
    .rst_n                   ( rst_ni                                 ),
    .en                      ( en                                    ),

    .oprand_max              ( x_max  [FP_WIDTH-1:0]          ),
    .vld_out                 ( valid_compare_out                     )
);

generate
        for (i=0;i<PE_NUM;i=i+1)begin: gen_pe
                
                PE_top #(
            .DATA_WIDTH      ( FP_WIDTH      ),
            .EXPO_WIDTH      ( 8               ),
            .MANT_WIDTH      ( 23              ),
            .WIDTH           ( 32              ),
            .INPUT_INT_WIDTH ( 7               ),
            .LUT_SIZE        ( 32               ),
            .LUT_BITS        ( 16               ),
            .NUM_SOFTMAX_MAX     ( NUM_SOFTMAX_MAX  ),
            .NUM_PE          ( PE_NUM          ))
         u_PE_top (
            .Oprand_A                                   ( pe_data_in                              [i*FP_WIDTH+:FP_WIDTH] ),     
            .clk                                        ( clk_i                                                         ),     
            .rst_n                                      ( rst_ni                                                       ),     
            .en                                         ( en                                                          ),     
            .vld_in                                     ( vld_PE                                                      ),     
            .sum_exp                                    ( result_sum_tree                        [FP_WIDTH-1:0]   ), 
            .sum_exp_vld                                (sum_exp_vld),    
            .x_max                                      ( x_max                                      [FP_WIDTH-1:0] ),     
            .x_max_vld                                  ( pe_x_max_vld                                                   ),     
            .func                                       ( func                                       [5:0]            ),     
            .vld_out                                    ( vld_PE_out                                 [i]                 ),     
            .Result                                     ( pe_data_out                             [i*FP_WIDTH+:FP_WIDTH] ),     
            .exp_x_minus_xmax                           ( exp_x_minus_xmax                        [i*FP_WIDTH+:FP_WIDTH] ),     
            .exp_x_minus_xmax_vld_out                   ( exp_x_minus_xmax_vld_out                 [i]                )      
        );
        end
endgenerate


fp_32_oprand_tree #(
    .DATA_WIDTH ( FP_WIDTH   ),
    .EXPO_WIDTH ( 8 ),
    .MANT_WIDTH ( 23 ),
    .WIDTH      ( FP_WIDTH      ),
    .OP_NUM     ( NUM_SOFTMAX_MAX/PE_NUM     ))
 u_fp_32_oprand_tree (
    .oprands_in              ( sum_tree_input[FP_WIDTH*NUM_SOFTMAX_MAX/PE_NUM-1:0] ),
    .valid                   ( sum_tree_vld_in                    ),
    .clk                     ( clk_i                              ),
    .rst_n                   ( rst_ni                              ),
    .en                      ( en                               ),

    .result                  ( result_sum_tree      [FP_WIDTH-1:0]    ),
    .done                    ( vld_out_sum_tree                    )
);


integer j;
always @(posedge clk_i  or negedge rst_ni) begin
        if(!rst_ni)begin
                        sum_result_shifter <= 'd0;
        end
        else if((state ==COMPUTE_EXP_SUM) &  vld_out_sum_tree)begin
                sum_result_shifter[FP_WIDTH-1:0] <= result_sum_tree;
                for(j=2;j<=NUM_SOFTMAX_MAX/PE_NUM;j=j+1)begin
                        sum_result_shifter[(j-1)*FP_WIDTH +: FP_WIDTH] <= sum_result_shifter[(j-2)*FP_WIDTH +: FP_WIDTH];
                end
        end
        else sum_result_shifter <= sum_result_shifter;
end

fifo_out #(
    .FIFO_DEPTH ( OUT_BUFFER_DEPTH ),
    .DATA_WIDTH ( DataWidth ))
 buffer_out (
    .clk                           ( clk_i                                          ),
    .rst_n                         ( rst_ni                                         ),
    .rd_en                         ( ext_data_o_ready                               ),
    .wr_en                         ( vld_PE_out[0]                                  ),
    .data_in                       ( pe_data_out                                    ),
    .full                          ( out_buffer_full                                ),
    .data_out                      ( ),//ext_data_o_bits                              ),
    .data_valid                    ( )//ext_data_o_valid                               )
);
assign ext_data_o_bits = pe_data_out;
assign ext_data_o_valid= vld_PE_out[1];
endmodule
module gelux #(
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
    input                     vld_in,
    input                     en,
    output                    vld_out
 );
wire                                                sign_A;
wire        [EXPO_WIDTH-1:0]                        expo_A;
wire        [MANT_WIDTH-1:0]                        mant_A;
wire        [MANT_WIDTH:0]                          real_A;
wire signed [EXPO_WIDTH-1:0]                        expo_real_A;
wire        [EXPO_WIDTH-1:0]                        expo_complement;
wire        [EXPO_WIDTH-1:0]                        expo_real_abs;
wire                                                expo_smaller_than_zero;
wire                                                expo_neg_overflow;
wire        [MANT_WIDTH:0]                          shifted_real_A;
reg         [MANT_WIDTH:0]                          lut_source;
reg                                                 expo_bigger_than_one;
wire                                                expo_is_zero;
wire                                                expo_is_one;
reg         [1:0]                                   mem_select;
wire        [$clog2(LUT_SIZE)+1:0]                  addr_b,addr_a;
wire        [LUT_BITS-1:0]                          q_a;
wire        [LUT_BITS-1:0]                          q_b;
wire        [LUT_BITS-1:0]                          y_a;
wire        [LUT_BITS-1:0]                          y_b;
wire  signed[10:0]                                  Yb_minus_Ya;
wire  signed[15:0]                                  Yb_minus_Ya_temp;
wire        [MANT_WIDTH-$clog2(LUT_SIZE)-1:0]       SM_minus_n;
wire        [MANT_WIDTH-$clog2(LUT_SIZE)+10:0]      mul_result_temp;
wire        [MANT_WIDTH-$clog2(LUT_SIZE)-1:0]       mul_result;
wire        [MANT_WIDTH:0]                          op1;
wire        [WIDTH-1:0]                             op2;
wire        [$clog2(WIDTH)-1:0]                     shift_bits;  
wire        [WIDTH-1:0]                             Adder_Result ; 
wire        [WIDTH-1:0]                             Adder_Result_shifted ;  
wire        [EXPO_WIDTH-1:0]                        expo_normed;
wire        [MANT_WIDTH-1:0]                        mant_normed; 
wire        [DATA_WIDTH-1:0]                        Result_d;
wire                                                shift_right;
//////////////////////stage 0///////////////////////////////////////////////////
wire en_stage0,en_stage1,en_stage2,en_stage3,en_stage4,en_stage5;
assign en_stage0 = en & vld_in;
wire              expo_is_zero_reg;
dff_en #(.WIDTH(1))  dff_expo_is_zero_reg (expo_is_zero, clk, en_stage0, rst_n, expo_is_zero_reg);
wire              expo_is_one_reg;
dff_en #(.WIDTH(1))  dff_expo_is_one_reg (expo_is_one, clk, en_stage0, rst_n, expo_is_one_reg);
wire     [MANT_WIDTH-1:0]          mant_A_reg;
dff_en #(.WIDTH(MANT_WIDTH))  dff_mant_A_reg (mant_A, clk, en_stage0, rst_n, mant_A_reg);
wire     [EXPO_WIDTH-1:0]          expo_real_abs_reg;
dff_en #(.WIDTH(EXPO_WIDTH))  dff_expo_real_abs_reg (expo_real_abs, clk, en_stage0, rst_n, expo_real_abs_reg);
wire              expo_smaller_than_zero_reg;
dff_en #(.WIDTH(1))  dff_expo_smaller_than_zero_reg (expo_smaller_than_zero, clk, en_stage0, rst_n, expo_smaller_than_zero_reg);
wire              sign_A_reg0;
dff_en #(.WIDTH(1))  dff_sign_A_reg0 (sign_A, clk, en_stage0, rst_n, sign_A_reg0);
wire vld_in_reg0;
dff_en #(.WIDTH(1)) dff_vld_reg0 (vld_in,clk,en_stage0,rst_n,vld_in_reg0);
assign en_stage1 = en & vld_in_reg0;
//////////////////////stage1//////////////////////////////////////////////////
wire     [MANT_WIDTH:0]          lut_source_reg0;
dff_en #(.WIDTH((MANT_WIDTH) + 1))  dff_lut_source_reg0 (lut_source, clk, en_stage1, rst_n, lut_source_reg0);
wire     [1:0]          mem_select_reg0;
dff_en #(.WIDTH(2))  dff_mem_select_reg0 (mem_select, clk, en_stage1, rst_n, mem_select_reg0);
wire        [$clog2(LUT_SIZE)+1:0]       addr_a_reg;
dff_en #(.WIDTH($clog2(LUT_SIZE)+2))  dff_addr_a_reg (addr_a, clk, en_stage1, rst_n, addr_a_reg);
wire              sign_A_reg1;
dff_en #(.WIDTH(1))  dff_sign_A_reg1 (sign_A_reg0, clk, en_stage1, rst_n, sign_A_reg1);
wire              expo_smaller_than_zero_reg1;
dff_en #(.WIDTH(1))  dff_expo_smaller_than_zero_reg1 (expo_smaller_than_zero_reg, clk, en_stage1, rst_n, expo_smaller_than_zero_reg1);
wire              expo_zero_or_one_reg;
dff_en #(.WIDTH(1))  dff_expo_zero_or_one_reg (expo_is_zero_reg|expo_is_one_reg, clk, en_stage1, rst_n, expo_zero_or_one_reg);
wire vld_in_reg1;
dff_en #(.WIDTH(1)) dff_vld_reg1 (vld_in_reg0,clk,en_stage1,rst_n,vld_in_reg1);
assign en_stage2 = en & vld_in_reg1;
////////////////bigger than_ze//////////////////////
//////////////////////stage2//////////////////////////////////////////////////
wire     [1:0]          mem_select_reg1;
dff_en #(.WIDTH(2))  dff_mem_select_reg1 (mem_select_reg0, clk, en_stage2, rst_n, mem_select_reg1);
wire              sign_A_reg2;
dff_en #(.WIDTH(1))  dff_sign_A_reg2 (sign_A_reg1, clk, en_stage2, rst_n, sign_A_reg2);
wire     [MANT_WIDTH:0]          lut_source_reg1;
dff_en #(.WIDTH(MANT_WIDTH + 1))  dff_lut_source_reg1 (lut_source_reg0, clk, en_stage2, rst_n, lut_source_reg1);
wire              expo_bigger_than_one_reg0;
dff_en #(.WIDTH(1))  dff_expo_bigger_than_one_reg0 (expo_bigger_than_one, clk, en_stage2, rst_n, expo_bigger_than_one_reg0);
wire vld_in_reg2;
dff_en #(.WIDTH(1)) dff_vld_reg2 (vld_in_reg1,clk,en_stage2,rst_n,vld_in_reg2);
assign en_stage3 = en & vld_in_reg2;
/////////////////////////////////////////////////////////////////////////////////////////////////////////
wire              sign_A_reg3;
dff_en #(.WIDTH(1))  dff_sign_A_reg3 (sign_A_reg2, clk, en_stage3, rst_n, sign_A_reg3);
wire     [LUT_BITS-1:0]          y_a_reg;
dff_en #(.WIDTH((LUT_BITS-1) + 1))  dff_y_a_reg (y_a, clk, en_stage3, rst_n, y_a_reg);
wire        [MANT_WIDTH-$clog2(LUT_SIZE)-1:0]      mul_result_reg;
wire   signed     [MANT_WIDTH-$clog2(LUT_SIZE)-1:0]      mul_result_reg_temp;
dff_en #(.WIDTH(MANT_WIDTH-$clog2(LUT_SIZE)))  dff_mul_result_reg (mul_result, clk, en_stage3, rst_n, mul_result_reg);
wire              expo_bigger_than_one_reg1;
dff_en #(.WIDTH(1))  dff_expo_bigger_than_one_reg1 (expo_bigger_than_one_reg0, clk, en_stage3, rst_n, expo_bigger_than_one_reg1);
wire vld_in_reg3;
dff_en #(.WIDTH(1)) dff_vld_reg3 (vld_in_reg2,clk,en_stage3,rst_n,vld_in_reg3);
assign en_stage4 = en & vld_in_reg3;
/////////////////////////////////////////////////////////////////////////
wire     [MANT_WIDTH:0]          op1_reg;
dff_en #(.WIDTH((MANT_WIDTH) + 1))  dff_op1_reg (op1, clk, en_stage4, rst_n, op1_reg);
wire     [WIDTH-1:0]          op2_reg;
dff_en #(.WIDTH((WIDTH-1) + 1))  dff_op2_reg (op2, clk, en_stage4, rst_n, op2_reg);
wire              sign_A_reg4;
dff_en #(.WIDTH(1))  dff_sign_A_reg4 (sign_A_reg3, clk, en_stage4, rst_n, sign_A_reg4);
wire              expo_bigger_than_one_reg2;
dff_en #(.WIDTH(1))  dff_expo_bigger_than_one_reg2 (expo_bigger_than_one_reg1, clk, en_stage4, rst_n, expo_bigger_than_one_reg2);
wire vld_in_reg4;
dff_en #(.WIDTH(1)) dff_vld_reg4 (vld_in_reg3,clk,en_stage4,rst_n,vld_in_reg4);
assign en_stage5 = en & vld_in_reg4;
////////////////////////////////////////////////////////////////////////////////
dff_en #(.WIDTH(1)) dff_vld_out (vld_in_reg4,clk,en_stage5,rst_n,vld_out);
dff_en #(.WIDTH((DATA_WIDTH-1) + 1))  dff_Result_out (Result_d, clk, en_stage5, rst_n, Result);
///////////////////////////////////////////////////////////////////////
/*
wire     [DATA_WIDTH-1:0]          Result_reg0;
dff_en #(.WIDTH((DATA_WIDTH-1) + 1))  dff_Result_reg0 (Result_d, clk, en_stage2, rst_n, Result_reg0);
wire              vld_in_reg1;
dff_en #(.WIDTH(1))  dff_vld_in_reg1 (vld_in_reg0, clk, en_stage2, rst_n, vld_in_reg1);

wire     [DATA_WIDTH-1:0]          Result_reg1;
dff_en #(.WIDTH((DATA_WIDTH-1) + 1))  dff_Result_reg1 (Result_reg0, clk, en_stage3, rst_n, Result_reg1);
wire              vld_in_reg2;
dff_en #(.WIDTH(1))  dff_vld_in_reg2 (vld_in_reg1, clk, en_stage3, rst_n, vld_in_reg2);

wire     [DATA_WIDTH-1:0]          Result_reg2;
dff_en #(.WIDTH((DATA_WIDTH)))  dff_Result_reg2 (Result_reg1, clk, en_stage4, rst_n, Result_reg2);
wire              vld_in_reg3;
dff_en #(.WIDTH(1))  dff_vld_in_reg3 (vld_in_reg2, clk, en_stage3, rst_n, vld_in_reg3);

dff_en #(.WIDTH((DATA_WIDTH-1) + 1))  dff_Result_out (Result_reg2, clk, en_stage5, rst_n, Result);
dff_en #(.WIDTH(1))  dff_vld_in_out (vld_in_reg3, clk, en_stage5, rst_n, vld_out);
*/
/////////////////////////////////////////////////////////////////////////

assign sign_A      = Oprand_A[DATA_WIDTH-1];
assign expo_A      = Oprand_A[DATA_WIDTH-2:MANT_WIDTH];
assign mant_A      = Oprand_A[MANT_WIDTH-1:0];
assign real_A      = {1'b1,mant_A_reg};
assign expo_real_A = expo_A -8'd127;
assign expo_complement = 8'd127 - expo_A;
assign expo_smaller_than_zero = expo_real_A[EXPO_WIDTH-1];
assign expo_real_abs          = expo_smaller_than_zero ? expo_complement : expo_real_A;
assign expo_neg_overflow = expo_real_abs_reg > 23;
assign shifted_real_A    = expo_neg_overflow ? 0 : real_A >> expo_real_abs_reg;
assign expo_is_zero      = expo_real_A == 0;
assign expo_is_one       = expo_real_A == 1;
assign addr_b = {mem_select_reg0,lut_source_reg0[MANT_WIDTH-1:MANT_WIDTH-5]};
assign addr_a = {mem_select,lut_source[MANT_WIDTH-1:MANT_WIDTH-5]}-1;
assign y_a         = ({mem_select_reg1,lut_source_reg1[MANT_WIDTH-1:MANT_WIDTH-5]}==0) ? 0 : q_a;
assign y_b         = q_b;
assign Yb_minus_Ya = Yb_minus_Ya_temp[10:0];
assign Yb_minus_Ya_temp = y_b -y_a;
assign SM_minus_n  = lut_source_reg1[MANT_WIDTH-$clog2(LUT_SIZE)-1:0];
assign mul_result_temp  = (SM_minus_n * Yb_minus_Ya);
assign mul_result       = mul_result_temp[MANT_WIDTH-$clog2(LUT_SIZE)+10:11];
assign op1 = {2'b01,{21{1'b0}},1'b1} + (sign_A_reg3?~{1'b0,y_a_reg,7'd0}:{1'b0,y_a_reg,7'd0});  //(sign_A ?({2'b01,{21{1'b0}},1'b1}-{y_a,7'd0}):{y_a,7'd0});
assign op2 = {{14{mul_result_reg_temp[MANT_WIDTH-$clog2(LUT_SIZE)-1]}},mul_result_reg_temp};
assign mul_result_reg_temp = sign_A_reg3?(~mul_result_reg):(mul_result_reg);
assign Adder_Result_shifted = Adder_Result<<shift_bits;
assign mant_normed          = Adder_Result_shifted[MANT_WIDTH-1:0];
assign expo_normed          = {3'b011,~shift_bits[$clog2(WIDTH)-1:0]};
assign Result_d               = {1'b0,(expo_bigger_than_one_reg2 ? (sign_A_reg4 ? 8'd0 : 8'd127) :expo_normed),(expo_bigger_than_one_reg2?23'd0:mant_normed)};
always @(*) begin
      if(expo_smaller_than_zero_reg)begin
          lut_source           = shifted_real_A;
      end  
      else if(expo_is_zero_reg|expo_is_one_reg)begin
          lut_source           = real_A;
      end
      else begin
          lut_source           = 0;
      end
end

always @(*) begin
        mem_select =2'b00;
     if(expo_smaller_than_zero_reg)begin
        mem_select =2'b00;
     end
     else if(expo_is_zero_reg)begin
        mem_select = 2'b01;
     end
     else if(expo_is_one_reg)begin
        mem_select = 2'b10;
     end
end

always @(*) begin
   if(expo_smaller_than_zero_reg1)begin
       expo_bigger_than_one = 0;
   end  
   else if(expo_zero_or_one_reg)begin
       expo_bigger_than_one = 0;
   end
   else begin
       expo_bigger_than_one = 1;
   end
end
wire we;
assign we = 0;
dual_port_ram_gelu #(
        .ADDR_WIDTH ( 7 ),
        .DATA_WIDTH ( LUT_BITS ))
     u_dual_port_ram_gelu (
        .clk                     ( clk                      ),
        .rst_n                   (rst_n),
        .addr_a                  ( addr_a_reg ),
        .addr_b                  ( addr_b ),
        .data_a                  ( 16'd0                        ),
        .data_b                  ( 16'd0                        ),
        .we_a                    ( we                     ),
        .we_b                    ( we                     ),
    
        .q_a                     ( q_a     [LUT_BITS-1:0]           ),
        .q_b                     ( q_b     [LUT_BITS-1:0]           )
    );

    lza_log2 #(
        .WIDTH ( WIDTH ))
     u_lza_log2 (
        .A                       ( {{8{1'b0}},op1_reg}         ),
        .B                       ( op2_reg         ),
        .C_in                    (sign_A_reg4           ),
    
        .shift_bits              ( shift_bits  [$clog2(WIDTH)-1:0] ),
        .shift_right             ( shift_right                      ),
        .Result                  ( Adder_Result      [WIDTH-1:0]         )
    );
endmodule
module exp_x #(
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
    input                      clk,
    input                      rst_n,
    input                      en,
    input                      vld_in,
    output                     vld_out
 );

 wire  [DATA_WIDTH-1:0]  Result_mid;
 wire vld_mid;
 mul_log2e #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_mul_log2e (
    .Oprand_A_D              ( Oprand_A  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                          ),
    .rst_n                   ( rst_n                        ),
    .en                      ( en                           ),
    .vld_in                  ( vld_in                       ),

    .Result_out              ( Result_mid  [DATA_WIDTH-1:0] ),
    .vld_out                 ( vld_mid                      )
);

_2_power_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u__2_power_X (
    .Oprand_A                ( Result_mid [DATA_WIDTH-1:0]),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( vld_mid                    ),

    .Result                  ( Result    [DATA_WIDTH-1:0] ),
    .vld_out                 ( vld_out                    )
);
endmodule
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
module fifo_FPU #(
        parameter FIFO_DEPTH = 16,
        parameter DATA_WIDTH = 32
) (
        input clk,
        input rst_n,
        input rd_en,
        input wr_en,
        input [DATA_WIDTH-1:0] data_in,
        output reg[DATA_WIDTH-1:0] data_out
);
        reg [$clog2(FIFO_DEPTH):0] wr_cnt,rd_cnt;
        reg [DATA_WIDTH-1:0] ram [0:FIFO_DEPTH-1];
        //wire[$clog2(FIFO_DEPTH)-1:0] data_num;
        wire empty;
        wire full;
        integer i;


        //assign data_num = (wr_cnt[$clog2(FIFO_DEPTH)]==rd_cnt[$clog2(FIFO_DEPTH)])?(wr_cnt[$clog2(FIFO_DEPTH):0]-rd_cnt[$clog2(FIFO_DEPTH):0]):(FIFO_DEPTH-wr_cnt[$clog2(FIFO_DEPTH):0]+rd_cnt[$clog2(FIFO_DEPTH):0]);
        assign full=(wr_cnt[$clog2(FIFO_DEPTH)]!=rd_cnt[$clog2(FIFO_DEPTH)])&(wr_cnt[$clog2(FIFO_DEPTH)-1:0]==rd_cnt[$clog2(FIFO_DEPTH)-1:0]);
        assign empty= (wr_cnt==rd_cnt);

        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)data_out <=0;
                else begin
                        data_out <= ram[rd_cnt[$clog2(FIFO_DEPTH)-1:0]];
                end
        end

        always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
                for(i=0;i<FIFO_DEPTH;i=i+1)begin
                        ram[i] <= 'd0;
                end
                end
        else begin
                if(wr_en & (!full))begin
                        ram[wr_cnt[$clog2(FIFO_DEPTH)-1:0]] <= data_in;
                end
                else begin
                        for(i=0;i<FIFO_DEPTH;i=i+1)begin
                                ram[i] <= ram[i];
                        end
                end
        end
        end
        
        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)begin
                        rd_cnt <= 'd0;
                end
                else if(rd_en & (!empty))begin
                        rd_cnt <= rd_cnt +1;
                end
                else
                        rd_cnt <=rd_cnt;
        end

        always@(posedge clk or negedge rst_n)begin
                if(!rst_n)begin
                        wr_cnt <= 'd0;
                end
                else if(wr_en & (!full))begin
                        wr_cnt <= wr_cnt +1;
                end
                else
                        wr_cnt <= wr_cnt;
        end


endmodule
module float_adder_2nd #(
        parameter DATA_WIDTH = 32,
        parameter EXPO_WIDTH = 8,
        parameter MANT_WIDTH = 23,
        parameter WIDTH      = 32
     )(
        input   [DATA_WIDTH-1:0]  Oprand_A,
        input   [DATA_WIDTH-1:0]  Oprand_B,
        output  [DATA_WIDTH-1:0]  Result,
        input clk,
        input en,
        input rst_n,
        input vld_in,
        output vld_out
     );
      

     
       wire sign_A,sign_B;
       wire [EXPO_WIDTH-1:0]        Expo_A;
       wire [EXPO_WIDTH-1:0]        Expo_B;
       wire [MANT_WIDTH-1:0]        Mant_A;
       wire [MANT_WIDTH-1:0]        Mant_B;
       wire [MANT_WIDTH-1+1+3:0]          Mant_smaller;
       wire [MANT_WIDTH-1+1+4:0]          Mant_smaller_shifted;
       wire [MANT_WIDTH-1+1+3:0]          Mant_bigger;
       wire [MANT_WIDTH-1+1+3:0]    Mant_A_extended;
       wire [MANT_WIDTH-1+1+3:0]    Mant_B_extended;
       wire Expo_A_smaller;
       wire signed [EXPO_WIDTH:0] Expo_A_minus_B;
       wire signed [EXPO_WIDTH:0] Expo_B_minus_A;
       wire [EXPO_WIDTH-1:0]        Expo_to_be_normed_1st;
       wire [EXPO_WIDTH-1:0] Expo_difference;
       wire MA_bigger_than_MB;
       wire Oprand_A_bigger_than_B;
       wire much_larger;
       wire sign_different;
       wire [WIDTH-1:0]    Larger_oprand;
       wire [WIDTH-1:0]    Adder_oprand_bigger;
       wire [MANT_WIDTH-1+1+4:0]    Adder_oprand_smaller_unpadded;
       wire [WIDTH-1:0]    Adder_oprand_smaller;
       wire [WIDTH-1:0]    Adder_Result;
       wire [$clog2(WIDTH)-1:0] shift_bits_left;
       wire shift_right;
       wire [MANT_WIDTH-1+1+3+2:0]    Mant_to_be_normed_1st;
       wire [MANT_WIDTH-1+1+3+2:0]    Mant_norm_temp;
       wire [MANT_WIDTH-1+1+3+1:0]    Mant_normed_1st;
       //wire [EXPO_WIDTH-1:0]          Expo_normed_1st;
       wire [MANT_WIDTH-1+1+1:0]      Mant_rounded;
       wire [MANT_WIDTH-1+1:0]        Mant_normed_2st;
       wire round_en;
       wire [EXPO_WIDTH:0]          Expo_rounded;
       wire            up_overflow_flag;
       wire            down_overflow_flag;
       wire [DATA_WIDTH-1:0]  Result_normal;
       wire final_sign;

       wire en_stage0,en_stage1,en_stage2;
       wire vld_reg0,vld_reg1;
       assign en_stage0 = en;// & vld_in;
       assign en_stage1 = en;// & vld_reg0;
       assign en_stage2 = en;// & vld_reg1;
//////////////////stage 0///////////////////////////////////////////////////////////
       wire [WIDTH-1:0]     Adder_oprand_smaller_reg0;
       wire [WIDTH-1:0]      Adder_oprand_bigger_reg0;
       wire                       sign_different_reg0;
       wire                          much_larger_reg0;
       wire   [DATA_WIDTH-1:0]          Oprand_A_reg0;
       wire   [DATA_WIDTH-1:0]          Oprand_B_reg0;
       wire Expo_A_smaller_reg0;
       wire               Oprand_A_bigger_than_B_reg0;

       dff_en #(.WIDTH(WIDTH)) dff_operand_bigger (Adder_oprand_bigger,clk,en_stage0,rst_n,Adder_oprand_bigger_reg0);
       dff_en #(.WIDTH(WIDTH)) dff_operand_smaller (Adder_oprand_smaller,clk,en_stage0,rst_n,Adder_oprand_smaller_reg0);
       dff_en #(.WIDTH(1)) dff_sign_different (sign_different,clk,en_stage0,rst_n,sign_different_reg0);
       dff_en #(.WIDTH(1)) dff_much_larger (much_larger,clk,en_stage0,rst_n,much_larger_reg0);
       dff_en #(.WIDTH(DATA_WIDTH)) dff_Oprand_A (Oprand_A,clk,en_stage0,rst_n,Oprand_A_reg0);
       dff_en #(.WIDTH(DATA_WIDTH)) dff_Oprand_B (Oprand_B,clk,en_stage0,rst_n,Oprand_B_reg0);
       dff_en #(.WIDTH(1)) dff_Expo_A_smaller (Expo_A_smaller,clk,en_stage0,rst_n,Expo_A_smaller_reg0);
       dff_en #(.WIDTH(1)) dff_Oprand_A_bigger_than_B (Oprand_A_bigger_than_B,clk,en_stage0,rst_n,Oprand_A_bigger_than_B_reg0);

       dff_en #(.WIDTH(1)) dff_vld_0 (vld_in,clk,en_stage0,rst_n,vld_reg0);

       /////////////////pipeline stage 1/////////////////////////
       wire   [DATA_WIDTH-1:0]          Oprand_A_reg1;
       wire   [DATA_WIDTH-1:0]          Oprand_B_reg1;
       wire               Oprand_A_bigger_than_B_reg1;
       wire                       Expo_A_smaller_reg1;
       wire                          much_larger_reg1;
       wire   [WIDTH-1:0]                Adder_Result_reg1;
       wire [$clog2(WIDTH)-1:0]     shift_bits_left_reg1;
       wire signed[$clog2(WIDTH)-1:0]     temp1_shift;
       wire signed[$clog2(WIDTH)-1:0]     temp2_shift;
       dff_en #(.WIDTH(DATA_WIDTH)) dff_Oprand_A_1 (Oprand_A_reg0,clk,en_stage1,rst_n,Oprand_A_reg1);
       dff_en #(.WIDTH(DATA_WIDTH)) dff_Oprand_B_1 (Oprand_B_reg0,clk,en_stage1,rst_n,Oprand_B_reg1);
       dff_en #(.WIDTH(1)) dff_Oprand_A_bigger_than_B_1 (Oprand_A_bigger_than_B_reg0,clk,en_stage1,rst_n,Oprand_A_bigger_than_B_reg1);
       dff_en #(.WIDTH(1)) dff_Expo_A_smaller_1 (Expo_A_smaller_reg0,clk,en_stage1,rst_n,Expo_A_smaller_reg1);
       dff_en #(.WIDTH(1)) dff_much_larger_1 (much_larger_reg0,clk,en_stage1,rst_n,much_larger_reg1);
       dff_en #(.WIDTH(DATA_WIDTH)) dff_adder_result (Adder_Result,clk,en_stage1,rst_n,Adder_Result_reg1);
       dff_en #(.WIDTH($clog2(WIDTH))) dff_shift_bit (shift_bits_left,clk,en_stage1,rst_n,shift_bits_left_reg1);
       dff_en #(.WIDTH(1)) dff_vld_1 (vld_reg0,clk,en_stage1,rst_n,vld_reg1);

       ///////////////////////////////////////////////////////////////
       wire  [DATA_WIDTH-1:0]  Result_d;
       dff_en #(.WIDTH(32)) dff_Result (Result_d,clk,en_stage2,rst_n,Result);
       
       dff_en #(.WIDTH(1)) dff_vld_out (vld_reg1,clk,en_stage2,rst_n,vld_out);
       ///////////////////////////////////////////////////////////
       assign sign_A      = Oprand_A[DATA_WIDTH-1];
       assign sign_B      = Oprand_B[DATA_WIDTH-1];
       assign Expo_A      = Oprand_A[DATA_WIDTH-2:MANT_WIDTH];
       assign Expo_B      = Oprand_B[DATA_WIDTH-2:MANT_WIDTH];
       assign Mant_A      = Oprand_A[MANT_WIDTH-1:0];
       assign Mant_B      = Oprand_B[MANT_WIDTH-1:0];


       assign sign_different = sign_A^sign_B;
       assign MA_bigger_than_MB = (Mant_A > Mant_B);
       assign Expo_A_minus_B = (Expo_A-Expo_B);
       assign Expo_B_minus_A = (Expo_B-Expo_A);
       assign Expo_A_smaller = Expo_A_minus_B[EXPO_WIDTH];
       assign Expo_to_be_normed_1st = Expo_A_smaller_reg1 ? Oprand_B_reg1[DATA_WIDTH-2:MANT_WIDTH] : Oprand_A_reg1[DATA_WIDTH-2:MANT_WIDTH];

       mux #(EXPO_WIDTH) mux_expo_diff_choose (Expo_A_smaller , Expo_B_minus_A[EXPO_WIDTH-1:0], Expo_A_minus_B[EXPO_WIDTH-1:0],Expo_difference);//get expo_difference

       assign Oprand_A_bigger_than_B = Expo_A_minus_B[EXPO_WIDTH] ? 1'b0 : ((Expo_A_minus_B != 0)|((Expo_A_minus_B == 0)&MA_bigger_than_MB));
       assign Larger_oprand = Oprand_A_bigger_than_B_reg1? Oprand_A_reg1:Oprand_B_reg1;

       assign Mant_A_extended = {1'b1,Mant_A[MANT_WIDTH-1:0],3'b000};
       assign Mant_B_extended = {1'b1,Mant_B[MANT_WIDTH-1:0],3'b000};
       mux #(MANT_WIDTH+4) mux_mant_smaller_choose (Oprand_A_bigger_than_B , Mant_B_extended,Mant_A_extended,Mant_smaller);//get expo_difference
       mux #(MANT_WIDTH+4) mux_mant_bigger_choose (Oprand_A_bigger_than_B , Mant_A_extended,Mant_B_extended,Mant_bigger);

       assign much_larger = (Expo_difference > (MANT_WIDTH+1));/////////samller one shifted out of range

       assign Adder_oprand_bigger = {{5{1'b0}},Mant_bigger[MANT_WIDTH-1+1+3:0]};
       assign Mant_smaller_shifted = ({1'b0,Mant_smaller} >> Expo_difference); 
       assign Adder_oprand_smaller_unpadded = much_larger ? 0 : (sign_different ? ~Mant_smaller_shifted : Mant_smaller_shifted);
       assign Adder_oprand_smaller =  {{4{Adder_oprand_smaller_unpadded[MANT_WIDTH-1+1+4]}},Adder_oprand_smaller_unpadded[MANT_WIDTH-1+1+4:0]};
       lza_float_32 #(.WIDTH ( WIDTH ))
         lza (
            .A                    ( Adder_oprand_bigger_reg0[WIDTH-1:0]      ),
            .B                    ( Adder_oprand_smaller_reg0[WIDTH-1:0]     ),
            .C_in                ( sign_different_reg0                      ),
            //.clk                     ( clk                                 ),
            //.rst_n                   ( rst_n                               ),
            //.en                      ( en                                  ),

            .shift_bits          ( shift_bits_left  [$clog2(WIDTH)-1:0]),
            .Result              ( Adder_Result      [WIDTH-1:0]       )
);

        assign shift_right = Adder_Result_reg1 [MANT_WIDTH-1+1+3+1] ^ Adder_Result_reg1 [MANT_WIDTH-1+1+3+2];
        assign Mant_to_be_normed_1st = Adder_Result_reg1[MANT_WIDTH-1+1+3+2:0];
        assign Mant_norm_temp = (Mant_to_be_normed_1st << shift_bits_left_reg1);
        assign Mant_normed_1st = shift_right ? ({1'b0,Mant_to_be_normed_1st[MANT_WIDTH+4:2],Mant_to_be_normed_1st[0]|Mant_to_be_normed_1st[1]}) : Mant_norm_temp[MANT_WIDTH+4:0];
        //assign Expo_normed_1st = much_larger ? Expo_to_be_normed_1st : (Expo_to_be_normed_1st + (shift_right ? 1:-shift_bits_left));
        assign Mant_rounded    = Mant_normed_1st[MANT_WIDTH-1+1+3+1:3] + (((Mant_normed_1st[2])|(Mant_normed_1st[3]&Mant_normed_1st[1]&Mant_normed_1st[0]))?1:0);
        assign round_en        = Mant_rounded[MANT_WIDTH-1+1+1];
        assign Expo_rounded    = much_larger_reg1 ? {1'b0,Expo_to_be_normed_1st} : (Expo_to_be_normed_1st + (round_en?(shift_right ? 2:{{4{temp1_shift[$clog2(WIDTH)-1]}},temp1_shift}):(shift_right ? 1:{{4{temp2_shift[$clog2(WIDTH)-1]}},temp2_shift})));
        assign temp1_shift     =  -shift_bits_left_reg1+1;
        assign temp2_shift     =  -shift_bits_left_reg1;
        assign Mant_normed_2st = round_en ? Mant_rounded [MANT_WIDTH-1+1+1:1] : Mant_rounded [MANT_WIDTH-1+1:0];
        assign final_sign =Oprand_A_bigger_than_B_reg1 ? Oprand_A_reg1[DATA_WIDTH-1] : Oprand_B_reg1[DATA_WIDTH-1];
        assign up_overflow_flag = (Expo_rounded >=255); 
        assign down_overflow_flag = (!Expo_to_be_normed_1st[EXPO_WIDTH-1])&(Expo_rounded[EXPO_WIDTH])&(!shift_right);
        assign Result_normal = {final_sign,Expo_rounded[EXPO_WIDTH-1:0],Mant_normed_2st[MANT_WIDTH-1:0]};
        assign Result_d = up_overflow_flag ? {final_sign,8'd255,23'd0}:(down_overflow_flag ?{final_sign,8'd0,23'd0}:(much_larger_reg1 ? Larger_oprand :Result_normal));

     endmodule
     
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
module PE_top #(
    parameter DATA_WIDTH      = 32,
    parameter EXPO_WIDTH      = 8,
    parameter MANT_WIDTH      = 23,
    parameter WIDTH           = 32,
    parameter INPUT_INT_WIDTH = 7,
    parameter LUT_SIZE        = 32,
    parameter LUT_BITS        = 16,
    parameter NUM_SOFTMAX_MAX     = 1024,
    parameter NUM_PE          = 32
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A,
    input                     clk,
    input                     rst_n,
    input                     en,
    input                     vld_in,
    input   [DATA_WIDTH-1:0]  sum_exp,
    input   [DATA_WIDTH-1:0]  x_max,       
    input                     x_max_vld, 
    input                     sum_exp_vld,
    input                     [5:0]func,
    output                    vld_out,
    output  [DATA_WIDTH-1:0]  Result,
    output  [DATA_WIDTH-1:0]  exp_x_minus_xmax,
    output                    exp_x_minus_xmax_vld_out
 ); 
 ////////////////////////////////////////////
 wire [WIDTH-1:0] exp_0_data_out_channel_0,exp_0_data_out_channel_1;
wire exp_0_vld_out_channel_0,exp_0_vld_out_channel_1;
wire                  mux_07_vld_out,mux_07_vld_out_reg;
wire _2_X_vld_out;
wire [WIDTH-1:0] x_mul_2_2_data_out;
wire             x_mul_2_2_vld_out;
 ////////////////////////////////////////////
 wire sigmoid,silu,tanh,gelu,softmax,relu;
 assign sigmoid = (func[0] ==1'b1);
 assign silu    = (func[1] ==1'b1);
 assign tanh    = (func[2] ==1'b1);
 assign gelu    = (func[3] ==1'b1);
 assign softmax = (func[4] ==1'b1);
 assign relu    = (func[5] ==1'b1);
 wire [WIDTH-1:0] input_channel_0,input_channel_1,input_channel_2,input_channel_3,input_channel_4,input_channel_5;
 wire  input_vld_channel_0,input_vld_channel_1,input_vld_channel_2,input_vld_channel_3,input_vld_channel_4,input_vld_channel_5;

wire [DATA_WIDTH-1:0] adder_0_data_out_channel_0,adder_0_data_out_channel_1;
wire                  adder_0_vld_out_channel_0,adder_0_vld_out_channel_1;

 assign input_channel_0 = softmax ? Oprand_A :0;
 assign input_vld_channel_0 = softmax ? vld_in:0;

 assign input_channel_1 = tanh ? Oprand_A :0;
 assign input_vld_channel_1 = tanh ? vld_in:0;

 assign input_channel_2 = (sigmoid|silu) ? Oprand_A :0;
 assign input_vld_channel_2 = (sigmoid|silu) ? vld_in:0;

 assign input_channel_3 = (gelu) ? Oprand_A :0;
 assign input_vld_channel_3 = (gelu) ? vld_in:0;

 assign input_channel_4 = (gelu|silu) ? Oprand_A :0;
 assign input_vld_channel_4 = (gelu|silu) ? vld_in:0;

 assign input_channel_5 = (relu) ? Oprand_A :0;
 assign input_vld_channel_5 = (relu) ? vld_in:0;
//////////////////////////////
 wire [WIDTH-1:0]buffer_0_out;
 fifo_FPU #(
    .FIFO_DEPTH ( NUM_SOFTMAX_MAX/NUM_PE ),
    .DATA_WIDTH ( DATA_WIDTH ))
 u_buffer_0 (
    .clk                           ( clk                                            ),
    .rst_n                         ( rst_n                                          ),
    .rd_en                         ( x_max_vld                                      ),
    .wr_en                         ( input_vld_channel_0                            ),
    .data_in                       ( input_channel_0               [DATA_WIDTH-1:0] ),

    .data_out                      ( buffer_0_out                  [DATA_WIDTH-1:0] )
);
//////////////////////////////
 wire [DATA_WIDTH-1:0] x_mul_2_0_out;
 wire                  x_mul_2_0_vld_out;
 x_mul_2 #(
        .DATA_WIDTH ( DATA_WIDTH ),
        .EXPO_WIDTH ( EXPO_WIDTH ),
        .MANT_WIDTH ( MANT_WIDTH ),
        .WIDTH      ( WIDTH      ))
     u_x_mul_2_0 (
        .Oprand_A                (input_channel_1  [DATA_WIDTH-1:0] ),
        .vld_in                  (input_vld_channel_1               ),
        .clk(clk),
        .rst_n(rst_n),
        .en(en),
        .Result                  ( x_mul_2_0_out    [DATA_WIDTH-1:0] ),
        .vld_out                 ( x_mul_2_0_vld_out                 )
    );
////////////////////////////////////////////

///////////////////////////////////////////////////////////////
      wire sel_00;
      assign sel_00 = (sigmoid|silu)?0:1;
      wire [DATA_WIDTH-1:0] mux_00_data_out;
      wire                  mux_00_vld_out;
      mux_vld #(
         .WIDTH ( WIDTH ))
      u_mux_00 (
         .sel                     ( sel_00             ),
         .A                       ( x_mul_2_0_out   [WIDTH-1:0] ),
         .B                       ( input_channel_2      [WIDTH-1:0] ),
         .vld_A                   ( x_mul_2_0_vld_out                ),
         .vld_B                   ( input_vld_channel_2              ),
     
         .C                       ( mux_00_data_out      [WIDTH-1:0] ),
         .vld_C                   ( mux_00_vld_out                   )
     );   
     
////////////////////////////////////////////////////////////////

     wire [DATA_WIDTH-1:0] gelu_lut_data_out;
     wire                  gelu_lut_vld_out;

     gelux #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_gelux (
    .Oprand_A                ( input_channel_3  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( input_vld_channel_3        ),
    .en                      ( en                         ),

    .Result                  ( gelu_lut_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( gelu_lut_vld_out                    )
);

///////////////////////////////////////////////////////////////////
wire sel_01;
assign sel_01 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_01_data_out;
wire                  mux_01_vld_out;
wire x_max_vld_reg;
dff_en #(.WIDTH(1)) dff_x_max_vld (x_max_vld,clk,en,rst_n,x_max_vld_reg);
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_01 (
   .sel                     ( sel_01             ),
   .A                       ( {~x_max[WIDTH-1],x_max[WIDTH-2:0]} ),
   .B                       ( 32'h3F800000 ),
   .vld_A                   ( x_max_vld_reg                ),
   .vld_B                   ( 1'b1                     ),

   .C                       ( mux_01_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_01_vld_out                   )
);  

//////////////////////////////////////////////////////////////////////////////////
wire sel_02;
assign sel_02 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_02_data_out;
wire                  mux_02_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_02 (
   .sel                     ( sel_02             ),
   .A                       ( buffer_0_out                  [DATA_WIDTH-1:0] ),
   .B                       ( exp_0_data_out_channel_0[DATA_WIDTH-1:0] ),//?//
   .vld_A                   ( x_max_vld_reg                ),
   .vld_B                   ( exp_0_vld_out_channel_0                     ),

   .C                       ( mux_02_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_02_vld_out                   )
);  

//////////////////////////////////////////////

wire sel_03;
assign sel_03 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_03_data_out;
wire                  mux_03_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_03 (
   .sel                     ( sel_03             ),
   .A                       ( adder_0_data_out_channel_0 ),//?//////////
   .B                       ( {{~mux_00_data_out      [WIDTH-1]},mux_00_data_out      [WIDTH-2:0]} ),
   .vld_A                   ( adder_0_vld_out_channel_0                ),
   .vld_B                   ( mux_00_vld_out                     ),

   .C                       ( mux_03_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_03_vld_out                   )
);  

/////////////////////////////////////////////////////
wire [DATA_WIDTH-1:0] adder_0_data_out;
wire                  adder_0_vld_out;
float_adder_2nd #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_float_adder_0 (
    .Oprand_A                ( mux_01_data_out  [DATA_WIDTH-1:0] ),
    .Oprand_B                ( mux_02_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_01_vld_out & mux_02_vld_out),

    .Result                  ( adder_0_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( adder_0_vld_out                      )
);

assign adder_0_data_out_channel_0 = softmax ? adder_0_data_out :0;
assign adder_0_vld_out_channel_0 = softmax ? adder_0_vld_out :0;

assign adder_0_data_out_channel_1 = (sigmoid|silu|tanh) ? adder_0_data_out :0;
assign adder_0_vld_out_channel_1 = (sigmoid|silu|tanh) ? adder_0_vld_out :0;
////////////////////////////////////////////////////
wire [DATA_WIDTH-1:0] mul_log2e_0_data_out;
wire  mul_log2e_0_vld_out;

mul_log2e #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_mul_log2e_0 (
    .Oprand_A_D              ( adder_0_data_out_channel_0  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                          ),
    .rst_n                   ( rst_n                        ),
    .en                      ( en                           ),
    .vld_in                  ( adder_0_vld_out_channel_0    ),

    .Result_out              ( mul_log2e_0_data_out  [DATA_WIDTH-1:0]   ),
    .vld_out                 ( mul_log2e_0_vld_out                      )
);

///////////////////////////////////////////////////
wire [WIDTH-1:0] exp_0_data_out;
wire exp_0_vld_out;
exp_x #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_exp_x_0 (
    .Oprand_A                ( mux_03_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( mux_03_vld_out             ),

    .Result                  ( exp_0_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( exp_0_vld_out                    )
);



assign exp_0_data_out_channel_0 = (sigmoid|silu|tanh)? exp_0_data_out:0;
assign exp_0_vld_out_channel_0 = (sigmoid|silu|tanh)? exp_0_vld_out:0;

assign exp_0_data_out_channel_1 = (softmax)? exp_0_data_out:0;
assign exp_0_vld_out_channel_1 = (softmax)? exp_0_vld_out:0;
assign exp_x_minus_xmax = exp_0_data_out_channel_1;
assign exp_x_minus_xmax_vld_out = exp_0_vld_out_channel_1;
/////////////////////////////////////////////////////
wire [WIDTH-1:0] log2_x_0_data_out;
wire             log2_x_0_vld_out;
log2_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_log2_X_0 (
    .Oprand_A                ( input_channel_4  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( input_vld_channel_4                     ),

    .Result                  ( log2_x_0_data_out  [DATA_WIDTH-1:0] ),
    .vld_out                 ( log2_x_0_vld_out                    )
);

///////////////////////////////////////////////////////////////
wire [WIDTH-1:0]buffer_1_out;
fifo_FPU #(
   .FIFO_DEPTH ( 64 ),
   .DATA_WIDTH ( DATA_WIDTH ))
u_buffer_1 (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( mux_07_vld_out                                      ),///////?///////////
   .wr_en                         ( mul_log2e_0_vld_out                            ),
   .data_in                       ( mul_log2e_0_data_out    [DATA_WIDTH-1:0] ),

   .data_out                      ( buffer_1_out                  [DATA_WIDTH-1:0] )
);
////////////////////////////////////////////////////////////////

wire [WIDTH-1:0]buffer_2_out;
fifo_FPU #(
   .FIFO_DEPTH ( 16 ),
   .DATA_WIDTH ( DATA_WIDTH ))
u_buffer_2 (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( mux_07_vld_out                                      ),///////?///////////
   .wr_en                         ( log2_x_0_vld_out                            ),
   .data_in                       ( log2_x_0_data_out  [DATA_WIDTH-1:0]  ),

   .data_out                      ( buffer_2_out                  [DATA_WIDTH-1:0] )
);
//////////////////////////////////////////////////////////////////

wire sel_04;
assign sel_04 = (sigmoid|silu|tanh)?1:0;
wire [DATA_WIDTH-1:0] mux_04_data_out;
wire                  mux_04_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_04 (
   .sel                     ( sel_04             ),
   .A                       ( adder_0_data_out_channel_1[WIDTH-1:0] ),
   .B                       ( gelu_lut_data_out         [WIDTH-1:0] ),
   .vld_A                   ( adder_0_vld_out_channel_1                ),
   .vld_B                   ( gelu_lut_vld_out                     ),

   .C                       ( mux_04_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_04_vld_out                   )
);  

///////////////////////////////////////////////////////////////////
wire sel_05;
assign sel_05 = (softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_05_data_out;
wire                  mux_05_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_05 (
   .sel                     ( sel_05             ),
   .A                       ( sum_exp[WIDTH-1:0] ),
   .B                       ( mux_04_data_out         [WIDTH-1:0] ),
   .vld_A                   ( sum_exp_vld                ),
   .vld_B                   ( mux_04_vld_out                     ),

   .C                       ( mux_05_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_05_vld_out                   )
);  

//////////////////////////////////////////////////////////////////
wire [WIDTH-1:0] log2_x_1_data_out;
wire             log2_x_1_vld_out;
log2_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_log2_X_1 (
    .Oprand_A                ( mux_05_data_out      [WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( mux_05_vld_out                     ),

    .Result                  ( log2_x_1_data_out  [DATA_WIDTH-1:0] ),
    .vld_out                 ( log2_x_1_vld_out                    )
);

wire [WIDTH-1:0] log2_x_1_data_out_channel_0,log2_x_1_data_out_channel_1;
wire log2_x_1_vld_out_channel_0,log2_x_1_vld_out_channel_1;

assign log2_x_1_data_out_channel_0 =(sigmoid|tanh)?{~log2_x_1_data_out  [DATA_WIDTH-1],log2_x_1_data_out  [DATA_WIDTH-2:0]}:0;
assign log2_x_1_vld_out_channel_0  =(sigmoid|tanh)?log2_x_1_vld_out:0;

assign log2_x_1_data_out_channel_1 =(silu|gelu|softmax)?{{(gelu?log2_x_1_data_out  [DATA_WIDTH-1]:~log2_x_1_data_out[DATA_WIDTH-1])},log2_x_1_data_out  [DATA_WIDTH-2:0]}:0;
assign log2_x_1_vld_out_channel_1  =(silu|gelu|softmax)?log2_x_1_vld_out:0;


wire sign_X;
wire wr_en_sign_X;
wire expo_sth_0 = (~log2_x_1_data_out[DATA_WIDTH-2])&(~(&log2_x_1_data_out[DATA_WIDTH-3:DATA_WIDTH-9]));
assign sign_X = (gelu&(~expo_sth_0)|(silu&(~expo_sth_0)))?1:0;
assign wr_en_sign_X = (gelu|silu) & log2_x_1_vld_out;
//////////////////////////////////////////////////////////////
wire buffer_sign_out;
fifo_FPU #(
   .FIFO_DEPTH ( 16 ),
   .DATA_WIDTH ( 1 ))
u_buffer_sign (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( _2_X_vld_out                                    ),///////?///////////
   .wr_en                         ( wr_en_sign_X                             ),
   .data_in                       ( sign_X                                   ),

   .data_out                      ( buffer_sign_out                   )
);
///////////////////////////////////////////////////////////////////////
wire sel_06;
assign sel_06 = (softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_06_data_out;
wire                  mux_06_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_06 (
   .sel                    ( sel_06             ),
   .A                       ( buffer_1_out[WIDTH-1:0] ),
   .B                       ( 32'hBF800000 ),
   .vld_A                   ( sum_exp_vld                ),
   .vld_B                   ( 1'b1                     ),

   .C                       ( mux_06_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_06_vld_out                   )
); 
///////////////////////////////////////////////////////////////////////////

wire sel_07;
assign sel_07 = (silu|gelu|softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_07_data_out,mux_07_data_out_reg;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_07 (
   .sel                    ( sel_07             ),
   .A                       ( log2_x_1_data_out_channel_1 ),
   .B                       (  x_mul_2_2_data_out ),
   .vld_A                   ( log2_x_1_vld_out_channel_1                ),
   .vld_B                   (   x_mul_2_2_vld_out                   ),

   .C                       ( mux_07_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_07_vld_out                   )
);

dff_en #(.WIDTH(WIDTH)) dff_mux_07_data_out (mux_07_data_out,clk,en,rst_n,mux_07_data_out_reg);
dff_en #(.WIDTH(1)) dff_mux_07_vld_out (mux_07_vld_out,clk,en,rst_n,mux_07_vld_out_reg);
/////////////////////////////////////////////////////////////////


wire sel_08;
assign sel_08 = (silu|gelu)?1:0;
wire [DATA_WIDTH-1:0] mux_08_data_out;
wire                  mux_08_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_08 (
   .sel                    ( sel_08             ),
   .A                       ( buffer_2_out ),
   .B                       ( mux_06_data_out ),/////////////?////////////////////////////////////
   .vld_A                   ( 1'b1                ),
   .vld_B                   ( mux_06_vld_out                    ),/////////////?//////////////////////////

   .C                       ( mux_08_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_08_vld_out                   )
);

////////////////////////////////////////////////

wire [DATA_WIDTH-1:0] adder_1_data_out;
wire                  adder_1_vld_out;
float_adder_2nd #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_float_adder_1 (
    .Oprand_A                ( mux_07_data_out_reg  [DATA_WIDTH-1:0] ),
    .Oprand_B                ( mux_08_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_08_vld_out & mux_07_vld_out_reg),

    .Result                  ( adder_1_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( adder_1_vld_out                      )
);
/////////////////////////////////////////////////

wire sel_09;
assign sel_09 = (tanh | sigmoid)?1:0;
wire [DATA_WIDTH-1:0] mux_09_data_out;
wire                  mux_09_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_09 (
   .sel                     ( sel_09             ),
   .A                       ( log2_x_1_data_out_channel_0 ),
   .B                       ( adder_1_data_out ),/////////////?////////////////////////////////////
   .vld_A                   ( log2_x_1_vld_out_channel_0                ),
   .vld_B                   ( adder_1_vld_out                    ),/////////////?//////////////////////////

   .C                       ( mux_09_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_09_vld_out                   )
);

//////////////////////////////////////////////
wire [WIDTH-1:0] _2_X_data_out;
_2_power_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u__2_power_X_2 (
    .Oprand_A                ( mux_09_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_09_vld_out             ),

    .Result                  ( _2_X_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( _2_X_vld_out                    )
);

wire [WIDTH-1:0]_2_X_data_out_channel_0,_2_X_data_out_channel_1,_2_X_data_out_channel_2;
wire _2_X_vld_out_channel_0,_2_X_vld_out_channel_1,_2_X_vld_out_channel_2;

assign _2_X_data_out_channel_0 = (gelu|silu) ? _2_X_data_out:0;
assign _2_X_vld_out_channel_0  = (gelu|silu) ? _2_X_vld_out:0;

assign _2_X_data_out_channel_1 = (sigmoid|softmax) ? _2_X_data_out:0;
assign _2_X_vld_out_channel_1  = (sigmoid|softmax) ? _2_X_vld_out:0;

assign _2_X_data_out_channel_2 = tanh ? _2_X_data_out:0;
assign _2_X_vld_out_channel_2  = tanh ? _2_X_vld_out:0;
///////////////////////////////////////////////////////////////////////////////
wire sel_10;
assign sel_10 = (gelu|silu) ?1:0;
wire [DATA_WIDTH-1:0] mux_10_data_out;
wire                  mux_10_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_10 (
   .sel                     ( sel_10             ),
   .A                       ( {buffer_sign_out,_2_X_data_out_channel_0[WIDTH-2:0]} ),
   .B                       ( _2_X_data_out_channel_1 ),
   .vld_A                   ( _2_X_vld_out_channel_0                ),
   .vld_B                   ( _2_X_vld_out_channel_1                    ),

   .C                       ( mux_10_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_10_vld_out                   )
);
////////////////////////////////////////////////////////////////////////////////////
x_mul_2 #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_x_mul_2_2 (
    .Oprand_A                ( _2_X_data_out_channel_2  [DATA_WIDTH-1:0] ),
    .vld_in                  ( _2_X_vld_out_channel_2                     ),
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .Result                  ( x_mul_2_2_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( x_mul_2_2_vld_out                    )
);
////////////////////////////////////////////////////////////////////////////////////////
wire sel_11;
assign sel_11 = tanh ?0:1;
wire [DATA_WIDTH-1:0] mux_11_data_out;
wire                  mux_11_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_11 (
   .sel                     ( sel_11             ),
   .A                       ( mux_10_data_out[DATA_WIDTH-1:0] ),
   .B                       ( adder_1_data_out ),
   .vld_A                   ( mux_10_vld_out                ),
   .vld_B                   ( adder_1_vld_out                 ),

   .C                       ( mux_11_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_11_vld_out                   )
);
//////////////////////////////////////////////////////////////////////////////////////
wire [WIDTH-1:0] relu_data_out,relu_data_out_d;
wire relu_vld_out;
assign relu_data_out_d = input_channel_5[WIDTH-1] ? 0 : input_channel_5;
dff_en #(.WIDTH(WIDTH)) dff_relu (relu_data_out_d,clk,en,rst_n,relu_data_out);
dff_en #(.WIDTH(1)) dff_relu_vld (input_vld_channel_5 ,clk,en,rst_n,relu_vld_out);
wire sel_12;
assign sel_12 = relu ? 0:1;
wire [DATA_WIDTH-1:0] mux_12_data_out;
wire                  mux_12_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_12 (
   .sel                     ( sel_12             ),
   .A                       ( mux_11_data_out      [WIDTH-1:0] ),
   .B                       ( relu_data_out [WIDTH-1:0]),
   .vld_A                   ( mux_11_vld_out      ),
   .vld_B                   ( relu_vld_out              ),

   .C                       ( mux_12_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_12_vld_out                   )
);

assign Result  = mux_12_data_out;
assign vld_out = mux_12_vld_out;

endmodule
module expo_compare #(
        parameter EXPO_WIDTH =8
) (
        input   [EXPO_WIDTH-1:0] expo_a,
        input   [EXPO_WIDTH-1:0] expo_b,
        output  [EXPO_WIDTH-1:0] expo_bigger
);
        assign expo_bigger = (expo_a > expo_b) ? expo_a:expo_b;
endmodule
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
 assign en_stage0 = en & vld_in;
 assign en_stage1 = en & vld_reg0;
 wire   [DATA_WIDTH-1:0]  Oprand_A;
 wire   [DATA_WIDTH-1:0]  Result;
 dff_en #(.WIDTH(DATA_WIDTH))  dff_Oprand_A_reg0 (Oprand_A_D, clk, en_stage0, rst_n, Oprand_A);
 dff_en #(.WIDTH(1)) dff_vld0 (vld_in,clk,en_stage0,rst_n,vld_reg0);
 dff_en #(.WIDTH(DATA_WIDTH))  dff_Result (Result, clk, en_stage1, rst_n, Result_out);
 dff_en #(.WIDTH(1)) dff_vld_out (vld_reg0,clk,en_stage1,rst_n,vld_out);
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
///////////////leading zero/one predictor/////////////////////////////////
module lza_float_32 #(
    parameter WIDTH=32,
    parameter MANT_WIDTH =23
) (
    input   [WIDTH-1:0]         A,
    input   [WIDTH-1:0]         B,
    input                       C_in,
    //input clk,
    //input rst_n,
    //input en,
    output  [$clog2(WIDTH)-1:0] shift_bits,
    output  [WIDTH-1:0]         Result
);
///wire  [$clog2(WIDTH)-1:0] shift_bits;
//wire  [WIDTH-1:0] Result;
//wire  [WIDTH-1:0]         A;
//wire  [WIDTH-1:0]         B;
//wire C_in;
//dff_en #(1) u_dff_en_C ( Carry_in, clk, en, rst_n, C_in);
//dff_en #(.WIDTH(WIDTH)) u_dff_en_A ( A_in, clk, en, rst_n, A);
//dff_en #(.WIDTH(WIDTH)) u_dff_en_B ( B_in, clk, en, rst_n, B);
//dff_en #(.WIDTH(WIDTH)) u_dff_result ( Result,clk, en, rst_n, Result_out);
//dff_en #(.WIDTH($clog2(WIDTH))) u_dff_bits ( shift_bits,clk, en, rst_n, shift_bits_out);
    wire    [MANT_WIDTH+4:0]         Result_part;
    assign Result_part = Result [MANT_WIDTH+4:0] ;
    wire    [WIDTH:0] p,g,z;
    wire    [WIDTH:0]C;
    wire    [MANT_WIDTH+4:0] zero_ind,one_ind;
    wire    [MANT_WIDTH+4:0] zero_F,one_F;
    wire    [MANT_WIDTH+4:0] zero_location,one_location;
    wire    [MANT_WIDTH+4:0] final_location;
    wire    [MANT_WIDTH+4:0] zero_location_shifted,one_location_shifted;
    reg     [$clog2(WIDTH)-1:0] Index;
    wire zero_flag,one_flag;
    assign  shift_bits = Index;
    genvar i;
    /*assign  C[0]=C_in;
    generate
        for(i=1; i<=WIDTH; i=i+1) begin
            assign C[i] = g[i-1] | (p[i-1] & C[i-1]);
        end
    endgenerate*/
    assign p ={1'b0,A^B};
    assign g ={1'b0,A&B};
    assign z ={1'b0,(~A)&(~B)};
///////////////////////////////////
    assign zero_ind[0] = p[0];
    assign one_ind[0]  = !p[0];
    generate
        for(i=MANT_WIDTH+4;i>0;i=i-1)begin
            assign zero_ind[i] = p[i] ^ (!z[i-1]);
            assign one_ind[i]  = p[i] ^ (!g[i-1]);
        end
    endgenerate
    assign zero_F   [MANT_WIDTH+4] = zero_ind[MANT_WIDTH+4];
    assign one_F    [MANT_WIDTH+4] = one_ind[MANT_WIDTH+4];
    assign Result             = p[WIDTH-1:0] ^ C[WIDTH-1:0];
    generate
        for(i=1;i<MANT_WIDTH+4;i=i+1)begin
            assign zero_F[MANT_WIDTH+4-i] = |zero_ind[MANT_WIDTH+4:MANT_WIDTH+4-i];  
            assign one_F[MANT_WIDTH+4-i] =  |one_ind[MANT_WIDTH+4:MANT_WIDTH+4-i];  
        end
    endgenerate

    assign zero_location = ({1'b1,~zero_F[MANT_WIDTH+4:1]}) & zero_ind;
    assign one_location = ({1'b1,~one_F[MANT_WIDTH+4:1]}) & one_ind;
    assign zero_flag= ((zero_location&C[MANT_WIDTH+4:0])!=0) ;
    assign one_flag= ((one_location&C[MANT_WIDTH+4:0])==0) ;
    assign zero_location_shifted = zero_flag ? zero_location <<1 : zero_location;
    assign one_location_shifted  = one_flag ? one_location <<1 : one_location;
    assign final_location = Result[27] ? one_location_shifted :zero_location_shifted;

    always @(*) begin
        case (1'b1)
            final_location[0]:  Index = 28;
            final_location[1]:  Index = 27;
            final_location[2]:  Index = 26;
            final_location[3]:  Index = 25;
            final_location[4]:  Index = 24;
            final_location[5]:  Index = 23;
            final_location[6]:  Index = 22;
            final_location[7]:  Index = 21;
            final_location[8]:  Index = 20;
            final_location[9]:  Index = 19;
            final_location[10]: Index = 18;
            final_location[11]: Index = 17;
            final_location[12]: Index = 16;
            final_location[13]: Index = 15;
            final_location[14]: Index = 14;
            final_location[15]: Index = 13;
            final_location[16]: Index = 12;
            final_location[17]: Index = 11;
            final_location[18]: Index = 10;
            final_location[19]: Index = 9 ;
            final_location[20]: Index = 8 ;
            final_location[21]: Index = 7 ;
            final_location[22]: Index = 6 ;
            final_location[23]: Index = 5 ;
            final_location[24]: Index = 4 ;
            final_location[25]: Index = 3 ;
            final_location[26]: Index = 2 ;
            final_location[27]: Index = 1 ;
            //final_location[28]: Index = ;
            //final_location[29]: Index = ;
            //final_location[30]: Index = ;
            //final_location[31]: Index = ;
            default :Index = 0 ;
        endcase
    end


    wire [7:0] C0,C_10,C_11,C_20,C_21,C_30,C_31;
    wire C00,C01,C02,C03,C04,C05,C06,C07;
    wire C100,C101,C102,C103,C104,C105,C106,C107;
    wire C_out_0,C_out_10,C_out_11,C_out_20,C_out_21,C_out_30,C_out_31;
    wire C_r1,C_r2,Carry_out;
    assign C_r1 = C_out_0 ? C_out_11 :C_out_10;
    assign C_r2 = C_r1 ? C_out_21 :C_out_20;
    assign Carry_out = C_r2 ? C_out_31:C_out_30;
    assign C={Carry_out, C_r2 ? C_31[7:0] : C_30[7:0],C_r1 ? C_21[7:0] : C_20[7:0], C_out_0 ? C_11[7:0] : C_10[7:0],C0[7:0]};
////////group 1///////////////////////
    /*assign C0[0] = C_in;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C0[i] = g[i-1] | (p[i-1] & C0[i-1]);
        end
    endgenerate*/

    assign C00 =C_in;
    assign C01 =g[0] | (p[0] & C00);
    assign C02 =g[1] | (p[1] & C01);
    assign C03 =g[2] | (p[2] & C02);
    assign C04 =g[3] | (p[3] & C03);
    assign C05 =g[4] | (p[4] & C04);
    assign C06 =g[5] | (p[5] & C05);
    assign C07 =g[6] | (p[6] & C06);
    assign C_out_0 = g[7] | (p[7] & C07);
    assign C0 ={C07,C06,C05,C04,C03,C02,C01,C00};

///////group 2//////////////////////////
    /*assign C_10[0] =0;
    assign C_11[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_10[i] = g[i+7] | (p[i+7]&C_10[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_11[i] = g[i+7] | (p[i+7]&C_11[i-1]);
        end
    endgenerate*/
wire C_100;
wire C_110;
wire C_101;
wire C_111;
wire C_102;
wire C_112;
wire C_103;
wire C_113;
wire C_104;
wire C_114;
wire C_105;
wire C_115;
wire C_106;
wire C_116;
wire C_107;
wire C_117;
assign C_10={C_107,C_106,C_105,C_104,C_103,C_102,C_101,C_100};
assign C_11={C_117,C_116,C_115,C_114,C_113,C_112,C_111,C_110};
assign C_100=0;
assign C_110=1;
assign C_101 = g[8] | (p[8]&C_100);
assign C_111 = g[8] | (p[8]&C_110);
assign C_102 = g[9] | (p[9]&C_101);
assign C_112 = g[9] | (p[9]&C_111);
assign C_103 = g[10] | (p[10]&C_102);
assign C_113 = g[10] | (p[10]&C_112);
assign C_104 = g[11] | (p[11]&C_103);
assign C_114 = g[11] | (p[11]&C_113);
assign C_105 = g[12] | (p[12]&C_104);
assign C_115 = g[12] | (p[12]&C_114);
assign C_106 = g[13] | (p[13]&C_105);
assign C_116 = g[13] | (p[13]&C_115);
assign C_107 = g[14] | (p[14]&C_106);
assign C_117 = g[14] | (p[14]&C_116);

    assign C_out_10 = g[15] | (p[15] & C_107);
    assign C_out_11 = g[15] | (p[15] & C_117);
//////////group3///////////////////////////////////
   /*assign C_20[0] =0;
    assign C_21[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_20[i] = g[i+15] | (p[i+15]&C_20[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_21[i] = g[i+15] | (p[i+15]&C_21[i-1]);
        end
    endgenerate*/
wire C_200;
wire C_210;
wire C_201;
wire C_211;
wire C_202;
wire C_212;
wire C_203;
wire C_213;
wire C_204;
wire C_214;
wire C_205;
wire C_215;
wire C_206;
wire C_216;
wire C_207;
wire C_217;
assign C_20={C_207,C_206,C_205,C_204,C_203,C_202,C_201,C_200};
assign C_21={C_217,C_216,C_215,C_214,C_213,C_212,C_211,C_210};
assign C_200=0;
assign C_210=1;
assign C_201 = g[16] | (p[16]&C_200);
assign C_211 = g[16] | (p[16]&C_210);
assign C_202 = g[17] | (p[17]&C_201);
assign C_212 = g[17] | (p[17]&C_211);
assign C_203 = g[18] | (p[18]&C_202);
assign C_213 = g[18] | (p[18]&C_212);
assign C_204 = g[19] | (p[19]&C_203);
assign C_214 = g[19] | (p[19]&C_213);
assign C_205 = g[20] | (p[20]&C_204);
assign C_215 = g[20] | (p[20]&C_214);
assign C_206 = g[21] | (p[21]&C_205);
assign C_216 = g[21] | (p[21]&C_215);
assign C_207 = g[22] | (p[22]&C_206);
assign C_217 = g[22] | (p[22]&C_216);

    assign C_out_20 = g[23] | (p[23] & C_207);
    assign C_out_21 = g[23] | (p[23] & C_217);
//////////group4////////////////////////////////////////
    /*assign C_30[0] =0;
    assign C_31[0] =1;
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_30[i] = g[i+23] | (p[i+23]&C_30[i-1]);
        end
    endgenerate
    generate
        for(i=1; i<=7; i=i+1) begin
            assign C_31[i] = g[i+23] | (p[i+23]&C_31[i-1]);
        end
    endgenerate*/
    wire C_300;
wire C_310;
wire C_301;
wire C_311;
wire C_302;
wire C_312;
wire C_303;
wire C_313;
wire C_304;
wire C_314;
wire C_305;
wire C_315;
wire C_306;
wire C_316;
wire C_307;
wire C_317;
assign C_30={C_307,C_306,C_305,C_304,C_303,C_302,C_301,C_300};
assign C_31={C_317,C_316,C_315,C_314,C_313,C_312,C_311,C_310};
assign C_300=0;
assign C_310=1;
assign C_301 = g[24] | (p[24]&C_300);
assign C_311 = g[24] | (p[24]&C_310);
assign C_302 = g[25] | (p[25]&C_301);
assign C_312 = g[25] | (p[25]&C_311);
assign C_303 = g[26] | (p[26]&C_302);
assign C_313 = g[26] | (p[26]&C_312);
assign C_304 = g[27] | (p[27]&C_303);
assign C_314 = g[27] | (p[27]&C_313);
assign C_305 = g[28] | (p[28]&C_304);
assign C_315 = g[28] | (p[28]&C_314);
assign C_306 = g[29] | (p[29]&C_305);
assign C_316 = g[29] | (p[29]&C_315);
assign C_307 = g[30] | (p[30]&C_306);
assign C_317 = g[30] | (p[30]&C_316);

    assign C_out_30 = g[31] | (p[31] & C_307);
    assign C_out_31 = g[31] | (p[31] & C_317);
endmodule
