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
