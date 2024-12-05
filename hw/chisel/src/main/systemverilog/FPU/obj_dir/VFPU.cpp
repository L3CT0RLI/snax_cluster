// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFPU__pch.h"

//============================================================
// Constructors

VFPU::VFPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFPU__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , ext_data_i_ready{vlSymsp->TOP.ext_data_i_ready}
    , ext_data_i_valid{vlSymsp->TOP.ext_data_i_valid}
    , ext_data_o_ready{vlSymsp->TOP.ext_data_o_ready}
    , ext_data_o_valid{vlSymsp->TOP.ext_data_o_valid}
    , ext_start_i{vlSymsp->TOP.ext_start_i}
    , ext_busy_o{vlSymsp->TOP.ext_busy_o}
    , ext_data_i_bits{vlSymsp->TOP.ext_data_i_bits}
    , ext_data_o_bits{vlSymsp->TOP.ext_data_o_bits}
    , ext_csr_i_0{vlSymsp->TOP.ext_csr_i_0}
    , __PVT__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top{vlSymsp->TOP.__PVT__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top}
    , __PVT__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top{vlSymsp->TOP.__PVT__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top}
    , __PVT__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top{vlSymsp->TOP.__PVT__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top}
    , __PVT__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top{vlSymsp->TOP.__PVT__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__genblk1__DOT__u_csa_42_compress_0{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__genblk1__DOT__u_csa_42_compress_0}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1{vlSymsp->TOP.__PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFPU::VFPU(const char* _vcname__)
    : VFPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFPU::~VFPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFPU___024root___eval_debug_assertions(VFPU___024root* vlSelf);
#endif  // VL_DEBUG
void VFPU___024root___eval_static(VFPU___024root* vlSelf);
void VFPU___024root___eval_initial(VFPU___024root* vlSelf);
void VFPU___024root___eval_settle(VFPU___024root* vlSelf);
void VFPU___024root___eval(VFPU___024root* vlSelf);

void VFPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFPU___024root___eval_static(&(vlSymsp->TOP));
        VFPU___024root___eval_initial(&(vlSymsp->TOP));
        VFPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFPU::eventsPending() { return false; }

uint64_t VFPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFPU___024root___eval_final(VFPU___024root* vlSelf);

VL_ATTR_COLD void VFPU::final() {
    VFPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFPU::hierName() const { return vlSymsp->name(); }
const char* VFPU::modelName() const { return "VFPU"; }
unsigned VFPU::threads() const { return 1; }
void VFPU::prepareClone() const { contextp()->prepareClone(); }
void VFPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
