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
