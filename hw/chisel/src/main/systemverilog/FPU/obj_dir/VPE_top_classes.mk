# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VPE_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VPE_top \
	VPE_top___024root__DepSet_h5923e332__0 \
	VPE_top___024root__DepSet_haa25c0fe__0 \
	VPE_top_float_adder_2nd__DepSet_he2bc71fd__0 \
	VPE_top_log2_X__DepSet_hd641df78__0 \
	VPE_top_log2_X__DepSet_h2d43d4c4__0 \
	VPE_top__2_power_X__DepSet_h973d1863__0 \
	VPE_top__2_power_X__DepSet_hb32b4b5e__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VPE_top__ConstPool_0 \
	VPE_top___024root__Slow \
	VPE_top___024root__DepSet_h5923e332__0__Slow \
	VPE_top___024root__DepSet_haa25c0fe__0__Slow \
	VPE_top_float_adder_2nd__Slow \
	VPE_top_float_adder_2nd__DepSet_he2bc71fd__0__Slow \
	VPE_top_float_adder_2nd__DepSet_h01bf2f3f__0__Slow \
	VPE_top_log2_X__Slow \
	VPE_top_log2_X__DepSet_hd641df78__0__Slow \
	VPE_top_log2_X__DepSet_h2d43d4c4__0__Slow \
	VPE_top__2_power_X__Slow \
	VPE_top__2_power_X__DepSet_h973d1863__0__Slow \
	VPE_top__2_power_X__DepSet_hb32b4b5e__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VPE_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
