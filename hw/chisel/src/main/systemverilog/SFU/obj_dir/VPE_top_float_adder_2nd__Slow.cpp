// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__Syms.h"
#include "VPE_top_float_adder_2nd.h"

void VPE_top_float_adder_2nd___ctor_var_reset(VPE_top_float_adder_2nd* vlSelf);

VPE_top_float_adder_2nd::VPE_top_float_adder_2nd(VPE_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPE_top_float_adder_2nd___ctor_var_reset(this);
}

void VPE_top_float_adder_2nd::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPE_top_float_adder_2nd::~VPE_top_float_adder_2nd() {
}
