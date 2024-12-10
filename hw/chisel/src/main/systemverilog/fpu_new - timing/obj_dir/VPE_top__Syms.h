// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPE_TOP__SYMS_H_
#define VERILATED_VPE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPE_top.h"

// INCLUDE MODULE CLASSES
#include "VPE_top___024root.h"
#include "VPE_top_float_adder_2nd.h"
#include "VPE_top_log2_X.h"
#include "VPE_top__2_power_X.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VPE_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPE_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPE_top___024root              TOP;
    VPE_top__2_power_X             TOP__PE_top__DOT__u___05F2_power_X_2;
    VPE_top__2_power_X             TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X;
    VPE_top_float_adder_2nd        TOP__PE_top__DOT__u_float_adder_0;
    VPE_top_float_adder_2nd        TOP__PE_top__DOT__u_float_adder_1;
    VPE_top_log2_X                 TOP__PE_top__DOT__u_log2_X_0;
    VPE_top_log2_X                 TOP__PE_top__DOT__u_log2_X_1;

    // CONSTRUCTORS
    VPE_top__Syms(VerilatedContext* contextp, const char* namep, VPE_top* modelp);
    ~VPE_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
