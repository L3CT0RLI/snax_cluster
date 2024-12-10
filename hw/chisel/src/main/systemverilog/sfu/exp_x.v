module exp_x #(
    parameter DATA_WIDTH      = 32,
    parameter EXPO_WIDTH      = 8,
    parameter MANT_WIDTH      = 23,
    parameter WIDTH           = 32,
    parameter INPUT_INT_WIDTH = 7,
    parameter LUT_SIZE        = 32,
    parameter LUT_BITS        = 16
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A,
    output  [DATA_WIDTH-1:0]  Result,
    input                      clk,
    input                      rst_n,
    input                      en,
    input                      vld_in,
    output                     vld_out
 );

 wire  [DATA_WIDTH-1:0]  Result_mid;
 wire vld_mid;
 mul_log2e #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_mul_log2e (
    .Oprand_A_D              ( Oprand_A  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                          ),
    .rst_n                   ( rst_n                        ),
    .en                      ( en                           ),
    .vld_in                  ( vld_in                       ),

    .Result_out              ( Result_mid  [DATA_WIDTH-1:0] ),
    .vld_out                 ( vld_mid                      )
);

_2_power_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u__2_power_X (
    .Oprand_A                ( Result_mid [DATA_WIDTH-1:0]),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( vld_mid                    ),

    .Result                  ( Result    [DATA_WIDTH-1:0] ),
    .vld_out                 ( vld_out                    )
);
endmodule
