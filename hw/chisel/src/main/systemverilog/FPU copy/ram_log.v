module dual_port_ram_log #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 20
) (
    input wire clk,
    input wire rst_n,
    input wire [ADDR_WIDTH-1:0] addr_a,  // Port A address
    input wire [ADDR_WIDTH-1:0] addr_b,  // Port B address
    input wire [DATA_WIDTH-1:0] data_a,  // Port A data input
    input wire [DATA_WIDTH-1:0] data_b,  // Port B data input
    input wire we_a,                     // Port A write enable
    input wire we_b,                     // Port B write enable
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b      // Port B data output
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_log2.mem", ram);
    end

    always @(posedge clk or negedge rst_n) begin
        // Port A operations
        //if (we_a) begin
        //    ram[addr_a] <= data_a;
        //end
                // Port B operations
        //if (we_b) begin
        //    ram[addr_b] <= data_b;
        //end
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
