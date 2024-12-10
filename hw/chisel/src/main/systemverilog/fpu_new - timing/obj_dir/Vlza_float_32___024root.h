// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlza_float_32.h for the primary calling header

#ifndef VERILATED_VLZA_FLOAT_32___024ROOT_H_
#define VERILATED_VLZA_FLOAT_32___024ROOT_H_  // guard

#include "verilated.h"


class Vlza_float_32__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlza_float_32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(C_in,0,0);
    VL_OUT8(shift_bits,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VL_OUT(Result,31,0);
    IData/*27:0*/ lza_float_32__DOT__zero_F;
    IData/*27:0*/ lza_float_32__DOT__one_F;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlza_float_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlza_float_32___024root(Vlza_float_32__Syms* symsp, const char* v__name);
    ~Vlza_float_32___024root();
    VL_UNCOPYABLE(Vlza_float_32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
