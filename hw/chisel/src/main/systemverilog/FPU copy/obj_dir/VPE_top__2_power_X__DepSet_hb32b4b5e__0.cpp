// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__2_power_X.h"
#include "VPE_top__Syms.h"

VL_INLINE_OPT void VPE_top__2_power_X___ico_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___ico_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__en_stage_1 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg0));
    vlSelfRef.__PVT__en_stage_2 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg1));
    vlSelfRef.__PVT__en_stage_3 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg2));
    vlSelfRef.__PVT__en_stage_4 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg3));
    vlSelfRef.__PVT__en_stage_5 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg4));
    vlSelfRef.__PVT__shift_bits = (0x1fU & ((0x80U 
                                             & ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                 >> 0x17U) 
                                                - (IData)(0x7fU)))
                                             ? ((IData)(0x1fU) 
                                                - (vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                   >> 0x17U))
                                             : ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                 >> 0x17U) 
                                                - (IData)(0x1fU))));
    vlSelfRef.__PVT__en_stage_0 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSymsp->TOP.PE_top__DOT__mux_09_vld_out));
}

VL_INLINE_OPT void VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__vld_in_reg0;
    __Vdly__vld_in_reg0 = 0;
    IData/*30:0*/ __Vdly__shifted_real_A_reg1;
    __Vdly__shifted_real_A_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg1;
    __Vdly__expo_A_reg1 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg1;
    __Vdly__sign_A_reg1 = 0;
    CData/*7:0*/ __Vdly__real_expo_A_reg1;
    __Vdly__real_expo_A_reg1 = 0;
    CData/*7:0*/ __Vdly__real_expo_A_com_reg1;
    __Vdly__real_expo_A_com_reg1 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg1;
    __Vdly__vld_in_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_result_reg3;
    __Vdly__expo_result_reg3 = 0;
    CData/*0:0*/ __Vdly__zero_flag_part_reg3;
    __Vdly__zero_flag_part_reg3 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg3;
    __Vdly__sign_A_reg3 = 0;
    CData/*0:0*/ __Vdly__one_flag_reg3;
    __Vdly__one_flag_reg3 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg3;
    __Vdly__vld_in_reg3 = 0;
    IData/*23:0*/ __Vdly__M_minus_Cn_reg4;
    __Vdly__M_minus_Cn_reg4 = 0;
    CData/*7:0*/ __Vdly__expo_result_reg4;
    __Vdly__expo_result_reg4 = 0;
    CData/*0:0*/ __Vdly__zero_flag_part_reg4;
    __Vdly__zero_flag_part_reg4 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg4;
    __Vdly__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly__one_flag_reg4;
    __Vdly__one_flag_reg4 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg4;
    __Vdly__vld_in_reg4 = 0;
    CData/*0:0*/ __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 = 0;
    IData/*29:0*/ __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0;
    IData/*31:0*/ __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0;
    IData/*31:0*/ __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0;
    // Body
    __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg3;
    __Vdly__zero_flag_part_reg3 = vlSelfRef.__PVT__zero_flag_part_reg3;
    __Vdly__sign_A_reg3 = vlSelfRef.__PVT__sign_A_reg3;
    __Vdly__one_flag_reg3 = vlSelfRef.__PVT__one_flag_reg3;
    __Vdly__M_minus_Cn_reg4 = vlSelfRef.__PVT__M_minus_Cn_reg4;
    __Vdly__expo_result_reg4 = vlSelfRef.__PVT__expo_result_reg4;
    __Vdly__zero_flag_part_reg4 = vlSelfRef.__PVT__zero_flag_part_reg4;
    __Vdly__sign_A_reg4 = vlSelfRef.__PVT__sign_A_reg4;
    __Vdly__one_flag_reg4 = vlSelfRef.__PVT__one_flag_reg4;
    __Vdly__expo_A_reg1 = vlSelfRef.__PVT__expo_A_reg1;
    __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg1;
    __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg1;
    __Vdly__shifted_real_A_reg1 = vlSelfRef.__PVT__shifted_real_A_reg1;
    __Vdly__sign_A_reg1 = vlSelfRef.__PVT__sign_A_reg1;
    __Vdly__vld_in_reg3 = vlSelfRef.__PVT__vld_in_reg3;
    __Vdly__vld_in_reg4 = vlSelfRef.__PVT__vld_in_reg4;
    __Vdly__vld_in_reg0 = vlSelfRef.__PVT__vld_in_reg0;
    __Vdly__vld_in_reg1 = vlSelfRef.__PVT__vld_in_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    if (vlSymsp->TOP.rst_n) {
        __Vdly__M_minus_Cn_reg4 = ((IData)(vlSelfRef.__PVT__en_stage_4)
                                    ? vlSelfRef.__PVT__M_minus_Cn_reg3
                                    : vlSelfRef.__PVT__M_minus_Cn_reg4);
        if (vlSelfRef.__PVT__en_stage_3) {
            __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg2;
            vlSelfRef.__PVT__M_minus_Cn_reg3 = (0xffffffU 
                                                & (vlSelfRef.__PVT__frac_A_reg2 
                                                   - 
                                                   ((IData)(vlSelfRef.__PVT__y_a_reg2) 
                                                    << 7U)));
        } else {
            __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg3;
            vlSelfRef.__PVT__M_minus_Cn_reg3 = (0xffffffU 
                                                & vlSelfRef.__PVT__M_minus_Cn_reg3);
        }
        __Vdly__expo_result_reg4 = ((IData)(vlSelfRef.__PVT__en_stage_4)
                                     ? (IData)(vlSelfRef.__PVT__expo_result_reg3)
                                     : (IData)(vlSelfRef.__PVT__expo_result_reg4));
        if (vlSelfRef.__PVT__en_stage_2) {
            vlSelfRef.__PVT__expo_result_reg2 = (0xffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__sign_A_reg1)
                                                      ? 
                                                     (~ 
                                                      (0xffU 
                                                       & (vlSelfRef.__PVT__shifted_real_A_reg1 
                                                          >> 0x17U)))
                                                      : 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__shifted_real_A_reg1 
                                                         >> 0x17U)))));
            vlSelfRef.__PVT__y_a_reg2 = vlSelfRef.__PVT__y_a;
            vlSelfRef.__PVT__frac_A_reg2 = vlSelfRef.__PVT__frac_A_reg1;
        } else {
            vlSelfRef.__PVT__expo_result_reg2 = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__expo_result_reg2));
            vlSelfRef.__PVT__y_a_reg2 = vlSelfRef.__PVT__y_a_reg2;
            vlSelfRef.__PVT__frac_A_reg2 = vlSelfRef.__PVT__frac_A_reg2;
        }
        if (vlSelfRef.__PVT__en_stage_1) {
            __Vdly__expo_A_reg1 = vlSelfRef.__PVT__expo_A_reg0;
            __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg0;
            __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg0;
            __Vdly__shifted_real_A_reg1 = vlSelfRef.__PVT__shifted_real_A_reg0;
            vlSelfRef.__PVT__frac_A_reg1 = vlSelfRef.__VdfgRegularize_h40f19cb3_2_1;
        } else {
            __Vdly__expo_A_reg1 = vlSelfRef.__PVT__expo_A_reg1;
            __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg1;
            __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg1;
            __Vdly__shifted_real_A_reg1 = vlSelfRef.__PVT__shifted_real_A_reg1;
            vlSelfRef.__PVT__frac_A_reg1 = vlSelfRef.__PVT__frac_A_reg1;
        }
        if (vlSelfRef.__PVT__en_stage_0) {
            vlSelfRef.__PVT__expo_A_reg0 = (0xffU & 
                                            (vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                             >> 0x17U));
            vlSelfRef.__PVT__real_expo_A_reg0 = (0xffU 
                                                 & ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                     >> 0x17U) 
                                                    - (IData)(0x7fU)));
            vlSelfRef.__PVT__real_expo_A_com_reg0 = 
                (0xffU & ((IData)(0x7fU) - (vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                            >> 0x17U)));
            vlSelfRef.__PVT__shifted_real_A_reg0 = 
                (0x7fffffffU & ((0x80U & ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                           >> 0x17U) 
                                          - (IData)(0x7fU)))
                                 ? ((0x800000U | (0x7fffffU 
                                                  & vlSymsp->TOP.PE_top__DOT__mux_09_data_out)) 
                                    >> (IData)(vlSelfRef.__PVT__shift_bits))
                                 : ((0x800000U | (0x7fffffU 
                                                  & vlSymsp->TOP.PE_top__DOT__mux_09_data_out)) 
                                    << (IData)(vlSelfRef.__PVT__shift_bits))));
        } else {
            vlSelfRef.__PVT__expo_A_reg0 = (0xffU & (IData)(vlSelfRef.__PVT__expo_A_reg0));
            vlSelfRef.__PVT__real_expo_A_reg0 = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__real_expo_A_reg0));
            vlSelfRef.__PVT__real_expo_A_com_reg0 = 
                (0xffU & (IData)(vlSelfRef.__PVT__real_expo_A_com_reg0));
            vlSelfRef.__PVT__shifted_real_A_reg0 = 
                (0x7fffffffU & vlSelfRef.__PVT__shifted_real_A_reg0);
        }
        vlSelfRef.Result = ((IData)(vlSelfRef.__PVT__en_stage_5)
                             ? (((IData)(vlSelfRef.__PVT__sign_A_reg4) 
                                 & (IData)(vlSelfRef.__PVT__zero_flag_part_reg4))
                                 ? 0U : (((~ (IData)(vlSelfRef.__PVT__sign_A_reg4)) 
                                          & (IData)(vlSelfRef.__PVT__zero_flag_part_reg4))
                                          ? 0x7f800000U
                                          : ((IData)(vlSelfRef.__PVT__one_flag_reg4)
                                              ? 0x3f800000U
                                              : (((IData)(vlSelfRef.__PVT__expo_result_reg4) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (((0x780000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.__PVT__mult_result 
                                                                           >> 0x1dU)))) 
                                                            << 0x13U)) 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__mult_result 
                                                              >> 0xbU))) 
                                                       + vlSelfRef.__PVT__M_minus_Cn_reg4))))))
                             : vlSelfRef.Result);
        if (vlSymsp->TOP.en) {
            __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
            __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
            __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & ((~ vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg) 
                                  + (~ vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg)));
            vlSelfRef.__PVT__mult_result = (0x3fffffffU 
                                            & ((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)
                                                ? ((IData)(2U) 
                                                   + vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg)
                                                : (
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2))));
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
        } else {
            __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
            __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
            __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg);
            vlSelfRef.__PVT__mult_result = (0x3fffffffU 
                                            & vlSelfRef.__PVT__mult_result);
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
        }
    } else {
        __Vdly__expo_result_reg3 = 0U;
        __Vdly__M_minus_Cn_reg4 = 0U;
        __Vdly__expo_result_reg4 = 0U;
        __Vdly__expo_A_reg1 = 0U;
        __Vdly__real_expo_A_com_reg1 = 0U;
        __Vdly__real_expo_A_reg1 = 0U;
        __Vdly__shifted_real_A_reg1 = 0U;
        vlSelfRef.__PVT__M_minus_Cn_reg3 = 0U;
        vlSelfRef.__PVT__expo_result_reg2 = 0U;
        vlSelfRef.__PVT__expo_A_reg0 = 0U;
        vlSelfRef.__PVT__real_expo_A_reg0 = 0U;
        vlSelfRef.__PVT__real_expo_A_com_reg0 = 0U;
        vlSelfRef.__PVT__shifted_real_A_reg0 = 0U;
        vlSelfRef.Result = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0U;
        vlSelfRef.__PVT__mult_result = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = 0U;
        vlSelfRef.__PVT__y_a_reg2 = 0U;
        vlSelfRef.__PVT__frac_A_reg2 = 0U;
        vlSelfRef.__PVT__frac_A_reg1 = 0U;
    }
    __Vdly__zero_flag_part_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                                   && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                        ? (IData)(vlSelfRef.__PVT__zero_flag_part_reg2)
                                        : (IData)(vlSelfRef.__PVT__zero_flag_part_reg3)));
    __Vdly__sign_A_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg2)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg3)));
    __Vdly__one_flag_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                             && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                  ? (IData)(vlSelfRef.__PVT__one_flag_reg2)
                                  : (IData)(vlSelfRef.__PVT__one_flag_reg3)));
    __Vdly__zero_flag_part_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                                   && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                        ? (IData)(vlSelfRef.__PVT__zero_flag_part_reg3)
                                        : (IData)(vlSelfRef.__PVT__zero_flag_part_reg4)));
    __Vdly__sign_A_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg3)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg4)));
    __Vdly__one_flag_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                             && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                  ? (IData)(vlSelfRef.__PVT__one_flag_reg3)
                                  : (IData)(vlSelfRef.__PVT__one_flag_reg4)));
    vlSelfRef.__PVT__sign_A_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                         ? (IData)(vlSelfRef.__PVT__sign_A_reg1)
                                         : (IData)(vlSelfRef.__PVT__sign_A_reg2)));
    __Vdly__sign_A_reg1 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_1)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg0)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg1)));
    vlSelfRef.__PVT__zero_flag_part_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                            && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                                 ? 
                                                (VL_LTS_III(32, 6U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__real_expo_A_reg1))) 
                                                 | (0xffU 
                                                    == (IData)(vlSelfRef.__PVT__expo_A_reg1)))
                                                 : (IData)(vlSelfRef.__PVT__zero_flag_part_reg2)));
    vlSelfRef.__PVT__one_flag_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                      && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                           ? (((IData)(vlSelfRef.__PVT__real_expo_A_reg1) 
                                               >> 7U) 
                                              & VL_LTS_III(32, 0x17U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__real_expo_A_com_reg1))))
                                           : (IData)(vlSelfRef.__PVT__one_flag_reg2)));
    __Vdly__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg2)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg3)));
    __Vdly__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg3)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg4)));
    __Vdly__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_0)
                                ? (IData)(vlSymsp->TOP.PE_top__DOT__mux_09_vld_out)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg0)));
    __Vdly__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_1)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg0)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg1)));
    vlSelfRef.__PVT__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                         ? (IData)(vlSelfRef.__PVT__vld_in_reg1)
                                         : (IData)(vlSelfRef.__PVT__vld_in_reg2)));
    vlSelfRef.__PVT__sign_A_reg0 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__en_stage_0)
                                               ? (vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                  >> 0x1fU)
                                               : (IData)(vlSelfRef.__PVT__sign_A_reg0))));
    vlSelfRef.vld_out = ((IData)(vlSymsp->TOP.rst_n) 
                         && ((IData)(vlSelfRef.__PVT__en_stage_5)
                              ? (IData)(vlSelfRef.__PVT__vld_in_reg4)
                              : (IData)(vlSelfRef.vld_out)));
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = ((IData)(vlSymsp->TOP.rst_n) && ((IData)(vlSymsp->TOP.en)
                                            ? (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0)
                                            : (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 
        = ((IData)(vlSymsp->TOP.rst_n) && (1U & ((IData)(vlSymsp->TOP.en)
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__y_a_minus_y_b_temp) 
                                                  >> 0xaU)
                                                  : (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0))));
    vlSelfRef.__PVT__expo_result_reg3 = __Vdly__expo_result_reg3;
    vlSelfRef.__PVT__zero_flag_part_reg3 = __Vdly__zero_flag_part_reg3;
    vlSelfRef.__PVT__sign_A_reg3 = __Vdly__sign_A_reg3;
    vlSelfRef.__PVT__one_flag_reg3 = __Vdly__one_flag_reg3;
    vlSelfRef.__PVT__shifted_real_A_reg1 = __Vdly__shifted_real_A_reg1;
    vlSelfRef.__PVT__sign_A_reg1 = __Vdly__sign_A_reg1;
    vlSelfRef.__PVT__expo_A_reg1 = __Vdly__expo_A_reg1;
    vlSelfRef.__PVT__real_expo_A_com_reg1 = __Vdly__real_expo_A_com_reg1;
    vlSelfRef.__PVT__real_expo_A_reg1 = __Vdly__real_expo_A_reg1;
    vlSelfRef.__PVT__vld_in_reg3 = __Vdly__vld_in_reg3;
    vlSelfRef.__PVT__vld_in_reg0 = __Vdly__vld_in_reg0;
    vlSelfRef.__PVT__vld_in_reg1 = __Vdly__vld_in_reg1;
    vlSelfRef.__PVT__vld_in_reg4 = __Vdly__vld_in_reg4;
    vlSelfRef.__PVT__sign_A_reg4 = __Vdly__sign_A_reg4;
    vlSelfRef.__PVT__zero_flag_part_reg4 = __Vdly__zero_flag_part_reg4;
    vlSelfRef.__PVT__one_flag_reg4 = __Vdly__one_flag_reg4;
    vlSelfRef.__PVT__expo_result_reg4 = __Vdly__expo_result_reg4;
    vlSelfRef.__PVT__M_minus_Cn_reg4 = __Vdly__M_minus_Cn_reg4;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    vlSelfRef.__PVT__en_stage_4 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg3));
    vlSelfRef.__PVT__en_stage_1 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg0));
    vlSelfRef.__PVT__en_stage_2 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg1));
    vlSelfRef.__PVT__en_stage_3 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg2));
    vlSelfRef.__PVT__en_stage_5 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg4));
}

VL_INLINE_OPT void VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__1(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__en_stage_0 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSymsp->TOP.PE_top__DOT__mux_09_vld_out));
    vlSelfRef.__PVT__shift_bits = (0x1fU & ((0x80U 
                                             & ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                 >> 0x17U) 
                                                - (IData)(0x7fU)))
                                             ? ((IData)(0x1fU) 
                                                - (vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                   >> 0x17U))
                                             : ((vlSymsp->TOP.PE_top__DOT__mux_09_data_out 
                                                 >> 0x17U) 
                                                - (IData)(0x1fU))));
}

VL_INLINE_OPT void VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__2(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__q_b2 = vlSelfRef.__PVT__u_dual_port_ram_pos__DOT__ram
            [(0x1fU & (vlSelfRef.__VdfgRegularize_h40f19cb3_2_1 
                       >> 0x12U))];
        vlSelfRef.__PVT__q_a2 = vlSelfRef.__PVT__u_dual_port_ram_pos__DOT__ram
            [(0x1fU & ((vlSelfRef.__VdfgRegularize_h40f19cb3_2_1 
                        >> 0x12U) - (IData)(1U)))];
    } else {
        vlSelfRef.__PVT__q_b2 = 0U;
        vlSelfRef.__PVT__q_a2 = 0U;
    }
}

VL_INLINE_OPT void VPE_top__2_power_X___ico_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___ico_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__en_stage_0 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__vld_mid));
    vlSelfRef.__PVT__en_stage_1 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg0));
    vlSelfRef.__PVT__en_stage_2 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg1));
    vlSelfRef.__PVT__en_stage_3 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg2));
    vlSelfRef.__PVT__en_stage_4 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg3));
    vlSelfRef.__PVT__en_stage_5 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg4));
}

VL_INLINE_OPT void VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__vld_in_reg0;
    __Vdly__vld_in_reg0 = 0;
    IData/*30:0*/ __Vdly__shifted_real_A_reg1;
    __Vdly__shifted_real_A_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg1;
    __Vdly__expo_A_reg1 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg1;
    __Vdly__sign_A_reg1 = 0;
    CData/*7:0*/ __Vdly__real_expo_A_reg1;
    __Vdly__real_expo_A_reg1 = 0;
    CData/*7:0*/ __Vdly__real_expo_A_com_reg1;
    __Vdly__real_expo_A_com_reg1 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg1;
    __Vdly__vld_in_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_result_reg3;
    __Vdly__expo_result_reg3 = 0;
    CData/*0:0*/ __Vdly__zero_flag_part_reg3;
    __Vdly__zero_flag_part_reg3 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg3;
    __Vdly__sign_A_reg3 = 0;
    CData/*0:0*/ __Vdly__one_flag_reg3;
    __Vdly__one_flag_reg3 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg3;
    __Vdly__vld_in_reg3 = 0;
    IData/*23:0*/ __Vdly__M_minus_Cn_reg4;
    __Vdly__M_minus_Cn_reg4 = 0;
    CData/*7:0*/ __Vdly__expo_result_reg4;
    __Vdly__expo_result_reg4 = 0;
    CData/*0:0*/ __Vdly__zero_flag_part_reg4;
    __Vdly__zero_flag_part_reg4 = 0;
    CData/*0:0*/ __Vdly__sign_A_reg4;
    __Vdly__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly__one_flag_reg4;
    __Vdly__one_flag_reg4 = 0;
    CData/*0:0*/ __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 = 0;
    IData/*29:0*/ __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0;
    IData/*31:0*/ __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0;
    IData/*31:0*/ __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0;
    IData/*29:0*/ __Vdly__mult_result;
    __Vdly__mult_result = 0;
    // Body
    __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg3;
    __Vdly__zero_flag_part_reg3 = vlSelfRef.__PVT__zero_flag_part_reg3;
    __Vdly__sign_A_reg3 = vlSelfRef.__PVT__sign_A_reg3;
    __Vdly__one_flag_reg3 = vlSelfRef.__PVT__one_flag_reg3;
    __Vdly__M_minus_Cn_reg4 = vlSelfRef.__PVT__M_minus_Cn_reg4;
    __Vdly__expo_result_reg4 = vlSelfRef.__PVT__expo_result_reg4;
    __Vdly__zero_flag_part_reg4 = vlSelfRef.__PVT__zero_flag_part_reg4;
    __Vdly__sign_A_reg4 = vlSelfRef.__PVT__sign_A_reg4;
    __Vdly__one_flag_reg4 = vlSelfRef.__PVT__one_flag_reg4;
    __Vdly__expo_A_reg1 = vlSelfRef.__PVT__expo_A_reg1;
    __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg1;
    __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg1;
    __Vdly__shifted_real_A_reg1 = vlSelfRef.__PVT__shifted_real_A_reg1;
    __Vdly__sign_A_reg1 = vlSelfRef.__PVT__sign_A_reg1;
    vlSelfRef.__Vdly__vld_out = vlSelfRef.vld_out;
    __Vdly__vld_in_reg0 = vlSelfRef.__PVT__vld_in_reg0;
    __Vdly__vld_in_reg3 = vlSelfRef.__PVT__vld_in_reg3;
    __Vdly__vld_in_reg1 = vlSelfRef.__PVT__vld_in_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    __Vdly__mult_result = vlSelfRef.__PVT__mult_result;
    if (vlSymsp->TOP.rst_n) {
        __Vdly__M_minus_Cn_reg4 = ((IData)(vlSelfRef.__PVT__en_stage_4)
                                    ? vlSelfRef.__PVT__M_minus_Cn_reg3
                                    : vlSelfRef.__PVT__M_minus_Cn_reg4);
        if (vlSelfRef.__PVT__en_stage_3) {
            __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg2;
            vlSelfRef.__PVT__M_minus_Cn_reg3 = (0xffffffU 
                                                & (vlSelfRef.__PVT__frac_A_reg2 
                                                   - 
                                                   ((IData)(vlSelfRef.__PVT__y_a_reg2) 
                                                    << 7U)));
        } else {
            __Vdly__expo_result_reg3 = vlSelfRef.__PVT__expo_result_reg3;
            vlSelfRef.__PVT__M_minus_Cn_reg3 = (0xffffffU 
                                                & vlSelfRef.__PVT__M_minus_Cn_reg3);
        }
        __Vdly__expo_result_reg4 = ((IData)(vlSelfRef.__PVT__en_stage_4)
                                     ? (IData)(vlSelfRef.__PVT__expo_result_reg3)
                                     : (IData)(vlSelfRef.__PVT__expo_result_reg4));
        __Vdly__expo_A_reg1 = ((IData)(vlSelfRef.__PVT__en_stage_1)
                                ? (IData)(vlSelfRef.__PVT__expo_A_reg0)
                                : (IData)(vlSelfRef.__PVT__expo_A_reg1));
        vlSelfRef.__PVT__expo_A_reg0 = (0xffU & ((IData)(vlSelfRef.__PVT__en_stage_0)
                                                  ? 
                                                 (vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                  >> 0x17U)
                                                  : (IData)(vlSelfRef.__PVT__expo_A_reg0)));
        if (vlSelfRef.__PVT__en_stage_1) {
            __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg0;
            __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg0;
        } else {
            __Vdly__real_expo_A_com_reg1 = vlSelfRef.__PVT__real_expo_A_com_reg1;
            __Vdly__real_expo_A_reg1 = vlSelfRef.__PVT__real_expo_A_reg1;
        }
        if (vlSelfRef.__PVT__en_stage_0) {
            vlSelfRef.__PVT__real_expo_A_reg0 = (0xffU 
                                                 & ((vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                     >> 0x17U) 
                                                    - (IData)(0x7fU)));
            vlSelfRef.__PVT__real_expo_A_com_reg0 = 
                (0xffU & ((IData)(0x7fU) - (vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                            >> 0x17U)));
        } else {
            vlSelfRef.__PVT__real_expo_A_reg0 = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__real_expo_A_reg0));
            vlSelfRef.__PVT__real_expo_A_com_reg0 = 
                (0xffU & (IData)(vlSelfRef.__PVT__real_expo_A_com_reg0));
        }
        __Vdly__shifted_real_A_reg1 = ((IData)(vlSelfRef.__PVT__en_stage_1)
                                        ? vlSelfRef.__PVT__shifted_real_A_reg0
                                        : vlSelfRef.__PVT__shifted_real_A_reg1);
        vlSelfRef.__PVT__shifted_real_A_reg0 = (0x7fffffffU 
                                                & ((IData)(vlSelfRef.__PVT__en_stage_0)
                                                    ? 
                                                   ((0x80U 
                                                     & ((vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                         >> 0x17U) 
                                                        - (IData)(0x7fU)))
                                                     ? 
                                                    ((0x800000U 
                                                      | (0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid)) 
                                                     >> (IData)(vlSelfRef.__PVT__shift_bits))
                                                     : 
                                                    ((0x800000U 
                                                      | (0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid)) 
                                                     << (IData)(vlSelfRef.__PVT__shift_bits)))
                                                    : vlSelfRef.__PVT__shifted_real_A_reg0));
        if (vlSelfRef.__PVT__en_stage_2) {
            vlSelfRef.__PVT__expo_result_reg2 = (0xffU 
                                                 & ((IData)(0x7fU) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__sign_A_reg1)
                                                      ? 
                                                     (~ 
                                                      (0xffU 
                                                       & (vlSelfRef.__PVT__shifted_real_A_reg1 
                                                          >> 0x17U)))
                                                      : 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__shifted_real_A_reg1 
                                                         >> 0x17U)))));
            vlSelfRef.__PVT__y_a_reg2 = vlSelfRef.__PVT__y_a;
            vlSelfRef.__PVT__frac_A_reg2 = vlSelfRef.__PVT__frac_A_reg1;
        } else {
            vlSelfRef.__PVT__expo_result_reg2 = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__expo_result_reg2));
            vlSelfRef.__PVT__y_a_reg2 = vlSelfRef.__PVT__y_a_reg2;
            vlSelfRef.__PVT__frac_A_reg2 = vlSelfRef.__PVT__frac_A_reg2;
        }
        vlSelfRef.__PVT__frac_A_reg1 = ((IData)(vlSelfRef.__PVT__en_stage_1)
                                         ? vlSelfRef.__VdfgRegularize_h40f19cb3_2_1
                                         : vlSelfRef.__PVT__frac_A_reg1);
        if (vlSymsp->TOP.en) {
            __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
            __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
            __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & ((~ vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg) 
                                  + (~ vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg)));
            __Vdly__mult_result = (0x3fffffffU & ((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)
                                                   ? 
                                                  ((IData)(2U) 
                                                   + vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg)
                                                   : 
                                                  ((0x1fffffffU 
                                                    & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2))));
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
        } else {
            __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
            __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
            __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg);
            __Vdly__mult_result = (0x3fffffffU & vlSelfRef.__PVT__mult_result);
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
            vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
        }
        vlSelfRef.Result = ((IData)(vlSelfRef.__PVT__en_stage_5)
                             ? (((IData)(vlSelfRef.__PVT__sign_A_reg4) 
                                 & (IData)(vlSelfRef.__PVT__zero_flag_part_reg4))
                                 ? 0U : (((~ (IData)(vlSelfRef.__PVT__sign_A_reg4)) 
                                          & (IData)(vlSelfRef.__PVT__zero_flag_part_reg4))
                                          ? 0x7f800000U
                                          : ((IData)(vlSelfRef.__PVT__one_flag_reg4)
                                              ? 0x3f800000U
                                              : (((IData)(vlSelfRef.__PVT__expo_result_reg4) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (((0x780000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.__PVT__mult_result 
                                                                           >> 0x1dU)))) 
                                                            << 0x13U)) 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__mult_result 
                                                              >> 0xbU))) 
                                                       + vlSelfRef.__PVT__M_minus_Cn_reg4))))))
                             : vlSelfRef.Result);
    } else {
        __Vdly__expo_result_reg3 = 0U;
        __Vdly__M_minus_Cn_reg4 = 0U;
        __Vdly__expo_result_reg4 = 0U;
        __Vdly__expo_A_reg1 = 0U;
        __Vdly__real_expo_A_com_reg1 = 0U;
        __Vdly__real_expo_A_reg1 = 0U;
        __Vdly__shifted_real_A_reg1 = 0U;
        vlSelfRef.__PVT__M_minus_Cn_reg3 = 0U;
        vlSelfRef.__PVT__expo_A_reg0 = 0U;
        vlSelfRef.__PVT__real_expo_A_reg0 = 0U;
        vlSelfRef.__PVT__real_expo_A_com_reg0 = 0U;
        vlSelfRef.__PVT__expo_result_reg2 = 0U;
        vlSelfRef.__PVT__shifted_real_A_reg0 = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0U;
        __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0U;
        __Vdly__mult_result = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = 0U;
        vlSelfRef.Result = 0U;
        vlSelfRef.__PVT__y_a_reg2 = 0U;
        vlSelfRef.__PVT__frac_A_reg2 = 0U;
        vlSelfRef.__PVT__frac_A_reg1 = 0U;
    }
    __Vdly__zero_flag_part_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                                   && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                        ? (IData)(vlSelfRef.__PVT__zero_flag_part_reg2)
                                        : (IData)(vlSelfRef.__PVT__zero_flag_part_reg3)));
    __Vdly__sign_A_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg2)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg3)));
    __Vdly__one_flag_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                             && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                  ? (IData)(vlSelfRef.__PVT__one_flag_reg2)
                                  : (IData)(vlSelfRef.__PVT__one_flag_reg3)));
    __Vdly__zero_flag_part_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                                   && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                        ? (IData)(vlSelfRef.__PVT__zero_flag_part_reg3)
                                        : (IData)(vlSelfRef.__PVT__zero_flag_part_reg4)));
    __Vdly__sign_A_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg3)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg4)));
    __Vdly__one_flag_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                             && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                  ? (IData)(vlSelfRef.__PVT__one_flag_reg3)
                                  : (IData)(vlSelfRef.__PVT__one_flag_reg4)));
    vlSelfRef.__PVT__sign_A_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                         ? (IData)(vlSelfRef.__PVT__sign_A_reg1)
                                         : (IData)(vlSelfRef.__PVT__sign_A_reg2)));
    __Vdly__sign_A_reg1 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_1)
                                ? (IData)(vlSelfRef.__PVT__sign_A_reg0)
                                : (IData)(vlSelfRef.__PVT__sign_A_reg1)));
    vlSelfRef.__Vdly__vld_out = ((IData)(vlSymsp->TOP.rst_n) 
                                 && ((IData)(vlSelfRef.__PVT__en_stage_5)
                                      ? (IData)(vlSelfRef.__PVT__vld_in_reg4)
                                      : (IData)(vlSelfRef.vld_out)));
    vlSelfRef.__PVT__zero_flag_part_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                            && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                                 ? 
                                                (VL_LTS_III(32, 6U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__real_expo_A_reg1))) 
                                                 | (0xffU 
                                                    == (IData)(vlSelfRef.__PVT__expo_A_reg1)))
                                                 : (IData)(vlSelfRef.__PVT__zero_flag_part_reg2)));
    vlSelfRef.__PVT__one_flag_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                      && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                           ? (((IData)(vlSelfRef.__PVT__real_expo_A_reg1) 
                                               >> 7U) 
                                              & VL_LTS_III(32, 0x17U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__real_expo_A_com_reg1))))
                                           : (IData)(vlSelfRef.__PVT__one_flag_reg2)));
    __Vdly__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_0)
                                ? (IData)(vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__vld_mid)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg0)));
    __Vdly__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_3)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg2)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg3)));
    vlSelfRef.__PVT__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && ((IData)(vlSelfRef.__PVT__en_stage_4)
                                         ? (IData)(vlSelfRef.__PVT__vld_in_reg3)
                                         : (IData)(vlSelfRef.__PVT__vld_in_reg4)));
    __Vdly__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_n) 
                           && ((IData)(vlSelfRef.__PVT__en_stage_1)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg0)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg1)));
    vlSelfRef.__PVT__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && ((IData)(vlSelfRef.__PVT__en_stage_2)
                                         ? (IData)(vlSelfRef.__PVT__vld_in_reg1)
                                         : (IData)(vlSelfRef.__PVT__vld_in_reg2)));
    vlSelfRef.__PVT__sign_A_reg0 = ((IData)(vlSymsp->TOP.rst_n) 
                                    && (1U & ((IData)(vlSelfRef.__PVT__en_stage_0)
                                               ? (vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                  >> 0x1fU)
                                               : (IData)(vlSelfRef.__PVT__sign_A_reg0))));
    __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = ((IData)(vlSymsp->TOP.rst_n) && ((IData)(vlSymsp->TOP.en)
                                            ? (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0)
                                            : (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 
        = ((IData)(vlSymsp->TOP.rst_n) && (1U & ((IData)(vlSymsp->TOP.en)
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__y_a_minus_y_b_temp) 
                                                  >> 0xaU)
                                                  : (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0))));
    vlSelfRef.__PVT__expo_result_reg3 = __Vdly__expo_result_reg3;
    vlSelfRef.__PVT__zero_flag_part_reg3 = __Vdly__zero_flag_part_reg3;
    vlSelfRef.__PVT__sign_A_reg3 = __Vdly__sign_A_reg3;
    vlSelfRef.__PVT__one_flag_reg3 = __Vdly__one_flag_reg3;
    vlSelfRef.__PVT__shifted_real_A_reg1 = __Vdly__shifted_real_A_reg1;
    vlSelfRef.__PVT__sign_A_reg1 = __Vdly__sign_A_reg1;
    vlSelfRef.__PVT__expo_A_reg1 = __Vdly__expo_A_reg1;
    vlSelfRef.__PVT__real_expo_A_com_reg1 = __Vdly__real_expo_A_com_reg1;
    vlSelfRef.__PVT__real_expo_A_reg1 = __Vdly__real_expo_A_reg1;
    vlSelfRef.__PVT__vld_in_reg3 = __Vdly__vld_in_reg3;
    vlSelfRef.__PVT__vld_in_reg0 = __Vdly__vld_in_reg0;
    vlSelfRef.__PVT__vld_in_reg1 = __Vdly__vld_in_reg1;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = __Vdly__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = __Vdly__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = __Vdly__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = __Vdly__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    vlSelfRef.__PVT__sign_A_reg4 = __Vdly__sign_A_reg4;
    vlSelfRef.__PVT__zero_flag_part_reg4 = __Vdly__zero_flag_part_reg4;
    vlSelfRef.__PVT__one_flag_reg4 = __Vdly__one_flag_reg4;
    vlSelfRef.__PVT__expo_result_reg4 = __Vdly__expo_result_reg4;
    vlSelfRef.__PVT__mult_result = __Vdly__mult_result;
    vlSelfRef.__PVT__M_minus_Cn_reg4 = __Vdly__M_minus_Cn_reg4;
    vlSelfRef.__PVT__en_stage_4 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg3));
    vlSelfRef.__PVT__en_stage_5 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg4));
    vlSelfRef.__PVT__en_stage_1 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg0));
    vlSelfRef.__PVT__en_stage_2 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg1));
    vlSelfRef.__PVT__en_stage_3 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSelfRef.__PVT__vld_in_reg2));
}

VL_INLINE_OPT void VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__1(VPE_top__2_power_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPE_top__2_power_X___nba_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vld_out = vlSelfRef.__Vdly__vld_out;
    vlSelfRef.__PVT__en_stage_0 = ((IData)(vlSymsp->TOP.en) 
                                   & (IData)(vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__vld_mid));
    vlSelfRef.__PVT__shift_bits = (0x1fU & ((0x80U 
                                             & ((vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                 >> 0x17U) 
                                                - (IData)(0x7fU)))
                                             ? ((IData)(0x1fU) 
                                                - (vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                   >> 0x17U))
                                             : ((vlSymsp->TOP.PE_top__DOT__u_exp_x_0__DOT__Result_mid 
                                                 >> 0x17U) 
                                                - (IData)(0x1fU))));
}
