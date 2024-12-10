// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top_float_adder_2nd.h"

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__0(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0x1eU)) 
                                  << 7U) | (0xffffff80U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0x1eU)) 
                                                << 7U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                  << 1U))))) 
                       | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x1dU)) 
                                     << 6U) | (0xffffffc0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x1dU)) 
                                                   << 6U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                     << 1U))))) 
                          | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 0x1cU)) 
                                        << 5U) | (0xffffffe0U 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 0x1cU)) 
                                                      << 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                        << 1U))))) 
                             | ((0x10U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0x1bU)) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0x1bU)) 
                                               << 4U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                 << 1U))))) 
                                | ((8U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0x1aU)) 
                                           << 3U) | 
                                          (0xfffffff8U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0x1aU)) 
                                               << 3U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                 << 1U))))) 
                                   | ((4U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__g 
                                                       >> 0x19U)) 
                                              << 2U) 
                                             | (0xfffffffcU 
                                                & (((IData)(
                                                            (vlSelfRef.__PVT__lza__DOT__p 
                                                             >> 0x19U)) 
                                                    << 2U) 
                                                   & ((IData)(vlSelfRef.__PVT__lza__DOT__C_31) 
                                                      << 1U))))) 
                                      | (2U & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__g 
                                                         >> 0x18U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x18U)) 
                                                   & (IData)(vlSelfRef.__PVT__lza__DOT__C_31))) 
                                               << 1U)))))))));
    vlSelfRef.__PVT__lza__DOT__C_31 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__1(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                     >> 0x1eU)) << 7U) 
                           | (0xffffff80U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__p 
                                                       >> 0x1eU)) 
                                              << 7U) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                                << 1U))))) 
                 | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                        >> 0x1dU)) 
                               << 6U) | (0xffffffc0U 
                                         & (((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x1dU)) 
                                             << 6U) 
                                            & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                               << 1U))))) 
                    | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0x1cU)) 
                                  << 5U) | (0xffffffe0U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0x1cU)) 
                                                << 5U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                                  << 1U))))) 
                       | ((0x10U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x1bU)) 
                                     << 4U) | (0xfffffff0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x1bU)) 
                                                   << 4U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                                     << 1U))))) 
                          | ((8U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x1aU)) 
                                     << 3U) | (0xfffffff8U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x1aU)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                                     << 1U))))) 
                             | ((4U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 0x19U)) 
                                        << 2U) | (0xfffffffcU 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 0x19U)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_30) 
                                                        << 1U))))) 
                                | (2U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                   >> 0x18U)) 
                                          | ((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x18U)) 
                                             & (IData)(vlSelfRef.__PVT__lza__DOT__C_30))) 
                                         << 1U))))))));
    vlSelfRef.__PVT__lza__DOT__C_30 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__2(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0x16U)) 
                                  << 7U) | (0xffffff80U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0x16U)) 
                                                << 7U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                  << 1U))))) 
                       | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x15U)) 
                                     << 6U) | (0xffffffc0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x15U)) 
                                                   << 6U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                     << 1U))))) 
                          | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 0x14U)) 
                                        << 5U) | (0xffffffe0U 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 0x14U)) 
                                                      << 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                        << 1U))))) 
                             | ((0x10U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0x13U)) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0x13U)) 
                                               << 4U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                 << 1U))))) 
                                | ((8U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0x12U)) 
                                           << 3U) | 
                                          (0xfffffff8U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0x12U)) 
                                               << 3U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                 << 1U))))) 
                                   | ((4U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__g 
                                                       >> 0x11U)) 
                                              << 2U) 
                                             | (0xfffffffcU 
                                                & (((IData)(
                                                            (vlSelfRef.__PVT__lza__DOT__p 
                                                             >> 0x11U)) 
                                                    << 2U) 
                                                   & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                      << 1U))))) 
                                      | (2U & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__g 
                                                         >> 0x10U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x10U)) 
                                                   & (IData)(vlSelfRef.__PVT__lza__DOT__C_21))) 
                                               << 1U)))))))));
    vlSelfRef.__PVT__lza__DOT__C_21 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__3(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                     >> 0x16U)) << 7U) 
                           | (0xffffff80U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__p 
                                                       >> 0x16U)) 
                                              << 7U) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                << 1U))))) 
                 | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                        >> 0x15U)) 
                               << 6U) | (0xffffffc0U 
                                         & (((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x15U)) 
                                             << 6U) 
                                            & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                               << 1U))))) 
                    | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0x14U)) 
                                  << 5U) | (0xffffffe0U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0x14U)) 
                                                << 5U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                  << 1U))))) 
                       | ((0x10U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x13U)) 
                                     << 4U) | (0xfffffff0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x13U)) 
                                                   << 4U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                     << 1U))))) 
                          | ((8U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0x12U)) 
                                     << 3U) | (0xfffffff8U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0x12U)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                     << 1U))))) 
                             | ((4U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 0x11U)) 
                                        << 2U) | (0xfffffffcU 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 0x11U)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                        << 1U))))) 
                                | (2U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                   >> 0x10U)) 
                                          | ((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x10U)) 
                                             & (IData)(vlSelfRef.__PVT__lza__DOT__C_20))) 
                                         << 1U))))))));
    vlSelfRef.__PVT__lza__DOT__C_20 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__4(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (1U | ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0xeU)) 
                                  << 7U) | (0xffffff80U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0xeU)) 
                                                << 7U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                  << 1U))))) 
                       | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0xdU)) 
                                     << 6U) | (0xffffffc0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0xdU)) 
                                                   << 6U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                     << 1U))))) 
                          | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 0xcU)) 
                                        << 5U) | (0xffffffe0U 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 0xcU)) 
                                                      << 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                        << 1U))))) 
                             | ((0x10U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0xbU)) 
                                           << 4U) | 
                                          (0xfffffff0U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0xbU)) 
                                               << 4U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                 << 1U))))) 
                                | ((8U & (((IData)(
                                                   (vlSelfRef.__PVT__lza__DOT__g 
                                                    >> 0xaU)) 
                                           << 3U) | 
                                          (0xfffffff8U 
                                           & (((IData)(
                                                       (vlSelfRef.__PVT__lza__DOT__p 
                                                        >> 0xaU)) 
                                               << 3U) 
                                              & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                 << 1U))))) 
                                   | ((4U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__g 
                                                       >> 9U)) 
                                              << 2U) 
                                             | (0xfffffffcU 
                                                & (((IData)(
                                                            (vlSelfRef.__PVT__lza__DOT__p 
                                                             >> 9U)) 
                                                    << 2U) 
                                                   & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                      << 1U))))) 
                                      | (2U & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__g 
                                                         >> 8U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 8U)) 
                                                   & (IData)(vlSelfRef.__PVT__lza__DOT__C_11))) 
                                               << 1U)))))))));
    vlSelfRef.__PVT__lza__DOT__C_11 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__5(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                     >> 0xeU)) << 7U) 
                           | (0xffffff80U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__p 
                                                       >> 0xeU)) 
                                              << 7U) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                << 1U))))) 
                 | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                        >> 0xdU)) << 6U) 
                              | (0xffffffc0U & (((IData)(
                                                         (vlSelfRef.__PVT__lza__DOT__p 
                                                          >> 0xdU)) 
                                                 << 6U) 
                                                & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                   << 1U))))) 
                    | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 0xcU)) 
                                  << 5U) | (0xffffffe0U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 0xcU)) 
                                                << 5U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                  << 1U))))) 
                       | ((0x10U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0xbU)) 
                                     << 4U) | (0xfffffff0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0xbU)) 
                                                   << 4U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                     << 1U))))) 
                          | ((8U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 0xaU)) 
                                     << 3U) | (0xfffffff8U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 0xaU)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                     << 1U))))) 
                             | ((4U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 9U)) 
                                        << 2U) | (0xfffffffcU 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 9U)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                        << 1U))))) 
                                | (2U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                   >> 8U)) 
                                          | ((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 8U)) 
                                             & (IData)(vlSelfRef.__PVT__lza__DOT__C_10))) 
                                         << 1U))))))));
    vlSelfRef.__PVT__lza__DOT__C_10 = __Vtemp_1;
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__6(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_sequent__TOP__PE_top__DOT__u_float_adder_0__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                     >> 6U)) << 7U) 
                           | (0xffffff80U & (((IData)(
                                                      (vlSelfRef.__PVT__lza__DOT__p 
                                                       >> 6U)) 
                                              << 7U) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                << 1U))))) 
                 | ((0x40U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                        >> 5U)) << 6U) 
                              | (0xffffffc0U & (((IData)(
                                                         (vlSelfRef.__PVT__lza__DOT__p 
                                                          >> 5U)) 
                                                 << 6U) 
                                                & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                   << 1U))))) 
                    | ((0x20U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                           >> 4U)) 
                                  << 5U) | (0xffffffe0U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__p 
                                                         >> 4U)) 
                                                << 5U) 
                                               & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                  << 1U))))) 
                       | ((0x10U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 3U)) 
                                     << 4U) | (0xfffffff0U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 3U)) 
                                                   << 4U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                     << 1U))))) 
                          | ((8U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                              >> 2U)) 
                                     << 3U) | (0xfffffff8U 
                                               & (((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 2U)) 
                                                   << 3U) 
                                                  & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                     << 1U))))) 
                             | ((4U & (((IData)((vlSelfRef.__PVT__lza__DOT__g 
                                                 >> 1U)) 
                                        << 2U) | (0xfffffffcU 
                                                  & (((IData)(
                                                              (vlSelfRef.__PVT__lza__DOT__p 
                                                               >> 1U)) 
                                                      << 2U) 
                                                     & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                        << 1U))))) 
                                | ((2U & (((IData)(vlSelfRef.__PVT__lza__DOT__g) 
                                           | ((IData)(vlSelfRef.__PVT__lza__DOT__p) 
                                              & (IData)(vlSelfRef.__PVT__lza__DOT__C0))) 
                                          << 1U)) | (IData)(vlSelfRef.__PVT__sign_different_reg0))))))));
    vlSelfRef.__PVT__lza__DOT__C0 = __Vtemp_1;
    vlSelfRef.__PVT__lza__DOT__C_out_0 = (1U & ((IData)(
                                                        (vlSelfRef.__PVT__lza__DOT__g 
                                                         >> 7U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__lza__DOT__p 
                                                            >> 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__lza__DOT__C0) 
                                                      >> 7U))));
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__0(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lza__DOT__C_r1 = (1U & ((IData)(vlSelfRef.__PVT__lza__DOT__C_out_0)
                                              ? ((IData)(
                                                         (vlSelfRef.__PVT__lza__DOT__g 
                                                          >> 0xfU)) 
                                                 | ((IData)(
                                                            (vlSelfRef.__PVT__lza__DOT__p 
                                                             >> 0xfU)) 
                                                    & ((IData)(vlSelfRef.__PVT__lza__DOT__C_11) 
                                                       >> 7U)))
                                              : ((IData)(
                                                         (vlSelfRef.__PVT__lza__DOT__g 
                                                          >> 0xfU)) 
                                                 | ((IData)(
                                                            (vlSelfRef.__PVT__lza__DOT__p 
                                                             >> 0xfU)) 
                                                    & ((IData)(vlSelfRef.__PVT__lza__DOT__C_10) 
                                                       >> 7U)))));
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__1(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_31 
        = ((1U & ((IData)(vlSelfRef.__PVT__lza__DOT__C_r1)
                   ? ((IData)((vlSelfRef.__PVT__lza__DOT__g 
                               >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x17U)) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C_21) 
                                                >> 7U)))
                   : ((IData)((vlSelfRef.__PVT__lza__DOT__g 
                               >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.__PVT__lza__DOT__p 
                                                      >> 0x17U)) 
                                             & ((IData)(vlSelfRef.__PVT__lza__DOT__C_20) 
                                                >> 7U)))))
            ? (IData)(vlSelfRef.__PVT__lza__DOT__C_31)
            : (IData)(vlSelfRef.__PVT__lza__DOT__C_30));
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__2(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_34 
        = ((((IData)(vlSelfRef.__PVT__lza__DOT__C_r1)
              ? (IData)(vlSelfRef.__PVT__lza__DOT__C_21)
              : (IData)(vlSelfRef.__PVT__lza__DOT__C_20)) 
            << 0x10U) | ((((IData)(vlSelfRef.__PVT__lza__DOT__C_out_0)
                            ? (IData)(vlSelfRef.__PVT__lza__DOT__C_11)
                            : (IData)(vlSelfRef.__PVT__lza__DOT__C_10)) 
                          << 8U) | (IData)(vlSelfRef.__PVT__lza__DOT__C0)));
}

VL_INLINE_OPT void VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__3(VPE_top_float_adder_2nd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPE_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VPE_top_float_adder_2nd___act_comb__TOP__PE_top__DOT__u_float_adder_0__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*27:0*/ __PVT__lza__DOT__final_location;
    __PVT__lza__DOT__final_location = 0;
    IData/*31:0*/ lza__DOT____VdfgRegularize_ha4a43950_0_36;
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = 0;
    // Body
    lza__DOT____VdfgRegularize_ha4a43950_0_36 = ((0xf000000U 
                                                  & ((IData)(vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                                     << 0x18U)) 
                                                 | vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_34);
    vlSelfRef.__PVT__Adder_Result = ((IData)(vlSelfRef.__PVT__lza__DOT__p) 
                                     ^ (((IData)(vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_31) 
                                         << 0x18U) 
                                        | vlSelfRef.lza__DOT____VdfgRegularize_ha4a43950_0_34));
    __PVT__lza__DOT__final_location = (0xfffffffU & 
                                       ((0x8000000U 
                                         & vlSelfRef.__PVT__Adder_Result)
                                         ? ((0U == 
                                             (vlSelfRef.__PVT__lza__DOT__one_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_36))
                                             ? VL_SHIFTL_III(28,28,32, vlSelfRef.__PVT__lza__DOT__one_location, 1U)
                                             : vlSelfRef.__PVT__lza__DOT__one_location)
                                         : ((0U == 
                                             (vlSelfRef.__PVT__lza__DOT__zero_location 
                                              & lza__DOT____VdfgRegularize_ha4a43950_0_36))
                                             ? vlSelfRef.__PVT__lza__DOT__zero_location
                                             : VL_SHIFTL_III(28,28,32, vlSelfRef.__PVT__lza__DOT__zero_location, 1U))));
    vlSelfRef.__PVT__lza__DOT__Index = ((IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & __PVT__lza__DOT__final_location)))
                                         ? ((1U & __PVT__lza__DOT__final_location)
                                             ? 0x1cU
                                             : ((2U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x1bU
                                                 : 
                                                ((4U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x1aU
                                                  : 
                                                 ((8U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x19U
                                                   : 
                                                  ((0x10U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x18U
                                                    : 
                                                   ((0x20U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x17U
                                                     : 
                                                    ((0x40U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0x16U
                                                      : 0x15U)))))))
                                         : ((IData)(
                                                    (0U 
                                                     != 
                                                     (0xff00U 
                                                      & __PVT__lza__DOT__final_location)))
                                             ? ((0x100U 
                                                 & __PVT__lza__DOT__final_location)
                                                 ? 0x14U
                                                 : 
                                                ((0x200U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0x13U
                                                  : 
                                                 ((0x400U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0x12U
                                                   : 
                                                  ((0x800U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0x11U
                                                    : 
                                                   ((0x1000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 0x10U
                                                     : 
                                                    ((0x2000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 0xfU
                                                      : 
                                                     ((0x4000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 0xeU
                                                       : 0xdU)))))))
                                             : ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xff0000U 
                                                          & __PVT__lza__DOT__final_location)))
                                                 ? 
                                                ((0x10000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 0xcU
                                                  : 
                                                 ((0x20000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 0xbU
                                                   : 
                                                  ((0x40000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 0xaU
                                                    : 
                                                   ((0x80000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 9U
                                                     : 
                                                    ((0x100000U 
                                                      & __PVT__lza__DOT__final_location)
                                                      ? 8U
                                                      : 
                                                     ((0x200000U 
                                                       & __PVT__lza__DOT__final_location)
                                                       ? 7U
                                                       : 
                                                      ((0x400000U 
                                                        & __PVT__lza__DOT__final_location)
                                                        ? 6U
                                                        : 5U)))))))
                                                 : 
                                                ((0x1000000U 
                                                  & __PVT__lza__DOT__final_location)
                                                  ? 4U
                                                  : 
                                                 ((0x2000000U 
                                                   & __PVT__lza__DOT__final_location)
                                                   ? 3U
                                                   : 
                                                  ((0x4000000U 
                                                    & __PVT__lza__DOT__final_location)
                                                    ? 2U
                                                    : 
                                                   ((0x8000000U 
                                                     & __PVT__lza__DOT__final_location)
                                                     ? 1U
                                                     : 0U)))))));
}
