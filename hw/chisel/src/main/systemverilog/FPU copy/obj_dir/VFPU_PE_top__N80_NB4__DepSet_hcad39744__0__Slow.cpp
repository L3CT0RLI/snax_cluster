// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__2_power_X.h"
#include "VFPU__Syms.h"
#include "VFPU_float_adder_2nd.h"
#include "VFPU_log2_X.h"

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location = 0;
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C01;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C02;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C03;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C04;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C05;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C06;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C07;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    // Body
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    if ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 
            (0xffU & (vlSymsp->TOP.ext_data_i_bits[0U] 
                      >> 0x17U));
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 
            (0xffU & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                      >> 0x17U));
    } else {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 0U;
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__expo_A = ((0x20000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)
                                              ? (0xffU 
                                                 & (vlSymsp->TOP.ext_data_i_bits[0U] 
                                                    >> 0x17U))
                                              : 0U);
    vlSelfRef.__PVT__u_buffer_0__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt) 
                                                   >> 5U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                                      >> 5U))) 
                                              & ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_0__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    vlSelfRef.__PVT__u_buffer_1__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt) 
                                                   >> 6U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                                      >> 6U))) 
                                              & ((0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)) 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_1__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_2__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt) 
                                                   >> 4U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                                      >> 4U))) 
                                              & ((0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_2__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_sign__DOT__full = (((1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt) 
                                                      >> 4U)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                      >> 4U))) 
                                                 & ((0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)) 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_sign__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                  == (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
    if (vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg) {
        vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & ((0x17U < (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))
                           ? 0U : VL_SHIFTR_III(24,32,8, 
                                                (0x800000U 
                                                 | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg), (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))));
    } else {
        if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 1U;
        } else if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 2U;
        }
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) 
                           | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg))
                           ? (0x800000U | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg)
                           : 0U));
    }
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop = 
        (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & (
                                                   (0x1fffffU 
                                                    & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                                + 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                               + 
                                                                               (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x13U))))) 
                                                                           + 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x12U))))) 
                                                                       + 
                                                                       (0x200U 
                                                                        | (0x1ffU 
                                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                              >> 0xeU))))) 
                                                                   + 
                                                                   (0x800U 
                                                                    | (0x7ffU 
                                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                          >> 0xcU))))) 
                                                               + 
                                                               (0x2000U 
                                                                | (0x1fffU 
                                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                      >> 0xaU))))) 
                                                           + 
                                                           (0x8000U 
                                                            | (0x7fffU 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                  >> 8U))))) 
                                                       + 
                                                       (0x80000U 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                              >> 4U))))) 
                                                   + 
                                                   (0x100000U 
                                                    | (0xfffffU 
                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                          >> 3U))))) 
                                     + (0x200000U | 
                                        (0x1fffffU 
                                         & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                            >> 2U))))) 
                       + (0x800000U | (0x7fffffU & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & 
                                        ((0x1fffffU 
                                          & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                         + 
                                                                         (8U 
                                                                          | (7U 
                                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                     + 
                                                                     (0x10U 
                                                                      | (0xfU 
                                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                            >> 0x13U))))) 
                                                                 + 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                        >> 0x12U))))) 
                                                             + 
                                                             (0x200U 
                                                              | (0x1ffU 
                                                                 & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                    >> 0xeU))))) 
                                                         + 
                                                         (0x800U 
                                                          | (0x7ffU 
                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                >> 0xcU))))) 
                                                     + 
                                                     (0x2000U 
                                                      | (0x1fffU 
                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                            >> 0xaU))))) 
                                                 + 
                                                 (0x8000U 
                                                  | (0x7fffU 
                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                        >> 8U))))) 
                                             + (0x80000U 
                                                | (0x7ffffU 
                                                   & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                      >> 4U))))) 
                                         + (0x100000U 
                                            | (0xfffffU 
                                               & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                  >> 3U))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A))));
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    vlSelfRef.__VdfgRegularize_h079bc411_0_1 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_09 = (IData)((0U != (0x14000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_6 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x44000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_10 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_08 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_0 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__input_vld_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1eU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_1 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1cU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_3 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1dU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag = ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U))) 
                                                 | ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                         >> 0x17U))) 
                                                    | (IData)(
                                                              ((0x7f000000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A)) 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                                  >> 0x18U)))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A)) 
                                                      & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                         >> 0x18U)))));
    if (vlSelfRef.__PVT__sel_09) {
        if (vlSelfRef.__VdfgRegularize_h079bc411_0_1) {
            vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
            vlSelfRef.__PVT__mux_09_data_out = (((~ 
                                                  (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                   >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (0x7fffffffU 
                                                   & vlSelf->__PVT__u_log2_X_1->__PVT__Result));
        } else {
            vlSelfRef.__PVT__mux_09_vld_out = 0U;
            vlSelfRef.__PVT__mux_09_data_out = 0U;
        }
    } else {
        vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_float_adder_1->__PVT__vld_out;
        vlSelfRef.__PVT__mux_09_data_out = vlSelf->__PVT__u_float_adder_1->__PVT__Result;
    }
    if (vlSelfRef.__PVT__sel_10) {
        vlSelfRef.__PVT__input_channel_4 = vlSymsp->TOP.ext_data_i_bits[0U];
        vlSelfRef.__PVT__wr_en_sign_X = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
    }
    vlSelfRef.vld_out = ((vlSymsp->TOP.ext_csr_i_0 
                          >> 0x1fU) ? (IData)(vlSelfRef.__PVT__relu_vld_out)
                          : ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)
                              ? (IData)(vlSelf->__PVT__u_float_adder_1->__PVT__vld_out)
                              : ((IData)(vlSelfRef.__PVT__sel_10)
                                  ? ((IData)(vlSelfRef.__PVT__sel_10) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_6) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out)))));
    vlSelfRef.__PVT__input_vld_channel_4 = ((IData)(vlSelfRef.__PVT__sel_10) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__sel_07 = (1U & ((IData)(vlSelfRef.__PVT__sel_08) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1eU)));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[0U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__sel_04 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1cU)));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_03_vld_out = vlSelfRef.__PVT__adder_0_vld_out_channel_0;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
        vlSelfRef.__PVT__mux_03_vld_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out));
        if (vlSelfRef.__PVT__sel_04) {
            if (vlSelfRef.__PVT__sel_04) {
                vlSelfRef.__PVT__mux_05_data_out = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
                vlSelfRef.__PVT__mux_05_vld_out = vlSelf->__PVT__u_float_adder_0->__PVT__vld_out;
            } else {
                vlSelfRef.__PVT__mux_05_data_out = 0U;
                vlSelfRef.__PVT__mux_05_vld_out = 0U;
            }
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_05_vld_out = vlSelfRef.__PVT__gelu_lut_vld_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
    }
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x18U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x10U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x18U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x10U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 8U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 8U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = (1U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    | (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                       & (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4))));
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
        = ((0x80000000U | (0x7fffffffU & (~ (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                              << 0x1eU) 
                                             | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                  | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                 << 0x1dU) 
                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                     | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                        | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                        | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                              | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                    | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                          | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                             << 0x19U) 
                                                            | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                << 0x18U) 
                                                               | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           & (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
               << 0x1fU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                             << 0x1eU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                           << 0x1dU) 
                                          | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                              << 0x1cU) 
                                             | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                 << 0x1bU) 
                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                    << 0x1aU) 
                                                   | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                       << 0x19U) 
                                                      | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                          << 0x18U) 
                                                         | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                             << 0x17U) 
                                                            | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                << 0x16U) 
                                                               | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                   << 0x15U) 
                                                                  | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                      << 0x14U) 
                                                                     | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                         << 0x13U) 
                                                                        | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                            << 0x12U) 
                                                                           | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                               << 0x11U) 
                                                                              | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 1U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 1U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 2U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 2U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 3U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 3U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 4U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 4U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 5U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 5U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 6U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 6U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 
        (1U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                >> 7U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                           >> 7U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = (1U 
                                                  & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                                      ? 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117)))
                                                      : 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107)))));
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                     ? ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217)))
                     : ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
                   & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location, 1U));
    vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index 
        = ((IData)((0U != (0xffU & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
            ? ((1U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                ? 0x18U : ((2U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0x17U : ((4U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                        ? 0x16U : (
                                                   (8U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 0x15U
                                                    : 
                                                   ((0x10U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 0x14U
                                                     : 
                                                    ((0x20U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 0x13U
                                                      : 
                                                     ((0x40U 
                                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                       ? 0x12U
                                                       : 0x11U)))))))
            : ((IData)((0U != (0xff00U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                ? ((0x100U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                    ? 0x10U : ((0x200U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                ? 0xfU : ((0x400U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                           ? 0xeU : 
                                          ((0x800U 
                                            & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                            ? 0xdU : 
                                           ((0x1000U 
                                             & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                             ? 0xcU
                                             : ((0x2000U 
                                                 & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                 ? 0xbU
                                                 : 
                                                ((0x4000U 
                                                  & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                  ? 0xaU
                                                  : 9U)))))))
                : ((IData)((0U != (0xff0000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                    ? ((0x10000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                        ? 8U : ((0x20000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                 ? 7U : ((0x40000U 
                                          & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                          ? 6U : ((0x80000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 5U
                                                   : 
                                                  ((0x100000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 3U
                                                     : 
                                                    ((0x400000U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 2U
                                                      : 1U)))))))
                    : ((IData)((0U != (0xff000000U 
                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                        ? ((0x1000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0U : ((0x2000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                     ? 1U : ((0x4000000U 
                                              & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                              ? 2U : 
                                             ((0x8000000U 
                                               & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                               ? 3U
                                               : ((0x10000000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 4U
                                                   : 
                                                  ((0x20000000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 6U
                                                     : 7U)))))))
                        : 0U))));
}

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location = 0;
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C01;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C02;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C03;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C04;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C05;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C06;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C07;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    // Body
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    if ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 
            (0xffU & (vlSymsp->TOP.ext_data_i_bits[1U] 
                      >> 0x17U));
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 
            (0xffU & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                      >> 0x17U));
    } else {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 0U;
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__expo_A = ((0x20000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)
                                              ? (0xffU 
                                                 & (vlSymsp->TOP.ext_data_i_bits[1U] 
                                                    >> 0x17U))
                                              : 0U);
    vlSelfRef.__PVT__u_buffer_0__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt) 
                                                   >> 5U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                                      >> 5U))) 
                                              & ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_0__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    vlSelfRef.__PVT__u_buffer_1__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt) 
                                                   >> 6U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                                      >> 6U))) 
                                              & ((0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)) 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_1__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_2__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt) 
                                                   >> 4U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                                      >> 4U))) 
                                              & ((0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_2__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_sign__DOT__full = (((1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt) 
                                                      >> 4U)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                      >> 4U))) 
                                                 & ((0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)) 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_sign__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                  == (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
    if (vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg) {
        vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & ((0x17U < (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))
                           ? 0U : VL_SHIFTR_III(24,32,8, 
                                                (0x800000U 
                                                 | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg), (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))));
    } else {
        if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 1U;
        } else if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 2U;
        }
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) 
                           | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg))
                           ? (0x800000U | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg)
                           : 0U));
    }
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop = 
        (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & (
                                                   (0x1fffffU 
                                                    & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                                + 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                               + 
                                                                               (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x13U))))) 
                                                                           + 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x12U))))) 
                                                                       + 
                                                                       (0x200U 
                                                                        | (0x1ffU 
                                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                              >> 0xeU))))) 
                                                                   + 
                                                                   (0x800U 
                                                                    | (0x7ffU 
                                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                          >> 0xcU))))) 
                                                               + 
                                                               (0x2000U 
                                                                | (0x1fffU 
                                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                      >> 0xaU))))) 
                                                           + 
                                                           (0x8000U 
                                                            | (0x7fffU 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                  >> 8U))))) 
                                                       + 
                                                       (0x80000U 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                              >> 4U))))) 
                                                   + 
                                                   (0x100000U 
                                                    | (0xfffffU 
                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                          >> 3U))))) 
                                     + (0x200000U | 
                                        (0x1fffffU 
                                         & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                            >> 2U))))) 
                       + (0x800000U | (0x7fffffU & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & 
                                        ((0x1fffffU 
                                          & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                         + 
                                                                         (8U 
                                                                          | (7U 
                                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                     + 
                                                                     (0x10U 
                                                                      | (0xfU 
                                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                            >> 0x13U))))) 
                                                                 + 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                        >> 0x12U))))) 
                                                             + 
                                                             (0x200U 
                                                              | (0x1ffU 
                                                                 & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                    >> 0xeU))))) 
                                                         + 
                                                         (0x800U 
                                                          | (0x7ffU 
                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                >> 0xcU))))) 
                                                     + 
                                                     (0x2000U 
                                                      | (0x1fffU 
                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                            >> 0xaU))))) 
                                                 + 
                                                 (0x8000U 
                                                  | (0x7fffU 
                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                        >> 8U))))) 
                                             + (0x80000U 
                                                | (0x7ffffU 
                                                   & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                      >> 4U))))) 
                                         + (0x100000U 
                                            | (0xfffffU 
                                               & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                  >> 3U))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A))));
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    vlSelfRef.__VdfgRegularize_h079bc411_0_1 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_09 = (IData)((0U != (0x14000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_6 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x44000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_10 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_08 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_0 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__input_vld_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1eU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_1 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1cU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_3 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1dU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag = ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U))) 
                                                 | ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                         >> 0x17U))) 
                                                    | (IData)(
                                                              ((0x7f000000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A)) 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                                  >> 0x18U)))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A)) 
                                                      & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                         >> 0x18U)))));
    if (vlSelfRef.__PVT__sel_09) {
        if (vlSelfRef.__VdfgRegularize_h079bc411_0_1) {
            vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
            vlSelfRef.__PVT__mux_09_data_out = (((~ 
                                                  (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                   >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (0x7fffffffU 
                                                   & vlSelf->__PVT__u_log2_X_1->__PVT__Result));
        } else {
            vlSelfRef.__PVT__mux_09_vld_out = 0U;
            vlSelfRef.__PVT__mux_09_data_out = 0U;
        }
    } else {
        vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_float_adder_1->__PVT__vld_out;
        vlSelfRef.__PVT__mux_09_data_out = vlSelf->__PVT__u_float_adder_1->__PVT__Result;
    }
    if (vlSelfRef.__PVT__sel_10) {
        vlSelfRef.__PVT__input_channel_4 = vlSymsp->TOP.ext_data_i_bits[1U];
        vlSelfRef.__PVT__wr_en_sign_X = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
    }
    vlSelfRef.vld_out = ((vlSymsp->TOP.ext_csr_i_0 
                          >> 0x1fU) ? (IData)(vlSelfRef.__PVT__relu_vld_out)
                          : ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)
                              ? (IData)(vlSelf->__PVT__u_float_adder_1->__PVT__vld_out)
                              : ((IData)(vlSelfRef.__PVT__sel_10)
                                  ? ((IData)(vlSelfRef.__PVT__sel_10) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_6) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out)))));
    vlSelfRef.__PVT__input_vld_channel_4 = ((IData)(vlSelfRef.__PVT__sel_10) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__sel_07 = (1U & ((IData)(vlSelfRef.__PVT__sel_08) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1eU)));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[1U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__sel_04 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1cU)));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_03_vld_out = vlSelfRef.__PVT__adder_0_vld_out_channel_0;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
        vlSelfRef.__PVT__mux_03_vld_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out));
        if (vlSelfRef.__PVT__sel_04) {
            if (vlSelfRef.__PVT__sel_04) {
                vlSelfRef.__PVT__mux_05_data_out = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
                vlSelfRef.__PVT__mux_05_vld_out = vlSelf->__PVT__u_float_adder_0->__PVT__vld_out;
            } else {
                vlSelfRef.__PVT__mux_05_data_out = 0U;
                vlSelfRef.__PVT__mux_05_vld_out = 0U;
            }
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_05_vld_out = vlSelfRef.__PVT__gelu_lut_vld_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
    }
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x18U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x10U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x18U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x10U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 8U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 8U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = (1U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    | (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                       & (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4))));
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
        = ((0x80000000U | (0x7fffffffU & (~ (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                              << 0x1eU) 
                                             | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                  | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                 << 0x1dU) 
                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                     | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                        | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                        | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                              | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                    | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                          | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                             << 0x19U) 
                                                            | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                << 0x18U) 
                                                               | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           & (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
               << 0x1fU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                             << 0x1eU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                           << 0x1dU) 
                                          | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                              << 0x1cU) 
                                             | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                 << 0x1bU) 
                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                    << 0x1aU) 
                                                   | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                       << 0x19U) 
                                                      | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                          << 0x18U) 
                                                         | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                             << 0x17U) 
                                                            | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                << 0x16U) 
                                                               | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                   << 0x15U) 
                                                                  | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                      << 0x14U) 
                                                                     | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                         << 0x13U) 
                                                                        | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                            << 0x12U) 
                                                                           | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                               << 0x11U) 
                                                                              | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 1U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 1U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 2U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 2U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 3U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 3U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 4U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 4U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 5U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 5U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 6U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 6U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 
        (1U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                >> 7U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                           >> 7U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = (1U 
                                                  & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                                      ? 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117)))
                                                      : 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107)))));
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                     ? ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217)))
                     : ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
                   & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location, 1U));
    vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index 
        = ((IData)((0U != (0xffU & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
            ? ((1U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                ? 0x18U : ((2U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0x17U : ((4U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                        ? 0x16U : (
                                                   (8U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 0x15U
                                                    : 
                                                   ((0x10U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 0x14U
                                                     : 
                                                    ((0x20U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 0x13U
                                                      : 
                                                     ((0x40U 
                                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                       ? 0x12U
                                                       : 0x11U)))))))
            : ((IData)((0U != (0xff00U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                ? ((0x100U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                    ? 0x10U : ((0x200U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                ? 0xfU : ((0x400U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                           ? 0xeU : 
                                          ((0x800U 
                                            & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                            ? 0xdU : 
                                           ((0x1000U 
                                             & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                             ? 0xcU
                                             : ((0x2000U 
                                                 & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                 ? 0xbU
                                                 : 
                                                ((0x4000U 
                                                  & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                  ? 0xaU
                                                  : 9U)))))))
                : ((IData)((0U != (0xff0000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                    ? ((0x10000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                        ? 8U : ((0x20000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                 ? 7U : ((0x40000U 
                                          & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                          ? 6U : ((0x80000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 5U
                                                   : 
                                                  ((0x100000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 3U
                                                     : 
                                                    ((0x400000U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 2U
                                                      : 1U)))))))
                    : ((IData)((0U != (0xff000000U 
                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                        ? ((0x1000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0U : ((0x2000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                     ? 1U : ((0x4000000U 
                                              & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                              ? 2U : 
                                             ((0x8000000U 
                                               & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                               ? 3U
                                               : ((0x10000000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 4U
                                                   : 
                                                  ((0x20000000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 6U
                                                     : 7U)))))))
                        : 0U))));
}

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location = 0;
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C01;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C02;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C03;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C04;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C05;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C06;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C07;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    // Body
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    if ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 
            (0xffU & (vlSymsp->TOP.ext_data_i_bits[2U] 
                      >> 0x17U));
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 
            (0xffU & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                      >> 0x17U));
    } else {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 0U;
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__expo_A = ((0x20000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)
                                              ? (0xffU 
                                                 & (vlSymsp->TOP.ext_data_i_bits[2U] 
                                                    >> 0x17U))
                                              : 0U);
    vlSelfRef.__PVT__u_buffer_0__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt) 
                                                   >> 5U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                                      >> 5U))) 
                                              & ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_0__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    vlSelfRef.__PVT__u_buffer_1__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt) 
                                                   >> 6U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                                      >> 6U))) 
                                              & ((0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)) 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_1__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_2__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt) 
                                                   >> 4U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                                      >> 4U))) 
                                              & ((0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_2__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_sign__DOT__full = (((1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt) 
                                                      >> 4U)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                      >> 4U))) 
                                                 & ((0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)) 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_sign__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                  == (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
    if (vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg) {
        vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & ((0x17U < (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))
                           ? 0U : VL_SHIFTR_III(24,32,8, 
                                                (0x800000U 
                                                 | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg), (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))));
    } else {
        if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 1U;
        } else if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 2U;
        }
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) 
                           | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg))
                           ? (0x800000U | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg)
                           : 0U));
    }
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop = 
        (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & (
                                                   (0x1fffffU 
                                                    & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                                + 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                               + 
                                                                               (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x13U))))) 
                                                                           + 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x12U))))) 
                                                                       + 
                                                                       (0x200U 
                                                                        | (0x1ffU 
                                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                              >> 0xeU))))) 
                                                                   + 
                                                                   (0x800U 
                                                                    | (0x7ffU 
                                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                          >> 0xcU))))) 
                                                               + 
                                                               (0x2000U 
                                                                | (0x1fffU 
                                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                      >> 0xaU))))) 
                                                           + 
                                                           (0x8000U 
                                                            | (0x7fffU 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                  >> 8U))))) 
                                                       + 
                                                       (0x80000U 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                              >> 4U))))) 
                                                   + 
                                                   (0x100000U 
                                                    | (0xfffffU 
                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                          >> 3U))))) 
                                     + (0x200000U | 
                                        (0x1fffffU 
                                         & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                            >> 2U))))) 
                       + (0x800000U | (0x7fffffU & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & 
                                        ((0x1fffffU 
                                          & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                         + 
                                                                         (8U 
                                                                          | (7U 
                                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                     + 
                                                                     (0x10U 
                                                                      | (0xfU 
                                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                            >> 0x13U))))) 
                                                                 + 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                        >> 0x12U))))) 
                                                             + 
                                                             (0x200U 
                                                              | (0x1ffU 
                                                                 & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                    >> 0xeU))))) 
                                                         + 
                                                         (0x800U 
                                                          | (0x7ffU 
                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                >> 0xcU))))) 
                                                     + 
                                                     (0x2000U 
                                                      | (0x1fffU 
                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                            >> 0xaU))))) 
                                                 + 
                                                 (0x8000U 
                                                  | (0x7fffU 
                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                        >> 8U))))) 
                                             + (0x80000U 
                                                | (0x7ffffU 
                                                   & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                      >> 4U))))) 
                                         + (0x100000U 
                                            | (0xfffffU 
                                               & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                  >> 3U))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A))));
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    vlSelfRef.__VdfgRegularize_h079bc411_0_1 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_09 = (IData)((0U != (0x14000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_6 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x44000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_10 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_08 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_0 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__input_vld_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1eU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_1 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1cU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_3 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1dU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag = ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U))) 
                                                 | ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                         >> 0x17U))) 
                                                    | (IData)(
                                                              ((0x7f000000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A)) 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                                  >> 0x18U)))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A)) 
                                                      & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                         >> 0x18U)))));
    if (vlSelfRef.__PVT__sel_09) {
        if (vlSelfRef.__VdfgRegularize_h079bc411_0_1) {
            vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
            vlSelfRef.__PVT__mux_09_data_out = (((~ 
                                                  (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                   >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (0x7fffffffU 
                                                   & vlSelf->__PVT__u_log2_X_1->__PVT__Result));
        } else {
            vlSelfRef.__PVT__mux_09_vld_out = 0U;
            vlSelfRef.__PVT__mux_09_data_out = 0U;
        }
    } else {
        vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_float_adder_1->__PVT__vld_out;
        vlSelfRef.__PVT__mux_09_data_out = vlSelf->__PVT__u_float_adder_1->__PVT__Result;
    }
    if (vlSelfRef.__PVT__sel_10) {
        vlSelfRef.__PVT__input_channel_4 = vlSymsp->TOP.ext_data_i_bits[2U];
        vlSelfRef.__PVT__wr_en_sign_X = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
        vlSelfRef.__PVT__input_vld_channel_4 = vlSymsp->TOP.FPU__DOT__vld_PE;
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
        vlSelfRef.__PVT__input_vld_channel_4 = 0U;
    }
    vlSelfRef.__PVT__sel_07 = (1U & ((IData)(vlSelfRef.__PVT__sel_08) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1eU)));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[2U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__sel_04 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1cU)));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_03_vld_out = vlSelfRef.__PVT__adder_0_vld_out_channel_0;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
        vlSelfRef.__PVT__mux_03_vld_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out));
        if (vlSelfRef.__PVT__sel_04) {
            if (vlSelfRef.__PVT__sel_04) {
                vlSelfRef.__PVT__mux_05_data_out = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
                vlSelfRef.__PVT__mux_05_vld_out = vlSelf->__PVT__u_float_adder_0->__PVT__vld_out;
            } else {
                vlSelfRef.__PVT__mux_05_data_out = 0U;
                vlSelfRef.__PVT__mux_05_vld_out = 0U;
            }
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_05_vld_out = vlSelfRef.__PVT__gelu_lut_vld_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
    }
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x18U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x10U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x18U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x10U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 8U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 8U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = (1U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    | (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                       & (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4))));
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
        = ((0x80000000U | (0x7fffffffU & (~ (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                              << 0x1eU) 
                                             | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                  | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                 << 0x1dU) 
                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                     | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                        | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                        | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                              | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                    | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                          | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                             << 0x19U) 
                                                            | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                << 0x18U) 
                                                               | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           & (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
               << 0x1fU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                             << 0x1eU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                           << 0x1dU) 
                                          | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                              << 0x1cU) 
                                             | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                 << 0x1bU) 
                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                    << 0x1aU) 
                                                   | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                       << 0x19U) 
                                                      | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                          << 0x18U) 
                                                         | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                             << 0x17U) 
                                                            | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                << 0x16U) 
                                                               | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                   << 0x15U) 
                                                                  | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                      << 0x14U) 
                                                                     | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                         << 0x13U) 
                                                                        | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                            << 0x12U) 
                                                                           | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                               << 0x11U) 
                                                                              | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 1U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 1U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 2U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 2U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 3U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 3U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 4U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 4U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 5U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 5U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 6U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 6U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 
        (1U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                >> 7U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                           >> 7U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = (1U 
                                                  & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                                      ? 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117)))
                                                      : 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107)))));
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                     ? ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217)))
                     : ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
                   & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location, 1U));
    vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index 
        = ((IData)((0U != (0xffU & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
            ? ((1U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                ? 0x18U : ((2U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0x17U : ((4U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                        ? 0x16U : (
                                                   (8U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 0x15U
                                                    : 
                                                   ((0x10U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 0x14U
                                                     : 
                                                    ((0x20U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 0x13U
                                                      : 
                                                     ((0x40U 
                                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                       ? 0x12U
                                                       : 0x11U)))))))
            : ((IData)((0U != (0xff00U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                ? ((0x100U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                    ? 0x10U : ((0x200U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                ? 0xfU : ((0x400U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                           ? 0xeU : 
                                          ((0x800U 
                                            & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                            ? 0xdU : 
                                           ((0x1000U 
                                             & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                             ? 0xcU
                                             : ((0x2000U 
                                                 & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                 ? 0xbU
                                                 : 
                                                ((0x4000U 
                                                  & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                  ? 0xaU
                                                  : 9U)))))))
                : ((IData)((0U != (0xff0000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                    ? ((0x10000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                        ? 8U : ((0x20000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                 ? 7U : ((0x40000U 
                                          & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                          ? 6U : ((0x80000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 5U
                                                   : 
                                                  ((0x100000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 3U
                                                     : 
                                                    ((0x400000U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 2U
                                                      : 1U)))))))
                    : ((IData)((0U != (0xff000000U 
                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                        ? ((0x1000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0U : ((0x2000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                     ? 1U : ((0x4000000U 
                                              & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                              ? 2U : 
                                             ((0x8000000U 
                                               & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                               ? 3U
                                               : ((0x10000000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 4U
                                                   : 
                                                  ((0x20000000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 6U
                                                     : 7U)))))))
                        : 0U))));
}

VL_ATTR_COLD void VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___stl_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location = 0;
    IData/*31:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C01;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C02;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C03;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C04;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C05;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C06;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C07;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316;
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    // Body
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    if ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 
            (0xffU & (vlSymsp->TOP.ext_data_i_bits[3U] 
                      >> 0x17U));
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 
            (0xffU & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                      >> 0x17U));
    } else {
        vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A = 0U;
        vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__expo_A = ((0x20000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)
                                              ? (0xffU 
                                                 & (vlSymsp->TOP.ext_data_i_bits[3U] 
                                                    >> 0x17U))
                                              : 0U);
    vlSelfRef.__PVT__u_buffer_0__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt) 
                                                   >> 5U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                                      >> 5U))) 
                                              & ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_0__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    vlSelfRef.__PVT__u_buffer_1__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt) 
                                                   >> 6U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                                      >> 6U))) 
                                              & ((0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)) 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_1__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_2__DOT__full = (((1U 
                                                & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt) 
                                                   >> 4U)) 
                                               != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                                      >> 4U))) 
                                              & ((0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_2__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt) 
                                               == (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
    vlSelfRef.__PVT__u_buffer_sign__DOT__full = (((1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt) 
                                                      >> 4U)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                      >> 4U))) 
                                                 & ((0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)) 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))));
    vlSelfRef.__PVT__u_buffer_sign__DOT__empty = ((IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt) 
                                                  == (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
    vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
    if (vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg) {
        vlSelfRef.__PVT__u_gelux__DOT__mem_select = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & ((0x17U < (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))
                           ? 0U : VL_SHIFTR_III(24,32,8, 
                                                (0x800000U 
                                                 | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg), (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg))));
    } else {
        if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 1U;
        } else if (vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select = 2U;
        }
        vlSelfRef.__PVT__u_gelux__DOT__lut_source = 
            (0xffffffU & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg) 
                           | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg))
                           ? (0x800000U | vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg)
                           : 0U));
    }
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop = 
        (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & (
                                                   (0x1fffffU 
                                                    & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                                + 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                               + 
                                                                               (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x13U))))) 
                                                                           + 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                                >> 0x12U))))) 
                                                                       + 
                                                                       (0x200U 
                                                                        | (0x1ffU 
                                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                              >> 0xeU))))) 
                                                                   + 
                                                                   (0x800U 
                                                                    | (0x7ffU 
                                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                          >> 0xcU))))) 
                                                               + 
                                                               (0x2000U 
                                                                | (0x1fffU 
                                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                      >> 0xaU))))) 
                                                           + 
                                                           (0x8000U 
                                                            | (0x7fffU 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                                  >> 8U))))) 
                                                       + 
                                                       (0x80000U 
                                                        | (0x7ffffU 
                                                           & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                              >> 4U))))) 
                                                   + 
                                                   (0x100000U 
                                                    | (0xfffffU 
                                                       & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                          >> 3U))))) 
                                     + (0x200000U | 
                                        (0x1fffffU 
                                         & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                            >> 2U))))) 
                       + (0x800000U | (0x7fffffU & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
        = (0x1ffffffU & ((0x7fffffU & ((0x3fffffU & 
                                        ((0x1fffffU 
                                          & ((0x1ffffU 
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
                                                                                & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x16U))))) 
                                                                         + 
                                                                         (8U 
                                                                          | (7U 
                                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                                >> 0x14U))))) 
                                                                     + 
                                                                     (0x10U 
                                                                      | (0xfU 
                                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                            >> 0x13U))))) 
                                                                 + 
                                                                 (0x20U 
                                                                  | (0x1fU 
                                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                        >> 0x12U))))) 
                                                             + 
                                                             (0x200U 
                                                              | (0x1ffU 
                                                                 & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                    >> 0xeU))))) 
                                                         + 
                                                         (0x800U 
                                                          | (0x7ffU 
                                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                                >> 0xcU))))) 
                                                     + 
                                                     (0x2000U 
                                                      | (0x1fffU 
                                                         & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                            >> 0xaU))))) 
                                                 + 
                                                 (0x8000U 
                                                  | (0x7fffU 
                                                     & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                        >> 8U))))) 
                                             + (0x80000U 
                                                | (0x7ffffU 
                                                   & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                      >> 4U))))) 
                                         + (0x100000U 
                                            | (0xfffffU 
                                               & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                  >> 3U))))) 
                                       + (0x200000U 
                                          | (0x1fffffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 2U))))) 
                         + (0x800000U | (0x7fffffU 
                                         & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A))));
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    vlSelfRef.__VdfgRegularize_h079bc411_0_1 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_09 = (IData)((0U != (0x14000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_6 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x44000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_10 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__PVT__sel_08 = (IData)((0U != (0x28000000U 
                                              & vlSymsp->TOP.ext_csr_i_0)));
    vlSelfRef.__VdfgRegularize_h079bc411_0_0 = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP.ext_csr_i_0)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__input_vld_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1eU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_1 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1cU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_3 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1dU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag = ((0U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U))) 
                                                 | ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                         >> 0x17U))) 
                                                    | (IData)(
                                                              ((0x7f000000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A)) 
                                                               & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                                  >> 0x18U)))));
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag 
        = ((0U == (0xffU & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                            >> 0x17U))) | ((0xffU == 
                                            (0xffU 
                                             & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                                >> 0x17U))) 
                                           | (IData)(
                                                     ((0x7f000000U 
                                                       == 
                                                       (0x7f800000U 
                                                        & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A)) 
                                                      & (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                         >> 0x18U)))));
    if (vlSelfRef.__PVT__sel_09) {
        if (vlSelfRef.__VdfgRegularize_h079bc411_0_1) {
            vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
            vlSelfRef.__PVT__mux_09_data_out = (((~ 
                                                  (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                   >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (0x7fffffffU 
                                                   & vlSelf->__PVT__u_log2_X_1->__PVT__Result));
        } else {
            vlSelfRef.__PVT__mux_09_vld_out = 0U;
            vlSelfRef.__PVT__mux_09_data_out = 0U;
        }
    } else {
        vlSelfRef.__PVT__mux_09_vld_out = vlSelf->__PVT__u_float_adder_1->__PVT__vld_out;
        vlSelfRef.__PVT__mux_09_data_out = vlSelf->__PVT__u_float_adder_1->__PVT__Result;
    }
    if (vlSelfRef.__PVT__sel_10) {
        vlSelfRef.__PVT__input_channel_4 = vlSymsp->TOP.ext_data_i_bits[3U];
        vlSelfRef.__PVT__wr_en_sign_X = vlSelf->__PVT__u_log2_X_1->__PVT__vld_out;
        vlSelfRef.__PVT__input_vld_channel_4 = vlSymsp->TOP.FPU__DOT__vld_PE;
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
        vlSelfRef.__PVT__input_vld_channel_4 = 0U;
    }
    vlSelfRef.__PVT__sel_07 = (1U & ((IData)(vlSelfRef.__PVT__sel_08) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1eU)));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[3U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__sel_04 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                     | (vlSymsp->TOP.ext_csr_i_0 
                                        >> 0x1cU)));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_03_vld_out = vlSelfRef.__PVT__adder_0_vld_out_channel_0;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
        vlSelfRef.__PVT__mux_03_vld_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out));
        if (vlSelfRef.__PVT__sel_04) {
            if (vlSelfRef.__PVT__sel_04) {
                vlSelfRef.__PVT__mux_05_data_out = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
                vlSelfRef.__PVT__mux_05_vld_out = vlSelf->__PVT__u_float_adder_0->__PVT__vld_out;
            } else {
                vlSelfRef.__PVT__mux_05_data_out = 0U;
                vlSelfRef.__PVT__mux_05_vld_out = 0U;
            }
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_05_vld_out = vlSelfRef.__PVT__gelu_lut_vld_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
    }
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_302 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x18U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_202 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 0x10U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_311 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x18U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_211 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 0x10U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_102 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                            >> 8U))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_111 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       | vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                                      >> 8U));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C01 = (1U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    | (vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                       & (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4))));
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
        = ((0x80000000U | (0x7fffffffU & (~ (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                              << 0x1eU) 
                                             | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                  | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                 << 0x1dU) 
                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                     | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                        | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                    << 0x1cU) 
                                                   | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                        | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                              | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                       << 0x1bU) 
                                                      | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                           | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                    | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                          << 0x1aU) 
                                                         | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                              | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                          | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                             << 0x19U) 
                                                            | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                 | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                << 0x18U) 
                                                               | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                    | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                   << 0x17U) 
                                                                  | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                       | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                      << 0x16U) 
                                                                     | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                          | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                         << 0x15U) 
                                                                        | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                             | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                            << 0x14U) 
                                                                           | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                               << 0x13U) 
                                                                              | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           & (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
               << 0x1fU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                             << 0x1eU) | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                           << 0x1dU) 
                                          | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                              << 0x1cU) 
                                             | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                 << 0x1bU) 
                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                    << 0x1aU) 
                                                   | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                       << 0x19U) 
                                                      | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                          << 0x18U) 
                                                         | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                             << 0x17U) 
                                                            | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                << 0x16U) 
                                                               | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                   << 0x15U) 
                                                                  | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                      << 0x14U) 
                                                                     | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                         << 0x13U) 
                                                                        | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                            << 0x12U) 
                                                                           | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                               << 0x11U) 
                                                                              | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_303 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_203 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_312 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x19U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x19U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_212 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x11U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x11U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_103 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_112 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 9U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 9U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C02 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 1U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 1U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_304 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_204 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_313 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1aU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1aU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_213 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x12U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x12U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_104 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_113 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xaU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xaU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C03 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 2U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 2U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_305 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_205 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_314 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1bU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1bU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_214 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x13U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x13U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_105 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_114 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xbU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xbU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C04 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 3U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 3U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_306 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_206 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_315 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1cU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1cU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_215 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x14U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x14U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_106 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_115 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xcU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xcU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C05 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 4U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 4U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_207 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_316 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x1dU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x1dU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_216 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x15U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x15U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_107 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_116 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xdU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xdU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C06 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 5U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 5U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_217 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0x16U) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0x16U) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_117 = (1U 
                                                   & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xeU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xeU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C07 = (1U 
                                                 & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                     >> 6U) 
                                                    | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                        >> 6U) 
                                                       & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0 = 
        (1U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                >> 7U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                           >> 7U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1 = (1U 
                                                  & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                                      ? 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117)))
                                                      : 
                                                     ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                       >> 0xfU) 
                                                      | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          >> 0xfU) 
                                                         & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107)))));
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                     ? ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217)))
                     : ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_gelux__DOT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)))))))))));
    __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location 
                   & vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_gelux__DOT__u_lza_log2__DOT__zero_location, 1U));
    vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index 
        = ((IData)((0U != (0xffU & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
            ? ((1U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                ? 0x18U : ((2U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0x17U : ((4U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                        ? 0x16U : (
                                                   (8U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 0x15U
                                                    : 
                                                   ((0x10U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 0x14U
                                                     : 
                                                    ((0x20U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 0x13U
                                                      : 
                                                     ((0x40U 
                                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                       ? 0x12U
                                                       : 0x11U)))))))
            : ((IData)((0U != (0xff00U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                ? ((0x100U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                    ? 0x10U : ((0x200U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                ? 0xfU : ((0x400U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                           ? 0xeU : 
                                          ((0x800U 
                                            & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                            ? 0xdU : 
                                           ((0x1000U 
                                             & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                             ? 0xcU
                                             : ((0x2000U 
                                                 & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                 ? 0xbU
                                                 : 
                                                ((0x4000U 
                                                  & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                  ? 0xaU
                                                  : 9U)))))))
                : ((IData)((0U != (0xff0000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                    ? ((0x10000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                        ? 8U : ((0x20000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                 ? 7U : ((0x40000U 
                                          & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                          ? 6U : ((0x80000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 5U
                                                   : 
                                                  ((0x100000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 3U
                                                     : 
                                                    ((0x400000U 
                                                      & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                      ? 2U
                                                      : 1U)))))))
                    : ((IData)((0U != (0xff000000U 
                                       & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)))
                        ? ((0x1000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                            ? 0U : ((0x2000000U & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                     ? 1U : ((0x4000000U 
                                              & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                              ? 2U : 
                                             ((0x8000000U 
                                               & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                               ? 3U
                                               : ((0x10000000U 
                                                   & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                   ? 4U
                                                   : 
                                                  ((0x20000000U 
                                                    & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                    ? 5U
                                                    : 
                                                   ((0x40000000U 
                                                     & __PVT__u_gelux__DOT__u_lza_log2__DOT__final_location)
                                                     ? 6U
                                                     : 7U)))))))
                        : 0U))));
}
