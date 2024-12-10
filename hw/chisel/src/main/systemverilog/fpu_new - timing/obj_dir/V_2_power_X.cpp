// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "V_2_power_X__pch.h"

//============================================================
// Constructors

V_2_power_X::V_2_power_X(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new V_2_power_X__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , en{vlSymsp->TOP.en}
    , vld_in{vlSymsp->TOP.vld_in}
    , vld_out{vlSymsp->TOP.vld_out}
    , Oprand_A{vlSymsp->TOP.Oprand_A}
    , Result{vlSymsp->TOP.Result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

V_2_power_X::V_2_power_X(const char* _vcname__)
    : V_2_power_X(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

V_2_power_X::~V_2_power_X() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void V_2_power_X___024root___eval_debug_assertions(V_2_power_X___024root* vlSelf);
#endif  // VL_DEBUG
void V_2_power_X___024root___eval_static(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___eval_initial(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___eval_settle(V_2_power_X___024root* vlSelf);
void V_2_power_X___024root___eval(V_2_power_X___024root* vlSelf);

void V_2_power_X::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V_2_power_X::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    V_2_power_X___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        V_2_power_X___024root___eval_static(&(vlSymsp->TOP));
        V_2_power_X___024root___eval_initial(&(vlSymsp->TOP));
        V_2_power_X___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    V_2_power_X___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool V_2_power_X::eventsPending() { return false; }

uint64_t V_2_power_X::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* V_2_power_X::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void V_2_power_X___024root___eval_final(V_2_power_X___024root* vlSelf);

VL_ATTR_COLD void V_2_power_X::final() {
    V_2_power_X___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* V_2_power_X::hierName() const { return vlSymsp->name(); }
const char* V_2_power_X::modelName() const { return "V_2_power_X"; }
unsigned V_2_power_X::threads() const { return 1; }
void V_2_power_X::prepareClone() const { contextp()->prepareClone(); }
void V_2_power_X::atClone() const {
    contextp()->threadPoolpOnClone();
}
