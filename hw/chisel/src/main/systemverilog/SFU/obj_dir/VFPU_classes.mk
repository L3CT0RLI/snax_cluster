# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VFPU.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VFPU \
	VFPU___024root__DepSet_hc81a376f__0 \
	VFPU___024root__DepSet_ha7563f19__0 \
	VFPU_PE_top__N80_NB4__DepSet_hcad39744__0 \
	VFPU_PE_top__N80_NB4__DepSet_h5af85364__0 \
	VFPU_PE_top__N80_NB4__DepSet_h5af85364__1 \
	VFPU_PE_top__N80_NB4__DepSet_h9525ee99__0 \
	VFPU_PE_top__N80_NB4__DepSet_h18a44aa7__0 \
	VFPU_log2_X__DepSet_h4edd4658__0 \
	VFPU_log2_X__DepSet_h4edd4658__1 \
	VFPU_log2_X__DepSet_h4edd4658__2 \
	VFPU_log2_X__DepSet_h29914ff0__0 \
	VFPU_float_adder_2nd__DepSet_hd6c9b7cf__0 \
	VFPU_float_adder_2nd__DepSet_hd6c9b7cf__1 \
	VFPU__2_power_X__DepSet_h42ba05cd__0 \
	VFPU__2_power_X__DepSet_h583e87df__0 \
	VFPU_csa_42_compress__O1b__DepSet_h69401ebd__0 \
	VFPU_csa_42_compress__O1c__DepSet_hd6b95921__0 \
	VFPU_csa_42_compress__O1d__DepSet_h2c1f4b44__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VFPU__ConstPool_0 \
	VFPU___024root__Slow \
	VFPU___024root__DepSet_hc81a376f__0__Slow \
	VFPU___024root__DepSet_ha7563f19__0__Slow \
	VFPU_PE_top__N80_NB4__Slow \
	VFPU_PE_top__N80_NB4__DepSet_hc3279035__0__Slow \
	VFPU_PE_top__N80_NB4__DepSet_hcad39744__0__Slow \
	VFPU_log2_X__Slow \
	VFPU_log2_X__DepSet_h29914ff0__0__Slow \
	VFPU_float_adder_2nd__Slow \
	VFPU_float_adder_2nd__DepSet_hd6c9b7cf__0__Slow \
	VFPU_float_adder_2nd__DepSet_hd6c9b7cf__1__Slow \
	VFPU_float_adder_2nd__DepSet_ha1a4bf79__0__Slow \
	VFPU__2_power_X__Slow \
	VFPU__2_power_X__DepSet_h42ba05cd__0__Slow \
	VFPU__2_power_X__DepSet_h583e87df__0__Slow \
	VFPU__2_power_X__DepSet_h583e87df__1__Slow \
	VFPU_csa_42_compress__O1b__Slow \
	VFPU_csa_42_compress__O1b__DepSet_h461c18cb__0__Slow \
	VFPU_csa_42_compress__O1c__Slow \
	VFPU_csa_42_compress__O1c__DepSet_ha1f55967__0__Slow \
	VFPU_csa_42_compress__O1d__Slow \
	VFPU_csa_42_compress__O1d__DepSet_h8b534b04__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VFPU__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
