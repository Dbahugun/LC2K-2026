// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfibonacci_tb.h for the primary calling header

#include "Vfibonacci_tb__pch.h"
#include "Vfibonacci_tb___024root.h"

VL_ATTR_COLD void Vfibonacci_tb___024root___eval_initial__TOP(Vfibonacci_tb___024root* vlSelf);
VlCoroutine Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__0(Vfibonacci_tb___024root* vlSelf);
VlCoroutine Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__1(Vfibonacci_tb___024root* vlSelf);

void Vfibonacci_tb___024root___eval_initial(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfibonacci_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fibonacci_tb__DOT__clk__0 
        = vlSelfRef.fibonacci_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__1(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x61a8ULL, 
                                             nullptr, 
                                             "src/fibonacci_tb.sv", 
                                             16);
        vlSelfRef.__VdlyVal__fibonacci_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.fibonacci_tb__DOT__clk)));
        vlSelfRef.__VdlySet__fibonacci_tb__DOT__clk__v0 = 1U;
    }
}

void Vfibonacci_tb___024root___act_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf);

void Vfibonacci_tb___024root___eval_act(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfibonacci_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfibonacci_tb___024root___act_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vfibonacci_tb___024root___nba_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf);
void Vfibonacci_tb___024root___nba_sequent__TOP__1(Vfibonacci_tb___024root* vlSelf);

void Vfibonacci_tb___024root___eval_nba(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfibonacci_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfibonacci_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vfibonacci_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vfibonacci_tb___024root___nba_sequent__TOP__0(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyVal__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlyDim0__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    CData/*0:0*/ __VdlySet__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    __VdlySet__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0;
    // Body
    __VdlySet__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileWrEn) 
                  & (0U != (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileReadMux)))))) {
        if ((1U & (~ (IData)(vlSelfRef.fibonacci_tb__DOT__rst)))) {
            vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j = 8U;
        }
    }
    if ((1U & ((vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                >> 1U) & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
               [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode]))) {
        __VdlyVal__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
            = vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_val;
        __VdlyDim0__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 
            = (0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult);
        __VdlySet__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileWrEn) 
         & (0U != (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileReadMux)))) {
        VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileReadMux), 5U)), vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers, 
                        (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgExtracted_h91fc6582__0) 
                          & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                             [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                             >> 5U)) ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult
                          : ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgExtracted_h91fc6582__0)
                              ? (0xffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC)))
                              : vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult)])));
    } else if ((1U & (~ (IData)(vlSelfRef.fibonacci_tb__DOT__rst)))) {
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
    }
    if (__VdlySet__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0) {
        vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[__VdlyDim0__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0] 
            = __VdlyVal__fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem__v0;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4) 
                   & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                      & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3)))) 
               | (~ (IData)(vlSelfRef.fibonacci_tb__DOT__rst))))) {
        vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC = vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC_File__DOT__newPC;
    }
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

VL_INLINE_OPT void Vfibonacci_tb___024root___nba_sequent__TOP__1(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__fibonacci_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__fibonacci_tb__DOT__clk__v0 = 0U;
        vlSelfRef.fibonacci_tb__DOT__clk = vlSelfRef.__VdlyVal__fibonacci_tb__DOT__clk__v0;
    }
}

void Vfibonacci_tb___024root___timing_resume(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h14dc8b1c__0.resume(
                                                   "@(posedge fibonacci_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfibonacci_tb___024root___timing_commit(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h14dc8b1c__0.commit(
                                                   "@(posedge fibonacci_tb.clk)");
    }
}

void Vfibonacci_tb___024root___eval_triggers__act(Vfibonacci_tb___024root* vlSelf);

bool Vfibonacci_tb___024root___eval_phase__act(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfibonacci_tb___024root___eval_triggers__act(vlSelf);
    Vfibonacci_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfibonacci_tb___024root___timing_resume(vlSelf);
        Vfibonacci_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfibonacci_tb___024root___eval_phase__nba(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfibonacci_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__nba(Vfibonacci_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_tb___024root___dump_triggers__act(Vfibonacci_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfibonacci_tb___024root___eval(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval\n"); );
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
            Vfibonacci_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/fibonacci_tb.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfibonacci_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/fibonacci_tb.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfibonacci_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfibonacci_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfibonacci_tb___024root___eval_debug_assertions(Vfibonacci_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
