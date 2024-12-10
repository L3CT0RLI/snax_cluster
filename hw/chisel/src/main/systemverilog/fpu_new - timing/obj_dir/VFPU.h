// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFPU_H_
#define VERILATED_VFPU_H_  // guard

#include "verilated.h"

class VFPU__Syms;
class VFPU___024root;
class VFPU_PE_top__N80_NB4;
class VFPU_csa_42_compress__O1b;
class VFPU_csa_42_compress__O1c;
class VFPU_csa_42_compress__O1d;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VFPU VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VFPU__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&ext_data_i_ready,0,0);
    VL_IN8(&ext_data_i_valid,0,0);
    VL_IN8(&ext_data_o_ready,0,0);
    VL_OUT8(&ext_data_o_valid,0,0);
    VL_IN8(&ext_start_i,0,0);
    VL_OUT8(&ext_busy_o,0,0);
    VL_INW(&ext_data_i_bits,127,0,4);
    VL_OUTW(&ext_data_o_bits,127,0,4);
    VL_IN(&ext_csr_i_0,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VFPU_PE_top__N80_NB4* const __PVT__FPU__DOT__gen_pe__BRA__0__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* const __PVT__FPU__DOT__gen_pe__BRA__1__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* const __PVT__FPU__DOT__gen_pe__BRA__2__KET____DOT__u_PE_top;
    VFPU_PE_top__N80_NB4* const __PVT__FPU__DOT__gen_pe__BRA__3__KET____DOT__u_PE_top;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__4__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__5__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__6__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1b* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__0__KET____DOT__gen_blocks_in__BRA__7__KET____DOT__genblk1__DOT__u_csa_42_compress_0;
    VFPU_csa_42_compress__O1c* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__2__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1c* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__1__KET____DOT__gen_blocks_in__BRA__3__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__0__KET____DOT__genblk1__DOT__u_csa_42_compress_1;
    VFPU_csa_42_compress__O1d* const __PVT__FPU__DOT__u_fp_32_oprand_tree__DOT__u_CSA_adder_gen__DOT__gen_blocks__BRA__2__KET____DOT__gen_blocks_in__BRA__1__KET____DOT__genblk1__DOT__u_csa_42_compress_1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VFPU___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VFPU(VerilatedContext* contextp, const char* name = "TOP");
    explicit VFPU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VFPU();
  private:
    VL_UNCOPYABLE(VFPU);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
