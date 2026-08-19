// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim_uart.h for the primary calling header

#include "Vtop_sim_uart__pch.h"
#include "Vtop_sim_uart___024root.h"

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_static(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_initial__TOP(Vtop_sim_uart___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_initial(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_sim_uart___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

extern const VlWide<8>/*255:0*/ Vtop_sim_uart__ConstPool__CONST_h9e67c271_0;
extern const VlWide<14>/*447:0*/ Vtop_sim_uart__ConstPool__CONST_hda622efe_0;
extern const VlWide<12>/*383:0*/ Vtop_sim_uart__ConstPool__CONST_h231c5920_0;
extern const VlWide<13>/*415:0*/ Vtop_sim_uart__ConstPool__CONST_h045c877d_0;

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_initial__TOP(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_sim_uart__DOT__PC = 0U;
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[0U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[1U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[2U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[3U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[4U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[5U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[6U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[7U] 
        = Vtop_sim_uart__ConstPool__CONST_h9e67c271_0[7U];
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(14, Vtop_sim_uart__ConstPool__CONST_hda622efe_0)
                 ,  &(vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 8, 0, VL_CVT_PACK_STR_NW(12, Vtop_sim_uart__ConstPool__CONST_h231c5920_0)
                 ,  &(vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(13, Vtop_sim_uart__ConstPool__CONST_h045c877d_0)
                 ,  &(vlSelfRef.top_sim_uart__DOT__data_memory__DOT__dataSimMem)
                 , 0, ~0ULL);
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__state = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__bitCounter = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__halt_latched = 0U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0U] = 0x30U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[1U] = 0x31U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[2U] = 0x32U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[3U] = 0x33U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[4U] = 0x34U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[5U] = 0x35U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[6U] = 0x36U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[7U] = 0x37U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[8U] = 0x38U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[9U] = 0x39U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xaU] = 0x41U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xbU] = 0x42U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xcU] = 0x43U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xdU] = 0x44U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xeU] = 0x45U;
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii[0xfU] = 0x46U;
}

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_final(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__stl(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_sim_uart___024root___eval_phase__stl(Vtop_sim_uart___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_settle(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_sim_uart___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top_sim_uart.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_sim_uart___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__stl(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_sim_uart___024root___stl_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_stl(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_sim_uart___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_sim_uart___024root___stl_sequent__TOP__0(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top_sim_uart__DOT__regB_loc;
    top_sim_uart__DOT__regB_loc = 0;
    CData/*0:0*/ top_sim_uart__DOT__aluMode;
    top_sim_uart__DOT__aluMode = 0;
    CData/*0:0*/ top_sim_uart__DOT__overflow;
    top_sim_uart__DOT__overflow = 0;
    IData/*31:0*/ top_sim_uart__DOT__aluMux;
    top_sim_uart__DOT__aluMux = 0;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3;
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3 = 0;
    CData/*0:0*/ top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4;
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4 = 0;
    CData/*0:0*/ top_sim_uart__DOT__alu__DOT__sameMSB;
    top_sim_uart__DOT__alu__DOT__sameMSB = 0;
    IData/*31:0*/ top_sim_uart__DOT__computerDisplay__DOT__displayVal;
    top_sim_uart__DOT__computerDisplay__DOT__displayVal = 0;
    // Body
    top_sim_uart__DOT__computerDisplay__DOT__displayVal 
        = ((0U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
            ? (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)
            : ((8U == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                ? ((5U >= (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                    ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__tracePC
                   [(7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))]
                    : 0U) : (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U)))
                               ? 0U : (vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs
                                       [((5U >= (7U 
                                                 & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                                          ? (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))
                                          : 0U)][(((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))))) 
                             | (vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceRegs
                                [((5U >= (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex)))
                                   ? (7U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))
                                   : 0U)][(7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U) 
                                                 >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter), 5U))))));
    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__asciiByte 
        = (0xffU & ((8U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                     ? ((4U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                         ? 0xaU : ((2U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                    ? ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & top_sim_uart__DOT__computerDisplay__DOT__displayVal)]
                                        : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 4U))])
                                    : ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                        ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 8U))]
                                        : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                       [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                                 >> 0xcU))])))
                     : ((4U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                         ? ((2U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                             ? ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x10U))]
                                 : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x14U))])
                             : ((1U & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                 ? vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(0xfU & (top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                          >> 0x18U))]
                                 : vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                [(top_sim_uart__DOT__computerDisplay__DOT__displayVal 
                                  >> 0x1cU)])) : ((2U 
                                                   & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 0x20U
                                                    : 0x3aU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__messageCounter))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 
                                                    vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__ascii
                                                    [
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__traceIndex))]
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                      ? 0x43U
                                                      : 
                                                     ((IData)(0x30U) 
                                                      + (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                     ? 0x54U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.top_sim_uart__DOT__computerDisplay__DOT__registerCounter))
                                                      ? 0x50U
                                                      : 0x52U)))))));
    vlSelfRef.resetLED = (1U & (~ (IData)(vlSelfRef.resetButton)));
    vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x16U));
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x18U));
    top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3 
        = (1U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.top_sim_uart__DOT__PC] 
                 >> 0x17U));
    vlSelfRef.top_sim_uart__DOT__regA_val = (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                    [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                    >> 0x13U)), 5U)))
                                               ? 0U
                                               : (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                         [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                         >> 0x13U)), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                        [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                        >> 0x13U)), 5U))))) 
                                             | (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                (7U 
                                                 & (VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                      [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                      >> 0x13U)), 5U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                                     [vlSelfRef.top_sim_uart__DOT__PC] 
                                                                     >> 0x13U)), 5U))));
    top_sim_uart__DOT__regB_loc = (7U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                         [vlSelfRef.top_sim_uart__DOT__PC] 
                                         >> 0x10U));
    vlSelfRef.top_sim_uart__DOT__opcode = (7U & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.top_sim_uart__DOT__PC] 
                                                 >> 0x16U));
    vlSelfRef.done = ((IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4) 
                      & ((~ (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                         & (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3)));
    vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1 
        = ((~ (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_3)) 
           & (IData)(top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_4));
    vlSelfRef.top_sim_uart__DOT__regB_val = (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U)))
                                               ? 0U
                                               : (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))))) 
                                             | (vlSelfRef.top_sim_uart__DOT__reg_file__DOT__registers[
                                                (7U 
                                                 & (VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(top_sim_uart__DOT__regB_loc), 5U))));
    vlSelfRef.top_sim_uart__DOT__regFileReadMux = (7U 
                                                   & ((0x80U 
                                                       & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                                       [vlSelfRef.top_sim_uart__DOT__opcode])
                                                       ? 
                                                      vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                      [vlSelfRef.top_sim_uart__DOT__PC]
                                                       : (IData)(top_sim_uart__DOT__regB_loc)));
    top_sim_uart__DOT__aluMode = (1U & (vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                        [vlSelfRef.top_sim_uart__DOT__opcode] 
                                        >> 2U));
    top_sim_uart__DOT__aluMux = ((8U & vlSelfRef.top_sim_uart__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.top_sim_uart__DOT__opcode])
                                  ? vlSelfRef.top_sim_uart__DOT__regB_val
                                  : (((- (IData)((1U 
                                                  & (vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                     [vlSelfRef.top_sim_uart__DOT__PC] 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.top_sim_uart__DOT__PC])));
    vlSelfRef.top_sim_uart__DOT__aluResult = ((IData)(top_sim_uart__DOT__aluMode)
                                               ? ((IData)(top_sim_uart__DOT__aluMode)
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                    | top_sim_uart__DOT__aluMux))
                                                   : 
                                                  (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                   + top_sim_uart__DOT__aluMux))
                                               : (vlSelfRef.top_sim_uart__DOT__regA_val 
                                                  + top_sim_uart__DOT__aluMux));
    top_sim_uart__DOT__alu__DOT__sameMSB = (1U & (~ 
                                                  ((vlSelfRef.top_sim_uart__DOT__regA_val 
                                                    ^ top_sim_uart__DOT__aluMux) 
                                                   >> 0x1fU)));
    top_sim_uart__DOT__overflow = (((vlSelfRef.top_sim_uart__DOT__aluResult 
                                     ^ vlSelfRef.top_sim_uart__DOT__regA_val) 
                                    >> 0x1fU) & (IData)(top_sim_uart__DOT__alu__DOT__sameMSB));
    vlSelfRef.top_sim_uart__DOT__equal = (vlSelfRef.top_sim_uart__DOT__regA_val 
                                          == top_sim_uart__DOT__aluMux);
    vlSelfRef.ovf = top_sim_uart__DOT__overflow;
    vlSelfRef.top_sim_uart__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.resetLED) ? 0U : (0xffU 
                                               & (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                   & ((~ (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                                      & (IData)(vlSelfRef.top_sim_uart__DOT__equal)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.top_sim_uart__DOT__PC) 
                                                    + 
                                                    vlSelfRef.top_sim_uart__DOT__instruction__DOT__instructionSimMem
                                                    [vlSelfRef.top_sim_uart__DOT__PC]))
                                                   : 
                                                  (((IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                    & ((~ (IData)(vlSelfRef.top_sim_uart__DOT__equal)) 
                                                       & (IData)(vlSelfRef.top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                    ? vlSelfRef.top_sim_uart__DOT__regA_val
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top_sim_uart__DOT__PC))))));
}

VL_ATTR_COLD void Vtop_sim_uart___024root___eval_triggers__stl(Vtop_sim_uart___024root* vlSelf);

VL_ATTR_COLD bool Vtop_sim_uart___024root___eval_phase__stl(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_sim_uart___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_sim_uart___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__ico(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__act(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_sim_uart___024root___dump_triggers__nba(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_sim_uart___024root___ctor_var_reset(Vtop_sim_uart___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_sim_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_sim_uart___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->resetButton = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ovf = VL_RAND_RESET_I(1);
    vlSelf->txBit = VL_RAND_RESET_I(1);
    vlSelf->resetLED = VL_RAND_RESET_I(1);
    vlSelf->top_sim_uart__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->top_sim_uart__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->top_sim_uart__DOT__regA_val = VL_RAND_RESET_I(32);
    vlSelf->top_sim_uart__DOT__regB_val = VL_RAND_RESET_I(32);
    vlSelf->top_sim_uart__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->top_sim_uart__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->top_sim_uart__DOT__regFileReadMux = VL_RAND_RESET_I(3);
    vlSelf->top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_1 = VL_RAND_RESET_I(1);
    vlSelf->top_sim_uart__DOT____VdfgRegularize_h8ea05e1a_1_2 = VL_RAND_RESET_I(1);
    vlSelf->top_sim_uart__DOT__PC_File__DOT__newPC = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->top_sim_uart__DOT__reg_file__DOT__registers);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_sim_uart__DOT__instruction__DOT__instructionSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_sim_uart__DOT__control_prom__DOT__control_rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_sim_uart__DOT__data_memory__DOT__dataSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top_sim_uart__DOT__computerDisplay__DOT__tracePC[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->top_sim_uart__DOT__computerDisplay__DOT__traceRegs[__Vi0]);
    }
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__traceWriteIndex = VL_RAND_RESET_I(5);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__traceIndex = VL_RAND_RESET_I(5);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__traceCountFrozen = VL_RAND_RESET_I(5);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__cycleCounter = VL_RAND_RESET_I(8);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__registerCounter = VL_RAND_RESET_I(4);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__bitCounter = VL_RAND_RESET_I(4);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__messageCounter = VL_RAND_RESET_I(4);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__shiftRegister = VL_RAND_RESET_I(10);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__asciiByte = VL_RAND_RESET_I(8);
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT__halt_latched = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_sim_uart__DOT__computerDisplay__DOT__ascii[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_he25d61a8__0 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->top_sim_uart__DOT__computerDisplay__DOT____Vlvbound_h1d59670b__0);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
