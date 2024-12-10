// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_float_adder_2nd.h"

VL_ATTR_COLD void VFPU_float_adder_2nd___ctor_var_reset(VFPU_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFPU_float_adder_2nd___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Oprand_B = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Expo_A_minus_B = VL_RAND_RESET_I(9);
    vlSelf->__PVT__Expo_to_be_normed_1st = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Expo_difference = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Oprand_A_bigger_than_B = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_different = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Adder_Result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shift_right = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Mant_rounded = VL_RAND_RESET_I(25);
    vlSelf->__PVT__final_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Adder_oprand_smaller_reg0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Adder_oprand_bigger_reg0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sign_different_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__much_larger_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Oprand_A_reg0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Oprand_B_reg0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Expo_A_smaller_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Oprand_A_bigger_than_B_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Oprand_A_reg1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Oprand_B_reg1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Oprand_A_bigger_than_B_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Expo_A_smaller_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__much_larger_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Adder_Result_reg1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shift_bits_left_reg1 = VL_RAND_RESET_I(5);
    vlSelf->__VdfgRegularize_h498d3cee_0_1 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_h498d3cee_3_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lza__DOT__zero_F = VL_RAND_RESET_I(28);
    vlSelf->__PVT__lza__DOT__one_F = VL_RAND_RESET_I(28);
    vlSelf->__PVT__lza__DOT__Index = VL_RAND_RESET_I(5);
}
