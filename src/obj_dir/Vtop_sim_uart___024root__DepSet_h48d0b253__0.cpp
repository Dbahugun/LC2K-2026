// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim_uart.h for the primary calling header

#include "Vtop_sim_uart__pch.h"
#include "Vtop_sim_uart___024root.h"

void Vtop_sim_uart___024root___ico_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf);

void Vtop_sim_uart___024root___eval_ico(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop_sim_uart___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_sim_uart___024root___ico_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.resetLED = (1U & (~ (IData)(vlSelfRef.resetButton)));
    vlSelfRef.top_sim_uart__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.resetLED) ? 0U : (0xffU 
                                               & (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                   & ((~ (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                      & (IData)(vlSelfRef.top_sim_uart__DOT__equal)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.top_sim_uart__DOT__PC) 
                                                    + 
                                                    vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                    [vlSelfRef.top_sim_uart__DOT__PC]))
                                                   : 
                                                  (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                    & ((~ (IData)(vlSelfRef.top_sim_uart__DOT__equal)) 
                                                       & (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                    ? vlSelfRef.top_sim_uart__DOT__regA_val
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top_sim_uart__DOT__PC))))));
}

void Vtop_sim_uart___024root___eval_triggers__ico(Vtop_sim_uart___024root* vlSelf);

bool Vtop_sim_uart___024root___eval_phase__ico(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_sim_uart___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop_sim_uart___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_sim_uart___024root___eval_act(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop_sim_uart___024root___nba_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf);

void Vtop_sim_uart___024root___eval_nba(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_sim_uart___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<13>/*415:0*/ Vtop_sim_uart__ConstPool__CONST_h045c877d_0;
extern const VlWide<8>/*255:0*/ Vtop_sim_uart__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtop_sim_uart___024root___nba_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top_sim_uart__DOT__regB_loc;
    top_sim_uart__DOT__regB_loc = 0;
    CData/*0:0*/ top_sim_uart__DOT__aluMode;
    top_sim_uart__DOT__aluMode = 0;
    CData/*0:0*/ top_sim_uart__DOT__overflow;
    top_sim_uart__DOT__overflow = 0;
    IData/*31:0*/ top_sim_uart__DOT__aluMux;
    top_sim_uart__DOT__aluMux = 0;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3;
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3 = 0;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4;
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4 = 0;
    CData/*0:0*/ top_sim_uart__DOT__alu__DOT__sameMSB;
    top_sim_uart__DOT__alu__DOT__sameMSB = 0;
    IData/*31:0*/ top_sim_uart__DOT__computerDisplay__DOT__displayVal;
    top_sim_uart__DOT__computerDisplay__DOT__displayVal = 0;
    CData/*4:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex = 0;
    CData/*1:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 0;
    CData/*3:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0;
    CData/*3:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0;
    CData/*3:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0;
    CData/*7:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0;
    CData/*4:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex = 0;
    CData/*4:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen = 0;
    CData/*0:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched = 0;
    SData/*9:0*/ __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister = 0;
    IData/*31:0*/ __VdlyVal__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyVal__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyDim0__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*0:0*/ __VdlySet__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlySet__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    CData/*0:0*/ __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0;
    VL_ZERO_W(256, __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0);
    CData/*2:0*/ __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0;
    __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0 = 0;
    CData/*0:0*/ __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0;
    __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0 = 0;
    // Body
    __VdlySet__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 = 0U;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__halt_latched;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex;
    __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex 
        = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex;
    __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 = 0U;
    __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0 = 0U;
    if (VL_UNLIKELY(vlSelfRef.resetLED)) {
        VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(13, Vtop_sim_uart__ConstPool__CONST_h045c877d_0)
                     ,  &(vlSelfRef.top_sim_uart__DOT__data_memory__DOT__dataSimMem)
                     , 0, ~0ULL);
    } else if ((1U & ((vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                       [vlSelfRef.top_sim_uart__DOT__opcode] 
                       >> 1U) & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                      [vlSelfRef.top_sim_uart__DOT__opcode]))) {
        __VdlyVal__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 
            = vlSelfRef.top_sim_uart__DOT__regB_val;
        __VdlyDim0__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 
            = (0xffU & vlSelfRef.top_sim_uart__DOT__aluResult);
        __VdlySet__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0 = 1U;
    }
    if (vlSelfRef.resetLED) {
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex = 0U;
    } else if (((~ (IData)(vlSelfRef.done)) & (6U > (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex)))) {
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_he25d61a8__0 
            = vlSelfRef.top_sim_uart__DOT__PC;
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[0U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[0U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[1U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[1U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[2U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[2U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[3U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[3U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[4U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[4U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[5U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[5U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[6U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[6U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[7U] 
            = vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[7U];
        if ((5U >= (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex)))) {
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_he25d61a8__0;
            __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 
                = (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex));
            __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0 = 1U;
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[0U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[0U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[1U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[1U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[2U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[2U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[3U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[3U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[4U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[4U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[5U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[5U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[6U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[6U];
            __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[7U] 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0[7U];
            __VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0 
                = (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex));
            __VdlySet__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0 = 1U;
        }
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex)));
    }
    if (__VdlySet__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0) {
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__tracePC[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__tracePC__v0;
    }
    if (__VdlySet__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0) {
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][0U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[0U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][1U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[1U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][2U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[2U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][3U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[3U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][4U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[4U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][5U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[5U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][6U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[6U];
        vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0][7U] 
            = __VdlyVal__top_sim_uart__DOT__computerDisplay__DOT__traceRegs__v0[7U];
    }
    if (vlSelfRef.resetLED) {
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen = 0U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched = 0U;
        vlSelfRef.txBit = 1U;
    } else if ((0U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state))) {
        vlSelfRef.txBit = 1U;
        if (((~ (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__halt_latched)) 
             & (IData)(vlSelfRef.done))) {
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen 
                = vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched = 1U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 1U;
        } else if (vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__halt_latched) {
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state))) {
        if ((0xdU == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))) {
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter)));
            __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
        }
        if ((9U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))) {
            if (((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))) 
                 < (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen))) {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)));
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0U;
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
            } else {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 2U;
            }
        }
        if ((1U & (~ ((0xdU == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter)) 
                      | (9U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter)))))) {
            if (((0U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter)) 
                 & (0xeaU == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter)))) {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter)));
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister 
                    = (0x200U | ((IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__asciiByte) 
                                 << 1U));
                vlSelfRef.txBit = 0U;
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
            } else if ((0xaU == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter))) {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter)));
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0U;
            } else if ((0xeaU == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter))) {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister 
                    = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__shiftRegister), 1U));
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter)));
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
                vlSelfRef.txBit = (1U & ((IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__shiftRegister) 
                                         >> 1U));
            } else {
                __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter)));
            }
        }
    } else if ((2U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state))) {
        vlSelfRef.txBit = 1U;
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 0U;
    } else {
        __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state = 0U;
    }
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__state;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__bitCounter;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__cycleCounter;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__halt_latched 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__halt_latched;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__shiftRegister 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__shiftRegister;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__messageCounter;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__registerCounter;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex 
        = __Vdly__top_sim_uart__DOT__computerDisplay__DOT__traceIndex;
    if (((vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
          [vlSelfRef.top_sim_uart__DOT__opcode] >> 4U) 
         & (0U != (IData)(vlSelfRef.top_sim_uart__DOT__regFileReadMux)))) {
        VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__regFileReadMux), 5U)), vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers, 
                        ((5U == (IData)(vlSelfRef.top_sim_uart__DOT__opcode))
                          ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top_sim_uart__DOT__PC)))
                          : ((0x20U & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                              [vlSelfRef.top_sim_uart__DOT__opcode])
                              ? vlSelfRef.top_sim_uart__DOT__aluResult
                              : vlSelfRef.top_sim_uart__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.top_sim_uart__DOT__aluResult)])));
    }
    top_sim_uart__DOT__computerDisplay__DOT__displayVal 
        = ((0U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
            ? (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)
            : ((8U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                ? ((5U >= (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                    ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__tracePC
                   [(7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))]
                    : 0U) : (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U)))
                               ? 0U : (vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs
                                       [((5U >= (7U 
                                                 & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                                          ? (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))
                                          : 0U)][(((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))))) 
                             | (vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs
                                [((5U >= (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                                   ? (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))
                                   : 0U)][(7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U) 
                                                 >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))))));
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__asciiByte 
        = (0xffU & ((8U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                     ? ((4U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                         ? 0xaU : ((2U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                    ? ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & top_sim_uart__DOT__computerDisplay__DOT__displayVal)]
                                        : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 4U))])
                                    : ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 8U))]
                                        : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 0xcU))])))
                     : ((4U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                         ? ((2U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                             ? ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x10U))]
                                 : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x14U))])
                             : ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x18U))]
                                 : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                  >> 0x1cU)])) : ((2U 
                                                   & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 0x20U
                                                    : 0x3aU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 
                                                    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                                    [
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                      ? 0x43U
                                                      : 
                                                     ((IData)(0x30U) 
                                                      + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 0x54U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                      ? 0x50U
                                                      : 0x52U)))))));
    if (__VdlySet__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0) {
        vlSelfRef.top_sim_uart__DOT__data_memory__DOT__dataSimMem[__VdlyDim0__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0] 
            = __VdlyVal__top_sim_uart__DOT__data_memory__DOT__dataSimMem__v0;
    }
    if ((1U & ((~ (IData)(vlSelfRef.done)) | (IData)(vlSelfRef.resetLED)))) {
        vlSelfRef.top_sim_uart__DOT__PC = vlSelfRef.top_sim_uart__DOT__PC_File__DOT__newPC;
    }
    vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x16U));
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x18U));
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x17U));
    if (vlSelfRef.resetLED) {
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[0U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[1U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[2U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[3U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[4U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[5U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[6U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[7U] 
            = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.top_sim_uart__DOT__regA_val = (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                    [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                    >> 0x13U)), 5U)))
                                               ? 0U
                                               : (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                         [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                         >> 0x13U)), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                        [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                        >> 0x13U)), 5U))))) 
                                             | (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                (7U 
                                                 & (VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                      [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                      >> 0x13U)), 5U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                     [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                     >> 0x13U)), 5U))));
    top_sim_uart__DOT__regB_loc = (7U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                         [vlSelfRef.top_sim_uart__DOT__PC] 
                                         >> 0x10U));
    vlSelfRef.top_sim_uart__DOT__opcode = (7U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.top_sim_uart__DOT__PC] 
                                                 >> 0x16U));
    vlSelfRef.done = ((IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4) 
                      & ((~ (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                         & (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3)));
    vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1 
        = ((~ (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3)) 
           & (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4));
    vlSelfRef.top_sim_uart__DOT__regB_val = (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U)))
                                               ? 0U
                                               : (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))))) 
                                             | (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                (7U 
                                                 & (VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))));
    vlSelfRef.top_sim_uart__DOT__regFileReadMux = (7U 
                                                   & ((0x80U 
                                                       & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                                       [vlSelfRef.top_sim_uart__DOT__opcode])
                                                       ? 
                                                      vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                      [vlSelfRef.top_sim_uart__DOT__PC]
                                                       : (IData)(top_sim_uart__DOT__regB_loc)));
    top_sim_uart__DOT__aluMode = (1U & (vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                        [vlSelfRef.top_sim_uart__DOT__opcode] 
                                        >> 2U));
    top_sim_uart__DOT__aluMux = ((8U & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.top_sim_uart__DOT__opcode])
                                  ? vlSelfRef.top_sim_uart__DOT__regB_val
                                  : (((- (IData)((1U 
                                                  & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                     [vlSelfRef.top_sim_uart__DOT__PC] 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.top_sim_uart__DOT__PC])));
    vlSelfRef.top_sim_uart__DOT__aluResult = ((IData)(top_sim_uart__DOT__aluMode)
                                               ? ((IData)(top_sim_uart__DOT__aluMode)
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                    | top_sim_uart__DOT__aluMux))
                                                   : 
                                                  (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                   + top_sim_uart__DOT__aluMux))
                                               : (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                  + top_sim_uart__DOT__aluMux));
    top_sim_uart__DOT__alu__DOT__sameMSB = (1U & (~ 
                                                  ((vlSelfRef.top_sim_uart__DOT__regA_val 
                                                    ^ top_sim_uart__DOT__aluMux) 
                                                   >> 0x1fU)));
    top_sim_uart__DOT__overflow = (((vlSelfRef.top_sim_uart__DOT__aluResult 
                                     ^ vlSelfRef.top_sim_uart__DOT__regA_val) 
                                    >> 0x1fU) & (IData)(top_sim_uart__DOT__alu__DOT__sameMSB));
    vlSelfRef.top_sim_uart__DOT__equal = (vlSelfRef.top_sim_uart__DOT__regA_val 
                                          == top_sim_uart__DOT__aluMux);
    vlSelfRef.top_sim_uart__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.resetLED) ? 0U : (0xffU 
                                               & (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                   & ((~ (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                      & (IData)(vlSelfRef.top_sim_uart__DOT__equal)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.top_sim_uart__DOT__PC) 
                                                    + 
                                                    vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                    [vlSelfRef.top_sim_uart__DOT__PC]))
                                                   : 
                                                  (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                    & ((~ (IData)(vlSelfRef.top_sim_uart__DOT__equal)) 
                                                       & (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                    ? vlSelfRef.top_sim_uart__DOT__regA_val
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top_sim_uart__DOT__PC))))));
    vlSelfRef.ovf = top_sim_uart__DOT__overflow;
}

void Vtop_sim_uart___024root___eval_triggers__act(Vtop_sim_uart___024root* vlSelf);

bool Vtop_sim_uart___024root___eval_phase__act(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_sim_uart___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop_sim_uart___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_sim_uart___024root___eval_phase__nba(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_sim_uart___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__ico(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__nba(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__act(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_sim_uart___024root___eval(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop_sim_uart___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top_sim_uart.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop_sim_uart___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_sim_uart___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top_sim_uart.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_sim_uart___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top_sim_uart.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop_sim_uart___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop_sim_uart___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_sim_uart___024root___eval_debug_assertions(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.resetButton & 0xfeU))) {
        Verilated::overWidthError("resetButton");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
