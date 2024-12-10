// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFPU.h for the primary calling header

#ifndef VERILATED_VFPU_PE_TOP__N80_NB4_H_
#define VERILATED_VFPU_PE_TOP__N80_NB4_H_  // guard

#include "verilated.h"
class VFPU__2_power_X;
class VFPU_float_adder_2nd;
class VFPU_log2_X;


class VFPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFPU_PE_top__N80_NB4 final : public VerilatedModule {
  public:
    // CELLS
    VFPU_float_adder_2nd* __PVT__u_float_adder_0;
    VFPU_log2_X* __PVT__u_log2_X_0;
    VFPU_log2_X* __PVT__u_log2_X_1;
    VFPU_float_adder_2nd* __PVT__u_float_adder_1;
    VFPU__2_power_X* __PVT__u___05F2_power_X_2;
    VFPU__2_power_X* __PVT__u_exp_x_0__DOT__u___05F2_power_X;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(en,0,0);
        VL_IN8(vld_in,0,0);
        VL_IN8(x_max_vld,0,0);
        VL_IN8(sum_exp_vld,0,0);
        VL_IN8(func,5,0);
        VL_OUT8(vld_out,0,0);
        VL_OUT8(exp_x_minus_xmax_vld_out,0,0);
        CData/*0:0*/ __PVT__mux_07_vld_out;
        CData/*0:0*/ __PVT__mux_07_vld_out_reg;
        CData/*0:0*/ __PVT__x_mul_2_2_vld_out;
        CData/*0:0*/ __PVT__input_vld_channel_0;
        CData/*0:0*/ __PVT__input_vld_channel_1;
        CData/*0:0*/ __PVT__input_vld_channel_3;
        CData/*0:0*/ __PVT__input_vld_channel_4;
        CData/*0:0*/ __PVT__adder_0_vld_out_channel_0;
        CData/*0:0*/ __PVT__x_mul_2_0_vld_out;
        CData/*0:0*/ __PVT__gelu_lut_vld_out;
        CData/*0:0*/ __PVT__x_max_vld_reg;
        CData/*0:0*/ __PVT__mux_03_vld_out;
        CData/*0:0*/ __PVT__mul_log2e_0_vld_out;
        CData/*0:0*/ __PVT__sel_04;
        CData/*0:0*/ __PVT__mux_05_vld_out;
        CData/*0:0*/ __PVT__wr_en_sign_X;
        CData/*0:0*/ __PVT__buffer_sign_out;
        CData/*0:0*/ __PVT__sel_07;
        CData/*0:0*/ __PVT__sel_08;
        CData/*0:0*/ __PVT__sel_09;
        CData/*0:0*/ __PVT__mux_09_vld_out;
        CData/*0:0*/ __PVT___2_X_vld_out_channel_2;
        CData/*0:0*/ __PVT__sel_10;
        CData/*0:0*/ __PVT__relu_vld_out;
        CData/*0:0*/ __VdfgRegularize_h079bc411_0_0;
        CData/*0:0*/ __VdfgRegularize_h079bc411_0_1;
        CData/*0:0*/ __VdfgRegularize_h079bc411_0_6;
        CData/*5:0*/ __PVT__u_buffer_0__DOT__wr_cnt;
        CData/*5:0*/ __PVT__u_buffer_0__DOT__rd_cnt;
        CData/*0:0*/ __PVT__u_buffer_0__DOT__empty;
        CData/*0:0*/ __PVT__u_buffer_0__DOT__full;
        CData/*7:0*/ __PVT__u_x_mul_2_0__DOT__Expo_A;
        CData/*7:0*/ __PVT__u_gelux__DOT__expo_A;
        CData/*1:0*/ __PVT__u_gelux__DOT__mem_select;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_is_zero_reg;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_is_one_reg;
        CData/*7:0*/ __PVT__u_gelux__DOT__expo_real_abs_reg;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_smaller_than_zero_reg;
        CData/*0:0*/ __PVT__u_gelux__DOT__sign_A_reg0;
        CData/*0:0*/ __PVT__u_gelux__DOT__vld_in_reg0;
        CData/*1:0*/ __PVT__u_gelux__DOT__mem_select_reg0;
        CData/*6:0*/ __PVT__u_gelux__DOT__addr_a_reg;
        CData/*0:0*/ __PVT__u_gelux__DOT__sign_A_reg1;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_smaller_than_zero_reg1;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_zero_or_one_reg;
        CData/*0:0*/ __PVT__u_gelux__DOT__vld_in_reg1;
        CData/*1:0*/ __PVT__u_gelux__DOT__mem_select_reg1;
        CData/*0:0*/ __PVT__u_gelux__DOT__sign_A_reg2;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_bigger_than_one_reg0;
        CData/*0:0*/ __PVT__u_gelux__DOT__vld_in_reg2;
        CData/*0:0*/ __PVT__u_gelux__DOT__sign_A_reg3;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_bigger_than_one_reg1;
        CData/*0:0*/ __PVT__u_gelux__DOT__vld_in_reg3;
        CData/*0:0*/ __PVT__u_gelux__DOT__sign_A_reg4;
        CData/*0:0*/ __PVT__u_gelux__DOT__expo_bigger_than_one_reg2;
    };
    struct {
        CData/*0:0*/ __PVT__u_gelux__DOT__vld_in_reg4;
        CData/*4:0*/ __PVT__u_gelux__DOT__u_lza_log2__DOT__Index;
        CData/*0:0*/ __PVT__u_mul_log2e_0__DOT__flag;
        CData/*0:0*/ __PVT__u_mul_log2e_0__DOT__vld_reg0;
        CData/*0:0*/ __PVT__u_exp_x_0__DOT__vld_mid;
        CData/*0:0*/ __PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__flag;
        CData/*0:0*/ __PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__vld_reg0;
        CData/*6:0*/ __PVT__u_buffer_1__DOT__wr_cnt;
        CData/*6:0*/ __PVT__u_buffer_1__DOT__rd_cnt;
        CData/*0:0*/ __PVT__u_buffer_1__DOT__empty;
        CData/*0:0*/ __PVT__u_buffer_1__DOT__full;
        CData/*4:0*/ __PVT__u_buffer_2__DOT__wr_cnt;
        CData/*4:0*/ __PVT__u_buffer_2__DOT__rd_cnt;
        CData/*0:0*/ __PVT__u_buffer_2__DOT__empty;
        CData/*0:0*/ __PVT__u_buffer_2__DOT__full;
        CData/*4:0*/ __PVT__u_buffer_sign__DOT__wr_cnt;
        CData/*4:0*/ __PVT__u_buffer_sign__DOT__rd_cnt;
        CData/*0:0*/ __PVT__u_buffer_sign__DOT__empty;
        CData/*0:0*/ __PVT__u_buffer_sign__DOT__full;
        CData/*7:0*/ __PVT__u_x_mul_2_2__DOT__Expo_A;
        CData/*0:0*/ __Vdly__u_exp_x_0__DOT__vld_mid;
        SData/*15:0*/ __PVT__u_gelux__DOT__q_a;
        SData/*15:0*/ __PVT__u_gelux__DOT__q_b;
        SData/*15:0*/ __PVT__u_gelux__DOT__y_a;
        SData/*15:0*/ __PVT__u_gelux__DOT__y_a_reg;
        VL_IN(Oprand_A,31,0);
        VL_IN(sum_exp,31,0);
        VL_IN(x_max,31,0);
        VL_OUT(Result,31,0);
        VL_OUT(exp_x_minus_xmax,31,0);
        IData/*31:0*/ __PVT__x_mul_2_2_data_out;
        IData/*31:0*/ __PVT__input_channel_4;
        IData/*31:0*/ __PVT__adder_0_data_out_channel_0;
        IData/*31:0*/ __PVT__buffer_0_out;
        IData/*31:0*/ __PVT__x_mul_2_0_out;
        IData/*31:0*/ __PVT__mux_00_data_out;
        IData/*31:0*/ __PVT__gelu_lut_data_out;
        IData/*31:0*/ __PVT__mux_01_data_out;
        IData/*31:0*/ __PVT__mux_02_data_out;
        IData/*31:0*/ __PVT__mul_log2e_0_data_out;
        IData/*31:0*/ __PVT__buffer_1_out;
        IData/*31:0*/ __PVT__buffer_2_out;
        IData/*31:0*/ __PVT__mux_05_data_out;
        IData/*31:0*/ __PVT__mux_07_data_out_reg;
        IData/*31:0*/ __PVT__mux_08_data_out;
        IData/*31:0*/ __PVT__mux_09_data_out;
        IData/*31:0*/ __PVT__relu_data_out;
        IData/*23:0*/ __PVT__u_gelux__DOT__lut_source;
        IData/*22:0*/ __PVT__u_gelux__DOT__mant_A_reg;
        IData/*23:0*/ __PVT__u_gelux__DOT__lut_source_reg0;
        IData/*23:0*/ __PVT__u_gelux__DOT__lut_source_reg1;
        IData/*17:0*/ __PVT__u_gelux__DOT__mul_result_reg;
        IData/*17:0*/ __PVT__u_gelux__DOT__mul_result_reg_temp;
        IData/*23:0*/ __PVT__u_gelux__DOT__op1_reg;
        IData/*31:0*/ __PVT__u_gelux__DOT__op2_reg;
        IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_0;
        IData/*31:0*/ u_gelux__DOT__u_lza_log2__DOT____VdfgRegularize_h503deecb_0_33;
        IData/*24:0*/ __PVT__u_mul_log2e_0__DOT__A_B_chop;
        IData/*31:0*/ __PVT__u_mul_log2e_0__DOT__Oprand_A;
        IData/*31:0*/ __PVT__u_exp_x_0__DOT__Result_mid;
        IData/*24:0*/ __PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__A_B_chop;
        IData/*31:0*/ __PVT__u_exp_x_0__DOT__u_mul_log2e__DOT__Oprand_A;
        IData/*31:0*/ __Vdly__u_exp_x_0__DOT__Result_mid;
        IData/*31:0*/ __Vdly__x_mul_2_2_data_out;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> __PVT__u_buffer_0__DOT__ram;
        VlUnpacked<SData/*15:0*/, 128> __PVT__u_gelux__DOT__u_dual_port_ram_gelu__DOT__ram;
        VlUnpacked<IData/*31:0*/, 64> __PVT__u_buffer_1__DOT__ram;
        VlUnpacked<IData/*31:0*/, 16> __PVT__u_buffer_2__DOT__ram;
        VlUnpacked<CData/*0:0*/, 16> __PVT__u_buffer_sign__DOT__ram;
    };

    // INTERNAL VARIABLES
    VFPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFPU_PE_top__N80_NB4(VFPU__Syms* symsp, const char* v__name);
    ~VFPU_PE_top__N80_NB4();
    VL_UNCOPYABLE(VFPU_PE_top__N80_NB4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
