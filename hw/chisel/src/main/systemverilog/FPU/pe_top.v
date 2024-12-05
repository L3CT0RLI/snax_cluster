module PE_top #(
    parameter DATA_WIDTH      = 32,
    parameter EXPO_WIDTH      = 8,
    parameter MANT_WIDTH      = 23,
    parameter WIDTH           = 32,
    parameter INPUT_INT_WIDTH = 7,
    parameter LUT_SIZE        = 32,
    parameter LUT_BITS        = 16,
    parameter NUM_SOFTMAX_MAX     = 1024,
    parameter NUM_PE          = 32
 )(
    input   [DATA_WIDTH-1:0]  Oprand_A,
    input                     clk,
    input                     rst_n,
    input                     en,
    input                     vld_in,
    input   [DATA_WIDTH-1:0]  sum_exp,
    input   [DATA_WIDTH-1:0]  x_max,       
    input                     x_max_vld, 
    input                     sum_exp_vld,
    input                     [5:0]func,
    output                    vld_out,
    output  [DATA_WIDTH-1:0]  Result,
    output  [DATA_WIDTH-1:0]  exp_x_minus_xmax,
    output                    exp_x_minus_xmax_vld_out
 ); 
 ////////////////////////////////////////////
 wire [WIDTH-1:0] exp_0_data_out_channel_0,exp_0_data_out_channel_1;
wire exp_0_vld_out_channel_0,exp_0_vld_out_channel_1;
wire                  mux_07_vld_out,mux_07_vld_out_reg;
wire _2_X_vld_out;
wire [WIDTH-1:0] x_mul_2_2_data_out;
wire             x_mul_2_2_vld_out;
 ////////////////////////////////////////////
 wire sigmoid,silu,tanh,gelu,softmax,relu;
 assign sigmoid = (func[0] ==1'b1);
 assign silu    = (func[1] ==1'b1);
 assign tanh    = (func[2] ==1'b1);
 assign gelu    = (func[3] ==1'b1);
 assign softmax = (func[4] ==1'b1);
 assign relu    = (func[5] ==1'b1);
 wire [WIDTH-1:0] input_channel_0,input_channel_1,input_channel_2,input_channel_3,input_channel_4,input_channel_5;
 wire  input_vld_channel_0,input_vld_channel_1,input_vld_channel_2,input_vld_channel_3,input_vld_channel_4,input_vld_channel_5;

wire [DATA_WIDTH-1:0] adder_0_data_out_channel_0,adder_0_data_out_channel_1;
wire                  adder_0_vld_out_channel_0,adder_0_vld_out_channel_1;

 assign input_channel_0 = softmax ? Oprand_A :0;
 assign input_vld_channel_0 = softmax ? vld_in:0;

 assign input_channel_1 = tanh ? Oprand_A :0;
 assign input_vld_channel_1 = tanh ? vld_in:0;

 assign input_channel_2 = (sigmoid|silu) ? Oprand_A :0;
 assign input_vld_channel_2 = (sigmoid|silu) ? vld_in:0;

 assign input_channel_3 = (gelu) ? Oprand_A :0;
 assign input_vld_channel_3 = (gelu) ? vld_in:0;

 assign input_channel_4 = (gelu|silu) ? Oprand_A :0;
 assign input_vld_channel_4 = (gelu|silu) ? vld_in:0;

 assign input_channel_5 = (relu) ? Oprand_A :0;
 assign input_vld_channel_5 = (relu) ? vld_in:0;
//////////////////////////////
 wire [WIDTH-1:0]buffer_0_out;
 fifo_FPU #(
    .FIFO_DEPTH ( NUM_SOFTMAX_MAX/NUM_PE ),
    .DATA_WIDTH ( DATA_WIDTH ))
 u_buffer_0 (
    .clk                           ( clk                                            ),
    .rst_n                         ( rst_n                                          ),
    .rd_en                         ( x_max_vld                                      ),
    .wr_en                         ( input_vld_channel_0                            ),
    .data_in                       ( input_channel_0               [DATA_WIDTH-1:0] ),

    .data_out                      ( buffer_0_out                  [DATA_WIDTH-1:0] )
);
//////////////////////////////
 wire [DATA_WIDTH-1:0] x_mul_2_0_out;
 wire                  x_mul_2_0_vld_out;
 x_mul_2 #(
        .DATA_WIDTH ( DATA_WIDTH ),
        .EXPO_WIDTH ( EXPO_WIDTH ),
        .MANT_WIDTH ( MANT_WIDTH ),
        .WIDTH      ( WIDTH      ))
     u_x_mul_2_0 (
        .Oprand_A                (input_channel_1  [DATA_WIDTH-1:0] ),
        .vld_in                  (input_vld_channel_1               ),
        .clk(clk),
        .rst_n(rst_n),
        .en(en),
        .Result                  ( x_mul_2_0_out    [DATA_WIDTH-1:0] ),
        .vld_out                 ( x_mul_2_0_vld_out                 )
    );
////////////////////////////////////////////

///////////////////////////////////////////////////////////////
      wire sel_00;
      assign sel_00 = (sigmoid|silu)?0:1;
      wire [DATA_WIDTH-1:0] mux_00_data_out;
      wire                  mux_00_vld_out;
      mux_vld #(
         .WIDTH ( WIDTH ))
      u_mux_00 (
         .sel                     ( sel_00             ),
         .A                       ( x_mul_2_0_out   [WIDTH-1:0] ),
         .B                       ( input_channel_2      [WIDTH-1:0] ),
         .vld_A                   ( x_mul_2_0_vld_out                ),
         .vld_B                   ( input_vld_channel_2              ),
     
         .C                       ( mux_00_data_out      [WIDTH-1:0] ),
         .vld_C                   ( mux_00_vld_out                   )
     );   
     
////////////////////////////////////////////////////////////////

     wire [DATA_WIDTH-1:0] gelu_lut_data_out;
     wire                  gelu_lut_vld_out;

     gelux #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_gelux (
    .Oprand_A                ( input_channel_3  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( input_vld_channel_3        ),
    .en                      ( en                         ),

    .Result                  ( gelu_lut_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( gelu_lut_vld_out                    )
);

///////////////////////////////////////////////////////////////////
wire sel_01;
assign sel_01 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_01_data_out;
wire                  mux_01_vld_out;
wire x_max_vld_reg;
dff_en #(.WIDTH(1)) dff_x_max_vld (x_max_vld,clk,en,rst_n,x_max_vld_reg);
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_01 (
   .sel                     ( sel_01             ),
   .A                       ( {~x_max[WIDTH-1],x_max[WIDTH-2:0]} ),
   .B                       ( 32'h3F800000 ),
   .vld_A                   ( x_max_vld_reg                ),
   .vld_B                   ( 1'b1                     ),

   .C                       ( mux_01_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_01_vld_out                   )
);  

//////////////////////////////////////////////////////////////////////////////////
wire sel_02;
assign sel_02 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_02_data_out;
wire                  mux_02_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_02 (
   .sel                     ( sel_02             ),
   .A                       ( buffer_0_out                  [DATA_WIDTH-1:0] ),
   .B                       ( exp_0_data_out_channel_0[DATA_WIDTH-1:0] ),//?//
   .vld_A                   ( x_max_vld_reg                ),
   .vld_B                   ( exp_0_vld_out_channel_0                     ),

   .C                       ( mux_02_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_02_vld_out                   )
);  

//////////////////////////////////////////////

wire sel_03;
assign sel_03 = softmax?1:0;
wire [DATA_WIDTH-1:0] mux_03_data_out;
wire                  mux_03_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_03 (
   .sel                     ( sel_03             ),
   .A                       ( adder_0_data_out_channel_0 ),//?//////////
   .B                       ( {{~mux_00_data_out      [WIDTH-1]},mux_00_data_out      [WIDTH-2:0]} ),
   .vld_A                   ( adder_0_vld_out_channel_0                ),
   .vld_B                   ( mux_00_vld_out                     ),

   .C                       ( mux_03_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_03_vld_out                   )
);  

/////////////////////////////////////////////////////
wire [DATA_WIDTH-1:0] adder_0_data_out;
wire                  adder_0_vld_out;
float_adder_2nd #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_float_adder_0 (
    .Oprand_A                ( mux_01_data_out  [DATA_WIDTH-1:0] ),
    .Oprand_B                ( mux_02_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_01_vld_out & mux_02_vld_out),

    .Result                  ( adder_0_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( adder_0_vld_out                      )
);

assign adder_0_data_out_channel_0 = softmax ? adder_0_data_out :0;
assign adder_0_vld_out_channel_0 = softmax ? adder_0_vld_out :0;

assign adder_0_data_out_channel_1 = (sigmoid|silu|tanh) ? adder_0_data_out :0;
assign adder_0_vld_out_channel_1 = (sigmoid|silu|tanh) ? adder_0_vld_out :0;
////////////////////////////////////////////////////
wire [DATA_WIDTH-1:0] mul_log2e_0_data_out;
wire  mul_log2e_0_vld_out;

mul_log2e #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_mul_log2e_0 (
    .Oprand_A_D              ( adder_0_data_out_channel_0  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                          ),
    .rst_n                   ( rst_n                        ),
    .en                      ( en                           ),
    .vld_in                  ( adder_0_vld_out_channel_0    ),

    .Result_out              ( mul_log2e_0_data_out  [DATA_WIDTH-1:0]   ),
    .vld_out                 ( mul_log2e_0_vld_out                      )
);

///////////////////////////////////////////////////
wire [WIDTH-1:0] exp_0_data_out;
wire exp_0_vld_out;
exp_x #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_exp_x_0 (
    .Oprand_A                ( mux_03_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( mux_03_vld_out             ),

    .Result                  ( exp_0_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( exp_0_vld_out                    )
);



assign exp_0_data_out_channel_0 = (sigmoid|silu|tanh)? exp_0_data_out:0;
assign exp_0_vld_out_channel_0 = (sigmoid|silu|tanh)? exp_0_vld_out:0;

assign exp_0_data_out_channel_1 = (softmax)? exp_0_data_out:0;
assign exp_0_vld_out_channel_1 = (softmax)? exp_0_vld_out:0;
assign exp_x_minus_xmax = exp_0_data_out_channel_1;
assign exp_x_minus_xmax_vld_out = exp_0_vld_out_channel_1;
/////////////////////////////////////////////////////
wire [WIDTH-1:0] log2_x_0_data_out;
wire             log2_x_0_vld_out;
log2_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_log2_X_0 (
    .Oprand_A                ( input_channel_4  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( input_vld_channel_4                     ),

    .Result                  ( log2_x_0_data_out  [DATA_WIDTH-1:0] ),
    .vld_out                 ( log2_x_0_vld_out                    )
);

///////////////////////////////////////////////////////////////
wire [WIDTH-1:0]buffer_1_out;
fifo_FPU #(
   .FIFO_DEPTH ( 64 ),
   .DATA_WIDTH ( DATA_WIDTH ))
u_buffer_1 (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( mux_07_vld_out                                      ),///////?///////////
   .wr_en                         ( mul_log2e_0_vld_out                            ),
   .data_in                       ( mul_log2e_0_data_out    [DATA_WIDTH-1:0] ),

   .data_out                      ( buffer_1_out                  [DATA_WIDTH-1:0] )
);
////////////////////////////////////////////////////////////////

wire [WIDTH-1:0]buffer_2_out;
fifo_FPU #(
   .FIFO_DEPTH ( 16 ),
   .DATA_WIDTH ( DATA_WIDTH ))
u_buffer_2 (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( mux_07_vld_out                                      ),///////?///////////
   .wr_en                         ( log2_x_0_vld_out                            ),
   .data_in                       ( log2_x_0_data_out  [DATA_WIDTH-1:0]  ),

   .data_out                      ( buffer_2_out                  [DATA_WIDTH-1:0] )
);
//////////////////////////////////////////////////////////////////

wire sel_04;
assign sel_04 = (sigmoid|silu|tanh)?1:0;
wire [DATA_WIDTH-1:0] mux_04_data_out;
wire                  mux_04_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_04 (
   .sel                     ( sel_04             ),
   .A                       ( adder_0_data_out_channel_1[WIDTH-1:0] ),
   .B                       ( gelu_lut_data_out         [WIDTH-1:0] ),
   .vld_A                   ( adder_0_vld_out_channel_1                ),
   .vld_B                   ( gelu_lut_vld_out                     ),

   .C                       ( mux_04_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_04_vld_out                   )
);  

///////////////////////////////////////////////////////////////////
wire sel_05;
assign sel_05 = (softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_05_data_out;
wire                  mux_05_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_05 (
   .sel                     ( sel_05             ),
   .A                       ( sum_exp[WIDTH-1:0] ),
   .B                       ( mux_04_data_out         [WIDTH-1:0] ),
   .vld_A                   ( sum_exp_vld                ),
   .vld_B                   ( mux_04_vld_out                     ),

   .C                       ( mux_05_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_05_vld_out                   )
);  

//////////////////////////////////////////////////////////////////
wire [WIDTH-1:0] log2_x_1_data_out;
wire             log2_x_1_vld_out;
log2_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u_log2_X_1 (
    .Oprand_A                ( mux_05_data_out      [WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .rst_n                   ( rst_n                      ),
    .en                      ( en                         ),
    .vld_in                  ( mux_05_vld_out                     ),

    .Result                  ( log2_x_1_data_out  [DATA_WIDTH-1:0] ),
    .vld_out                 ( log2_x_1_vld_out                    )
);

wire [WIDTH-1:0] log2_x_1_data_out_channel_0,log2_x_1_data_out_channel_1;
wire log2_x_1_vld_out_channel_0,log2_x_1_vld_out_channel_1;

assign log2_x_1_data_out_channel_0 =(sigmoid|tanh)?{~log2_x_1_data_out  [DATA_WIDTH-1],log2_x_1_data_out  [DATA_WIDTH-2:0]}:0;
assign log2_x_1_vld_out_channel_0  =(sigmoid|tanh)?log2_x_1_vld_out:0;

assign log2_x_1_data_out_channel_1 =(silu|gelu|softmax)?{{(gelu?log2_x_1_data_out  [DATA_WIDTH-1]:~log2_x_1_data_out[DATA_WIDTH-1])},log2_x_1_data_out  [DATA_WIDTH-2:0]}:0;
assign log2_x_1_vld_out_channel_1  =(silu|gelu|softmax)?log2_x_1_vld_out:0;


wire sign_X;
wire wr_en_sign_X;
wire expo_sth_0 = (~log2_x_1_data_out[DATA_WIDTH-2])&(~(&log2_x_1_data_out[DATA_WIDTH-3:DATA_WIDTH-9]));
assign sign_X = (gelu&(~expo_sth_0)|(silu&(~expo_sth_0)))?1:0;
assign wr_en_sign_X = (gelu|silu) & log2_x_1_vld_out;
//////////////////////////////////////////////////////////////
wire buffer_sign_out;
fifo_FPU #(
   .FIFO_DEPTH ( 16 ),
   .DATA_WIDTH ( 1 ))
u_buffer_sign (
   .clk                           ( clk                                            ),
   .rst_n                         ( rst_n                                          ),
   .rd_en                         ( _2_X_vld_out                                    ),///////?///////////
   .wr_en                         ( wr_en_sign_X                             ),
   .data_in                       ( sign_X                                   ),

   .data_out                      ( buffer_sign_out                   )
);
///////////////////////////////////////////////////////////////////////
wire sel_06;
assign sel_06 = (softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_06_data_out;
wire                  mux_06_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_06 (
   .sel                    ( sel_06             ),
   .A                       ( buffer_1_out[WIDTH-1:0] ),
   .B                       ( 32'hBF800000 ),
   .vld_A                   ( sum_exp_vld                ),
   .vld_B                   ( 1'b1                     ),

   .C                       ( mux_06_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_06_vld_out                   )
); 
///////////////////////////////////////////////////////////////////////////

wire sel_07;
assign sel_07 = (silu|gelu|softmax)?1:0;
wire [DATA_WIDTH-1:0] mux_07_data_out,mux_07_data_out_reg;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_07 (
   .sel                    ( sel_07             ),
   .A                       ( log2_x_1_data_out_channel_1 ),
   .B                       (  x_mul_2_2_data_out ),
   .vld_A                   ( log2_x_1_vld_out_channel_1                ),
   .vld_B                   (   x_mul_2_2_vld_out                   ),

   .C                       ( mux_07_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_07_vld_out                   )
);

dff_en #(.WIDTH(WIDTH)) dff_mux_07_data_out (mux_07_data_out,clk,en,rst_n,mux_07_data_out_reg);
dff_en #(.WIDTH(1)) dff_mux_07_vld_out (mux_07_vld_out,clk,en,rst_n,mux_07_vld_out_reg);
/////////////////////////////////////////////////////////////////


wire sel_08;
assign sel_08 = (silu|gelu)?1:0;
wire [DATA_WIDTH-1:0] mux_08_data_out;
wire                  mux_08_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_08 (
   .sel                    ( sel_08             ),
   .A                       ( buffer_2_out ),
   .B                       ( mux_06_data_out ),/////////////?////////////////////////////////////
   .vld_A                   ( 1'b1                ),
   .vld_B                   ( mux_06_vld_out                    ),/////////////?//////////////////////////

   .C                       ( mux_08_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_08_vld_out                   )
);

////////////////////////////////////////////////

wire [DATA_WIDTH-1:0] adder_1_data_out;
wire                  adder_1_vld_out;
float_adder_2nd #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_float_adder_1 (
    .Oprand_A                ( mux_07_data_out_reg  [DATA_WIDTH-1:0] ),
    .Oprand_B                ( mux_08_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_08_vld_out & mux_07_vld_out_reg),

    .Result                  ( adder_1_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( adder_1_vld_out                      )
);
/////////////////////////////////////////////////

wire sel_09;
assign sel_09 = (tanh | sigmoid)?1:0;
wire [DATA_WIDTH-1:0] mux_09_data_out;
wire                  mux_09_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_09 (
   .sel                     ( sel_09             ),
   .A                       ( log2_x_1_data_out_channel_0 ),
   .B                       ( adder_1_data_out ),/////////////?////////////////////////////////////
   .vld_A                   ( log2_x_1_vld_out_channel_0                ),
   .vld_B                   ( adder_1_vld_out                    ),/////////////?//////////////////////////

   .C                       ( mux_09_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_09_vld_out                   )
);

//////////////////////////////////////////////
wire [WIDTH-1:0] _2_X_data_out;
_2_power_X #(
    .DATA_WIDTH      ( DATA_WIDTH      ),
    .EXPO_WIDTH      ( EXPO_WIDTH      ),
    .MANT_WIDTH      ( MANT_WIDTH      ),
    .WIDTH           ( WIDTH           ),
    .INPUT_INT_WIDTH ( INPUT_INT_WIDTH ),
    .LUT_SIZE        ( LUT_SIZE        ),
    .LUT_BITS        ( LUT_BITS        ))
 u__2_power_X_2 (
    .Oprand_A                ( mux_09_data_out  [DATA_WIDTH-1:0] ),
    .clk                     ( clk                        ),
    .en                      ( en                         ),
    .rst_n                   ( rst_n                      ),
    .vld_in                  ( mux_09_vld_out             ),

    .Result                  ( _2_X_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( _2_X_vld_out                    )
);

wire [WIDTH-1:0]_2_X_data_out_channel_0,_2_X_data_out_channel_1,_2_X_data_out_channel_2;
wire _2_X_vld_out_channel_0,_2_X_vld_out_channel_1,_2_X_vld_out_channel_2;

assign _2_X_data_out_channel_0 = (gelu|silu) ? _2_X_data_out:0;
assign _2_X_vld_out_channel_0  = (gelu|silu) ? _2_X_vld_out:0;

assign _2_X_data_out_channel_1 = (sigmoid|softmax) ? _2_X_data_out:0;
assign _2_X_vld_out_channel_1  = (sigmoid|softmax) ? _2_X_vld_out:0;

assign _2_X_data_out_channel_2 = tanh ? _2_X_data_out:0;
assign _2_X_vld_out_channel_2  = tanh ? _2_X_vld_out:0;
///////////////////////////////////////////////////////////////////////////////
wire sel_10;
assign sel_10 = (gelu|silu) ?1:0;
wire [DATA_WIDTH-1:0] mux_10_data_out;
wire                  mux_10_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_10 (
   .sel                     ( sel_10             ),
   .A                       ( {buffer_sign_out,_2_X_data_out_channel_0[WIDTH-2:0]} ),
   .B                       ( _2_X_data_out_channel_1 ),
   .vld_A                   ( _2_X_vld_out_channel_0                ),
   .vld_B                   ( _2_X_vld_out_channel_1                    ),

   .C                       ( mux_10_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_10_vld_out                   )
);
////////////////////////////////////////////////////////////////////////////////////
x_mul_2 #(
    .DATA_WIDTH ( DATA_WIDTH ),
    .EXPO_WIDTH ( EXPO_WIDTH ),
    .MANT_WIDTH ( MANT_WIDTH ),
    .WIDTH      ( WIDTH      ))
 u_x_mul_2_2 (
    .Oprand_A                ( _2_X_data_out_channel_2  [DATA_WIDTH-1:0] ),
    .vld_in                  ( _2_X_vld_out_channel_2                     ),
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .Result                  ( x_mul_2_2_data_out    [DATA_WIDTH-1:0] ),
    .vld_out                 ( x_mul_2_2_vld_out                    )
);
////////////////////////////////////////////////////////////////////////////////////////
wire sel_11;
assign sel_11 = tanh ?0:1;
wire [DATA_WIDTH-1:0] mux_11_data_out;
wire                  mux_11_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_11 (
   .sel                     ( sel_11             ),
   .A                       ( mux_10_data_out[DATA_WIDTH-1:0] ),
   .B                       ( adder_1_data_out ),
   .vld_A                   ( mux_10_vld_out                ),
   .vld_B                   ( adder_1_vld_out                 ),

   .C                       ( mux_11_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_11_vld_out                   )
);
//////////////////////////////////////////////////////////////////////////////////////
wire [WIDTH-1:0] relu_data_out,relu_data_out_d;
wire relu_vld_out;
assign relu_data_out_d = input_channel_5[WIDTH-1] ? 0 : input_channel_5;
dff_en #(.WIDTH(WIDTH)) dff_relu (relu_data_out_d,clk,en,rst_n,relu_data_out);
dff_en #(.WIDTH(1)) dff_relu_vld (input_vld_channel_5 ,clk,en,rst_n,relu_vld_out);
wire sel_12;
assign sel_12 = relu ? 0:1;
wire [DATA_WIDTH-1:0] mux_12_data_out;
wire                  mux_12_vld_out;
mux_vld #(
   .WIDTH ( WIDTH ))
u_mux_12 (
   .sel                     ( sel_12             ),
   .A                       ( mux_11_data_out      [WIDTH-1:0] ),
   .B                       ( relu_data_out [WIDTH-1:0]),
   .vld_A                   ( mux_11_vld_out      ),
   .vld_B                   ( relu_vld_out              ),

   .C                       ( mux_12_data_out      [WIDTH-1:0] ),
   .vld_C                   ( mux_12_vld_out                   )
);

assign Result  = mux_12_data_out;
assign vld_out = mux_12_vld_out;

endmodule
