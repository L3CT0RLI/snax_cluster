// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPE_TOP_H_
#define VERILATED_VPE_TOP_H_  // guard

#include "verilated.h"

class VPE_top__Syms;
class VPE_top___024root;
class VPE_top__2_power_X;
class VPE_top_float_adder_2nd;
class VPE_top_log2_X;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VPE_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VPE_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&en,0,0);
    VL_IN8(&vld_in,0,0);
    VL_IN8(&x_max_vld,0,0);
    VL_IN8(&sum_exp_vld,0,0);
    VL_IN8(&func,5,0);
    VL_OUT8(&vld_out,0,0);
    VL_OUT8(&exp_x_minus_xmax_vld_out,0,0);
    VL_IN(&Oprand_A,31,0);
    VL_IN(&sum_exp,31,0);
    VL_IN(&x_max,31,0);
    VL_OUT(&Result,31,0);
    VL_OUT(&exp_x_minus_xmax,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VPE_top_float_adder_2nd* const __PVT__PE_top__DOT__u_float_adder_0;
    VPE_top_log2_X* const __PVT__PE_top__DOT__u_log2_X_0;
    VPE_top_log2_X* const __PVT__PE_top__DOT__u_log2_X_1;
    VPE_top_float_adder_2nd* const __PVT__PE_top__DOT__u_float_adder_1;
    VPE_top__2_power_X* const __PVT__PE_top__DOT__u___05F2_power_X_2;
    VPE_top__2_power_X* const __PVT__PE_top__DOT__u_exp_x_0__DOT__u___05F2_power_X;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VPE_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VPE_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit VPE_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VPE_top();
  private:
    VL_UNCOPYABLE(VPE_top);  ///< Copying not allowed

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
