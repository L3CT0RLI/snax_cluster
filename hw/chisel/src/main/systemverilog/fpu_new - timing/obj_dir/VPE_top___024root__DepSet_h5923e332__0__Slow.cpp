// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__Syms.h"
#include "VPE_top___024root.h"

VL_ATTR_COLD void VPE_top___024root___eval_initial__TOP(VPE_top___024root* vlSelf);
VL_ATTR_COLD void VPE_top_log2_X___eval_initial__TOP__PE_top__DOT__u_log2_X_0(VPE_top_log2_X* vlSelf);
VL_ATTR_COLD void VPE_top__2_power_X___eval_initial__TOP__PE_top__DOT__u___05F2_power_X_2(VPE_top__2_power_X* vlSelf);

VL_ATTR_COLD void VPE_top___024root___eval_initial(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPE_top___024root___eval_initial__TOP(vlSelf);
    VPE_top_log2_X___eval_initial__TOP__PE_top__DOT__u_log2_X_0((&vlSymsp->TOP__PE_top__DOT__u_log2_X_0));
    VPE_top_log2_X___eval_initial__TOP__PE_top__DOT__u_log2_X_0((&vlSymsp->TOP__PE_top__DOT__u_log2_X_1));
    VPE_top__2_power_X___eval_initial__TOP__PE_top__DOT__u___05F2_power_X_2((&vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2));
    VPE_top__2_power_X___eval_initial__TOP__PE_top__DOT__u___05F2_power_X_2((&vlSymsp->TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_top___024root___dump_triggers__stl(VPE_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE_top___024root___eval_triggers__stl(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VPE_top__2_power_X___stl_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0(VPE_top__2_power_X* vlSelf);
VL_ATTR_COLD void VPE_top___024root___stl_sequent__TOP__0(VPE_top___024root* vlSelf);
VL_ATTR_COLD void VPE_top_log2_X___stl_sequent__TOP__PE_top__DOT__u_log2_X_0__0(VPE_top_log2_X* vlSelf);
VL_ATTR_COLD void VPE_top_log2_X___stl_sequent__TOP__PE_top__DOT__u_log2_X_1__0(VPE_top_log2_X* vlSelf);
VL_ATTR_COLD void VPE_top__2_power_X___stl_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0(VPE_top__2_power_X* vlSelf);
VL_ATTR_COLD void VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_0__0(VPE_top_float_adder_2nd* vlSelf);
VL_ATTR_COLD void VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_1__0(VPE_top_float_adder_2nd* vlSelf);

VL_ATTR_COLD void VPE_top___024root___eval_stl(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPE_top__2_power_X___stl_sequent__TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X__0((&vlSymsp->TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X));
        VPE_top___024root___stl_sequent__TOP__0(vlSelf);
        VPE_top_log2_X___stl_sequent__TOP__PE_top__DOT__u_log2_X_0__0((&vlSymsp->TOP__PE_top__DOT__u_log2_X_0));
        VPE_top_log2_X___stl_sequent__TOP__PE_top__DOT__u_log2_X_1__0((&vlSymsp->TOP__PE_top__DOT__u_log2_X_1));
        VPE_top__2_power_X___stl_sequent__TOP__PE_top__DOT__u___05F2_power_X_2__0((&vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2));
        VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_0__0((&vlSymsp->TOP__PE_top__DOT__u_float_adder_0));
        VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_1__0((&vlSymsp->TOP__PE_top__DOT__u_float_adder_1));
    }
}

VL_ATTR_COLD void VPE_top___024root___stl_sequent__TOP__0(VPE_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location = 0;
    IData/*31:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C01;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C02;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C03;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C04;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C05;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C06;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C07;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_307;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_307 = 0;
    IData/*31:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    // Body
    vlSelfRef.exp_x_minus_xmax_vld_out = (((IData)(vlSelfRef.func) 
                                           >> 4U) & (IData)(vlSymsp->TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X.vld_out));
    vlSelfRef.PE_top__DOT__input_vld_channel_0 = (((IData)(vlSelfRef.func) 
                                                   >> 4U) 
                                                  & (IData)(vlSelfRef.vld_in));
    if ((4U & (IData)(vlSelfRef.func))) {
        vlSelfRef.PE_top__DOT__u_x_mul_2_0__DOT__Expo_A 
            = (0xffU & (vlSelfRef.Oprand_A >> 0x17U));
        vlSelfRef.PE_top__DOT__u_x_mul_2_2__DOT__Expo_A 
            = (0xffU & (vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.Result 
                        >> 0x17U));
    } else {
        vlSelfRef.PE_top__DOT__u_x_mul_2_0__DOT__Expo_A = 0U;
        vlSelfRef.PE_top__DOT__u_x_mul_2_2__DOT__Expo_A = 0U;
    }
    vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_A = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.func))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.Oprand_A 
                                                       >> 0x17U))
                                                    : 0U);
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage1 
        = ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__vld_in_reg0) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage2 
        = ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__vld_in_reg1) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage3 
        = ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__vld_in_reg2) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage4 
        = ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__vld_in_reg3) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage5 
        = ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__vld_in_reg4) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__en_stage1 
        = ((IData)(vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__vld_reg0) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__en_stage1 
        = ((IData)(vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0) 
           & (IData)(vlSelfRef.en));
    vlSelfRef.PE_top__DOT__u_buffer_0__DOT__full = 
        (((1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__wr_cnt) 
                 >> 5U)) != (1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__rd_cnt) 
                                   >> 5U))) & ((0x1fU 
                                                & (IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__wr_cnt)) 
                                               == (0x1fU 
                                                   & (IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__rd_cnt))));
    vlSelfRef.PE_top__DOT__u_buffer_0__DOT__empty = 
        ((IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__rd_cnt) 
         == (IData)(vlSelfRef.PE_top__DOT__u_buffer_0__DOT__wr_cnt));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.PE_top__DOT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.PE_top__DOT__u_gelux__DOT__mul_result_reg));
    vlSelfRef.PE_top__DOT__u_buffer_1__DOT__full = 
        (((1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__wr_cnt) 
                 >> 6U)) != (1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__rd_cnt) 
                                   >> 6U))) & ((0x3fU 
                                                & (IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__wr_cnt)) 
                                               == (0x3fU 
                                                   & (IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__rd_cnt))));
    vlSelfRef.PE_top__DOT__u_buffer_1__DOT__empty = 
        ((IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__rd_cnt) 
         == (IData)(vlSelfRef.PE_top__DOT__u_buffer_1__DOT__wr_cnt));
    vlSelfRef.PE_top__DOT__u_buffer_2__DOT__full = 
        (((1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__wr_cnt) 
                 >> 4U)) != (1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__rd_cnt) 
                                   >> 4U))) & ((0xfU 
                                                & (IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__wr_cnt)) 
                                               == (0xfU 
                                                   & (IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__rd_cnt))));
    vlSelfRef.PE_top__DOT__u_buffer_2__DOT__empty = 
        ((IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__rd_cnt) 
         == (IData)(vlSelfRef.PE_top__DOT__u_buffer_2__DOT__wr_cnt));
    vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__full 
        = (((1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__wr_cnt) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__rd_cnt) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__wr_cnt)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__rd_cnt))));
    vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__empty 
        = ((IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__rd_cnt) 
           == (IData)(vlSelfRef.PE_top__DOT__u_buffer_sign__DOT__wr_cnt));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__mem_select = 0U;
    if (vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_smaller_than_zero_reg) {
        vlSelfRef.PE_top__DOT__u_gelux__DOT__mem_select = 0U;
        vlSelfRef.PE_top__DOT__u_gelux__DOT__lut_source 
            = (0xffffffU & ((0x17U < (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_real_abs_reg))
                             ? 0U : VL_SHIFTR_III(24,32,8, 
                                                  (0x800000U 
                                                   | vlSelfRef.PE_top__DOT__u_gelux__DOT__mant_A_reg), (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_real_abs_reg))));
    } else {
        if (vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_is_zero_reg) {
            vlSelfRef.PE_top__DOT__u_gelux__DOT__mem_select = 1U;
        } else if (vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_is_one_reg) {
            vlSelfRef.PE_top__DOT__u_gelux__DOT__mem_select = 2U;
        }
        vlSelfRef.PE_top__DOT__u_gelux__DOT__lut_source 
            = (0xffffffU & (((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_is_zero_reg) 
                             | (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__expo_is_one_reg))
                             ? (0x800000U | vlSelfRef.PE_top__DOT__u_gelux__DOT__mant_A_reg)
                             : 0U));
    }
    vlSelfRef.PE_top__DOT__u_gelux__DOT__y_a = ((0U 
                                                 == 
                                                 (((IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.PE_top__DOT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                                 ? 0U
                                                 : (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__q_a));
    vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x1fffffU & 
                                        ((0x1ffffU 
                                          & ((0x7fffU 
                                              & ((0x1fffU 
                                                  & ((0x7ffU 
                                                      & ((0x7fU 
                                                          & ((0x3fU 
                                                              & ((0x1fU 
                                                                  & ((7U 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (2U 
                                                                          | (1U 
                                                                             & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                     + 
                                                                     (8U 
                                                                      | (7U 
                                                                         & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                                            >> 0x14U))))) 
                                                                 + 
                                                                 (0x10U 
                                                                  | (0xfU 
                                                                     & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                                        >> 0x13U))))) 
                                                             + 
                                                             (0x20U 
                                                              | (0x1fU 
                                                                 & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                                    >> 0x12U))))) 
                                                         + 
                                                         (0x200U 
                                                          | (0x1ffU 
                                                             & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                                >> 0xeU))))) 
                                                     + 
                                                     (0x800U 
                                                      | (0x7ffU 
                                                         & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                            >> 0xcU))))) 
                                                 + 
                                                 (0x2000U 
                                                  | (0x1fffU 
                                                     & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                        >> 0xaU))))) 
                                             + (0x8000U 
                                                | (0x7fffU 
                                                   & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 8U))))) 
                                         + ((0x80000U 
                                             | (0x7ffffU 
                                                & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                   >> 4U))) 
                                            + (0x100000U 
                                               | (0xfffffU 
                                                  & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                     >> 3U)))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A))));
    vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x1fffffU & 
                                        ((0x1ffffU 
                                          & ((0x7fffU 
                                              & ((0x1fffU 
                                                  & ((0x7ffU 
                                                      & ((0x7fU 
                                                          & ((0x3fU 
                                                              & ((0x1fU 
                                                                  & ((7U 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (2U 
                                                                          | (1U 
                                                                             & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                     + 
                                                                     (8U 
                                                                      | (7U 
                                                                         & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                            >> 0x14U))))) 
                                                                 + 
                                                                 (0x10U 
                                                                  | (0xfU 
                                                                     & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                        >> 0x13U))))) 
                                                             + 
                                                             (0x20U 
                                                              | (0x1fU 
                                                                 & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                    >> 0x12U))))) 
                                                         + 
                                                         (0x200U 
                                                          | (0x1ffU 
                                                             & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                >> 0xeU))))) 
                                                     + 
                                                     (0x800U 
                                                      | (0x7ffU 
                                                         & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                            >> 0xcU))))) 
                                                 + 
                                                 (0x2000U 
                                                  | (0x1fffU 
                                                     & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                        >> 0xaU))))) 
                                             + (0x8000U 
                                                | (0x7fffU 
                                                   & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                      >> 8U))))) 
                                         + ((0x80000U 
                                             | (0x7ffffU 
                                                & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                   >> 4U))) 
                                            + (0x100000U 
                                               | (0xfffffU 
                                                  & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                     >> 3U)))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A))));
    vlSelfRef.PE_top__DOT__input_vld_channel_1 = (((IData)(vlSelfRef.func) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.vld_in));
    vlSelfRef.PE_top__DOT__input_vld_channel_3 = (((IData)(vlSelfRef.func) 
                                                   >> 3U) 
                                                  & (IData)(vlSelfRef.vld_in));
    vlSelfRef.PE_top__DOT___2_X_vld_out_channel_2 = 
        (((IData)(vlSelfRef.func) >> 2U) & (IData)(vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.vld_out));
    vlSelfRef.PE_top__DOT__adder_0_vld_out_channel_0 
        = (((IData)(vlSelfRef.func) >> 4U) & (IData)(vlSymsp->TOP__PE_top__DOT__u_float_adder_0.vld_out));
    vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_6 
        = (IData)((0U != (0x11U & (IData)(vlSelfRef.func))));
    vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_1 
        = (IData)((0U != (5U & (IData)(vlSelfRef.func))));
    vlSelfRef.PE_top__DOT__sel_09 = (IData)((0U != 
                                             (5U & (IData)(vlSelfRef.func))));
    vlSelfRef.PE_top__DOT__sel_10 = (IData)((0U != 
                                             (0xaU 
                                              & (IData)(vlSelfRef.func))));
    vlSelfRef.PE_top__DOT__sel_08 = (IData)((0U != 
                                             (0xaU 
                                              & (IData)(vlSelfRef.func))));
    vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0 
        = (IData)((0U != (3U & (IData)(vlSelfRef.func))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.PE_top__DOT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.PE_top__DOT__u_gelux__DOT__op2_reg));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.PE_top__DOT__u_gelux__DOT__op1_reg 
           & vlSelfRef.PE_top__DOT__u_gelux__DOT__op2_reg);
    vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.PE_top__DOT__u_gelux__DOT__op1_reg 
           ^ vlSelfRef.PE_top__DOT__u_gelux__DOT__op2_reg);
    vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__Oprand_A)) 
                                                      & (vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__A_B_chop 
                                                         >> 0x18U)))));
    vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A)) 
                                                      & (vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                         >> 0x18U)))));
    vlSelfRef.PE_top__DOT__u_x_mul_2_0__DOT____Vcellinp__dff_Result____pinNumber3 
        = ((IData)(vlSelfRef.en) & (IData)(vlSelfRef.PE_top__DOT__input_vld_channel_1));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__en_stage0 
        = ((IData)(vlSelfRef.en) & (IData)(vlSelfRef.PE_top__DOT__input_vld_channel_3));
    vlSelfRef.PE_top__DOT__u_x_mul_2_2__DOT____Vcellinp__dff_Result____pinNumber3 
        = ((IData)(vlSelfRef.en) & (IData)(vlSelfRef.PE_top__DOT___2_X_vld_out_channel_2));
    vlSelfRef.PE_top__DOT__u_mul_log2e_0__DOT__en_stage0 
        = ((IData)(vlSelfRef.en) & (IData)(vlSelfRef.PE_top__DOT__adder_0_vld_out_channel_0));
    if (vlSelfRef.PE_top__DOT__sel_09) {
        if (vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_1) {
            vlSelfRef.PE_top__DOT__mux_09_data_out 
                = (((~ (vlSymsp->TOP__PE_top__DOT__u_log2_X_1.Result 
                        >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                                & vlSymsp->TOP__PE_top__DOT__u_log2_X_1.Result));
            vlSelfRef.PE_top__DOT__mux_09_vld_out = vlSymsp->TOP__PE_top__DOT__u_log2_X_1.vld_out;
        } else {
            vlSelfRef.PE_top__DOT__mux_09_data_out = 0U;
            vlSelfRef.PE_top__DOT__mux_09_vld_out = 0U;
        }
    } else {
        vlSelfRef.PE_top__DOT__mux_09_data_out = vlSymsp->TOP__PE_top__DOT__u_float_adder_1.Result;
        vlSelfRef.PE_top__DOT__mux_09_vld_out = vlSymsp->TOP__PE_top__DOT__u_float_adder_1.vld_out;
    }
    if (vlSelfRef.PE_top__DOT__sel_10) {
        vlSelfRef.PE_top__DOT__input_channel_4 = vlSelfRef.Oprand_A;
        vlSelfRef.PE_top__DOT__wr_en_sign_X = vlSymsp->TOP__PE_top__DOT__u_log2_X_1.vld_out;
    } else {
        vlSelfRef.PE_top__DOT__input_channel_4 = 0U;
        vlSelfRef.PE_top__DOT__wr_en_sign_X = 0U;
    }
    if ((0x20U & (IData)(vlSelfRef.func))) {
        vlSelfRef.vld_out = vlSelfRef.PE_top__DOT__relu_vld_out;
        vlSelfRef.Result = vlSelfRef.PE_top__DOT__relu_data_out;
    } else if ((4U & (IData)(vlSelfRef.func))) {
        vlSelfRef.vld_out = vlSymsp->TOP__PE_top__DOT__u_float_adder_1.vld_out;
        vlSelfRef.Result = vlSymsp->TOP__PE_top__DOT__u_float_adder_1.Result;
    } else if (vlSelfRef.PE_top__DOT__sel_10) {
        vlSelfRef.vld_out = ((IData)(vlSelfRef.PE_top__DOT__sel_10) 
                             & (IData)(vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.vld_out));
        vlSelfRef.Result = (((IData)(vlSelfRef.PE_top__DOT__buffer_sign_out) 
                             << 0x1fU) | ((IData)(vlSelfRef.PE_top__DOT__sel_10)
                                           ? (0x7fffffffU 
                                              & vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.Result)
                                           : 0U));
    } else if (vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_6) {
        vlSelfRef.vld_out = vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.vld_out;
        vlSelfRef.Result = vlSymsp->TOP__PE_top__DOT__u___05F2_power_X_2.Result;
    } else {
        vlSelfRef.vld_out = 0U;
        vlSelfRef.Result = 0U;
    }
    vlSelfRef.PE_top__DOT__input_vld_channel_4 = ((IData)(vlSelfRef.PE_top__DOT__sel_10) 
                                                  & (IData)(vlSelfRef.vld_in));
    vlSelfRef.PE_top__DOT__sel_07 = (1U & ((IData)(vlSelfRef.PE_top__DOT__sel_08) 
                                           | ((IData)(vlSelfRef.func) 
                                              >> 4U)));
    vlSelfRef.PE_top__DOT__mux_08_data_out = ((IData)(vlSelfRef.PE_top__DOT__sel_08)
                                               ? vlSelfRef.PE_top__DOT__buffer_2_out
                                               : ((0x10U 
                                                   & (IData)(vlSelfRef.func))
                                                   ? vlSelfRef.PE_top__DOT__buffer_1_out
                                                   : 0xbf800000U));
    vlSelfRef.PE_top__DOT__mux_00_data_out = ((IData)(vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0)
                                               ? ((IData)(vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0)
                                                   ? vlSelfRef.Oprand_A
                                                   : 0U)
                                               : vlSelfRef.PE_top__DOT__x_mul_2_0_out);
    vlSelfRef.PE_top__DOT__sel_04 = (1U & ((IData)(vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0) 
                                           | ((IData)(vlSelfRef.func) 
                                              >> 2U)));
    if ((0x10U & (IData)(vlSelfRef.func))) {
        vlSelfRef.exp_x_minus_xmax = vlSymsp->TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X.Result;
        vlSelfRef.PE_top__DOT__adder_0_data_out_channel_0 
            = vlSymsp->TOP__PE_top__DOT__u_float_adder_0.Result;
        vlSelfRef.PE_top__DOT__mux_01_data_out = ((
                                                   (~ 
                                                    (vlSelfRef.x_max 
                                                     >> 0x1fU)) 
                                                   << 0x1fU) 
                                                  | (0x7fffffffU 
                                                     & vlSelfRef.x_max));
        vlSelfRef.PE_top__DOT__mux_03_vld_out = vlSelfRef.PE_top__DOT__adder_0_vld_out_channel_0;
        vlSelfRef.PE_top__DOT__mux_05_data_out = vlSelfRef.sum_exp;
        vlSelfRef.PE_top__DOT__mux_05_vld_out = vlSelfRef.sum_exp_vld;
        vlSelfRef.PE_top__DOT__mux_02_data_out = vlSelfRef.PE_top__DOT__buffer_0_out;
    } else {
        vlSelfRef.exp_x_minus_xmax = 0U;
        vlSelfRef.PE_top__DOT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.PE_top__DOT__mux_01_data_out = 0x3f800000U;
        vlSelfRef.PE_top__DOT__mux_03_vld_out = ((IData)(vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0)
                                                  ? 
                                                 ((IData)(vlSelfRef.PE_top__DOT____VdfgRegularize_hd20e870a_0_0) 
                                                  & (IData)(vlSelfRef.vld_in))
                                                  : (IData)(vlSelfRef.PE_top__DOT__x_mul_2_0_vld_out));
        if (vlSelfRef.PE_top__DOT__sel_04) {
            if (vlSelfRef.PE_top__DOT__sel_04) {
                vlSelfRef.PE_top__DOT__mux_05_data_out 
                    = vlSymsp->TOP__PE_top__DOT__u_float_adder_0.Result;
                vlSelfRef.PE_top__DOT__mux_05_vld_out 
                    = vlSymsp->TOP__PE_top__DOT__u_float_adder_0.vld_out;
            } else {
                vlSelfRef.PE_top__DOT__mux_05_data_out = 0U;
                vlSelfRef.PE_top__DOT__mux_05_vld_out = 0U;
            }
            vlSelfRef.PE_top__DOT__mux_02_data_out 
                = vlSymsp->TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X.Result;
        } else {
            vlSelfRef.PE_top__DOT__mux_05_data_out 
                = vlSelfRef.PE_top__DOT__gelu_lut_data_out;
            vlSelfRef.PE_top__DOT__mux_05_vld_out = vlSelfRef.PE_top__DOT__gelu_lut_vld_out;
            vlSelfRef.PE_top__DOT__mux_02_data_out = 0U;
        }
    }
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 9U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 9U) & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                       >> 8U))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x11U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x11U) & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                             >> 0x10U))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x19U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x19U) & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                             >> 0x18U))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C01 
        = (1U & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                 | (vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    & (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__sign_A_reg4))));
    vlSelfRef.PE_top__DOT__mux_07_vld_out = ((IData)(vlSelfRef.PE_top__DOT__sel_07)
                                              ? ((IData)(vlSelfRef.PE_top__DOT__sel_07) 
                                                 & (IData)(vlSymsp->TOP__PE_top__DOT__u_log2_X_1.vld_out))
                                              : (IData)(vlSelfRef.PE_top__DOT__x_mul_2_2_vld_out));
    vlSelfRef.PE_top__DOT__u_exp_x_0__DOT__u_mul_log2e__DOT__en_stage0 
        = ((IData)(vlSelfRef.en) & (IData)(vlSelfRef.PE_top__DOT__mux_03_vld_out));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
        = ((0x80000000U | (0x7fffffffU & (~ (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                              << 0x1eU) 
                                             | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                  | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                 << 0x1dU) 
                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                     | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                        | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                        | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                           | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                              | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                           | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                              | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                 | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                    | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                              | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                 | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                    | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                       | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                          | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                             << 0x19U) 
                                                            | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                 | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                    | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                       | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                          | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                             | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                << 0x18U) 
                                                               | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                    | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                       | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                          | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                             | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                       | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                          | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                             | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                          | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                             | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                             | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           & (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
               << 0x1fU) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                             << 0x1eU) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                           << 0x1dU) 
                                          | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                              << 0x1cU) 
                                             | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                 << 0x1bU) 
                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                    << 0x1aU) 
                                                   | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                       << 0x19U) 
                                                      | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                          << 0x18U) 
                                                         | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                             << 0x17U) 
                                                            | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                << 0x16U) 
                                                               | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                   << 0x15U) 
                                                                  | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                      << 0x14U) 
                                                                     | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                         << 0x13U) 
                                                                        | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                            << 0x12U) 
                                                                           | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                               << 0x11U) 
                                                                              | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0xaU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                               >> 0xaU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x12U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x12U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x1aU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x1aU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C02 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 1U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 1U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C01))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0xbU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                               >> 0xbU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x13U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x13U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x1bU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x1bU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C03 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 2U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 2U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C02))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0xcU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                               >> 0xcU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x14U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x14U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x1cU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x1cU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C04 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 3U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 3U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C03))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0xdU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                               >> 0xdU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x15U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x15U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x1dU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x1dU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C05 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 4U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 4U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C04))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0xeU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                               >> 0xeU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x16U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x16U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_307 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 0x1eU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0x1eU) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C06 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 5U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 5U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C05))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C07 
        = (1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                  >> 6U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                             >> 6U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C06))));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                     >> 0x17U) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U) & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207))))
              ? (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_307) 
                  << 7U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                             << 6U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                        << 5U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                                   << 4U) 
                                                  | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                                      << 3U) 
                                                     | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                                         << 2U) 
                                                        | (2U 
                                                           & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                              >> 0x17U))))))))
              : (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_307) 
                  << 7U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                             << 6U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                        << 5U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                                   << 4U) 
                                                  | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                                      << 3U) 
                                                     | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                                         << 2U) 
                                                        | (2U 
                                                           & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                              >> 0x17U))))))))) 
            << 0x18U) | ((((1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                   >> 0xfU) | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0xfU) 
                                               & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107))))
                            ? (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))
                            : (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((1U & ((PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 7U) 
                                                | ((vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                    >> 7U) 
                                                   & (IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C07))))
                                          ? (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))
                                          : (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.PE_top__DOT__u_gelux__DOT__sign_A_reg4)))))))))));
    PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location 
        = ((0U == (PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
                   & vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__zero_location, 1U));
    vlSelfRef.PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__Index 
        = ((IData)((0U != (0xffU & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
            ? ((1U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                ? 0x18U : ((2U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0x17U : ((4U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                        ? 0x16U : (
                                                   (8U 
                                                    & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 0x15U
                                                    : 
                                                   ((0x10U 
                                                     & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 0x14U
                                                     : 
                                                    ((0x20U 
                                                      & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 0x13U
                                                      : 
                                                     ((0x40U 
                                                       & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                       ? 0x12U
                                                       : 0x11U)))))))
            : ((IData)((0U != (0xff00U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                ? ((0x100U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                    ? 0x10U : ((0x200U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                ? 0xfU : ((0x400U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                           ? 0xeU : 
                                          ((0x800U 
                                            & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                            ? 0xdU : 
                                           ((0x1000U 
                                             & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                             ? 0xcU
                                             : ((0x2000U 
                                                 & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                 ? 0xbU
                                                 : 
                                                ((0x4000U 
                                                  & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                  ? 0xaU
                                                  : 9U)))))))
                : ((IData)((0U != (0xff0000U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                    ? ((0x10000U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                        ? 8U : ((0x20000U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                 ? 7U : ((0x40000U 
                                          & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                          ? 6U : ((0x80000U 
                                                   & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 5U
                                                   : 
                                                  ((0x100000U 
                                                    & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 3U
                                                     : 
                                                    ((0x400000U 
                                                      & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 2U
                                                      : 1U)))))))
                    : ((IData)((0U != (0xff000000U 
                                       & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                        ? ((0x1000000U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0U : ((0x2000000U & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                     ? 1U : ((0x4000000U 
                                              & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                              ? 2U : 
                                             ((0x8000000U 
                                               & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                               ? 3U
                                               : ((0x10000000U 
                                                   & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 4U
                                                   : 
                                                  ((0x20000000U 
                                                    & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & PE_top__DOT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 6U
                                                     : 7U)))))))
                        : 0U))));
}
