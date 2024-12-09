// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPE_top__pch.h"

//============================================================
// Constructors

VPE_top::VPE_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPE_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , en{vlSymsp->TOP.en}
    , vld_in{vlSymsp->TOP.vld_in}
    , x_max_vld{vlSymsp->TOP.x_max_vld}
    , sum_exp_vld{vlSymsp->TOP.sum_exp_vld}
    , func{vlSymsp->TOP.func}
    , vld_out{vlSymsp->TOP.vld_out}
    , exp_x_minus_xmax_vld_out{vlSymsp->TOP.exp_x_minus_xmax_vld_out}
    , Oprand_A{vlSymsp->TOP.Oprand_A}
    , sum_exp{vlSymsp->TOP.sum_exp}
    , x_max{vlSymsp->TOP.x_max}
    , Result{vlSymsp->TOP.Result}
    , exp_x_minus_xmax{vlSymsp->TOP.exp_x_minus_xmax}
    , __PVT__PE_top__DOT__u_float_adder_0{vlSymsp->TOP.__PVT__PE_top__DOT__u_float_adder_0}
    , __PVT__PE_top__DOT__u_log2_X_0{vlSymsp->TOP.__PVT__PE_top__DOT__u_log2_X_0}
    , __PVT__PE_top__DOT__u_log2_X_1{vlSymsp->TOP.__PVT__PE_top__DOT__u_log2_X_1}
    , __PVT__PE_top__DOT__u_float_adder_1{vlSymsp->TOP.__PVT__PE_top__DOT__u_float_adder_1}
    , __PVT__PE_top__DOT__u___05F2_power_X_2{vlSymsp->TOP.__PVT__PE_top__DOT__u___05F2_power_X_2}
    , __PVT__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X{vlSymsp->TOP.__PVT__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPE_top::VPE_top(const char* _vcname__)
    : VPE_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPE_top::~VPE_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPE_top___024root___eval_debug_assertions(VPE_top___024root* vlSelf);
#endif  // VL_DEBUG
void VPE_top___024root___eval_static(VPE_top___024root* vlSelf);
void VPE_top___024root___eval_initial(VPE_top___024root* vlSelf);
void VPE_top___024root___eval_settle(VPE_top___024root* vlSelf);
void VPE_top___024root___eval(VPE_top___024root* vlSelf);

void VPE_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPE_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPE_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPE_top___024root___eval_static(&(vlSymsp->TOP));
        VPE_top___024root___eval_initial(&(vlSymsp->TOP));
        VPE_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPE_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPE_top::eventsPending() { return false; }

uint64_t VPE_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPE_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPE_top___024root___eval_final(VPE_top___024root* vlSelf);

VL_ATTR_COLD void VPE_top::final() {
    VPE_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPE_top::hierName() const { return vlSymsp->name(); }
const char* VPE_top::modelName() const { return "VPE_top"; }
unsigned VPE_top::threads() const { return 1; }
void VPE_top::prepareClone() const { contextp()->prepareClone(); }
void VPE_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
