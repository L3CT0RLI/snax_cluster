// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "V_2_power_X__pch.h"
#include "V_2_power_X.h"
#include "V_2_power_X___024root.h"

// FUNCTIONS
V_2_power_X__Syms::~V_2_power_X__Syms()
{
}

V_2_power_X__Syms::V_2_power_X__Syms(VerilatedContext* contextp, const char* namep, V_2_power_X* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1163);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
