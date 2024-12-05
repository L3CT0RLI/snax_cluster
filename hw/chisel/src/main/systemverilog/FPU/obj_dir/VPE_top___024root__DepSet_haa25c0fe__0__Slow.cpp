// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top___024root.h"

VL_ATTR_COLD void VPE_top___024root___eval_static(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<21>/*671:0*/ VPE_top__ConstPool__CONST_he40070f1_0;

VL_ATTR_COLD void VPE_top___024root___eval_initial__TOP(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 128, 0, VL_CVT_PACK_STR_NW(21, VPE_top__ConstPool__CONST_he40070f1_0)
                 ,  &(vlSelfRef.PE_top__DOT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPE_top___024root___eval_final(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__stl(VPE_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPE_top___024root___eval_phase__stl(VPE_top___024root* vlSelf);

VL_ATTR_COLD void VPE_top___024root___eval_settle(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VPE_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pe_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPE_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__stl(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE_top___024root___eval_triggers__stl(VPE_top___024root* vlSelf);
VL_ATTR_COLD void VPE_top___024root___eval_stl(VPE_top___024root* vlSelf);

VL_ATTR_COLD bool VPE_top___024root___eval_phase__stl(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPE_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPE_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__ico(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__act(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__nba(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE_top___024root___ctor_var_reset(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->vld_in = VL_RAND_RESET_I(1);
    vlSelf->sum_exp = VL_RAND_RESET_I(32);
    vlSelf->x_max = VL_RAND_RESET_I(32);
    vlSelf->x_max_vld = VL_RAND_RESET_I(1);
    vlSelf->sum_exp_vld = VL_RAND_RESET_I(1);
    vlSelf->func = VL_RAND_RESET_I(6);
    vlSelf->vld_out = VL_RAND_RESET_I(1);
    vlSelf->Result = VL_RAND_RESET_I(32);
    vlSelf->exp_x_minus_xmax = VL_RAND_RESET_I(32);
    vlSelf->exp_x_minus_xmax_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_07_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_07_vld_out_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__x_mul_2_2_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__x_mul_2_2_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__input_channel_4 = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__input_vld_channel_0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__input_vld_channel_1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__input_vld_channel_3 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__input_vld_channel_4 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__adder_0_data_out_channel_0 = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__adder_0_vld_out_channel_0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__buffer_0_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__x_mul_2_0_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__x_mul_2_0_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_00_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__gelu_lut_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__gelu_lut_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_01_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__x_max_vld_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_02_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__mux_03_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mul_log2e_0_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__mul_log2e_0_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__buffer_1_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__buffer_2_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__sel_04 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_05_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__mux_05_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__wr_en_sign_X = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__buffer_sign_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__sel_07 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_07_data_out_reg = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__sel_08 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_08_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__sel_09 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__mux_09_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__mux_09_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT___2_X_vld_out_channel_2 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__sel_10 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__relu_data_out = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__relu_vld_out = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT____VdfgRegularize_hd20e870a_0_0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT____VdfgRegularize_hd20e870a_0_1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT____VdfgRegularize_hd20e870a_0_6 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_0__DOT__wr_cnt = VL_RAND_RESET_I(6);
    vlSelf->PE_top__DOT__u_buffer_0__DOT__rd_cnt = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PE_top__DOT__u_buffer_0__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PE_top__DOT__u_buffer_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_x_mul_2_0__DOT__Expo_A = VL_RAND_RESET_I(8);
    vlSelf->PE_top__DOT__u_x_mul_2_0__DOT____Vcellinp__dff_Result____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_A = VL_RAND_RESET_I(8);
    vlSelf->PE_top__DOT__u_gelux__DOT__lut_source = VL_RAND_RESET_I(24);
    vlSelf->PE_top__DOT__u_gelux__DOT__mem_select = VL_RAND_RESET_I(2);
    vlSelf->PE_top__DOT__u_gelux__DOT__q_a = VL_RAND_RESET_I(16);
    vlSelf->PE_top__DOT__u_gelux__DOT__q_b = VL_RAND_RESET_I(16);
    vlSelf->PE_top__DOT__u_gelux__DOT__y_a = VL_RAND_RESET_I(16);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage2 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage3 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage4 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__en_stage5 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_is_zero_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_is_one_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__mant_A_reg = VL_RAND_RESET_I(23);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_real_abs_reg = VL_RAND_RESET_I(8);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_smaller_than_zero_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__sign_A_reg0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__vld_in_reg0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__lut_source_reg0 = VL_RAND_RESET_I(24);
    vlSelf->PE_top__DOT__u_gelux__DOT__mem_select_reg0 = VL_RAND_RESET_I(2);
    vlSelf->PE_top__DOT__u_gelux__DOT__addr_a_reg = VL_RAND_RESET_I(7);
    vlSelf->PE_top__DOT__u_gelux__DOT__sign_A_reg1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_smaller_than_zero_reg1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_zero_or_one_reg = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__vld_in_reg1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__mem_select_reg1 = VL_RAND_RESET_I(2);
    vlSelf->PE_top__DOT__u_gelux__DOT__sign_A_reg2 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__lut_source_reg1 = VL_RAND_RESET_I(24);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_bigger_than_one_reg0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__vld_in_reg2 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__sign_A_reg3 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__y_a_reg = VL_RAND_RESET_I(16);
    vlSelf->PE_top__DOT__u_gelux__DOT__mul_result_reg = VL_RAND_RESET_I(18);
    vlSelf->PE_top__DOT__u_gelux__DOT__mul_result_reg_temp = VL_RAND_RESET_I(18);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_bigger_than_one_reg1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__vld_in_reg3 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__op1_reg = VL_RAND_RESET_I(24);
    vlSelf->PE_top__DOT__u_gelux__DOT__op2_reg = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_gelux__DOT__sign_A_reg4 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__expo_bigger_than_one_reg2 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_gelux__DOT__vld_in_reg4 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PE_top__DOT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__Index = VL_RAND_RESET_I(5);
    vlSelf->PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__A_B_chop = VL_RAND_RESET_I(25);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__en_stage0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__en_stage1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__vld_reg0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__Result_mid = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__vld_mid = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop = VL_RAND_RESET_I(25);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__en_stage0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__en_stage1 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->PE_top__DOT__u_buffer_1__DOT__wr_cnt = VL_RAND_RESET_I(7);
    vlSelf->PE_top__DOT__u_buffer_1__DOT__rd_cnt = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->PE_top__DOT__u_buffer_1__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PE_top__DOT__u_buffer_1__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_2__DOT__wr_cnt = VL_RAND_RESET_I(5);
    vlSelf->PE_top__DOT__u_buffer_2__DOT__rd_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->PE_top__DOT__u_buffer_2__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PE_top__DOT__u_buffer_2__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_sign__DOT__wr_cnt = VL_RAND_RESET_I(5);
    vlSelf->PE_top__DOT__u_buffer_sign__DOT__rd_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->PE_top__DOT__u_buffer_sign__DOT__ram[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->PE_top__DOT__u_buffer_sign__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_buffer_sign__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->PE_top__DOT__u_x_mul_2_2__DOT__Expo_A = VL_RAND_RESET_I(8);
    vlSelf->PE_top__DOT__u_x_mul_2_2__DOT____Vcellinp__dff_Result____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PE_top__DOT__x_max_vld_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PE_top__DOT__u_exp_x_0__DOT__Result_mid = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__PE_top__DOT__u_exp_x_0__DOT__vld_mid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__PE_top__DOT__mux_07_data_out_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__PE_top__DOT__mux_07_vld_out_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
