// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfibonacci_tb.h for the primary calling header

#include "Vfibonacci_tb__pch.h"
#include "Vfibonacci_tb___024root.h"

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_static(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<8>/*255:0*/ Vfibonacci_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<14>/*447:0*/ Vfibonacci_tb__ConstPool__CONST_h040dc5f1_0;
extern const VlWide<12>/*383:0*/ Vfibonacci_tb__ConstPool__CONST_h231c5920_0;
extern const VlWide<13>/*415:0*/ Vfibonacci_tb__ConstPool__CONST_hdfdbf4b4_0;

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_initial__TOP(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fibonacci_tb__DOT__clk = 0U;
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC = 0U;
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[0U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[1U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[2U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[3U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[4U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[5U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[6U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[7U] 
        = Vfibonacci_tb__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i = 8U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(14, Vfibonacci_tb__ConstPool__CONST_h040dc5f1_0)
                 ,  &(vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 8, 0, VL_CVT_PACK_STR_NW(12, Vfibonacci_tb__ConstPool__CONST_h231c5920_0)
                 ,  &(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(13, Vfibonacci_tb__ConstPool__CONST_hdfdbf4b4_0)
                 ,  &(vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_final(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__stl(Vfibonacci_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfibonacci_tb___024root___eval_phase__stl(Vfibonacci_tb___024root* vlSelf);

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_settle(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_settle\n"); );
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
            Vfibonacci_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/fibonacci_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfibonacci_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__stl(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vfibonacci_tb___024root___stl_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf);
VL_ATTR_COLD void Vfibonacci_tb___024root____Vm_traceActivitySetAll(Vfibonacci_tb___024root* vlSelf);

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_stl(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfibonacci_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vfibonacci_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vfibonacci_tb___024root___stl_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                 >> 0x16U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                 >> 0x18U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                 >> 0x17U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                          (7U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                 >> 0x13U)), 5U)))
             ? 0U : (vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                                   [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                                   >> 0x13U)), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                             [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                             >> 0x13U)), 5U))))) 
           | (vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[
              (7U & (VL_SHIFTL_III(8,32,32, (7U & (
                                                   vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                   >> 0x13U)), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                                        (7U 
                                                         & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                            [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                            >> 0x13U)), 5U))));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc 
        = (7U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                 >> 0x10U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode = 
        (7U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
               [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
               >> 0x16U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1 
        = ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3)) 
           & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc), 5U)))
             ? 0U : (vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc), 5U))))) 
           | (vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers[
              (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc), 5U))));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgExtracted_h91fc6582__0 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                 >> 6U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileWrEn 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                 >> 4U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileReadMux 
        = (7U & ((0x80U & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode])
                  ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC]
                  : (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc)));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMode 
        = (1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                 >> 2U));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux = 
        ((8U & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
          [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode])
          ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_val
          : (((- (IData)((1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                >> 0xfU)))) << 0x10U) 
             | (0xffffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC])));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult 
        = ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMode)
            ? ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMode)
                ? (~ (vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
                      | vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux))
                : (vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
                   + vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux))
            : (vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
               + vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__zeroFlag 
        = (1U & (~ (IData)((0U != vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult))));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__alu__DOT__sameMSB 
        = (1U & (~ ((vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
                     ^ vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux) 
                    >> 0x1fU)));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__overflow 
        = (((vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult 
             ^ vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val) 
            >> 0x1fU) & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__alu__DOT__sameMSB));
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal = 
        (vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val 
         == vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux);
    vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC_File__DOT__newPC 
        = ((IData)(vlSelfRef.fibonacci_tb__DOT__rst)
            ? (0xffU & (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                         & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                            & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)))
                         ? ((IData)(1U) + ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC) 
                                           + vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                           [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC]))
                         : (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                             & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)) 
                                & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)))
                             ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val
                             : ((IData)(1U) + (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC)))))
            : 0U);
}

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_triggers__stl(Vfibonacci_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfibonacci_tb___024root___eval_phase__stl(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfibonacci_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfibonacci_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__act(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fibonacci_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__nba(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fibonacci_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfibonacci_tb___024root____Vm_traceActivitySetAll(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vfibonacci_tb___024root___ctor_var_reset(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->fibonacci_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__run_until_halt__Vstatic__cycle_count = 0;
    vlSelf->fibonacci_tb__DOT__dut__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regB_loc = VL_RAND_RESET_I(3);
    vlSelf->fibonacci_tb__DOT__dut__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regFileWrEn = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__aluMode = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regA_val = VL_RAND_RESET_I(32);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regB_val = VL_RAND_RESET_I(32);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regDest_val = VL_RAND_RESET_I(32);
    vlSelf->fibonacci_tb__DOT__dut__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->fibonacci_tb__DOT__dut__DOT__zeroFlag = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__regFileReadMux = VL_RAND_RESET_I(3);
    vlSelf->fibonacci_tb__DOT__dut__DOT__aluMux = VL_RAND_RESET_I(32);
    vlSelf->fibonacci_tb__DOT__dut__DOT____VdfgExtracted_h91fc6582__0 = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1 = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2 = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3 = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4 = VL_RAND_RESET_I(1);
    vlSelf->fibonacci_tb__DOT__dut__DOT__PC_File__DOT__newPC = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers);
    vlSelf->fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->fibonacci_tb__DOT__dut__DOT__alu__DOT__sameMSB = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlyVal__fibonacci_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__fibonacci_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fibonacci_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
