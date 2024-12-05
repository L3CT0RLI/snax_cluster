// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU_csa_42_compress__O1c.h"

void VFPU_csa_42_compress__O1c___ctor_var_reset(VFPU_csa_42_compress__O1c* vlSelf);

VFPU_csa_42_compress__O1c::VFPU_csa_42_compress__O1c(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_csa_42_compress__O1c___ctor_var_reset(this);
}

void VFPU_csa_42_compress__O1c::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_csa_42_compress__O1c::~VFPU_csa_42_compress__O1c() {
}
