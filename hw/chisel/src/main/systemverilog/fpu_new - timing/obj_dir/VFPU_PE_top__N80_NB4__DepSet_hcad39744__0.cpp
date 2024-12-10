// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__2_power_X.h"
#include "VFPU__Syms.h"
#include "VFPU_float_adder_2nd.h"
#include "VFPU_log2_X.h"

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
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
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
}

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__1(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_sign_X = ((IData)(vlSelfRef.__PVT__sel_10) 
                                     & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out));
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = ((0x10000000U 
                                                  & vlSymsp->TOP.ext_csr_i_0)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                                                     >> 0x17U))
                                                  : 0U);
    vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid = vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid;
    vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid = vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid;
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        if (vlSelfRef.__PVT__sel_04) {
            vlSelfRef.__PVT__mux_05_data_out = ((IData)(vlSelfRef.__PVT__sel_04)
                                                 ? vlSelf->__PVT__u_float_adder_0->__PVT__Result
                                                 : 0U);
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
    }
    vlSelfRef.__PVT__mux_09_vld_out = ((IData)(vlSelfRef.__PVT__sel_09)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_1) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelf->__PVT__u_float_adder_1->__PVT__vld_out));
    vlSelfRef.vld_out = ((vlSymsp->TOP.ext_csr_i_0 
                          >> 0x1fU) ? (IData)(vlSelfRef.__PVT__relu_vld_out)
                          : ((0x10000000U & vlSymsp->TOP.ext_csr_i_0)
                              ? (IData)(vlSelf->__PVT__u_float_adder_1->__PVT__vld_out)
                              : ((IData)(vlSelfRef.__PVT__sel_10)
                                  ? ((IData)(vlSelfRef.__PVT__sel_10) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_6) 
                                     & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out)))));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__x_max_vld_reg = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSymsp->TOP.FPU__DOT__pe_x_max_vld));
    vlSelfRef.__PVT__mux_07_vld_out_reg = ((IData)(vlSymsp->TOP.rst_ni) 
                                           && (IData)(vlSelfRef.__PVT__mux_07_vld_out));
    vlSelfRef.__PVT__mux_07_data_out_reg = ((IData)(vlSymsp->TOP.rst_ni)
                                             ? ((IData)(vlSelfRef.__PVT__sel_07)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__sel_07)
                                                  ? 
                                                 ((((0x20000000U 
                                                     & vlSymsp->TOP.ext_csr_i_0)
                                                     ? 
                                                    (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                     >> 0x1fU)
                                                     : 
                                                    (~ 
                                                     (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                      >> 0x1fU))) 
                                                   << 0x1fU) 
                                                  | (0x7fffffffU 
                                                     & vlSelf->__PVT__u_log2_X_1->__PVT__Result))
                                                  : 0U)
                                                 : vlSelfRef.__PVT__x_mul_2_2_data_out)
                                             : 0U);
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    vlSelfRef.__PVT__x_mul_2_2_data_out = vlSelfRef.__Vdly__x_mul_2_2_data_out;
}

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
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
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
}

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
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
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
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
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
}

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__1(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_sign_X = ((IData)(vlSelfRef.__PVT__sel_10) 
                                     & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out));
    vlSelfRef.__PVT___2_X_vld_out_channel_2 = ((vlSymsp->TOP.ext_csr_i_0 
                                                >> 0x1cU) 
                                               & (IData)(vlSelf->__PVT__u___05F2_power_X_2->__PVT__vld_out));
    vlSelfRef.__PVT__u_x_mul_2_2__DOT__Expo_A = ((0x10000000U 
                                                  & vlSymsp->TOP.ext_csr_i_0)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__u___05F2_power_X_2->__PVT__Result 
                                                     >> 0x17U))
                                                  : 0U);
    vlSelfRef.__PVT__u_exp_x_0__DOT__vld_mid = vlSelfRef.__Vdly__u_exp_x_0__DOT__vld_mid;
    vlSelfRef.__PVT__u_exp_x_0__DOT__Result_mid = vlSelfRef.__Vdly__u_exp_x_0__DOT__Result_mid;
    vlSelfRef.__PVT__adder_0_vld_out_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                                   >> 0x1eU) 
                                                  & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out));
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 
            = vlSelf->__PVT__u_float_adder_0->__PVT__Result;
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_01_data_out = (((~ (vlSymsp->TOP.FPU__DOT__x_max 
                                                 >> 0x1fU)) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & vlSymsp->TOP.FPU__DOT__x_max));
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        if (vlSelfRef.__PVT__sel_04) {
            vlSelfRef.__PVT__mux_05_data_out = ((IData)(vlSelfRef.__PVT__sel_04)
                                                 ? vlSelf->__PVT__u_float_adder_0->__PVT__Result
                                                 : 0U);
            vlSelfRef.__PVT__mux_02_data_out = vlSelf->__PVT__u_exp_x_0__DOT__u___05F2_power_X->__PVT__Result;
        } else {
            vlSelfRef.__PVT__mux_05_data_out = vlSelfRef.__PVT__gelu_lut_data_out;
            vlSelfRef.__PVT__mux_02_data_out = 0U;
        }
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
    }
    vlSelfRef.__PVT__mux_09_vld_out = ((IData)(vlSelfRef.__PVT__sel_09)
                                        ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_1) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelf->__PVT__u_float_adder_1->__PVT__vld_out));
    vlSelfRef.__PVT__mux_08_data_out = ((IData)(vlSelfRef.__PVT__sel_08)
                                         ? vlSelfRef.__PVT__buffer_2_out
                                         : ((0x40000000U 
                                             & vlSymsp->TOP.ext_csr_i_0)
                                             ? vlSelfRef.__PVT__buffer_1_out
                                             : 0xbf800000U));
    vlSelfRef.__PVT__x_max_vld_reg = ((IData)(vlSymsp->TOP.rst_ni) 
                                      && (IData)(vlSymsp->TOP.FPU__DOT__pe_x_max_vld));
    vlSelfRef.__PVT__mux_07_vld_out_reg = ((IData)(vlSymsp->TOP.rst_ni) 
                                           && (IData)(vlSelfRef.__PVT__mux_07_vld_out));
    vlSelfRef.__PVT__mux_07_data_out_reg = ((IData)(vlSymsp->TOP.rst_ni)
                                             ? ((IData)(vlSelfRef.__PVT__sel_07)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__sel_07)
                                                  ? 
                                                 ((((0x20000000U 
                                                     & vlSymsp->TOP.ext_csr_i_0)
                                                     ? 
                                                    (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                     >> 0x1fU)
                                                     : 
                                                    (~ 
                                                     (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                      >> 0x1fU))) 
                                                   << 0x1fU) 
                                                  | (0x7fffffffU 
                                                     & vlSelf->__PVT__u_log2_X_1->__PVT__Result))
                                                  : 0U)
                                                 : vlSelfRef.__PVT__x_mul_2_2_data_out)
                                             : 0U);
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
    vlSelfRef.__PVT__x_mul_2_2_data_out = vlSelfRef.__Vdly__x_mul_2_2_data_out;
}

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__0(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    } else {
        vlSelfRef.__PVT__input_channel_4 = 0U;
        vlSelfRef.__PVT__wr_en_sign_X = 0U;
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
        vlSelfRef.__PVT__mux_05_data_out = vlSymsp->TOP.FPU__DOT__result_sum_tree;
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_02_data_out = vlSelfRef.__PVT__buffer_0_out;
    } else {
        vlSelfRef.__PVT__adder_0_data_out_channel_0 = 0U;
        vlSelfRef.__PVT__mux_01_data_out = 0x3f800000U;
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
    vlSelfRef.__PVT__mux_07_vld_out = ((IData)(vlSelfRef.__PVT__sel_07)
                                        ? ((IData)(vlSelfRef.__PVT__sel_07) 
                                           & (IData)(vlSelf->__PVT__u_log2_X_1->__PVT__vld_out))
                                        : (IData)(vlSelfRef.__PVT__x_mul_2_2_vld_out));
}
