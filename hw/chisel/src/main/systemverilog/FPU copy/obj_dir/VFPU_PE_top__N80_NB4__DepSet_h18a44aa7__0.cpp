// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__Syms.h"
#include "VFPU_float_adder_2nd.h"
#include "VFPU_log2_X.h"

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__2(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___nba_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40000000U & vlSymsp->TOP.ext_csr_i_0)) {
        vlSelfRef.__PVT__mux_05_vld_out = vlSymsp->TOP.FPU__DOT__sum_exp_vld;
        vlSelfRef.__PVT__mux_03_vld_out = vlSelfRef.__PVT__adder_0_vld_out_channel_0;
    } else {
        vlSelfRef.__PVT__mux_05_vld_out = ((IData)(vlSelfRef.__PVT__sel_04)
                                            ? ((IData)(vlSelfRef.__PVT__sel_04) 
                                               & (IData)(vlSelf->__PVT__u_float_adder_0->__PVT__vld_out))
                                            : (IData)(vlSelfRef.__PVT__gelu_lut_vld_out));
        vlSelfRef.__PVT__mux_03_vld_out = ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out));
    }
    vlSelfRef.__PVT__input_vld_channel_4 = ((IData)(vlSelfRef.__PVT__sel_10) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_0 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1eU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_1 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1cU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__input_vld_channel_3 = ((vlSymsp->TOP.ext_csr_i_0 
                                             >> 0x1dU) 
                                            & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE));
    vlSelfRef.__PVT__mux_09_data_out = ((IData)(vlSelfRef.__PVT__sel_09)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_1)
                                             ? (((~ 
                                                  (vlSelf->__PVT__u_log2_X_1->__PVT__Result 
                                                   >> 0x1fU)) 
                                                 << 0x1fU) 
                                                | (0x7fffffffU 
                                                   & vlSelf->__PVT__u_log2_X_1->__PVT__Result))
                                             : 0U) : vlSelf->__PVT__u_float_adder_1->__PVT__Result);
}
