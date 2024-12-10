// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V_2_power_X.h for the primary calling header

#include "V_2_power_X__pch.h"
#include "V_2_power_X___024root.h"

void V_2_power_X___024root___ico_sequent__TOP__0(V_2_power_X___024root* vlSelf);

void V_2_power_X___024root___eval_ico(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        V_2_power_X___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void V_2_power_X___024root___ico_sequent__TOP__0(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._2_power_X__DOT__shift_bits = (0x1fU 
                                             & ((0x80U 
                                                 & ((vlSelfRef.Oprand_A 
                                                     >> 0x17U) 
                                                    - (IData)(0x7fU)))
                                                 ? 
                                                ((IData)(0x1fU) 
                                                 - 
                                                 (vlSelfRef.Oprand_A 
                                                  >> 0x17U))
                                                 : 
                                                ((vlSelfRef.Oprand_A 
                                                  >> 0x17U) 
                                                 - (IData)(0x1fU))));
    vlSelfRef._2_power_X__DOT__en_stage_0 = ((IData)(vlSelfRef.en) 
                                             & (IData)(vlSelfRef.vld_in));
    vlSelfRef._2_power_X__DOT__en_stage_1 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg0) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_2 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg1) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_3 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg2) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_4 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg3) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_5 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg4) 
                                             & (IData)(vlSelfRef.en));
}

void V_2_power_X___024root___eval_triggers__ico(V_2_power_X___024root* vlSelf);

bool V_2_power_X___024root___eval_phase__ico(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    V_2_power_X___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        V_2_power_X___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void V_2_power_X___024root___eval_act(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void V_2_power_X___024root___nba_sequent__TOP__0(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___nba_sequent__TOP__1(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___nba_sequent__TOP__2(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___nba_comb__TOP__0(V_2_power_X___024root* vlSelf);

void V_2_power_X___024root___eval_nba(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        V_2_power_X___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        V_2_power_X___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        V_2_power_X___024root___nba_sequent__TOP__2(vlSelf);
        V_2_power_X___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void V_2_power_X___024root___nba_sequent__TOP__0(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly___2_power_X__DOT__real_expo_A_reg0;
    __Vdly___2_power_X__DOT__real_expo_A_reg0 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__vld_in_reg0;
    __Vdly___2_power_X__DOT__vld_in_reg0 = 0;
    IData/*30:0*/ __Vdly___2_power_X__DOT__shifted_real_A_reg1;
    __Vdly___2_power_X__DOT__shifted_real_A_reg1 = 0;
    CData/*7:0*/ __Vdly___2_power_X__DOT__expo_A_reg1;
    __Vdly___2_power_X__DOT__expo_A_reg1 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__sign_A_reg1;
    __Vdly___2_power_X__DOT__sign_A_reg1 = 0;
    CData/*7:0*/ __Vdly___2_power_X__DOT__real_expo_A_reg1;
    __Vdly___2_power_X__DOT__real_expo_A_reg1 = 0;
    CData/*7:0*/ __Vdly___2_power_X__DOT__real_expo_A_com_reg1;
    __Vdly___2_power_X__DOT__real_expo_A_com_reg1 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__vld_in_reg1;
    __Vdly___2_power_X__DOT__vld_in_reg1 = 0;
    CData/*7:0*/ __Vdly___2_power_X__DOT__expo_result_reg3;
    __Vdly___2_power_X__DOT__expo_result_reg3 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__zero_flag_part_reg3;
    __Vdly___2_power_X__DOT__zero_flag_part_reg3 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__sign_A_reg3;
    __Vdly___2_power_X__DOT__sign_A_reg3 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__one_flag_reg3;
    __Vdly___2_power_X__DOT__one_flag_reg3 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__vld_in_reg3;
    __Vdly___2_power_X__DOT__vld_in_reg3 = 0;
    IData/*23:0*/ __Vdly___2_power_X__DOT__M_minus_Cn_reg4;
    __Vdly___2_power_X__DOT__M_minus_Cn_reg4 = 0;
    CData/*7:0*/ __Vdly___2_power_X__DOT__expo_result_reg4;
    __Vdly___2_power_X__DOT__expo_result_reg4 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__zero_flag_part_reg4;
    __Vdly___2_power_X__DOT__zero_flag_part_reg4 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__sign_A_reg4;
    __Vdly___2_power_X__DOT__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__one_flag_reg4;
    __Vdly___2_power_X__DOT__one_flag_reg4 = 0;
    CData/*0:0*/ __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1 = 0;
    IData/*29:0*/ __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0;
    IData/*31:0*/ __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0;
    IData/*31:0*/ __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0;
    IData/*29:0*/ __Vdly___2_power_X__DOT__mult_result;
    __Vdly___2_power_X__DOT__mult_result = 0;
    // Body
    __Vdly___2_power_X__DOT__expo_result_reg3 = vlSelfRef._2_power_X__DOT__expo_result_reg3;
    __Vdly___2_power_X__DOT__zero_flag_part_reg3 = vlSelfRef._2_power_X__DOT__zero_flag_part_reg3;
    __Vdly___2_power_X__DOT__sign_A_reg3 = vlSelfRef._2_power_X__DOT__sign_A_reg3;
    __Vdly___2_power_X__DOT__one_flag_reg3 = vlSelfRef._2_power_X__DOT__one_flag_reg3;
    __Vdly___2_power_X__DOT__M_minus_Cn_reg4 = vlSelfRef._2_power_X__DOT__M_minus_Cn_reg4;
    __Vdly___2_power_X__DOT__expo_result_reg4 = vlSelfRef._2_power_X__DOT__expo_result_reg4;
    __Vdly___2_power_X__DOT__zero_flag_part_reg4 = vlSelfRef._2_power_X__DOT__zero_flag_part_reg4;
    __Vdly___2_power_X__DOT__sign_A_reg4 = vlSelfRef._2_power_X__DOT__sign_A_reg4;
    __Vdly___2_power_X__DOT__one_flag_reg4 = vlSelfRef._2_power_X__DOT__one_flag_reg4;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    __Vdly___2_power_X__DOT__expo_A_reg1 = vlSelfRef._2_power_X__DOT__expo_A_reg1;
    __Vdly___2_power_X__DOT__real_expo_A_com_reg1 = vlSelfRef._2_power_X__DOT__real_expo_A_com_reg1;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    __Vdly___2_power_X__DOT__real_expo_A_reg0 = vlSelfRef._2_power_X__DOT__real_expo_A_reg0;
    __Vdly___2_power_X__DOT__real_expo_A_reg1 = vlSelfRef._2_power_X__DOT__real_expo_A_reg1;
    __Vdly___2_power_X__DOT__shifted_real_A_reg1 = vlSelfRef._2_power_X__DOT__shifted_real_A_reg1;
    __Vdly___2_power_X__DOT__vld_in_reg0 = vlSelfRef._2_power_X__DOT__vld_in_reg0;
    __Vdly___2_power_X__DOT__sign_A_reg1 = vlSelfRef._2_power_X__DOT__sign_A_reg1;
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    __Vdly___2_power_X__DOT__vld_in_reg3 = vlSelfRef._2_power_X__DOT__vld_in_reg3;
    __Vdly___2_power_X__DOT__vld_in_reg1 = vlSelfRef._2_power_X__DOT__vld_in_reg1;
    __Vdly___2_power_X__DOT__mult_result = vlSelfRef._2_power_X__DOT__mult_result;
    vlSelfRef.vld_out = ((IData)(vlSelfRef.rst_n) && 
                         ((IData)(vlSelfRef._2_power_X__DOT__en_stage_5)
                           ? (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg4)
                           : (IData)(vlSelfRef.vld_out)));
    if (vlSelfRef.rst_n) {
        __Vdly___2_power_X__DOT__M_minus_Cn_reg4 = 
            ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
              ? vlSelfRef._2_power_X__DOT__M_minus_Cn_reg3
              : vlSelfRef._2_power_X__DOT__M_minus_Cn_reg4);
        if (vlSelfRef._2_power_X__DOT__en_stage_3) {
            __Vdly___2_power_X__DOT__expo_result_reg3 
                = vlSelfRef._2_power_X__DOT__expo_result_reg2;
            vlSelfRef._2_power_X__DOT__M_minus_Cn_reg3 
                = (0xffffffU & (vlSelfRef._2_power_X__DOT__frac_A_reg2 
                                - ((IData)(vlSelfRef._2_power_X__DOT__y_a_reg2) 
                                   << 7U)));
        } else {
            __Vdly___2_power_X__DOT__expo_result_reg3 
                = vlSelfRef._2_power_X__DOT__expo_result_reg3;
            vlSelfRef._2_power_X__DOT__M_minus_Cn_reg3 
                = (0xffffffU & vlSelfRef._2_power_X__DOT__M_minus_Cn_reg3);
        }
        __Vdly___2_power_X__DOT__expo_result_reg4 = 
            ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
              ? (IData)(vlSelfRef._2_power_X__DOT__expo_result_reg3)
              : (IData)(vlSelfRef._2_power_X__DOT__expo_result_reg4));
        if (vlSelfRef.en) {
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg;
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg;
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & ((~ vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg) 
                                  + (~ vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg)));
            __Vdly___2_power_X__DOT__mult_result = 
                (0x3fffffffU & ((IData)(vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1)
                                 ? ((IData)(2U) + vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg)
                                 : ((0x1fffffffU & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2) 
                                    + (0x1fffffffU 
                                       & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2))));
            vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
            vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
        } else {
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
            __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
                = (0x3fffffffU & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg);
            __Vdly___2_power_X__DOT__mult_result = 
                (0x3fffffffU & vlSelfRef._2_power_X__DOT__mult_result);
            vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg;
            vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg 
                = vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg;
        }
        __Vdly___2_power_X__DOT__expo_A_reg1 = ((IData)(vlSelfRef._2_power_X__DOT__en_stage_1)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__expo_A_reg0)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__expo_A_reg1));
        if (vlSelfRef._2_power_X__DOT__en_stage_0) {
            vlSelfRef._2_power_X__DOT__expo_A_reg0 
                = (0xffU & (vlSelfRef.Oprand_A >> 0x17U));
            __Vdly___2_power_X__DOT__real_expo_A_reg0 
                = (0xffU & ((vlSelfRef.Oprand_A >> 0x17U) 
                            - (IData)(0x7fU)));
        } else {
            vlSelfRef._2_power_X__DOT__expo_A_reg0 
                = (0xffU & (IData)(vlSelfRef._2_power_X__DOT__expo_A_reg0));
            __Vdly___2_power_X__DOT__real_expo_A_reg0 
                = (0xffU & (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_reg0));
        }
        __Vdly___2_power_X__DOT__real_expo_A_com_reg1 
            = ((IData)(vlSelfRef._2_power_X__DOT__en_stage_1)
                ? (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_com_reg0)
                : (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_com_reg1));
        vlSelfRef._2_power_X__DOT__real_expo_A_com_reg0 
            = (0xffU & ((IData)(vlSelfRef._2_power_X__DOT__en_stage_0)
                         ? ((IData)(0x7fU) - (vlSelfRef.Oprand_A 
                                              >> 0x17U))
                         : (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_com_reg0)));
        if (vlSelfRef._2_power_X__DOT__en_stage_1) {
            __Vdly___2_power_X__DOT__real_expo_A_reg1 
                = vlSelfRef._2_power_X__DOT__real_expo_A_reg0;
            __Vdly___2_power_X__DOT__shifted_real_A_reg1 
                = vlSelfRef._2_power_X__DOT__shifted_real_A_reg0;
        } else {
            __Vdly___2_power_X__DOT__real_expo_A_reg1 
                = vlSelfRef._2_power_X__DOT__real_expo_A_reg1;
            __Vdly___2_power_X__DOT__shifted_real_A_reg1 
                = vlSelfRef._2_power_X__DOT__shifted_real_A_reg1;
        }
        vlSelfRef._2_power_X__DOT__shifted_real_A_reg0 
            = (0x7fffffffU & ((IData)(vlSelfRef._2_power_X__DOT__en_stage_0)
                               ? ((0x80U & ((vlSelfRef.Oprand_A 
                                             >> 0x17U) 
                                            - (IData)(0x7fU)))
                                   ? ((0x800000U | 
                                       (0x7fffffU & vlSelfRef.Oprand_A)) 
                                      >> (IData)(vlSelfRef._2_power_X__DOT__shift_bits))
                                   : ((0x800000U | 
                                       (0x7fffffU & vlSelfRef.Oprand_A)) 
                                      << (IData)(vlSelfRef._2_power_X__DOT__shift_bits)))
                               : vlSelfRef._2_power_X__DOT__shifted_real_A_reg0));
        if (vlSelfRef._2_power_X__DOT__en_stage_2) {
            vlSelfRef._2_power_X__DOT__expo_result_reg2 
                = (0xffU & ((IData)(0x7fU) + ((IData)(vlSelfRef._2_power_X__DOT__sign_A_reg1)
                                               ? (~ 
                                                  (0xffU 
                                                   & (vlSelfRef._2_power_X__DOT__shifted_real_A_reg1 
                                                      >> 0x17U)))
                                               : (0xffU 
                                                  & (vlSelfRef._2_power_X__DOT__shifted_real_A_reg1 
                                                     >> 0x17U)))));
            vlSelfRef._2_power_X__DOT__y_a_reg2 = vlSelfRef._2_power_X__DOT__y_a;
            vlSelfRef._2_power_X__DOT__frac_A_reg2 
                = vlSelfRef._2_power_X__DOT__frac_A_reg1;
        } else {
            vlSelfRef._2_power_X__DOT__expo_result_reg2 
                = (0xffU & (IData)(vlSelfRef._2_power_X__DOT__expo_result_reg2));
            vlSelfRef._2_power_X__DOT__y_a_reg2 = vlSelfRef._2_power_X__DOT__y_a_reg2;
            vlSelfRef._2_power_X__DOT__frac_A_reg2 
                = vlSelfRef._2_power_X__DOT__frac_A_reg2;
        }
        vlSelfRef._2_power_X__DOT__frac_A_reg1 = ((IData)(vlSelfRef._2_power_X__DOT__en_stage_1)
                                                   ? vlSelfRef._2_power_X__DOT____VdfgRegularize_h40f19cb3_2_1
                                                   : vlSelfRef._2_power_X__DOT__frac_A_reg1);
        vlSelfRef.Result = ((IData)(vlSelfRef._2_power_X__DOT__en_stage_5)
                             ? (((IData)(vlSelfRef._2_power_X__DOT__sign_A_reg4) 
                                 & (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg4))
                                 ? 0U : (((~ (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg4)) 
                                          & (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg4))
                                          ? 0x7f800000U
                                          : ((IData)(vlSelfRef._2_power_X__DOT__one_flag_reg4)
                                              ? 0x3f800000U
                                              : (((IData)(vlSelfRef._2_power_X__DOT__expo_result_reg4) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (((0x780000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef._2_power_X__DOT__mult_result 
                                                                           >> 0x1dU)))) 
                                                            << 0x13U)) 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef._2_power_X__DOT__mult_result 
                                                              >> 0xbU))) 
                                                       + vlSelfRef._2_power_X__DOT__M_minus_Cn_reg4))))))
                             : vlSelfRef.Result);
    } else {
        __Vdly___2_power_X__DOT__expo_result_reg3 = 0U;
        __Vdly___2_power_X__DOT__M_minus_Cn_reg4 = 0U;
        __Vdly___2_power_X__DOT__expo_result_reg4 = 0U;
        __Vdly___2_power_X__DOT__expo_A_reg1 = 0U;
        __Vdly___2_power_X__DOT__real_expo_A_com_reg1 = 0U;
        __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0U;
        __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0U;
        vlSelfRef._2_power_X__DOT__expo_A_reg0 = 0U;
        __Vdly___2_power_X__DOT__real_expo_A_reg0 = 0U;
        vlSelfRef._2_power_X__DOT__real_expo_A_com_reg0 = 0U;
        __Vdly___2_power_X__DOT__real_expo_A_reg1 = 0U;
        __Vdly___2_power_X__DOT__shifted_real_A_reg1 = 0U;
        vlSelfRef._2_power_X__DOT__M_minus_Cn_reg3 = 0U;
        vlSelfRef._2_power_X__DOT__expo_result_reg2 = 0U;
        __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0U;
        vlSelfRef._2_power_X__DOT__shifted_real_A_reg0 = 0U;
        __Vdly___2_power_X__DOT__mult_result = 0U;
        vlSelfRef.Result = 0U;
        vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg = 0U;
        vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg = 0U;
        vlSelfRef._2_power_X__DOT__y_a_reg2 = 0U;
        vlSelfRef._2_power_X__DOT__frac_A_reg2 = 0U;
        vlSelfRef._2_power_X__DOT__frac_A_reg1 = 0U;
    }
    __Vdly___2_power_X__DOT__zero_flag_part_reg3 = 
        ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_3)
                                       ? (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg2)
                                       : (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg3)));
    __Vdly___2_power_X__DOT__sign_A_reg3 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_3)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg2)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg3)));
    __Vdly___2_power_X__DOT__one_flag_reg3 = ((IData)(vlSelfRef.rst_n) 
                                              && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_3)
                                                   ? (IData)(vlSelfRef._2_power_X__DOT__one_flag_reg2)
                                                   : (IData)(vlSelfRef._2_power_X__DOT__one_flag_reg3)));
    __Vdly___2_power_X__DOT__zero_flag_part_reg4 = 
        ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
                                       ? (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg3)
                                       : (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg4)));
    __Vdly___2_power_X__DOT__sign_A_reg4 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg3)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg4)));
    __Vdly___2_power_X__DOT__one_flag_reg4 = ((IData)(vlSelfRef.rst_n) 
                                              && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
                                                   ? (IData)(vlSelfRef._2_power_X__DOT__one_flag_reg3)
                                                   : (IData)(vlSelfRef._2_power_X__DOT__one_flag_reg4)));
    __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.en)
                                         ? (IData)(vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg0)
                                         : (IData)(vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1)));
    vlSelfRef._2_power_X__DOT__sign_A_reg2 = ((IData)(vlSelfRef.rst_n) 
                                              && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_2)
                                                   ? (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg1)
                                                   : (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg2)));
    __Vdly___2_power_X__DOT__vld_in_reg0 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_0)
                                                 ? (IData)(vlSelfRef.vld_in)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg0)));
    __Vdly___2_power_X__DOT__sign_A_reg1 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_1)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg0)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg1)));
    vlSelfRef._2_power_X__DOT__zero_flag_part_reg2 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_2)
                                         ? (VL_LTS_III(32, 6U, 
                                                       VL_EXTENDS_II(32,8, (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_reg1))) 
                                            | (0xffU 
                                               == (IData)(vlSelfRef._2_power_X__DOT__expo_A_reg1)))
                                         : (IData)(vlSelfRef._2_power_X__DOT__zero_flag_part_reg2)));
    vlSelfRef._2_power_X__DOT__one_flag_reg2 = ((IData)(vlSelfRef.rst_n) 
                                                && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_2)
                                                     ? 
                                                    (((IData)(vlSelfRef._2_power_X__DOT__real_expo_A_reg1) 
                                                      >> 7U) 
                                                     & VL_LTS_III(32, 0x17U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelfRef._2_power_X__DOT__real_expo_A_com_reg1))))
                                                     : (IData)(vlSelfRef._2_power_X__DOT__one_flag_reg2)));
    vlSelfRef._2_power_X__DOT__sign_A_reg0 = ((IData)(vlSelfRef.rst_n) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef._2_power_X__DOT__en_stage_0)
                                                      ? 
                                                     (vlSelfRef.Oprand_A 
                                                      >> 0x1fU)
                                                      : (IData)(vlSelfRef._2_power_X__DOT__sign_A_reg0))));
    __Vdly___2_power_X__DOT__vld_in_reg3 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_3)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg2)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg3)));
    vlSelfRef._2_power_X__DOT__vld_in_reg4 = ((IData)(vlSelfRef.rst_n) 
                                              && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_4)
                                                   ? (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg3)
                                                   : (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg4)));
    __Vdly___2_power_X__DOT__vld_in_reg1 = ((IData)(vlSelfRef.rst_n) 
                                            && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_1)
                                                 ? (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg0)
                                                 : (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg1)));
    vlSelfRef._2_power_X__DOT__vld_in_reg2 = ((IData)(vlSelfRef.rst_n) 
                                              && ((IData)(vlSelfRef._2_power_X__DOT__en_stage_2)
                                                   ? (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg1)
                                                   : (IData)(vlSelfRef._2_power_X__DOT__vld_in_reg2)));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg0 
        = ((IData)(vlSelfRef.rst_n) && (1U & ((IData)(vlSelfRef.en)
                                               ? ((IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp) 
                                                  >> 0xaU)
                                               : (IData)(vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg0))));
    vlSelfRef._2_power_X__DOT__expo_result_reg3 = __Vdly___2_power_X__DOT__expo_result_reg3;
    vlSelfRef._2_power_X__DOT__zero_flag_part_reg3 
        = __Vdly___2_power_X__DOT__zero_flag_part_reg3;
    vlSelfRef._2_power_X__DOT__sign_A_reg3 = __Vdly___2_power_X__DOT__sign_A_reg3;
    vlSelfRef._2_power_X__DOT__one_flag_reg3 = __Vdly___2_power_X__DOT__one_flag_reg3;
    vlSelfRef._2_power_X__DOT__real_expo_A_reg0 = __Vdly___2_power_X__DOT__real_expo_A_reg0;
    vlSelfRef._2_power_X__DOT__shifted_real_A_reg1 
        = __Vdly___2_power_X__DOT__shifted_real_A_reg1;
    vlSelfRef._2_power_X__DOT__sign_A_reg1 = __Vdly___2_power_X__DOT__sign_A_reg1;
    vlSelfRef._2_power_X__DOT__expo_A_reg1 = __Vdly___2_power_X__DOT__expo_A_reg1;
    vlSelfRef._2_power_X__DOT__real_expo_A_com_reg1 
        = __Vdly___2_power_X__DOT__real_expo_A_com_reg1;
    vlSelfRef._2_power_X__DOT__real_expo_A_reg1 = __Vdly___2_power_X__DOT__real_expo_A_reg1;
    vlSelfRef._2_power_X__DOT__vld_in_reg3 = __Vdly___2_power_X__DOT__vld_in_reg3;
    vlSelfRef._2_power_X__DOT__vld_in_reg0 = __Vdly___2_power_X__DOT__vld_in_reg0;
    vlSelfRef._2_power_X__DOT__vld_in_reg1 = __Vdly___2_power_X__DOT__vld_in_reg1;
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
        = __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
        = __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
        = __Vdly___2_power_X__DOT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    vlSelfRef._2_power_X__DOT__sign_A_reg4 = __Vdly___2_power_X__DOT__sign_A_reg4;
    vlSelfRef._2_power_X__DOT__zero_flag_part_reg4 
        = __Vdly___2_power_X__DOT__zero_flag_part_reg4;
    vlSelfRef._2_power_X__DOT__one_flag_reg4 = __Vdly___2_power_X__DOT__one_flag_reg4;
    vlSelfRef._2_power_X__DOT__expo_result_reg4 = __Vdly___2_power_X__DOT__expo_result_reg4;
    vlSelfRef._2_power_X__DOT__mult_result = __Vdly___2_power_X__DOT__mult_result;
    vlSelfRef._2_power_X__DOT__M_minus_Cn_reg4 = __Vdly___2_power_X__DOT__M_minus_Cn_reg4;
    vlSelfRef._2_power_X__DOT__en_stage_4 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg3) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_5 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg4) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_1 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg0) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_2 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg1) 
                                             & (IData)(vlSelfRef.en));
    vlSelfRef._2_power_X__DOT__en_stage_3 = ((IData)(vlSelfRef._2_power_X__DOT__vld_in_reg2) 
                                             & (IData)(vlSelfRef.en));
}

VL_INLINE_OPT void V_2_power_X___024root___nba_sequent__TOP__1(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef._2_power_X__DOT__q_b2 = vlSelfRef._2_power_X__DOT__u_dual_port_ram_pos__DOT__ram
            [(0x1fU & (vlSelfRef._2_power_X__DOT____VdfgRegularize_h40f19cb3_2_1 
                       >> 0x12U))];
        vlSelfRef._2_power_X__DOT__q_a2 = vlSelfRef._2_power_X__DOT__u_dual_port_ram_pos__DOT__ram
            [(0x1fU & ((vlSelfRef._2_power_X__DOT____VdfgRegularize_h40f19cb3_2_1 
                        >> 0x12U) - (IData)(1U)))];
    } else {
        vlSelfRef._2_power_X__DOT__q_b2 = 0U;
        vlSelfRef._2_power_X__DOT__q_a2 = 0U;
    }
}

VL_INLINE_OPT void V_2_power_X___024root___nba_sequent__TOP__2(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._2_power_X__DOT____VdfgRegularize_h40f19cb3_2_1 
        = (0x7fffffU & ((IData)(vlSelfRef._2_power_X__DOT__sign_A_reg0)
                         ? (~ vlSelfRef._2_power_X__DOT__shifted_real_A_reg0)
                         : vlSelfRef._2_power_X__DOT__shifted_real_A_reg0));
}

VL_INLINE_OPT void V_2_power_X___024root___nba_comb__TOP__0(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*19:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*24:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C = 0;
    IData/*24:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C = 0;
    IData/*31:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_0;
    __VdfgRegularize_hd87f99a1_3_0 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_1;
    __VdfgRegularize_hd87f99a1_3_1 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_2;
    __VdfgRegularize_hd87f99a1_3_2 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_3;
    __VdfgRegularize_hd87f99a1_3_3 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_4;
    __VdfgRegularize_hd87f99a1_3_4 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_5;
    __VdfgRegularize_hd87f99a1_3_5 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_6;
    __VdfgRegularize_hd87f99a1_3_6 = 0;
    IData/*19:0*/ __VdfgRegularize_hd87f99a1_3_7;
    __VdfgRegularize_hd87f99a1_3_7 = 0;
    // Body
    vlSelfRef._2_power_X__DOT__y_a = ((0U == (0x1fU 
                                              & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                                                 >> 0x12U)))
                                       ? 0U : (IData)(vlSelfRef._2_power_X__DOT__q_a2));
    vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp = 
        (0xffffU & ((IData)(vlSelfRef._2_power_X__DOT__y_a) 
                    - (IData)(vlSelfRef._2_power_X__DOT__q_b2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0 
        = ((0x400U & (IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp))
            ? ((IData)(1U) + (~ ((0x800U & ((IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp) 
                                            << 1U)) 
                                 | (0x7ffU & (IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp)))))
            : ((0x800U & ((IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp) 
                          << 1U)) | (0x7ffU & (IData)(vlSelfRef._2_power_X__DOT__y_a_minus_y_b_temp))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
        = ((1U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x3ffffU & vlSelfRef._2_power_X__DOT__frac_A_reg1)
            : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
        = ((2U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x7fffeU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 1U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 
        = ((4U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0xffffcU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 2U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
        = ((0x40U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x3ffffU & vlSelfRef._2_power_X__DOT__frac_A_reg1)
            : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
        = ((0x80U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x7fffeU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 1U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 
        = ((0x100U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0xffffcU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 2U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
        = ((8U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x3ffffU & vlSelfRef._2_power_X__DOT__frac_A_reg1)
            : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
        = ((0x10U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x7fffeU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 1U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 
        = ((0x20U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0xffffcU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 2U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
        = ((0x200U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x3ffffU & vlSelfRef._2_power_X__DOT__frac_A_reg1)
            : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
        = ((0x400U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0x7fffeU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 1U)) : 0U);
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 
        = ((0x800U & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____VdfgRegularize_h99af5bb4_0_0)
            ? (0xffffcU & (vlSelfRef._2_power_X__DOT__frac_A_reg1 
                           << 2U)) : 0U);
    __VdfgRegularize_hd87f99a1_3_1 = (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                      ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         ^ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_0 = ((_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                       & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                          | _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3)) 
                                      | (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_5 = (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                      ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         ^ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_4 = ((_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                       & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                          | _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3)) 
                                      | (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_2 = ((_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                       & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                          | _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3)) 
                                      | (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_3 = (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                      ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         ^ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_6 = ((_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                       & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                          | _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3)) 
                                      | (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_hd87f99a1_3_7 = (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                      ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         ^ _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_1 >> 1U) 
                 ^ __VdfgRegularize_hd87f99a1_3_0));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_1 >> 2U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_0 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_5 >> 1U) 
                 ^ __VdfgRegularize_hd87f99a1_3_4));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_5 >> 2U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_4 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_hd87f99a1_3_3 ^ (
                                                   (__VdfgRegularize_hd87f99a1_3_1 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_hd87f99a1_3_0 
                                                    >> 2U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0x12U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0x11U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0x13U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0x12U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 1U) 
                 ^ __VdfgRegularize_hd87f99a1_3_2));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 2U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0x11U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0x10U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 3U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 2U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 4U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 3U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 5U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 4U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 6U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 5U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 7U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 6U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 8U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 7U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 9U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 8U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xaU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 9U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xbU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xaU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xcU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xbU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xdU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xcU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xeU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xdU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0xfU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xeU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_3 >> 0x10U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_2 
                    >> 0xfU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_hd87f99a1_3_7 ^ (
                                                   (__VdfgRegularize_hd87f99a1_3_5 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_hd87f99a1_3_4 
                                                    >> 2U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0x12U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0x11U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0x13U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0x12U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0x11U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0x10U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0x10U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xfU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 1U) 
                 ^ __VdfgRegularize_hd87f99a1_3_6));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 2U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 3U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 2U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 4U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 3U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 5U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 4U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 6U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 5U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 7U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 6U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 8U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 7U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 9U) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 8U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xaU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 9U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xbU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xaU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xcU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xbU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xdU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xcU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xeU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xdU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_hd87f99a1_3_7 >> 0xfU) 
                 ^ (__VdfgRegularize_hd87f99a1_3_6 
                    >> 0xeU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 4U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 3U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 5U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 4U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_hd87f99a1_3_0 >> 0x13U));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 6U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 5U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 7U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 6U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 8U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 7U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 9U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                               >> 8U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xaU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 9U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xbU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 0xaU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xcU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 0xbU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xdU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 0xcU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xeU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 0xdU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0xfU) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                 >> 0xeU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0x10U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                  >> 0xfU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0x11U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                  >> 0x10U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0x12U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                  >> 0x11U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_1 
                     >> 0x13U) ^ (__VdfgRegularize_hd87f99a1_3_0 
                                  >> 0x12U))));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x1000000U & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x400000U & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x16U) & (__VdfgRegularize_hd87f99a1_3_2 
                                          << 4U))) 
              | ((0x200000U & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x15U) & (__VdfgRegularize_hd87f99a1_3_2 
                                             << 4U))) 
                 | ((0x100000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_hd87f99a1_3_0 
                                       >> 0x13U) : 
                                   (__VdfgRegularize_hd87f99a1_3_2 
                                    >> 0x10U)) << 0x14U)) 
                    | ((0x80000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                      ? (__VdfgRegularize_hd87f99a1_3_0 
                                         >> 0x12U) : 
                                     (__VdfgRegularize_hd87f99a1_3_2 
                                      >> 0xfU)) << 0x13U)) 
                       | ((0x40000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                         ? (__VdfgRegularize_hd87f99a1_3_0 
                                            >> 0x11U)
                                         : (__VdfgRegularize_hd87f99a1_3_2 
                                            >> 0xeU)) 
                                       << 0x12U)) | 
                          ((0x20000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                          ? (__VdfgRegularize_hd87f99a1_3_0 
                                             >> 0x10U)
                                          : (__VdfgRegularize_hd87f99a1_3_2 
                                             >> 0xdU)) 
                                        << 0x11U)) 
                           | ((0x10000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                             ? (__VdfgRegularize_hd87f99a1_3_0 
                                                >> 0xfU)
                                             : (__VdfgRegularize_hd87f99a1_3_2 
                                                >> 0xcU)) 
                                           << 0x10U)) 
                              | ((0x8000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                               ? (__VdfgRegularize_hd87f99a1_3_0 
                                                  >> 0xeU)
                                               : (__VdfgRegularize_hd87f99a1_3_2 
                                                  >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                  ? 
                                                 (__VdfgRegularize_hd87f99a1_3_0 
                                                  >> 0xdU)
                                                  : 
                                                 (__VdfgRegularize_hd87f99a1_3_2 
                                                  >> 0xaU)) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                     ? 
                                                    (__VdfgRegularize_hd87f99a1_3_0 
                                                     >> 0xcU)
                                                     : 
                                                    (__VdfgRegularize_hd87f99a1_3_2 
                                                     >> 9U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                ? (__VdfgRegularize_hd87f99a1_3_0 
                                                   >> 0xbU)
                                                : (__VdfgRegularize_hd87f99a1_3_2 
                                                   >> 8U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                   ? 
                                                  (__VdfgRegularize_hd87f99a1_3_0 
                                                   >> 0xaU)
                                                   : 
                                                  (__VdfgRegularize_hd87f99a1_3_2 
                                                   >> 7U)) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                      ? 
                                                     (__VdfgRegularize_hd87f99a1_3_0 
                                                      >> 9U)
                                                      : 
                                                     (__VdfgRegularize_hd87f99a1_3_2 
                                                      >> 6U)) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_hd87f99a1_3_0 
                                                         >> 8U)
                                                         : 
                                                        (__VdfgRegularize_hd87f99a1_3_2 
                                                         >> 5U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_hd87f99a1_3_0 
                                                            >> 7U)
                                                            : 
                                                           (__VdfgRegularize_hd87f99a1_3_2 
                                                            >> 4U)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_hd87f99a1_3_0 
                                                               >> 6U)
                                                               : 
                                                              (__VdfgRegularize_hd87f99a1_3_2 
                                                               >> 3U)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_hd87f99a1_3_0 
                                                                  >> 5U)
                                                                  : 
                                                                 (__VdfgRegularize_hd87f99a1_3_2 
                                                                  >> 2U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_hd87f99a1_3_0 
                                                                     >> 4U)
                                                                     : 
                                                                    (__VdfgRegularize_hd87f99a1_3_2 
                                                                     >> 1U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_hd87f99a1_3_0 
                                                                        >> 3U)
                                                                        : __VdfgRegularize_hd87f99a1_3_2) 
                                                                      << 4U)) 
                                                                  | (8U 
                                                                     & ((__VdfgRegularize_hd87f99a1_3_3 
                                                                         << 3U) 
                                                                        & (__VdfgRegularize_hd87f99a1_3_0 
                                                                           << 1U)))))))))))))))))))))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_hd87f99a1_3_4 >> 0x13U));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0x13U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                  >> 0x12U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 4U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 3U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 5U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 4U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 6U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 5U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 7U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 6U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 8U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 7U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 9U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                               >> 8U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xaU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 9U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xbU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 0xaU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xcU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 0xbU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xdU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 0xcU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xeU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 0xdU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0xfU) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                 >> 0xeU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0x10U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                  >> 0xfU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0x11U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                  >> 0x10U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_hd87f99a1_3_5 
                     >> 0x12U) ^ (__VdfgRegularize_hd87f99a1_3_4 
                                  >> 0x11U))));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x1000000U & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x400000U & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x16U) & (__VdfgRegularize_hd87f99a1_3_6 
                                          << 4U))) 
              | ((0x200000U & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x15U) & (__VdfgRegularize_hd87f99a1_3_6 
                                             << 4U))) 
                 | ((0x100000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_hd87f99a1_3_4 
                                       >> 0x13U) : 
                                   (__VdfgRegularize_hd87f99a1_3_6 
                                    >> 0x10U)) << 0x14U)) 
                    | ((0x80000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                      ? (__VdfgRegularize_hd87f99a1_3_4 
                                         >> 0x12U) : 
                                     (__VdfgRegularize_hd87f99a1_3_6 
                                      >> 0xfU)) << 0x13U)) 
                       | ((0x40000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                         ? (__VdfgRegularize_hd87f99a1_3_4 
                                            >> 0x11U)
                                         : (__VdfgRegularize_hd87f99a1_3_6 
                                            >> 0xeU)) 
                                       << 0x12U)) | 
                          ((0x20000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                          ? (__VdfgRegularize_hd87f99a1_3_4 
                                             >> 0x10U)
                                          : (__VdfgRegularize_hd87f99a1_3_6 
                                             >> 0xdU)) 
                                        << 0x11U)) 
                           | ((0x10000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                             ? (__VdfgRegularize_hd87f99a1_3_4 
                                                >> 0xfU)
                                             : (__VdfgRegularize_hd87f99a1_3_6 
                                                >> 0xcU)) 
                                           << 0x10U)) 
                              | ((0x8000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                               ? (__VdfgRegularize_hd87f99a1_3_4 
                                                  >> 0xeU)
                                               : (__VdfgRegularize_hd87f99a1_3_6 
                                                  >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                  ? 
                                                 (__VdfgRegularize_hd87f99a1_3_4 
                                                  >> 0xdU)
                                                  : 
                                                 (__VdfgRegularize_hd87f99a1_3_6 
                                                  >> 0xaU)) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                     ? 
                                                    (__VdfgRegularize_hd87f99a1_3_4 
                                                     >> 0xcU)
                                                     : 
                                                    (__VdfgRegularize_hd87f99a1_3_6 
                                                     >> 9U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                ? (__VdfgRegularize_hd87f99a1_3_4 
                                                   >> 0xbU)
                                                : (__VdfgRegularize_hd87f99a1_3_6 
                                                   >> 8U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                   ? 
                                                  (__VdfgRegularize_hd87f99a1_3_4 
                                                   >> 0xaU)
                                                   : 
                                                  (__VdfgRegularize_hd87f99a1_3_6 
                                                   >> 7U)) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                      ? 
                                                     (__VdfgRegularize_hd87f99a1_3_4 
                                                      >> 9U)
                                                      : 
                                                     (__VdfgRegularize_hd87f99a1_3_6 
                                                      >> 6U)) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_hd87f99a1_3_4 
                                                         >> 8U)
                                                         : 
                                                        (__VdfgRegularize_hd87f99a1_3_6 
                                                         >> 5U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_hd87f99a1_3_4 
                                                            >> 7U)
                                                            : 
                                                           (__VdfgRegularize_hd87f99a1_3_6 
                                                            >> 4U)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_hd87f99a1_3_4 
                                                               >> 6U)
                                                               : 
                                                              (__VdfgRegularize_hd87f99a1_3_6 
                                                               >> 3U)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_hd87f99a1_3_4 
                                                                  >> 5U)
                                                                  : 
                                                                 (__VdfgRegularize_hd87f99a1_3_6 
                                                                  >> 2U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_hd87f99a1_3_4 
                                                                     >> 4U)
                                                                     : 
                                                                    (__VdfgRegularize_hd87f99a1_3_6 
                                                                     >> 1U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_hd87f99a1_3_4 
                                                                        >> 3U)
                                                                        : __VdfgRegularize_hd87f99a1_3_6) 
                                                                      << 4U)) 
                                                                  | (8U 
                                                                     & ((__VdfgRegularize_hd87f99a1_3_7 
                                                                         << 3U) 
                                                                        & (__VdfgRegularize_hd87f99a1_3_4 
                                                                           << 1U)))))))))))))))))))))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (__VdfgRegularize_hd87f99a1_3_2 
                               >> 0x13U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
        = (0x1ffffffU & VL_SHIFTL_III(25,25,32, (((IData)(
                                                          ((__VdfgRegularize_hd87f99a1_3_2 
                                                            >> 0x13U) 
                                                           & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x16U))) 
                                                  << 0x17U) 
                                                 | ((0xffc00000U 
                                                     & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x16U) 
                                                        & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffe00000U 
                                                        & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x15U) 
                                                           & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xfff00000U 
                                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x14U) 
                                                              & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x80000U 
                                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x12U)
                                                                   : 
                                                                  (__VdfgRegularize_hd87f99a1_3_1 
                                                                   >> 0x13U)) 
                                                                 << 0x13U)) 
                                                             | ((0x40000U 
                                                                 & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x11U)
                                                                      : 
                                                                     (__VdfgRegularize_hd87f99a1_3_1 
                                                                      >> 0x12U)) 
                                                                    << 0x12U)) 
                                                                | ((0x20000U 
                                                                    & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x10U)
                                                                         : 
                                                                        (__VdfgRegularize_hd87f99a1_3_1 
                                                                         >> 0x11U)) 
                                                                       << 0x11U)) 
                                                                   | ((0x10000U 
                                                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0xfU)
                                                                            : 
                                                                           (__VdfgRegularize_hd87f99a1_3_1 
                                                                            >> 0x10U)) 
                                                                          << 0x10U)) 
                                                                      | ((0x8000U 
                                                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xeU)
                                                                               : 
                                                                              (__VdfgRegularize_hd87f99a1_3_1 
                                                                               >> 0xfU)) 
                                                                             << 0xfU)) 
                                                                         | ((0x4000U 
                                                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                            | ((0x2000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                               | ((0x1000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_1 
                                                                                >> 1U)) 
                                                                                << 1U)))))))))))))))))))))))), 1U));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (__VdfgRegularize_hd87f99a1_3_6 
                               >> 0x13U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
        = (0x1ffffffU & VL_SHIFTL_III(25,25,32, (((IData)(
                                                          ((__VdfgRegularize_hd87f99a1_3_6 
                                                            >> 0x13U) 
                                                           & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x16U))) 
                                                  << 0x17U) 
                                                 | ((0xffc00000U 
                                                     & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x16U) 
                                                        & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffe00000U 
                                                        & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x15U) 
                                                           & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xfff00000U 
                                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x14U) 
                                                              & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x80000U 
                                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x12U)
                                                                   : 
                                                                  (__VdfgRegularize_hd87f99a1_3_5 
                                                                   >> 0x13U)) 
                                                                 << 0x13U)) 
                                                             | ((0x40000U 
                                                                 & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x11U)
                                                                      : 
                                                                     (__VdfgRegularize_hd87f99a1_3_5 
                                                                      >> 0x12U)) 
                                                                    << 0x12U)) 
                                                                | ((0x20000U 
                                                                    & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x10U)
                                                                         : 
                                                                        (__VdfgRegularize_hd87f99a1_3_5 
                                                                         >> 0x11U)) 
                                                                       << 0x11U)) 
                                                                   | ((0x10000U 
                                                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0xfU)
                                                                            : 
                                                                           (__VdfgRegularize_hd87f99a1_3_5 
                                                                            >> 0x10U)) 
                                                                          << 0x10U)) 
                                                                      | ((0x8000U 
                                                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xeU)
                                                                               : 
                                                                              (__VdfgRegularize_hd87f99a1_3_5 
                                                                               >> 0xfU)) 
                                                                             << 0xfU)) 
                                                                         | ((0x4000U 
                                                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                            | ((0x2000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                               | ((0x1000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_hd87f99a1_3_5 
                                                                                >> 1U)) 
                                                                                << 1U)))))))))))))))))))))))), 1U));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_hd87f99a1_3_5 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1) 
                                                   ^ 
                                                   (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                    >> 6U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x13U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x14U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x15U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x16U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x17U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x17U) ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                               >> 0x18U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 6U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 7U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 8U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 9U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xaU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xbU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xcU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xdU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xeU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xfU)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x10U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x11U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x12U)));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 7U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 8U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 9U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xaU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xbU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xcU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xdU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xeU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xfU))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x10U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x11U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x12U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x13U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x14U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x15U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x16U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x17U))));
    _2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                     >> 0x17U) ^ (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                  >> 0x18U))));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x80000000U & vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                   >> 0x18U)) << 0x1eU) | ((0x20000000U 
                                            & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                << 0x1dU) 
                                               & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                  << 6U))) 
                                           | ((0x10000000U 
                                               & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                   << 0x1cU) 
                                                  & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                     << 6U))) 
                                              | ((0x8000000U 
                                                  & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                      << 0x1bU) 
                                                     & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                        << 6U))) 
                                                 | ((0x4000000U 
                                                     & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                         << 0x1aU) 
                                                        & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                           << 6U))) 
                                                    | ((0x2000000U 
                                                        & (((~ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                            << 0x19U) 
                                                           & (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                              << 6U))) 
                                                       | ((0x1000000U 
                                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                ? 
                                                               (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                >> 0x18U)
                                                                : 
                                                               (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                >> 0x12U)) 
                                                              << 0x18U)) 
                                                          | ((0x800000U 
                                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                   ? 
                                                                  (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                   >> 0x17U)
                                                                   : 
                                                                  (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                   >> 0x11U)) 
                                                                 << 0x17U)) 
                                                             | ((0x400000U 
                                                                 & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                      ? 
                                                                     (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                      >> 0x16U)
                                                                      : 
                                                                     (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                      >> 0x10U)) 
                                                                    << 0x16U)) 
                                                                | ((0x200000U 
                                                                    & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                         ? 
                                                                        (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                         >> 0x15U)
                                                                         : 
                                                                        (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                         >> 0xfU)) 
                                                                       << 0x15U)) 
                                                                   | ((0x100000U 
                                                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                            ? 
                                                                           (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                            >> 0x14U)
                                                                            : 
                                                                           (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                            >> 0xeU)) 
                                                                          << 0x14U)) 
                                                                      | ((0x80000U 
                                                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                               ? 
                                                                              (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                               >> 0x13U)
                                                                               : 
                                                                              (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                               >> 0xdU)) 
                                                                             << 0x13U)) 
                                                                         | ((0x40000U 
                                                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)) 
                                                                                << 0x12U)) 
                                                                            | ((0x20000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)) 
                                                                                << 0x11U)) 
                                                                               | ((0x10000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 6U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 5U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 4U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 3U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 2U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)
                                                                                 : 
                                                                                (_2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 1U)) 
                                                                                << 7U)) 
                                                                                | (0x40U 
                                                                                & ((__VdfgRegularize_hd87f99a1_3_5 
                                                                                << 6U) 
                                                                                & _2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C)))))))))))))))))))))))))));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S 
        = ((0x80000000U & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                           << 1U)) | ((0x40000000U 
                                       & ((0xc0000000U 
                                           & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                              << 1U)) 
                                          ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                             << 0x1eU))) 
                                      | ((0x20000000U 
                                          & ((0xe0000000U 
                                              & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                 << 1U)) 
                                             ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                << 0x1dU))) 
                                         | ((0x10000000U 
                                             & ((0xf0000000U 
                                                 & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                    << 1U)) 
                                                ^ ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                   << 0x1cU))) 
                                            | ((0x8000000U 
                                                & ((0xf8000000U 
                                                    & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                       << 1U)) 
                                                   ^ 
                                                   ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                    << 0x1bU))) 
                                               | ((0x4000000U 
                                                   & ((0xfc000000U 
                                                       & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                          << 1U)) 
                                                      ^ 
                                                      ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                       << 0x1aU))) 
                                                  | ((0x2000000U 
                                                      & ((0xfe000000U 
                                                          & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                             << 1U)) 
                                                         ^ 
                                                         ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                          << 0x19U))) 
                                                     | ((0x1000000U 
                                                         & ((0xff000000U 
                                                             & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                << 1U)) 
                                                            ^ 
                                                            ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                             << 0x18U))) 
                                                        | ((0x800000U 
                                                            & ((0xff800000U 
                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   << 1U)) 
                                                               ^ 
                                                               ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                << 0x17U))) 
                                                           | ((0x400000U 
                                                               & ((0xffc00000U 
                                                                   & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      << 1U)) 
                                                                  ^ 
                                                                  ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                   << 0x16U))) 
                                                              | ((0x200000U 
                                                                  & ((0xffe00000U 
                                                                      & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         << 1U)) 
                                                                     ^ 
                                                                     ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                      << 0x15U))) 
                                                                 | ((0x100000U 
                                                                     & ((0xfff00000U 
                                                                         & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            << 1U)) 
                                                                        ^ 
                                                                        ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                         << 0x14U))) 
                                                                    | ((0x80000U 
                                                                        & ((0xfff80000U 
                                                                            & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               << 1U)) 
                                                                           ^ 
                                                                           ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                            << 0x13U))) 
                                                                       | ((0x40000U 
                                                                           & ((0xfffc0000U 
                                                                               & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                              ^ 
                                                                              ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                               << 0x12U))) 
                                                                          | ((0x20000U 
                                                                              & ((0xfffe0000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0x11U))) 
                                                                             | ((0x10000U 
                                                                                & ((0xffff0000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0x10U))) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xfU))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                << 1U)) 
                                                                                ^ 
                                                                                ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                ^ (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & __VdfgRegularize_hd87f99a1_3_1))))))))))))))))))))))))))))))));
    vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C 
        = VL_SHIFTL_III(32,32,32, ((0xc0000000U & (
                                                   ((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                    << 0x1eU) 
                                                   & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                      << 1U))) 
                                   | ((0xe0000000U 
                                       & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                           << 0x1dU) 
                                          & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                             << 1U))) 
                                      | ((0xf0000000U 
                                          & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                              << 0x1cU) 
                                             & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                << 1U))) 
                                         | ((0xf8000000U 
                                             & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                 << 0x1bU) 
                                                & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                   << 1U))) 
                                            | ((0xfc000000U 
                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                    << 0x1aU) 
                                                   & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                      << 1U))) 
                                               | ((0xfe000000U 
                                                   & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                       << 0x19U) 
                                                      & (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                         << 1U))) 
                                                  | ((0x1000000U 
                                                      & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                           ? 
                                                          (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           >> 0x17U)
                                                           : 
                                                          (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           >> 0x17U)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                              ? 
                                                             (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x16U)
                                                              : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                 ? 
                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 >> 0x15U)
                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                               << 0x16U)) 
                                                           | ((0x200000U 
                                                               & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                    ? 
                                                                   (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                    >> 0x14U)
                                                                    : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                       ? 
                                                                      (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                       >> 0x13U)
                                                                       : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                     << 0x14U)) 
                                                                 | ((0x80000U 
                                                                     & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                          ? 
                                                                         (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                          >> 0x12U)
                                                                          : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                        << 0x13U)) 
                                                                    | ((0x40000U 
                                                                        & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                             ? 
                                                                            (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                             >> 0x11U)
                                                                             : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                ? 
                                                                               (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x10U)
                                                                                : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xfU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef._2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : (IData)(_2_power_X__DOT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 1U))))))))))))))))))))))))))))))), 1U);
}

void V_2_power_X___024root___eval_triggers__act(V_2_power_X___024root* vlSelf);

bool V_2_power_X___024root___eval_phase__act(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    V_2_power_X___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        V_2_power_X___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool V_2_power_X___024root___eval_phase__nba(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        V_2_power_X___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void V_2_power_X___024root___dump_triggers__ico(V_2_power_X___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void V_2_power_X___024root___dump_triggers__nba(V_2_power_X___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void V_2_power_X___024root___dump_triggers__act(V_2_power_X___024root* vlSelf);
#endif  // VL_DEBUG

void V_2_power_X___024root___eval(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            V_2_power_X___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("2_x_double.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (V_2_power_X___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            V_2_power_X___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("2_x_double.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                V_2_power_X___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("2_x_double.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (V_2_power_X___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (V_2_power_X___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void V_2_power_X___024root___eval_debug_assertions(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.vld_in & 0xfeU))) {
        Verilated::overWidthError("vld_in");}
}
#endif  // VL_DEBUG
