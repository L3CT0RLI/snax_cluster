// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU_float_adder_2nd.h"

void VFPU_float_adder_2nd___ctor_var_reset(VFPU_float_adder_2nd* vlSelf);

VFPU_float_adder_2nd::VFPU_float_adder_2nd(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_float_adder_2nd___ctor_var_reset(this);
}

void VFPU_float_adder_2nd::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_float_adder_2nd::~VFPU_float_adder_2nd() {
}
