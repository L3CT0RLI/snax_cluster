// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__2_power_X.h"
#include "VFPU__Syms.h"
#include "VFPU_log2_X.h"

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0\n"); );
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
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_0__DOT__rd_cnt = 0;
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_0__DOT__wr_cnt = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg0 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = 0;
    CData/*1:0*/ __Vdly__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = 0;
    CData/*6:0*/ __Vdly__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__addr_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__sign_A_reg2 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_gelux__DOT__lut_source_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__sign_A_reg3 = 0;
    SData/*15:0*/ __Vdly__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__y_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__vld_in_reg3 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg4;
    __Vdly__u_gelux__DOT__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_gelux__DOT__vld_in_reg4 = 0;
    CData/*0:0*/ __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = 0;
    IData/*31:0*/ __Vdly__mul_log2e_0_data_out;
    __Vdly__mul_log2e_0_data_out = 0;
    CData/*0:0*/ __Vdly__mul_log2e_0_vld_out;
    __Vdly__mul_log2e_0_vld_out = 0;
    CData/*0:0*/ __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v0;
    __VdlyVal__u_buffer_0__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_buffer_0__DOT__ram__v0;
    __VdlyDim0__u_buffer_0__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v0;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v1;
    __VdlyVal__u_buffer_0__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v1;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v2;
    __VdlyVal__u_buffer_0__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v3;
    __VdlyVal__u_buffer_0__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v4;
    __VdlyVal__u_buffer_0__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v5;
    __VdlyVal__u_buffer_0__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v6;
    __VdlyVal__u_buffer_0__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v7;
    __VdlyVal__u_buffer_0__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v8;
    __VdlyVal__u_buffer_0__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v9;
    __VdlyVal__u_buffer_0__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v10;
    __VdlyVal__u_buffer_0__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v11;
    __VdlyVal__u_buffer_0__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v12;
    __VdlyVal__u_buffer_0__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v13;
    __VdlyVal__u_buffer_0__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v14;
    __VdlyVal__u_buffer_0__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v15;
    __VdlyVal__u_buffer_0__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v16;
    __VdlyVal__u_buffer_0__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v17;
    __VdlyVal__u_buffer_0__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v18;
    __VdlyVal__u_buffer_0__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v19;
    __VdlyVal__u_buffer_0__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v20;
    __VdlyVal__u_buffer_0__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v21;
    __VdlyVal__u_buffer_0__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v22;
    __VdlyVal__u_buffer_0__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v23;
    __VdlyVal__u_buffer_0__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v24;
    __VdlyVal__u_buffer_0__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v25;
    __VdlyVal__u_buffer_0__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v26;
    __VdlyVal__u_buffer_0__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v27;
    __VdlyVal__u_buffer_0__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v28;
    __VdlyVal__u_buffer_0__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v29;
    __VdlyVal__u_buffer_0__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v30;
    __VdlyVal__u_buffer_0__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v31;
    __VdlyVal__u_buffer_0__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v32;
    __VdlyVal__u_buffer_0__DOT__ram__v32 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v33;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v0;
    __VdlyVal__u_buffer_1__DOT__ram__v0 = 0;
    CData/*5:0*/ __VdlyDim0__u_buffer_1__DOT__ram__v0;
    __VdlyDim0__u_buffer_1__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v0;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v1;
    __VdlyVal__u_buffer_1__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v1;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v2;
    __VdlyVal__u_buffer_1__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v3;
    __VdlyVal__u_buffer_1__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v4;
    __VdlyVal__u_buffer_1__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v5;
    __VdlyVal__u_buffer_1__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v6;
    __VdlyVal__u_buffer_1__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v7;
    __VdlyVal__u_buffer_1__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v8;
    __VdlyVal__u_buffer_1__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v9;
    __VdlyVal__u_buffer_1__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v10;
    __VdlyVal__u_buffer_1__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v11;
    __VdlyVal__u_buffer_1__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v12;
    __VdlyVal__u_buffer_1__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v13;
    __VdlyVal__u_buffer_1__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v14;
    __VdlyVal__u_buffer_1__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v15;
    __VdlyVal__u_buffer_1__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v16;
    __VdlyVal__u_buffer_1__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v17;
    __VdlyVal__u_buffer_1__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v18;
    __VdlyVal__u_buffer_1__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v19;
    __VdlyVal__u_buffer_1__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v20;
    __VdlyVal__u_buffer_1__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v21;
    __VdlyVal__u_buffer_1__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v22;
    __VdlyVal__u_buffer_1__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v23;
    __VdlyVal__u_buffer_1__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v24;
    __VdlyVal__u_buffer_1__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v25;
    __VdlyVal__u_buffer_1__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v26;
    __VdlyVal__u_buffer_1__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v27;
    __VdlyVal__u_buffer_1__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v28;
    __VdlyVal__u_buffer_1__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v29;
    __VdlyVal__u_buffer_1__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v30;
    __VdlyVal__u_buffer_1__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v31;
    __VdlyVal__u_buffer_1__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v32;
    __VdlyVal__u_buffer_1__DOT__ram__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v33;
    __VdlyVal__u_buffer_1__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v34;
    __VdlyVal__u_buffer_1__DOT__ram__v34 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v35;
    __VdlyVal__u_buffer_1__DOT__ram__v35 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v36;
    __VdlyVal__u_buffer_1__DOT__ram__v36 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v37;
    __VdlyVal__u_buffer_1__DOT__ram__v37 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v38;
    __VdlyVal__u_buffer_1__DOT__ram__v38 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v39;
    __VdlyVal__u_buffer_1__DOT__ram__v39 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v40;
    __VdlyVal__u_buffer_1__DOT__ram__v40 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v41;
    __VdlyVal__u_buffer_1__DOT__ram__v41 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v42;
    __VdlyVal__u_buffer_1__DOT__ram__v42 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v43;
    __VdlyVal__u_buffer_1__DOT__ram__v43 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v44;
    __VdlyVal__u_buffer_1__DOT__ram__v44 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v45;
    __VdlyVal__u_buffer_1__DOT__ram__v45 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v46;
    __VdlyVal__u_buffer_1__DOT__ram__v46 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v47;
    __VdlyVal__u_buffer_1__DOT__ram__v47 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v48;
    __VdlyVal__u_buffer_1__DOT__ram__v48 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v49;
    __VdlyVal__u_buffer_1__DOT__ram__v49 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v50;
    __VdlyVal__u_buffer_1__DOT__ram__v50 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v51;
    __VdlyVal__u_buffer_1__DOT__ram__v51 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v52;
    __VdlyVal__u_buffer_1__DOT__ram__v52 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v53;
    __VdlyVal__u_buffer_1__DOT__ram__v53 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v54;
    __VdlyVal__u_buffer_1__DOT__ram__v54 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v55;
    __VdlyVal__u_buffer_1__DOT__ram__v55 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v56;
    __VdlyVal__u_buffer_1__DOT__ram__v56 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v57;
    __VdlyVal__u_buffer_1__DOT__ram__v57 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v58;
    __VdlyVal__u_buffer_1__DOT__ram__v58 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v59;
    __VdlyVal__u_buffer_1__DOT__ram__v59 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v60;
    __VdlyVal__u_buffer_1__DOT__ram__v60 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v61;
    __VdlyVal__u_buffer_1__DOT__ram__v61 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v62;
    __VdlyVal__u_buffer_1__DOT__ram__v62 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v63;
    __VdlyVal__u_buffer_1__DOT__ram__v63 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v64;
    __VdlyVal__u_buffer_1__DOT__ram__v64 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v65;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v0;
    __VdlyVal__u_buffer_2__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_2__DOT__ram__v0;
    __VdlyDim0__u_buffer_2__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v0;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v1;
    __VdlyVal__u_buffer_2__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v1;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v2;
    __VdlyVal__u_buffer_2__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v3;
    __VdlyVal__u_buffer_2__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v4;
    __VdlyVal__u_buffer_2__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v5;
    __VdlyVal__u_buffer_2__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v6;
    __VdlyVal__u_buffer_2__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v7;
    __VdlyVal__u_buffer_2__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v8;
    __VdlyVal__u_buffer_2__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v9;
    __VdlyVal__u_buffer_2__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v10;
    __VdlyVal__u_buffer_2__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v11;
    __VdlyVal__u_buffer_2__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v12;
    __VdlyVal__u_buffer_2__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v13;
    __VdlyVal__u_buffer_2__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v14;
    __VdlyVal__u_buffer_2__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v15;
    __VdlyVal__u_buffer_2__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v16;
    __VdlyVal__u_buffer_2__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v17;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v0;
    __VdlyVal__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_sign__DOT__ram__v0;
    __VdlyDim0__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v0;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v1;
    __VdlyVal__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v1;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v2;
    __VdlyVal__u_buffer_sign__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v3;
    __VdlyVal__u_buffer_sign__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v4;
    __VdlyVal__u_buffer_sign__DOT__ram__v4 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v5;
    __VdlyVal__u_buffer_sign__DOT__ram__v5 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v6;
    __VdlyVal__u_buffer_sign__DOT__ram__v6 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v7;
    __VdlyVal__u_buffer_sign__DOT__ram__v7 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v8;
    __VdlyVal__u_buffer_sign__DOT__ram__v8 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v9;
    __VdlyVal__u_buffer_sign__DOT__ram__v9 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v10;
    __VdlyVal__u_buffer_sign__DOT__ram__v10 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v11;
    __VdlyVal__u_buffer_sign__DOT__ram__v11 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v12;
    __VdlyVal__u_buffer_sign__DOT__ram__v12 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v13;
    __VdlyVal__u_buffer_sign__DOT__ram__v13 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v14;
    __VdlyVal__u_buffer_sign__DOT__ram__v14 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v15;
    __VdlyVal__u_buffer_sign__DOT__ram__v15 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v16;
    __VdlyVal__u_buffer_sign__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v17;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0;
    // Body
    __Vdly__mul_log2e_0_vld_out = vlSelfRef.__PVT__mul_log2e_0_vld_out;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg4 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid;
    __Vdly__u_gelux__DOT__sign_A_reg2 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg3 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__vld_in_reg1 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg0 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__sign_A_reg3 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__addr_a_reg = vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_buffer_0__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt;
    __Vdly__mul_log2e_0_data_out = vlSelfRef.__PVT__mul_log2e_0_data_out;
    __Vdly__u_buffer_0__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid;
    vlSelfRef.__Vdly__x_mul_2_2_data_out = vlSelfRef.__PVT__x_mul_2_2_data_out;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0U;
    __Vdly__u_gelux__DOT__sign_A_reg4 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0U;
    __Vdly__mul_log2e_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                   && ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        ? (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        : (IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out)));
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             ? (IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)));
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                            && ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 ? (IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 : (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)));
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = ((IData)(vlSymsp->TOP.rst_ni) 
                                                 && ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      ? (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid)));
    vlSelfRef.__PVT__x_mul_2_2_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               ? (IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out)));
    __Vdly__u_gelux__DOT__sign_A_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)));
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2) {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & (0x3ffffU & (((0x3ffffU 
                                             & vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1) 
                                            * (0x7ffU 
                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__q_b) 
                                                  - (IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a)))) 
                                           >> 0xbU)));
        } else {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg);
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0) {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & ((((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select) 
                                                     << 5U) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.__PVT__u_gelux__DOT__lut_source 
                                                          >> 0x12U))) 
                                                   - (IData)(1U)));
        } else {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg));
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
        }
        if (((IData)(vlSelfRef.__PVT__input_vld_channel_0) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__full)))) {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)));
            __VdlyVal__u_buffer_0__DOT__ram__v0 = (
                                                   (0x40000000U 
                                                    & vlSymsp->TOP.ext_csr_i_0)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[0U]
                                                    : 0U);
            __VdlyDim0__u_buffer_0__DOT__ram__v0 = 
                (0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlySet__u_buffer_0__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlyVal__u_buffer_0__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0U];
            __VdlySet__u_buffer_0__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_0__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [1U];
            __VdlyVal__u_buffer_0__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [2U];
            __VdlyVal__u_buffer_0__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [3U];
            __VdlyVal__u_buffer_0__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [4U];
            __VdlyVal__u_buffer_0__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [5U];
            __VdlyVal__u_buffer_0__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [6U];
            __VdlyVal__u_buffer_0__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [7U];
            __VdlyVal__u_buffer_0__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [8U];
            __VdlyVal__u_buffer_0__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [9U];
            __VdlyVal__u_buffer_0__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_0__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_0__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_0__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_0__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_0__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_0__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_0__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_0__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_0__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_0__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_0__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_0__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_0__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_0__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_0__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_0__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_0__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_0__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_0__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_0__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_0__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1fU];
        }
        if (((IData)(vlSelfRef.__PVT__wr_en_sign_X) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__full)))) {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)));
            __VdlyVal__u_buffer_sign__DOT__ram__v0 
                = (1U & (((vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                           >> 0x1eU) | (0x7fU == (0x7fU 
                                                  & (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                     >> 0x17U)))) 
                         & (IData)((0U != (0x28000000U 
                                           & vlSymsp->TOP.ext_csr_i_0)))));
            __VdlyDim0__u_buffer_sign__DOT__ram__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlySet__u_buffer_sign__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlyVal__u_buffer_sign__DOT__ram__v1 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0U];
            __VdlySet__u_buffer_sign__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_sign__DOT__ram__v2 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [1U];
            __VdlyVal__u_buffer_sign__DOT__ram__v3 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [2U];
            __VdlyVal__u_buffer_sign__DOT__ram__v4 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [3U];
            __VdlyVal__u_buffer_sign__DOT__ram__v5 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [4U];
            __VdlyVal__u_buffer_sign__DOT__ram__v6 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [5U];
            __VdlyVal__u_buffer_sign__DOT__ram__v7 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [6U];
            __VdlyVal__u_buffer_sign__DOT__ram__v8 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [7U];
            __VdlyVal__u_buffer_sign__DOT__ram__v9 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [8U];
            __VdlyVal__u_buffer_sign__DOT__ram__v10 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [9U];
            __VdlyVal__u_buffer_sign__DOT__ram__v11 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_sign__DOT__ram__v12 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_sign__DOT__ram__v13 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_sign__DOT__ram__v14 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_sign__DOT__ram__v15 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_sign__DOT__ram__v16 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xfU];
        }
        __Vdly__u_buffer_1__DOT__rd_cnt = (0x7fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt)));
        if (((IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__full)))) {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)));
            __VdlyVal__u_buffer_1__DOT__ram__v0 = vlSelfRef.__PVT__mul_log2e_0_data_out;
            __VdlyDim0__u_buffer_1__DOT__ram__v0 = 
                (0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlySet__u_buffer_1__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlyVal__u_buffer_1__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0U];
            __VdlySet__u_buffer_1__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_1__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [1U];
            __VdlyVal__u_buffer_1__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [2U];
            __VdlyVal__u_buffer_1__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [3U];
            __VdlyVal__u_buffer_1__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [4U];
            __VdlyVal__u_buffer_1__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [5U];
            __VdlyVal__u_buffer_1__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [6U];
            __VdlyVal__u_buffer_1__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [7U];
            __VdlyVal__u_buffer_1__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [8U];
            __VdlyVal__u_buffer_1__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [9U];
            __VdlyVal__u_buffer_1__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_1__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_1__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_1__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_1__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_1__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_1__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_1__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_1__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_1__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_1__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_1__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_1__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_1__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_1__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_1__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_1__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_1__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_1__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_1__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_1__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_1__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1fU];
            __VdlyVal__u_buffer_1__DOT__ram__v33 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x20U];
            __VdlyVal__u_buffer_1__DOT__ram__v34 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x21U];
            __VdlyVal__u_buffer_1__DOT__ram__v35 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x22U];
            __VdlyVal__u_buffer_1__DOT__ram__v36 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x23U];
            __VdlyVal__u_buffer_1__DOT__ram__v37 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x24U];
            __VdlyVal__u_buffer_1__DOT__ram__v38 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x25U];
            __VdlyVal__u_buffer_1__DOT__ram__v39 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x26U];
            __VdlyVal__u_buffer_1__DOT__ram__v40 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x27U];
            __VdlyVal__u_buffer_1__DOT__ram__v41 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x28U];
            __VdlyVal__u_buffer_1__DOT__ram__v42 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x29U];
            __VdlyVal__u_buffer_1__DOT__ram__v43 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2aU];
            __VdlyVal__u_buffer_1__DOT__ram__v44 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2bU];
            __VdlyVal__u_buffer_1__DOT__ram__v45 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2cU];
            __VdlyVal__u_buffer_1__DOT__ram__v46 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2dU];
            __VdlyVal__u_buffer_1__DOT__ram__v47 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2eU];
            __VdlyVal__u_buffer_1__DOT__ram__v48 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2fU];
            __VdlyVal__u_buffer_1__DOT__ram__v49 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x30U];
            __VdlyVal__u_buffer_1__DOT__ram__v50 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x31U];
            __VdlyVal__u_buffer_1__DOT__ram__v51 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x32U];
            __VdlyVal__u_buffer_1__DOT__ram__v52 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x33U];
            __VdlyVal__u_buffer_1__DOT__ram__v53 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x34U];
            __VdlyVal__u_buffer_1__DOT__ram__v54 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x35U];
            __VdlyVal__u_buffer_1__DOT__ram__v55 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x36U];
            __VdlyVal__u_buffer_1__DOT__ram__v56 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x37U];
            __VdlyVal__u_buffer_1__DOT__ram__v57 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x38U];
            __VdlyVal__u_buffer_1__DOT__ram__v58 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x39U];
            __VdlyVal__u_buffer_1__DOT__ram__v59 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3aU];
            __VdlyVal__u_buffer_1__DOT__ram__v60 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3bU];
            __VdlyVal__u_buffer_1__DOT__ram__v61 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3cU];
            __VdlyVal__u_buffer_1__DOT__ram__v62 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3dU];
            __VdlyVal__u_buffer_1__DOT__ram__v63 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3eU];
            __VdlyVal__u_buffer_1__DOT__ram__v64 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3fU];
        }
        __Vdly__u_buffer_2__DOT__rd_cnt = (0x1fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt)));
        if (((IData)(vlSelf->__PVT__u_log2_X_0->__PVT__vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__full)))) {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)));
            __VdlyVal__u_buffer_2__DOT__ram__v0 = vlSelf->__PVT__u_log2_X_0->__PVT__Result;
            __VdlyDim0__u_buffer_2__DOT__ram__v0 = 
                (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlySet__u_buffer_2__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlyVal__u_buffer_2__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0U];
            __VdlySet__u_buffer_2__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_2__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [1U];
            __VdlyVal__u_buffer_2__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [2U];
            __VdlyVal__u_buffer_2__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [3U];
            __VdlyVal__u_buffer_2__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [4U];
            __VdlyVal__u_buffer_2__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [5U];
            __VdlyVal__u_buffer_2__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [6U];
            __VdlyVal__u_buffer_2__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [7U];
            __VdlyVal__u_buffer_2__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [8U];
            __VdlyVal__u_buffer_2__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [9U];
            __VdlyVal__u_buffer_2__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_2__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_2__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_2__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_2__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_2__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xfU];
        }
        __Vdly__mul_log2e_0_data_out = ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                         ? ((0x80000000U 
                                             & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A) 
                                            | ((0x7f800000U 
                                                & (((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                     ? 
                                                    (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                     >> 0x17U)
                                                     : 
                                                    ((vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                         >> 0x18U)))) 
                                                   << 0x17U)) 
                                               | ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)
                                                       ? 
                                                      (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                       >> 1U)
                                                       : vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)))))
                                         : vlSelfRef.__PVT__mul_log2e_0_data_out);
        if (vlSelfRef.__PVT__input_vld_channel_3) {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & ((0x80U & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                      - (IData)(0x7fU)))
                             ? ((IData)(0x7fU) - (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A))
                             : ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                - (IData)(0x7fU))));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & ((0x20000000U & vlSymsp->TOP.ext_csr_i_0)
                                 ? vlSymsp->TOP.ext_data_i_bits[0U]
                                 : 0U));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg);
        }
        __Vdly__u_buffer_0__DOT__rd_cnt = (0x3fU & 
                                           (((IData)(vlSymsp->TOP.FPU__DOT__pe_x_max_vld) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt)));
        __Vdly__u_buffer_sign__DOT__rd_cnt = (0x1fU 
                                              & (((IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out) 
                                                  & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__empty)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))
                                                  : (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt)));
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                : vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A);
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid 
            = ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                ? ((0x80000000U & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A) 
                   | ((0x7f800000U & (((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                                        ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                           >> 0x17U)
                                        : ((vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                            >> 0x17U) 
                                           + (1U & 
                                              (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                               >> 0x18U)))) 
                                      << 0x17U)) | 
                      ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                        ? 0U : (0x7fffffU & ((0x1000000U 
                                              & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)
                                              ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                 >> 1U)
                                              : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)))))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid);
        vlSelfRef.__Vdly__x_mul_2_2_data_out = ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                                 ? 
                                                ((0x80000000U 
                                                  & ((vlSymsp->TOP.ext_csr_i_0 
                                                      << 3U) 
                                                     & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A) 
                                                         + 
                                                         ((0xffU 
                                                           == (IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A))
                                                           ? 0U
                                                           : 1U)) 
                                                        << 0x17U)) 
                                                    | ((0x10000000U 
                                                        & vlSymsp->TOP.ext_csr_i_0)
                                                        ? 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)
                                                        : 0U)))
                                                 : vlSelfRef.__PVT__x_mul_2_2_data_out);
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                ? ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)
                    ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                    : (((~ (vlSelfRef.__PVT__mux_00_data_out 
                            >> 0x1fU)) << 0x1fU) | 
                       (0x7fffffffU & vlSelfRef.__PVT__mux_00_data_out)))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A);
        vlSelfRef.__PVT__x_mul_2_0_out = ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                           ? ((0x80000000U 
                                               & ((vlSymsp->TOP.ext_csr_i_0 
                                                   << 3U) 
                                                  & vlSymsp->TOP.ext_data_i_bits[0U])) 
                                              | ((0x7f800000U 
                                                  & (((IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A) 
                                                      + 
                                                      ((0xffU 
                                                        == (IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A))
                                                        ? 0U
                                                        : 1U)) 
                                                     << 0x17U)) 
                                                 | ((0x10000000U 
                                                     & vlSymsp->TOP.ext_csr_i_0)
                                                     ? 
                                                    (0x7fffffU 
                                                     & vlSymsp->TOP.ext_data_i_bits[0U])
                                                     : 0U)))
                                           : vlSelfRef.__PVT__x_mul_2_0_out);
        vlSelfRef.__PVT__gelu_lut_data_out = ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                               ? ((
                                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)
                                                      ? 0U
                                                      : 0x7fU)
                                                     : 
                                                    (0x60U 
                                                     | (0x1fU 
                                                        & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index))))) 
                                                   << 0x17U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                      ? 0U
                                                      : 
                                                     (0x7fffffU 
                                                      & ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          ^ vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33) 
                                                         << (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index)))))
                                               : vlSelfRef.__PVT__gelu_lut_data_out);
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3) {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = (((- (IData)((1U & (vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
                                      >> 0x11U)))) 
                    << 0x12U) | vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp);
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & ((IData)(0x400001U) 
                                + ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                    ? (~ ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                          << 7U)) : 
                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                    << 7U))));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = vlSelfRef.__PVT__u_gelux__DOT__op2_reg;
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & vlSelfRef.__PVT__u_gelux__DOT__op1_reg);
        }
        vlSelfRef.__PVT__u_gelux__DOT__q_a = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg];
        vlSelfRef.__PVT__relu_data_out = (((vlSymsp->TOP.ext_csr_i_0 
                                            & vlSymsp->TOP.ext_data_i_bits[0U]) 
                                           >> 0x1fU)
                                           ? 0U : (
                                                   (vlSymsp->TOP.ext_csr_i_0 
                                                    >> 0x1fU)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[0U]
                                                    : 0U));
        vlSelfRef.__PVT__buffer_2_out = vlSelfRef.__PVT__u_buffer_2__DOT__ram
            [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_0_out = vlSelfRef.__PVT__u_buffer_0__DOT__ram
            [(0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_1_out = vlSelfRef.__PVT__u_buffer_1__DOT__ram
            [(0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))];
        vlSelfRef.__PVT__u_gelux__DOT__q_b = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [(((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0) 
               << 5U) | (0x1fU & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
                                  >> 0x12U)))];
    } else {
        __Vdly__u_gelux__DOT__y_a_reg = 0U;
        __Vdly__u_gelux__DOT__mem_select_reg0 = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg0 = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 = 0U;
        __Vdly__u_gelux__DOT__addr_a_reg = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg1 = 0U;
        __Vdly__u_buffer_0__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_sign__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_1__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_1__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_2__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_2__DOT__wr_cnt = 0U;
        __Vdly__mul_log2e_0_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg = 0U;
        __Vdly__u_buffer_0__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_sign__DOT__rd_cnt = 0U;
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A = 0U;
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = 0U;
        vlSelfRef.__Vdly__x_mul_2_2_data_out = 0U;
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A = 0U;
        vlSelfRef.__PVT__x_mul_2_0_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg = 0U;
        __VdlySet__u_buffer_2__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_sign__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_0__DOT__ram__v33 = 1U;
        vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg = 0U;
        __VdlySet__u_buffer_1__DOT__ram__v65 = 1U;
        vlSelfRef.__PVT__gelu_lut_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op2_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op1_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_a = 0U;
        vlSelfRef.__PVT__relu_data_out = 0U;
        vlSelfRef.__PVT__buffer_2_out = 0U;
        vlSelfRef.__PVT__buffer_0_out = 0U;
        vlSelfRef.__PVT__buffer_1_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_b = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                                       ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0)
                                                       : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)));
    vlSelfRef.__PVT__x_mul_2_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               ? (IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out)));
    __Vdly__u_gelux__DOT__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)));
    vlSelfRef.__PVT__gelu_lut_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              : (IData)(vlSelfRef.__PVT__gelu_lut_vld_out)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                             ? ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              ? (IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)));
    __Vdly__u_gelux__DOT__sign_A_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) 
                                                | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (0U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (1U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                   ? 
                                                  (1U 
                                                   & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                       - (IData)(0x7fU)) 
                                                      >> 7U))
                                                   : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg))));
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                          ? 
                                                         ((vlSymsp->TOP.ext_csr_i_0 
                                                           >> 0x1dU) 
                                                          & (vlSymsp->TOP.ext_data_i_bits[0U] 
                                                             >> 0x1fU))
                                                          : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0))));
    __Vdly__u_gelux__DOT__sign_A_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)));
    vlSelfRef.__PVT__buffer_sign_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                        && vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                                        [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))]);
    vlSelfRef.__PVT__relu_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                     && ((vlSymsp->TOP.ext_csr_i_0 
                                          >> 0x1fU) 
                                         & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2 = __Vdly__u_gelux__DOT__sign_A_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1 = __Vdly__u_gelux__DOT__vld_in_reg1;
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0 = __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0 = __Vdly__u_gelux__DOT__vld_in_reg0;
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt = __Vdly__u_buffer_2__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt = __Vdly__u_buffer_sign__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt = __Vdly__u_buffer_0__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2 = __Vdly__u_gelux__DOT__vld_in_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
        = __Vdly__u_gelux__DOT__lut_source_reg1;
    vlSelfRef.__PVT__mul_log2e_0_data_out = __Vdly__mul_log2e_0_data_out;
    vlSelfRef.__PVT__mul_log2e_0_vld_out = __Vdly__mul_log2e_0_vld_out;
    vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt = __Vdly__u_buffer_1__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4 = __Vdly__u_gelux__DOT__vld_in_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4 = __Vdly__u_gelux__DOT__sign_A_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__y_a_reg = __Vdly__u_gelux__DOT__y_a_reg;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3 = __Vdly__u_gelux__DOT__vld_in_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3 = __Vdly__u_gelux__DOT__sign_A_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg = __Vdly__u_gelux__DOT__addr_a_reg;
    vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt = __Vdly__u_buffer_sign__DOT__rd_cnt;
    if (__VdlySet__u_buffer_sign__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[__VdlyDim0__u_buffer_sign__DOT__ram__v0] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt = __Vdly__u_buffer_2__DOT__rd_cnt;
    if (__VdlySet__u_buffer_2__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[__VdlyDim0__u_buffer_2__DOT__ram__v0] 
            = __VdlyVal__u_buffer_2__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = __VdlyVal__u_buffer_2__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = __VdlyVal__u_buffer_2__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = __VdlyVal__u_buffer_2__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = __VdlyVal__u_buffer_2__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = __VdlyVal__u_buffer_2__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = __VdlyVal__u_buffer_2__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = __VdlyVal__u_buffer_2__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = __VdlyVal__u_buffer_2__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = __VdlyVal__u_buffer_2__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = __VdlyVal__u_buffer_2__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt = __Vdly__u_buffer_0__DOT__rd_cnt;
    if (__VdlySet__u_buffer_0__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[__VdlyDim0__u_buffer_0__DOT__ram__v0] 
            = __VdlyVal__u_buffer_0__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = __VdlyVal__u_buffer_0__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = __VdlyVal__u_buffer_0__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = __VdlyVal__u_buffer_0__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = __VdlyVal__u_buffer_0__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = __VdlyVal__u_buffer_0__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = __VdlyVal__u_buffer_0__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = __VdlyVal__u_buffer_0__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = __VdlyVal__u_buffer_0__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = __VdlyVal__u_buffer_0__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = __VdlyVal__u_buffer_0__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v32;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v33) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt = __Vdly__u_buffer_1__DOT__rd_cnt;
    if (__VdlySet__u_buffer_1__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[__VdlyDim0__u_buffer_1__DOT__ram__v0] 
            = __VdlyVal__u_buffer_1__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0U] = __VdlyVal__u_buffer_1__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[1U] = __VdlyVal__u_buffer_1__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[2U] = __VdlyVal__u_buffer_1__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[3U] = __VdlyVal__u_buffer_1__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[4U] = __VdlyVal__u_buffer_1__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[5U] = __VdlyVal__u_buffer_1__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[6U] = __VdlyVal__u_buffer_1__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[7U] = __VdlyVal__u_buffer_1__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[8U] = __VdlyVal__u_buffer_1__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[9U] = __VdlyVal__u_buffer_1__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v32;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x20U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v33;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x21U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v34;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x22U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v35;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x23U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v36;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x24U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v37;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x25U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v38;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x26U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v39;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x27U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v40;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x28U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v41;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x29U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v42;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v43;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v44;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v45;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v46;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v47;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v48;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x30U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v49;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x31U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v50;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x32U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v51;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x33U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v52;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x34U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v53;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x35U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v54;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x36U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v55;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x37U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v56;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x38U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v57;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x39U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v58;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v59;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v60;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v61;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v62;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v63;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v64;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v65) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__u_buffer_1__DOT__ram[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
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
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[0U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
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
    vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0 
        = __Vdly__u_gelux__DOT__mem_select_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
        = __Vdly__u_gelux__DOT__lut_source_reg0;
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

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0\n"); );
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
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_0__DOT__rd_cnt = 0;
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_0__DOT__wr_cnt = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg0 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = 0;
    CData/*1:0*/ __Vdly__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = 0;
    CData/*6:0*/ __Vdly__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__addr_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__sign_A_reg2 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_gelux__DOT__lut_source_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__sign_A_reg3 = 0;
    SData/*15:0*/ __Vdly__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__y_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__vld_in_reg3 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg4;
    __Vdly__u_gelux__DOT__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_gelux__DOT__vld_in_reg4 = 0;
    CData/*0:0*/ __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = 0;
    IData/*31:0*/ __Vdly__mul_log2e_0_data_out;
    __Vdly__mul_log2e_0_data_out = 0;
    CData/*0:0*/ __Vdly__mul_log2e_0_vld_out;
    __Vdly__mul_log2e_0_vld_out = 0;
    CData/*0:0*/ __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v0;
    __VdlyVal__u_buffer_0__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_buffer_0__DOT__ram__v0;
    __VdlyDim0__u_buffer_0__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v0;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v1;
    __VdlyVal__u_buffer_0__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v1;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v2;
    __VdlyVal__u_buffer_0__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v3;
    __VdlyVal__u_buffer_0__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v4;
    __VdlyVal__u_buffer_0__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v5;
    __VdlyVal__u_buffer_0__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v6;
    __VdlyVal__u_buffer_0__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v7;
    __VdlyVal__u_buffer_0__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v8;
    __VdlyVal__u_buffer_0__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v9;
    __VdlyVal__u_buffer_0__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v10;
    __VdlyVal__u_buffer_0__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v11;
    __VdlyVal__u_buffer_0__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v12;
    __VdlyVal__u_buffer_0__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v13;
    __VdlyVal__u_buffer_0__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v14;
    __VdlyVal__u_buffer_0__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v15;
    __VdlyVal__u_buffer_0__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v16;
    __VdlyVal__u_buffer_0__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v17;
    __VdlyVal__u_buffer_0__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v18;
    __VdlyVal__u_buffer_0__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v19;
    __VdlyVal__u_buffer_0__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v20;
    __VdlyVal__u_buffer_0__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v21;
    __VdlyVal__u_buffer_0__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v22;
    __VdlyVal__u_buffer_0__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v23;
    __VdlyVal__u_buffer_0__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v24;
    __VdlyVal__u_buffer_0__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v25;
    __VdlyVal__u_buffer_0__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v26;
    __VdlyVal__u_buffer_0__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v27;
    __VdlyVal__u_buffer_0__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v28;
    __VdlyVal__u_buffer_0__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v29;
    __VdlyVal__u_buffer_0__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v30;
    __VdlyVal__u_buffer_0__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v31;
    __VdlyVal__u_buffer_0__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v32;
    __VdlyVal__u_buffer_0__DOT__ram__v32 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v33;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v0;
    __VdlyVal__u_buffer_1__DOT__ram__v0 = 0;
    CData/*5:0*/ __VdlyDim0__u_buffer_1__DOT__ram__v0;
    __VdlyDim0__u_buffer_1__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v0;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v1;
    __VdlyVal__u_buffer_1__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v1;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v2;
    __VdlyVal__u_buffer_1__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v3;
    __VdlyVal__u_buffer_1__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v4;
    __VdlyVal__u_buffer_1__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v5;
    __VdlyVal__u_buffer_1__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v6;
    __VdlyVal__u_buffer_1__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v7;
    __VdlyVal__u_buffer_1__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v8;
    __VdlyVal__u_buffer_1__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v9;
    __VdlyVal__u_buffer_1__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v10;
    __VdlyVal__u_buffer_1__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v11;
    __VdlyVal__u_buffer_1__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v12;
    __VdlyVal__u_buffer_1__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v13;
    __VdlyVal__u_buffer_1__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v14;
    __VdlyVal__u_buffer_1__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v15;
    __VdlyVal__u_buffer_1__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v16;
    __VdlyVal__u_buffer_1__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v17;
    __VdlyVal__u_buffer_1__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v18;
    __VdlyVal__u_buffer_1__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v19;
    __VdlyVal__u_buffer_1__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v20;
    __VdlyVal__u_buffer_1__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v21;
    __VdlyVal__u_buffer_1__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v22;
    __VdlyVal__u_buffer_1__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v23;
    __VdlyVal__u_buffer_1__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v24;
    __VdlyVal__u_buffer_1__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v25;
    __VdlyVal__u_buffer_1__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v26;
    __VdlyVal__u_buffer_1__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v27;
    __VdlyVal__u_buffer_1__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v28;
    __VdlyVal__u_buffer_1__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v29;
    __VdlyVal__u_buffer_1__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v30;
    __VdlyVal__u_buffer_1__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v31;
    __VdlyVal__u_buffer_1__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v32;
    __VdlyVal__u_buffer_1__DOT__ram__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v33;
    __VdlyVal__u_buffer_1__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v34;
    __VdlyVal__u_buffer_1__DOT__ram__v34 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v35;
    __VdlyVal__u_buffer_1__DOT__ram__v35 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v36;
    __VdlyVal__u_buffer_1__DOT__ram__v36 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v37;
    __VdlyVal__u_buffer_1__DOT__ram__v37 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v38;
    __VdlyVal__u_buffer_1__DOT__ram__v38 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v39;
    __VdlyVal__u_buffer_1__DOT__ram__v39 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v40;
    __VdlyVal__u_buffer_1__DOT__ram__v40 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v41;
    __VdlyVal__u_buffer_1__DOT__ram__v41 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v42;
    __VdlyVal__u_buffer_1__DOT__ram__v42 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v43;
    __VdlyVal__u_buffer_1__DOT__ram__v43 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v44;
    __VdlyVal__u_buffer_1__DOT__ram__v44 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v45;
    __VdlyVal__u_buffer_1__DOT__ram__v45 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v46;
    __VdlyVal__u_buffer_1__DOT__ram__v46 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v47;
    __VdlyVal__u_buffer_1__DOT__ram__v47 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v48;
    __VdlyVal__u_buffer_1__DOT__ram__v48 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v49;
    __VdlyVal__u_buffer_1__DOT__ram__v49 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v50;
    __VdlyVal__u_buffer_1__DOT__ram__v50 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v51;
    __VdlyVal__u_buffer_1__DOT__ram__v51 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v52;
    __VdlyVal__u_buffer_1__DOT__ram__v52 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v53;
    __VdlyVal__u_buffer_1__DOT__ram__v53 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v54;
    __VdlyVal__u_buffer_1__DOT__ram__v54 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v55;
    __VdlyVal__u_buffer_1__DOT__ram__v55 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v56;
    __VdlyVal__u_buffer_1__DOT__ram__v56 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v57;
    __VdlyVal__u_buffer_1__DOT__ram__v57 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v58;
    __VdlyVal__u_buffer_1__DOT__ram__v58 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v59;
    __VdlyVal__u_buffer_1__DOT__ram__v59 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v60;
    __VdlyVal__u_buffer_1__DOT__ram__v60 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v61;
    __VdlyVal__u_buffer_1__DOT__ram__v61 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v62;
    __VdlyVal__u_buffer_1__DOT__ram__v62 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v63;
    __VdlyVal__u_buffer_1__DOT__ram__v63 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v64;
    __VdlyVal__u_buffer_1__DOT__ram__v64 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v65;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v0;
    __VdlyVal__u_buffer_2__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_2__DOT__ram__v0;
    __VdlyDim0__u_buffer_2__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v0;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v1;
    __VdlyVal__u_buffer_2__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v1;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v2;
    __VdlyVal__u_buffer_2__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v3;
    __VdlyVal__u_buffer_2__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v4;
    __VdlyVal__u_buffer_2__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v5;
    __VdlyVal__u_buffer_2__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v6;
    __VdlyVal__u_buffer_2__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v7;
    __VdlyVal__u_buffer_2__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v8;
    __VdlyVal__u_buffer_2__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v9;
    __VdlyVal__u_buffer_2__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v10;
    __VdlyVal__u_buffer_2__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v11;
    __VdlyVal__u_buffer_2__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v12;
    __VdlyVal__u_buffer_2__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v13;
    __VdlyVal__u_buffer_2__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v14;
    __VdlyVal__u_buffer_2__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v15;
    __VdlyVal__u_buffer_2__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v16;
    __VdlyVal__u_buffer_2__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v17;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v0;
    __VdlyVal__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_sign__DOT__ram__v0;
    __VdlyDim0__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v0;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v1;
    __VdlyVal__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v1;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v2;
    __VdlyVal__u_buffer_sign__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v3;
    __VdlyVal__u_buffer_sign__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v4;
    __VdlyVal__u_buffer_sign__DOT__ram__v4 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v5;
    __VdlyVal__u_buffer_sign__DOT__ram__v5 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v6;
    __VdlyVal__u_buffer_sign__DOT__ram__v6 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v7;
    __VdlyVal__u_buffer_sign__DOT__ram__v7 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v8;
    __VdlyVal__u_buffer_sign__DOT__ram__v8 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v9;
    __VdlyVal__u_buffer_sign__DOT__ram__v9 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v10;
    __VdlyVal__u_buffer_sign__DOT__ram__v10 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v11;
    __VdlyVal__u_buffer_sign__DOT__ram__v11 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v12;
    __VdlyVal__u_buffer_sign__DOT__ram__v12 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v13;
    __VdlyVal__u_buffer_sign__DOT__ram__v13 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v14;
    __VdlyVal__u_buffer_sign__DOT__ram__v14 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v15;
    __VdlyVal__u_buffer_sign__DOT__ram__v15 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v16;
    __VdlyVal__u_buffer_sign__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v17;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0;
    // Body
    __Vdly__mul_log2e_0_vld_out = vlSelfRef.__PVT__mul_log2e_0_vld_out;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg4 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid;
    __Vdly__u_gelux__DOT__sign_A_reg2 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg3 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__vld_in_reg1 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg0 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__sign_A_reg3 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__addr_a_reg = vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_buffer_0__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt;
    __Vdly__mul_log2e_0_data_out = vlSelfRef.__PVT__mul_log2e_0_data_out;
    __Vdly__u_buffer_0__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid;
    vlSelfRef.__Vdly__x_mul_2_2_data_out = vlSelfRef.__PVT__x_mul_2_2_data_out;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0U;
    __Vdly__u_gelux__DOT__sign_A_reg4 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0U;
    __Vdly__mul_log2e_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                   && ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        ? (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        : (IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out)));
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             ? (IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)));
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                            && ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 ? (IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 : (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)));
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = ((IData)(vlSymsp->TOP.rst_ni) 
                                                 && ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      ? (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid)));
    vlSelfRef.__PVT__x_mul_2_2_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               ? (IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out)));
    __Vdly__u_gelux__DOT__sign_A_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)));
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2) {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & (0x3ffffU & (((0x3ffffU 
                                             & vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1) 
                                            * (0x7ffU 
                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__q_b) 
                                                  - (IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a)))) 
                                           >> 0xbU)));
        } else {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg);
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0) {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & ((((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select) 
                                                     << 5U) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.__PVT__u_gelux__DOT__lut_source 
                                                          >> 0x12U))) 
                                                   - (IData)(1U)));
        } else {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg));
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
        }
        if (((IData)(vlSelfRef.__PVT__input_vld_channel_0) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__full)))) {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)));
            __VdlyVal__u_buffer_0__DOT__ram__v0 = (
                                                   (0x40000000U 
                                                    & vlSymsp->TOP.ext_csr_i_0)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[1U]
                                                    : 0U);
            __VdlyDim0__u_buffer_0__DOT__ram__v0 = 
                (0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlySet__u_buffer_0__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlyVal__u_buffer_0__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0U];
            __VdlySet__u_buffer_0__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_0__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [1U];
            __VdlyVal__u_buffer_0__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [2U];
            __VdlyVal__u_buffer_0__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [3U];
            __VdlyVal__u_buffer_0__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [4U];
            __VdlyVal__u_buffer_0__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [5U];
            __VdlyVal__u_buffer_0__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [6U];
            __VdlyVal__u_buffer_0__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [7U];
            __VdlyVal__u_buffer_0__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [8U];
            __VdlyVal__u_buffer_0__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [9U];
            __VdlyVal__u_buffer_0__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_0__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_0__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_0__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_0__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_0__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_0__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_0__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_0__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_0__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_0__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_0__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_0__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_0__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_0__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_0__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_0__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_0__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_0__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_0__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_0__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_0__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1fU];
        }
        if (((IData)(vlSelfRef.__PVT__wr_en_sign_X) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__full)))) {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)));
            __VdlyVal__u_buffer_sign__DOT__ram__v0 
                = (1U & (((vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                           >> 0x1eU) | (0x7fU == (0x7fU 
                                                  & (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                     >> 0x17U)))) 
                         & (IData)((0U != (0x28000000U 
                                           & vlSymsp->TOP.ext_csr_i_0)))));
            __VdlyDim0__u_buffer_sign__DOT__ram__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlySet__u_buffer_sign__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlyVal__u_buffer_sign__DOT__ram__v1 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0U];
            __VdlySet__u_buffer_sign__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_sign__DOT__ram__v2 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [1U];
            __VdlyVal__u_buffer_sign__DOT__ram__v3 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [2U];
            __VdlyVal__u_buffer_sign__DOT__ram__v4 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [3U];
            __VdlyVal__u_buffer_sign__DOT__ram__v5 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [4U];
            __VdlyVal__u_buffer_sign__DOT__ram__v6 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [5U];
            __VdlyVal__u_buffer_sign__DOT__ram__v7 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [6U];
            __VdlyVal__u_buffer_sign__DOT__ram__v8 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [7U];
            __VdlyVal__u_buffer_sign__DOT__ram__v9 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [8U];
            __VdlyVal__u_buffer_sign__DOT__ram__v10 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [9U];
            __VdlyVal__u_buffer_sign__DOT__ram__v11 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_sign__DOT__ram__v12 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_sign__DOT__ram__v13 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_sign__DOT__ram__v14 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_sign__DOT__ram__v15 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_sign__DOT__ram__v16 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xfU];
        }
        __Vdly__u_buffer_1__DOT__rd_cnt = (0x7fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt)));
        if (((IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__full)))) {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)));
            __VdlyVal__u_buffer_1__DOT__ram__v0 = vlSelfRef.__PVT__mul_log2e_0_data_out;
            __VdlyDim0__u_buffer_1__DOT__ram__v0 = 
                (0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlySet__u_buffer_1__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlyVal__u_buffer_1__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0U];
            __VdlySet__u_buffer_1__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_1__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [1U];
            __VdlyVal__u_buffer_1__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [2U];
            __VdlyVal__u_buffer_1__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [3U];
            __VdlyVal__u_buffer_1__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [4U];
            __VdlyVal__u_buffer_1__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [5U];
            __VdlyVal__u_buffer_1__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [6U];
            __VdlyVal__u_buffer_1__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [7U];
            __VdlyVal__u_buffer_1__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [8U];
            __VdlyVal__u_buffer_1__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [9U];
            __VdlyVal__u_buffer_1__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_1__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_1__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_1__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_1__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_1__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_1__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_1__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_1__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_1__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_1__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_1__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_1__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_1__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_1__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_1__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_1__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_1__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_1__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_1__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_1__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_1__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1fU];
            __VdlyVal__u_buffer_1__DOT__ram__v33 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x20U];
            __VdlyVal__u_buffer_1__DOT__ram__v34 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x21U];
            __VdlyVal__u_buffer_1__DOT__ram__v35 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x22U];
            __VdlyVal__u_buffer_1__DOT__ram__v36 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x23U];
            __VdlyVal__u_buffer_1__DOT__ram__v37 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x24U];
            __VdlyVal__u_buffer_1__DOT__ram__v38 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x25U];
            __VdlyVal__u_buffer_1__DOT__ram__v39 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x26U];
            __VdlyVal__u_buffer_1__DOT__ram__v40 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x27U];
            __VdlyVal__u_buffer_1__DOT__ram__v41 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x28U];
            __VdlyVal__u_buffer_1__DOT__ram__v42 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x29U];
            __VdlyVal__u_buffer_1__DOT__ram__v43 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2aU];
            __VdlyVal__u_buffer_1__DOT__ram__v44 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2bU];
            __VdlyVal__u_buffer_1__DOT__ram__v45 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2cU];
            __VdlyVal__u_buffer_1__DOT__ram__v46 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2dU];
            __VdlyVal__u_buffer_1__DOT__ram__v47 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2eU];
            __VdlyVal__u_buffer_1__DOT__ram__v48 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2fU];
            __VdlyVal__u_buffer_1__DOT__ram__v49 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x30U];
            __VdlyVal__u_buffer_1__DOT__ram__v50 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x31U];
            __VdlyVal__u_buffer_1__DOT__ram__v51 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x32U];
            __VdlyVal__u_buffer_1__DOT__ram__v52 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x33U];
            __VdlyVal__u_buffer_1__DOT__ram__v53 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x34U];
            __VdlyVal__u_buffer_1__DOT__ram__v54 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x35U];
            __VdlyVal__u_buffer_1__DOT__ram__v55 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x36U];
            __VdlyVal__u_buffer_1__DOT__ram__v56 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x37U];
            __VdlyVal__u_buffer_1__DOT__ram__v57 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x38U];
            __VdlyVal__u_buffer_1__DOT__ram__v58 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x39U];
            __VdlyVal__u_buffer_1__DOT__ram__v59 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3aU];
            __VdlyVal__u_buffer_1__DOT__ram__v60 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3bU];
            __VdlyVal__u_buffer_1__DOT__ram__v61 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3cU];
            __VdlyVal__u_buffer_1__DOT__ram__v62 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3dU];
            __VdlyVal__u_buffer_1__DOT__ram__v63 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3eU];
            __VdlyVal__u_buffer_1__DOT__ram__v64 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3fU];
        }
        __Vdly__u_buffer_2__DOT__rd_cnt = (0x1fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt)));
        if (((IData)(vlSelf->__PVT__u_log2_X_0->__PVT__vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__full)))) {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)));
            __VdlyVal__u_buffer_2__DOT__ram__v0 = vlSelf->__PVT__u_log2_X_0->__PVT__Result;
            __VdlyDim0__u_buffer_2__DOT__ram__v0 = 
                (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlySet__u_buffer_2__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlyVal__u_buffer_2__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0U];
            __VdlySet__u_buffer_2__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_2__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [1U];
            __VdlyVal__u_buffer_2__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [2U];
            __VdlyVal__u_buffer_2__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [3U];
            __VdlyVal__u_buffer_2__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [4U];
            __VdlyVal__u_buffer_2__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [5U];
            __VdlyVal__u_buffer_2__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [6U];
            __VdlyVal__u_buffer_2__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [7U];
            __VdlyVal__u_buffer_2__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [8U];
            __VdlyVal__u_buffer_2__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [9U];
            __VdlyVal__u_buffer_2__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_2__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_2__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_2__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_2__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_2__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xfU];
        }
        __Vdly__mul_log2e_0_data_out = ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                         ? ((0x80000000U 
                                             & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A) 
                                            | ((0x7f800000U 
                                                & (((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                     ? 
                                                    (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                     >> 0x17U)
                                                     : 
                                                    ((vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                         >> 0x18U)))) 
                                                   << 0x17U)) 
                                               | ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)
                                                       ? 
                                                      (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                       >> 1U)
                                                       : vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)))))
                                         : vlSelfRef.__PVT__mul_log2e_0_data_out);
        if (vlSelfRef.__PVT__input_vld_channel_3) {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & ((0x80U & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                      - (IData)(0x7fU)))
                             ? ((IData)(0x7fU) - (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A))
                             : ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                - (IData)(0x7fU))));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & ((0x20000000U & vlSymsp->TOP.ext_csr_i_0)
                                 ? vlSymsp->TOP.ext_data_i_bits[1U]
                                 : 0U));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg);
        }
        __Vdly__u_buffer_0__DOT__rd_cnt = (0x3fU & 
                                           (((IData)(vlSymsp->TOP.FPU__DOT__pe_x_max_vld) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt)));
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                : vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A);
        __Vdly__u_buffer_sign__DOT__rd_cnt = (0x1fU 
                                              & (((IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out) 
                                                  & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__empty)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))
                                                  : (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt)));
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid 
            = ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                ? ((0x80000000U & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A) 
                   | ((0x7f800000U & (((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                                        ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                           >> 0x17U)
                                        : ((vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                            >> 0x17U) 
                                           + (1U & 
                                              (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                               >> 0x18U)))) 
                                      << 0x17U)) | 
                      ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                        ? 0U : (0x7fffffU & ((0x1000000U 
                                              & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)
                                              ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                 >> 1U)
                                              : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)))))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid);
        vlSelfRef.__Vdly__x_mul_2_2_data_out = ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                                 ? 
                                                ((0x80000000U 
                                                  & ((vlSymsp->TOP.ext_csr_i_0 
                                                      << 3U) 
                                                     & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A) 
                                                         + 
                                                         ((0xffU 
                                                           == (IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A))
                                                           ? 0U
                                                           : 1U)) 
                                                        << 0x17U)) 
                                                    | ((0x10000000U 
                                                        & vlSymsp->TOP.ext_csr_i_0)
                                                        ? 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)
                                                        : 0U)))
                                                 : vlSelfRef.__PVT__x_mul_2_2_data_out);
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                ? ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)
                    ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                    : (((~ (vlSelfRef.__PVT__mux_00_data_out 
                            >> 0x1fU)) << 0x1fU) | 
                       (0x7fffffffU & vlSelfRef.__PVT__mux_00_data_out)))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A);
        vlSelfRef.__PVT__x_mul_2_0_out = ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                           ? ((0x80000000U 
                                               & ((vlSymsp->TOP.ext_csr_i_0 
                                                   << 3U) 
                                                  & vlSymsp->TOP.ext_data_i_bits[1U])) 
                                              | ((0x7f800000U 
                                                  & (((IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A) 
                                                      + 
                                                      ((0xffU 
                                                        == (IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A))
                                                        ? 0U
                                                        : 1U)) 
                                                     << 0x17U)) 
                                                 | ((0x10000000U 
                                                     & vlSymsp->TOP.ext_csr_i_0)
                                                     ? 
                                                    (0x7fffffU 
                                                     & vlSymsp->TOP.ext_data_i_bits[1U])
                                                     : 0U)))
                                           : vlSelfRef.__PVT__x_mul_2_0_out);
        vlSelfRef.__PVT__gelu_lut_data_out = ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                               ? ((
                                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)
                                                      ? 0U
                                                      : 0x7fU)
                                                     : 
                                                    (0x60U 
                                                     | (0x1fU 
                                                        & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index))))) 
                                                   << 0x17U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                      ? 0U
                                                      : 
                                                     (0x7fffffU 
                                                      & ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          ^ vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33) 
                                                         << (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index)))))
                                               : vlSelfRef.__PVT__gelu_lut_data_out);
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3) {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = (((- (IData)((1U & (vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
                                      >> 0x11U)))) 
                    << 0x12U) | vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp);
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & ((IData)(0x400001U) 
                                + ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                    ? (~ ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                          << 7U)) : 
                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                    << 7U))));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = vlSelfRef.__PVT__u_gelux__DOT__op2_reg;
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & vlSelfRef.__PVT__u_gelux__DOT__op1_reg);
        }
        vlSelfRef.__PVT__u_gelux__DOT__q_a = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg];
        vlSelfRef.__PVT__relu_data_out = (((vlSymsp->TOP.ext_csr_i_0 
                                            & vlSymsp->TOP.ext_data_i_bits[1U]) 
                                           >> 0x1fU)
                                           ? 0U : (
                                                   (vlSymsp->TOP.ext_csr_i_0 
                                                    >> 0x1fU)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[1U]
                                                    : 0U));
        vlSelfRef.__PVT__buffer_2_out = vlSelfRef.__PVT__u_buffer_2__DOT__ram
            [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_0_out = vlSelfRef.__PVT__u_buffer_0__DOT__ram
            [(0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_1_out = vlSelfRef.__PVT__u_buffer_1__DOT__ram
            [(0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))];
        vlSelfRef.__PVT__u_gelux__DOT__q_b = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [(((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0) 
               << 5U) | (0x1fU & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
                                  >> 0x12U)))];
    } else {
        __Vdly__u_gelux__DOT__y_a_reg = 0U;
        __Vdly__u_gelux__DOT__mem_select_reg0 = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg0 = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 = 0U;
        __Vdly__u_gelux__DOT__addr_a_reg = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg1 = 0U;
        __Vdly__u_buffer_0__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_sign__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_1__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_1__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_2__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_2__DOT__wr_cnt = 0U;
        __Vdly__mul_log2e_0_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg = 0U;
        __Vdly__u_buffer_0__DOT__rd_cnt = 0U;
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A = 0U;
        __Vdly__u_buffer_sign__DOT__rd_cnt = 0U;
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = 0U;
        vlSelfRef.__Vdly__x_mul_2_2_data_out = 0U;
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A = 0U;
        vlSelfRef.__PVT__x_mul_2_0_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg = 0U;
        __VdlySet__u_buffer_2__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_sign__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_0__DOT__ram__v33 = 1U;
        vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg = 0U;
        __VdlySet__u_buffer_1__DOT__ram__v65 = 1U;
        vlSelfRef.__PVT__gelu_lut_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op2_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op1_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_a = 0U;
        vlSelfRef.__PVT__relu_data_out = 0U;
        vlSelfRef.__PVT__buffer_2_out = 0U;
        vlSelfRef.__PVT__buffer_0_out = 0U;
        vlSelfRef.__PVT__buffer_1_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_b = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                                       ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0)
                                                       : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)));
    vlSelfRef.__PVT__x_mul_2_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               ? (IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out)));
    __Vdly__u_gelux__DOT__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)));
    vlSelfRef.__PVT__gelu_lut_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              : (IData)(vlSelfRef.__PVT__gelu_lut_vld_out)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                             ? ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              ? (IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)));
    __Vdly__u_gelux__DOT__sign_A_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) 
                                                | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (0U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (1U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                   ? 
                                                  (1U 
                                                   & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                       - (IData)(0x7fU)) 
                                                      >> 7U))
                                                   : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg))));
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                          ? 
                                                         ((vlSymsp->TOP.ext_csr_i_0 
                                                           >> 0x1dU) 
                                                          & (vlSymsp->TOP.ext_data_i_bits[1U] 
                                                             >> 0x1fU))
                                                          : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0))));
    __Vdly__u_gelux__DOT__sign_A_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)));
    vlSelfRef.__PVT__buffer_sign_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                        && vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                                        [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))]);
    vlSelfRef.__PVT__relu_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                     && ((vlSymsp->TOP.ext_csr_i_0 
                                          >> 0x1fU) 
                                         & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2 = __Vdly__u_gelux__DOT__sign_A_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1 = __Vdly__u_gelux__DOT__vld_in_reg1;
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0 = __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0 = __Vdly__u_gelux__DOT__vld_in_reg0;
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt = __Vdly__u_buffer_2__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt = __Vdly__u_buffer_sign__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt = __Vdly__u_buffer_0__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2 = __Vdly__u_gelux__DOT__vld_in_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
        = __Vdly__u_gelux__DOT__lut_source_reg1;
    vlSelfRef.__PVT__mul_log2e_0_data_out = __Vdly__mul_log2e_0_data_out;
    vlSelfRef.__PVT__mul_log2e_0_vld_out = __Vdly__mul_log2e_0_vld_out;
    vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt = __Vdly__u_buffer_1__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4 = __Vdly__u_gelux__DOT__vld_in_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4 = __Vdly__u_gelux__DOT__sign_A_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__y_a_reg = __Vdly__u_gelux__DOT__y_a_reg;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3 = __Vdly__u_gelux__DOT__vld_in_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3 = __Vdly__u_gelux__DOT__sign_A_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg = __Vdly__u_gelux__DOT__addr_a_reg;
    vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt = __Vdly__u_buffer_sign__DOT__rd_cnt;
    if (__VdlySet__u_buffer_sign__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[__VdlyDim0__u_buffer_sign__DOT__ram__v0] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt = __Vdly__u_buffer_2__DOT__rd_cnt;
    if (__VdlySet__u_buffer_2__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[__VdlyDim0__u_buffer_2__DOT__ram__v0] 
            = __VdlyVal__u_buffer_2__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = __VdlyVal__u_buffer_2__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = __VdlyVal__u_buffer_2__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = __VdlyVal__u_buffer_2__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = __VdlyVal__u_buffer_2__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = __VdlyVal__u_buffer_2__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = __VdlyVal__u_buffer_2__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = __VdlyVal__u_buffer_2__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = __VdlyVal__u_buffer_2__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = __VdlyVal__u_buffer_2__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = __VdlyVal__u_buffer_2__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt = __Vdly__u_buffer_0__DOT__rd_cnt;
    if (__VdlySet__u_buffer_0__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[__VdlyDim0__u_buffer_0__DOT__ram__v0] 
            = __VdlyVal__u_buffer_0__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = __VdlyVal__u_buffer_0__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = __VdlyVal__u_buffer_0__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = __VdlyVal__u_buffer_0__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = __VdlyVal__u_buffer_0__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = __VdlyVal__u_buffer_0__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = __VdlyVal__u_buffer_0__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = __VdlyVal__u_buffer_0__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = __VdlyVal__u_buffer_0__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = __VdlyVal__u_buffer_0__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = __VdlyVal__u_buffer_0__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v32;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v33) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt = __Vdly__u_buffer_1__DOT__rd_cnt;
    if (__VdlySet__u_buffer_1__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[__VdlyDim0__u_buffer_1__DOT__ram__v0] 
            = __VdlyVal__u_buffer_1__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0U] = __VdlyVal__u_buffer_1__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[1U] = __VdlyVal__u_buffer_1__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[2U] = __VdlyVal__u_buffer_1__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[3U] = __VdlyVal__u_buffer_1__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[4U] = __VdlyVal__u_buffer_1__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[5U] = __VdlyVal__u_buffer_1__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[6U] = __VdlyVal__u_buffer_1__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[7U] = __VdlyVal__u_buffer_1__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[8U] = __VdlyVal__u_buffer_1__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[9U] = __VdlyVal__u_buffer_1__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v32;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x20U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v33;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x21U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v34;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x22U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v35;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x23U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v36;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x24U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v37;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x25U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v38;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x26U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v39;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x27U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v40;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x28U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v41;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x29U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v42;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v43;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v44;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v45;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v46;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v47;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v48;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x30U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v49;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x31U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v50;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x32U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v51;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x33U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v52;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x34U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v53;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x35U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v54;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x36U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v55;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x37U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v56;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x38U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v57;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x39U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v58;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v59;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v60;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v61;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v62;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v63;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v64;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v65) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__u_buffer_1__DOT__ram[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
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
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[1U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
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
    vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0 
        = __Vdly__u_gelux__DOT__mem_select_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
        = __Vdly__u_gelux__DOT__lut_source_reg0;
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

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0\n"); );
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
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_0__DOT__rd_cnt = 0;
    CData/*5:0*/ __Vdly__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_0__DOT__wr_cnt = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg0 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = 0;
    CData/*1:0*/ __Vdly__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = 0;
    CData/*6:0*/ __Vdly__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__addr_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__sign_A_reg2 = 0;
    IData/*23:0*/ __Vdly__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_gelux__DOT__lut_source_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__sign_A_reg3 = 0;
    SData/*15:0*/ __Vdly__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__y_a_reg = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__vld_in_reg3 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__sign_A_reg4;
    __Vdly__u_gelux__DOT__sign_A_reg4 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 = 0;
    CData/*0:0*/ __Vdly__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_gelux__DOT__vld_in_reg4 = 0;
    CData/*0:0*/ __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = 0;
    IData/*31:0*/ __Vdly__mul_log2e_0_data_out;
    __Vdly__mul_log2e_0_data_out = 0;
    CData/*0:0*/ __Vdly__mul_log2e_0_vld_out;
    __Vdly__mul_log2e_0_vld_out = 0;
    CData/*0:0*/ __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = 0;
    CData/*6:0*/ __Vdly__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_2__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = 0;
    CData/*4:0*/ __Vdly__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v0;
    __VdlyVal__u_buffer_0__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_buffer_0__DOT__ram__v0;
    __VdlyDim0__u_buffer_0__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v0;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v1;
    __VdlyVal__u_buffer_0__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v1;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v2;
    __VdlyVal__u_buffer_0__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v3;
    __VdlyVal__u_buffer_0__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v4;
    __VdlyVal__u_buffer_0__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v5;
    __VdlyVal__u_buffer_0__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v6;
    __VdlyVal__u_buffer_0__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v7;
    __VdlyVal__u_buffer_0__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v8;
    __VdlyVal__u_buffer_0__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v9;
    __VdlyVal__u_buffer_0__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v10;
    __VdlyVal__u_buffer_0__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v11;
    __VdlyVal__u_buffer_0__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v12;
    __VdlyVal__u_buffer_0__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v13;
    __VdlyVal__u_buffer_0__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v14;
    __VdlyVal__u_buffer_0__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v15;
    __VdlyVal__u_buffer_0__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v16;
    __VdlyVal__u_buffer_0__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v17;
    __VdlyVal__u_buffer_0__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v18;
    __VdlyVal__u_buffer_0__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v19;
    __VdlyVal__u_buffer_0__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v20;
    __VdlyVal__u_buffer_0__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v21;
    __VdlyVal__u_buffer_0__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v22;
    __VdlyVal__u_buffer_0__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v23;
    __VdlyVal__u_buffer_0__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v24;
    __VdlyVal__u_buffer_0__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v25;
    __VdlyVal__u_buffer_0__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v26;
    __VdlyVal__u_buffer_0__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v27;
    __VdlyVal__u_buffer_0__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v28;
    __VdlyVal__u_buffer_0__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v29;
    __VdlyVal__u_buffer_0__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v30;
    __VdlyVal__u_buffer_0__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v31;
    __VdlyVal__u_buffer_0__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_0__DOT__ram__v32;
    __VdlyVal__u_buffer_0__DOT__ram__v32 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_0__DOT__ram__v33;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v0;
    __VdlyVal__u_buffer_1__DOT__ram__v0 = 0;
    CData/*5:0*/ __VdlyDim0__u_buffer_1__DOT__ram__v0;
    __VdlyDim0__u_buffer_1__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v0;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v1;
    __VdlyVal__u_buffer_1__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v1;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v2;
    __VdlyVal__u_buffer_1__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v3;
    __VdlyVal__u_buffer_1__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v4;
    __VdlyVal__u_buffer_1__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v5;
    __VdlyVal__u_buffer_1__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v6;
    __VdlyVal__u_buffer_1__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v7;
    __VdlyVal__u_buffer_1__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v8;
    __VdlyVal__u_buffer_1__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v9;
    __VdlyVal__u_buffer_1__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v10;
    __VdlyVal__u_buffer_1__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v11;
    __VdlyVal__u_buffer_1__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v12;
    __VdlyVal__u_buffer_1__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v13;
    __VdlyVal__u_buffer_1__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v14;
    __VdlyVal__u_buffer_1__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v15;
    __VdlyVal__u_buffer_1__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v16;
    __VdlyVal__u_buffer_1__DOT__ram__v16 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v17;
    __VdlyVal__u_buffer_1__DOT__ram__v17 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v18;
    __VdlyVal__u_buffer_1__DOT__ram__v18 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v19;
    __VdlyVal__u_buffer_1__DOT__ram__v19 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v20;
    __VdlyVal__u_buffer_1__DOT__ram__v20 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v21;
    __VdlyVal__u_buffer_1__DOT__ram__v21 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v22;
    __VdlyVal__u_buffer_1__DOT__ram__v22 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v23;
    __VdlyVal__u_buffer_1__DOT__ram__v23 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v24;
    __VdlyVal__u_buffer_1__DOT__ram__v24 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v25;
    __VdlyVal__u_buffer_1__DOT__ram__v25 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v26;
    __VdlyVal__u_buffer_1__DOT__ram__v26 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v27;
    __VdlyVal__u_buffer_1__DOT__ram__v27 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v28;
    __VdlyVal__u_buffer_1__DOT__ram__v28 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v29;
    __VdlyVal__u_buffer_1__DOT__ram__v29 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v30;
    __VdlyVal__u_buffer_1__DOT__ram__v30 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v31;
    __VdlyVal__u_buffer_1__DOT__ram__v31 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v32;
    __VdlyVal__u_buffer_1__DOT__ram__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v33;
    __VdlyVal__u_buffer_1__DOT__ram__v33 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v34;
    __VdlyVal__u_buffer_1__DOT__ram__v34 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v35;
    __VdlyVal__u_buffer_1__DOT__ram__v35 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v36;
    __VdlyVal__u_buffer_1__DOT__ram__v36 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v37;
    __VdlyVal__u_buffer_1__DOT__ram__v37 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v38;
    __VdlyVal__u_buffer_1__DOT__ram__v38 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v39;
    __VdlyVal__u_buffer_1__DOT__ram__v39 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v40;
    __VdlyVal__u_buffer_1__DOT__ram__v40 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v41;
    __VdlyVal__u_buffer_1__DOT__ram__v41 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v42;
    __VdlyVal__u_buffer_1__DOT__ram__v42 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v43;
    __VdlyVal__u_buffer_1__DOT__ram__v43 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v44;
    __VdlyVal__u_buffer_1__DOT__ram__v44 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v45;
    __VdlyVal__u_buffer_1__DOT__ram__v45 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v46;
    __VdlyVal__u_buffer_1__DOT__ram__v46 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v47;
    __VdlyVal__u_buffer_1__DOT__ram__v47 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v48;
    __VdlyVal__u_buffer_1__DOT__ram__v48 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v49;
    __VdlyVal__u_buffer_1__DOT__ram__v49 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v50;
    __VdlyVal__u_buffer_1__DOT__ram__v50 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v51;
    __VdlyVal__u_buffer_1__DOT__ram__v51 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v52;
    __VdlyVal__u_buffer_1__DOT__ram__v52 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v53;
    __VdlyVal__u_buffer_1__DOT__ram__v53 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v54;
    __VdlyVal__u_buffer_1__DOT__ram__v54 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v55;
    __VdlyVal__u_buffer_1__DOT__ram__v55 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v56;
    __VdlyVal__u_buffer_1__DOT__ram__v56 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v57;
    __VdlyVal__u_buffer_1__DOT__ram__v57 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v58;
    __VdlyVal__u_buffer_1__DOT__ram__v58 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v59;
    __VdlyVal__u_buffer_1__DOT__ram__v59 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v60;
    __VdlyVal__u_buffer_1__DOT__ram__v60 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v61;
    __VdlyVal__u_buffer_1__DOT__ram__v61 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v62;
    __VdlyVal__u_buffer_1__DOT__ram__v62 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v63;
    __VdlyVal__u_buffer_1__DOT__ram__v63 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_1__DOT__ram__v64;
    __VdlyVal__u_buffer_1__DOT__ram__v64 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_1__DOT__ram__v65;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v0;
    __VdlyVal__u_buffer_2__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_2__DOT__ram__v0;
    __VdlyDim0__u_buffer_2__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v0;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v1;
    __VdlyVal__u_buffer_2__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v1;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v2;
    __VdlyVal__u_buffer_2__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v3;
    __VdlyVal__u_buffer_2__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v4;
    __VdlyVal__u_buffer_2__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v5;
    __VdlyVal__u_buffer_2__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v6;
    __VdlyVal__u_buffer_2__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v7;
    __VdlyVal__u_buffer_2__DOT__ram__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v8;
    __VdlyVal__u_buffer_2__DOT__ram__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v9;
    __VdlyVal__u_buffer_2__DOT__ram__v9 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v10;
    __VdlyVal__u_buffer_2__DOT__ram__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v11;
    __VdlyVal__u_buffer_2__DOT__ram__v11 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v12;
    __VdlyVal__u_buffer_2__DOT__ram__v12 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v13;
    __VdlyVal__u_buffer_2__DOT__ram__v13 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v14;
    __VdlyVal__u_buffer_2__DOT__ram__v14 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v15;
    __VdlyVal__u_buffer_2__DOT__ram__v15 = 0;
    IData/*31:0*/ __VdlyVal__u_buffer_2__DOT__ram__v16;
    __VdlyVal__u_buffer_2__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_2__DOT__ram__v17;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v0;
    __VdlyVal__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__u_buffer_sign__DOT__ram__v0;
    __VdlyDim0__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v0;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v1;
    __VdlyVal__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v1;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v2;
    __VdlyVal__u_buffer_sign__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v3;
    __VdlyVal__u_buffer_sign__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v4;
    __VdlyVal__u_buffer_sign__DOT__ram__v4 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v5;
    __VdlyVal__u_buffer_sign__DOT__ram__v5 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v6;
    __VdlyVal__u_buffer_sign__DOT__ram__v6 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v7;
    __VdlyVal__u_buffer_sign__DOT__ram__v7 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v8;
    __VdlyVal__u_buffer_sign__DOT__ram__v8 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v9;
    __VdlyVal__u_buffer_sign__DOT__ram__v9 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v10;
    __VdlyVal__u_buffer_sign__DOT__ram__v10 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v11;
    __VdlyVal__u_buffer_sign__DOT__ram__v11 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v12;
    __VdlyVal__u_buffer_sign__DOT__ram__v12 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v13;
    __VdlyVal__u_buffer_sign__DOT__ram__v13 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v14;
    __VdlyVal__u_buffer_sign__DOT__ram__v14 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v15;
    __VdlyVal__u_buffer_sign__DOT__ram__v15 = 0;
    CData/*0:0*/ __VdlyVal__u_buffer_sign__DOT__ram__v16;
    __VdlyVal__u_buffer_sign__DOT__ram__v16 = 0;
    CData/*0:0*/ __VdlySet__u_buffer_sign__DOT__ram__v17;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0;
    // Body
    __Vdly__mul_log2e_0_vld_out = vlSelfRef.__PVT__mul_log2e_0_vld_out;
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    __Vdly__u_gelux__DOT__vld_in_reg4 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4;
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid;
    __Vdly__u_gelux__DOT__sign_A_reg2 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1;
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg2 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2;
    __Vdly__u_gelux__DOT__vld_in_reg3 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3;
    __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
    __Vdly__u_gelux__DOT__vld_in_reg1 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1;
    __Vdly__u_gelux__DOT__vld_in_reg0 = vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0;
    __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
    __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
    __Vdly__u_gelux__DOT__sign_A_reg3 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3;
    __Vdly__u_gelux__DOT__addr_a_reg = vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg;
    __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
    __Vdly__u_buffer_0__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt;
    __Vdly__u_buffer_sign__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt;
    __Vdly__u_buffer_1__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt;
    __Vdly__u_buffer_1__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt;
    __Vdly__u_buffer_2__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt;
    __Vdly__u_buffer_2__DOT__wr_cnt = vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt;
    __Vdly__mul_log2e_0_data_out = vlSelfRef.__PVT__mul_log2e_0_data_out;
    __Vdly__u_buffer_0__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt;
    __Vdly__u_buffer_sign__DOT__rd_cnt = vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt;
    vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid;
    vlSelfRef.__Vdly__x_mul_2_2_data_out = vlSelfRef.__PVT__x_mul_2_2_data_out;
    __VdlySet__u_buffer_2__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_2__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_sign__DOT__ram__v17 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_0__DOT__ram__v33 = 0U;
    __Vdly__u_gelux__DOT__sign_A_reg4 = vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4;
    __VdlySet__u_buffer_1__DOT__ram__v0 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v1 = 0U;
    __VdlySet__u_buffer_1__DOT__ram__v65 = 0U;
    __Vdly__mul_log2e_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                   && ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        ? (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                        : (IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out)));
    __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             ? (IData)(vlSelfRef.__PVT__mux_03_vld_out)
                                             : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)));
    __Vdly__u_mul_log2e_0__DOT__vld_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                            && ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 ? (IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                                 : (IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)));
    vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid = ((IData)(vlSymsp->TOP.rst_ni) 
                                                 && ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      ? (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                                                      : (IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid)));
    vlSelfRef.__PVT__x_mul_2_2_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               ? (IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out)));
    __Vdly__u_gelux__DOT__sign_A_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)));
    __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)));
    __Vdly__u_gelux__DOT__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)));
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2) {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & (0x3ffffU & (((0x3ffffU 
                                             & vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1) 
                                            * (0x7ffU 
                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__q_b) 
                                                  - (IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a)))) 
                                           >> 0xbU)));
        } else {
            __Vdly__u_gelux__DOT__y_a_reg = vlSelfRef.__PVT__u_gelux__DOT__y_a_reg;
            vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg 
                = (0x3ffffU & vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg);
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0) {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & ((((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select) 
                                                     << 5U) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.__PVT__u_gelux__DOT__lut_source 
                                                          >> 0x12U))) 
                                                   - (IData)(1U)));
        } else {
            __Vdly__u_gelux__DOT__mem_select_reg0 = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg0 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
            __Vdly__u_gelux__DOT__addr_a_reg = (0x7fU 
                                                & (IData)(vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg));
        }
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1) {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0;
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 
                = vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1;
            __Vdly__u_gelux__DOT__lut_source_reg1 = vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1;
        }
        if (((IData)(vlSelfRef.__PVT__input_vld_channel_0) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__full)))) {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt)));
            __VdlyVal__u_buffer_0__DOT__ram__v0 = (
                                                   (0x40000000U 
                                                    & vlSymsp->TOP.ext_csr_i_0)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[2U]
                                                    : 0U);
            __VdlyDim0__u_buffer_0__DOT__ram__v0 = 
                (0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlySet__u_buffer_0__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_0__DOT__wr_cnt = (0x3fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt));
            __VdlyVal__u_buffer_0__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0U];
            __VdlySet__u_buffer_0__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_0__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [1U];
            __VdlyVal__u_buffer_0__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [2U];
            __VdlyVal__u_buffer_0__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [3U];
            __VdlyVal__u_buffer_0__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [4U];
            __VdlyVal__u_buffer_0__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [5U];
            __VdlyVal__u_buffer_0__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [6U];
            __VdlyVal__u_buffer_0__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [7U];
            __VdlyVal__u_buffer_0__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [8U];
            __VdlyVal__u_buffer_0__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [9U];
            __VdlyVal__u_buffer_0__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_0__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_0__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_0__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_0__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_0__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_0__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_0__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_0__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_0__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_0__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_0__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_0__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_0__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_0__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_0__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_0__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_0__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_0__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_0__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_0__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_0__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_0__DOT__ram
                [0x1fU];
        }
        if (((IData)(vlSelfRef.__PVT__wr_en_sign_X) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__full)))) {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt)));
            __VdlyVal__u_buffer_sign__DOT__ram__v0 
                = (1U & (((vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                           >> 0x1eU) | (0x7fU == (0x7fU 
                                                  & (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                     >> 0x17U)))) 
                         & (IData)((0U != (0x28000000U 
                                           & vlSymsp->TOP.ext_csr_i_0)))));
            __VdlyDim0__u_buffer_sign__DOT__ram__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlySet__u_buffer_sign__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_sign__DOT__wr_cnt = (0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt));
            __VdlyVal__u_buffer_sign__DOT__ram__v1 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0U];
            __VdlySet__u_buffer_sign__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_sign__DOT__ram__v2 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [1U];
            __VdlyVal__u_buffer_sign__DOT__ram__v3 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [2U];
            __VdlyVal__u_buffer_sign__DOT__ram__v4 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [3U];
            __VdlyVal__u_buffer_sign__DOT__ram__v5 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [4U];
            __VdlyVal__u_buffer_sign__DOT__ram__v6 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [5U];
            __VdlyVal__u_buffer_sign__DOT__ram__v7 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [6U];
            __VdlyVal__u_buffer_sign__DOT__ram__v8 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [7U];
            __VdlyVal__u_buffer_sign__DOT__ram__v9 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [8U];
            __VdlyVal__u_buffer_sign__DOT__ram__v10 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [9U];
            __VdlyVal__u_buffer_sign__DOT__ram__v11 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_sign__DOT__ram__v12 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_sign__DOT__ram__v13 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_sign__DOT__ram__v14 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_sign__DOT__ram__v15 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_sign__DOT__ram__v16 
                = vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                [0xfU];
        }
        __Vdly__u_buffer_1__DOT__rd_cnt = (0x7fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt)));
        if (((IData)(vlSelfRef.__PVT__mul_log2e_0_vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__full)))) {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt)));
            __VdlyVal__u_buffer_1__DOT__ram__v0 = vlSelfRef.__PVT__mul_log2e_0_data_out;
            __VdlyDim0__u_buffer_1__DOT__ram__v0 = 
                (0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlySet__u_buffer_1__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_1__DOT__wr_cnt = (0x7fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt));
            __VdlyVal__u_buffer_1__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0U];
            __VdlySet__u_buffer_1__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_1__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [1U];
            __VdlyVal__u_buffer_1__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [2U];
            __VdlyVal__u_buffer_1__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [3U];
            __VdlyVal__u_buffer_1__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [4U];
            __VdlyVal__u_buffer_1__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [5U];
            __VdlyVal__u_buffer_1__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [6U];
            __VdlyVal__u_buffer_1__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [7U];
            __VdlyVal__u_buffer_1__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [8U];
            __VdlyVal__u_buffer_1__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [9U];
            __VdlyVal__u_buffer_1__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_1__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_1__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_1__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_1__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_1__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0xfU];
            __VdlyVal__u_buffer_1__DOT__ram__v17 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x10U];
            __VdlyVal__u_buffer_1__DOT__ram__v18 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x11U];
            __VdlyVal__u_buffer_1__DOT__ram__v19 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x12U];
            __VdlyVal__u_buffer_1__DOT__ram__v20 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x13U];
            __VdlyVal__u_buffer_1__DOT__ram__v21 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x14U];
            __VdlyVal__u_buffer_1__DOT__ram__v22 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x15U];
            __VdlyVal__u_buffer_1__DOT__ram__v23 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x16U];
            __VdlyVal__u_buffer_1__DOT__ram__v24 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x17U];
            __VdlyVal__u_buffer_1__DOT__ram__v25 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x18U];
            __VdlyVal__u_buffer_1__DOT__ram__v26 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x19U];
            __VdlyVal__u_buffer_1__DOT__ram__v27 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1aU];
            __VdlyVal__u_buffer_1__DOT__ram__v28 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1bU];
            __VdlyVal__u_buffer_1__DOT__ram__v29 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1cU];
            __VdlyVal__u_buffer_1__DOT__ram__v30 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1dU];
            __VdlyVal__u_buffer_1__DOT__ram__v31 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1eU];
            __VdlyVal__u_buffer_1__DOT__ram__v32 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x1fU];
            __VdlyVal__u_buffer_1__DOT__ram__v33 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x20U];
            __VdlyVal__u_buffer_1__DOT__ram__v34 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x21U];
            __VdlyVal__u_buffer_1__DOT__ram__v35 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x22U];
            __VdlyVal__u_buffer_1__DOT__ram__v36 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x23U];
            __VdlyVal__u_buffer_1__DOT__ram__v37 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x24U];
            __VdlyVal__u_buffer_1__DOT__ram__v38 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x25U];
            __VdlyVal__u_buffer_1__DOT__ram__v39 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x26U];
            __VdlyVal__u_buffer_1__DOT__ram__v40 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x27U];
            __VdlyVal__u_buffer_1__DOT__ram__v41 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x28U];
            __VdlyVal__u_buffer_1__DOT__ram__v42 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x29U];
            __VdlyVal__u_buffer_1__DOT__ram__v43 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2aU];
            __VdlyVal__u_buffer_1__DOT__ram__v44 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2bU];
            __VdlyVal__u_buffer_1__DOT__ram__v45 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2cU];
            __VdlyVal__u_buffer_1__DOT__ram__v46 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2dU];
            __VdlyVal__u_buffer_1__DOT__ram__v47 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2eU];
            __VdlyVal__u_buffer_1__DOT__ram__v48 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x2fU];
            __VdlyVal__u_buffer_1__DOT__ram__v49 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x30U];
            __VdlyVal__u_buffer_1__DOT__ram__v50 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x31U];
            __VdlyVal__u_buffer_1__DOT__ram__v51 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x32U];
            __VdlyVal__u_buffer_1__DOT__ram__v52 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x33U];
            __VdlyVal__u_buffer_1__DOT__ram__v53 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x34U];
            __VdlyVal__u_buffer_1__DOT__ram__v54 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x35U];
            __VdlyVal__u_buffer_1__DOT__ram__v55 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x36U];
            __VdlyVal__u_buffer_1__DOT__ram__v56 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x37U];
            __VdlyVal__u_buffer_1__DOT__ram__v57 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x38U];
            __VdlyVal__u_buffer_1__DOT__ram__v58 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x39U];
            __VdlyVal__u_buffer_1__DOT__ram__v59 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3aU];
            __VdlyVal__u_buffer_1__DOT__ram__v60 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3bU];
            __VdlyVal__u_buffer_1__DOT__ram__v61 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3cU];
            __VdlyVal__u_buffer_1__DOT__ram__v62 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3dU];
            __VdlyVal__u_buffer_1__DOT__ram__v63 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3eU];
            __VdlyVal__u_buffer_1__DOT__ram__v64 = 
                vlSelfRef.__PVT__u_buffer_1__DOT__ram
                [0x3fU];
        }
        __Vdly__u_buffer_2__DOT__rd_cnt = (0x1fU & 
                                           (((IData)(vlSelfRef.__PVT__mux_07_vld_out) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt)));
        if (((IData)(vlSelf->__PVT__u_log2_X_0->__PVT__vld_out) 
             & (~ (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__full)))) {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt)));
            __VdlyVal__u_buffer_2__DOT__ram__v0 = vlSelf->__PVT__u_log2_X_0->__PVT__Result;
            __VdlyDim0__u_buffer_2__DOT__ram__v0 = 
                (0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlySet__u_buffer_2__DOT__ram__v0 = 1U;
        } else {
            __Vdly__u_buffer_2__DOT__wr_cnt = (0x1fU 
                                               & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt));
            __VdlyVal__u_buffer_2__DOT__ram__v1 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0U];
            __VdlySet__u_buffer_2__DOT__ram__v1 = 1U;
            __VdlyVal__u_buffer_2__DOT__ram__v2 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [1U];
            __VdlyVal__u_buffer_2__DOT__ram__v3 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [2U];
            __VdlyVal__u_buffer_2__DOT__ram__v4 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [3U];
            __VdlyVal__u_buffer_2__DOT__ram__v5 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [4U];
            __VdlyVal__u_buffer_2__DOT__ram__v6 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [5U];
            __VdlyVal__u_buffer_2__DOT__ram__v7 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [6U];
            __VdlyVal__u_buffer_2__DOT__ram__v8 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [7U];
            __VdlyVal__u_buffer_2__DOT__ram__v9 = vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [8U];
            __VdlyVal__u_buffer_2__DOT__ram__v10 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [9U];
            __VdlyVal__u_buffer_2__DOT__ram__v11 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xaU];
            __VdlyVal__u_buffer_2__DOT__ram__v12 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xbU];
            __VdlyVal__u_buffer_2__DOT__ram__v13 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xcU];
            __VdlyVal__u_buffer_2__DOT__ram__v14 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xdU];
            __VdlyVal__u_buffer_2__DOT__ram__v15 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xeU];
            __VdlyVal__u_buffer_2__DOT__ram__v16 = 
                vlSelfRef.__PVT__u_buffer_2__DOT__ram
                [0xfU];
        }
        __Vdly__mul_log2e_0_data_out = ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0)
                                         ? ((0x80000000U 
                                             & vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A) 
                                            | ((0x7f800000U 
                                                & (((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                     ? 
                                                    (vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                     >> 0x17U)
                                                     : 
                                                    ((vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
                                                      >> 0x17U) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                         >> 0x18U)))) 
                                                   << 0x17U)) 
                                               | ((IData)(vlSelfRef.__PVT__u_mul_log2e_0__DOT__flag)
                                                   ? 0U
                                                   : 
                                                  (0x7fffffU 
                                                   & ((0x1000000U 
                                                       & vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)
                                                       ? 
                                                      (vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop 
                                                       >> 1U)
                                                       : vlSelfRef.__PVT__u_mul_log2e_0__DOT__A_B_chop)))))
                                         : vlSelfRef.__PVT__mul_log2e_0_data_out);
        if (vlSelfRef.__PVT__input_vld_channel_3) {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & ((0x80U & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                      - (IData)(0x7fU)))
                             ? ((IData)(0x7fU) - (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A))
                             : ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                - (IData)(0x7fU))));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & ((0x20000000U & vlSymsp->TOP.ext_csr_i_0)
                                 ? vlSymsp->TOP.ext_data_i_bits[2U]
                                 : 0U));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg 
                = (0xffU & (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg));
            vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg 
                = (0x7fffffU & vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg);
        }
        __Vdly__u_buffer_0__DOT__rd_cnt = (0x3fU & 
                                           (((IData)(vlSymsp->TOP.FPU__DOT__pe_x_max_vld) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__empty)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))
                                             : (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt)));
        __Vdly__u_buffer_sign__DOT__rd_cnt = (0x1fU 
                                              & (((IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out) 
                                                  & (~ (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__empty)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))
                                                  : (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt)));
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                : vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A);
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid 
            = ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0)
                ? ((0x80000000U & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A) 
                   | ((0x7f800000U & (((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                                        ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                           >> 0x17U)
                                        : ((vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
                                            >> 0x17U) 
                                           + (1U & 
                                              (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                               >> 0x18U)))) 
                                      << 0x17U)) | 
                      ((IData)(vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag)
                        ? 0U : (0x7fffffU & ((0x1000000U 
                                              & vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)
                                              ? (vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop 
                                                 >> 1U)
                                              : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop)))))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid);
        vlSelfRef.__Vdly__x_mul_2_2_data_out = ((IData)(vlSelfRef.__PVT___2_X_vld_out_channel_2)
                                                 ? 
                                                ((0x80000000U 
                                                  & ((vlSymsp->TOP.ext_csr_i_0 
                                                      << 3U) 
                                                     & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A) 
                                                         + 
                                                         ((0xffU 
                                                           == (IData)(vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A))
                                                           ? 0U
                                                           : 1U)) 
                                                        << 0x17U)) 
                                                    | ((0x10000000U 
                                                        & vlSymsp->TOP.ext_csr_i_0)
                                                        ? 
                                                       (0x7fffffU 
                                                        & vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result)
                                                        : 0U)))
                                                 : vlSelfRef.__PVT__x_mul_2_2_data_out);
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A 
            = ((IData)(vlSelfRef.__PVT__mux_03_vld_out)
                ? ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)
                    ? vlSelfRef.__PVT__adder_0_data_out_channel_0
                    : (((~ (vlSelfRef.__PVT__mux_00_data_out 
                            >> 0x1fU)) << 0x1fU) | 
                       (0x7fffffffU & vlSelfRef.__PVT__mux_00_data_out)))
                : vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A);
        vlSelfRef.__PVT__x_mul_2_0_out = ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                           ? ((0x80000000U 
                                               & ((vlSymsp->TOP.ext_csr_i_0 
                                                   << 3U) 
                                                  & vlSymsp->TOP.ext_data_i_bits[2U])) 
                                              | ((0x7f800000U 
                                                  & (((IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A) 
                                                      + 
                                                      ((0xffU 
                                                        == (IData)(vlSelfRef.__PVT__u_x_mul_2_0__DOT__Expo_A))
                                                        ? 0U
                                                        : 1U)) 
                                                     << 0x17U)) 
                                                 | ((0x10000000U 
                                                     & vlSymsp->TOP.ext_csr_i_0)
                                                     ? 
                                                    (0x7fffffU 
                                                     & vlSymsp->TOP.ext_data_i_bits[2U])
                                                     : 0U)))
                                           : vlSelfRef.__PVT__x_mul_2_0_out);
        vlSelfRef.__PVT__gelu_lut_data_out = ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                               ? ((
                                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)
                                                      ? 0U
                                                      : 0x7fU)
                                                     : 
                                                    (0x60U 
                                                     | (0x1fU 
                                                        & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index))))) 
                                                   << 0x17U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2)
                                                      ? 0U
                                                      : 
                                                     (0x7fffffU 
                                                      & ((vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                          ^ vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33) 
                                                         << (IData)(vlSelfRef.__PVT__u_gelux__DOT__u_lza_log2__DOT__Index)))))
                                               : vlSelfRef.__PVT__gelu_lut_data_out);
        if (vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3) {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = (((- (IData)((1U & (vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
                                      >> 0x11U)))) 
                    << 0x12U) | vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp);
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & ((IData)(0x400001U) 
                                + ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                    ? (~ ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                          << 7U)) : 
                                   ((IData)(vlSelfRef.__PVT__u_gelux__DOT__y_a_reg) 
                                    << 7U))));
        } else {
            vlSelfRef.__PVT__u_gelux__DOT__op2_reg 
                = vlSelfRef.__PVT__u_gelux__DOT__op2_reg;
            vlSelfRef.__PVT__u_gelux__DOT__op1_reg 
                = (0xffffffU & vlSelfRef.__PVT__u_gelux__DOT__op1_reg);
        }
        vlSelfRef.__PVT__u_gelux__DOT__q_a = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg];
        vlSelfRef.__PVT__relu_data_out = (((vlSymsp->TOP.ext_csr_i_0 
                                            & vlSymsp->TOP.ext_data_i_bits[2U]) 
                                           >> 0x1fU)
                                           ? 0U : (
                                                   (vlSymsp->TOP.ext_csr_i_0 
                                                    >> 0x1fU)
                                                    ? 
                                                   vlSymsp->TOP.ext_data_i_bits[2U]
                                                    : 0U));
        vlSelfRef.__PVT__buffer_2_out = vlSelfRef.__PVT__u_buffer_2__DOT__ram
            [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_0_out = vlSelfRef.__PVT__u_buffer_0__DOT__ram
            [(0x1fU & (IData)(vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt))];
        vlSelfRef.__PVT__buffer_1_out = vlSelfRef.__PVT__u_buffer_1__DOT__ram
            [(0x3fU & (IData)(vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt))];
        vlSelfRef.__PVT__u_gelux__DOT__q_b = vlSelfRef.__PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram
            [(((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0) 
               << 5U) | (0x1fU & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
                                  >> 0x12U)))];
    } else {
        __Vdly__u_gelux__DOT__y_a_reg = 0U;
        __Vdly__u_gelux__DOT__mem_select_reg0 = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg0 = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1 = 0U;
        __Vdly__u_gelux__DOT__addr_a_reg = 0U;
        __Vdly__u_gelux__DOT__lut_source_reg1 = 0U;
        __Vdly__u_buffer_0__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_sign__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_1__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_1__DOT__wr_cnt = 0U;
        __Vdly__u_buffer_2__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_2__DOT__wr_cnt = 0U;
        __Vdly__mul_log2e_0_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__expo_real_abs_reg = 0U;
        __Vdly__u_buffer_0__DOT__rd_cnt = 0U;
        __Vdly__u_buffer_sign__DOT__rd_cnt = 0U;
        vlSelfRef.__PVT__u_mul_log2e_0__DOT__Oprand_A = 0U;
        vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid = 0U;
        vlSelfRef.__Vdly__x_mul_2_2_data_out = 0U;
        vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A = 0U;
        vlSelfRef.__PVT__x_mul_2_0_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__mant_A_reg = 0U;
        __VdlySet__u_buffer_2__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_sign__DOT__ram__v17 = 1U;
        __VdlySet__u_buffer_0__DOT__ram__v33 = 1U;
        vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg = 0U;
        __VdlySet__u_buffer_1__DOT__ram__v65 = 1U;
        vlSelfRef.__PVT__gelu_lut_data_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op2_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__op1_reg = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_a = 0U;
        vlSelfRef.__PVT__relu_data_out = 0U;
        vlSelfRef.__PVT__buffer_2_out = 0U;
        vlSelfRef.__PVT__buffer_0_out = 0U;
        vlSelfRef.__PVT__buffer_1_out = 0U;
        vlSelfRef.__PVT__u_gelux__DOT__q_b = 0U;
    }
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                                       ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0)
                                                       : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg1)));
    vlSelfRef.__PVT__x_mul_2_0_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                          && ((IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               ? (IData)(vlSelfRef.__PVT__input_vld_channel_1)
                                               : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out)));
    __Vdly__u_gelux__DOT__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)));
    vlSelfRef.__PVT__gelu_lut_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4)
                                              : (IData)(vlSelfRef.__PVT__gelu_lut_vld_out)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1)
                                             ? ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg0)));
    __Vdly__u_gelux__DOT__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              ? (IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)));
    __Vdly__u_gelux__DOT__sign_A_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg)
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg1)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0)
                                             ? ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg) 
                                                | (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_zero_or_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (0U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_zero_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                             ? (1U 
                                                == 
                                                VL_EXTENDS_II(32,8, 
                                                              (0xffU 
                                                               & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                                  - (IData)(0x7fU)))))
                                             : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_is_one_reg)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                   ? 
                                                  (1U 
                                                   & (((IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_A) 
                                                       - (IData)(0x7fU)) 
                                                      >> 7U))
                                                   : (IData)(vlSelfRef.__PVT__u_gelux__DOT__expo_smaller_than_zero_reg))));
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.__PVT__input_vld_channel_3)
                                                          ? 
                                                         ((vlSymsp->TOP.ext_csr_i_0 
                                                           >> 0x1dU) 
                                                          & (vlSymsp->TOP.ext_data_i_bits[2U] 
                                                             >> 0x1fU))
                                                          : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg0))));
    __Vdly__u_gelux__DOT__sign_A_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                         && ((IData)(vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3)
                                              ? (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                                              : (IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4)));
    vlSelfRef.__PVT__buffer_sign_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                        && vlSelfRef.__PVT__u_buffer_sign__DOT__ram
                                        [(0xfU & (IData)(vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt))]);
    vlSelfRef.__PVT__relu_vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                     && ((vlSymsp->TOP.ext_csr_i_0 
                                          >> 0x1fU) 
                                         & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE)));
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg1 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg1;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg2 = __Vdly__u_gelux__DOT__sign_A_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg1 = __Vdly__u_gelux__DOT__vld_in_reg1;
    vlSelfRef.__PVT__u_mul_log2e_0__DOT__vld_reg0 = __Vdly__u_mul_log2e_0__DOT__vld_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg0 = __Vdly__u_gelux__DOT__vld_in_reg0;
    vlSelfRef.__PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0 
        = __Vdly__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
    vlSelfRef.__PVT__u_buffer_2__DOT__wr_cnt = __Vdly__u_buffer_2__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_sign__DOT__wr_cnt = __Vdly__u_buffer_sign__DOT__wr_cnt;
    vlSelfRef.__PVT__u_buffer_0__DOT__wr_cnt = __Vdly__u_buffer_0__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg2 = __Vdly__u_gelux__DOT__vld_in_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
        = __Vdly__u_gelux__DOT__lut_source_reg1;
    vlSelfRef.__PVT__mul_log2e_0_data_out = __Vdly__mul_log2e_0_data_out;
    vlSelfRef.__PVT__mul_log2e_0_vld_out = __Vdly__mul_log2e_0_vld_out;
    vlSelfRef.__PVT__u_buffer_1__DOT__wr_cnt = __Vdly__u_buffer_1__DOT__wr_cnt;
    vlSelfRef.__PVT__u_gelux__DOT__expo_bigger_than_one_reg2 
        = __Vdly__u_gelux__DOT__expo_bigger_than_one_reg2;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg4 = __Vdly__u_gelux__DOT__vld_in_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg4 = __Vdly__u_gelux__DOT__sign_A_reg4;
    vlSelfRef.__PVT__u_gelux__DOT__y_a_reg = __Vdly__u_gelux__DOT__y_a_reg;
    vlSelfRef.__PVT__u_gelux__DOT__vld_in_reg3 = __Vdly__u_gelux__DOT__vld_in_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3 = __Vdly__u_gelux__DOT__sign_A_reg3;
    vlSelfRef.__PVT__u_gelux__DOT__addr_a_reg = __Vdly__u_gelux__DOT__addr_a_reg;
    vlSelfRef.__PVT__u_buffer_sign__DOT__rd_cnt = __Vdly__u_buffer_sign__DOT__rd_cnt;
    if (__VdlySet__u_buffer_sign__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[__VdlyDim0__u_buffer_sign__DOT__ram__v0] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_sign__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_sign__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_sign__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_2__DOT__rd_cnt = __Vdly__u_buffer_2__DOT__rd_cnt;
    if (__VdlySet__u_buffer_2__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[__VdlyDim0__u_buffer_2__DOT__ram__v0] 
            = __VdlyVal__u_buffer_2__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = __VdlyVal__u_buffer_2__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = __VdlyVal__u_buffer_2__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = __VdlyVal__u_buffer_2__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = __VdlyVal__u_buffer_2__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = __VdlyVal__u_buffer_2__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = __VdlyVal__u_buffer_2__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = __VdlyVal__u_buffer_2__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = __VdlyVal__u_buffer_2__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = __VdlyVal__u_buffer_2__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = __VdlyVal__u_buffer_2__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_2__DOT__ram__v16;
    }
    if (__VdlySet__u_buffer_2__DOT__ram__v17) {
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_2__DOT__ram[0xfU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_0__DOT__rd_cnt = __Vdly__u_buffer_0__DOT__rd_cnt;
    if (__VdlySet__u_buffer_0__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[__VdlyDim0__u_buffer_0__DOT__ram__v0] 
            = __VdlyVal__u_buffer_0__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = __VdlyVal__u_buffer_0__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = __VdlyVal__u_buffer_0__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = __VdlyVal__u_buffer_0__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = __VdlyVal__u_buffer_0__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = __VdlyVal__u_buffer_0__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = __VdlyVal__u_buffer_0__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = __VdlyVal__u_buffer_0__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = __VdlyVal__u_buffer_0__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = __VdlyVal__u_buffer_0__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = __VdlyVal__u_buffer_0__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_0__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_0__DOT__ram__v32;
    }
    if (__VdlySet__u_buffer_0__DOT__ram__v33) {
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[1U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[2U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[3U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[4U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[5U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[6U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[7U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[8U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[9U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xaU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xbU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xcU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xdU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xeU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0xfU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x10U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x11U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x12U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x13U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x14U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x15U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x16U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x17U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x18U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x19U] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1aU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1bU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1cU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1dU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1eU] = 0U;
        vlSelfRef.__PVT__u_buffer_0__DOT__ram[0x1fU] = 0U;
    }
    vlSelfRef.__PVT__u_buffer_1__DOT__rd_cnt = __Vdly__u_buffer_1__DOT__rd_cnt;
    if (__VdlySet__u_buffer_1__DOT__ram__v0) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[__VdlyDim0__u_buffer_1__DOT__ram__v0] 
            = __VdlyVal__u_buffer_1__DOT__ram__v0;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v1) {
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0U] = __VdlyVal__u_buffer_1__DOT__ram__v1;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[1U] = __VdlyVal__u_buffer_1__DOT__ram__v2;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[2U] = __VdlyVal__u_buffer_1__DOT__ram__v3;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[3U] = __VdlyVal__u_buffer_1__DOT__ram__v4;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[4U] = __VdlyVal__u_buffer_1__DOT__ram__v5;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[5U] = __VdlyVal__u_buffer_1__DOT__ram__v6;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[6U] = __VdlyVal__u_buffer_1__DOT__ram__v7;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[7U] = __VdlyVal__u_buffer_1__DOT__ram__v8;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[8U] = __VdlyVal__u_buffer_1__DOT__ram__v9;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[9U] = __VdlyVal__u_buffer_1__DOT__ram__v10;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xaU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v11;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xbU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v12;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xcU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v13;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xdU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v14;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xeU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v15;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0xfU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v16;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x10U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v17;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x11U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v18;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x12U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v19;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x13U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v20;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x14U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v21;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x15U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v22;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x16U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v23;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x17U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v24;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x18U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v25;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x19U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v26;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v27;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v28;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v29;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v30;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v31;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x1fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v32;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x20U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v33;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x21U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v34;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x22U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v35;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x23U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v36;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x24U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v37;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x25U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v38;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x26U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v39;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x27U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v40;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x28U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v41;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x29U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v42;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v43;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v44;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v45;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v46;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v47;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x2fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v48;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x30U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v49;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x31U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v50;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x32U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v51;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x33U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v52;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x34U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v53;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x35U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v54;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x36U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v55;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x37U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v56;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x38U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v57;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x39U] 
            = __VdlyVal__u_buffer_1__DOT__ram__v58;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3aU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v59;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3bU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v60;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3cU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v61;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3dU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v62;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3eU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v63;
        vlSelfRef.__PVT__u_buffer_1__DOT__ram[0x3fU] 
            = __VdlyVal__u_buffer_1__DOT__ram__v64;
    }
    if (__VdlySet__u_buffer_1__DOT__ram__v65) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__u_buffer_1__DOT__ram[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
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
    vlSelfRef.__PVT__mux_00_data_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                             ? vlSymsp->TOP.ext_data_i_bits[2U]
                                             : 0U) : vlSelfRef.__PVT__x_mul_2_0_out);
    vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg_temp 
        = (0x3ffffU & ((IData)(vlSelfRef.__PVT__u_gelux__DOT__sign_A_reg3)
                        ? (~ vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg)
                        : vlSelfRef.__PVT__u_gelux__DOT__mul_result_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__u_gelux__DOT__op1_reg) 
           & (~ vlSelfRef.__PVT__u_gelux__DOT__op2_reg));
    u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg & vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__u_gelux__DOT__op1_reg ^ vlSelfRef.__PVT__u_gelux__DOT__op2_reg);
    vlSelfRef.__PVT__u_gelux__DOT__y_a = ((0U == (((IData)(vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg1) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg1 
                                                        >> 0x12U))))
                                           ? 0U : (IData)(vlSelfRef.__PVT__u_gelux__DOT__q_a));
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
    vlSelfRef.__PVT__u_gelux__DOT__mem_select_reg0 
        = __Vdly__u_gelux__DOT__mem_select_reg0;
    vlSelfRef.__PVT__u_gelux__DOT__lut_source_reg0 
        = __Vdly__u_gelux__DOT__lut_source_reg0;
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
