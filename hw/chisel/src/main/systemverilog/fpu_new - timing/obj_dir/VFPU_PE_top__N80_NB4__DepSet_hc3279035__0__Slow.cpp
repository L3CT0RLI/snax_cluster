// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"

extern const VlWide<21>/*671:0*/ VFPU__ConstPool__CONST_he40070f1_0;

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___eval_initial__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___eval_initial__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 16, 128, 0, VL_CVT_PACK_STR_NW(21, VFPU__ConstPool__CONST_he40070f1_0)
                 ,  &(vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___ctor_var_reset(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ctor_var_reset\n"); );
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
    vlSelf->__PVT__mux_07_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_07_vld_out_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x_mul_2_2_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_mul_2_2_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_channel_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__input_vld_channel_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_vld_channel_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_vld_channel_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__input_vld_channel_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__adder_0_data_out_channel_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__adder_0_vld_out_channel_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_0_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_mul_2_0_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_mul_2_0_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_00_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__gelu_lut_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__gelu_lut_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_01_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x_max_vld_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_02_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mux_03_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_log2e_0_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mul_log2e_0_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_1_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__buffer_2_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sel_04 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_05_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mux_05_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_en_sign_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buffer_sign_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_07 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_07_data_out_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sel_08 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_08_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sel_09 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mux_09_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mux_09_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT___2_X_vld_out_channel_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__relu_data_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__relu_vld_out = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h079bc411_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h079bc411_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h079bc411_0_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_0__DOT__wr_cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__u_buffer_0__DOT__rd_cnt = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_buffer_0__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_buffer_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_x_mul_2_0__DOT__Expo_A = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_gelux__DOT__expo_A = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_gelux__DOT__lut_source = VL_RAND_RESET_I(24);
    vlSelf->__PVT__u_gelux__DOT__mem_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_gelux__DOT__q_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_gelux__DOT__q_b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_gelux__DOT__y_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_gelux__DOT__expo_is_zero_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__expo_is_one_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__mant_A_reg = VL_RAND_RESET_I(23);
    vlSelf->__PVT__u_gelux__DOT__expo_real_abs_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_gelux__DOT__expo_smaller_than_zero_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__sign_A_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__vld_in_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__lut_source_reg0 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__u_gelux__DOT__mem_select_reg0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_gelux__DOT__addr_a_reg = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_gelux__DOT__sign_A_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__expo_zero_or_one_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__vld_in_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__mem_select_reg1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_gelux__DOT__sign_A_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__lut_source_reg1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__u_gelux__DOT__expo_bigger_than_one_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__vld_in_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__sign_A_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__y_a_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_gelux__DOT__mul_result_reg = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u_gelux__DOT__mul_result_reg_temp = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u_gelux__DOT__expo_bigger_than_one_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__vld_in_reg3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__op1_reg = VL_RAND_RESET_I(24);
    vlSelf->__PVT__u_gelux__DOT__op2_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_gelux__DOT__sign_A_reg4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__expo_bigger_than_one_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_gelux__DOT__vld_in_reg4 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__u_gelux__DOT__u_lza_log2__DOT__Index = VL_RAND_RESET_I(5);
    vlSelf->u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 = VL_RAND_RESET_I(32);
    vlSelf->u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_mul_log2e_0__DOT__A_B_chop = VL_RAND_RESET_I(25);
    vlSelf->__PVT__u_mul_log2e_0__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mul_log2e_0__DOT__vld_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mul_log2e_0__DOT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exp_x_0__DOT__Result_mid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_exp_x_0__DOT__vld_mid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop = VL_RAND_RESET_I(25);
    vlSelf->__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_buffer_1__DOT__wr_cnt = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_buffer_1__DOT__rd_cnt = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__u_buffer_1__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_buffer_1__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_2__DOT__wr_cnt = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_buffer_2__DOT__rd_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_buffer_2__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_buffer_2__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_sign__DOT__wr_cnt = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_buffer_sign__DOT__rd_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_buffer_sign__DOT__ram[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__u_buffer_sign__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_buffer_sign__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_x_mul_2_2__DOT__Expo_A = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__u_exp_x_0__DOT__Result_mid = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__u_exp_x_0__DOT__vld_mid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__x_mul_2_2_data_out = VL_RAND_RESET_I(32);
}
