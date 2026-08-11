// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tb.h for the primary calling header

#ifndef VERILATED_VUART_TB___024ROOT_H_
#define VERILATED_VUART_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_tb__DOT__clk;
    CData/*0:0*/ uart_tb__DOT__txOut;
    CData/*0:0*/ uart_tb__DOT__rst;
    CData/*7:0*/ uart_tb__DOT__rx_byte;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__pcDisable;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__PC;
    CData/*2:0*/ uart_tb__DOT__dut__DOT__regB_loc;
    CData/*2:0*/ uart_tb__DOT__dut__DOT__opcode;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__aluMode;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__zeroFlag;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__equal;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__overflow;
    CData/*2:0*/ uart_tb__DOT__dut__DOT__regFileReadMux;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__txCycleTrigger;
    CData/*0:0*/ uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1;
    CData/*0:0*/ uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__alu__DOT__sameMSB;
    CData/*1:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched;
    CData/*0:0*/ __VdlyVal__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__txOut__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    IData/*31:0*/ uart_tb__DOT__byte_count;
    IData/*31:0*/ uart_tb__DOT__line_count;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__regA_val;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__regB_val;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__regDest_val;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__aluResult;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__aluMux;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__haltCycleCount;
    VlWide<8>/*255:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__registers;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j;
    VlWide<8>/*255:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenCycleCount;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem;
    VlUnpacked<CData/*7:0*/, 8> uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom;
    VlUnpacked<IData/*31:0*/, 256> uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem;
    VlUnpacked<CData/*7:0*/, 16> uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string uart_tb__DOT__line_buf;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5928e91a__0;
    VlTriggerScheduler __VtrigSched_h24b2bb95__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_tb___024root(Vuart_tb__Syms* symsp, const char* v__name);
    ~Vuart_tb___024root();
    VL_UNCOPYABLE(Vuart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
