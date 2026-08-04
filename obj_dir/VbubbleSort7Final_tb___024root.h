// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VbubbleSort7Final_tb.h for the primary calling header

#ifndef VERILATED_VBUBBLESORT7FINAL_TB___024ROOT_H_
#define VERILATED_VBUBBLESORT7FINAL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VbubbleSort7Final_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VbubbleSort7Final_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bubbleSort7Final_tb__DOT__clk;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__rst;
    CData/*7:0*/ bubbleSort7Final_tb__DOT__dut__DOT__PC;
    CData/*2:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regB_loc;
    CData/*2:0*/ bubbleSort7Final_tb__DOT__dut__DOT__opcode;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regFileWrEn;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__aluMode;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__zeroFlag;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__equal;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__overflow;
    CData/*2:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regFileReadMux;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4;
    CData/*7:0*/ bubbleSort7Final_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    CData/*0:0*/ bubbleSort7Final_tb__DOT__dut__DOT__alu__DOT__sameMSB;
    CData/*0:0*/ __VdlyVal__bubbleSort7Final_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__bubbleSort7Final_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bubbleSort7Final_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regA_val;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regB_val;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__regDest_val;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__aluResult;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__aluMux;
    VlWide<8>/*255:0*/ bubbleSort7Final_tb__DOT__dut__DOT__reg_file__DOT__registers;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ bubbleSort7Final_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> bubbleSort7Final_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem;
    VlUnpacked<CData/*7:0*/, 8> bubbleSort7Final_tb__DOT__dut__DOT__control_prom__DOT__control_rom;
    VlUnpacked<IData/*31:0*/, 256> bubbleSort7Final_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf77bbe39__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VbubbleSort7Final_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VbubbleSort7Final_tb___024root(VbubbleSort7Final_tb__Syms* symsp, const char* v__name);
    ~VbubbleSort7Final_tb___024root();
    VL_UNCOPYABLE(VbubbleSort7Final_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
