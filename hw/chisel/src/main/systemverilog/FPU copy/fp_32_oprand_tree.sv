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
