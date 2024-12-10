// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE_top.h for the primary calling header

#ifndef VERILATED_VPE_TOP__2_POWER_X_H_
#define VERILATED_VPE_TOP__2_POWER_X_H_  // guard

#include "verilated.h"


class VPE_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE_top__2_power_X final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(en,0,0);
        VL_IN8(vld_in,0,0);
        VL_OUT8(vld_out,0,0);
        CData/*0:0*/ __PVT__en_stage_0;
        CData/*0:0*/ __PVT__en_stage_1;
        CData/*0:0*/ __PVT__en_stage_2;
        CData/*0:0*/ __PVT__en_stage_3;
        CData/*0:0*/ __PVT__en_stage_4;
        CData/*0:0*/ __PVT__en_stage_5;
        CData/*0:0*/ __PVT__vld_in_reg0;
        CData/*0:0*/ __PVT__vld_in_reg1;
        CData/*0:0*/ __PVT__vld_in_reg2;
        CData/*0:0*/ __PVT__vld_in_reg3;
        CData/*0:0*/ __PVT__vld_in_reg4;
        CData/*4:0*/ __PVT__shift_bits;
        CData/*7:0*/ __PVT__expo_A_reg0;
        CData/*0:0*/ __PVT__sign_A_reg0;
        CData/*7:0*/ __PVT__real_expo_A_reg0;
        CData/*7:0*/ __PVT__real_expo_A_com_reg0;
        CData/*7:0*/ __PVT__expo_A_reg1;
        CData/*0:0*/ __PVT__sign_A_reg1;
        CData/*7:0*/ __PVT__real_expo_A_reg1;
        CData/*7:0*/ __PVT__real_expo_A_com_reg1;
        CData/*7:0*/ __PVT__expo_result_reg2;
        CData/*0:0*/ __PVT__zero_flag_part_reg2;
        CData/*0:0*/ __PVT__sign_A_reg2;
        CData/*0:0*/ __PVT__one_flag_reg2;
        CData/*7:0*/ __PVT__expo_result_reg3;
        CData/*0:0*/ __PVT__zero_flag_part_reg3;
        CData/*0:0*/ __PVT__sign_A_reg3;
        CData/*0:0*/ __PVT__one_flag_reg3;
        CData/*7:0*/ __PVT__expo_result_reg4;
        CData/*0:0*/ __PVT__zero_flag_part_reg4;
        CData/*0:0*/ __PVT__sign_A_reg4;
        CData/*0:0*/ __PVT__one_flag_reg4;
        CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__B_minus_reg0;
        CData/*0:0*/ __PVT__u_int_multiplier_csa_12__DOT__B_minus_reg1;
        CData/*0:0*/ __Vdly__vld_out;
        SData/*15:0*/ __PVT__q_a2;
        SData/*15:0*/ __PVT__q_b2;
        SData/*15:0*/ __PVT__y_a;
        SData/*15:0*/ __PVT__y_a_reg2;
        SData/*15:0*/ __PVT__y_a_minus_y_b_temp;
        VL_IN(Oprand_A,31,0);
        VL_OUT(Result,31,0);
        IData/*29:0*/ __PVT__mult_result;
        IData/*30:0*/ __PVT__shifted_real_A_reg0;
        IData/*23:0*/ __PVT__frac_A_reg1;
        IData/*30:0*/ __PVT__shifted_real_A_reg1;
        IData/*23:0*/ __PVT__frac_A_reg2;
        IData/*23:0*/ __PVT__M_minus_Cn_reg3;
        IData/*23:0*/ __PVT__M_minus_Cn_reg4;
        IData/*22:0*/ __VdfgRegularize_h40f19cb3_2_1;
        IData/*31:0*/ __PVT__u_int_multiplier_csa_12__DOT__C_2_reg;
        IData/*31:0*/ __PVT__u_int_multiplier_csa_12__DOT__S_2_reg;
        IData/*31:0*/ __PVT__u_int_multiplier_csa_12__DOT__C_2_reg_2;
        IData/*31:0*/ __PVT__u_int_multiplier_csa_12__DOT__S_2_reg_2;
        IData/*29:0*/ __PVT__u_int_multiplier_csa_12__DOT__C2_plus_S2_reg;
        IData/*31:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__S;
        IData/*31:0*/ u_int_multiplier_csa_12__DOT____Vcellout__stage2__BRA__0__KET____DOT__u_csa_42_compress__C;
        IData/*24:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in;
        IData/*24:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage1__BRA__1__KET____DOT__u_csa_42_compress__DOT__E_in;
    };
    struct {
        IData/*31:0*/ __PVT__u_int_multiplier_csa_12__DOT__stage2__BRA__0__KET____DOT__u_csa_42_compress__DOT__E_in;
        VlUnpacked<SData/*15:0*/, 32> __PVT__u_dual_port_ram_pos__DOT__ram;
    };

    // INTERNAL VARIABLES
    VPE_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPE_top__2_power_X(VPE_top__Syms* symsp, const char* v__name);
    ~VPE_top__2_power_X();
    VL_UNCOPYABLE(VPE_top__2_power_X);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
