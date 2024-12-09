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
