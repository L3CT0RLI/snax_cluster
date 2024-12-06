// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_top.h for the primary calling header

#include "VPE_top__pch.h"
#include "VPE_top__Syms.h"
#include "VPE_top___024root.h"

void VPE_top___024root___ctor_var_reset(VPE_top___024root* vlSelf);

VPE_top___024root::VPE_top___024root(VPE_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPE_top___024root___ctor_var_reset(this);
}

void VPE_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPE_top___024root::~VPE_top___024root() {
}
