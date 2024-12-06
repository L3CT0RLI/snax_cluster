// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__Syms.h"

VL_INLINE_OPT void VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__1(VFPU_PE_top__N80_NB4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VFPU_PE_top__N80_NB4___ico_sequent__TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__mux_03_vld_out = ((0x40000000U 
                                        & vlSymsp->TOP.ext_csr_i_0)
                                        ? (IData)(vlSelfRef.__PVT__adder_0_vld_out_channel_0)
                                        : ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h079bc411_0_0) 
                                               & (IData)(vlSymsp->TOP.FPU__DOT__vld_PE))
                                            : (IData)(vlSelfRef.__PVT__x_mul_2_0_vld_out)));
}
