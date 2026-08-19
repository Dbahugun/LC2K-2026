// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim_uart.h for the primary calling header

#include "Vtop_sim_uart__pch.h"
#include "Vtop_sim_uart__Syms.h"
#include "Vtop_sim_uart___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__ico(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_sim_uart___024root___eval_triggers__ico(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_sim_uart___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__act(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_sim_uart___024root___eval_triggers__act(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_sim_uart___024root___dump_triggers__act(vlSelf);
    }
#endif
}
