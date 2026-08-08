// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VbubbleSort7Final_uart_tb.h for the primary calling header

#include "VbubbleSort7Final_uart_tb__pch.h"
#include "VbubbleSort7Final_uart_tb___024root.h"

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_static(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<8>/*255:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_hae96cd15_0;
extern const VlWide<12>/*383:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_h231c5920_0;
extern const VlWide<14>/*447:0*/ VbubbleSort7Final_uart_tb__ConstPool__CONST_he4c432b2_0;

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_initial__TOP(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__clk = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__PC = 0U;
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
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i = 8U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(16, VbubbleSort7Final_uart_tb__ConstPool__CONST_hae96cd15_0)
                 ,  &(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 8, 0, VL_CVT_PACK_STR_NW(12, VbubbleSort7Final_uart_tb__ConstPool__CONST_h231c5920_0)
                 ,  &(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(14, VbubbleSort7Final_uart_tb__ConstPool__CONST_he4c432b2_0)
                 ,  &(vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                 , 0, ~0ULL);
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = 0U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0U] = 0x30U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[1U] = 0x31U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[2U] = 0x32U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[3U] = 0x33U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[4U] = 0x34U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[5U] = 0x35U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[6U] = 0x36U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[7U] = 0x37U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[8U] = 0x38U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[9U] = 0x39U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xaU] = 0x41U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xbU] = 0x42U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xcU] = 0x43U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xdU] = 0x44U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xeU] = 0x45U;
    vlSelfRef.bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0xfU] = 0x46U;
}

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_final(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__stl(VbubbleSort7Final_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VbubbleSort7Final_uart_tb___024root___eval_phase__stl(VbubbleSort7Final_uart_tb___024root* vlSelf);

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_settle(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_settle\n"); );
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
            VbubbleSort7Final_uart_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/bubbleSort7Final_uart_tb.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VbubbleSort7Final_uart_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__stl(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___stl_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf);
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root____Vm_traceActivitySetAll(VbubbleSort7Final_uart_tb___024root* vlSelf);

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_stl(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VbubbleSort7Final_uart_tb___024root___stl_sequent__TOP__0(vlSelf);
        VbubbleSort7Final_uart_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___stl_sequent__TOP__0(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3;
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_3 = 0;
    CData/*0:0*/ bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4;
    bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_4 = 0;
    // Body
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

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___eval_triggers__stl(VbubbleSort7Final_uart_tb___024root* vlSelf);

VL_ATTR_COLD bool VbubbleSort7Final_uart_tb___024root___eval_phase__stl(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VbubbleSort7Final_uart_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VbubbleSort7Final_uart_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__act(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge bubbleSort7Final_uart_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge bubbleSort7Final_uart_tb.txOut)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___dump_triggers__nba(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge bubbleSort7Final_uart_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge bubbleSort7Final_uart_tb.txOut)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root____Vm_traceActivitySetAll(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VbubbleSort7Final_uart_tb___024root___ctor_var_reset(VbubbleSort7Final_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort7Final_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort7Final_uart_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->bubbleSort7Final_uart_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__txOut = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__rx_byte = VL_RAND_RESET_I(8);
    vlSelf->bubbleSort7Final_uart_tb__DOT__byte_count = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__pcDisable = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_loc = VL_RAND_RESET_I(3);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMode = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__regA_val = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__regB_val = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__regDest_val = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__zeroFlag = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__regFileReadMux = VL_RAND_RESET_I(3);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__aluMux = VL_RAND_RESET_I(32);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__txCycleTrigger = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1 = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2 = VL_RAND_RESET_I(1);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__PC_File__DOT__newPC = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__registers);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__alu__DOT__sameMSB = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256, vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter = VL_RAND_RESET_I(8);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter = VL_RAND_RESET_I(4);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter = VL_RAND_RESET_I(4);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter = VL_RAND_RESET_I(4);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister = VL_RAND_RESET_I(10);
    vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bubbleSort7Final_uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdlyVal__bubbleSort7Final_uart_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__bubbleSort7Final_uart_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__bubbleSort7Final_uart_tb__DOT__txOut__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
