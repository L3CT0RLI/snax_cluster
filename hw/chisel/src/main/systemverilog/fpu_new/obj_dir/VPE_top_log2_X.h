// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE_top.h for the primary calling header

#ifndef VERILATED_VPE_TOP_LOG2_X_H_
#define VERILATED_VPE_TOP_LOG2_X_H_  // guard

#include "verilated.h"


class VPE_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE_top_log2_X final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(en,0,0);
    VL_IN8(vld_in,0,0);
    VL_OUT8(vld_out,0,0);
    CData/*0:0*/ __PVT__overflow;
    CData/*4:0*/ __PVT__n_b_reg0;
    CData/*0:0*/ __PVT__zero_flag_reg3;
    CData/*0:0*/ __PVT__inf_flag_reg3;
    CData/*0:0*/ __PVT__en_stage_0;
    CData/*0:0*/ __PVT__en_stage_1;
    CData/*0:0*/ __PVT__en_stage_2;
    CData/*0:0*/ __PVT__en_stage_3;
    CData/*0:0*/ __PVT__en_stage_4;
    CData/*0:0*/ __PVT__vld_in_reg0;
    CData/*0:0*/ __PVT__vld_in_reg1;
    CData/*0:0*/ __PVT__vld_in_reg2;
    CData/*0:0*/ __PVT__vld_in_reg3;
    CData/*0:0*/ __PVT__vld_in_reg4;
    CData/*7:0*/ __PVT__expo_A_reg1;
    CData/*7:0*/ __PVT__expo_A_reg2;
    CData/*7:0*/ __PVT__expo_A_reg3;
    CData/*7:0*/ __PVT__expo_A_minus_127_reg3;
    CData/*4:0*/ __PVT__u_lza_log2__DOT__Index;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0;
    CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
    CData/*0:0*/ __Vdly__vld_out;
    SData/*15:0*/ __PVT__q_a;
    SData/*15:0*/ __PVT__q_b;
    SData/*15:0*/ __PVT__y_a;
    SData/*15:0*/ __PVT__Yb_minus_Ya_temp;
    SData/*15:0*/ __PVT__y_a_reg1;
    VL_IN(Oprand_A,31,0);
    VL_OUT(Result,31,0);
    IData/*30:0*/ __PVT__mult_result;
    IData/*31:0*/ __PVT__Adder_op1_pre;
    IData/*31:0*/ __PVT__Adder_Result;
    IData/*31:0*/ __PVT__Oprand_A_reg0;
    IData/*22:0*/ __PVT__mant_A_reg1;
    IData/*23:0*/ __PVT__M_plus_Ya_reg2;
    IData/*23:0*/ __PVT__M_plus_Ya_reg3;
    IData/*31:0*/ __PVT__Adder_op1_reg3;
    IData/*31:0*/ __PVT__Adder_op2_reg3;
    IData/*31:0*/ __PVT__u_lza_log2__DOT__final_location;
    IData/*30:0*/ __PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
    IData/*25:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in;
    IData/*25:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in;
    IData/*31:0*/ __Vdly__Result;
    QData/*32:0*/ __PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
    QData/*32:0*/ __PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
    QData/*32:0*/ __PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
    QData/*32:0*/ __PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
    QData/*32:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
    QData/*32:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
    QData/*32:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in;
    VlUnpacked<SData/*15:0*/, 32> __PVT__u_dual_port_ram_log__DOT__ram;

    // INTERNAL VARIABLES
    VPE_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPE_top_log2_X(VPE_top__Syms* symsp, const char* v__name);
    ~VPE_top_log2_X();
    VL_UNCOPYABLE(VPE_top_log2_X);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
