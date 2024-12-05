// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU_csa_42_compress__O1d.h"

void VFPU_csa_42_compress__O1d___ctor_var_reset(VFPU_csa_42_compress__O1d* vlSelf);

VFPU_csa_42_compress__O1d::VFPU_csa_42_compress__O1d(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_csa_42_compress__O1d___ctor_var_reset(this);
}

void VFPU_csa_42_compress__O1d::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_csa_42_compress__O1d::~VFPU_csa_42_compress__O1d() {
}
