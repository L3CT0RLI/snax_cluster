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
        assign down_overflow_flag = (!Expo_to_be_normed_1st[EXPO_WIDTH-1])&(Expo_rounded[EXPO_WIDTH])&(!shift_right)|(Mant_normed_2st=='d0);
        assign Result_normal = {final_sign,Expo_rounded[EXPO_WIDTH-1:0],Mant_normed_2st[MANT_WIDTH-1:0]};
        assign Result_d = up_overflow_flag ? {final_sign,8'd255,23'd0}:(down_overflow_flag ?{final_sign,8'd0,23'd0}:(much_larger_reg1 ? Larger_oprand :Result_normal));

     endmodule
     