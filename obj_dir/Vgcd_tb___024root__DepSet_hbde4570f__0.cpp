// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgcd_tb.h for the primary calling header

#include "Vgcd_tb__pch.h"
#include "Vgcd_tb__Syms.h"
#include "Vgcd_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vgcd_tb___024root___eval_initial__TOP__Vtiming__0(Vgcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgcd_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_gcd_tb__DOT__run_until_halt__1__run_number;
    __Vtask_gcd_tb__DOT__run_until_halt__1__run_number = 0;
    IData/*31:0*/ __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count;
    __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count = 0;
    IData/*31:0*/ __Vtask_gcd_tb__DOT__run_until_halt__4__run_number;
    __Vtask_gcd_tb__DOT__run_until_halt__4__run_number = 0;
    IData/*31:0*/ __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count;
    __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x2f676364U;
    __Vtemp_1[2U] = 0x73696dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.gcd_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         34);
    vlSelfRef.gcd_tb__DOT__rst = 1U;
    __Vtask_gcd_tb__DOT__run_until_halt__1__run_number = 1U;
    __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.gcd_tb__DOT__rst) 
                & ((IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4) 
                   & ((~ (IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                      & (IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge gcd_tb.clk)", 
                                                             "src/gcd_tb.sv", 
                                                             42);
        __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count 
            = ((IData)(1U) + __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__1__run_number,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__1__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_gcd_tb__DOT__run_until_halt__1__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\n",0,
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.gcd_tb__DOT__dut__DOT__PC));
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         62);
    vlSelfRef.gcd_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge gcd_tb.clk)", 
                                                         "src/gcd_tb.sv", 
                                                         34);
    vlSelfRef.gcd_tb__DOT__rst = 1U;
    __Vtask_gcd_tb__DOT__run_until_halt__4__run_number = 2U;
    __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count = 0U;
    while (((~ ((IData)(vlSelfRef.gcd_tb__DOT__rst) 
                & ((IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4) 
                   & ((~ (IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                      & (IData)(vlSelfRef.gcd_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count))) {
        co_await vlSelfRef.__VtrigSched_h0b4ec1e4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge gcd_tb.clk)", 
                                                             "src/gcd_tb.sv", 
                                                             42);
        __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count 
            = ((IData)(1U) + __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count);
    }
    if (VL_LTES_III(32, 0x7d0U, __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count)) {
        VL_WRITEF_NX("RUN %0d: TIMEOUT after %0d cycles, halt never fired\n",0,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__4__run_number,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count);
    } else {
        VL_WRITEF_NX("RUN %0d: HALT detected at time %0t (cycle %0d)\n",0,
                     32,__Vtask_gcd_tb__DOT__run_until_halt__4__run_number,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_gcd_tb__DOT__run_until_halt__4__cycle_count);
    }
    VL_WRITEF_NX("r0 = %0# (0x%08x)\nr1 = %0# (0x%08x)\nr2 = %0# (0x%08x)\nr3 = %0# (0x%08x)\nr4 = %0# (0x%08x)\nr5 = %0# (0x%08x)\nr6 = %0# (0x%08x)\nr7 = %0# (0x%08x)\nPC = %0#\nBoth runs complete.\n",0,
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[0U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[1U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[2U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[3U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[4U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[5U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[6U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 32,vlSelfRef.gcd_tb__DOT__dut__DOT__reg_file__DOT__registers[7U],
                 8,(IData)(vlSelfRef.gcd_tb__DOT__dut__DOT__PC));
    VL_FINISH_MT("src/gcd_tb.sv", 69, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgcd_tb___024root___dump_triggers__act(Vgcd_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vgcd_tb___024root___eval_triggers__act(Vgcd_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgcd_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.gcd_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gcd_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__gcd_tb__DOT__clk__0 
        = vlSelfRef.gcd_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgcd_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
