// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPU.h for the primary calling header

#include "VFPU__pch.h"
#include "VFPU__Syms.h"
#include "VFPU___024root.h"

void VFPU___024root___ctor_var_reset(VFPU___024root* vlSelf);

VFPU___024root::VFPU___024root(VFPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFPU___024root___ctor_var_reset(this);
}

void VFPU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFPU___024root::~VFPU___024root() {
}
