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
