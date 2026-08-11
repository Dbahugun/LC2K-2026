// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb__Syms.h"
#include "Vuart_tb___024root.h"

extern const VlWide<8>/*255:0*/ Vuart_tb__ConstPool__CONST_hcc2efa00_0;

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__2__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__2__run_number = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count;
    __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__5__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__5__run_number = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count;
    __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, Vuart_tb__ConstPool__CONST_hcc2efa00_0));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.uart_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "src/uart_tb.sv", 
                                                         45);
    vlSelfRef.uart_tb__DOT__rst = 1U;
    __Vtask_uart_tb__DOT__run_until_halt__2__run_number = 1U;
    __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             53);
        __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count 
            = ((IData)(1U) + __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_uart_tb__DOT__run_until_halt__2__run_number,
                     32,__Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_uart_tb__DOT__run_until_halt__2__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\nWaiting for run 1's UART pass to complete...\n",0,
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC));
    uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x440fcU;
    while (VL_LTS_III(32, 0U, uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             105);
        uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Lines received so far: %0d (expect 9 for C0+R1-R7+PC)\n",0,
                 32,vlSelfRef.uart_tb__DOT__line_count);
    vlSelfRef.uart_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tb.clk)", 
                                                         "src/uart_tb.sv", 
                                                         45);
    vlSelfRef.uart_tb__DOT__rst = 1U;
    __Vtask_uart_tb__DOT__run_until_halt__5__run_number = 2U;
    __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             53);
        __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count 
            = ((IData)(1U) + __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_uart_tb__DOT__run_until_halt__5__run_number,
                     32,__Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_uart_tb__DOT__run_until_halt__5__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\nWaiting for run 2's UART pass to complete...\n",0,
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC));
    uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x440fcU;
    while (VL_LTS_III(32, 0U, uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             112);
        uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Both runs complete. Total lines received: %0d\n",0,
                 32,vlSelfRef.uart_tb__DOT__line_count);
    VL_FINISH_MT("src/uart_tb.sv", 115, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tb___024root___eval_triggers__act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.uart_tb__DOT__txOut)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__txOut__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__txOut__0 
        = vlSelfRef.uart_tb__DOT__txOut;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
