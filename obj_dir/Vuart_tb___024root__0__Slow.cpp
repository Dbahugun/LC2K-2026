// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"

VL_ATTR_COLD void Vuart_tb___024root___eval_static__TOP(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___timing_ready(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_static(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_static\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 
        = vlSelfRef.uart_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_hd0722344__1 = ((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                                              | ((9U 
                                                  >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                                                 & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                                    >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))));
    Vuart_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vuart_tb___024root___eval_static__TOP(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_static__TOP\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tb__DOT__line_buf = ""s;
}

extern const VlWide<8>/*255:0*/ Vuart_tb__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vuart_tb___024root___eval_initial__TOP(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tb__DOT__clk = 0U;
    vlSelfRef.uart_tb__DOT__dut__DOT__PC = 0U;
    VL_ASSIGN_W(256, vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers, Vuart_tb__ConstPool__CONST_h9e67c271_0);
    VL_READMEM_N(true, 32, 256, 0, "/home/dbahugun/LC2K-2026/docs/bubbleSort7FinalInstructionSim.mi"s
                 ,  &(vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 8, 0, "/home/dbahugun/LC2K-2026/docs/controlPromSim.mi"s
                 ,  &(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, "/home/dbahugun/LC2K-2026/docs/bubbleSort7FinalDataSim.mi"s
                 ,  &(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                 , 0, ~0ULL);
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0U] = 0x30U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[1U] = 0x31U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[2U] = 0x32U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[3U] = 0x33U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[4U] = 0x34U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[5U] = 0x35U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[6U] = 0x36U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[7U] = 0x37U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[8U] = 0x38U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[9U] = 0x39U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[10U] = 0x41U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[11U] = 0x42U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[12U] = 0x43U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[13U] = 0x44U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[14U] = 0x45U;
    vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[15U] = 0x46U;
}

VL_ATTR_COLD void Vuart_tb___024root___eval_final(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_final\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_tb___024root___eval_phase__stl(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_settle(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_settle\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/uart_tb.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vuart_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vuart_tb___024root___eval_triggers_vec__stl(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_triggers_vec__stl\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vuart_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vuart_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vuart_tb___024root___stl_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___stl_sequent__TOP__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vuart_tb___024root____Vm_traceActivitySetAll(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb___024root___eval_stl(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_stl\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vuart_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vuart_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vuart_tb___024root___eval_phase__stl(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__stl\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vuart_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vuart_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vuart_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge uart_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge ((2'h1 != uart_tb.dut.computerDisplay.state) | ((4'h9 >= uart_tb.dut.computerDisplay.bitCounter) & uart_tb.dut.computerDisplay.frame[uart_tb.dut.computerDisplay.bitCounter+:1])))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tb___024root____Vm_traceActivitySetAll(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root____Vm_traceActivitySetAll\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vuart_tb___024root___ctor_var_reset(Vuart_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___ctor_var_reset\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->uart_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452249068231012409ull);
    vlSelf->uart_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153332459235608642ull);
    vlSelf->uart_tb__DOT__run_until_halt__Vstatic__run_number = 0;
    vlSelf->uart_tb__DOT__rx_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15288476934791783480ull);
    vlSelf->uart_tb__DOT__byte_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10114286365144022882ull);
    vlSelf->uart_tb__DOT__line_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2690878779627833175ull);
    vlSelf->uart_tb__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6466985039683032087ull);
    vlSelf->uart_tb__DOT__dut__DOT__regDest_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1416066228321315945ull);
    vlSelf->uart_tb__DOT__dut__DOT__txCycleTrigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7054989090624813616ull);
    vlSelf->uart_tb__DOT__dut__DOT__haltCycleCount = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11340650462075387666ull);
    vlSelf->uart_tb__DOT__dut__DOT__PC_File__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2512585800957785121ull);
    vlSelf->uart_tb__DOT__dut__DOT__PC_File__DOT__newPC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16917298813734387794ull);
    vlSelf->uart_tb__DOT__dut__DOT__reg_file__DOT__addressB = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10434107635234945186ull);
    vlSelf->uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6292680595301523839ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->uart_tb__DOT__dut__DOT__reg_file__DOT__registers, __VscopeHash, 17269334235358842856ull);
    vlSelf->uart_tb__DOT__dut__DOT__alu__DOT__numberOne = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5856474636308434333ull);
    vlSelf->uart_tb__DOT__dut__DOT__alu__DOT__numberTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 211960003133322611ull);
    vlSelf->uart_tb__DOT__dut__DOT__alu__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3099265337715394884ull);
    vlSelf->uart_tb__DOT__dut__DOT__alu__DOT__equalFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13872112996831755937ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12648041274666600401ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17041272042948022406ull);
    }
    vlSelf->uart_tb__DOT__dut__DOT__data_memory__DOT__dina = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3659018668164459324ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17349239785850782847ull);
    }
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9909879672977936604ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze, __VscopeHash, 4756987936342311640ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12449995250339716762ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1275064655716328709ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4207907354488370763ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3745063328305186084ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12676133533906932849ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10025076029322818737ull);
    }
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18154538816531785295ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5408853696417964286ull);
    vlSelf->uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3878878149394016083ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdlyVal__uart_tb__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__uart_tb__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr_hd0722344__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
