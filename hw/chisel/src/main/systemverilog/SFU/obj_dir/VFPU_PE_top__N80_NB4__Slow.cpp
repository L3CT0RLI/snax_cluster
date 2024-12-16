// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU__Syms.h"

void VFPU_PE_top__N80_NB4___ctor_var_reset(VFPU_PE_top__N80_NB4* vlSelf);

VFPU_PE_top__N80_NB4::VFPU_PE_top__N80_NB4(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU_PE_top__N80_NB4___ctor_var_reset(this);
}

void VFPU_PE_top__N80_NB4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU_PE_top__N80_NB4::~VFPU_PE_top__N80_NB4() {
}
