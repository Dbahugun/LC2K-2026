// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VbubbleSort7Final_uart_tb.h for the primary calling header

#include "VbubbleSort7Final_uart_tb__pch.h"
#include "VbubbleSort7Final_uart_tb__Syms.h"
#include "VbubbleSort7Final_uart_tb___024root.h"

VL_INLINE_OPT VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__1(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__run_number;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__run_number = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__run_number;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__run_number = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696e616cU;
    __Vtemp_1[2U] = 0x72743746U;
    __Vtemp_1[3U] = 0x6c65536fU;
    __Vtemp_1[4U] = 0x62756262U;
    __Vtemp_1[5U] = 0x73696d2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                         "src/bubbleSort7Final_uart_tb.sv", 
                                                         43);
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst = 1U;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__run_number = 1U;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                             "src/bubbleSort7Final_uart_tb.sv", 
                                                             51);
        __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count 
            = ((IData)(1U) + __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__run_number,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\nWaiting for run 1's UART pass to complete...\n",0,
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC));
    bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x3ca28U;
    while (VL_LTS_III(32, 0U, bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                             "src/bubbleSort7Final_uart_tb.sv", 
                                                             93);
        bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (bubbleSort7Final_uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                         "src/bubbleSort7Final_uart_tb.sv", 
                                                         43);
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst = 1U;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__run_number = 2U;
    __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                             "src/bubbleSort7Final_uart_tb.sv", 
                                                             51);
        __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count 
            = ((IData)(1U) + __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__run_number,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_bubbleSort7Final_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\nWaiting for run 2's UART pass to complete...\n",0,
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC));
    bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x3ca28U;
    while (VL_LTS_III(32, 0U, bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                             "src/bubbleSort7Final_uart_tb.sv", 
                                                             99);
        bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (bubbleSort7Final_uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Both runs complete.\n",0);
    VL_FINISH_MT("src/bubbleSort7Final_uart_tb.sv", 102, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__act(VbubbleSort7Final_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VbubbleSort7Final_uart_tb___024root___eval_triggers__act(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__txOut__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__clk__0 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__txOut__0 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VbubbleSort7Final_uart_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
