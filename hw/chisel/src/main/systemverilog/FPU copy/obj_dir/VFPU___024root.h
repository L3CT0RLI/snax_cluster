// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFPU.h for the primary calling header

#ifndef VERILATED_VFPU___024ROOT_H_
#define VERILATED_VFPU___024ROOT_H_  // guard

#include "verilated.h"
class VFPU_PE_top__N80_NB4;
class VFPU_csa_42_compress__O1b;
class VFPU_csa_42_compress__O1c;
class VFPU_csa_42_compress__O1d;


class VFPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFPU___024root final : public VerilatedModule {
  public:
    // CELLS
    VFPU_PE_top__N80_NB4* __PVT__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* __PVT__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* __PVT__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* __PVT__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1c* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d* __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(ext_data_i_ready,0,0);
        VL_IN8(ext_data_i_valid,0,0);
        VL_IN8(ext_data_o_ready,0,0);
        VL_OUT8(ext_data_o_valid,0,0);
        VL_IN8(ext_start_i,0,0);
        VL_OUT8(ext_busy_o,0,0);
        CData/*5:0*/ FPU__DOT__state;
        CData/*5:0*/ FPU__DOT__state_nxt;
        CData/*0:0*/ FPU__DOT__vld_PE;
        CData/*0:0*/ FPU__DOT__state_sum2_reg;
        CData/*0:0*/ FPU__DOT__vld_out_sum_tree;
        CData/*0:0*/ FPU__DOT__pe_x_max_vld;
        CData/*5:0*/ FPU__DOT__cnt;
        CData/*5:0*/ FPU__DOT__cnt_1;
        CData/*0:0*/ FPU__DOT__sum_exp_vld;
        CData/*0:0*/ FPU__DOT__vld_sum2;
        CData/*0:0*/ FPU__DOT____VdfgRegularize_hae9152be_0_1;
        CData/*0:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__dff_valid_reg0____pinNumber5;
        CData/*0:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellinp__dff_valid_reg0____pinNumber3;
        CData/*0:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_en_vld__BRA__1__KET____DOT__dff_valid_reg____pinNumber5;
        CData/*0:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_en_vld__BRA__2__KET____DOT__dff_valid_reg____pinNumber5;
        CData/*4:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__leading_zeros;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg0;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg1;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg2;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg3;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg4;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg5;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__expo_max_reg6;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg0;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg1;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg2;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg3;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg4;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg5;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg6;
        CData/*0:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__valid_reg7;
        CData/*7:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk8__BRA__0__KET____DOT__u_expo_compare__expo_bigger;
        CData/*4:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT__Index;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(ext_data_i_bits,127,0,4);
        VL_OUTW(ext_data_o_bits,127,0,4);
        VL_IN(ext_csr_i_0,31,0);
        IData/*31:0*/ FPU__DOT__x_max;
        VlWide<32>/*1023:0*/ FPU__DOT__sum_tree_input;
        IData/*31:0*/ FPU__DOT__result_sum_tree;
        VlWide<32>/*1023:0*/ FPU__DOT__sum_result_shifter;
        IData/*31:0*/ FPU__DOT__u_fp_32_compare_tree__DOT__oprand_max_D;
        IData/*31:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__0__KET____DOT__gen_compare__BRA__0__KET____DOT__dff_oprands_mid_reg____pinNumber5;
        IData/*31:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__0__KET____DOT__gen_compare__BRA__1__KET____DOT__dff_oprands_mid_reg____pinNumber5;
        IData/*31:0*/ FPU__DOT__u_fp_32_compare_tree__DOT____Vcellout__gen_tree__BRA__1__KET____DOT__gen_compare__BRA__0__KET____DOT__dff_oprands_mid_reg____pinNumber5;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__add_mant_result;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__result_D2;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
    };
    struct {
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__3__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__3__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__4__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__4__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__5__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__5__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__6__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__6__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__7__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__7__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__8__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__8__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__9__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__9__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__10__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__10__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__11__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__11__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__12__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__12__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__13__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__13__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__14__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__14__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__15__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__15__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__16__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__16__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__17__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__17__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__18__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__18__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__19__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__19__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__20__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__20__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__21__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__21__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__22__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__22__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
    };
    struct {
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__23__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__23__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__24__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__24__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__25__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__25__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__26__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__26__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__27__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__27__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__28__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__28__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__29__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__29__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__30__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__30__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__31__KET____DOT__dff_oprands_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellout__genblk1__BRA__31__KET____DOT__dff_mant_adder_in_reg____pinNumber5;
        IData/*26:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__dff_mant_adder_in_reg____pinNumber1;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*27:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*28:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*29:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*29:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*29:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*29:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*30:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__0__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*30:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT____Vcellout__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__gen_dff0__BRA__1__KET____DOT__dff_sigs_reg0____pinNumber5;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT____VdfgRegularize_hefc62589_0_0;
        IData/*31:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__u_lza_fp_tree__DOT____VdfgRegularize_hefc62589_0_33;
        IData/*30:0*/ FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1__DOT__E_in;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> FPU__DOT__vld_PE_out;
        VlUnpacked<CData/*0:0*/, 4> FPU__DOT__exp_x_minus_xmax_vld_out;
        VlUnpacked<IData/*31:0*/, 3> FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__0__KET____DOT__oprands_mid;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 3> FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__0__KET____DOT__oprands_mid_reg;
        VlUnpacked<IData/*31:0*/, 2> FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__1__KET____DOT__oprands_mid;
        VlUnpacked<IData/*31:0*/, 2> FPU__DOT__u_fp_32_compare_tree__DOT__gen_tree__BRA__1__KET____DOT__oprands_mid_reg;
        VlUnpacked<IData/*27:0*/, 17> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__in_sigs;
        VlUnpacked<IData/*27:0*/, 17> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__in_sigs_reg;
        VlUnpacked<IData/*28:0*/, 9> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__in_sigs;
        VlUnpacked<IData/*28:0*/, 9> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__in_sigs_reg;
        VlUnpacked<IData/*29:0*/, 5> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__in_sigs;
        VlUnpacked<IData/*29:0*/, 5> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__in_sigs_reg;
        VlUnpacked<IData/*30:0*/, 3> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__in_sigs;
        VlUnpacked<IData/*30:0*/, 3> FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__3__KET____DOT__in_sigs_reg;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFPU___024root(VFPU__Syms* symsp, const char* v__name);
    ~VFPU___024root();
    VL_UNCOPYABLE(VFPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
