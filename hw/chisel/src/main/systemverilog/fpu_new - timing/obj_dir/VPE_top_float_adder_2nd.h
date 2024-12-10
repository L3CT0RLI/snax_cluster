// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE_top.h for the primary calling header

#ifndef VERILATED_VPE_TOP_FLOAT_ADDER_2ND_H_
#define VERILATED_VPE_TOP_FLOAT_ADDER_2ND_H_  // guard

#include "verilated.h"


class VPE_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE_top_float_adder_2nd final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(en,0,0);
    VL_IN8(vld_in,0,0);
    VL_OUT8(vld_out,0,0);
    CData/*7:0*/ __PVT__Expo_to_be_normed_1st;
    CData/*7:0*/ __PVT__Expo_difference;
    CData/*0:0*/ __PVT__Oprand_A_bigger_than_B;
    CData/*0:0*/ __PVT__sign_different;
    CData/*0:0*/ __PVT__shift_right;
    CData/*0:0*/ __PVT__final_sign;
    CData/*0:0*/ __PVT__vld_reg0;
    CData/*0:0*/ __PVT__vld_reg1;
    CData/*0:0*/ __PVT__sign_different_reg0;
    CData/*0:0*/ __PVT__much_larger_reg0;
    CData/*0:0*/ __PVT__Expo_A_smaller_reg0;
    CData/*0:0*/ __PVT__Oprand_A_bigger_than_B_reg0;
    CData/*0:0*/ __PVT__Oprand_A_bigger_than_B_reg1;
    CData/*0:0*/ __PVT__Expo_A_smaller_reg1;
    CData/*0:0*/ __PVT__much_larger_reg1;
    CData/*4:0*/ __PVT__shift_bits_left_reg1;
    CData/*4:0*/ __PVT__lza__DOT__Index;
    SData/*8:0*/ __PVT__Expo_A_minus_B;
    VL_IN(Oprand_A,31,0);
    VL_IN(Oprand_B,31,0);
    VL_OUT(Result,31,0);
    IData/*31:0*/ __PVT__Adder_Result;
    IData/*24:0*/ __PVT__Mant_rounded;
    IData/*31:0*/ __PVT__Adder_oprand_smaller_reg0;
    IData/*31:0*/ __PVT__Adder_oprand_bigger_reg0;
    IData/*31:0*/ __PVT__Oprand_A_reg0;
    IData/*31:0*/ __PVT__Oprand_B_reg0;
    IData/*31:0*/ __PVT__Oprand_A_reg1;
    IData/*31:0*/ __PVT__Oprand_B_reg1;
    IData/*31:0*/ __PVT__Adder_Result_reg1;
    IData/*31:0*/ __VdfgRegularize_h498d3cee_0_1;
    IData/*31:0*/ __VdfgRegularize_h498d3cee_3_1;
    IData/*27:0*/ __PVT__lza__DOT__zero_F;
    IData/*27:0*/ __PVT__lza__DOT__one_F;

    // INTERNAL VARIABLES
    VPE_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPE_top_float_adder_2nd(VPE_top__Syms* symsp, const char* v__name);
    ~VPE_top_float_adder_2nd();
    VL_UNCOPYABLE(VPE_top_float_adder_2nd);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
