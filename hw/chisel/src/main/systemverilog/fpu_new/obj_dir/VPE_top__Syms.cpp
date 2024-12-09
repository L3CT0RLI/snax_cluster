// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPE_top__pch.h"
#include "VPE_top.h"
#include "VPE_top___024root.h"
#include "VPE_top_float_adder_2nd.h"
#include "VPE_top_log2_X.h"
#include "VPE_top__2_power_X.h"

// FUNCTIONS
VPE_top__Syms::~VPE_top__Syms()
{
}

VPE_top__Syms::VPE_top__Syms(VerilatedContext* contextp, const char* namep, VPE_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__PE_top__DOT__u___05F2_power_X_2{this, Verilated::catName(namep, "PE_top.u__2_power_X_2")}
    , TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X{this, Verilated::catName(namep, "PE_top.u_exp_x_0.u__2_power_X")}
    , TOP__PE_top__DOT__u_float_adder_0{this, Verilated::catName(namep, "PE_top.u_float_adder_0")}
    , TOP__PE_top__DOT__u_float_adder_1{this, Verilated::catName(namep, "PE_top.u_float_adder_1")}
    , TOP__PE_top__DOT__u_log2_X_0{this, Verilated::catName(namep, "PE_top.u_log2_X_0")}
    , TOP__PE_top__DOT__u_log2_X_1{this, Verilated::catName(namep, "PE_top.u_log2_X_1")}
{
        // Check resources
        Verilated::stackCheck(7619);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__PE_top__DOT__u___05F2_power_X_2 = &TOP__PE_top__DOT__u___05F2_power_X_2;
    TOP.__PVT__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X = &TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X;
    TOP.__PVT__PE_top__DOT__u_float_adder_0 = &TOP__PE_top__DOT__u_float_adder_0;
    TOP.__PVT__PE_top__DOT__u_float_adder_1 = &TOP__PE_top__DOT__u_float_adder_1;
    TOP.__PVT__PE_top__DOT__u_log2_X_0 = &TOP__PE_top__DOT__u_log2_X_0;
    TOP.__PVT__PE_top__DOT__u_log2_X_1 = &TOP__PE_top__DOT__u_log2_X_1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__PE_top__DOT__u___05F2_power_X_2.__Vconfigure(true);
    TOP__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X.__Vconfigure(false);
    TOP__PE_top__DOT__u_float_adder_0.__Vconfigure(true);
    TOP__PE_top__DOT__u_float_adder_1.__Vconfigure(false);
    TOP__PE_top__DOT__u_log2_X_0.__Vconfigure(true);
    TOP__PE_top__DOT__u_log2_X_1.__Vconfigure(false);
}
