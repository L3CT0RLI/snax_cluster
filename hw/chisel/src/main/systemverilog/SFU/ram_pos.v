module dual_port_ram_pos #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 20
) (
    input wire clk,
    input wire [ADDR_WIDTH-1:0] addr_a,  // Port A address
    input wire [ADDR_WIDTH-1:0] addr_b,  // Port B address
    input wire [DATA_WIDTH-1:0] data_a,  // Port A data input
    input wire [DATA_WIDTH-1:0] data_b,  // Port B data input
    input wire we_a,                     // Port A write enable
    input wire we_b,                     // Port B write enable
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b,      // Port B data output
    input rst_n
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    /*initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_exp_pos.mem", ram);
    end*/

    always @(posedge clk) begin
        if(!rst_n)begin
            q_a <= 0;
        end
        else begin
            case(addr_a)
                5'd0:begin
q_a <= 'h0267    ;end
5'd1:begin
q_a <= 'h04AD    ;end
5'd2:begin
q_a <= 'h06D2    ;end
5'd3:begin
q_a <= 'h08D7    ;end
5'd4:begin
q_a <= 'h0ABA    ;end
5'd5:begin
q_a <= 'h0C7B    ;end
5'd6:begin
q_a <= 'h0E19    ;end
5'd7:begin
q_a <= 'h0F93    ;end
5'd8:begin
q_a <= 'h10E8    ;end
5'd9:begin
q_a <= 'h1218    ;end
5'd10:begin
q_a <= 'h1322    ;end
5'd11:begin
q_a <= 'h1405    ;end
5'd12:begin
q_a <= 'h14C0    ;end
5'd13:begin
q_a <= 'h1552    ;end
5'd14:begin
q_a <= 'h15BB    ;end
5'd15:begin
q_a <= 'h15F9    ;end
5'd16:begin
q_a <= 'h160C    ;end
5'd17:begin
q_a <= 'h15F2    ;end
5'd18:begin
q_a <= 'h15AA    ;end
5'd19:begin
q_a <= 'h1535    ;end
5'd20:begin
q_a <= 'h1490    ;end
5'd21:begin
q_a <= 'h13BA    ;end
5'd22:begin
q_a <= 'h12B3    ;end
5'd23:begin
q_a <= 'h1179    ;end
5'd24:begin
q_a <= 'h100C    ;end
5'd25:begin
q_a <= 'h0E6A    ;end
5'd26:begin
q_a <= 'h0C91    ;end
5'd27:begin
q_a <= 'h0A82    ;end
5'd28:begin
q_a <= 'h083A    ;end
5'd29:begin
q_a <= 'h05B9    ;end
5'd30:begin
q_a <= 'h02FC    ;end
5'd31:begin
q_a <= 'h0004    ;end
            endcase
        end
    end

always @(posedge clk) begin
        if(!rst_n)begin
            q_b <= 0;
        end
        else begin
            case(addr_b)
               5'd0:begin
q_b <= 'h0267    ;end
5'd1:begin
q_b <= 'h04AD    ;end
5'd2:begin
q_b <= 'h06D2    ;end
5'd3:begin
q_b <= 'h08D7    ;end
5'd4:begin
q_b <= 'h0ABA    ;end
5'd5:begin
q_b <= 'h0C7B    ;end
5'd6:begin
q_b <= 'h0E19    ;end
5'd7:begin
q_b <= 'h0F93    ;end
5'd8:begin
q_b <= 'h10E8    ;end
5'd9:begin
q_b <= 'h1218    ;end
5'd10:begin
q_b <= 'h1322    ;end
5'd11:begin
q_b <= 'h1405    ;end
5'd12:begin
q_b <= 'h14C0    ;end
5'd13:begin
q_b <= 'h1552    ;end
5'd14:begin
q_b <= 'h15BB    ;end
5'd15:begin
q_b <= 'h15F9    ;end
5'd16:begin
q_b <= 'h160C    ;end
5'd17:begin
q_b <= 'h15F2    ;end
5'd18:begin
q_b <= 'h15AA    ;end
5'd19:begin
q_b <= 'h1535    ;end
5'd20:begin
q_b <= 'h1490    ;end
5'd21:begin
q_b <= 'h13BA    ;end
5'd22:begin
q_b <= 'h12B3    ;end
5'd23:begin
q_b <= 'h1179    ;end
5'd24:begin
q_b <= 'h100C    ;end
5'd25:begin
q_b <= 'h0E6A    ;end
5'd26:begin
q_b <= 'h0C91    ;end
5'd27:begin
q_b <= 'h0A82    ;end
5'd28:begin
q_b <= 'h083A    ;end
5'd29:begin
q_b <= 'h05B9    ;end
5'd30:begin
q_b <= 'h02FC    ;end
5'd31:begin
q_b <= 'h0004    ;end
            endcase
        end
    end
endmodule
