// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlza_float_32.h for the primary calling header

#include "Vlza_float_32__pch.h"
#include "Vlza_float_32__Syms.h"
#include "Vlza_float_32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlza_float_32___024root___dump_triggers__stl(Vlza_float_32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlza_float_32___024root___eval_triggers__stl(Vlza_float_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlza_float_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlza_float_32___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlza_float_32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
