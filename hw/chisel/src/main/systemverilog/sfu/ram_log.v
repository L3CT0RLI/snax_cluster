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
    input wire en,
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b      // Port B data output
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    /*initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_log2.mem", ram);
    end*/

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin
            q_a <= 0;
        end
        else if(en)begin
            case(addr_a)
            5'd0:begin
q_a <= 'h0362    ;end
5'd1:begin
q_a <= 'h0668    ;end
5'd2:begin
q_a <= 'h091D    ;end
5'd3:begin
q_a <= 'h0B84    ;end
5'd4:begin
q_a <= 'h0DA3    ;end
5'd5:begin
q_a <= 'h0F7C    ;end
5'd6:begin
q_a <= 'h1114    ;end
5'd7:begin
q_a <= 'h126D    ;end
5'd8:begin
q_a <= 'h138C    ;end
5'd9:begin
q_a <= 'h1472    ;end
5'd10:begin
q_a <= 'h1523    ;end
5'd11:begin
q_a <= 'h15A0    ;end
5'd12:begin
q_a <= 'h15ED    ;end
5'd13:begin
q_a <= 'h160B    ;end
5'd14:begin
q_a <= 'h15FC    ;end
5'd15:begin
q_a <= 'h15C2    ;end
5'd16:begin
q_a <= 'h1560    ;end
5'd17:begin
q_a <= 'h14D6    ;end
5'd18:begin
q_a <= 'h1426    ;end
5'd19:begin
q_a <= 'h1351    ;end
5'd20:begin
q_a <= 'h125A    ;end
5'd21:begin
q_a <= 'h1141    ;end
5'd22:begin
q_a <= 'h1008    ;end
5'd23:begin
q_a <= 'h0EB0    ;end
5'd24:begin
q_a <= 'h0D39    ;end
5'd25:begin
q_a <= 'h0BA5    ;end
5'd26:begin
q_a <= 'h09F5    ;end
5'd27:begin
q_a <= 'h082A    ;end
5'd28:begin
q_a <= 'h0645    ;end
5'd29:begin
q_a <= 'h0446    ;end
5'd30:begin
q_a <= 'h022F    ;end
5'd31:begin
q_a <= 'h0000    ;end
default:q_a<=0;
        endcase
        end
        else begin
            q_a <=q_a;
        end
    end

always @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin
            q_b <= 0;
        end
        else if(en)begin
            case(addr_b)
           5'd0:begin
q_b <= 'h0362    ;end
5'd1:begin
q_b <= 'h0668    ;end
5'd2:begin
q_b <= 'h091D    ;end
5'd3:begin
q_b <= 'h0B84    ;end
5'd4:begin
q_b <= 'h0DA3    ;end
5'd5:begin
q_b <= 'h0F7C    ;end
5'd6:begin
q_b <= 'h1114    ;end
5'd7:begin
q_b <= 'h126D    ;end
5'd8:begin
q_b <= 'h138C    ;end
5'd9:begin
q_b <= 'h1472    ;end
5'd10:begin
q_b <= 'h1523    ;end
5'd11:begin
q_b <= 'h15A0    ;end
5'd12:begin
q_b <= 'h15ED    ;end
5'd13:begin
q_b <= 'h160B    ;end
5'd14:begin
q_b <= 'h15FC    ;end
5'd15:begin
q_b <= 'h15C2    ;end
5'd16:begin
q_b <= 'h1560    ;end
5'd17:begin
q_b <= 'h14D6    ;end
5'd18:begin
q_b <= 'h1426    ;end
5'd19:begin
q_b <= 'h1351    ;end
5'd20:begin
q_b <= 'h125A    ;end
5'd21:begin
q_b <= 'h1141    ;end
5'd22:begin
q_b <= 'h1008    ;end
5'd23:begin
q_b <= 'h0EB0    ;end
5'd24:begin
q_b <= 'h0D39    ;end
5'd25:begin
q_b <= 'h0BA5    ;end
5'd26:begin
q_b <= 'h09F5    ;end
5'd27:begin
q_b <= 'h082A    ;end
5'd28:begin
q_b <= 'h0645    ;end
5'd29:begin
q_b <= 'h0446    ;end
5'd30:begin
q_b <= 'h022F    ;end
5'd31:begin
q_b <= 'h0000    ;end
default:q_b<=0;
        endcase
        end
        else begin
            q_b <=q_b;
        end
    end

endmodule
