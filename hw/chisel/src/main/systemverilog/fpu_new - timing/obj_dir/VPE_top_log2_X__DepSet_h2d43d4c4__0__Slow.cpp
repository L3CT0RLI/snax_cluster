// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top_log2_X.h"

extern const VlWide<21>/*671:0*/ VPE_top__ConstPool__CONST_hf3a9d4f5_0;

VL_ATTR_COLD void VPE_top_log2_X___eval_initial__TOP__PE_top__DOT__u_log2_X_0(VPE_top_log2_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_log2_X___eval_initial__TOP__PE_top__DOT__u_log2_X_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 32, 0, VL_CVT_PACK_STR_NW(21, VPE_top__ConstPool__CONST_hf3a9d4f5_0)
                 ,  &(vlSelfRef.__PVT__u_dual_port_ram_log__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPE_top_log2_X___ctor_var_reset(VPE_top_log2_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_log2_X___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->Result = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->vld_in = VL_RAND_RESET_I(1);
    vlSelf->vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__n_b_reg0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__q_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__q_b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__y_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__Yb_minus_Ya_temp = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_result = VL_RAND_RESET_I(31);
    vlSelf->__PVT__Adder_op1_pre = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Adder_Result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__zero_flag_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_flag_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Oprand_A_reg0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__y_a_reg1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mant_A_reg1 = VL_RAND_RESET_I(23);
    vlSelf->__PVT__expo_A_reg1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__expo_A_reg2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__M_plus_Ya_reg2 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__expo_A_reg3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__M_plus_Ya_reg3 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__expo_A_minus_127_reg3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Adder_op1_reg3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Adder_op2_reg3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lza_log2__DOT__final_location = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_lza_log2__DOT__Index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = VL_RAND_RESET_I(31);
    vlSelf->u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S = VL_RAND_RESET_Q(33);
    vlSelf->u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_I(26);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_I(26);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_dual_port_ram_log__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__Result = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__vld_out = VL_RAND_RESET_I(1);
}
