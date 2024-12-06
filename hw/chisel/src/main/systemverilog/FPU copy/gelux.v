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
