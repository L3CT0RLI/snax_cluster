// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_V_2_POWER_X__SYMS_H_
#define VERILATED_V_2_POWER_X__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "V_2_power_X.h"

// INCLUDE MODULE CLASSES
#include "V_2_power_X___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)V_2_power_X__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    V_2_power_X* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    V_2_power_X___024root          TOP;

    // CONSTRUCTORS
    V_2_power_X__Syms(VerilatedContext* contextp, const char* namep, V_2_power_X* modelp);
    ~V_2_power_X__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
