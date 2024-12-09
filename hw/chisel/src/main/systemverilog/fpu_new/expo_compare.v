module expo_compare #(
        parameter EXPO_WIDTH =8
) (
        input   [EXPO_WIDTH-1:0] expo_a,
        input   [EXPO_WIDTH-1:0] expo_b,
        output  [EXPO_WIDTH-1:0] expo_bigger
);
        assign expo_bigger = (expo_a > expo_b) ? expo_a:expo_b;
endmodule
