// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VbubbleSort8Fast_tb__Syms.h"


void VbubbleSort8Fast_tb___024root__trace_chg_0_sub_0(VbubbleSort8Fast_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VbubbleSort8Fast_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort8Fast_tb___024root__trace_chg_0\n"); );
    // Init
    VbubbleSort8Fast_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VbubbleSort8Fast_tb___024root*>(voidSelf);
    VbubbleSort8Fast_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VbubbleSort8Fast_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VbubbleSort8Fast_tb___024root__trace_chg_0_sub_0(VbubbleSort8Fast_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VbubbleSort8Fast_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort8Fast_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom[7]),8);
        bufp->chgIData(oldp+8,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+9,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC),8);
        bufp->chgCData(oldp+10,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC)))),8);
        bufp->chgCData(oldp+11,((0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC) 
                                             + vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                             [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC])))),8);
        bufp->chgIData(oldp+12,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC]),32);
        bufp->chgCData(oldp+13,((7U & (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                       [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC] 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+14,((7U & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                 [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC])),3);
        bufp->chgSData(oldp+15,((0xffffU & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                 [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC])),16);
        bufp->chgIData(oldp+16,((((- (IData)((1U & 
                                              (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                               [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC] 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                               [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC]))),32);
        bufp->chgCData(oldp+17,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode]),8);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode] 
                                     >> 7U))));
        bufp->chgCData(oldp+19,((3U & (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                       [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode] 
                                       >> 5U))),2);
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode] 
                                     >> 3U))));
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode] 
                                     >> 1U))));
        bufp->chgBit(oldp+22,((1U & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                               [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode])));
        bufp->chgIData(oldp+23,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                [(0xffU & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluResult)]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                [0U]),32);
        bufp->chgIData(oldp+25,(((5U == (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode))
                                  ? (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC)))
                                  : ((0x20U & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode])
                                      ? vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluResult
                                      : vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                     [(0xffU & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluResult)]))),32);
        bufp->chgBit(oldp+26,((1U & ((vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode] 
                                      >> 1U) & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode]))));
        bufp->chgWData(oldp+27,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4) 
                               & ((~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                                  & (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3)))));
        bufp->chgCData(oldp+36,((0xffU & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regA_val)),8);
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                               & ((~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                                  & (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__equal)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                               & ((~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__equal)) 
                                  & (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)))));
        bufp->chgCData(oldp+39,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regB_loc),3);
        bufp->chgCData(oldp+40,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__opcode),3);
        bufp->chgBit(oldp+41,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regFileWrEn));
        bufp->chgBit(oldp+42,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluMode));
        bufp->chgIData(oldp+43,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regA_val),32);
        bufp->chgIData(oldp+44,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regB_val),32);
        bufp->chgIData(oldp+45,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluResult),32);
        bufp->chgBit(oldp+46,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__zeroFlag));
        bufp->chgBit(oldp+47,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__equal));
        bufp->chgBit(oldp+48,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__overflow));
        bufp->chgCData(oldp+49,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regFileReadMux),3);
        bufp->chgIData(oldp+50,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluMux),32);
        bufp->chgBit(oldp+51,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__alu__DOT__sameMSB));
        bufp->chgCData(oldp+52,((0xffU & vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__aluResult)),8);
        bufp->chgIData(oldp+53,(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j),32);
    }
    bufp->chgBit(oldp+54,(vlSelfRef.bubbleSort8Fast_tb__DOT__clk));
    bufp->chgBit(oldp+55,(vlSelfRef.bubbleSort8Fast_tb__DOT__rst));
    bufp->chgBit(oldp+56,((1U & (~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__rst)))));
    bufp->chgCData(oldp+57,(((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__rst)
                              ? (0xffU & (((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                                           & ((~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                                              & (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__equal)))
                                           ? ((IData)(1U) 
                                              + ((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC) 
                                                 + 
                                                 vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC]))
                                           : (((IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                                               & ((~ (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__equal)) 
                                                  & (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)))
                                               ? vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__regA_val
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.bubbleSort8Fast_tb__DOT__dut__DOT__PC)))))
                              : 0U)),8);
}

void VbubbleSort8Fast_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VbubbleSort8Fast_tb___024root__trace_cleanup\n"); );
    // Init
    VbubbleSort8Fast_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VbubbleSort8Fast_tb___024root*>(voidSelf);
    VbubbleSort8Fast_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
