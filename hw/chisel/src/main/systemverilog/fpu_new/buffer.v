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
