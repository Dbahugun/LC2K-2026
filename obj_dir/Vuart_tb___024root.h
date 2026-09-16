// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tb.h for the primary calling header

#ifndef VERILATED_VUART_TB___024ROOT_H_
#define VERILATED_VUART_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_tb__DOT__clk;
    CData/*0:0*/ uart_tb__DOT__rst;
    CData/*7:0*/ uart_tb__DOT__rx_byte;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__PC;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__txCycleTrigger;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__PC_File__DOT__halt;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    CData/*2:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__addressB;
    CData/*2:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest;
    CData/*0:0*/ uart_tb__DOT__dut__DOT__alu__DOT__equalFlag;
    CData/*1:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter;
    CData/*3:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter;
    CData/*7:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    CData/*0:0*/ __VdlyVal__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__uart_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_hd0722344__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*9:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame;
    IData/*31:0*/ uart_tb__DOT__run_until_halt__Vstatic__run_number;
    IData/*31:0*/ uart_tb__DOT__byte_count;
    IData/*31:0*/ uart_tb__DOT__line_count;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__regDest_val;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__haltCycleCount;
    VlWide<8>/*255:0*/ uart_tb__DOT__dut__DOT__reg_file__DOT__registers;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__alu__DOT__numberOne;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__alu__DOT__numberTwo;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__alu__DOT__result;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__data_memory__DOT__dina;
    VlWide<8>/*255:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze;
    IData/*31:0*/ uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem;
    VlUnpacked<CData/*7:0*/, 8> uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom;
    VlUnpacked<IData/*31:0*/, 256> uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem;
    VlUnpacked<CData/*7:0*/, 16> uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string uart_tb__DOT__line_buf;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h584514fb__0;
    VlTriggerScheduler __VtrigSched_hac428d6b__0;

    // INTERNAL VARIABLES
    Vuart_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuart_tb___024root(Vuart_tb__Syms* symsp, const char* namep);
    ~Vuart_tb___024root();
    VL_UNCOPYABLE(Vuart_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
