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
    initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_exp_pos.mem", ram);
    end

    always @(posedge clk) begin
        if(!rst_n)begin
            q_a <= 0;
            q_b <= 0;
        end
        else begin
            q_a <= ram[addr_a];
            q_b <= ram[addr_b];
        end
    end

endmodule
