// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__2_power_X.h"
#include "VPE_top__Syms.h"

void VPE_top__2_power_X___ctor_var_reset(VPE_top__2_power_X* vlSelf);

VPE_top__2_power_X::VPE_top__2_power_X(VPE_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPE_top__2_power_X___ctor_var_reset(this);
}

void VPE_top__2_power_X::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPE_top__2_power_X::~VPE_top__2_power_X() {
}
