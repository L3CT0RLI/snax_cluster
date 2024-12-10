CSR [31:26] correspond to the function type:
6'b000001: Sigmoid
6'b000010: SiLU
6'b000100: Tanh
6'b001000: GeLU
6'b010000: Softmax
6'b100000: ReLU

for Softmax function.CSR [25:20] correspond to :NUM_SOFTMAX_MAX/PE_NUM(if oprand number of softmax is 128, number of PE =4 ,then word = 32=6'b100000)

for Softmax: 
1 .Give CSR_start signal pulse, and then data vector 1 by 1(not necessary to be closed together ),until reach the oprand number(128 OP NUM ,4PE = 32 Input Vectors).
2 . Give ready until the output_valid signal, and sample the output vector.

for other functions:
1. just give vectors 1 by 1 and input_valid signal,no need for start_signal.
2. Give ready until the output_valid signal, and sample the output vector.

