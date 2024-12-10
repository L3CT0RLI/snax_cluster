// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFPU.h for the primary calling header

#ifndef VERILATED_VFPU_CSA_42_COMPRESS__O1C_H_
#define VERILATED_VFPU_CSA_42_COMPRESS__O1C_H_  // guard

#include "verilated.h"


class VFPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFPU_csa_42_compress__O1c final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellout__csa_1bit_compressor_i__S;
    CData/*0:0*/ __PVT__gen__BRA__1__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__2__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__3__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__4__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__5__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__6__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__7__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__8__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__9__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__10__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__11__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__12__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__13__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__14__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__15__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__16__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__17__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__18__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__19__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__20__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__21__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__22__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__23__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__24__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__25__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__26__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    CData/*0:0*/ __PVT__gen__BRA__27__KET____DOT__csa_1bit_compressor_i__DOT__mid2;
    VL_IN(op1,27,0);
    VL_IN(op2,27,0);
    VL_IN(op3,27,0);
    VL_IN(op4,27,0);
    VL_OUT(C,28,0);
    VL_OUT(S,28,0);
    IData/*28:0*/ __PVT__E_in;

    // INTERNAL VARIABLES
    VFPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFPU_csa_42_compress__O1c(VFPU__Syms* symsp, const char* v__name);
    ~VFPU_csa_42_compress__O1c();
    VL_UNCOPYABLE(VFPU_csa_42_compress__O1c);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
