// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLZA_FLOAT_32__SYMS_H_
#define VERILATED_VLZA_FLOAT_32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlza_float_32.h"

// INCLUDE MODULE CLASSES
#include "Vlza_float_32___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlza_float_32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlza_float_32* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlza_float_32___024root        TOP;

    // CONSTRUCTORS
    Vlza_float_32__Syms(VerilatedContext* contextp, const char* namep, Vlza_float_32* modelp);
    ~Vlza_float_32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
