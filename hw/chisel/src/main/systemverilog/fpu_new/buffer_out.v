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
