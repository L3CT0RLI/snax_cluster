module SFU #(
    parameter int UserCsrNum      = 1,
    parameter int DataWidth       = 512,
    parameter int FP_WIDTH        = 32,
    parameter int PE_NUM          = DataWidth/FP_WIDTH,
    parameter int NUM_SOFTMAX_MAX = 512,
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
assign sum_tree_input = (state == SUM_PHASE2|state == COMPUTE_RESULT)? sum_result_shifter :{exp_x_minus_xmax,512'd0};
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
    .OP_NUM     ( 32     ))
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
    .data_valid                    ( )//ext_data_o_valid                               
);
assign ext_data_o_bits = pe_data_out;
assign ext_data_o_valid= vld_PE_out[1];
endmodule
