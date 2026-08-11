// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb___024root.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_initial__TOP(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tb___024root* vlSelf);
VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vuart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vuart_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__txOut__0 
        = vlSelfRef.uart_tb__DOT__txOut;
}

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    // Body
    vlSelfRef.uart_tb__DOT__byte_count = 0U;
    vlSelfRef.uart_tb__DOT__line_count = 0U;
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h5928e91a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge uart_tb.txOut)", 
                                                             "src/uart_tb.sv", 
                                                             66);
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x75U;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 67);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 68);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfeU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | (IData)(vlSelfRef.uart_tb__DOT__txOut));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfdU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 1U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfbU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 2U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xf7U & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 3U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xefU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 4U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xdfU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 5U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xbfU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 6U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0x7fU & (IData)(__Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.uart_tb__DOT__txOut) 
                  << 7U));
        __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_h24b2bb95__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_tb.clk)", 
                                                                 "src/uart_tb.sv", 
                                                                 71);
            __Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_uart_tb__DOT__uart_receive_byte__0__uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        vlSelfRef.uart_tb__DOT__rx_byte = __Vtask_uart_tb__DOT__uart_receive_byte__0__byte_out;
        if (VL_UNLIKELY((0xaU == (IData)(vlSelfRef.uart_tb__DOT__rx_byte)))) {
            VL_WRITEF_NX("[%0t ns] UART: %@\n",0,64,
                         VL_TIME_UNITED_Q(1000),-9,
                         -1,&(vlSelfRef.uart_tb__DOT__line_buf));
            vlSelfRef.uart_tb__DOT__line_buf = std::string{""};
            vlSelfRef.uart_tb__DOT__line_count = ((IData)(1U) 
                                                  + vlSelfRef.uart_tb__DOT__line_count);
        } else {
            vlSelfRef.uart_tb__DOT__line_buf = VL_CONCATN_NNN(vlSelfRef.uart_tb__DOT__line_buf, 
                                                              VL_CVT_PACK_STR_NI((IData)(vlSelfRef.uart_tb__DOT__rx_byte)));
        }
        vlSelfRef.uart_tb__DOT__byte_count = ((IData)(1U) 
                                              + vlSelfRef.uart_tb__DOT__byte_count);
    }
}

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "src/uart_tb.sv", 
                                             25);
        vlSelfRef.__VdlyVal__uart_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.uart_tb__DOT__clk)));
        vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0 = 1U;
    }
}

void Vuart_tb___024root___act_sequent__TOP__0(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vuart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vuart_tb___024root___act_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.uart_tb__DOT__rst) ? (0xffU 
                                                   & (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                       & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                          & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                                        + 
                                                        vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                        [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                                                       : 
                                                      (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                        & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                                                           & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                        ? vlSelfRef.uart_tb__DOT__dut__DOT__regA_val
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))))
            : 0U);
}

void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_nba(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlWide<13>/*415:0*/ Vuart_tb__ConstPool__CONST_h045c877d_0;
extern const VlWide<8>/*255:0*/ Vuart_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3;
    uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3 = 0;
    CData/*0:0*/ uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4;
    uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4 = 0;
    CData/*4:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex = 0;
    CData/*4:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen = 0;
    CData/*4:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0;
    CData/*7:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0;
    CData/*1:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0;
    SData/*9:0*/ __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister = 0;
    IData/*31:0*/ __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0;
    __VdlySet__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0;
    VL_ZERO_W(256, __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0);
    CData/*3:0*/ __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0;
    __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0 = 0;
    // Body
    __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0U;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex 
        = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex;
    __VdlySet__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))) {
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j = 8U;
    }
    if (vlSelfRef.uart_tb__DOT__rst) {
        if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable)))) {
            vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount 
                = ((IData)(1U) + vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount);
        }
    } else {
        vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount = 0U;
    }
    if (VL_LIKELY(vlSelfRef.uart_tb__DOT__rst)) {
        if ((1U & ((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                    [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                    >> 1U) & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                   [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]))) {
            __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = vlSelfRef.uart_tb__DOT__dut__DOT__regB_val;
            __VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = (0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult);
            __VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 1U;
        }
    } else {
        VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(13, Vuart_tb__ConstPool__CONST_h045c877d_0)
                     ,  &(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                     , 0, ~0ULL);
    }
    if (vlSelfRef.uart_tb__DOT__rst) {
        if (((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable)) 
             & (0x10U > (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex)))) {
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 
                = vlSelfRef.uart_tb__DOT__dut__DOT__PC;
            __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 
                = (0xfU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex));
            __VdlySet__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0 = 1U;
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[0U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[1U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[2U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[3U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[4U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[5U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[6U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U];
            __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[7U] 
                = vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U];
            __VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0 
                = (0xfU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex));
            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex)));
        }
    } else {
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex = 0U;
    }
    if (__VdlySet__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0) {
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC__v0;
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][0U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[0U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][1U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[1U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][2U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[2U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][3U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[3U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][4U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[4U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][5U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[5U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][6U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[6U];
        vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs[__VdlyDim0__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0][7U] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs__v0[7U];
    }
    if (vlSelfRef.uart_tb__DOT__rst) {
        if ((0U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            vlSelfRef.uart_tb__DOT__txOut = 1U;
            if (((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched)) 
                 & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable))) {
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen 
                    = vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched = 1U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 1U;
            } else if (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched) {
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            if ((0xdU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))) {
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter)));
                __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
            }
            if ((9U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))) {
                if (((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex))) 
                     < (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen))) {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex)));
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
                } else {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 2U;
                }
            }
            if ((1U & (~ ((0xdU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter)) 
                          | (9U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter)))))) {
                if (((0U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                     & (0xeaU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter)))) {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)));
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
                        = (0x200U | ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte) 
                                     << 1U));
                    vlSelfRef.uart_tb__DOT__txOut = 0U;
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
                } else if ((0xaU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))) {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter)));
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
                } else if ((0xeaU == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter))) {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
                        = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister), 1U));
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)));
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
                    vlSelfRef.uart_tb__DOT__txOut = 
                        (1U & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister) 
                               >> 1U));
                } else {
                    __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter)));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
            vlSelfRef.uart_tb__DOT__txOut = 1U;
            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        } else {
            __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        }
    } else {
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex = 0U;
        __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen = 0U;
        vlSelfRef.uart_tb__DOT__txOut = 1U;
    }
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
        = __Vdly__uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    if (((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
          [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
          >> 4U) & (0U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux)))) {
        VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux), 5U)), vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers, 
                        ((5U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__opcode))
                          ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                          : ((0x20U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                              [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])
                              ? vlSelfRef.uart_tb__DOT__dut__DOT__aluResult
                              : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)])));
    }
    if ((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))) {
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U] 
            = Vuart_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
        = ((0U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
            ? (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex)
            : ((8U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
                ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC
               [(0xfU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex))]
                : (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))
                     ? 0U : (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                             [(0xfU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex))][
                             (((IData)(0x1fU) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))) 
                   | (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                      [(0xfU & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex))][
                      (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))));
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte 
        = (0xffU & ((8U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                     ? ((4U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                         ? 0xaU : ((2U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                    ? ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal)]
                                        : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                 >> 4U))])
                                    : ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                 >> 8U))]
                                        : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                                 >> 0xcU))])))
                     : ((4U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                         ? ((2U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                             ? ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x10U))]
                                 : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x14U))])
                             : ((1U & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x18U))]
                                 : vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal 
                                  >> 0x1cU)])) : ((2U 
                                                   & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 0x20U
                                                    : 0x3aU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 0x43U
                                                     : 
                                                    ((IData)(0x30U) 
                                                     + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter)))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 0x54U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
                                                      ? 0x50U
                                                      : 0x52U)))))));
    if (__VdlySet__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0) {
        vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__VdlyDim0__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0] 
            = __VdlyVal__uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    }
    if ((1U & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable)) 
               | (~ (IData)(vlSelfRef.uart_tb__DOT__rst))))) {
        vlSelfRef.uart_tb__DOT__dut__DOT__PC = vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    }
    vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2 
        = (1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                 >> 0x16U));
    uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4 
        = (1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                 >> 0x18U));
    uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3 
        = (1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                 >> 0x17U));
    vlSelfRef.uart_tb__DOT__dut__DOT__regA_val = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                         [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                         >> 0x13U)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       (7U 
                                                                        & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                           [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                           >> 0x13U)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,32,32, 
                                                                      (7U 
                                                                       & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                          [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                          >> 0x13U)), 5U))))) 
                                                  | (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,32,32, 
                                                                       (7U 
                                                                        & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                           [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                           >> 0x13U)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,32,32, 
                                                                      (7U 
                                                                       & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                          [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                          >> 0x13U)), 5U))));
    vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc = (7U 
                                                  & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                     [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                     >> 0x10U));
    vlSelfRef.uart_tb__DOT__dut__DOT__opcode = (7U 
                                                & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                   >> 0x16U));
    vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable = ((IData)(uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4) 
                                                   & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                      & (IData)(uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3)));
    vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1 
        = ((~ (IData)(uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3)) 
           & (IData)(uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4));
    vlSelfRef.uart_tb__DOT__dut__DOT__regB_val = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc), 5U))))) 
                                                  | (vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                                                     (7U 
                                                      & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc), 5U))));
    vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux 
        = (7U & ((0x80U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])
                  ? vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC]
                  : (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc)));
    vlSelfRef.uart_tb__DOT__dut__DOT__aluMode = (1U 
                                                 & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                                    [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                                    >> 2U));
    vlSelfRef.uart_tb__DOT__dut__DOT__aluMux = ((8U 
                                                 & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                                 [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])
                                                 ? vlSelfRef.uart_tb__DOT__dut__DOT__regB_val
                                                 : 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                    [vlSelfRef.uart_tb__DOT__dut__DOT__PC])));
    vlSelfRef.uart_tb__DOT__dut__DOT__aluResult = ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__aluMode)
                                                    ? 
                                                   ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__aluMode)
                                                     ? 
                                                    (~ 
                                                     (vlSelfRef.uart_tb__DOT__dut__DOT__regA_val 
                                                      | vlSelfRef.uart_tb__DOT__dut__DOT__aluMux))
                                                     : 
                                                    (vlSelfRef.uart_tb__DOT__dut__DOT__regA_val 
                                                     + vlSelfRef.uart_tb__DOT__dut__DOT__aluMux))
                                                    : 
                                                   (vlSelfRef.uart_tb__DOT__dut__DOT__regA_val 
                                                    + vlSelfRef.uart_tb__DOT__dut__DOT__aluMux));
    vlSelfRef.uart_tb__DOT__dut__DOT__zeroFlag = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelfRef.uart_tb__DOT__dut__DOT__aluResult))));
    vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__sameMSB 
        = (1U & (~ ((vlSelfRef.uart_tb__DOT__dut__DOT__regA_val 
                     ^ vlSelfRef.uart_tb__DOT__dut__DOT__aluMux) 
                    >> 0x1fU)));
    vlSelfRef.uart_tb__DOT__dut__DOT__overflow = ((
                                                   (vlSelfRef.uart_tb__DOT__dut__DOT__aluResult 
                                                    ^ vlSelfRef.uart_tb__DOT__dut__DOT__regA_val) 
                                                   >> 0x1fU) 
                                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__sameMSB));
    vlSelfRef.uart_tb__DOT__dut__DOT__equal = (vlSelfRef.uart_tb__DOT__dut__DOT__regA_val 
                                               == vlSelfRef.uart_tb__DOT__dut__DOT__aluMux);
    vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.uart_tb__DOT__rst) ? (0xffU 
                                                   & (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                       & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                          & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                                        + 
                                                        vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                        [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                                                       : 
                                                      (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                        & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                                                           & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                        ? vlSelfRef.uart_tb__DOT__dut__DOT__regA_val
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))))
            : 0U);
}

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__uart_tb__DOT__clk__v0 = 0U;
        vlSelfRef.uart_tb__DOT__clk = vlSelfRef.__VdlyVal__uart_tb__DOT__clk__v0;
    }
}

void Vuart_tb___024root___timing_resume(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5928e91a__0.resume(
                                                   "@(negedge uart_tb.txOut)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h24b2bb95__0.resume(
                                                   "@(posedge uart_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuart_tb___024root___timing_commit(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5928e91a__0.commit(
                                                   "@(negedge uart_tb.txOut)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h24b2bb95__0.commit(
                                                   "@(posedge uart_tb.clk)");
    }
}

void Vuart_tb___024root___eval_triggers__act(Vuart_tb___024root* vlSelf);

bool Vuart_tb___024root___eval_phase__act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tb___024root___eval_triggers__act(vlSelf);
    Vuart_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vuart_tb___024root___timing_resume(vlSelf);
        Vuart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tb___024root___eval_phase__nba(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuart_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__nba(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/uart_tb.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vuart_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/uart_tb.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vuart_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vuart_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
