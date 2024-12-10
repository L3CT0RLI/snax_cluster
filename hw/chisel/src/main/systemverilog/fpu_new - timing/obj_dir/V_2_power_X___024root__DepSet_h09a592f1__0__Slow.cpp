// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V_2_power_X.h for the primary calling header

#include "V_2_power_X__pch.h"
#include "V_2_power_X__Syms.h"
#include "V_2_power_X___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void V_2_power_X___024root___dump_triggers__stl(V_2_power_X___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void V_2_power_X___024root___eval_triggers__stl(V_2_power_X___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    V_2_power_X__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_2_power_X___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        V_2_power_X___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
