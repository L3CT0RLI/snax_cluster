module dual_port_ram_gelu #(
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
    input en,
    output reg [DATA_WIDTH-1:0] q_a,     // Port A data output
    output reg [DATA_WIDTH-1:0] q_b      // Port B data output
);
    parameter RAM_DEPTH = 1 << ADDR_WIDTH;

    // RAM memory
    //reg [DATA_WIDTH-1:0] ram [0:RAM_DEPTH-1];

    // Initialize RAM from file
    /*initial begin
        $readmemh("F:/learning/verilog/masterthesis/Master-Thesis/arith_modules/memory_init_gelu.mem", ram);
    end*/

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin
            q_a <= 0;
        end
        else if(en)begin
            case(addr_a)
                7'd0:begin
q_a <= 'h0330    ;end
7'd1:begin
q_a <= 'h0661    ;end
7'd2:begin
q_a <= 'h098F    ;end
7'd3:begin
q_a <= 'h0CBB    ;end
7'd4:begin
q_a <= 'h0FE4    ;end
7'd5:begin
q_a <= 'h1309    ;end
7'd6:begin
q_a <= 'h1629    ;end
7'd7:begin
q_a <= 'h1944    ;end
7'd8:begin
q_a <= 'h1C59    ;end
7'd9:begin
q_a <= 'h1F67    ;end
7'd10:begin
q_a <= 'h226D    ;end
7'd11:begin
q_a <= 'h256B    ;end
7'd12:begin
q_a <= 'h2860    ;end
7'd13:begin
q_a <= 'h2B4B    ;end
7'd14:begin
q_a <= 'h2E2D    ;end
7'd15:begin
q_a <= 'h3103    ;end
7'd16:begin
q_a <= 'h33CE    ;end
7'd17:begin
q_a <= 'h368E    ;end
7'd18:begin
q_a <= 'h3941    ;end
7'd19:begin
q_a <= 'h3BE8    ;end
7'd20:begin
q_a <= 'h3E81    ;end
7'd21:begin
q_a <= 'h410D    ;end
7'd22:begin
q_a <= 'h438B    ;end
7'd23:begin
q_a <= 'h45FB    ;end
7'd24:begin
q_a <= 'h485D    ;end
7'd25:begin
q_a <= 'h4AAF    ;end
7'd26:begin
q_a <= 'h4CF3    ;end
7'd27:begin
q_a <= 'h4F28    ;end
7'd28:begin
q_a <= 'h514E    ;end
7'd29:begin
q_a <= 'h5364    ;end
7'd30:begin
q_a <= 'h556B    ;end
7'd31:begin
q_a <= 'h5762       ;end
7'd32:begin
q_a <= 'h594A    ;end
7'd33:begin
q_a <= 'h5B22    ;end
7'd34:begin
q_a <= 'h5CEB    ;end
7'd35:begin
q_a <= 'h5EA5    ;end
7'd36:begin
q_a <= 'h604F    ;end
7'd37:begin
q_a <= 'h61EA    ;end
7'd38:begin
q_a <= 'h6376    ;end
7'd39:begin
q_a <= 'h64F4    ;end
7'd40:begin
q_a <= 'h6662    ;end
7'd41:begin
q_a <= 'h67C3    ;end
7'd42:begin
q_a <= 'h6915    ;end
7'd43:begin
q_a <= 'h6A59    ;end
7'd44:begin
q_a <= 'h6B90    ;end
7'd45:begin
q_a <= 'h6CB9    ;end
7'd46:begin
q_a <= 'h6DD6    ;end
7'd47:begin
q_a <= 'h6EE5    ;end
7'd48:begin
q_a <= 'h6FE8    ;end
7'd49:begin
q_a <= 'h70DF    ;end
7'd50:begin
q_a <= 'h71CB    ;end
7'd51:begin
q_a <= 'h72AA    ;end
7'd52:begin
q_a <= 'h737F    ;end
7'd53:begin
q_a <= 'h7449    ;end
7'd54:begin
q_a <= 'h7509    ;end
7'd55:begin
q_a <= 'h75BE    ;end
7'd56:begin
q_a <= 'h766A    ;end
7'd57:begin
q_a <= 'h770D    ;end
7'd58:begin
q_a <= 'h77A6    ;end
7'd59:begin
q_a <= 'h7837    ;end
7'd60:begin
q_a <= 'h78C0    ;end
7'd61:begin
q_a <= 'h7941    ;end
7'd62:begin
q_a <= 'h79BA    ;end
7'd63:begin
q_a <= 'h7A2D    ;end
7'd64:begin
q_a <= 'h7AFC    ;end
7'd65:begin
q_a <= 'h7BB3    ;end
7'd66:begin
q_a <= 'h7C53    ;end
7'd67:begin
q_a <= 'h7CDE    ;end
7'd68:begin
q_a <= 'h7D58    ;end
7'd69:begin
q_a <= 'h7DC0    ;end
7'd70:begin
q_a <= 'h7E1B    ;end
7'd71:begin
q_a <= 'h7E69    ;end
7'd72:begin
q_a <= 'h7EAB    ;end
7'd73:begin
q_a <= 'h7EE4    ;end
7'd74:begin
q_a <= 'h7F14    ;end
7'd75:begin
q_a <= 'h7F3C    ;end
7'd76:begin
q_a <= 'h7F5E    ;end
7'd77:begin
q_a <= 'h7F7B    ;end
7'd78:begin
q_a <= 'h7F93    ;end
7'd79:begin
q_a <= 'h7FA7    ;end
7'd80:begin
q_a <= 'h7FB8    ;end
7'd81:begin
q_a <= 'h7FC5    ;end
7'd82:begin
q_a <= 'h7FD0    ;end
7'd83:begin
q_a <= 'h7FDA    ;end
7'd84:begin
q_a <= 'h7FE1    ;end
7'd85:begin
q_a <= 'h7FE7    ;end
7'd86:begin
q_a <= 'h7FEC    ;end
7'd87:begin
q_a <= 'h7FF0    ;end
7'd88:begin
q_a <= 'h7FF3    ;end
7'd89:begin
q_a <= 'h7FF6    ;end
7'd90:begin
q_a <= 'h7FF8    ;end
7'd91:begin
q_a <= 'h7FFA    ;end
7'd92:begin
q_a <= 'h7FFB    ;end
7'd93:begin
q_a <= 'h7FFC    ;end
7'd94:begin
q_a <= 'h7FFD    ;end
7'd95:begin
q_a <= 'h7FFD  ;end
default:q_a<='h0;
            endcase
        end
        else begin
            q_a <= q_a;
        end
    end

always @(posedge clk or negedge rst_n) begin
    if(!rst_n)begin
        q_b <= 0;
    end
    else if(en)begin
        case(addr_b)
7'd0:begin
q_b <= 'h0330    ;end
7'd1:begin
q_b <= 'h0661    ;end
7'd2:begin
q_b <= 'h098F    ;end
7'd3:begin
q_b <= 'h0CBB    ;end
7'd4:begin
q_b <= 'h0FE4    ;end
7'd5:begin
q_b <= 'h1309    ;end
7'd6:begin
q_b <= 'h1629    ;end
7'd7:begin
q_b <= 'h1944    ;end
7'd8:begin
q_b <= 'h1C59    ;end
7'd9:begin
q_b <= 'h1F67    ;end
7'd10:begin
q_b <= 'h226D    ;end
7'd11:begin
q_b <= 'h256B    ;end
7'd12:begin
q_b <= 'h2860    ;end
7'd13:begin
q_b <= 'h2B4B    ;end
7'd14:begin
q_b <= 'h2E2D    ;end
7'd15:begin
q_b <= 'h3103    ;end
7'd16:begin
q_b <= 'h33CE    ;end
7'd17:begin
q_b <= 'h368E    ;end
7'd18:begin
q_b <= 'h3941    ;end
7'd19:begin
q_b <= 'h3BE8    ;end
7'd20:begin
q_b <= 'h3E81    ;end
7'd21:begin
q_b <= 'h410D    ;end
7'd22:begin
q_b <= 'h438B    ;end
7'd23:begin
q_b <= 'h45FB    ;end
7'd24:begin
q_b <= 'h485D    ;end
7'd25:begin
q_b <= 'h4AAF    ;end
7'd26:begin
q_b <= 'h4CF3    ;end
7'd27:begin
q_b <= 'h4F28    ;end
7'd28:begin
q_b <= 'h514E    ;end
7'd29:begin
q_b <= 'h5364    ;end
7'd30:begin
q_b <= 'h556B    ;end
7'd31:begin
q_b <= 'h5762       ;end
7'd32:begin
q_b <= 'h594A    ;end
7'd33:begin
q_b <= 'h5B22    ;end
7'd34:begin
q_b <= 'h5CEB    ;end
7'd35:begin
q_b <= 'h5EA5    ;end
7'd36:begin
q_b <= 'h604F    ;end
7'd37:begin
q_b <= 'h61EA    ;end
7'd38:begin
q_b <= 'h6376    ;end
7'd39:begin
q_b <= 'h64F4    ;end
7'd40:begin
q_b <= 'h6662    ;end
7'd41:begin
q_b <= 'h67C3    ;end
7'd42:begin
q_b <= 'h6915    ;end
7'd43:begin
q_b <= 'h6A59    ;end
7'd44:begin
q_b <= 'h6B90    ;end
7'd45:begin
q_b <= 'h6CB9    ;end
7'd46:begin
q_b <= 'h6DD6    ;end
7'd47:begin
q_b <= 'h6EE5    ;end
7'd48:begin
q_b <= 'h6FE8    ;end
7'd49:begin
q_b <= 'h70DF    ;end
7'd50:begin
q_b <= 'h71CB    ;end
7'd51:begin
q_b <= 'h72AA    ;end
7'd52:begin
q_b <= 'h737F    ;end
7'd53:begin
q_b <= 'h7449    ;end
7'd54:begin
q_b <= 'h7509    ;end
7'd55:begin
q_b <= 'h75BE    ;end
7'd56:begin
q_b <= 'h766A    ;end
7'd57:begin
q_b <= 'h770D    ;end
7'd58:begin
q_b <= 'h77A6    ;end
7'd59:begin
q_b <= 'h7837    ;end
7'd60:begin
q_b <= 'h78C0    ;end
7'd61:begin
q_b <= 'h7941    ;end
7'd62:begin
q_b <= 'h79BA    ;end
7'd63:begin
q_b <= 'h7A2D    ;end
7'd64:begin
q_b <= 'h7AFC    ;end
7'd65:begin
q_b <= 'h7BB3    ;end
7'd66:begin
q_b <= 'h7C53    ;end
7'd67:begin
q_b <= 'h7CDE    ;end
7'd68:begin
q_b <= 'h7D58    ;end
7'd69:begin
q_b <= 'h7DC0    ;end
7'd70:begin
q_b <= 'h7E1B    ;end
7'd71:begin
q_b <= 'h7E69    ;end
7'd72:begin
q_b <= 'h7EAB    ;end
7'd73:begin
q_b <= 'h7EE4    ;end
7'd74:begin
q_b <= 'h7F14    ;end
7'd75:begin
q_b <= 'h7F3C    ;end
7'd76:begin
q_b <= 'h7F5E    ;end
7'd77:begin
q_b <= 'h7F7B    ;end
7'd78:begin
q_b <= 'h7F93    ;end
7'd79:begin
q_b <= 'h7FA7    ;end
7'd80:begin
q_b <= 'h7FB8    ;end
7'd81:begin
q_b <= 'h7FC5    ;end
7'd82:begin
q_b <= 'h7FD0    ;end
7'd83:begin
q_b <= 'h7FDA    ;end
7'd84:begin
q_b <= 'h7FE1    ;end
7'd85:begin
q_b <= 'h7FE7    ;end
7'd86:begin
q_b <= 'h7FEC    ;end
7'd87:begin
q_b <= 'h7FF0    ;end
7'd88:begin
q_b <= 'h7FF3    ;end
7'd89:begin
q_b <= 'h7FF6    ;end
7'd90:begin
q_b <= 'h7FF8    ;end
7'd91:begin
q_b <= 'h7FFA    ;end
7'd92:begin
q_b <= 'h7FFB    ;end
7'd93:begin
q_b <= 'h7FFC    ;end
7'd94:begin
q_b <= 'h7FFD    ;end
7'd95:begin
q_b <= 'h7FFD  ;end
default:q_b<='h0;
endcase
        end
        else begin
            q_b <= q_b;
        end
end
endmodule
