// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlza_float_32__pch.h"

//============================================================
// Constructors

Vlza_float_32::Vlza_float_32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlza_float_32__Syms(contextp(), _vcname__, this)}
    , C_in{vlSymsp->TOP.C_in}
    , shift_bits{vlSymsp->TOP.shift_bits}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Result{vlSymsp->TOP.Result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlza_float_32::Vlza_float_32(const char* _vcname__)
    : Vlza_float_32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlza_float_32::~Vlza_float_32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlza_float_32___024root___eval_debug_assertions(Vlza_float_32___024root* vlSelf);
#endif  // VL_DEBUG
void Vlza_float_32___024root___eval_static(Vlza_float_32___024root* vlSelf);
void Vlza_float_32___024root___eval_initial(Vlza_float_32___024root* vlSelf);
void Vlza_float_32___024root___eval_settle(Vlza_float_32___024root* vlSelf);
void Vlza_float_32___024root___eval(Vlza_float_32___024root* vlSelf);

void Vlza_float_32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlza_float_32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlza_float_32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlza_float_32___024root___eval_static(&(vlSymsp->TOP));
        Vlza_float_32___024root___eval_initial(&(vlSymsp->TOP));
        Vlza_float_32___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlza_float_32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlza_float_32::eventsPending() { return false; }

uint64_t Vlza_float_32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlza_float_32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlza_float_32___024root___eval_final(Vlza_float_32___024root* vlSelf);

VL_ATTR_COLD void Vlza_float_32::final() {
    Vlza_float_32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlza_float_32::hierName() const { return vlSymsp->name(); }
const char* Vlza_float_32::modelName() const { return "Vlza_float_32"; }
unsigned Vlza_float_32::threads() const { return 1; }
void Vlza_float_32::prepareClone() const { contextp()->prepareClone(); }
void Vlza_float_32::atClone() const {
    contextp()->threadPoolpOnClone();
}
