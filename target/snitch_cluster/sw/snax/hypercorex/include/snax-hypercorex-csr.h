// Copyright 2024 KU Leuven.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

//-------------------------------
// Ryan Antonio <ryan.antonio@esat.kuleuven.be>
//
// Header: Headerfile for built-in HyperCoreX CSRs
//
// This headerfile contains the addresses of the HyperCoreX
// accelerator's CSRs.
//-------------------------------

// Starting addresses and offsets
#define SNAX_CSR_BASE 960
#define HYPERCOREX_STREAMER_OFFSET 45

// Loop bound registers per streamer
#define HYPERCOREX_LOOP_BOUND0_LOWDIM_A (SNAX_CSR_BASE)
#define HYPERCOREX_LOOP_BOUND1_LOWDIM_A (SNAX_CSR_BASE + 1)
#define HYPERCOREX_LOOP_BOUND0_LOWDIM_B (SNAX_CSR_BASE + 2)
#define HYPERCOREX_LOOP_BOUND1_LOWDIM_B (SNAX_CSR_BASE + 3)
#define HYPERCOREX_LOOP_BOUND0_HIGHDIM_A (SNAX_CSR_BASE + 4)
#define HYPERCOREX_LOOP_BOUND1_HIGHDIM_A (SNAX_CSR_BASE + 5)
#define HYPERCOREX_LOOP_BOUND0_HIGHDIM_B (SNAX_CSR_BASE + 6)
#define HYPERCOREX_LOOP_BOUND1_HIGHDIM_B (SNAX_CSR_BASE + 7)
#define HYPERCOREX_LOOP_BOUND0_HIGHDIM_AM (SNAX_CSR_BASE + 8)
#define HYPERCOREX_LOOP_BOUND1_HIGHDIM_AM (SNAX_CSR_BASE + 9)
#define HYPERCOREX_LOOP_BOUND0_LOWDIM_PREDICT (SNAX_CSR_BASE + 10)
#define HYPERCOREX_LOOP_BOUND1_LOWDIM_PREDICT (SNAX_CSR_BASE + 11)
#define HYPERCOREX_LOOP_BOUND0_HIGHDIM_QHV (SNAX_CSR_BASE + 12)
#define HYPERCOREX_LOOP_BOUND1_HIGHDIM_QHV (SNAX_CSR_BASE + 13)

// Temporal stride registers per streamer
#define HYPERCOREX_TEMP_STRIDE0_LOWDIM_A (SNAX_CSR_BASE + 14)
#define HYPERCOREX_TEMP_STRIDE1_LOWDIM_A (SNAX_CSR_BASE + 15)
#define HYPERCOREX_TEMP_STRIDE0_LOWDIM_B (SNAX_CSR_BASE + 16)
#define HYPERCOREX_TEMP_STRIDE1_LOWDIM_B (SNAX_CSR_BASE + 17)
#define HYPERCOREX_TEMP_STRIDE0_HIGHDIM_A (SNAX_CSR_BASE + 18)
#define HYPERCOREX_TEMP_STRIDE1_HIGHDIM_A (SNAX_CSR_BASE + 19)
#define HYPERCOREX_TEMP_STRIDE0_HIGHDIM_B (SNAX_CSR_BASE + 20)
#define HYPERCOREX_TEMP_STRIDE1_HIGHDIM_B (SNAX_CSR_BASE + 21)
#define HYPERCOREX_TEMP_STRIDE0_HIGHDIM_AM (SNAX_CSR_BASE + 22)
#define HYPERCOREX_TEMP_STRIDE1_HIGHDIM_AM (SNAX_CSR_BASE + 23)
#define HYPERCOREX_TEMP_STRIDE0_LOWDIM_PREDICT (SNAX_CSR_BASE + 24)
#define HYPERCOREX_TEMP_STRIDE1_LOWDIM_PREDICT (SNAX_CSR_BASE + 25)
#define HYPERCOREX_TEMP_STRIDE0_HIGHDIM_QHV (SNAX_CSR_BASE + 26)
#define HYPERCOREX_TEMP_STRIDE1_HIGHDIM_QHV (SNAX_CSR_BASE + 27)

// Spatial stride registers per streamer
#define HYPERCOREX_SPAT_STRIDE_LOWDIM_A (SNAX_CSR_BASE + 28)
#define HYPERCOREX_SPAT_STRIDE_LOWDIM_B (SNAX_CSR_BASE + 29)
#define HYPERCOREX_SPAT_STRIDE_HIGHDIM_A (SNAX_CSR_BASE + 30)
#define HYPERCOREX_SPAT_STRIDE_HIGHDIM_B (SNAX_CSR_BASE + 31)
#define HYPERCOREX_SPAT_STRIDE_HIGHDIM_AM (SNAX_CSR_BASE + 32)
#define HYPERCOREX_SPAT_STRIDE_LOWDIM_PREDICT (SNAX_CSR_BASE + 33)
#define HYPERCOREX_SPAT_STRIDE_HIGHDIM_QHV (SNAX_CSR_BASE + 34)

// Base pointer registers per streamer
#define HYPERCOREX_BASE_PTR_LOWDIM_A (SNAX_CSR_BASE + 35)
#define HYPERCOREX_BASE_PTR_LOWDIM_B (SNAX_CSR_BASE + 36)
#define HYPERCOREX_BASE_PTR_HIGHDIM_A (SNAX_CSR_BASE + 37)
#define HYPERCOREX_BASE_PTR_HIGHDIM_B (SNAX_CSR_BASE + 38)
#define HYPERCOREX_BASE_PTR_HIGHDIM_AM (SNAX_CSR_BASE + 39)
#define HYPERCOREX_BASE_PTR_LOWDIM_PREDICT (SNAX_CSR_BASE + 40)
#define HYPERCOREX_BASE_PTR_HIGHDIM_QHV (SNAX_CSR_BASE + 41)

// Other registers
#define HYPERCORES_STREAMER_START (SNAX_CSR_BASE + 42)
#define HYPERCORES_STREAMER_PERF_COUNTER (SNAX_CSR_BASE + 43)
#define HYPERCORES_STREAMER_BUSY (SNAX_CSR_BASE + 44)

// HyperCoreX accelerator registers
#define HYPERCOREX_CSR_OFFSET (SNAX_CSR_BASE + HYPERCOREX_STREAMER_OFFSET)
#define HYPERCOREX_CORE_SET_REG_ADDR (HYPERCOREX_CSR_OFFSET + 0)
#define HYPERCOREX_AM_NUM_PREDICT_REG_ADDR (HYPERCOREX_CSR_OFFSET + 1)
#define HYPERCOREX_AM_PREDICT_REG_ADDR (HYPERCOREX_CSR_OFFSET + 2)
#define HYPERCOREX_INST_CTRL_REG_ADDR (HYPERCOREX_CSR_OFFSET + 3)
#define HYPERCOREX_INST_WRITE_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 4)
#define HYPERCOREX_INST_WRITE_DATA_REG_ADDR (HYPERCOREX_CSR_OFFSET + 5)
#define HYPERCOREX_INST_RDDBG_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 6)
#define HYPERCOREX_INST_PC_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 7)
#define HYPERCOREX_INST_INST_AT_ADDR_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 8)
#define HYPERCOREX_INST_LOOP_CTRL_REG_ADDR (HYPERCOREX_CSR_OFFSET + 9)
#define HYPERCOREX_INST_LOOP_JUMP_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 10)
#define HYPERCOREX_INST_LOOP_END_ADDR_REG_ADDR (HYPERCOREX_CSR_OFFSET + 11)
#define HYPERCOREX_INST_LOOP_COUNT_REG_ADDR (HYPERCOREX_CSR_OFFSET + 12)
#define HYPERCOREX_CIM_SEED_REG_ADDR (HYPERCOREX_CSR_OFFSET + 13)
#define HYPERCOREX_IM_BASE_SEED_REG_ADDR (HYPERCOREX_CSR_OFFSET + 14)
