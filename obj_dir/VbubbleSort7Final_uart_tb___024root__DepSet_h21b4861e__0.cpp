// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VbubbleSort7Final_uart_tb.h for the primary calling header

#include "VbubbleSort7Final_uart_tb__pch.h"
#include "VbubbleSort7Final_uart_tb___024root.h"

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_initial__TOP(VbubbleSort7Final_uart_tb___024root* vlSelf);
VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__0(VbubbleSort7Final_uart_tb___024root* vlSelf);
VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__1(VbubbleSort7Final_uart_tb___024root* vlSelf);
VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__2(VbubbleSort7Final_uart_tb___024root* vlSelf);

void VbubbleSort7Final_uart_tb___024root___eval_initial(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__clk__0 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__txOut__0 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut;
}

VL_INLINE_OPT VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__0(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out;
    __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    // Body
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__byte_count = 0U;
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h4a7271e1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge bubbleSort7Final_uart_tb.txOut)", 
                                                             "src/bubbleSort7Final_uart_tb.sv", 
                                                             64);
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x75U;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 65);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 66);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfeU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfdU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 1U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xfbU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 2U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xf7U & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 3U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xefU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 4U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xdfU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 5U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0xbfU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 6U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out 
            = ((0x7fU & (IData)(__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out)) 
               | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut) 
                  << 7U));
        __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0xeaU;
        while (VL_LTS_III(32, 0U, __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
            co_await vlSelfRef.__VtrigSched_hb8674dbe__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge bubbleSort7Final_uart_tb.clk)", 
                                                                 "src/bubbleSort7Final_uart_tb.sv", 
                                                                 69);
            __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                = (__Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__bubbleSort7Final_uart_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
                   - (IData)(1U));
        }
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__rx_byte 
            = __Vtask_bubbleSort7Final_uart_tb__DOT__uart_receive_byte__0__byte_out;
        VL_WRITEF_NX("[%0t ns] UART RX byte %0d: 0x%02x  '%c'\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.bubbleSort7Final_uart_tb__DOT__byte_count,
                     8,(IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rx_byte),
                     8,vlSelfRef.bubbleSort7Final_uart_tb__DOT__rx_byte);
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__byte_count 
            = ((IData)(1U) + vlSelfRef.bubbleSort7Final_uart_tb__DOT__byte_count);
    }
}

VL_INLINE_OPT VlCoroutine VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__2(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "src/bubbleSort7Final_uart_tb.sv", 
                                             23);
        vlSelfRef.__VdlyVal__bubbleSort7Final_uart_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk)));
        vlSelfRef.__VdlySet__bubbleSort7Final_uart_tb__DOT__clk__v0 = 1U;
    }
}

void VbubbleSort7Final_uart_tb___024root___act_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf);

void VbubbleSort7Final_uart_tb___024root___eval_act(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VbubbleSort7Final_uart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VbubbleSort7Final_uart_tb___024root___act_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)
            ? (0xffU & (((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                         & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                            & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__equal)))
                         ? ((IData)(1U) + ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC) 
                                           + vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                           [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC]))
                         : (((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                             & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__equal)) 
                                & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                             ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val
                             : ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC)))))
            : 0U);
}

void VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf);
void VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__1(VbubbleSort7Final_uart_tb___024root* vlSelf);

void VbubbleSort7Final_uart_tb___024root___eval_nba(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlWide<14>/*447:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_he4c432b2_0;
extern const VlWide<8>/*255:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3;
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3 = 0;
    CData/*0:0*/ bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4;
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4 = 0;
    CData/*1:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0;
    CData/*3:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0;
    CData/*3:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0;
    CData/*3:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0;
    SData/*9:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister = 0;
    CData/*7:0*/ __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0;
    IData/*31:0*/ __VdlyVal__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyVal__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyDim0__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*0:0*/ __VdlySet__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlySet__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    // Body
    __VdlySet__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0U;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
        = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    if ((1U & (~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)))) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j = 8U;
    }
    if (VL_LIKELY(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)) {
        if ((1U & ((vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                    [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode] 
                    >> 1U) & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                   [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode]))) {
            __VdlyVal__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_val;
            __VdlyDim0__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
                = (0xffU & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult);
            __VdlySet__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 1U;
        }
    } else {
        VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(14, VbubbleSort7Final_uart_tb__ConstPool__CONST_he4c432b2_0)
                     ,  &(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                     , 0, ~0ULL);
    }
    if (((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable) 
         & (0U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)))) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[0U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[1U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[2U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[3U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[4U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[5U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[6U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[7U] 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U];
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 1U;
    }
    if ((1U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state))) {
        if ((0xdU == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))) {
            __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter)));
            __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
        }
        if ((8U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))) {
            __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 2U;
        }
        if ((1U & (~ ((0xdU == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter)) 
                      | (8U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter)))))) {
            if ((0U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))) {
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)));
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
                    = (0x200U | ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte) 
                                 << 1U));
                vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut = 0U;
            } else if ((0xaU == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))) {
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter)));
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
            } else if ((0xeaU == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter))) {
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
                    = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister), 1U));
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)));
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
                vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut 
                    = (1U & ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister) 
                             >> 1U));
            } else {
                __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter)));
            }
        }
    } else if (((0U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                | (2U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)))) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__txOut = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)))) {
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
        __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
    }
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter 
        = __Vdly__bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte 
        = (0xffU & ((8U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                     ? ((4U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                         ? 0xaU : ((2U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                    ? ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x1cU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                                 | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                    (7U 
                                                     & (((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))]
                                        : vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x1cU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                                 | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                    (7U 
                                                     & (((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))])
                                    : ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x1cU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                                 | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                    (7U 
                                                     & (((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))]
                                        : vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x1cU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                                 | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                                    (7U 
                                                     & (((IData)(0x1cU) 
                                                         + 
                                                         VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x1cU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))])))
                     : ((4U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                         ? ((2U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                             ? ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                            ? 0U : 
                                           (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                            (((IData)(3U) 
                                              + (0xffU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                          | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                             (7U & 
                                              (((IData)(0x1cU) 
                                                + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))]
                                 : vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                            ? 0U : 
                                           (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                            (((IData)(3U) 
                                              + (0xffU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                          | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                             (7U & 
                                              (((IData)(0x1cU) 
                                                + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))])
                             : ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                            ? 0U : 
                                           (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                            (((IData)(3U) 
                                              + (0xffU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                          | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                             (7U & 
                                              (((IData)(0x1cU) 
                                                + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))]
                                 : vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))
                                            ? 0U : 
                                           (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                            (((IData)(3U) 
                                              + (0xffU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)))))) 
                                          | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze[
                                             (7U & 
                                              (((IData)(0x1cU) 
                                                + VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter), 5U))))))]))
                         : ((2U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                             ? ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                                 ? 0x20U : 0x3aU) : 
                            ((1U & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter))
                              ? ((IData)(0x30U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter))
                              : 0x52U)))));
    if (((vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
          [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode] 
          >> 4U) & (0U != (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regFileReadMux)))) {
        VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regFileReadMux), 5U)), vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers, 
                        ((5U == (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode))
                          ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC)))
                          : ((0x20U & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                              [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode])
                              ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult
                              : vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult)])));
    }
    if ((1U & (~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)))) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[0U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[1U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[2U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[3U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[4U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[5U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[6U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[7U] 
            = VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__VdlySet__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__VdlyDim0__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0] 
            = __VdlyVal__bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    }
    if ((1U & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable)) 
               | (~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst))))) {
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC 
            = vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    }
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2 
        = (1U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                 >> 0x16U));
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4 
        = (1U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                 >> 0x18U));
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3 
        = (1U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                 >> 0x17U));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                          (7U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                                 >> 0x13U)), 5U)))
             ? 0U : (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                   [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                                                   >> 0x13U)), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                             [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                                             >> 0x13U)), 5U))))) 
           | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
              (7U & (VL_SHIFTL_III(8,32,32, (7U & (
                                                   vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                                   >> 0x13U)), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                            [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                                            >> 0x13U)), 5U))));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc 
        = (7U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                 >> 0x10U));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode 
        = (7U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                 >> 0x16U));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable 
        = ((IData)(bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4) 
           & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
              & (IData)(bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3)));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1 
        = ((~ (IData)(bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3)) 
           & (IData)(bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc), 5U)))
             ? 0U : (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc), 5U))))) 
           | (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers[
              (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc), 5U))));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regFileReadMux 
        = (7U & ((0x80U & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                  [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode])
                  ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC]
                  : (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc)));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMode 
        = (1U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                 [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode] 
                 >> 2U));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux 
        = ((8U & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
            [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode])
            ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_val
            : (((- (IData)((1U & (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                  [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                  [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC])));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult 
        = ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMode)
            ? ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMode)
                ? (~ (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
                      | vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux))
                : (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
                   + vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux))
            : (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
               + vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__zeroFlag 
        = (1U & (~ (IData)((0U != vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult))));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__alu__DOT__sameMSB 
        = (1U & (~ ((vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
                     ^ vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux) 
                    >> 0x1fU)));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__overflow 
        = (((vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult 
             ^ vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val) 
            >> 0x1fU) & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__alu__DOT__sameMSB));
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__equal 
        = (vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val 
           == vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux);
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__rst)
            ? (0xffU & (((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                         & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                            & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__equal)))
                         ? ((IData)(1U) + ((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC) 
                                           + vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                           [vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC]))
                         : (((IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                             & ((~ (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__equal)) 
                                & (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                             ? vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val
                             : ((IData)(1U) + (IData)(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC)))))
            : 0U);
}

VL_INLINE_OPT void VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__1(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__bubbleSort7Final_uart_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__bubbleSort7Final_uart_tb__DOT__clk__v0 = 0U;
        vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk 
            = vlSelfRef.__VdlyVal__bubbleSort7Final_uart_tb__DOT__clk__v0;
    }
}

void VbubbleSort7Final_uart_tb___024root___timing_resume(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4a7271e1__0.resume(
                                                   "@(negedge bubbleSort7Final_uart_tb.txOut)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb8674dbe__0.resume(
                                                   "@(posedge bubbleSort7Final_uart_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VbubbleSort7Final_uart_tb___024root___timing_commit(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4a7271e1__0.commit(
                                                   "@(negedge bubbleSort7Final_uart_tb.txOut)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb8674dbe__0.commit(
                                                   "@(posedge bubbleSort7Final_uart_tb.clk)");
    }
}

void VbubbleSort7Final_uart_tb___024root___eval_triggers__act(VbubbleSort7Final_uart_tb___024root* vlSelf);

bool VbubbleSort7Final_uart_tb___024root___eval_phase__act(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VbubbleSort7Final_uart_tb___024root___eval_triggers__act(vlSelf);
    VbubbleSort7Final_uart_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VbubbleSort7Final_uart_tb___024root___timing_resume(vlSelf);
        VbubbleSort7Final_uart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VbubbleSort7Final_uart_tb___024root___eval_phase__nba(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VbubbleSort7Final_uart_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__nba(VbubbleSort7Final_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__act(VbubbleSort7Final_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VbubbleSort7Final_uart_tb___024root___eval(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval\n"); );
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
            VbubbleSort7Final_uart_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/bubbleSort7Final_uart_tb.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VbubbleSort7Final_uart_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/bubbleSort7Final_uart_tb.sv", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VbubbleSort7Final_uart_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VbubbleSort7Final_uart_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VbubbleSort7Final_uart_tb___024root___eval_debug_assertions(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
