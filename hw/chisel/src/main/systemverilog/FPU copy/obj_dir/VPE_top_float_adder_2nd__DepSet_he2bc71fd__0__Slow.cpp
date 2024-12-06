// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__Syms.h"
#include "VPE_top_float_adder_2nd.h"

VL_ATTR_COLD void VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_0__0(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*27:0*/ __PVT__Mant_normed_1st;
    __PVT__Mant_normed_1st = 0;
    IData/*31:0*/ __VdfgRegularize_h498d3cee_0_2;
    __VdfgRegularize_h498d3cee_0_2 = 0;
    IData/*27:0*/ __PVT__lza__DOT__zero_location;
    __PVT__lza__DOT__zero_location = 0;
    IData/*27:0*/ __PVT__lza__DOT__one_location;
    __PVT__lza__DOT__one_location = 0;
    IData/*27:0*/ __PVT__lza__DOT__final_location;
    __PVT__lza__DOT__final_location = 0;
    CData/*0:0*/ __PVT__lza__DOT__C01;
    __PVT__lza__DOT__C01 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C02;
    __PVT__lza__DOT__C02 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C03;
    __PVT__lza__DOT__C03 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C04;
    __PVT__lza__DOT__C04 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C05;
    __PVT__lza__DOT__C05 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C06;
    __PVT__lza__DOT__C06 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C07;
    __PVT__lza__DOT__C07 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_102;
    __PVT__lza__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_103;
    __PVT__lza__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_104;
    __PVT__lza__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_105;
    __PVT__lza__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_106;
    __PVT__lza__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_107;
    __PVT__lza__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_202;
    __PVT__lza__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_203;
    __PVT__lza__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_204;
    __PVT__lza__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_205;
    __PVT__lza__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_206;
    __PVT__lza__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_207;
    __PVT__lza__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_302;
    __PVT__lza__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_303;
    __PVT__lza__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_304;
    __PVT__lza__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_305;
    __PVT__lza__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_306;
    __PVT__lza__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_307;
    __PVT__lza__DOT__C_307 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_0;
    lza__DOT____VdfgRegularize_ha4a43950_0_0 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_1;
    lza__DOT____VdfgRegularize_ha4a43950_0_1 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_2;
    lza__DOT____VdfgRegularize_ha4a43950_0_2 = 0;
    CData/*7:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_3;
    lza__DOT____VdfgRegularize_ha4a43950_0_3 = 0;
    IData/*23:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_4;
    lza__DOT____VdfgRegularize_ha4a43950_0_4 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_6;
    lza__DOT____VdfgRegularize_ha4a43950_0_6 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_7;
    lza__DOT____VdfgRegularize_ha4a43950_0_7 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_8;
    lza__DOT____VdfgRegularize_ha4a43950_0_8 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_9;
    lza__DOT____VdfgRegularize_ha4a43950_0_9 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_10;
    lza__DOT____VdfgRegularize_ha4a43950_0_10 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_11;
    lza__DOT____VdfgRegularize_ha4a43950_0_11 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_12;
    lza__DOT____VdfgRegularize_ha4a43950_0_12 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_13;
    lza__DOT____VdfgRegularize_ha4a43950_0_13 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_14;
    lza__DOT____VdfgRegularize_ha4a43950_0_14 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_15;
    lza__DOT____VdfgRegularize_ha4a43950_0_15 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_16;
    lza__DOT____VdfgRegularize_ha4a43950_0_16 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_17;
    lza__DOT____VdfgRegularize_ha4a43950_0_17 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_18;
    lza__DOT____VdfgRegularize_ha4a43950_0_18 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_19;
    lza__DOT____VdfgRegularize_ha4a43950_0_19 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_20;
    lza__DOT____VdfgRegularize_ha4a43950_0_20 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_21;
    lza__DOT____VdfgRegularize_ha4a43950_0_21 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_22;
    lza__DOT____VdfgRegularize_ha4a43950_0_22 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_23;
    lza__DOT____VdfgRegularize_ha4a43950_0_23 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_24;
    lza__DOT____VdfgRegularize_ha4a43950_0_24 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_25;
    lza__DOT____VdfgRegularize_ha4a43950_0_25 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_26;
    lza__DOT____VdfgRegularize_ha4a43950_0_26 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_27;
    lza__DOT____VdfgRegularize_ha4a43950_0_27 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_28;
    lza__DOT____VdfgRegularize_ha4a43950_0_28 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_29;
    lza__DOT____VdfgRegularize_ha4a43950_0_29 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_30;
    lza__DOT____VdfgRegularize_ha4a43950_0_30 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_31;
    lza__DOT____VdfgRegularize_ha4a43950_0_31 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_32;
    lza__DOT____VdfgRegularize_ha4a43950_0_32 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_33;
    lza__DOT____VdfgRegularize_ha4a43950_0_33 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_34;
    lza__DOT____VdfgRegularize_ha4a43950_0_34 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_35;
    lza__DOT____VdfgRegularize_ha4a43950_0_35 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_36;
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_37;
    lza__DOT____VdfgRegularize_ha4a43950_0_37 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_38;
    lza__DOT____VdfgRegularize_ha4a43950_0_38 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_39;
    lza__DOT____VdfgRegularize_ha4a43950_0_39 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_40;
    lza__DOT____VdfgRegularize_ha4a43950_0_40 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_41;
    lza__DOT____VdfgRegularize_ha4a43950_0_41 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_42;
    lza__DOT____VdfgRegularize_ha4a43950_0_42 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_43;
    lza__DOT____VdfgRegularize_ha4a43950_0_43 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_44;
    lza__DOT____VdfgRegularize_ha4a43950_0_44 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_45;
    lza__DOT____VdfgRegularize_ha4a43950_0_45 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_46;
    lza__DOT____VdfgRegularize_ha4a43950_0_46 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_47;
    lza__DOT____VdfgRegularize_ha4a43950_0_47 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_48;
    lza__DOT____VdfgRegularize_ha4a43950_0_48 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_49;
    lza__DOT____VdfgRegularize_ha4a43950_0_49 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_50;
    lza__DOT____VdfgRegularize_ha4a43950_0_50 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_51;
    lza__DOT____VdfgRegularize_ha4a43950_0_51 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_52;
    lza__DOT____VdfgRegularize_ha4a43950_0_52 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_53;
    lza__DOT____VdfgRegularize_ha4a43950_0_53 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_54;
    lza__DOT____VdfgRegularize_ha4a43950_0_54 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_55;
    lza__DOT____VdfgRegularize_ha4a43950_0_55 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_56;
    lza__DOT____VdfgRegularize_ha4a43950_0_56 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_57;
    lza__DOT____VdfgRegularize_ha4a43950_0_57 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_58;
    lza__DOT____VdfgRegularize_ha4a43950_0_58 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_59;
    lza__DOT____VdfgRegularize_ha4a43950_0_59 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_60;
    lza__DOT____VdfgRegularize_ha4a43950_0_60 = 0;
    // Body
    vlSelfRef.__PVT__final_sign = (1U & ((IData)(vlSelfRef.__PVT__Oprand_A_bigger_than_B_reg1)
                                          ? (vlSelfRef.__PVT__Oprand_A_reg1 
                                             >> 0x1fU)
                                          : (vlSelfRef.__PVT__Oprand_B_reg1 
                                             >> 0x1fU)));
    vlSelfRef.__PVT__Expo_to_be_normed_1st = (0xffU 
                                              & ((IData)(vlSelfRef.__PVT__Expo_A_smaller_reg1)
                                                  ? 
                                                 (vlSelfRef.__PVT__Oprand_B_reg1 
                                                  >> 0x17U)
                                                  : 
                                                 (vlSelfRef.__PVT__Oprand_A_reg1 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__shift_right = (1U & VL_REDXOR_32(
                                                      (0x18000000U 
                                                       & vlSelfRef.__PVT__Adder_Result_reg1)));
    lza__DOT____VdfgRegularize_ha4a43950_0_2 = ((~ vlSelfRef.__PVT__Adder_oprand_bigger_reg0) 
                                                & (~ vlSelfRef.__PVT__Adder_oprand_smaller_reg0));
    lza__DOT____VdfgRegularize_ha4a43950_0_1 = (vlSelfRef.__PVT__Adder_oprand_bigger_reg0 
                                                & vlSelfRef.__PVT__Adder_oprand_smaller_reg0);
    lza__DOT____VdfgRegularize_ha4a43950_0_0 = (vlSelfRef.__PVT__Adder_oprand_bigger_reg0 
                                                ^ vlSelfRef.__PVT__Adder_oprand_smaller_reg0);
    vlSelfRef.__PVT__sign_different = ((vlSymsp->TOP.PE_top__DOT__mux_01_data_out 
                                        ^ vlSymsp->TOP.PE_top__DOT__mux_02_data_out) 
                                       >> 0x1fU);
    vlSelfRef.__PVT__Expo_A_minus_B = (0x1ffU & ((0xffU 
                                                  & (vlSymsp->TOP.PE_top__DOT__mux_01_data_out 
                                                     >> 0x17U)) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.PE_top__DOT__mux_02_data_out 
                                                     >> 0x17U))));
    __PVT__Mant_normed_1st = (0xfffffffU & ((IData)(vlSelfRef.__PVT__shift_right)
                                             ? ((0x7fffffeU 
                                                 & (vlSelfRef.__PVT__Adder_Result_reg1 
                                                    >> 1U)) 
                                                | (IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & vlSelfRef.__PVT__Adder_Result_reg1))))
                                             : (vlSelfRef.__PVT__Adder_Result_reg1 
                                                << (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))));
    lza__DOT____VdfgRegularize_ha4a43950_0_60 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x1aU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1bU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_58 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x19U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1aU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_56 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x18U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x19U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_54 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x17U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x18U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_52 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x16U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x17U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_50 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x15U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x16U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_48 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x14U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x15U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_46 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x13U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x14U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_44 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x12U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x13U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_42 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x11U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x12U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_40 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x10U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x11U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_38 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xfU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x10U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xeU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xfU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_34 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xdU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xeU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_32 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xcU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xdU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_30 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xbU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xcU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_28 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xaU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xbU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_26 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 9U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xaU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_24 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 8U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 9U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_22 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 7U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 8U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_20 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 6U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 7U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_18 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 5U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 6U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_16 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 4U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 5U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_14 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 3U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 4U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_12 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 2U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 3U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_10 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 1U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 2U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_8 = (1U 
                                                & ((~ lza__DOT____VdfgRegularize_ha4a43950_0_2) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 1U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_59 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x1aU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1bU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_57 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x19U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1aU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_55 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x18U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x19U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_53 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x17U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x18U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_51 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x16U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x17U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_49 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x15U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x16U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_47 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x14U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x15U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_45 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x13U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x14U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_43 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x12U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x13U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_41 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x11U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x12U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_39 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x10U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x11U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_37 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xfU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x10U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_35 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xeU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xfU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_33 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xdU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xeU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_31 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xcU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xdU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_29 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xbU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xcU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_27 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xaU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xbU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_25 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 9U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xaU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_23 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 8U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 9U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_21 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 7U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 8U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_19 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 6U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 7U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_17 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 5U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 6U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_15 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 4U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 5U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_13 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 3U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 4U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_11 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 2U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 3U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_9 = (1U 
                                                & ((~ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 1U)) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 2U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_7 = (1U 
                                                & ((~ lza__DOT____VdfgRegularize_ha4a43950_0_1) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 1U)));
    __PVT__lza__DOT__C_302 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x19U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x19U) 
                                                  & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x18U))));
    __PVT__lza__DOT__C_102 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 9U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                >> 9U) 
                                               & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                  >> 8U))));
    __PVT__lza__DOT__C_202 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x11U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x11U) 
                                                  & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x10U))));
    __PVT__lza__DOT__C01 = (1U & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                  | (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                     & (IData)(vlSelfRef.__PVT__sign_different_reg0))));
    vlSelfRef.__PVT__Expo_difference = (0xffU & ((0x100U 
                                                  & (IData)(vlSelfRef.__PVT__Expo_A_minus_B))
                                                  ? 
                                                 ((vlSymsp->TOP.PE_top__DOT__mux_02_data_out 
                                                   >> 0x17U) 
                                                  - 
                                                  (vlSymsp->TOP.PE_top__DOT__mux_01_data_out 
                                                   >> 0x17U))
                                                  : (IData)(vlSelfRef.__PVT__Expo_A_minus_B)));
    vlSelfRef.__PVT__Oprand_A_bigger_than_B = ((~ ((IData)(vlSelfRef.__PVT__Expo_A_minus_B) 
                                                   >> 8U)) 
                                               & ((0U 
                                                   != 
                                                   VL_EXTENDS_II(32,9, (IData)(vlSelfRef.__PVT__Expo_A_minus_B))) 
                                                  | ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,9, (IData)(vlSelfRef.__PVT__Expo_A_minus_B))) 
                                                     & ((0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__mux_01_data_out) 
                                                        > 
                                                        (0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__mux_02_data_out)))));
    vlSelfRef.__PVT__Mant_rounded = (0x1ffffffU & (
                                                   (__PVT__Mant_normed_1st 
                                                    >> 3U) 
                                                   + 
                                                   ((1U 
                                                     & ((__PVT__Mant_normed_1st 
                                                         >> 2U) 
                                                        | (IData)(
                                                                  (0xbU 
                                                                   == 
                                                                   (0xbU 
                                                                    & __PVT__Mant_normed_1st)))))
                                                     ? 1U
                                                     : 0U)));
    vlSelfRef.__PVT__lza__DOT__zero_F = ((1U & vlSelfRef.__PVT__lza__DOT__zero_F) 
                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                             << 0x1bU) 
                                            | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                 | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58)) 
                                                << 0x1aU) 
                                               | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                    | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                       | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56))) 
                                                   << 0x19U) 
                                                  | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                       | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                          | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                             | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54)))) 
                                                      << 0x18U) 
                                                     | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                          | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                             | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                   | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52))))) 
                                                         << 0x17U) 
                                                        | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                             | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                         | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50)))))) 
                                                            << 0x16U) 
                                                           | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                               | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48))))))) 
                                                               << 0x15U) 
                                                              | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46)))))))) 
                                                                  << 0x14U) 
                                                                 | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44))))))))) 
                                                                     << 0x13U) 
                                                                    | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42)))))))))) 
                                                                        << 0x12U) 
                                                                       | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40))))))))))) 
                                                                           << 0x11U) 
                                                                          | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38)))))))))))) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34)))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30)))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26)))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22)))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18)))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14)))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10)))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_8))))))))))))))))))))))))))) 
                                                                                << 1U))))))))))))))))))))))))))));
    vlSelfRef.__PVT__lza__DOT__one_F = ((1U & vlSelfRef.__PVT__lza__DOT__one_F) 
                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                            << 0x1bU) 
                                           | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57)) 
                                               << 0x1aU) 
                                              | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                      | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55))) 
                                                  << 0x19U) 
                                                 | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                            | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53)))) 
                                                     << 0x18U) 
                                                    | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                  | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51))))) 
                                                        << 0x17U) 
                                                       | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                        | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49)))))) 
                                                           << 0x16U) 
                                                          | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                              | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47))))))) 
                                                              << 0x15U) 
                                                             | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45)))))))) 
                                                                 << 0x14U) 
                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43))))))))) 
                                                                    << 0x13U) 
                                                                   | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41)))))))))) 
                                                                       << 0x12U) 
                                                                      | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39))))))))))) 
                                                                          << 0x11U) 
                                                                         | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37)))))))))))) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35))))))))))))) 
                                                                                << 0xfU) 
                                                                               | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33)))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29)))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25)))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21)))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17)))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13)))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9)))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_7))))))))))))))))))))))))))) 
                                                                                << 1U))))))))))))))))))))))))))));
    __PVT__lza__DOT__C_303 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1aU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1aU) 
                                                  & (IData)(__PVT__lza__DOT__C_302))));
    __PVT__lza__DOT__C_103 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xaU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xaU) 
                                                 & (IData)(__PVT__lza__DOT__C_102))));
    __PVT__lza__DOT__C_203 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x12U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x12U) 
                                                  & (IData)(__PVT__lza__DOT__C_202))));
    __PVT__lza__DOT__C02 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 1U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 1U) 
                                             & (IData)(__PVT__lza__DOT__C01))));
    __VdfgRegularize_h498d3cee_0_2 = (0xfffffffU & 
                                      VL_SHIFTR_III(28,28,8, 
                                                    ((IData)(vlSelfRef.__PVT__Oprand_A_bigger_than_B)
                                                      ? 
                                                     (0x4000000U 
                                                      | (0x3fffff8U 
                                                         & (vlSymsp->TOP.PE_top__DOT__mux_02_data_out 
                                                            << 3U)))
                                                      : 
                                                     (0x4000000U 
                                                      | (0x3fffff8U 
                                                         & (vlSymsp->TOP.PE_top__DOT__mux_01_data_out 
                                                            << 3U)))), (IData)(vlSelfRef.__PVT__Expo_difference)));
    vlSelfRef.__VdfgRegularize_h498d3cee_3_1 = ((IData)(vlSelfRef.__PVT__much_larger_reg1)
                                                 ? 
                                                ((0x100U 
                                                  & ((IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st) 
                                                 + 
                                                 ((0x1000000U 
                                                   & vlSelfRef.__PVT__Mant_rounded)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__shift_right)
                                                    ? 2U
                                                    : 
                                                   ((0x1e0U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (((IData)(1U) 
                                                                        + 
                                                                        (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))) 
                                                                       >> 4U)))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))))))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__shift_right)
                                                    ? 1U
                                                    : 
                                                   ((0x1e0U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1)) 
                                                                       >> 4U)))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))))))));
    __PVT__lza__DOT__zero_location = ((0x8000000U | 
                                       (0x7ffffffU 
                                        & (~ (vlSelfRef.__PVT__lza__DOT__zero_F 
                                              >> 1U)))) 
                                      & (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                          << 0x1bU) 
                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                             << 0x1aU) 
                                            | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                << 0x19U) 
                                               | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                   << 0x18U) 
                                                  | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                      << 0x17U) 
                                                     | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                         << 0x16U) 
                                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                            << 0x15U) 
                                                           | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                               << 0x14U) 
                                                              | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                  << 0x13U) 
                                                                 | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                     << 0x12U) 
                                                                    | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                        << 0x11U) 
                                                                       | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                           << 0x10U) 
                                                                          | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                              << 0xfU) 
                                                                             | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                << 0xeU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                << 0xdU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                << 0xcU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                << 0xbU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                << 0xaU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                << 9U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                << 8U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                << 7U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                << 6U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                << 5U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                << 4U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                << 3U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_8) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & lza__DOT____VdfgRegularize_ha4a43950_0_0)))))))))))))))))))))))))))));
    __PVT__lza__DOT__one_location = ((0x8000000U | 
                                      (0x7ffffffU & 
                                       (~ (vlSelfRef.__PVT__lza__DOT__one_F 
                                           >> 1U)))) 
                                     & (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                         << 0x1bU) 
                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                            << 0x1aU) 
                                           | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                               << 0x19U) 
                                              | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                  << 0x18U) 
                                                 | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                     << 0x17U) 
                                                    | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                        << 0x16U) 
                                                       | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                           << 0x15U) 
                                                          | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                              << 0x14U) 
                                                             | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                 << 0x13U) 
                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                    << 0x12U) 
                                                                   | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                       << 0x11U) 
                                                                      | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                          << 0x10U) 
                                                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                             << 0xfU) 
                                                                            | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                << 0xeU) 
                                                                               | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                << 0xdU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                << 0xcU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                << 0xbU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                << 0xaU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                << 9U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                << 8U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                << 7U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                << 6U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                << 5U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                << 4U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                << 3U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_7) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ lza__DOT____VdfgRegularize_ha4a43950_0_0))))))))))))))))))))))))))))));
    __PVT__lza__DOT__C_304 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1bU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1bU) 
                                                  & (IData)(__PVT__lza__DOT__C_303))));
    __PVT__lza__DOT__C_104 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xbU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xbU) 
                                                 & (IData)(__PVT__lza__DOT__C_103))));
    __PVT__lza__DOT__C_204 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x13U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x13U) 
                                                  & (IData)(__PVT__lza__DOT__C_203))));
    __PVT__lza__DOT__C03 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 2U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 2U) 
                                             & (IData)(__PVT__lza__DOT__C02))));
    vlSelfRef.__VdfgRegularize_h498d3cee_0_1 = ((IData)(vlSelfRef.__PVT__sign_different)
                                                 ? 
                                                (~ __VdfgRegularize_h498d3cee_0_2)
                                                 : __VdfgRegularize_h498d3cee_0_2);
    __PVT__lza__DOT__C_305 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1cU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1cU) 
                                                  & (IData)(__PVT__lza__DOT__C_304))));
    __PVT__lza__DOT__C_105 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xcU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xcU) 
                                                 & (IData)(__PVT__lza__DOT__C_104))));
    __PVT__lza__DOT__C_205 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x14U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x14U) 
                                                  & (IData)(__PVT__lza__DOT__C_204))));
    __PVT__lza__DOT__C04 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 3U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 3U) 
                                             & (IData)(__PVT__lza__DOT__C03))));
    __PVT__lza__DOT__C_306 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1dU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1dU) 
                                                  & (IData)(__PVT__lza__DOT__C_305))));
    __PVT__lza__DOT__C_106 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xdU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xdU) 
                                                 & (IData)(__PVT__lza__DOT__C_105))));
    __PVT__lza__DOT__C_206 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x15U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x15U) 
                                                  & (IData)(__PVT__lza__DOT__C_205))));
    __PVT__lza__DOT__C05 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 4U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 4U) 
                                             & (IData)(__PVT__lza__DOT__C04))));
    __PVT__lza__DOT__C_307 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1eU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1eU) 
                                                  & (IData)(__PVT__lza__DOT__C_306))));
    __PVT__lza__DOT__C_107 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xeU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xeU) 
                                                 & (IData)(__PVT__lza__DOT__C_106))));
    __PVT__lza__DOT__C_207 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x16U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x16U) 
                                                  & (IData)(__PVT__lza__DOT__C_206))));
    __PVT__lza__DOT__C06 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 5U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 5U) 
                                             & (IData)(__PVT__lza__DOT__C05))));
    lza__DOT____VdfgRegularize_ha4a43950_0_3 = ((1U 
                                                 & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x17U) 
                                                    | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                        >> 0x17U) 
                                                       & (IData)(__PVT__lza__DOT__C_207))))
                                                 ? 
                                                (((IData)(__PVT__lza__DOT__C_307) 
                                                  << 7U) 
                                                 | (((IData)(__PVT__lza__DOT__C_306) 
                                                     << 6U) 
                                                    | (((IData)(__PVT__lza__DOT__C_305) 
                                                        << 5U) 
                                                       | (((IData)(__PVT__lza__DOT__C_304) 
                                                           << 4U) 
                                                          | (((IData)(__PVT__lza__DOT__C_303) 
                                                              << 3U) 
                                                             | (((IData)(__PVT__lza__DOT__C_302) 
                                                                 << 2U) 
                                                                | (2U 
                                                                   & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                      >> 0x17U))))))))
                                                 : 
                                                (((IData)(__PVT__lza__DOT__C_307) 
                                                  << 7U) 
                                                 | (((IData)(__PVT__lza__DOT__C_306) 
                                                     << 6U) 
                                                    | (((IData)(__PVT__lza__DOT__C_305) 
                                                        << 5U) 
                                                       | (((IData)(__PVT__lza__DOT__C_304) 
                                                           << 4U) 
                                                          | (((IData)(__PVT__lza__DOT__C_303) 
                                                              << 3U) 
                                                             | (((IData)(__PVT__lza__DOT__C_302) 
                                                                 << 2U) 
                                                                | (2U 
                                                                   & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                      >> 0x17U)))))))));
    __PVT__lza__DOT__C07 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 6U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 6U) 
                                             & (IData)(__PVT__lza__DOT__C06))));
    lza__DOT____VdfgRegularize_ha4a43950_0_4 = ((((1U 
                                                   & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                       >> 0xfU) 
                                                      | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__lza__DOT__C_107))))
                                                   ? 
                                                  (((IData)(__PVT__lza__DOT__C_207) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__lza__DOT__C_206) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__lza__DOT__C_205) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__lza__DOT__C_204) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__lza__DOT__C_203) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__lza__DOT__C_202) 
                                                                   << 2U) 
                                                                  | (2U 
                                                                     & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                        >> 0xfU))))))))
                                                   : 
                                                  (((IData)(__PVT__lza__DOT__C_207) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__lza__DOT__C_206) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__lza__DOT__C_205) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__lza__DOT__C_204) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__lza__DOT__C_203) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__lza__DOT__C_202) 
                                                                   << 2U) 
                                                                  | (2U 
                                                                     & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                        >> 0xfU))))))))) 
                                                 << 0x10U) 
                                                | ((((1U 
                                                      & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                          >> 7U) 
                                                         | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                             >> 7U) 
                                                            & (IData)(__PVT__lza__DOT__C07))))
                                                      ? 
                                                     (((IData)(__PVT__lza__DOT__C_107) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C_106) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C_105) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C_104) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C_103) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C_102) 
                                                                      << 2U) 
                                                                     | (2U 
                                                                        & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                           >> 7U))))))))
                                                      : 
                                                     (((IData)(__PVT__lza__DOT__C_107) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C_106) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C_105) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C_104) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C_103) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C_102) 
                                                                      << 2U) 
                                                                     | (2U 
                                                                        & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                           >> 7U))))))))) 
                                                    << 8U) 
                                                   | (((IData)(__PVT__lza__DOT__C07) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C06) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C05) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C04) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C03) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C02) 
                                                                      << 2U) 
                                                                     | (((IData)(__PVT__lza__DOT__C01) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.__PVT__sign_different_reg0))))))))));
    lza__DOT____VdfgRegularize_ha4a43950_0_6 = ((0xf000000U 
                                                 & ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_3) 
                                                    << 0x18U)) 
                                                | lza__DOT____VdfgRegularize_ha4a43950_0_4);
    vlSelfRef.__PVT__Adder_Result = (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                     ^ (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_3) 
                                         << 0x18U) 
                                        | lza__DOT____VdfgRegularize_ha4a43950_0_4));
    __PVT__lza__DOT__final_location = (0xfffffffU & 
                                       ((0x8000000U 
                                         & vlSelfRef.__PVT__Adder_Result)
                                         ? ((0U == 
                                             (__PVT__lza__DOT__one_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_6))
                                             ? VL_SHIFTL_III(28,28,32, __PVT__lza__DOT__one_location, 1U)
                                             : __PVT__lza__DOT__one_location)
                                         : ((0U == 
                                             (__PVT__lza__DOT__zero_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_6))
                                             ? __PVT__lza__DOT__zero_location
                                             : VL_SHIFTL_III(28,28,32, __PVT__lza__DOT__zero_location, 1U))));
    vlSelfRef.__PVT__lza__DOT__Index = ((IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & __PVT__lza__DOT__final_location)))
                                         ? ((1U & __PVT__lza__DOT__final_location)
                                             ? 0x1cU
                                             : ((2U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x1bU
                                                 : 
                                                ((4U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x1aU
                                                  : 
                                                 ((8U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x19U
                                                   : 
                                                  ((0x10U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x18U
                                                    : 
                                                   ((0x20U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x17U
                                                     : 
                                                    ((0x40U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0x16U
                                                      : 0x15U)))))))
                                         : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xff00U 
                                                      & __PVT__lza__DOT__final_location)))
                                             ? ((0x100U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x14U
                                                 : 
                                                ((0x200U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x13U
                                                  : 
                                                 ((0x400U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x12U
                                                   : 
                                                  ((0x800U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x11U
                                                    : 
                                                   ((0x1000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x10U
                                                     : 
                                                    ((0x2000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0xfU
                                                      : 
                                                     ((0x4000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 0xeU
                                                       : 0xdU)))))))
                                             : ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xff0000U 
                                                          & __PVT__lza__DOT__final_location)))
                                                 ? 
                                                ((0x10000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0xcU
                                                  : 
                                                 ((0x20000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0xbU
                                                   : 
                                                  ((0x40000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0xaU
                                                    : 
                                                   ((0x80000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 9U
                                                     : 
                                                    ((0x100000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 8U
                                                      : 
                                                     ((0x200000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 7U
                                                       : 
                                                      ((0x400000U 
                                                        & __PVT__lza__DOT__final_location)
                                                        ? 6U
                                                        : 5U)))))))
                                                 : 
                                                ((0x1000000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 4U
                                                  : 
                                                 ((0x2000000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 3U
                                                   : 
                                                  ((0x4000000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 2U
                                                    : 
                                                   ((0x8000000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 1U
                                                     : 0U)))))));
}

VL_ATTR_COLD void VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_1__0(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___stl_sequent__TOP__PE_top__DOT__u_float_adder_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*27:0*/ __PVT__Mant_normed_1st;
    __PVT__Mant_normed_1st = 0;
    IData/*31:0*/ __VdfgRegularize_h498d3cee_0_2;
    __VdfgRegularize_h498d3cee_0_2 = 0;
    IData/*27:0*/ __PVT__lza__DOT__zero_location;
    __PVT__lza__DOT__zero_location = 0;
    IData/*27:0*/ __PVT__lza__DOT__one_location;
    __PVT__lza__DOT__one_location = 0;
    IData/*27:0*/ __PVT__lza__DOT__final_location;
    __PVT__lza__DOT__final_location = 0;
    CData/*0:0*/ __PVT__lza__DOT__C01;
    __PVT__lza__DOT__C01 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C02;
    __PVT__lza__DOT__C02 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C03;
    __PVT__lza__DOT__C03 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C04;
    __PVT__lza__DOT__C04 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C05;
    __PVT__lza__DOT__C05 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C06;
    __PVT__lza__DOT__C06 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C07;
    __PVT__lza__DOT__C07 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_102;
    __PVT__lza__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_103;
    __PVT__lza__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_104;
    __PVT__lza__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_105;
    __PVT__lza__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_106;
    __PVT__lza__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_107;
    __PVT__lza__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_202;
    __PVT__lza__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_203;
    __PVT__lza__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_204;
    __PVT__lza__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_205;
    __PVT__lza__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_206;
    __PVT__lza__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_207;
    __PVT__lza__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_302;
    __PVT__lza__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_303;
    __PVT__lza__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_304;
    __PVT__lza__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_305;
    __PVT__lza__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_306;
    __PVT__lza__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__lza__DOT__C_307;
    __PVT__lza__DOT__C_307 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_0;
    lza__DOT____VdfgRegularize_ha4a43950_0_0 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_1;
    lza__DOT____VdfgRegularize_ha4a43950_0_1 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_2;
    lza__DOT____VdfgRegularize_ha4a43950_0_2 = 0;
    CData/*7:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_3;
    lza__DOT____VdfgRegularize_ha4a43950_0_3 = 0;
    IData/*23:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_4;
    lza__DOT____VdfgRegularize_ha4a43950_0_4 = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_6;
    lza__DOT____VdfgRegularize_ha4a43950_0_6 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_7;
    lza__DOT____VdfgRegularize_ha4a43950_0_7 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_8;
    lza__DOT____VdfgRegularize_ha4a43950_0_8 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_9;
    lza__DOT____VdfgRegularize_ha4a43950_0_9 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_10;
    lza__DOT____VdfgRegularize_ha4a43950_0_10 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_11;
    lza__DOT____VdfgRegularize_ha4a43950_0_11 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_12;
    lza__DOT____VdfgRegularize_ha4a43950_0_12 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_13;
    lza__DOT____VdfgRegularize_ha4a43950_0_13 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_14;
    lza__DOT____VdfgRegularize_ha4a43950_0_14 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_15;
    lza__DOT____VdfgRegularize_ha4a43950_0_15 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_16;
    lza__DOT____VdfgRegularize_ha4a43950_0_16 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_17;
    lza__DOT____VdfgRegularize_ha4a43950_0_17 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_18;
    lza__DOT____VdfgRegularize_ha4a43950_0_18 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_19;
    lza__DOT____VdfgRegularize_ha4a43950_0_19 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_20;
    lza__DOT____VdfgRegularize_ha4a43950_0_20 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_21;
    lza__DOT____VdfgRegularize_ha4a43950_0_21 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_22;
    lza__DOT____VdfgRegularize_ha4a43950_0_22 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_23;
    lza__DOT____VdfgRegularize_ha4a43950_0_23 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_24;
    lza__DOT____VdfgRegularize_ha4a43950_0_24 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_25;
    lza__DOT____VdfgRegularize_ha4a43950_0_25 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_26;
    lza__DOT____VdfgRegularize_ha4a43950_0_26 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_27;
    lza__DOT____VdfgRegularize_ha4a43950_0_27 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_28;
    lza__DOT____VdfgRegularize_ha4a43950_0_28 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_29;
    lza__DOT____VdfgRegularize_ha4a43950_0_29 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_30;
    lza__DOT____VdfgRegularize_ha4a43950_0_30 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_31;
    lza__DOT____VdfgRegularize_ha4a43950_0_31 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_32;
    lza__DOT____VdfgRegularize_ha4a43950_0_32 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_33;
    lza__DOT____VdfgRegularize_ha4a43950_0_33 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_34;
    lza__DOT____VdfgRegularize_ha4a43950_0_34 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_35;
    lza__DOT____VdfgRegularize_ha4a43950_0_35 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_36;
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_37;
    lza__DOT____VdfgRegularize_ha4a43950_0_37 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_38;
    lza__DOT____VdfgRegularize_ha4a43950_0_38 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_39;
    lza__DOT____VdfgRegularize_ha4a43950_0_39 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_40;
    lza__DOT____VdfgRegularize_ha4a43950_0_40 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_41;
    lza__DOT____VdfgRegularize_ha4a43950_0_41 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_42;
    lza__DOT____VdfgRegularize_ha4a43950_0_42 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_43;
    lza__DOT____VdfgRegularize_ha4a43950_0_43 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_44;
    lza__DOT____VdfgRegularize_ha4a43950_0_44 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_45;
    lza__DOT____VdfgRegularize_ha4a43950_0_45 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_46;
    lza__DOT____VdfgRegularize_ha4a43950_0_46 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_47;
    lza__DOT____VdfgRegularize_ha4a43950_0_47 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_48;
    lza__DOT____VdfgRegularize_ha4a43950_0_48 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_49;
    lza__DOT____VdfgRegularize_ha4a43950_0_49 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_50;
    lza__DOT____VdfgRegularize_ha4a43950_0_50 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_51;
    lza__DOT____VdfgRegularize_ha4a43950_0_51 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_52;
    lza__DOT____VdfgRegularize_ha4a43950_0_52 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_53;
    lza__DOT____VdfgRegularize_ha4a43950_0_53 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_54;
    lza__DOT____VdfgRegularize_ha4a43950_0_54 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_55;
    lza__DOT____VdfgRegularize_ha4a43950_0_55 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_56;
    lza__DOT____VdfgRegularize_ha4a43950_0_56 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_57;
    lza__DOT____VdfgRegularize_ha4a43950_0_57 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_58;
    lza__DOT____VdfgRegularize_ha4a43950_0_58 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_59;
    lza__DOT____VdfgRegularize_ha4a43950_0_59 = 0;
    CData/*0:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_60;
    lza__DOT____VdfgRegularize_ha4a43950_0_60 = 0;
    // Body
    vlSelfRef.__PVT__final_sign = (1U & ((IData)(vlSelfRef.__PVT__Oprand_A_bigger_than_B_reg1)
                                          ? (vlSelfRef.__PVT__Oprand_A_reg1 
                                             >> 0x1fU)
                                          : (vlSelfRef.__PVT__Oprand_B_reg1 
                                             >> 0x1fU)));
    vlSelfRef.__PVT__Expo_to_be_normed_1st = (0xffU 
                                              & ((IData)(vlSelfRef.__PVT__Expo_A_smaller_reg1)
                                                  ? 
                                                 (vlSelfRef.__PVT__Oprand_B_reg1 
                                                  >> 0x17U)
                                                  : 
                                                 (vlSelfRef.__PVT__Oprand_A_reg1 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__shift_right = (1U & VL_REDXOR_32(
                                                      (0x18000000U 
                                                       & vlSelfRef.__PVT__Adder_Result_reg1)));
    lza__DOT____VdfgRegularize_ha4a43950_0_2 = ((~ vlSelfRef.__PVT__Adder_oprand_bigger_reg0) 
                                                & (~ vlSelfRef.__PVT__Adder_oprand_smaller_reg0));
    lza__DOT____VdfgRegularize_ha4a43950_0_1 = (vlSelfRef.__PVT__Adder_oprand_bigger_reg0 
                                                & vlSelfRef.__PVT__Adder_oprand_smaller_reg0);
    lza__DOT____VdfgRegularize_ha4a43950_0_0 = (vlSelfRef.__PVT__Adder_oprand_bigger_reg0 
                                                ^ vlSelfRef.__PVT__Adder_oprand_smaller_reg0);
    vlSelfRef.__PVT__sign_different = ((vlSymsp->TOP.PE_top__DOT__mux_07_data_out_reg 
                                        ^ vlSymsp->TOP.PE_top__DOT__mux_08_data_out) 
                                       >> 0x1fU);
    vlSelfRef.__PVT__Expo_A_minus_B = (0x1ffU & ((0xffU 
                                                  & (vlSymsp->TOP.PE_top__DOT__mux_07_data_out_reg 
                                                     >> 0x17U)) 
                                                 - 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.PE_top__DOT__mux_08_data_out 
                                                     >> 0x17U))));
    __PVT__Mant_normed_1st = (0xfffffffU & ((IData)(vlSelfRef.__PVT__shift_right)
                                             ? ((0x7fffffeU 
                                                 & (vlSelfRef.__PVT__Adder_Result_reg1 
                                                    >> 1U)) 
                                                | (IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & vlSelfRef.__PVT__Adder_Result_reg1))))
                                             : (vlSelfRef.__PVT__Adder_Result_reg1 
                                                << (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))));
    lza__DOT____VdfgRegularize_ha4a43950_0_60 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x1aU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1bU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_58 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x19U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1aU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_56 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x18U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x19U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_54 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x17U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x18U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_52 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x16U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x17U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_50 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x15U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x16U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_48 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x14U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x15U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_46 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x13U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x14U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_44 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x12U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x13U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_42 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x11U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x12U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_40 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0x10U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x11U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_38 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xfU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x10U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xeU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xfU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_34 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xdU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xeU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_32 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xcU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xdU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_30 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xbU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xcU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_28 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 0xaU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xbU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_26 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 9U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xaU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_24 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 8U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 9U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_22 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 7U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 8U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_20 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 6U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 7U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_18 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 5U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 6U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_16 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 4U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 5U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_14 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 3U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 4U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_12 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 2U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 3U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_10 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_2 
                                                      >> 1U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 2U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_8 = (1U 
                                                & ((~ lza__DOT____VdfgRegularize_ha4a43950_0_2) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 1U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_59 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x1aU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1bU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_57 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x19U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x1aU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_55 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x18U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x19U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_53 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x17U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x18U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_51 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x16U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x17U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_49 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x15U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x16U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_47 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x14U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x15U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_45 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x13U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x14U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_43 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x12U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x13U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_41 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x11U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x12U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_39 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0x10U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x11U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_37 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xfU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0x10U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_35 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xeU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xfU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_33 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xdU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xeU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_31 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xcU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xdU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_29 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xbU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xcU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_27 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 0xaU)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xbU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_25 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 9U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 0xaU)));
    lza__DOT____VdfgRegularize_ha4a43950_0_23 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 8U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 9U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_21 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 7U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 8U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_19 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 6U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 7U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_17 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 5U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 6U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_15 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 4U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 5U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_13 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 3U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 4U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_11 = (1U 
                                                 & ((~ 
                                                     (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                      >> 2U)) 
                                                    ^ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                     >> 3U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_9 = (1U 
                                                & ((~ 
                                                    (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 1U)) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 2U)));
    lza__DOT____VdfgRegularize_ha4a43950_0_7 = (1U 
                                                & ((~ lza__DOT____VdfgRegularize_ha4a43950_0_1) 
                                                   ^ 
                                                   (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                    >> 1U)));
    __PVT__lza__DOT__C_302 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x19U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x19U) 
                                                  & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x18U))));
    __PVT__lza__DOT__C_102 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 9U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                >> 9U) 
                                               & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                  >> 8U))));
    __PVT__lza__DOT__C_202 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x11U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x11U) 
                                                  & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x10U))));
    __PVT__lza__DOT__C01 = (1U & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                  | (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                     & (IData)(vlSelfRef.__PVT__sign_different_reg0))));
    vlSelfRef.__PVT__Expo_difference = (0xffU & ((0x100U 
                                                  & (IData)(vlSelfRef.__PVT__Expo_A_minus_B))
                                                  ? 
                                                 ((vlSymsp->TOP.PE_top__DOT__mux_08_data_out 
                                                   >> 0x17U) 
                                                  - 
                                                  (vlSymsp->TOP.PE_top__DOT__mux_07_data_out_reg 
                                                   >> 0x17U))
                                                  : (IData)(vlSelfRef.__PVT__Expo_A_minus_B)));
    vlSelfRef.__PVT__Oprand_A_bigger_than_B = ((~ ((IData)(vlSelfRef.__PVT__Expo_A_minus_B) 
                                                   >> 8U)) 
                                               & ((0U 
                                                   != 
                                                   VL_EXTENDS_II(32,9, (IData)(vlSelfRef.__PVT__Expo_A_minus_B))) 
                                                  | ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,9, (IData)(vlSelfRef.__PVT__Expo_A_minus_B))) 
                                                     & ((0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__mux_07_data_out_reg) 
                                                        > 
                                                        (0x7fffffU 
                                                         & vlSymsp->TOP.PE_top__DOT__mux_08_data_out)))));
    vlSelfRef.__PVT__Mant_rounded = (0x1ffffffU & (
                                                   (__PVT__Mant_normed_1st 
                                                    >> 3U) 
                                                   + 
                                                   ((1U 
                                                     & ((__PVT__Mant_normed_1st 
                                                         >> 2U) 
                                                        | (IData)(
                                                                  (0xbU 
                                                                   == 
                                                                   (0xbU 
                                                                    & __PVT__Mant_normed_1st)))))
                                                     ? 1U
                                                     : 0U)));
    vlSelfRef.__PVT__lza__DOT__zero_F = ((1U & vlSelfRef.__PVT__lza__DOT__zero_F) 
                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                             << 0x1bU) 
                                            | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                 | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58)) 
                                                << 0x1aU) 
                                               | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                    | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                       | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56))) 
                                                   << 0x19U) 
                                                  | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                       | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                          | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                             | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54)))) 
                                                      << 0x18U) 
                                                     | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                          | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                             | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                   | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52))))) 
                                                         << 0x17U) 
                                                        | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                             | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                         | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50)))))) 
                                                            << 0x16U) 
                                                           | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                               | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48))))))) 
                                                               << 0x15U) 
                                                              | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46)))))))) 
                                                                  << 0x14U) 
                                                                 | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44))))))))) 
                                                                     << 0x13U) 
                                                                    | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42)))))))))) 
                                                                        << 0x12U) 
                                                                       | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40))))))))))) 
                                                                           << 0x11U) 
                                                                          | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38)))))))))))) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34)))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30)))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26)))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22)))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18)))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14)))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10)))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_8))))))))))))))))))))))))))) 
                                                                                << 1U))))))))))))))))))))))))))));
    vlSelfRef.__PVT__lza__DOT__one_F = ((1U & vlSelfRef.__PVT__lza__DOT__one_F) 
                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                            << 0x1bU) 
                                           | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57)) 
                                               << 0x1aU) 
                                              | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                   | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                      | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55))) 
                                                  << 0x19U) 
                                                 | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                      | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                            | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53)))) 
                                                     << 0x18U) 
                                                    | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                         | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                  | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51))))) 
                                                        << 0x17U) 
                                                       | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                            | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                        | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49)))))) 
                                                           << 0x16U) 
                                                          | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                               | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                              | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47))))))) 
                                                              << 0x15U) 
                                                             | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                  | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45)))))))) 
                                                                 << 0x14U) 
                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                     | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43))))))))) 
                                                                    << 0x13U) 
                                                                   | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                        | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41)))))))))) 
                                                                       << 0x12U) 
                                                                      | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                           | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39))))))))))) 
                                                                          << 0x11U) 
                                                                         | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                              | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37)))))))))))) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35))))))))))))) 
                                                                                << 0xfU) 
                                                                               | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33)))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29)))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25)))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21)))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17)))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13)))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9)))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                | ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9) 
                                                                                | (IData)(lza__DOT____VdfgRegularize_ha4a43950_0_7))))))))))))))))))))))))))) 
                                                                                << 1U))))))))))))))))))))))))))));
    __PVT__lza__DOT__C_303 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1aU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1aU) 
                                                  & (IData)(__PVT__lza__DOT__C_302))));
    __PVT__lza__DOT__C_103 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xaU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xaU) 
                                                 & (IData)(__PVT__lza__DOT__C_102))));
    __PVT__lza__DOT__C_203 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x12U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x12U) 
                                                  & (IData)(__PVT__lza__DOT__C_202))));
    __PVT__lza__DOT__C02 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 1U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 1U) 
                                             & (IData)(__PVT__lza__DOT__C01))));
    __VdfgRegularize_h498d3cee_0_2 = (0xfffffffU & 
                                      VL_SHIFTR_III(28,28,8, 
                                                    ((IData)(vlSelfRef.__PVT__Oprand_A_bigger_than_B)
                                                      ? 
                                                     (0x4000000U 
                                                      | (0x3fffff8U 
                                                         & (vlSymsp->TOP.PE_top__DOT__mux_08_data_out 
                                                            << 3U)))
                                                      : 
                                                     (0x4000000U 
                                                      | (0x3fffff8U 
                                                         & (vlSymsp->TOP.PE_top__DOT__mux_07_data_out_reg 
                                                            << 3U)))), (IData)(vlSelfRef.__PVT__Expo_difference)));
    vlSelfRef.__VdfgRegularize_h498d3cee_3_1 = ((IData)(vlSelfRef.__PVT__much_larger_reg1)
                                                 ? 
                                                ((0x100U 
                                                  & ((IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__Expo_to_be_normed_1st) 
                                                 + 
                                                 ((0x1000000U 
                                                   & vlSelfRef.__PVT__Mant_rounded)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__shift_right)
                                                    ? 2U
                                                    : 
                                                   ((0x1e0U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (((IData)(1U) 
                                                                        + 
                                                                        (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))) 
                                                                       >> 4U)))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))))))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__shift_right)
                                                    ? 1U
                                                    : 
                                                   ((0x1e0U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1)) 
                                                                       >> 4U)))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & (- (IData)(vlSelfRef.__PVT__shift_bits_left_reg1))))))));
    __PVT__lza__DOT__zero_location = ((0x8000000U | 
                                       (0x7ffffffU 
                                        & (~ (vlSelfRef.__PVT__lza__DOT__zero_F 
                                              >> 1U)))) 
                                      & (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_60) 
                                          << 0x1bU) 
                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_58) 
                                             << 0x1aU) 
                                            | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_56) 
                                                << 0x19U) 
                                               | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_54) 
                                                   << 0x18U) 
                                                  | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_52) 
                                                      << 0x17U) 
                                                     | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_50) 
                                                         << 0x16U) 
                                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_48) 
                                                            << 0x15U) 
                                                           | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_46) 
                                                               << 0x14U) 
                                                              | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_44) 
                                                                  << 0x13U) 
                                                                 | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_42) 
                                                                     << 0x12U) 
                                                                    | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_40) 
                                                                        << 0x11U) 
                                                                       | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_38) 
                                                                           << 0x10U) 
                                                                          | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_36) 
                                                                              << 0xfU) 
                                                                             | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_34) 
                                                                                << 0xeU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_32) 
                                                                                << 0xdU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_30) 
                                                                                << 0xcU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_28) 
                                                                                << 0xbU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_26) 
                                                                                << 0xaU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_24) 
                                                                                << 9U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_22) 
                                                                                << 8U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_20) 
                                                                                << 7U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_18) 
                                                                                << 6U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_16) 
                                                                                << 5U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_14) 
                                                                                << 4U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_12) 
                                                                                << 3U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_10) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_8) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & lza__DOT____VdfgRegularize_ha4a43950_0_0)))))))))))))))))))))))))))));
    __PVT__lza__DOT__one_location = ((0x8000000U | 
                                      (0x7ffffffU & 
                                       (~ (vlSelfRef.__PVT__lza__DOT__one_F 
                                           >> 1U)))) 
                                     & (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_59) 
                                         << 0x1bU) 
                                        | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_57) 
                                            << 0x1aU) 
                                           | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_55) 
                                               << 0x19U) 
                                              | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_53) 
                                                  << 0x18U) 
                                                 | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_51) 
                                                     << 0x17U) 
                                                    | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_49) 
                                                        << 0x16U) 
                                                       | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_47) 
                                                           << 0x15U) 
                                                          | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_45) 
                                                              << 0x14U) 
                                                             | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_43) 
                                                                 << 0x13U) 
                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_41) 
                                                                    << 0x12U) 
                                                                   | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_39) 
                                                                       << 0x11U) 
                                                                      | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_37) 
                                                                          << 0x10U) 
                                                                         | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_35) 
                                                                             << 0xfU) 
                                                                            | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_33) 
                                                                                << 0xeU) 
                                                                               | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                                                << 0xdU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_29) 
                                                                                << 0xcU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_27) 
                                                                                << 0xbU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_25) 
                                                                                << 0xaU) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_23) 
                                                                                << 9U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_21) 
                                                                                << 8U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_19) 
                                                                                << 7U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_17) 
                                                                                << 6U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_15) 
                                                                                << 5U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_13) 
                                                                                << 4U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_11) 
                                                                                << 3U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_9) 
                                                                                << 2U) 
                                                                                | (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_7) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ lza__DOT____VdfgRegularize_ha4a43950_0_0))))))))))))))))))))))))))))));
    __PVT__lza__DOT__C_304 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1bU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1bU) 
                                                  & (IData)(__PVT__lza__DOT__C_303))));
    __PVT__lza__DOT__C_104 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xbU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xbU) 
                                                 & (IData)(__PVT__lza__DOT__C_103))));
    __PVT__lza__DOT__C_204 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x13U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x13U) 
                                                  & (IData)(__PVT__lza__DOT__C_203))));
    __PVT__lza__DOT__C03 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 2U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 2U) 
                                             & (IData)(__PVT__lza__DOT__C02))));
    vlSelfRef.__VdfgRegularize_h498d3cee_0_1 = ((IData)(vlSelfRef.__PVT__sign_different)
                                                 ? 
                                                (~ __VdfgRegularize_h498d3cee_0_2)
                                                 : __VdfgRegularize_h498d3cee_0_2);
    __PVT__lza__DOT__C_305 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1cU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1cU) 
                                                  & (IData)(__PVT__lza__DOT__C_304))));
    __PVT__lza__DOT__C_105 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xcU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xcU) 
                                                 & (IData)(__PVT__lza__DOT__C_104))));
    __PVT__lza__DOT__C_205 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x14U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x14U) 
                                                  & (IData)(__PVT__lza__DOT__C_204))));
    __PVT__lza__DOT__C04 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 3U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 3U) 
                                             & (IData)(__PVT__lza__DOT__C03))));
    __PVT__lza__DOT__C_306 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1dU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1dU) 
                                                  & (IData)(__PVT__lza__DOT__C_305))));
    __PVT__lza__DOT__C_106 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xdU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xdU) 
                                                 & (IData)(__PVT__lza__DOT__C_105))));
    __PVT__lza__DOT__C_206 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x15U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x15U) 
                                                  & (IData)(__PVT__lza__DOT__C_205))));
    __PVT__lza__DOT__C05 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 4U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 4U) 
                                             & (IData)(__PVT__lza__DOT__C04))));
    __PVT__lza__DOT__C_307 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x1eU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x1eU) 
                                                  & (IData)(__PVT__lza__DOT__C_306))));
    __PVT__lza__DOT__C_107 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0xeU) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                  >> 0xeU) 
                                                 & (IData)(__PVT__lza__DOT__C_106))));
    __PVT__lza__DOT__C_207 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                     >> 0x16U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                   >> 0x16U) 
                                                  & (IData)(__PVT__lza__DOT__C_206))));
    __PVT__lza__DOT__C06 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 5U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 5U) 
                                             & (IData)(__PVT__lza__DOT__C05))));
    lza__DOT____VdfgRegularize_ha4a43950_0_3 = ((1U 
                                                 & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                     >> 0x17U) 
                                                    | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                        >> 0x17U) 
                                                       & (IData)(__PVT__lza__DOT__C_207))))
                                                 ? 
                                                (((IData)(__PVT__lza__DOT__C_307) 
                                                  << 7U) 
                                                 | (((IData)(__PVT__lza__DOT__C_306) 
                                                     << 6U) 
                                                    | (((IData)(__PVT__lza__DOT__C_305) 
                                                        << 5U) 
                                                       | (((IData)(__PVT__lza__DOT__C_304) 
                                                           << 4U) 
                                                          | (((IData)(__PVT__lza__DOT__C_303) 
                                                              << 3U) 
                                                             | (((IData)(__PVT__lza__DOT__C_302) 
                                                                 << 2U) 
                                                                | (2U 
                                                                   & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                      >> 0x17U))))))))
                                                 : 
                                                (((IData)(__PVT__lza__DOT__C_307) 
                                                  << 7U) 
                                                 | (((IData)(__PVT__lza__DOT__C_306) 
                                                     << 6U) 
                                                    | (((IData)(__PVT__lza__DOT__C_305) 
                                                        << 5U) 
                                                       | (((IData)(__PVT__lza__DOT__C_304) 
                                                           << 4U) 
                                                          | (((IData)(__PVT__lza__DOT__C_303) 
                                                              << 3U) 
                                                             | (((IData)(__PVT__lza__DOT__C_302) 
                                                                 << 2U) 
                                                                | (2U 
                                                                   & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                      >> 0x17U)))))))));
    __PVT__lza__DOT__C07 = (1U & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                   >> 6U) | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                              >> 6U) 
                                             & (IData)(__PVT__lza__DOT__C06))));
    lza__DOT____VdfgRegularize_ha4a43950_0_4 = ((((1U 
                                                   & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                       >> 0xfU) 
                                                      | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__lza__DOT__C_107))))
                                                   ? 
                                                  (((IData)(__PVT__lza__DOT__C_207) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__lza__DOT__C_206) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__lza__DOT__C_205) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__lza__DOT__C_204) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__lza__DOT__C_203) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__lza__DOT__C_202) 
                                                                   << 2U) 
                                                                  | (2U 
                                                                     & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                        >> 0xfU))))))))
                                                   : 
                                                  (((IData)(__PVT__lza__DOT__C_207) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__lza__DOT__C_206) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__lza__DOT__C_205) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__lza__DOT__C_204) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__lza__DOT__C_203) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__lza__DOT__C_202) 
                                                                   << 2U) 
                                                                  | (2U 
                                                                     & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                        >> 0xfU))))))))) 
                                                 << 0x10U) 
                                                | ((((1U 
                                                      & ((lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                          >> 7U) 
                                                         | ((lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                                             >> 7U) 
                                                            & (IData)(__PVT__lza__DOT__C07))))
                                                      ? 
                                                     (((IData)(__PVT__lza__DOT__C_107) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C_106) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C_105) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C_104) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C_103) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C_102) 
                                                                      << 2U) 
                                                                     | (2U 
                                                                        & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                           >> 7U))))))))
                                                      : 
                                                     (((IData)(__PVT__lza__DOT__C_107) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C_106) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C_105) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C_104) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C_103) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C_102) 
                                                                      << 2U) 
                                                                     | (2U 
                                                                        & (lza__DOT____VdfgRegularize_ha4a43950_0_1 
                                                                           >> 7U))))))))) 
                                                    << 8U) 
                                                   | (((IData)(__PVT__lza__DOT__C07) 
                                                       << 7U) 
                                                      | (((IData)(__PVT__lza__DOT__C06) 
                                                          << 6U) 
                                                         | (((IData)(__PVT__lza__DOT__C05) 
                                                             << 5U) 
                                                            | (((IData)(__PVT__lza__DOT__C04) 
                                                                << 4U) 
                                                               | (((IData)(__PVT__lza__DOT__C03) 
                                                                   << 3U) 
                                                                  | (((IData)(__PVT__lza__DOT__C02) 
                                                                      << 2U) 
                                                                     | (((IData)(__PVT__lza__DOT__C01) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelfRef.__PVT__sign_different_reg0))))))))));
    lza__DOT____VdfgRegularize_ha4a43950_0_6 = ((0xf000000U 
                                                 & ((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_3) 
                                                    << 0x18U)) 
                                                | lza__DOT____VdfgRegularize_ha4a43950_0_4);
    vlSelfRef.__PVT__Adder_Result = (lza__DOT____VdfgRegularize_ha4a43950_0_0 
                                     ^ (((IData)(lza__DOT____VdfgRegularize_ha4a43950_0_3) 
                                         << 0x18U) 
                                        | lza__DOT____VdfgRegularize_ha4a43950_0_4));
    __PVT__lza__DOT__final_location = (0xfffffffU & 
                                       ((0x8000000U 
                                         & vlSelfRef.__PVT__Adder_Result)
                                         ? ((0U == 
                                             (__PVT__lza__DOT__one_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_6))
                                             ? VL_SHIFTL_III(28,28,32, __PVT__lza__DOT__one_location, 1U)
                                             : __PVT__lza__DOT__one_location)
                                         : ((0U == 
                                             (__PVT__lza__DOT__zero_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_6))
                                             ? __PVT__lza__DOT__zero_location
                                             : VL_SHIFTL_III(28,28,32, __PVT__lza__DOT__zero_location, 1U))));
    vlSelfRef.__PVT__lza__DOT__Index = ((IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & __PVT__lza__DOT__final_location)))
                                         ? ((1U & __PVT__lza__DOT__final_location)
                                             ? 0x1cU
                                             : ((2U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x1bU
                                                 : 
                                                ((4U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x1aU
                                                  : 
                                                 ((8U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x19U
                                                   : 
                                                  ((0x10U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x18U
                                                    : 
                                                   ((0x20U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x17U
                                                     : 
                                                    ((0x40U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0x16U
                                                      : 0x15U)))))))
                                         : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xff00U 
                                                      & __PVT__lza__DOT__final_location)))
                                             ? ((0x100U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x14U
                                                 : 
                                                ((0x200U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x13U
                                                  : 
                                                 ((0x400U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x12U
                                                   : 
                                                  ((0x800U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x11U
                                                    : 
                                                   ((0x1000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x10U
                                                     : 
                                                    ((0x2000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0xfU
                                                      : 
                                                     ((0x4000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 0xeU
                                                       : 0xdU)))))))
                                             : ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xff0000U 
                                                          & __PVT__lza__DOT__final_location)))
                                                 ? 
                                                ((0x10000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0xcU
                                                  : 
                                                 ((0x20000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0xbU
                                                   : 
                                                  ((0x40000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0xaU
                                                    : 
                                                   ((0x80000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 9U
                                                     : 
                                                    ((0x100000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 8U
                                                      : 
                                                     ((0x200000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 7U
                                                       : 
                                                      ((0x400000U 
                                                        & __PVT__lza__DOT__final_location)
                                                        ? 6U
                                                        : 5U)))))))
                                                 : 
                                                ((0x1000000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 4U
                                                  : 
                                                 ((0x2000000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 3U
                                                   : 
                                                  ((0x4000000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 2U
                                                    : 
                                                   ((0x8000000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 1U
                                                     : 0U)))))));
}
