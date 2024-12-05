// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFPU__SYMS_H_
#define VERILATED_VFPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFPU.h"

// INCLUDE MODULE CLASSES
#include "VFPU___024root.h"
#include "VFPU_PE_top__N80_NB4.h"
#include "VFPU_log2_X.h"
#include "VFPU_float_adder_2nd.h"
#include "VFPU__2_power_X.h"
#include "VFPU_csa_42_compress__O1b.h"
#include "VFPU_csa_42_compress__O1c.h"
#include "VFPU_csa_42_compress__O1d.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VFPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFPU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFPU___024root                 TOP;
    VFPU_PE_top__N80_NB4           TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u___05F2_power_X_2;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u_exp_x_0__DOT__u___05F2_power_X;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u_float_adder_0;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u_float_adder_1;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u_log2_X_0;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top__u_log2_X_1;
    VFPU_PE_top__N80_NB4           TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u___05F2_power_X_2;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u_exp_x_0__DOT__u___05F2_power_X;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u_float_adder_0;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u_float_adder_1;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u_log2_X_0;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top__u_log2_X_1;
    VFPU_PE_top__N80_NB4           TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u___05F2_power_X_2;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u_exp_x_0__DOT__u___05F2_power_X;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u_float_adder_0;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u_float_adder_1;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u_log2_X_0;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top__u_log2_X_1;
    VFPU_PE_top__N80_NB4           TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u___05F2_power_X_2;
    VFPU__2_power_X                TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_exp_x_0__DOT__u___05F2_power_X;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_float_adder_0;
    VFPU_float_adder_2nd           TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_float_adder_1;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_0;
    VFPU_log2_X                    TOP__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top__u_log2_X_1;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1c      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d      TOP__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;

    // CONSTRUCTORS
    VFPU__Syms(VerilatedContext* contextp, const char* namep, VFPU* modelp);
    ~VFPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
