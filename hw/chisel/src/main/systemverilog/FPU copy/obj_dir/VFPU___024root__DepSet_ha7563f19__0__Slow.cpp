// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU___024root.h"

VL_ATTR_COLD void VFPU___024root___eval_static(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFPU___024root___eval_final(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU___024root___dump_triggers__stl(VFPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFPU___024root___eval_phase__stl(VFPU___024root* vlSelf);

VL_ATTR_COLD void VFPU___024root___eval_settle(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___eval_settle\n"); );
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
            VFPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("FPU.sv", 1889, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU___024root___dump_triggers__stl(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void VFPU___024root___eval_triggers__stl(VFPU___024root* vlSelf);
VL_ATTR_COLD void VFPU___024root___eval_stl(VFPU___024root* vlSelf);

VL_ATTR_COLD bool VFPU___024root___eval_phase__stl(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VFPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU___024root___dump_triggers__ico(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VFPU___024root___dump_triggers__act(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFPU___024root___dump_triggers__nba(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFPU___024root___ctor_var_reset(VFPU___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPU___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->ext_data_i_ready = VL_RAND_RESET_I(1);
    vlSelf->ext_data_i_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ext_data_i_bits);
    vlSelf->ext_data_o_ready = VL_RAND_RESET_I(1);
    vlSelf->ext_data_o_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ext_data_o_bits);
    vlSelf->ext_csr_i_0 = VL_RAND_RESET_I(32);
    vlSelf->ext_start_i = VL_RAND_RESET_I(1);
    vlSelf->ext_busy_o = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->FPU__DOT__state_nxt = VL_RAND_RESET_I(6);
    vlSelf->FPU__DOT__vld_PE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->FPU__DOT__vld_PE_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->FPU__DOT__exp_x_minus_xmax_vld_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->FPU__DOT__x_max = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->FPU__DOT__sum_tree_input);
    vlSelf->FPU__DOT__state_sum2_reg = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__vld_out_sum_tree = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__pe_x_max_vld = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__result_sum_tree = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->FPU__DOT__cnt_1 = VL_RAND_RESET_I(6);
    vlSelf->FPU__DOT__sum_exp_vld = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->FPU__DOT__sum_result_shifter);
    vlSelf->FPU__DOT__vld_sum2 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT____VdfgRegularize_hae9152be_0_1 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT__oprand_max_D = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__dff_valid_reg0____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellinp__dff_valid_reg0____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_en_vld__BRA__1__KET____DOT__dff_valid_reg____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_en_vld__BRA__2__KET____DOT__dff_valid_reg____pinNumber5 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__0__KET____DOT__oprands_mid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__0__KET____DOT__oprands_mid_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__0__KET____DOT__gen_compare__BRA__0__KET____DOT__dff_oprands_mid_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__0__KET____DOT__gen_compare__BRA__1__KET____DOT__dff_oprands_mid_reg____pinNumber5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__1__KET____DOT__oprands_mid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__1__KET____DOT__oprands_mid_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__1__KET____DOT__gen_compare__BRA__0__KET____DOT__dff_oprands_mid_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__add_mant_result = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__leading_zeros = VL_RAND_RESET_I(5);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__result_D2 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg0 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg1 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg2 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg3 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg4 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg5 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg6 = VL_RAND_RESET_I(8);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg0 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg1 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg2 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg3 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg4 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg5 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg6 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg7 = VL_RAND_RESET_I(1);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__3__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__3__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__4__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__4__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__5__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__5__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__6__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__6__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__7__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__7__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__8__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__8__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__9__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__9__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__10__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__10__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__11__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__11__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__12__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__12__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__13__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__13__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__14__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__14__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__15__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__15__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__16__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__16__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__17__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__17__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__18__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__18__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__19__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__19__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__20__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__20__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__21__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__21__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__22__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__22__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__23__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__23__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__24__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__24__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__25__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__25__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__26__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__26__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__27__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__27__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__28__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__28__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__29__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__29__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__30__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__30__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__31__KET____DOT__dff_oprands_reg____pinNumber5 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__31__KET____DOT__dff_mant_adder_in_reg____pinNumber5 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__dff_mant_adder_in_reg____pinNumber1 = VL_RAND_RESET_I(27);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk8__BRA__0__KET____DOT__u_expo_compare__expo_bigger = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__in_sigs[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__in_sigs_reg[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__in_sigs[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__in_sigs_reg[__Vi0] = VL_RAND_RESET_I(29);
    }
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(29);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__in_sigs[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__in_sigs_reg[__Vi0] = VL_RAND_RESET_I(30);
    }
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(30);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(30);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(30);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(30);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__in_sigs[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__in_sigs_reg[__Vi0] = VL_RAND_RESET_I(31);
    }
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(31);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5 = VL_RAND_RESET_I(31);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT__Index = VL_RAND_RESET_I(5);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT____VdfgRegularize_hefc62589_0_0 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT____VdfgRegularize_hefc62589_0_33 = VL_RAND_RESET_I(32);
    vlSelf->FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1__DOT__E_in = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
