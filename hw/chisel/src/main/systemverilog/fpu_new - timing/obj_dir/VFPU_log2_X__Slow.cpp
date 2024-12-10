// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU_log2_X.h"

void VFPU_log2_X___ctor_var_reset(VFPU_log2_X* vlSelf);

VFPU_log2_X::VFPU_log2_X(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_log2_X___ctor_var_reset(this);
}

void VFPU_log2_X::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_log2_X::~VFPU_log2_X() {
}
