// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_initial__TOP(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vuart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vuart_tb___024root____VbeforeTrig_h584514fb__0(Vuart_tb___024root* vlSelf, const char* __VeventDescription);
void Vuart_tb___024root____VbeforeTrig_hac428d6b__0(Vuart_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__i;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__i = 0;
    // Body
    vlSelfRef.uart_tb__DOT__byte_count = 0U;
    vlSelfRef.uart_tb__DOT__line_count = 0U;
    while (true) {
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out = 0;
        __Vtask_uart_tb__DOT__uart_receive_byte__0__i = 0;
        Vuart_tb___024root____VbeforeTrig_h584514fb__0(vlSelf, 
                                                       "@(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))");
        co_await vlSelfRef.__VtrigSched_h584514fb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))", 
                                                             "src/uart_tb.sv", 
                                                             66);
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000075U;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
            Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                           "@(posedge uart_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 67);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x000000eaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                           "@(posedge uart_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 68);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__i = 0U;
        while (VL_GTS_III(32, 8U, __Vtask_uart_tb__DOT__uart_receive_byte__0__i)) {
            __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
                = (((~ ((IData)(1U) << (7U & __Vtask_uart_tb__DOT__uart_receive_byte__0__i))) 
                    & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
                   | (0x00ffU & (((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                                  | ((9U >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                                     & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                        >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)))) 
                                 << (7U & __Vtask_uart_tb__DOT__uart_receive_byte__0__i))));
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x000000eaU;
            while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
                Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                               "@(posedge uart_tb.clk)");
                co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge uart_tb.clk)", 
                                                                     "src/uart_tb.sv", 
                                                                     71);
                __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                    = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                       - (IData)(1U));
            }
            __Vtask_uart_tb__DOT__uart_receive_byte__0__i 
                = ((IData)(1U) + __Vtask_uart_tb__DOT__uart_receive_byte__0__i);
        }
        vlSelfRef.uart_tb__DOT__rx_byte = __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out;
        if (VL_UNLIKELY(((0x0aU == (IData)(vlSelfRef.uart_tb__DOT__rx_byte))))) {
            VL_WRITEF_NX("[%0t ns] UART: %s\n",3, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , 'S',&(vlSelfRef.uart_tb__DOT__line_buf));
            vlSelfRef.uart_tb__DOT__line_buf = ""s;
            vlSelfRef.uart_tb__DOT__line_count = ((IData)(1U) 
                                                  + vlSelfRef.uart_tb__DOT__line_count);
        } else {
            vlSelfRef.uart_tb__DOT__line_buf = VL_CONCATN_NNN(vlSelfRef.uart_tb__DOT__line_buf, 
                                                              VL_CVT_PACK_STR_NI((IData)(vlSelfRef.uart_tb__DOT__rx_byte)));
        }
        vlSelfRef.uart_tb__DOT__byte_count = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__byte_count);
    }
    co_return;
}

VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__2__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__2__run_number = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count;
    __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__5__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__5__run_number = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count;
    __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/fibonacci_uart_latest.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.uart_tb__DOT__rst = 0U;
    __Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             45);
        __Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_uart_tb__DOT__do_reset__1__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.uart_tb__DOT__rst = 1U;
    __Vtask_uart_tb__DOT__run_until_halt__2__run_number = 1U;
    vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number 
        = __Vtask_uart_tb__DOT__run_until_halt__2__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count = 0U;
    __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt))) 
            & VL_GTS_III(32, 0x000007d0U, __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count))) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             53);
        __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count 
            = ((IData)(1U) + __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    if (VL_LTES_III(32, 0x000007d0U, __Vtask_uart_tb__DOT__run_until_halt__2__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",2
                     , '~',32,vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number
                     , '~',32,__Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",4, 'T',-9
                     , '~',32,vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,__Vtask_uart_tb__DOT__run_until_halt__2__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0d (0x%08x)\nr1 = %0d (0x%08x)\nr2 = %0d (0x%08x)\nr3 = %0d (0x%08x)\nr4 = %0d (0x%08x)\nr5 = %0d (0x%08x)\nr6 = %0d (0x%08x)\nr7 = %0d (0x%08x)\nPC = %0d\nWaiting for run 1's UART pass to complete...\n",17
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U]
                 , '#',8,(IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC));
    uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x00154eb0U;
    while (VL_LTS_III(32, 0U, uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             105);
        uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (uart_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Lines received so far: %0d (expect 9 for C0+R1-R7+PC)\n",1
                 , '~',32,vlSelfRef.uart_tb__DOT__line_count);
    __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.uart_tb__DOT__rst = 0U;
    __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             45);
        __Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_uart_tb__DOT__do_reset__4__uart_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.uart_tb__DOT__rst = 1U;
    __Vtask_uart_tb__DOT__run_until_halt__5__run_number = 2U;
    vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number 
        = __Vtask_uart_tb__DOT__run_until_halt__5__run_number;
    __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count = 0U;
    __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.uart_tb__DOT__rst) 
                & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt))) 
            & VL_GTS_III(32, 0x000007d0U, __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count))) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             53);
        __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count 
            = ((IData)(1U) + __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    if (VL_LTES_III(32, 0x000007d0U, __Vtask_uart_tb__DOT__run_until_halt__5__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",2
                     , '~',32,vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number
                     , '~',32,__Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",4, 'T',-9
                     , '~',32,vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,__Vtask_uart_tb__DOT__run_until_halt__5__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0d (0x%08x)\nr1 = %0d (0x%08x)\nr2 = %0d (0x%08x)\nr3 = %0d (0x%08x)\nr4 = %0d (0x%08x)\nr5 = %0d (0x%08x)\nr6 = %0d (0x%08x)\nr7 = %0d (0x%08x)\nPC = %0d\nWaiting for run 2's UART pass to complete...\n",17
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U]
                 , '#',32,vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U]
                 , '#',8,(IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC));
    uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x00154eb0U;
    while (VL_LTS_III(32, 0U, uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vuart_tb___024root____VbeforeTrig_hac428d6b__0(vlSelf, 
                                                       "@(posedge uart_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hac428d6b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_tb.clk)", 
                                                             "src/uart_tb.sv", 
                                                             112);
        uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (uart_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Both runs complete. Total lines received: %0d\n",1
                 , '~',32,vlSelfRef.uart_tb__DOT__line_count);
    VL_FINISH_MT("src/uart_tb.sv", 115, "");
    co_return;
}

VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000061a8ULL, 
                                             nullptr, 
                                             "src/uart_tb.sv", 
                                             25);
        vlSelfRef.__VdlyVal__uart_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.uart_tb__DOT__clk)));
        vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0 = 1U;
    }
    co_return;
}

void Vuart_tb___024root___eval_triggers_vec__act(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_triggers_vec__act\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hd0722344__0;
    __Vtrigprevexpr_hd0722344__0 = 0;
    // Body
    __Vtrigprevexpr_hd0722344__0 = ((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                                    | ((9U >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                                       & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                          >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))));
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(__Vtrigprevexpr_hd0722344__0)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr_hd0722344__1)) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hd0722344__1 = __Vtrigprevexpr_hd0722344__0;
}

bool Vuart_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vuart_tb___024root___act_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___act_sequent__TOP__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = (0x000000ffU & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)))
                            ? ((IData)(1U) + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                              + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                              [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                            : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                                ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne
                                : ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))) 
                          & (- (IData)((IData)(vlSelfRef.uart_tb__DOT__rst)))));
}

void Vuart_tb___024root___eval_act(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_act\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vuart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vuart_tb__ConstPool__CONST_h9e67c271_0;

void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter = 0;
    CData/*1:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0;
    IData/*31:0*/ __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    // Body
    __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0U;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter;
    if (vlSelfRef.uart_tb__DOT__rst) {
        if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt)))) {
            vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount 
                = ((IData)(1U) + vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount);
        }
    } else {
        vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount = 0U;
    }
    if (VL_LIKELY((vlSelfRef.uart_tb__DOT__rst))) {
        if ((3U == (3U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                    [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]))) {
            __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dina;
            __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = (0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result);
            __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 1U;
        }
    } else {
        VL_READMEM_N(true, 32, 256, 0, "/home/dbahugun/LC2K-2026/docs/bubbleSort7FinalDataSim.mi"s
                     ,  &(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                     , 0, ~0ULL);
    }
    if (vlSelfRef.uart_tb__DOT__rst) {
        if ((0U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            if (vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt) {
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[0U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[1U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[2U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[3U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[4U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[5U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[6U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[7U] 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U];
                vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__PC;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            if ((0xe9U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter))) {
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter = 0U;
                if ((9U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))) {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
                    if ((0x0cU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))) {
                        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter = 0U;
                        if ((8U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter))) {
                            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 2U;
                        } else {
                            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)));
                        }
                    } else {
                        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter)));
                    }
                } else {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)));
                }
            } else {
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter)));
            }
        } else if ((2U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        }
    } else {
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter = 0U;
    }
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
        = ((8U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter))
            ? (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC)
            : (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                    (7U 
                                                     & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)), 5U)))
                 ? 0U : (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze
                         [(((IData)(0x0000001fU) + 
                            (0x000000ffU & VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)), 5U))) 
                           >> 5U)] << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)), 5U))))) 
               | (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze
                  [(7U & (VL_SHIFTL_III(8,32,32, (7U 
                                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)), 5U) 
                          >> 5U))] >> (0x0000001fU 
                                       & VL_SHIFTL_III(8,32,32, 
                                                       (7U 
                                                        & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)), 5U)))));
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte 
        = (0x000000ffU & ((8U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                           ? ((4U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                               ? 0x0aU : ((2U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                           ? ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                               ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                              [(0x0000000fU 
                                                & vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal)]
                                               : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                              [(0x0000000fU 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                   >> 4U))])
                                           : ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                               ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                              [(0x0000000fU 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                   >> 8U))]
                                               : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                              [(0x0000000fU 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                   >> 0x0cU))])))
                           : ((4U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                               ? ((2U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                   ? ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                       ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                      [(0x0000000fU 
                                        & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                           >> 0x10U))]
                                       : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                      [(0x0000000fU 
                                        & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                           >> 0x14U))])
                                   : ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                       ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                      [(0x0000000fU 
                                        & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                           >> 0x18U))]
                                       : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                      [(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                        >> 0x1cU)]))
                               : ((2U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                   ? ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                       ? 0x20U : 0x3aU)
                                   : ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter))
                                       ? ((8U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter))
                                           ? 0x43U : 
                                          ((IData)(0x30U) 
                                           + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter)))
                                       : ((8U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter))
                                           ? 0x50U : 0x52U))))));
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame 
        = (0x00000200U | ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte) 
                          << 1U));
    if (((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
          [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
          >> 4U) & (0U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest)))) {
        VL_ASSIGNSEL_WI(256, 32, (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest), 5U)), vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers, 
                        ((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                          ? (0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                          : ((0x00000020U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                              [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
                              ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result
                              : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)])));
    }
    if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))) {
        VL_ASSIGN_W(256, vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers, Vuart_tb__ConstPool__CONST_h9e67c271_0);
    }
    if (__VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0) {
        vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    }
    if ((1U & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt)) 
               | (~ (IData)(vlSelfRef.uart_tb__DOT__rst))))) {
        vlSelfRef.uart_tb__DOT__dut__DOT__PC = vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (1U 
                                                & ((~ 
                                                    (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                     [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                     >> 0x00000017U)) 
                                                   & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                      [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                      >> 0x00000018U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (1U 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                   >> 0x00000016U));
    vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne 
        = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers
        [(7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                >> 0x00000013U))];
    vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB 
        = (7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                 >> 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (7U 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                   >> 0x00000016U));
    vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
           & (3U == (3U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                           [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                           >> 0x00000017U))));
    vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dina 
        = (((0U == (0x0000001fU & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB) 
                                   << 5U))) ? 0U : 
            (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers
             [(((IData)(0x0000001fU) + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB) 
                                        << 5U)) >> 5U)] 
             << ((IData)(0x00000020U) - (0x0000001fU 
                                         & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB) 
                                            << 5U))))) 
           | (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers
              [(0x07ffffffU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB))] 
              >> (0x0000001fU & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB) 
                                 << 5U))));
    vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest 
        = (7U & ((0x00000080U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
                  ? vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC]
                  : (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB)));
    vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
        = ((8U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
            [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
            ? vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dina
            : (((- (IData)((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                  >> 0x0000000fU)))) 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC])));
    vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result 
        = ((4U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
            [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
            ? (~ (vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
                  | vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne))
            : (vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
               + vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne));
    vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag 
        = (vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
           == vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne);
    vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = (0x000000ffU & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)))
                            ? ((IData)(1U) + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                              + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                              [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                            : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                                ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne
                                : ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))) 
                          & (- (IData)((IData)(vlSelfRef.uart_tb__DOT__rst)))));
}

void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0 = 0U;
        vlSelfRef.uart_tb__DOT__clk = vlSelfRef.__VdlyVal__uart_tb__DOT__clk__v0;
    }
}

void Vuart_tb___024root___eval_nba(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_nba\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vuart_tb___024root___timing_ready(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_ready\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h584514fb__0.ready("@(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hac428d6b__0.ready("@(posedge uart_tb.clk)");
    }
}

void Vuart_tb___024root___timing_resume(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_resume\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h584514fb__0.moveToResumeQueue(
                                                          "@(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))");
    vlSelfRef.__VtrigSched_hac428d6b__0.moveToResumeQueue(
                                                          "@(posedge uart_tb.clk)");
    vlSelfRef.__VtrigSched_h584514fb__0.resume("@(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))");
    vlSelfRef.__VtrigSched_hac428d6b__0.resume("@(posedge uart_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuart_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vuart_tb___024root___eval_phase__act(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__act\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tb___024root___eval_triggers_vec__act(vlSelf);
    Vuart_tb___024root___timing_ready(vlSelf);
    Vuart_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vuart_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vuart_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vuart_tb___024root___timing_resume(vlSelf);
        Vuart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tb___024root___eval_phase__inact(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__inact\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("src/uart_tb.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vuart_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_tb___024root___eval_phase__nba(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__nba\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_tb___024root___eval_nba(vlSelf);
        Vuart_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/uart_tb.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("src/uart_tb.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vuart_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("src/uart_tb.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vuart_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vuart_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vuart_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vuart_tb___024root____VbeforeTrig_h584514fb__0(Vuart_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root____VbeforeTrig_h584514fb__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_hd0722344__0;
    __Vtrigprevexpr_hd0722344__0 = 0;
    // Body
    __Vtrigprevexpr_hd0722344__0 = ((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                                    | ((9U >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                                       & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                          >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))));
    __VTmp[0U] = (QData)((IData)((((~ (IData)(__Vtrigprevexpr_hd0722344__0)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr_hd0722344__1)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr_hd0722344__1 = __Vtrigprevexpr_hd0722344__0;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h584514fb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vuart_tb___024root____VbeforeTrig_hac428d6b__0(Vuart_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root____VbeforeTrig_hac428d6b__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.uart_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hac428d6b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_debug_assertions\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
