// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__2_power_X.h"

extern const VlWide<21>/*671:0*/ VFPU__ConstPool__CONST_h40ab0002_0;

VL_ATTR_COLD void VFPU__2_power_X___eval_initial__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u___05F2_power_X_2(VFPU__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VFPU__2_power_X___eval_initial__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u___05F2_power_X_2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 32, 0, VL_CVT_PACK_STR_NW(21, VFPU__ConstPool__CONST_h40ab0002_0)
                 ,  &(vlSelfRef.__PVT__u_dual_port_ram_pos__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VFPU__2_power_X___ctor_var_reset(VFPU__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VFPU__2_power_X___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vld_in_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shift_bits = VL_RAND_RESET_I(5);
    vlSelf->__PVT__q_a2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__q_b2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__y_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_result = VL_RAND_RESET_I(30);
    vlSelf->__PVT__expo_A_reg0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sign_A_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shifted_real_A_reg0 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__real_expo_A_reg0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__real_expo_A_com_reg0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__frac_A_reg1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__shifted_real_A_reg1 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__expo_A_reg1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sign_A_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__real_expo_A_reg1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__real_expo_A_com_reg1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__frac_A_reg2 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__y_a_reg2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__expo_result_reg2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zero_flag_part_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_A_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__one_flag_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_minus_Cn_reg3 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__expo_result_reg3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zero_flag_part_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_A_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__one_flag_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_minus_Cn_reg4 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__expo_result_reg4 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zero_flag_part_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_A_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__one_flag_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__y_a_minus_y_b_temp = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_h40f19cb3_2_1 = VL_RAND_RESET_I(23);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = VL_RAND_RESET_I(30);
    vlSelf->u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S = VL_RAND_RESET_I(32);
    vlSelf->u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_I(25);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_I(25);
    vlSelf->__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_dual_port_ram_pos__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__vld_out = VL_RAND_RESET_I(1);
}
