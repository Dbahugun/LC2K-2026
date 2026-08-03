// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x2f746f70U;
    __Vtemp_1[2U] = 0x73696dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9d9b58c8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "src/top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_h9d9b58c8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "src/top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_h9d9b58c8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "src/top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_h9d9b58c8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "src/top_tb.sv", 
                                                         34);
    vlSelfRef.top_tb__DOT__rst = 1U;
    top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xc350U;
    while (VL_LTS_III(32, 0U, top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h9d9b58c8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top_tb.clk)", 
                                                             "src/top_tb.sv", 
                                                             37);
        top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("TIMEOUT: halt never fired after 50000 cycles\n",0);
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\n",0,
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.top_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.top_tb__DOT__dut__DOT__PC));
    VL_FINISH_MT("src/top_tb.sv", 40, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
