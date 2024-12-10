// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__2_power_X.h"
#include "VFPU__Syms.h"

void VFPU__2_power_X___ctor_var_reset(VFPU__2_power_X* vlSelf);

VFPU__2_power_X::VFPU__2_power_X(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU__2_power_X___ctor_var_reset(this);
}

void VFPU__2_power_X::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU__2_power_X::~VFPU__2_power_X() {
}
