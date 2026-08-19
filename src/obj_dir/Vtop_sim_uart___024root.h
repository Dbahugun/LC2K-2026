// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_sim_uart.h for the primary calling header

#ifndef VERILATED_VTOP_SIM_UART___024ROOT_H_
#define VERILATED_VTOP_SIM_UART___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_sim_uart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_sim_uart___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetButton,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(ovf,0,0);
    VL_OUT8(txBit,0,0);
    VL_OUT8(resetLED,0,0);
    CData/*7:0*/ top_sim_uart__DOT__PC;
    CData/*2:0*/ top_sim_uart__DOT__opcode;
    CData/*0:0*/ top_sim_uart__DOT__equal;
    CData/*2:0*/ top_sim_uart__DOT__regFileReadMux;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2;
    CData/*7:0*/ top_sim_uart__DOT__PC_File__DOT__newPC;
    CData/*1:0*/ top_sim_uart__DOT__computerDisplay__DOT__state;
    CData/*4:0*/ top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex;
    CData/*4:0*/ top_sim_uart__DOT__computerDisplay__DOT__traceIndex;
    CData/*4:0*/ top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen;
    CData/*7:0*/ top_sim_uart__DOT__computerDisplay__DOT__cycleCounter;
    CData/*3:0*/ top_sim_uart__DOT__computerDisplay__DOT__registerCounter;
    CData/*3:0*/ top_sim_uart__DOT__computerDisplay__DOT__bitCounter;
    CData/*3:0*/ top_sim_uart__DOT__computerDisplay__DOT__messageCounter;
    CData/*7:0*/ top_sim_uart__DOT__computerDisplay__DOT__asciiByte;
    CData/*0:0*/ top_sim_uart__DOT__computerDisplay__DOT__halt_latched;
    CData/*7:0*/ top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_he25d61a8__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top_sim_uart__DOT__computerDisplay__DOT__shiftRegister;
    IData/*31:0*/ top_sim_uart__DOT__regA_val;
    IData/*31:0*/ top_sim_uart__DOT__regB_val;
    IData/*31:0*/ top_sim_uart__DOT__aluResult;
    VlWide<8>/*255:0*/ top_sim_uart__DOT__reg_file__DOT__registers;
    VlWide<8>/*255:0*/ top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> top_sim_uart__DOT__instruction__DOT__instructionSimMem;
    VlUnpacked<CData/*7:0*/, 8> top_sim_uart__DOT__control_prom__DOT__control_rom;
    VlUnpacked<IData/*31:0*/, 256> top_sim_uart__DOT__data_memory__DOT__dataSimMem;
    VlUnpacked<CData/*7:0*/, 6> top_sim_uart__DOT__computerDisplay__DOT__tracePC;
    VlUnpacked<VlWide<8>/*255:0*/, 6> top_sim_uart__DOT__computerDisplay__DOT__traceRegs;
    VlUnpacked<CData/*7:0*/, 16> top_sim_uart__DOT__computerDisplay__DOT__ascii;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_sim_uart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_sim_uart___024root(Vtop_sim_uart__Syms* symsp, const char* v__name);
    ~Vtop_sim_uart___024root();
    VL_UNCOPYABLE(Vtop_sim_uart___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
