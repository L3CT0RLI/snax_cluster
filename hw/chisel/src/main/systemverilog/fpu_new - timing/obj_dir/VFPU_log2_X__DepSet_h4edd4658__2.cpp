// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU_log2_X.h"

VL_INLINE_OPT void VFPU_log2_X___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_0__0(VFPU_log2_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFPU_log2_X___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __PVT__result_real;
    __PVT__result_real = 0;
    IData/*31:0*/ __PVT__u_lza_log2__DOT__zero_location;
    __PVT__u_lza_log2__DOT__zero_location = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_out_0;
    __PVT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_r1;
    __PVT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C01;
    __PVT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C02;
    __PVT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C03;
    __PVT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C04;
    __PVT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C05;
    __PVT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C06;
    __PVT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C07;
    __PVT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_111;
    __PVT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_102;
    __PVT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_112;
    __PVT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_103;
    __PVT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_113;
    __PVT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_104;
    __PVT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_114;
    __PVT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_105;
    __PVT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_115;
    __PVT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_106;
    __PVT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_116;
    __PVT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_107;
    __PVT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_117;
    __PVT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_211;
    __PVT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_202;
    __PVT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_212;
    __PVT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_203;
    __PVT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_213;
    __PVT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_204;
    __PVT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_214;
    __PVT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_205;
    __PVT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_215;
    __PVT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_206;
    __PVT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_216;
    __PVT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_207;
    __PVT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_217;
    __PVT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_311;
    __PVT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_302;
    __PVT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_312;
    __PVT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_303;
    __PVT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_313;
    __PVT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_304;
    __PVT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_314;
    __PVT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_305;
    __PVT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_315;
    __PVT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_306;
    __PVT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_316;
    __PVT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*25:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C;
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C = 0;
    IData/*25:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C;
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C = 0;
    IData/*31:0*/ u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0;
    u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_1;
    __VdfgRegularize_h965b715b_2_1 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_2;
    __VdfgRegularize_h965b715b_2_2 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_3;
    __VdfgRegularize_h965b715b_2_3 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_4;
    __VdfgRegularize_h965b715b_2_4 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_5;
    __VdfgRegularize_h965b715b_2_5 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_6;
    __VdfgRegularize_h965b715b_2_6 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_7;
    __VdfgRegularize_h965b715b_2_7 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_8;
    __VdfgRegularize_h965b715b_2_8 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg0;
    __Vdly__vld_in_reg0 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg1;
    __Vdly__vld_in_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg2;
    __Vdly__expo_A_reg2 = 0;
    IData/*23:0*/ __Vdly__M_plus_Ya_reg2;
    __Vdly__M_plus_Ya_reg2 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg2;
    __Vdly__vld_in_reg2 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg3;
    __Vdly__expo_A_reg3 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg3;
    __Vdly__vld_in_reg3 = 0;
    CData/*0:0*/ __Vdly__zero_flag_reg3;
    __Vdly__zero_flag_reg3 = 0;
    // Body
    __Vdly__vld_in_reg0 = vlSelfRef.__PVT__vld_in_reg0;
    __Vdly__vld_in_reg1 = vlSelfRef.__PVT__vld_in_reg1;
    __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg2;
    __Vdly__M_plus_Ya_reg2 = vlSelfRef.__PVT__M_plus_Ya_reg2;
    __Vdly__vld_in_reg2 = vlSelfRef.__PVT__vld_in_reg2;
    __Vdly__vld_in_reg3 = vlSelfRef.__PVT__vld_in_reg3;
    __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg3;
    __Vdly__zero_flag_reg3 = vlSelfRef.__PVT__zero_flag_reg3;
    __Vdly__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_vld_channel_4)
                                ? (IData)(vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_vld_channel_4)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg0)));
    __Vdly__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg0)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg0)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg1)));
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelfRef.__PVT__vld_in_reg1) {
            __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg1;
            __Vdly__M_plus_Ya_reg2 = (0xffffffU & (vlSelfRef.__PVT__mant_A_reg1 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__y_a_reg1) 
                                                    << 7U)));
        } else {
            __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg2;
            __Vdly__M_plus_Ya_reg2 = (0xffffffU & vlSelfRef.__PVT__M_plus_Ya_reg2);
        }
        vlSelfRef.__PVT__Result = ((IData)(vlSelfRef.__PVT__vld_in_reg3)
                                    ? ((((IData)(vlSelfRef.__PVT__overflow)
                                          ? (IData)(vlSelfRef.__PVT__zero_flag_reg3)
                                          : ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                             >> 7U)) 
                                        << 0x1fU) | 
                                       ((((IData)(vlSelfRef.__PVT__overflow)
                                           ? 0xffU : 
                                          ((0U == vlSelfRef.__PVT__Adder_Result)
                                            ? 0U : 
                                           (0xffU & 
                                            ((0U != 
                                              (vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
                                               >> 0x18U))
                                              ? ((IData)(0x7fU) 
                                                 + (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index))
                                              : (0x60U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index)))))))) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.__PVT__overflow)
                                            ? 0U : 
                                           (0x7fffffU 
                                            & ((0U 
                                                != 
                                                (vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
                                                 >> 0x18U))
                                                ? (vlSelfRef.__PVT__Adder_Result 
                                                   >> (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index))
                                                : (vlSelfRef.__PVT__Adder_Result 
                                                   << (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index)))))))
                                    : vlSelfRef.__PVT__Result);
        if (vlSelfRef.__PVT__vld_in_reg2) {
            __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg2;
            vlSelfRef.__PVT__M_plus_Ya_reg3 = vlSelfRef.__PVT__M_plus_Ya_reg2;
            vlSelfRef.__PVT__expo_A_minus_127_reg3 
                = (0xffU & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                            - (IData)(0x7fU)));
            vlSelfRef.__PVT__Adder_op2_reg3 = (0x7f800000U 
                                               & (((0x80U 
                                                    & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                       - (IData)(0x7fU)))
                                                    ? 
                                                   ((IData)(0x7fU) 
                                                    - (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                    - (IData)(0x7fU))) 
                                                  << 0x17U));
            vlSelfRef.__PVT__Adder_op1_reg3 = ((0x80U 
                                                & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                   - (IData)(0x7fU)))
                                                ? (~ vlSelfRef.__PVT__Adder_op1_pre)
                                                : vlSelfRef.__PVT__Adder_op1_pre);
        } else {
            __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg3;
            vlSelfRef.__PVT__M_plus_Ya_reg3 = vlSelfRef.__PVT__M_plus_Ya_reg3;
            vlSelfRef.__PVT__expo_A_minus_127_reg3 
                = (0xffU & (IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3));
            vlSelfRef.__PVT__Adder_op2_reg3 = vlSelfRef.__PVT__Adder_op2_reg3;
            vlSelfRef.__PVT__Adder_op1_reg3 = vlSelfRef.__PVT__Adder_op1_reg3;
        }
        if (vlSelfRef.__PVT__vld_in_reg0) {
            vlSelfRef.__PVT__mant_A_reg1 = (0x7fffffU 
                                            & vlSelfRef.__PVT__Oprand_A_reg0);
            vlSelfRef.__PVT__expo_A_reg1 = (0xffU & 
                                            (vlSelfRef.__PVT__Oprand_A_reg0 
                                             >> 0x17U));
            vlSelfRef.__PVT__y_a_reg1 = vlSelfRef.__PVT__y_a;
        } else {
            vlSelfRef.__PVT__mant_A_reg1 = (0x7fffffU 
                                            & vlSelfRef.__PVT__mant_A_reg1);
            vlSelfRef.__PVT__expo_A_reg1 = (0xffU & (IData)(vlSelfRef.__PVT__expo_A_reg1));
            vlSelfRef.__PVT__y_a_reg1 = vlSelfRef.__PVT__y_a_reg1;
        }
        if (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_vld_channel_4) {
            vlSelfRef.__PVT__Oprand_A_reg0 = vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_channel_4;
            vlSelfRef.__PVT__n_b_reg0 = (0x1fU & (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_channel_4 
                                                  >> 0x12U));
        } else {
            vlSelfRef.__PVT__Oprand_A_reg0 = vlSelfRef.__PVT__Oprand_A_reg0;
            vlSelfRef.__PVT__n_b_reg0 = (0x1fU & (IData)(vlSelfRef.__PVT__n_b_reg0));
        }
        vlSelfRef.__PVT__mult_result = (0x7fffffffU 
                                        & ((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)
                                            ? ((IData)(2U) 
                                               + vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg)
                                            : ((0x3fffffffU 
                                                & (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2)) 
                                               + (0x3fffffffU 
                                                  & (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2)))));
        vlSelfRef.__PVT__q_b = vlSelfRef.__PVT__u_dual_port_ram_log__DOT__ram
            [(0x1fU & (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_channel_4 
                       >> 0x12U))];
        vlSelfRef.__PVT__q_a = vlSelfRef.__PVT__u_dual_port_ram_log__DOT__ram
            [(0x1fU & ((vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__input_channel_4 
                        >> 0x12U) - (IData)(1U)))];
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
            = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
            = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
            = (0x7fffffffU & ((~ (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg)) 
                              + (~ (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg))));
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
            = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
            = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
    } else {
        __Vdly__expo_A_reg2 = 0U;
        __Vdly__M_plus_Ya_reg2 = 0U;
        __Vdly__expo_A_reg3 = 0U;
        vlSelfRef.__PVT__M_plus_Ya_reg3 = 0U;
        vlSelfRef.__PVT__Result = 0U;
        vlSelfRef.__PVT__expo_A_minus_127_reg3 = 0U;
        vlSelfRef.__PVT__Adder_op2_reg3 = 0U;
        vlSelfRef.__PVT__Adder_op1_reg3 = 0U;
        vlSelfRef.__PVT__mant_A_reg1 = 0U;
        vlSelfRef.__PVT__expo_A_reg1 = 0U;
        vlSelfRef.__PVT__y_a_reg1 = 0U;
        vlSelfRef.__PVT__Oprand_A_reg0 = 0U;
        vlSelfRef.__PVT__n_b_reg0 = 0U;
        vlSelfRef.__PVT__mult_result = 0U;
        vlSelfRef.__PVT__q_b = 0U;
        vlSelfRef.__PVT__q_a = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = 0ULL;
    }
    vlSelfRef.__PVT__vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                && ((IData)(vlSelfRef.__PVT__vld_in_reg3)
                                     ? (IData)(vlSelfRef.__PVT__vld_in_reg4)
                                     : (IData)(vlSelfRef.__PVT__vld_out)));
    __Vdly__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg1)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg1)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg2)));
    __Vdly__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg2)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg3)));
    vlSelfRef.__PVT__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                                    && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                         ? (IData)(vlSelfRef.__PVT__vld_in_reg3)
                                         : (IData)(vlSelfRef.__PVT__vld_in_reg4)));
    vlSelfRef.__PVT__inf_flag_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                           ? (0xffU 
                                              == (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                           : (IData)(vlSelfRef.__PVT__inf_flag_reg3)));
    __Vdly__zero_flag_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                              && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                   ? (0U == (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                   : (IData)(vlSelfRef.__PVT__zero_flag_reg3)));
    vlSelfRef.__PVT__vld_in_reg1 = __Vdly__vld_in_reg1;
    vlSelfRef.__PVT__expo_A_reg2 = __Vdly__expo_A_reg2;
    vlSelfRef.__PVT__M_plus_Ya_reg2 = __Vdly__M_plus_Ya_reg2;
    vlSelfRef.__PVT__vld_in_reg3 = __Vdly__vld_in_reg3;
    vlSelfRef.__PVT__zero_flag_reg3 = __Vdly__zero_flag_reg3;
    vlSelfRef.__PVT__expo_A_reg3 = __Vdly__expo_A_reg3;
    vlSelfRef.__PVT__vld_in_reg2 = __Vdly__vld_in_reg2;
    vlSelfRef.__PVT__vld_in_reg0 = __Vdly__vld_in_reg0;
    vlSelfRef.__PVT__overflow = ((IData)(vlSelfRef.__PVT__inf_flag_reg3) 
                                 | (IData)(vlSelfRef.__PVT__zero_flag_reg3));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__Adder_op1_reg3) & (~ vlSelfRef.__PVT__Adder_op2_reg3));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__Adder_op1_reg3 & vlSelfRef.__PVT__Adder_op2_reg3);
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__Adder_op1_reg3 ^ vlSelfRef.__PVT__Adder_op2_reg3);
    __PVT__result_real = (0xffffffU & (((0xf00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__mult_result 
                                                           >> 0x1eU)))) 
                                            << 0x14U)) 
                                        | (0xfffffU 
                                           & (vlSelfRef.__PVT__mult_result 
                                              >> 0xbU))) 
                                       + vlSelfRef.__PVT__M_plus_Ya_reg3));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0));
    vlSelfRef.__PVT__y_a = ((0U == (IData)(vlSelfRef.__PVT__n_b_reg0))
                             ? 0U : (IData)(vlSelfRef.__PVT__q_a));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_lza_log2__DOT__C_302 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x19U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x19U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 0x18U))));
    __PVT__u_lza_log2__DOT__C_202 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x11U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x11U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 0x10U))));
    __PVT__u_lza_log2__DOT__C_311 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 0x18U));
    __PVT__u_lza_log2__DOT__C_211 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 0x10U));
    __PVT__u_lza_log2__DOT__C_102 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 9U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 9U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 8U))));
    __PVT__u_lza_log2__DOT__C_111 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 8U));
    __PVT__u_lza_log2__DOT__C01 = (1U & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                         | (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                            & ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                               >> 7U))));
    vlSelfRef.__PVT__Adder_op1_pre = (((- (IData)((1U 
                                                   & (__PVT__result_real 
                                                      >> 0x17U)))) 
                                       << 0x18U) | __PVT__result_real);
    __PVT__u_lza_log2__DOT__zero_location = ((0x80000000U 
                                              | (0x7fffffffU 
                                                 & (~ 
                                                    (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                      << 0x1eU) 
                                                     | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                          | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                         << 0x1dU) 
                                                        | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                             | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                            << 0x1cU) 
                                                           | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                   | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                      | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                               << 0x1bU) 
                                                              | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                   | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                      | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                            | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                                  << 0x1aU) 
                                                                 | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                      | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                                     << 0x19U) 
                                                                    | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                           << 0x17U) 
                                                                          | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                              << 0x16U) 
                                                                             | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                             & (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                 << 0x1fU) 
                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                    << 0x1eU) 
                                                   | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                       << 0x1dU) 
                                                      | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                          << 0x1cU) 
                                                         | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                             << 0x1bU) 
                                                            | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                << 0x1aU) 
                                                               | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                   << 0x19U) 
                                                                  | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                      << 0x18U) 
                                                                     | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                         << 0x17U) 
                                                                        | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                            << 0x16U) 
                                                                           | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                               << 0x15U) 
                                                                              | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                << 0x14U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                << 0x13U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                << 0x12U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                << 0x11U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_lza_log2__DOT__C_303 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1aU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1aU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_302))));
    __PVT__u_lza_log2__DOT__C_203 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x12U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x12U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_202))));
    __PVT__u_lza_log2__DOT__C_312 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x19U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x19U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_311))));
    __PVT__u_lza_log2__DOT__C_212 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x11U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x11U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_211))));
    __PVT__u_lza_log2__DOT__C_103 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xaU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xaU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_102))));
    __PVT__u_lza_log2__DOT__C_112 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 9U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 9U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_111))));
    __PVT__u_lza_log2__DOT__C02 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 1U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 1U) & (IData)(__PVT__u_lza_log2__DOT__C01))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                                                  >> 0xaU)));
    __PVT__u_lza_log2__DOT__C_304 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1bU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1bU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_303))));
    __PVT__u_lza_log2__DOT__C_204 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x13U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x13U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_203))));
    __PVT__u_lza_log2__DOT__C_313 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1aU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1aU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_312))));
    __PVT__u_lza_log2__DOT__C_213 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x12U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x12U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_212))));
    __PVT__u_lza_log2__DOT__C_104 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xbU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xbU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_103))));
    __PVT__u_lza_log2__DOT__C_113 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xaU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xaU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_112))));
    __PVT__u_lza_log2__DOT__C03 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 2U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 2U) & (IData)(__PVT__u_lza_log2__DOT__C02))));
    vlSelfRef.__PVT__Yb_minus_Ya_temp = (0xffffU & 
                                         ((IData)(vlSelfRef.__PVT__q_b) 
                                          - (IData)(vlSelfRef.__PVT__y_a)));
    __PVT__u_lza_log2__DOT__C_305 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1cU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1cU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_304))));
    __PVT__u_lza_log2__DOT__C_205 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x14U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x14U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_204))));
    __PVT__u_lza_log2__DOT__C_314 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1bU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1bU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_313))));
    __PVT__u_lza_log2__DOT__C_214 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x13U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x13U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_213))));
    __PVT__u_lza_log2__DOT__C_105 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xcU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xcU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_104))));
    __PVT__u_lza_log2__DOT__C_114 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xbU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xbU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_113))));
    __PVT__u_lza_log2__DOT__C04 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 3U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 3U) & (IData)(__PVT__u_lza_log2__DOT__C03))));
    u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0 
        = ((0x400U & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp))
            ? ((IData)(1U) + (~ ((0x800U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                                            << 1U)) 
                                 | (0x7ffU & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp)))))
            : ((0x800U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                          << 1U)) | (0x7ffU & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp))));
    __PVT__u_lza_log2__DOT__C_306 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1dU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1dU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_305))));
    __PVT__u_lza_log2__DOT__C_206 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x15U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x15U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_205))));
    __PVT__u_lza_log2__DOT__C_315 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1cU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1cU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_314))));
    __PVT__u_lza_log2__DOT__C_215 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x14U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x14U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_214))));
    __PVT__u_lza_log2__DOT__C_106 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xdU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xdU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_105))));
    __PVT__u_lza_log2__DOT__C_115 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xcU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xcU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_114))));
    __PVT__u_lza_log2__DOT__C05 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 4U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 4U) & (IData)(__PVT__u_lza_log2__DOT__C04))));
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
        = ((1U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
        = ((2U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 
        = ((4U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
        = ((0x40U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
        = ((0x80U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 
        = ((0x100U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
        = ((8U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
        = ((0x10U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 
        = ((0x20U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
        = ((0x200U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
        = ((0x400U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 
        = ((0x800U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    __PVT__u_lza_log2__DOT__C_207 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x16U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x16U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_206))));
    __PVT__u_lza_log2__DOT__C_316 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1dU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1dU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_315))));
    __PVT__u_lza_log2__DOT__C_216 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x15U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x15U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_215))));
    __PVT__u_lza_log2__DOT__C_107 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xeU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xeU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_106))));
    __PVT__u_lza_log2__DOT__C_116 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xdU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xdU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_115))));
    __PVT__u_lza_log2__DOT__C06 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 5U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 5U) & (IData)(__PVT__u_lza_log2__DOT__C05))));
    __VdfgRegularize_h965b715b_2_2 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_1 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_6 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_5 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_3 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_4 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_7 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_8 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    __PVT__u_lza_log2__DOT__C_217 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x16U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x16U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_216))));
    __PVT__u_lza_log2__DOT__C_117 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xeU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xeU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_116))));
    __PVT__u_lza_log2__DOT__C07 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 6U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 6U) & (IData)(__PVT__u_lza_log2__DOT__C06))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_2 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_1));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_2 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_1 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_6 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_5));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_6 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_5 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_4 ^ (
                                                   (__VdfgRegularize_h965b715b_2_2 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_h965b715b_2_1 
                                                    >> 2U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x13U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x14U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x13U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_3));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x12U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 3U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 4U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 5U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 6U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 7U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 8U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 9U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xaU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xbU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xcU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xdU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xeU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xfU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x10U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xfU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x11U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_8 ^ (
                                                   (__VdfgRegularize_h965b715b_2_6 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_h965b715b_2_5 
                                                    >> 2U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x13U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x14U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x13U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x12U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x11U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_7));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 3U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 4U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 5U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 6U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 7U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 8U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 9U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xaU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xbU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xcU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xdU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xeU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xfU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x10U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xfU)));
    __PVT__u_lza_log2__DOT__C_out_0 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                              >> 7U) 
                                             | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                 >> 7U) 
                                                & (IData)(__PVT__u_lza_log2__DOT__C07))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 4U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 3U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 5U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 4U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_h965b715b_2_1 >> 0x14U));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 6U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 5U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 7U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 8U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 9U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xaU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xbU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xcU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xdU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xeU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xfU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x10U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x11U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x12U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x13U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x12U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x14U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x13U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x2000000U & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x800000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x17U) & (__VdfgRegularize_h965b715b_2_3 
                                          << 4U))) 
              | ((0x400000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x16U) & (__VdfgRegularize_h965b715b_2_3 
                                             << 4U))) 
                 | ((0x200000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_h965b715b_2_1 
                                       >> 0x14U) : 
                                   (__VdfgRegularize_h965b715b_2_3 
                                    >> 0x11U)) << 0x15U)) 
                    | ((0x100000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                       ? (__VdfgRegularize_h965b715b_2_1 
                                          >> 0x13U)
                                       : (__VdfgRegularize_h965b715b_2_3 
                                          >> 0x10U)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_h965b715b_2_1 
                                                         >> 0x12U)
                                                         : 
                                                        (__VdfgRegularize_h965b715b_2_3 
                                                         >> 0xfU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_h965b715b_2_1 
                                                            >> 0x11U)
                                                            : 
                                                           (__VdfgRegularize_h965b715b_2_3 
                                                            >> 0xeU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_h965b715b_2_1 
                                                               >> 0x10U)
                                                               : 
                                                              (__VdfgRegularize_h965b715b_2_3 
                                                               >> 0xdU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_h965b715b_2_1 
                                                                  >> 0xfU)
                                                                  : 
                                                                 (__VdfgRegularize_h965b715b_2_3 
                                                                  >> 0xcU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_h965b715b_2_1 
                                                                     >> 0xeU)
                                                                     : 
                                                                    (__VdfgRegularize_h965b715b_2_3 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_h965b715b_2_1 
                                                                        >> 0xdU)
                                                                        : 
                                                                       (__VdfgRegularize_h965b715b_2_3 
                                                                        >> 0xaU)) 
                                                                      << 0xeU)) 
                                                                  | ((0x2000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (__VdfgRegularize_h965b715b_2_1 
                                                                           >> 0xcU)
                                                                           : 
                                                                          (__VdfgRegularize_h965b715b_2_3 
                                                                           >> 9U)) 
                                                                         << 0xdU)) 
                                                                     | ((0x1000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (__VdfgRegularize_h965b715b_2_1 
                                                                              >> 0xbU)
                                                                              : 
                                                                             (__VdfgRegularize_h965b715b_2_3 
                                                                              >> 8U)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 7U)) 
                                                                               << 0xbU)) 
                                                                           | ((0x400U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 6U)) 
                                                                                << 0xaU)) 
                                                                              | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 3U)
                                                                                 : __VdfgRegularize_h965b715b_2_3) 
                                                                                << 4U)) 
                                                                                | (8U 
                                                                                & ((__VdfgRegularize_h965b715b_2_4 
                                                                                << 3U) 
                                                                                & (__VdfgRegularize_h965b715b_2_1 
                                                                                << 1U))))))))))))))))))))))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_h965b715b_2_5 >> 0x14U));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x14U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x13U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 4U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 3U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 5U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 4U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 6U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 5U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 7U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 8U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 9U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xaU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xbU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xcU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xdU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xeU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xfU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x10U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x11U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x12U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x13U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x12U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x2000000U & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x800000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x17U) & (__VdfgRegularize_h965b715b_2_7 
                                          << 4U))) 
              | ((0x400000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x16U) & (__VdfgRegularize_h965b715b_2_7 
                                             << 4U))) 
                 | ((0x200000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_h965b715b_2_5 
                                       >> 0x14U) : 
                                   (__VdfgRegularize_h965b715b_2_7 
                                    >> 0x11U)) << 0x15U)) 
                    | ((0x100000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                       ? (__VdfgRegularize_h965b715b_2_5 
                                          >> 0x13U)
                                       : (__VdfgRegularize_h965b715b_2_7 
                                          >> 0x10U)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_h965b715b_2_5 
                                                         >> 0x12U)
                                                         : 
                                                        (__VdfgRegularize_h965b715b_2_7 
                                                         >> 0xfU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_h965b715b_2_5 
                                                            >> 0x11U)
                                                            : 
                                                           (__VdfgRegularize_h965b715b_2_7 
                                                            >> 0xeU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_h965b715b_2_5 
                                                               >> 0x10U)
                                                               : 
                                                              (__VdfgRegularize_h965b715b_2_7 
                                                               >> 0xdU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_h965b715b_2_5 
                                                                  >> 0xfU)
                                                                  : 
                                                                 (__VdfgRegularize_h965b715b_2_7 
                                                                  >> 0xcU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_h965b715b_2_5 
                                                                     >> 0xeU)
                                                                     : 
                                                                    (__VdfgRegularize_h965b715b_2_7 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_h965b715b_2_5 
                                                                        >> 0xdU)
                                                                        : 
                                                                       (__VdfgRegularize_h965b715b_2_7 
                                                                        >> 0xaU)) 
                                                                      << 0xeU)) 
                                                                  | ((0x2000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (__VdfgRegularize_h965b715b_2_5 
                                                                           >> 0xcU)
                                                                           : 
                                                                          (__VdfgRegularize_h965b715b_2_7 
                                                                           >> 9U)) 
                                                                         << 0xdU)) 
                                                                     | ((0x1000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (__VdfgRegularize_h965b715b_2_5 
                                                                              >> 0xbU)
                                                                              : 
                                                                             (__VdfgRegularize_h965b715b_2_7 
                                                                              >> 8U)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 7U)) 
                                                                               << 0xbU)) 
                                                                           | ((0x400U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 6U)) 
                                                                                << 0xaU)) 
                                                                              | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 3U)
                                                                                 : __VdfgRegularize_h965b715b_2_7) 
                                                                                << 4U)) 
                                                                                | (8U 
                                                                                & ((__VdfgRegularize_h965b715b_2_8 
                                                                                << 3U) 
                                                                                & (__VdfgRegularize_h965b715b_2_5 
                                                                                << 1U))))))))))))))))))))))));
    __PVT__u_lza_log2__DOT__C_r1 = (1U & ((IData)(__PVT__u_lza_log2__DOT__C_out_0)
                                           ? ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                               >> 0xfU) 
                                              | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                  >> 0xfU) 
                                                 & (IData)(__PVT__u_lza_log2__DOT__C_117)))
                                           : ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                               >> 0xfU) 
                                              | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                  >> 0xfU) 
                                                 & (IData)(__PVT__u_lza_log2__DOT__C_107)))));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x17U) ^ (__VdfgRegularize_h965b715b_2_3 
                               >> 0x14U)));
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
        = (0x3ffffffU & VL_SHIFTL_III(26,26,32, (((IData)(
                                                          ((__VdfgRegularize_h965b715b_2_3 
                                                            >> 0x14U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x17U))) 
                                                  << 0x18U) 
                                                 | ((0xff800000U 
                                                     & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x17U) 
                                                        & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffc00000U 
                                                        & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x16U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xffe00000U 
                                                           & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x15U) 
                                                              & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x100000U 
                                                              & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x13U)
                                                                   : 
                                                                  (__VdfgRegularize_h965b715b_2_2 
                                                                   >> 0x14U)) 
                                                                 << 0x14U)) 
                                                             | ((0x80000U 
                                                                 & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x12U)
                                                                      : 
                                                                     (__VdfgRegularize_h965b715b_2_2 
                                                                      >> 0x13U)) 
                                                                    << 0x13U)) 
                                                                | ((0x40000U 
                                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x11U)
                                                                         : 
                                                                        (__VdfgRegularize_h965b715b_2_2 
                                                                         >> 0x12U)) 
                                                                       << 0x12U)) 
                                                                   | ((0x20000U 
                                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x10U)
                                                                            : 
                                                                           (__VdfgRegularize_h965b715b_2_2 
                                                                            >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xfU)
                                                                               : 
                                                                              (__VdfgRegularize_h965b715b_2_2 
                                                                               >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                            | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 1U)) 
                                                                                << 1U))))))))))))))))))))))))), 1U));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x17U) ^ (__VdfgRegularize_h965b715b_2_7 
                               >> 0x14U)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
        = (0x3ffffffU & VL_SHIFTL_III(26,26,32, (((IData)(
                                                          ((__VdfgRegularize_h965b715b_2_7 
                                                            >> 0x14U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x17U))) 
                                                  << 0x18U) 
                                                 | ((0xff800000U 
                                                     & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x17U) 
                                                        & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffc00000U 
                                                        & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x16U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xffe00000U 
                                                           & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x15U) 
                                                              & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x100000U 
                                                              & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x13U)
                                                                   : 
                                                                  (__VdfgRegularize_h965b715b_2_6 
                                                                   >> 0x14U)) 
                                                                 << 0x14U)) 
                                                             | ((0x80000U 
                                                                 & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x12U)
                                                                      : 
                                                                     (__VdfgRegularize_h965b715b_2_6 
                                                                      >> 0x13U)) 
                                                                    << 0x13U)) 
                                                                | ((0x40000U 
                                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x11U)
                                                                         : 
                                                                        (__VdfgRegularize_h965b715b_2_6 
                                                                         >> 0x12U)) 
                                                                       << 0x12U)) 
                                                                   | ((0x20000U 
                                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x10U)
                                                                            : 
                                                                           (__VdfgRegularize_h965b715b_2_6 
                                                                            >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xfU)
                                                                               : 
                                                                              (__VdfgRegularize_h965b715b_2_6 
                                                                               >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                            | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 1U)) 
                                                                                << 1U))))))))))))))))))))))))), 1U));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_lza_log2__DOT__C_r1)
                     ? ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_lza_log2__DOT__C_217)))
                     : ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                                                          >> 7U))))))))))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_6 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1) 
                                                   ^ 
                                                   (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                    >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x14U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x15U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x16U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x17U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x18U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x18U) ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                               >> 0x19U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xfU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x13U)));
    vlSelfRef.__PVT__Adder_Result = (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                     ^ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33);
    vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_lza_log2__DOT__zero_location 
                   & u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_lza_log2__DOT__zero_location, 1U));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x12U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x13U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x14U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x15U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x16U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x17U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x18U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                     >> 0x18U) ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                  >> 0x19U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x100000000ULL & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | (IData)((IData)(((((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                   >> 0x19U)) << 0x1fU) 
                              | ((0x40000000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                  << 0x1eU) 
                                                 & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                    << 6U))) 
                                 | ((0x20000000U & 
                                     (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                       << 0x1dU) & 
                                      (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                       << 6U))) | (
                                                   (0x10000000U 
                                                    & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                        << 0x1cU) 
                                                       & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                          << 6U))) 
                                                   | ((0x8000000U 
                                                       & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                           << 0x1bU) 
                                                          & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                             << 6U))) 
                                                      | ((0x4000000U 
                                                          & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                              << 0x1aU) 
                                                             & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                << 6U))) 
                                                         | ((0x2000000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                  >> 0x13U)) 
                                                                << 0x19U)) 
                                                            | ((0x1000000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                     >> 0x18U)
                                                                     : 
                                                                    (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                     >> 0x12U)) 
                                                                   << 0x18U)) 
                                                               | ((0x800000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                        >> 0x17U)
                                                                        : 
                                                                       (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                        >> 0x11U)) 
                                                                      << 0x17U)) 
                                                                  | ((0x400000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                           >> 0x16U)
                                                                           : 
                                                                          (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                           >> 0x10U)) 
                                                                         << 0x16U)) 
                                                                     | ((0x200000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                              >> 0x15U)
                                                                              : 
                                                                             (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                              >> 0xfU)) 
                                                                            << 0x15U)) 
                                                                        | ((0x100000U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xeU)) 
                                                                               << 0x14U)) 
                                                                           | ((0x80000U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xdU)) 
                                                                                << 0x13U)) 
                                                                              | ((0x40000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 6U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 5U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 4U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 3U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 2U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 1U)) 
                                                                                << 7U)) 
                                                                                | (0x40U 
                                                                                & ((__VdfgRegularize_h965b715b_2_6 
                                                                                << 6U) 
                                                                                & u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__u_lza_log2__DOT__Index = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 0x16U
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0x15U
                                                       : 
                                                      ((0x10U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 0x13U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 0x12U
                                                          : 0x11U)))))))
                                                : ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xff00U 
                                                             & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                     ? 0x10U
                                                     : 
                                                    ((0x200U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 0xfU
                                                      : 
                                                     ((0x400U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0xeU
                                                       : 
                                                      ((0x800U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 0xdU
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 0xcU
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 0xbU
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 0xaU
                                                           : 9U)))))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xff0000U 
                                                              & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 8U
                                                      : 
                                                     ((0x20000U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 7U
                                                       : 
                                                      ((0x40000U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 6U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 4U
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                            ? 2U
                                                            : 1U)))))))
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              != 
                                                              (0xff000000U 
                                                               & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                      ? 
                                                     ((0x1000000U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 1U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 2U
                                                         : 
                                                        ((0x8000000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 3U
                                                          : 
                                                         ((0x10000000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 4U
                                                           : 
                                                          ((0x20000000U 
                                                            & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                            ? 5U
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                             ? 6U
                                                             : 7U)))))))
                                                      : 0U))));
    vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S 
        = (((QData)((IData)((1U & (IData)((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                           >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(((((IData)(
                                                   (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                    >> 0x1eU)) 
                                           ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & (((IData)(
                                                         (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                          >> 0x1dU)) 
                                                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & (((IData)(
                                                            (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                             >> 0x1cU)) 
                                                    ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & (((IData)(
                                                               (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                >> 0x1bU)) 
                                                       ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & (((IData)(
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x1aU)) 
                                                          ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & (((IData)(
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x19U)) 
                                                             ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & (((IData)(
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x18U)) 
                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & (((IData)(
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x17U)) 
                                                                   ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & (((IData)(
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0x16U)) 
                                                                      ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x15U)) 
                                                                         ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x14U)) 
                                                                            ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x13U)) 
                                                                               ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & __VdfgRegularize_h965b715b_2_2)))))))))))))))))))))))))))))))))));
    vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C 
        = (0x1ffffffffULL & VL_SHIFTL_QQI(33,33,32, (QData)((IData)(
                                                                    ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1eU))) 
                                                                      << 0x1fU) 
                                                                     | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1dU))) 
                                                                         << 0x1eU) 
                                                                        | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1cU))) 
                                                                            << 0x1dU) 
                                                                           | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1bU))) 
                                                                               << 0x1cU) 
                                                                              | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1aU))) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x19U))) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x18U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x17U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x16U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x15U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x14U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x13U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x12U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x11U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x10U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xfU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in)
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 1U)))))))))))))))))))))))))))))))))), 1U));
}

VL_INLINE_OPT void VFPU_log2_X___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_1__0(VFPU_log2_X* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VFPU_log2_X___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __PVT__result_real;
    __PVT__result_real = 0;
    IData/*31:0*/ __PVT__u_lza_log2__DOT__zero_location;
    __PVT__u_lza_log2__DOT__zero_location = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_out_0;
    __PVT__u_lza_log2__DOT__C_out_0 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_r1;
    __PVT__u_lza_log2__DOT__C_r1 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C01;
    __PVT__u_lza_log2__DOT__C01 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C02;
    __PVT__u_lza_log2__DOT__C02 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C03;
    __PVT__u_lza_log2__DOT__C03 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C04;
    __PVT__u_lza_log2__DOT__C04 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C05;
    __PVT__u_lza_log2__DOT__C05 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C06;
    __PVT__u_lza_log2__DOT__C06 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C07;
    __PVT__u_lza_log2__DOT__C07 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_111;
    __PVT__u_lza_log2__DOT__C_111 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_102;
    __PVT__u_lza_log2__DOT__C_102 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_112;
    __PVT__u_lza_log2__DOT__C_112 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_103;
    __PVT__u_lza_log2__DOT__C_103 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_113;
    __PVT__u_lza_log2__DOT__C_113 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_104;
    __PVT__u_lza_log2__DOT__C_104 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_114;
    __PVT__u_lza_log2__DOT__C_114 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_105;
    __PVT__u_lza_log2__DOT__C_105 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_115;
    __PVT__u_lza_log2__DOT__C_115 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_106;
    __PVT__u_lza_log2__DOT__C_106 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_116;
    __PVT__u_lza_log2__DOT__C_116 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_107;
    __PVT__u_lza_log2__DOT__C_107 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_117;
    __PVT__u_lza_log2__DOT__C_117 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_211;
    __PVT__u_lza_log2__DOT__C_211 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_202;
    __PVT__u_lza_log2__DOT__C_202 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_212;
    __PVT__u_lza_log2__DOT__C_212 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_203;
    __PVT__u_lza_log2__DOT__C_203 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_213;
    __PVT__u_lza_log2__DOT__C_213 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_204;
    __PVT__u_lza_log2__DOT__C_204 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_214;
    __PVT__u_lza_log2__DOT__C_214 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_205;
    __PVT__u_lza_log2__DOT__C_205 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_215;
    __PVT__u_lza_log2__DOT__C_215 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_206;
    __PVT__u_lza_log2__DOT__C_206 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_216;
    __PVT__u_lza_log2__DOT__C_216 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_207;
    __PVT__u_lza_log2__DOT__C_207 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_217;
    __PVT__u_lza_log2__DOT__C_217 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_311;
    __PVT__u_lza_log2__DOT__C_311 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_302;
    __PVT__u_lza_log2__DOT__C_302 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_312;
    __PVT__u_lza_log2__DOT__C_312 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_303;
    __PVT__u_lza_log2__DOT__C_303 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_313;
    __PVT__u_lza_log2__DOT__C_313 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_304;
    __PVT__u_lza_log2__DOT__C_304 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_314;
    __PVT__u_lza_log2__DOT__C_314 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_305;
    __PVT__u_lza_log2__DOT__C_305 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_315;
    __PVT__u_lza_log2__DOT__C_315 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_306;
    __PVT__u_lza_log2__DOT__C_306 = 0;
    CData/*0:0*/ __PVT__u_lza_log2__DOT__C_316;
    __PVT__u_lza_log2__DOT__C_316 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 = 0;
    IData/*31:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 = 0;
    CData/*0:0*/ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64;
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 = 0;
    IData/*20:0*/ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1;
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 = 0;
    IData/*25:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C;
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C = 0;
    IData/*25:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C;
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C = 0;
    IData/*31:0*/ u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0;
    u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3;
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0;
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_1;
    __VdfgRegularize_h965b715b_2_1 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_2;
    __VdfgRegularize_h965b715b_2_2 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_3;
    __VdfgRegularize_h965b715b_2_3 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_4;
    __VdfgRegularize_h965b715b_2_4 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_5;
    __VdfgRegularize_h965b715b_2_5 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_6;
    __VdfgRegularize_h965b715b_2_6 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_7;
    __VdfgRegularize_h965b715b_2_7 = 0;
    IData/*20:0*/ __VdfgRegularize_h965b715b_2_8;
    __VdfgRegularize_h965b715b_2_8 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg0;
    __Vdly__vld_in_reg0 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg1;
    __Vdly__vld_in_reg1 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg2;
    __Vdly__expo_A_reg2 = 0;
    IData/*23:0*/ __Vdly__M_plus_Ya_reg2;
    __Vdly__M_plus_Ya_reg2 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg2;
    __Vdly__vld_in_reg2 = 0;
    CData/*7:0*/ __Vdly__expo_A_reg3;
    __Vdly__expo_A_reg3 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg3;
    __Vdly__vld_in_reg3 = 0;
    CData/*0:0*/ __Vdly__zero_flag_reg3;
    __Vdly__zero_flag_reg3 = 0;
    CData/*0:0*/ __Vdly__vld_in_reg4;
    __Vdly__vld_in_reg4 = 0;
    // Body
    __Vdly__vld_in_reg1 = vlSelfRef.__PVT__vld_in_reg1;
    __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg2;
    __Vdly__vld_in_reg0 = vlSelfRef.__PVT__vld_in_reg0;
    __Vdly__M_plus_Ya_reg2 = vlSelfRef.__PVT__M_plus_Ya_reg2;
    __Vdly__vld_in_reg2 = vlSelfRef.__PVT__vld_in_reg2;
    __Vdly__vld_in_reg3 = vlSelfRef.__PVT__vld_in_reg3;
    __Vdly__vld_in_reg4 = vlSelfRef.__PVT__vld_in_reg4;
    __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg3;
    __Vdly__zero_flag_reg3 = vlSelfRef.__PVT__zero_flag_reg3;
    vlSelfRef.__Vdly__Result = vlSelfRef.__PVT__Result;
    __Vdly__vld_in_reg1 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg0)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg0)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg1)));
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelfRef.__PVT__vld_in_reg1) {
            __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg1;
            __Vdly__M_plus_Ya_reg2 = (0xffffffU & (vlSelfRef.__PVT__mant_A_reg1 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__y_a_reg1) 
                                                    << 7U)));
        } else {
            __Vdly__expo_A_reg2 = vlSelfRef.__PVT__expo_A_reg2;
            __Vdly__M_plus_Ya_reg2 = (0xffffffU & vlSelfRef.__PVT__M_plus_Ya_reg2);
        }
        vlSelfRef.__Vdly__Result = ((IData)(vlSelfRef.__PVT__vld_in_reg3)
                                     ? ((((IData)(vlSelfRef.__PVT__overflow)
                                           ? (IData)(vlSelfRef.__PVT__zero_flag_reg3)
                                           : ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                              >> 7U)) 
                                         << 0x1fU) 
                                        | ((((IData)(vlSelfRef.__PVT__overflow)
                                              ? 0xffU
                                              : ((0U 
                                                  == vlSelfRef.__PVT__Adder_Result)
                                                  ? 0U
                                                  : 
                                                 (0xffU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
                                                       >> 0x18U))
                                                      ? 
                                                     ((IData)(0x7fU) 
                                                      + (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index))
                                                      : 
                                                     (0x60U 
                                                      | (0x1fU 
                                                         & (~ (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index)))))))) 
                                            << 0x17U) 
                                           | ((IData)(vlSelfRef.__PVT__overflow)
                                               ? 0U
                                               : (0x7fffffU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
                                                       >> 0x18U))
                                                      ? 
                                                     (vlSelfRef.__PVT__Adder_Result 
                                                      >> (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index))
                                                      : 
                                                     (vlSelfRef.__PVT__Adder_Result 
                                                      << (IData)(vlSelfRef.__PVT__u_lza_log2__DOT__Index)))))))
                                     : vlSelfRef.__PVT__Result);
        if (vlSelfRef.__PVT__vld_in_reg2) {
            __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg2;
            vlSelfRef.__PVT__M_plus_Ya_reg3 = vlSelfRef.__PVT__M_plus_Ya_reg2;
            vlSelfRef.__PVT__expo_A_minus_127_reg3 
                = (0xffU & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                            - (IData)(0x7fU)));
            vlSelfRef.__PVT__Adder_op2_reg3 = (0x7f800000U 
                                               & (((0x80U 
                                                    & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                       - (IData)(0x7fU)))
                                                    ? 
                                                   ((IData)(0x7fU) 
                                                    - (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                    - (IData)(0x7fU))) 
                                                  << 0x17U));
            vlSelfRef.__PVT__Adder_op1_reg3 = ((0x80U 
                                                & ((IData)(vlSelfRef.__PVT__expo_A_reg3) 
                                                   - (IData)(0x7fU)))
                                                ? (~ vlSelfRef.__PVT__Adder_op1_pre)
                                                : vlSelfRef.__PVT__Adder_op1_pre);
        } else {
            __Vdly__expo_A_reg3 = vlSelfRef.__PVT__expo_A_reg3;
            vlSelfRef.__PVT__M_plus_Ya_reg3 = vlSelfRef.__PVT__M_plus_Ya_reg3;
            vlSelfRef.__PVT__expo_A_minus_127_reg3 
                = (0xffU & (IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3));
            vlSelfRef.__PVT__Adder_op2_reg3 = vlSelfRef.__PVT__Adder_op2_reg3;
            vlSelfRef.__PVT__Adder_op1_reg3 = vlSelfRef.__PVT__Adder_op1_reg3;
        }
        if (vlSelfRef.__PVT__vld_in_reg0) {
            vlSelfRef.__PVT__mant_A_reg1 = (0x7fffffU 
                                            & vlSelfRef.__PVT__Oprand_A_reg0);
            vlSelfRef.__PVT__expo_A_reg1 = (0xffU & 
                                            (vlSelfRef.__PVT__Oprand_A_reg0 
                                             >> 0x17U));
            vlSelfRef.__PVT__y_a_reg1 = vlSelfRef.__PVT__y_a;
        } else {
            vlSelfRef.__PVT__mant_A_reg1 = (0x7fffffU 
                                            & vlSelfRef.__PVT__mant_A_reg1);
            vlSelfRef.__PVT__expo_A_reg1 = (0xffU & (IData)(vlSelfRef.__PVT__expo_A_reg1));
            vlSelfRef.__PVT__y_a_reg1 = vlSelfRef.__PVT__y_a_reg1;
        }
        if (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_vld_out) {
            vlSelfRef.__PVT__Oprand_A_reg0 = vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_data_out;
            vlSelfRef.__PVT__n_b_reg0 = (0x1fU & (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_data_out 
                                                  >> 0x12U));
        } else {
            vlSelfRef.__PVT__Oprand_A_reg0 = vlSelfRef.__PVT__Oprand_A_reg0;
            vlSelfRef.__PVT__n_b_reg0 = (0x1fU & (IData)(vlSelfRef.__PVT__n_b_reg0));
        }
        vlSelfRef.__PVT__mult_result = (0x7fffffffU 
                                        & ((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1)
                                            ? ((IData)(2U) 
                                               + vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg)
                                            : ((0x3fffffffU 
                                                & (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2)) 
                                               + (0x3fffffffU 
                                                  & (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2)))));
        vlSelfRef.__PVT__q_b = vlSelfRef.__PVT__u_dual_port_ram_log__DOT__ram
            [(0x1fU & (vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_data_out 
                       >> 0x12U))];
        vlSelfRef.__PVT__q_a = vlSelfRef.__PVT__u_dual_port_ram_log__DOT__ram
            [(0x1fU & ((vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_data_out 
                        >> 0x12U) - (IData)(1U)))];
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 
            = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 
            = vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg 
            = (0x7fffffffU & ((~ (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg)) 
                              + (~ (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg))));
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg 
            = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg 
            = vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
    } else {
        __Vdly__expo_A_reg2 = 0U;
        __Vdly__M_plus_Ya_reg2 = 0U;
        __Vdly__expo_A_reg3 = 0U;
        vlSelfRef.__PVT__M_plus_Ya_reg3 = 0U;
        vlSelfRef.__Vdly__Result = 0U;
        vlSelfRef.__PVT__expo_A_minus_127_reg3 = 0U;
        vlSelfRef.__PVT__Adder_op2_reg3 = 0U;
        vlSelfRef.__PVT__Adder_op1_reg3 = 0U;
        vlSelfRef.__PVT__mant_A_reg1 = 0U;
        vlSelfRef.__PVT__expo_A_reg1 = 0U;
        vlSelfRef.__PVT__y_a_reg1 = 0U;
        vlSelfRef.__PVT__Oprand_A_reg0 = 0U;
        vlSelfRef.__PVT__n_b_reg0 = 0U;
        vlSelfRef.__PVT__mult_result = 0U;
        vlSelfRef.__PVT__q_b = 0U;
        vlSelfRef.__PVT__q_a = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2 = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2 = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg = 0U;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__S_2_reg = 0ULL;
        vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__C_2_reg = 0ULL;
    }
    __Vdly__vld_in_reg0 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_vld_out)
                                ? (IData)(vlSymsp->TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top.__PVT__mux_05_vld_out)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg0)));
    __Vdly__vld_in_reg2 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg1)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg1)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg2)));
    __Vdly__vld_in_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg2)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg3)));
    __Vdly__vld_in_reg4 = ((IData)(vlSymsp->TOP.rst_ni) 
                           && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                ? (IData)(vlSelfRef.__PVT__vld_in_reg3)
                                : (IData)(vlSelfRef.__PVT__vld_in_reg4)));
    vlSelfRef.__PVT__inf_flag_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                           ? (0xffU 
                                              == (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                           : (IData)(vlSelfRef.__PVT__inf_flag_reg3)));
    __Vdly__zero_flag_reg3 = ((IData)(vlSymsp->TOP.rst_ni) 
                              && ((IData)(vlSelfRef.__PVT__vld_in_reg2)
                                   ? (0U == (IData)(vlSelfRef.__PVT__expo_A_reg3))
                                   : (IData)(vlSelfRef.__PVT__zero_flag_reg3)));
    vlSelfRef.__PVT__vld_out = ((IData)(vlSymsp->TOP.rst_ni) 
                                && ((IData)(vlSelfRef.__PVT__vld_in_reg3)
                                     ? (IData)(vlSelfRef.__PVT__vld_in_reg4)
                                     : (IData)(vlSelfRef.__PVT__vld_out)));
    vlSelfRef.__PVT__vld_in_reg1 = __Vdly__vld_in_reg1;
    vlSelfRef.__PVT__expo_A_reg2 = __Vdly__expo_A_reg2;
    vlSelfRef.__PVT__M_plus_Ya_reg2 = __Vdly__M_plus_Ya_reg2;
    vlSelfRef.__PVT__vld_in_reg4 = __Vdly__vld_in_reg4;
    vlSelfRef.__PVT__vld_in_reg3 = __Vdly__vld_in_reg3;
    vlSelfRef.__PVT__zero_flag_reg3 = __Vdly__zero_flag_reg3;
    vlSelfRef.__PVT__expo_A_reg3 = __Vdly__expo_A_reg3;
    vlSelfRef.__PVT__vld_in_reg2 = __Vdly__vld_in_reg2;
    vlSelfRef.__PVT__vld_in_reg0 = __Vdly__vld_in_reg0;
    vlSelfRef.__PVT__overflow = ((IData)(vlSelfRef.__PVT__inf_flag_reg3) 
                                 | (IData)(vlSelfRef.__PVT__zero_flag_reg3));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
        = ((~ vlSelfRef.__PVT__Adder_op1_reg3) & (~ vlSelfRef.__PVT__Adder_op2_reg3));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
        = (vlSelfRef.__PVT__Adder_op1_reg3 & vlSelfRef.__PVT__Adder_op2_reg3);
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
        = (vlSelfRef.__PVT__Adder_op1_reg3 ^ vlSelfRef.__PVT__Adder_op2_reg3);
    __PVT__result_real = (0xffffffU & (((0xf00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__mult_result 
                                                           >> 0x1eU)))) 
                                            << 0x14U)) 
                                        | (0xfffffU 
                                           & (vlSelfRef.__PVT__mult_result 
                                              >> 0xbU))) 
                                       + vlSelfRef.__PVT__M_plus_Ya_reg3));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1 
        = ((IData)(vlSymsp->TOP.rst_ni) && (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0));
    vlSelfRef.__PVT__y_a = ((0U == (IData)(vlSelfRef.__PVT__n_b_reg0))
                             ? 0U : (IData)(vlSelfRef.__PVT__q_a));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1eU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1fU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1dU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1eU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1cU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1dU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1bU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1cU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x1aU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1bU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x19U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x1aU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x18U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x19U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x17U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x18U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x16U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x17U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x15U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x16U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x14U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x15U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x13U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x14U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x12U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x13U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x11U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x12U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0x10U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                   >> 0x11U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xfU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0x10U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xeU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xfU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xdU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xeU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xcU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xdU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xbU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xcU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 0xaU)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                  >> 0xbU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 9U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 0xaU)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 8U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 9U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 7U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 8U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 6U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 7U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 5U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 6U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 4U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 5U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 3U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 4U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 2U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 3U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35 
        = (1U & ((~ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2 
                     >> 1U)) ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                >> 2U)));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34 
        = (1U & ((~ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_2) 
                 ^ (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                    >> 1U)));
    __PVT__u_lza_log2__DOT__C_302 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x19U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x19U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 0x18U))));
    __PVT__u_lza_log2__DOT__C_202 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x11U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x11U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 0x10U))));
    __PVT__u_lza_log2__DOT__C_311 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 0x18U));
    __PVT__u_lza_log2__DOT__C_211 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 0x10U));
    __PVT__u_lza_log2__DOT__C_102 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 9U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 9U) 
                                              & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                 >> 8U))));
    __PVT__u_lza_log2__DOT__C_111 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            | u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0) 
                                           >> 8U));
    __PVT__u_lza_log2__DOT__C01 = (1U & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                         | (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                            & ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                               >> 7U))));
    vlSelfRef.__PVT__Adder_op1_pre = (((- (IData)((1U 
                                                   & (__PVT__result_real 
                                                      >> 0x17U)))) 
                                       << 0x18U) | __PVT__result_real);
    __PVT__u_lza_log2__DOT__zero_location = ((0x80000000U 
                                              | (0x7fffffffU 
                                                 & (~ 
                                                    (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                      << 0x1eU) 
                                                     | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                          | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63)) 
                                                         << 0x1dU) 
                                                        | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                             | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62))) 
                                                            << 0x1cU) 
                                                           | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                   | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                      | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61)))) 
                                                               << 0x1bU) 
                                                              | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                   | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                      | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                            | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60))))) 
                                                                  << 0x1aU) 
                                                                 | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                      | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59)))))) 
                                                                     << 0x19U) 
                                                                    | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                         | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58))))))) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                            | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57)))))))) 
                                                                           << 0x17U) 
                                                                          | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                               | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56))))))))) 
                                                                              << 0x16U) 
                                                                             | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55)))))))))) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54))))))))))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53)))))))))))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52))))))))))))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51)))))))))))))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50))))))))))))))) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49)))))))))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48))))))))))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47)))))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46))))))))))))))))))) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45)))))))))))))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44))))))))))))))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43)))))))))))))))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42))))))))))))))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41)))))))))))))))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40))))))))))))))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39)))))))))))))))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38))))))))))))))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37)))))))))))))))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36))))))))))))))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35)))))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                | ((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                | (IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                             & (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_64) 
                                                 << 0x1fU) 
                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_63) 
                                                    << 0x1eU) 
                                                   | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_62) 
                                                       << 0x1dU) 
                                                      | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_61) 
                                                          << 0x1cU) 
                                                         | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_60) 
                                                             << 0x1bU) 
                                                            | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_59) 
                                                                << 0x1aU) 
                                                               | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_58) 
                                                                   << 0x19U) 
                                                                  | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_57) 
                                                                      << 0x18U) 
                                                                     | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_56) 
                                                                         << 0x17U) 
                                                                        | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_55) 
                                                                            << 0x16U) 
                                                                           | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_54) 
                                                                               << 0x15U) 
                                                                              | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_53) 
                                                                                << 0x14U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_52) 
                                                                                << 0x13U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_51) 
                                                                                << 0x12U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_50) 
                                                                                << 0x11U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_49) 
                                                                                << 0x10U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_48) 
                                                                                << 0xfU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_47) 
                                                                                << 0xeU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_46) 
                                                                                << 0xdU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_45) 
                                                                                << 0xcU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_44) 
                                                                                << 0xbU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_43) 
                                                                                << 0xaU) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_42) 
                                                                                << 9U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_41) 
                                                                                << 8U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_40) 
                                                                                << 7U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_39) 
                                                                                << 6U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_38) 
                                                                                << 5U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_37) 
                                                                                << 4U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_36) 
                                                                                << 3U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_35) 
                                                                                << 2U) 
                                                                                | (((IData)(u_lza_log2__DOT____VdfgRegularize_h503deecb_0_34) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0)))))))))))))))))))))))))))))))));
    __PVT__u_lza_log2__DOT__C_303 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1aU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1aU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_302))));
    __PVT__u_lza_log2__DOT__C_203 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x12U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x12U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_202))));
    __PVT__u_lza_log2__DOT__C_312 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x19U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x19U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_311))));
    __PVT__u_lza_log2__DOT__C_212 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x11U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x11U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_211))));
    __PVT__u_lza_log2__DOT__C_103 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xaU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xaU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_102))));
    __PVT__u_lza_log2__DOT__C_112 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 9U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 9U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_111))));
    __PVT__u_lza_log2__DOT__C02 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 1U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 1U) & (IData)(__PVT__u_lza_log2__DOT__C01))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                                                  >> 0xaU)));
    __PVT__u_lza_log2__DOT__C_304 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1bU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1bU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_303))));
    __PVT__u_lza_log2__DOT__C_204 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x13U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x13U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_203))));
    __PVT__u_lza_log2__DOT__C_313 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1aU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1aU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_312))));
    __PVT__u_lza_log2__DOT__C_213 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x12U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x12U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_212))));
    __PVT__u_lza_log2__DOT__C_104 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xbU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xbU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_103))));
    __PVT__u_lza_log2__DOT__C_113 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xaU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xaU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_112))));
    __PVT__u_lza_log2__DOT__C03 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 2U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 2U) & (IData)(__PVT__u_lza_log2__DOT__C02))));
    vlSelfRef.__PVT__Yb_minus_Ya_temp = (0xffffU & 
                                         ((IData)(vlSelfRef.__PVT__q_b) 
                                          - (IData)(vlSelfRef.__PVT__y_a)));
    __PVT__u_lza_log2__DOT__C_305 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1cU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1cU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_304))));
    __PVT__u_lza_log2__DOT__C_205 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x14U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x14U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_204))));
    __PVT__u_lza_log2__DOT__C_314 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1bU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1bU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_313))));
    __PVT__u_lza_log2__DOT__C_214 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x13U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x13U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_213))));
    __PVT__u_lza_log2__DOT__C_105 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xcU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xcU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_104))));
    __PVT__u_lza_log2__DOT__C_114 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xbU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xbU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_113))));
    __PVT__u_lza_log2__DOT__C04 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 3U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 3U) & (IData)(__PVT__u_lza_log2__DOT__C03))));
    u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0 
        = ((0x400U & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp))
            ? ((IData)(1U) + (~ ((0x800U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                                            << 1U)) 
                                 | (0x7ffU & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp)))))
            : ((0x800U & ((IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp) 
                          << 1U)) | (0x7ffU & (IData)(vlSelfRef.__PVT__Yb_minus_Ya_temp))));
    __PVT__u_lza_log2__DOT__C_306 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1dU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1dU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_305))));
    __PVT__u_lza_log2__DOT__C_206 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x15U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x15U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_205))));
    __PVT__u_lza_log2__DOT__C_315 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1cU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1cU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_314))));
    __PVT__u_lza_log2__DOT__C_215 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x14U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x14U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_214))));
    __PVT__u_lza_log2__DOT__C_106 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xdU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xdU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_105))));
    __PVT__u_lza_log2__DOT__C_115 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xcU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xcU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_114))));
    __PVT__u_lza_log2__DOT__C05 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 4U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 4U) & (IData)(__PVT__u_lza_log2__DOT__C04))));
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
        = ((1U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
        = ((2U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3 
        = ((4U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
        = ((0x40U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
        = ((0x80U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3 
        = ((0x100U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
        = ((8U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
        = ((0x10U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3 
        = ((0x20U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
        = ((0x200U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x3ffffU & vlSelfRef.__PVT__Oprand_A_reg0)
            : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
        = ((0x400U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0x7fffeU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 1U)) : 0U);
    u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3 
        = ((0x800U & u_int_multiplier_csa_12__DOT____VdfgRegularize_h884a5876_0_0)
            ? (0xffffcU & (vlSelfRef.__PVT__Oprand_A_reg0 
                           << 2U)) : 0U);
    __PVT__u_lza_log2__DOT__C_207 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x16U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x16U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_206))));
    __PVT__u_lza_log2__DOT__C_316 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x1dU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x1dU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_315))));
    __PVT__u_lza_log2__DOT__C_216 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x15U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x15U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_215))));
    __PVT__u_lza_log2__DOT__C_107 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xeU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xeU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_106))));
    __PVT__u_lza_log2__DOT__C_116 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xdU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xdU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_115))));
    __PVT__u_lza_log2__DOT__C06 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 5U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 5U) & (IData)(__PVT__u_lza_log2__DOT__C05))));
    __VdfgRegularize_h965b715b_2_2 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_1 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__0__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_6 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_5 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__2__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_3 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_4 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__1__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_7 = ((u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                       & (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                          | u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3)) 
                                      | (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         & u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    __VdfgRegularize_h965b715b_2_8 = (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op1 
                                      ^ (u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op2 
                                         ^ u_int_multiplier_csa_12__DOT____Vcellinp__stage0__BRA__3__KET____DOT__u_csa_3_compress__op3));
    __PVT__u_lza_log2__DOT__C_217 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0x16U) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0x16U) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_216))));
    __PVT__u_lza_log2__DOT__C_117 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                            >> 0xeU) 
                                           | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                               >> 0xeU) 
                                              & (IData)(__PVT__u_lza_log2__DOT__C_116))));
    __PVT__u_lza_log2__DOT__C07 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                          >> 6U) | 
                                         ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                           >> 6U) & (IData)(__PVT__u_lza_log2__DOT__C06))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_2 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_1));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_2 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_1 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_6 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_5));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((__VdfgRegularize_h965b715b_2_6 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_5 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_4 ^ (
                                                   (__VdfgRegularize_h965b715b_2_2 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_h965b715b_2_1 
                                                    >> 2U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x13U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x14U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x13U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_3));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x12U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 3U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 4U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 5U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 6U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 7U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 8U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 9U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xaU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xbU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xcU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xdU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xeU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0xfU) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x10U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0xfU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_4 >> 0x11U) 
                 ^ (__VdfgRegularize_h965b715b_2_3 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_8 ^ (
                                                   (__VdfgRegularize_h965b715b_2_6 
                                                    >> 3U) 
                                                   ^ 
                                                   (__VdfgRegularize_h965b715b_2_5 
                                                    >> 2U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x13U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x14U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x13U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x12U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x11U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 1U) 
                 ^ __VdfgRegularize_h965b715b_2_7));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 2U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 3U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 4U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 5U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 6U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 7U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 8U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 9U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xaU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xbU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xcU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xdU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xeU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0xfU) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((__VdfgRegularize_h965b715b_2_8 >> 0x10U) 
                 ^ (__VdfgRegularize_h965b715b_2_7 
                    >> 0xfU)));
    __PVT__u_lza_log2__DOT__C_out_0 = (1U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                              >> 7U) 
                                             | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                 >> 7U) 
                                                & (IData)(__PVT__u_lza_log2__DOT__C07))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 4U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 3U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 5U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 4U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_h965b715b_2_1 >> 0x14U));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 6U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 5U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 7U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 8U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 9U) ^ (__VdfgRegularize_h965b715b_2_1 
                               >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xaU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xbU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xcU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xdU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xeU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0xfU) ^ (__VdfgRegularize_h965b715b_2_1 
                                 >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x10U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x11U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x12U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x13U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x12U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_2 
                     >> 0x14U) ^ (__VdfgRegularize_h965b715b_2_1 
                                  >> 0x13U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x2000000U & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x800000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x17U) & (__VdfgRegularize_h965b715b_2_3 
                                          << 4U))) 
              | ((0x400000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x16U) & (__VdfgRegularize_h965b715b_2_3 
                                             << 4U))) 
                 | ((0x200000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_h965b715b_2_1 
                                       >> 0x14U) : 
                                   (__VdfgRegularize_h965b715b_2_3 
                                    >> 0x11U)) << 0x15U)) 
                    | ((0x100000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                       ? (__VdfgRegularize_h965b715b_2_1 
                                          >> 0x13U)
                                       : (__VdfgRegularize_h965b715b_2_3 
                                          >> 0x10U)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_h965b715b_2_1 
                                                         >> 0x12U)
                                                         : 
                                                        (__VdfgRegularize_h965b715b_2_3 
                                                         >> 0xfU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_h965b715b_2_1 
                                                            >> 0x11U)
                                                            : 
                                                           (__VdfgRegularize_h965b715b_2_3 
                                                            >> 0xeU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_h965b715b_2_1 
                                                               >> 0x10U)
                                                               : 
                                                              (__VdfgRegularize_h965b715b_2_3 
                                                               >> 0xdU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_h965b715b_2_1 
                                                                  >> 0xfU)
                                                                  : 
                                                                 (__VdfgRegularize_h965b715b_2_3 
                                                                  >> 0xcU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_h965b715b_2_1 
                                                                     >> 0xeU)
                                                                     : 
                                                                    (__VdfgRegularize_h965b715b_2_3 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_h965b715b_2_1 
                                                                        >> 0xdU)
                                                                        : 
                                                                       (__VdfgRegularize_h965b715b_2_3 
                                                                        >> 0xaU)) 
                                                                      << 0xeU)) 
                                                                  | ((0x2000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (__VdfgRegularize_h965b715b_2_1 
                                                                           >> 0xcU)
                                                                           : 
                                                                          (__VdfgRegularize_h965b715b_2_3 
                                                                           >> 9U)) 
                                                                         << 0xdU)) 
                                                                     | ((0x1000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (__VdfgRegularize_h965b715b_2_1 
                                                                              >> 0xbU)
                                                                              : 
                                                                             (__VdfgRegularize_h965b715b_2_3 
                                                                              >> 8U)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 7U)) 
                                                                               << 0xbU)) 
                                                                           | ((0x400U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 6U)) 
                                                                                << 0xaU)) 
                                                                              | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_3 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_1 
                                                                                >> 3U)
                                                                                 : __VdfgRegularize_h965b715b_2_3) 
                                                                                << 4U)) 
                                                                                | (8U 
                                                                                & ((__VdfgRegularize_h965b715b_2_4 
                                                                                << 3U) 
                                                                                & (__VdfgRegularize_h965b715b_2_1 
                                                                                << 1U))))))))))))))))))))))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
           ^ (__VdfgRegularize_h965b715b_2_5 >> 0x14U));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x14U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x13U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 4U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 3U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 5U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 4U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 6U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 5U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 7U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 8U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 9U) ^ (__VdfgRegularize_h965b715b_2_5 
                               >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xaU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xbU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xcU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xdU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xeU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0xfU) ^ (__VdfgRegularize_h965b715b_2_5 
                                 >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x10U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x11U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x12U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((__VdfgRegularize_h965b715b_2_6 
                     >> 0x13U) ^ (__VdfgRegularize_h965b715b_2_5 
                                  >> 0x12U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x2000000U & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | ((0x800000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                             << 0x17U) & (__VdfgRegularize_h965b715b_2_7 
                                          << 4U))) 
              | ((0x400000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                << 0x16U) & (__VdfgRegularize_h965b715b_2_7 
                                             << 4U))) 
                 | ((0x200000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                    ? (__VdfgRegularize_h965b715b_2_5 
                                       >> 0x14U) : 
                                   (__VdfgRegularize_h965b715b_2_7 
                                    >> 0x11U)) << 0x15U)) 
                    | ((0x100000U & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                       ? (__VdfgRegularize_h965b715b_2_5 
                                          >> 0x13U)
                                       : (__VdfgRegularize_h965b715b_2_7 
                                          >> 0x10U)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                         ? 
                                                        (__VdfgRegularize_h965b715b_2_5 
                                                         >> 0x12U)
                                                         : 
                                                        (__VdfgRegularize_h965b715b_2_7 
                                                         >> 0xfU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                            ? 
                                                           (__VdfgRegularize_h965b715b_2_5 
                                                            >> 0x11U)
                                                            : 
                                                           (__VdfgRegularize_h965b715b_2_7 
                                                            >> 0xeU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                               ? 
                                                              (__VdfgRegularize_h965b715b_2_5 
                                                               >> 0x10U)
                                                               : 
                                                              (__VdfgRegularize_h965b715b_2_7 
                                                               >> 0xdU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (__VdfgRegularize_h965b715b_2_5 
                                                                  >> 0xfU)
                                                                  : 
                                                                 (__VdfgRegularize_h965b715b_2_7 
                                                                  >> 0xcU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (__VdfgRegularize_h965b715b_2_5 
                                                                     >> 0xeU)
                                                                     : 
                                                                    (__VdfgRegularize_h965b715b_2_7 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (__VdfgRegularize_h965b715b_2_5 
                                                                        >> 0xdU)
                                                                        : 
                                                                       (__VdfgRegularize_h965b715b_2_7 
                                                                        >> 0xaU)) 
                                                                      << 0xeU)) 
                                                                  | ((0x2000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (__VdfgRegularize_h965b715b_2_5 
                                                                           >> 0xcU)
                                                                           : 
                                                                          (__VdfgRegularize_h965b715b_2_7 
                                                                           >> 9U)) 
                                                                         << 0xdU)) 
                                                                     | ((0x1000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (__VdfgRegularize_h965b715b_2_5 
                                                                              >> 0xbU)
                                                                              : 
                                                                             (__VdfgRegularize_h965b715b_2_7 
                                                                              >> 8U)) 
                                                                            << 0xcU)) 
                                                                        | ((0x800U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 7U)) 
                                                                               << 0xbU)) 
                                                                           | ((0x400U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 6U)) 
                                                                                << 0xaU)) 
                                                                              | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 5U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 3U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 2U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_7 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (__VdfgRegularize_h965b715b_2_5 
                                                                                >> 3U)
                                                                                 : __VdfgRegularize_h965b715b_2_7) 
                                                                                << 4U)) 
                                                                                | (8U 
                                                                                & ((__VdfgRegularize_h965b715b_2_8 
                                                                                << 3U) 
                                                                                & (__VdfgRegularize_h965b715b_2_5 
                                                                                << 1U))))))))))))))))))))))));
    __PVT__u_lza_log2__DOT__C_r1 = (1U & ((IData)(__PVT__u_lza_log2__DOT__C_out_0)
                                           ? ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                               >> 0xfU) 
                                              | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                  >> 0xfU) 
                                                 & (IData)(__PVT__u_lza_log2__DOT__C_117)))
                                           : ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                               >> 0xfU) 
                                              | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                  >> 0xfU) 
                                                 & (IData)(__PVT__u_lza_log2__DOT__C_107)))));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x17U) ^ (__VdfgRegularize_h965b715b_2_3 
                               >> 0x14U)));
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
        = (0x3ffffffU & VL_SHIFTL_III(26,26,32, (((IData)(
                                                          ((__VdfgRegularize_h965b715b_2_3 
                                                            >> 0x14U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x17U))) 
                                                  << 0x18U) 
                                                 | ((0xff800000U 
                                                     & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x17U) 
                                                        & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffc00000U 
                                                        & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x16U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xffe00000U 
                                                           & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x15U) 
                                                              & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x100000U 
                                                              & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x13U)
                                                                   : 
                                                                  (__VdfgRegularize_h965b715b_2_2 
                                                                   >> 0x14U)) 
                                                                 << 0x14U)) 
                                                             | ((0x80000U 
                                                                 & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x12U)
                                                                      : 
                                                                     (__VdfgRegularize_h965b715b_2_2 
                                                                      >> 0x13U)) 
                                                                    << 0x13U)) 
                                                                | ((0x40000U 
                                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x11U)
                                                                         : 
                                                                        (__VdfgRegularize_h965b715b_2_2 
                                                                         >> 0x12U)) 
                                                                       << 0x12U)) 
                                                                   | ((0x20000U 
                                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x10U)
                                                                            : 
                                                                           (__VdfgRegularize_h965b715b_2_2 
                                                                            >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xfU)
                                                                               : 
                                                                              (__VdfgRegularize_h965b715b_2_2 
                                                                               >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                            | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_2 
                                                                                >> 1U)) 
                                                                                << 1U))))))))))))))))))))))))), 1U));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x13U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x14U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x15U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x16U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x17U) ^ (__VdfgRegularize_h965b715b_2_7 
                               >> 0x14U)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 1U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 2U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 3U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 4U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 5U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 6U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 7U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 8U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 9U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xaU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xbU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xcU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xdU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xeU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0xfU) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x10U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x11U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x12U) ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)));
    u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
        = (0x3ffffffU & VL_SHIFTL_III(26,26,32, (((IData)(
                                                          ((__VdfgRegularize_h965b715b_2_7 
                                                            >> 0x14U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              >> 0x17U))) 
                                                  << 0x18U) 
                                                 | ((0xff800000U 
                                                     & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                         << 0x17U) 
                                                        & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                           << 1U))) 
                                                    | ((0xffc00000U 
                                                        & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                            << 0x16U) 
                                                           & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                              << 1U))) 
                                                       | ((0xffe00000U 
                                                           & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2) 
                                                               << 0x15U) 
                                                              & (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                 << 1U))) 
                                                          | ((0x100000U 
                                                              & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                   ? 
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x13U)
                                                                   : 
                                                                  (__VdfgRegularize_h965b715b_2_6 
                                                                   >> 0x14U)) 
                                                                 << 0x14U)) 
                                                             | ((0x80000U 
                                                                 & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x12U)
                                                                      : 
                                                                     (__VdfgRegularize_h965b715b_2_6 
                                                                      >> 0x13U)) 
                                                                    << 0x13U)) 
                                                                | ((0x40000U 
                                                                    & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                         ? 
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x11U)
                                                                         : 
                                                                        (__VdfgRegularize_h965b715b_2_6 
                                                                         >> 0x12U)) 
                                                                       << 0x12U)) 
                                                                   | ((0x20000U 
                                                                       & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                            ? 
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x10U)
                                                                            : 
                                                                           (__VdfgRegularize_h965b715b_2_6 
                                                                            >> 0x11U)) 
                                                                          << 0x11U)) 
                                                                      | ((0x10000U 
                                                                          & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                               ? 
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0xfU)
                                                                               : 
                                                                              (__VdfgRegularize_h965b715b_2_6 
                                                                               >> 0x10U)) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                            | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in
                                                                                 : 
                                                                                (__VdfgRegularize_h965b715b_2_6 
                                                                                >> 1U)) 
                                                                                << 1U))))))))))))))))))))))))), 1U));
    u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33 
        = ((((1U & ((IData)(__PVT__u_lza_log2__DOT__C_r1)
                     ? ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_lza_log2__DOT__C_217)))
                     : ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                         >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                       >> 0x17U) & (IData)(__PVT__u_lza_log2__DOT__C_207)))))
              ? (1U | ((0x80U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                  >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                                >> 0x17U) 
                                               & ((IData)(__PVT__u_lza_log2__DOT__C_316) 
                                                  << 7U)))) 
                       | (((IData)(__PVT__u_lza_log2__DOT__C_316) 
                           << 6U) | (((IData)(__PVT__u_lza_log2__DOT__C_315) 
                                      << 5U) | (((IData)(__PVT__u_lza_log2__DOT__C_314) 
                                                 << 4U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_313) 
                                                    << 3U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_312) 
                                                       << 2U) 
                                                      | ((IData)(__PVT__u_lza_log2__DOT__C_311) 
                                                         << 1U))))))))
              : ((0x80U & ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                            >> 0x17U) | ((u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                          >> 0x17U) 
                                         & ((IData)(__PVT__u_lza_log2__DOT__C_306) 
                                            << 7U)))) 
                 | (((IData)(__PVT__u_lza_log2__DOT__C_306) 
                     << 6U) | (((IData)(__PVT__u_lza_log2__DOT__C_305) 
                                << 5U) | (((IData)(__PVT__u_lza_log2__DOT__C_304) 
                                           << 4U) | 
                                          (((IData)(__PVT__u_lza_log2__DOT__C_303) 
                                            << 3U) 
                                           | (((IData)(__PVT__u_lza_log2__DOT__C_302) 
                                               << 2U) 
                                              | (2U 
                                                 & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                    >> 0x17U))))))))) 
            << 0x18U) | ((((IData)(__PVT__u_lza_log2__DOT__C_r1)
                            ? (1U | (((IData)(__PVT__u_lza_log2__DOT__C_217) 
                                      << 7U) | (((IData)(__PVT__u_lza_log2__DOT__C_216) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_215) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_214) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_213) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_212) 
                                                             << 2U) 
                                                            | ((IData)(__PVT__u_lza_log2__DOT__C_211) 
                                                               << 1U))))))))
                            : (((IData)(__PVT__u_lza_log2__DOT__C_207) 
                                << 7U) | (((IData)(__PVT__u_lza_log2__DOT__C_206) 
                                           << 6U) | 
                                          (((IData)(__PVT__u_lza_log2__DOT__C_205) 
                                            << 5U) 
                                           | (((IData)(__PVT__u_lza_log2__DOT__C_204) 
                                               << 4U) 
                                              | (((IData)(__PVT__u_lza_log2__DOT__C_203) 
                                                  << 3U) 
                                                 | (((IData)(__PVT__u_lza_log2__DOT__C_202) 
                                                     << 2U) 
                                                    | (2U 
                                                       & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                          >> 0xfU))))))))) 
                          << 0x10U) | ((((IData)(__PVT__u_lza_log2__DOT__C_out_0)
                                          ? (1U | (
                                                   ((IData)(__PVT__u_lza_log2__DOT__C_117) 
                                                    << 7U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_116) 
                                                       << 6U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_115) 
                                                          << 5U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_114) 
                                                             << 4U) 
                                                            | (((IData)(__PVT__u_lza_log2__DOT__C_113) 
                                                                << 3U) 
                                                               | (((IData)(__PVT__u_lza_log2__DOT__C_112) 
                                                                   << 2U) 
                                                                  | ((IData)(__PVT__u_lza_log2__DOT__C_111) 
                                                                     << 1U))))))))
                                          : (((IData)(__PVT__u_lza_log2__DOT__C_107) 
                                              << 7U) 
                                             | (((IData)(__PVT__u_lza_log2__DOT__C_106) 
                                                 << 6U) 
                                                | (((IData)(__PVT__u_lza_log2__DOT__C_105) 
                                                    << 5U) 
                                                   | (((IData)(__PVT__u_lza_log2__DOT__C_104) 
                                                       << 4U) 
                                                      | (((IData)(__PVT__u_lza_log2__DOT__C_103) 
                                                          << 3U) 
                                                         | (((IData)(__PVT__u_lza_log2__DOT__C_102) 
                                                             << 2U) 
                                                            | (2U 
                                                               & (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_1 
                                                                  >> 7U))))))))) 
                                        << 8U) | (((IData)(__PVT__u_lza_log2__DOT__C07) 
                                                   << 7U) 
                                                  | (((IData)(__PVT__u_lza_log2__DOT__C06) 
                                                      << 6U) 
                                                     | (((IData)(__PVT__u_lza_log2__DOT__C05) 
                                                         << 5U) 
                                                        | (((IData)(__PVT__u_lza_log2__DOT__C04) 
                                                            << 4U) 
                                                           | (((IData)(__PVT__u_lza_log2__DOT__C03) 
                                                               << 3U) 
                                                              | (((IData)(__PVT__u_lza_log2__DOT__C02) 
                                                                  << 2U) 
                                                                 | (((IData)(__PVT__u_lza_log2__DOT__C01) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelfRef.__PVT__expo_A_minus_127_reg3) 
                                                                          >> 7U))))))))))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & (__VdfgRegularize_h965b715b_2_6 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1) 
                                                   ^ 
                                                   (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                    >> 6U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x14U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x15U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x16U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x17U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x18U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in 
                  >> 0x18U) ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                               >> 0x19U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 1U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 2U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 3U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 4U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 5U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 6U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 7U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 8U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 9U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xaU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xbU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xcU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xdU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xeU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0xfU)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x10U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x11U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x12U)));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0 
        = (1U & ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__op3) 
                 ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                    >> 0x13U)));
    vlSelfRef.__PVT__Adder_Result = (u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0 
                                     ^ u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33);
    vlSelfRef.__PVT__u_lza_log2__DOT__final_location 
        = ((0U == (__PVT__u_lza_log2__DOT__zero_location 
                   & u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33))
            ? __PVT__u_lza_log2__DOT__zero_location
            : VL_SHIFTL_III(32,32,32, __PVT__u_lza_log2__DOT__zero_location, 1U));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 7U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 8U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 9U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xaU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xbU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xcU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xdU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xeU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0xfU))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x10U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x11U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x12U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x13U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x14U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x15U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x16U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x17U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1) 
                    ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                       >> 0x18U))));
    __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2 
        = (1U & ((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                 ^ ((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                     >> 0x18U) ^ (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                  >> 0x19U))));
    vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
        = ((0x100000000ULL & vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
           | (IData)((IData)(((((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                   >> 0x19U)) << 0x1fU) 
                              | ((0x40000000U & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                  << 0x1eU) 
                                                 & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                    << 6U))) 
                                 | ((0x20000000U & 
                                     (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                       << 0x1dU) & 
                                      (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                       << 6U))) | (
                                                   (0x10000000U 
                                                    & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                        << 0x1cU) 
                                                       & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                          << 6U))) 
                                                   | ((0x8000000U 
                                                       & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                           << 0x1bU) 
                                                          & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                             << 6U))) 
                                                      | ((0x4000000U 
                                                          & (((~ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                              << 0x1aU) 
                                                             & (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                << 6U))) 
                                                         | ((0x2000000U 
                                                             & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                  ? 
                                                                 (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                  >> 0x19U)
                                                                  : 
                                                                 (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                  >> 0x13U)) 
                                                                << 0x19U)) 
                                                            | ((0x1000000U 
                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                     ? 
                                                                    (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                     >> 0x18U)
                                                                     : 
                                                                    (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                     >> 0x12U)) 
                                                                   << 0x18U)) 
                                                               | ((0x800000U 
                                                                   & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                        ? 
                                                                       (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                        >> 0x17U)
                                                                        : 
                                                                       (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                        >> 0x11U)) 
                                                                      << 0x17U)) 
                                                                  | ((0x400000U 
                                                                      & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                           ? 
                                                                          (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                           >> 0x16U)
                                                                           : 
                                                                          (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                           >> 0x10U)) 
                                                                         << 0x16U)) 
                                                                     | ((0x200000U 
                                                                         & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                              ? 
                                                                             (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                              >> 0x15U)
                                                                              : 
                                                                             (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                              >> 0xfU)) 
                                                                            << 0x15U)) 
                                                                        | ((0x100000U 
                                                                            & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xeU)) 
                                                                               << 0x14U)) 
                                                                           | ((0x80000U 
                                                                               & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xdU)) 
                                                                                << 0x13U)) 
                                                                              | ((0x40000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 6U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 5U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 4U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 9U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 3U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 8U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 2U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid0)
                                                                                 ? 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C 
                                                                                >> 7U)
                                                                                 : 
                                                                                (u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__1__KET____DOT__u_csa_42_compress__C 
                                                                                >> 1U)) 
                                                                                << 7U)) 
                                                                                | (0x40U 
                                                                                & ((__VdfgRegularize_h965b715b_2_6 
                                                                                << 6U) 
                                                                                & u_int_multiplier_csa_12__DOT____Vcellout__stage1__BRA__0__KET____DOT__u_csa_42_compress__C))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__u_lza_log2__DOT__Index = ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                     ? 0x17U
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 0x16U
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0x15U
                                                       : 
                                                      ((0x10U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 0x13U
                                                         : 
                                                        ((0x40U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 0x12U
                                                          : 0x11U)))))))
                                                : ((IData)(
                                                           (0U 
                                                            != 
                                                            (0xff00U 
                                                             & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                     ? 0x10U
                                                     : 
                                                    ((0x200U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 0xfU
                                                      : 
                                                     ((0x400U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0xeU
                                                       : 
                                                      ((0x800U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 0xdU
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 0xcU
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 0xbU
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 0xaU
                                                           : 9U)))))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xff0000U 
                                                              & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                      ? 8U
                                                      : 
                                                     ((0x20000U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 7U
                                                       : 
                                                      ((0x40000U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 6U
                                                        : 
                                                       ((0x80000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 4U
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                            ? 2U
                                                            : 1U)))))))
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              != 
                                                              (0xff000000U 
                                                               & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)))
                                                      ? 
                                                     ((0x1000000U 
                                                       & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                        ? 1U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                         ? 2U
                                                         : 
                                                        ((0x8000000U 
                                                          & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                          ? 3U
                                                          : 
                                                         ((0x10000000U 
                                                           & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                           ? 4U
                                                           : 
                                                          ((0x20000000U 
                                                            & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                            ? 5U
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelfRef.__PVT__u_lza_log2__DOT__final_location)
                                                             ? 6U
                                                             : 7U)))))))
                                                      : 0U))));
    vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S 
        = (((QData)((IData)((1U & (IData)((vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                           >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(((((IData)(
                                                   (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                    >> 0x1eU)) 
                                           ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & (((IData)(
                                                         (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                          >> 0x1dU)) 
                                                 ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & (((IData)(
                                                            (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                             >> 0x1cU)) 
                                                    ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & (((IData)(
                                                               (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                >> 0x1bU)) 
                                                       ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & (((IData)(
                                                                  (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                   >> 0x1aU)) 
                                                          ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & (((IData)(
                                                                     (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                      >> 0x19U)) 
                                                             ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & (((IData)(
                                                                        (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                         >> 0x18U)) 
                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & (((IData)(
                                                                           (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                            >> 0x17U)) 
                                                                   ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & (((IData)(
                                                                              (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                               >> 0x16U)) 
                                                                      ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x15U)) 
                                                                         ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x14U)) 
                                                                            ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x13U)) 
                                                                               ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x12U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x11U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x10U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xfU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U)) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in) 
                                                                                ^ (IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & __VdfgRegularize_h965b715b_2_2)))))))))))))))))))))))))))))))))));
    vlSelfRef.u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C 
        = (0x1ffffffffULL & VL_SHIFTL_QQI(33,33,32, (QData)((IData)(
                                                                    ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__31__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1eU))) 
                                                                      << 0x1fU) 
                                                                     | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__30__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1dU))) 
                                                                         << 0x1eU) 
                                                                        | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__29__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1cU))) 
                                                                            << 0x1dU) 
                                                                           | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__28__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1bU))) 
                                                                               << 0x1cU) 
                                                                              | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x1aU))) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid0) 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x19U))) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x18U))
                                                                                 : 
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x18U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x17U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x16U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x15U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x14U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x13U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x12U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x11U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0x10U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xfU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xeU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xdU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xcU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xbU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 0xaU))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 9U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 8U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 7U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 6U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 5U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 4U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 3U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 2U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in 
                                                                                >> 1U))
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & (((IData)(__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2)
                                                                                 ? (IData)(vlSelfRef.__PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in)
                                                                                 : (IData)(u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT____Vcellinp__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__op1)) 
                                                                                << 1U)))))))))))))))))))))))))))))))))), 1U));
}
