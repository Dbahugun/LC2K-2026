// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[15]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[0]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[1]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[2]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[3]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[4]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[5]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[6]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[7]),8);
        bufp->chgIData(oldp+24,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+25,(vlSelfRef.uart_tb__DOT__dut__DOT__PC),8);
        bufp->chgCData(oldp+26,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))),8);
        bufp->chgCData(oldp+27,((0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                             + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                             [vlSelfRef.uart_tb__DOT__dut__DOT__PC])))),8);
        bufp->chgIData(oldp+28,(vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                [vlSelfRef.uart_tb__DOT__dut__DOT__PC]),32);
        bufp->chgCData(oldp+29,((7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                       [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+30,((7U & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),3);
        bufp->chgSData(oldp+31,((0xffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),16);
        bufp->chgIData(oldp+32,((((- (IData)((1U & 
                                              (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                               [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                               [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))),32);
        bufp->chgCData(oldp+33,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]),8);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                     >> 7U))));
        bufp->chgCData(oldp+35,((3U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                       [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                       >> 5U))),2);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                     >> 4U))));
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                     >> 3U))));
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                     >> 1U))));
        bufp->chgBit(oldp+39,((1U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                               [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])));
        bufp->chgWData(oldp+40,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
        bufp->chgIData(oldp+48,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                [(0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                [0U]),32);
        bufp->chgIData(oldp+50,(((5U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__opcode))
                                  ? (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                                  : ((0x20U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])
                                      ? vlSelfRef.uart_tb__DOT__dut__DOT__aluResult
                                      : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                     [(0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)]))),32);
        bufp->chgCData(oldp+51,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state),2);
        bufp->chgCData(oldp+52,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceWriteIndex),5);
        bufp->chgCData(oldp+53,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceIndex),5);
        bufp->chgCData(oldp+54,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceCountFrozen),5);
        bufp->chgCData(oldp+55,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter),8);
        bufp->chgCData(oldp+56,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter),4);
        bufp->chgCData(oldp+57,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter),4);
        bufp->chgCData(oldp+58,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter),4);
        bufp->chgBit(oldp+59,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched));
        bufp->chgBit(oldp+60,((1U & ((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                      >> 1U) & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+61,(vlSelfRef.uart_tb__DOT__dut__DOT__overflow));
        bufp->chgBit(oldp+62,(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable));
        bufp->chgBit(oldp+63,(vlSelfRef.uart_tb__DOT__txOut));
        bufp->chgCData(oldp+64,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__regA_val)),8);
        bufp->chgBit(oldp+65,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                               & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))));
        bufp->chgBit(oldp+66,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                               & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))));
        bufp->chgCData(oldp+67,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc),3);
        bufp->chgCData(oldp+68,(vlSelfRef.uart_tb__DOT__dut__DOT__opcode),3);
        bufp->chgBit(oldp+69,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMode));
        bufp->chgIData(oldp+70,(vlSelfRef.uart_tb__DOT__dut__DOT__regA_val),32);
        bufp->chgIData(oldp+71,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_val),32);
        bufp->chgIData(oldp+72,(vlSelfRef.uart_tb__DOT__dut__DOT__aluResult),32);
        bufp->chgBit(oldp+73,(vlSelfRef.uart_tb__DOT__dut__DOT__zeroFlag));
        bufp->chgBit(oldp+74,(vlSelfRef.uart_tb__DOT__dut__DOT__equal));
        bufp->chgCData(oldp+75,(vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux),3);
        bufp->chgIData(oldp+76,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMux),32);
        bufp->chgIData(oldp+77,(vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount),32);
        bufp->chgBit(oldp+78,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__sameMSB));
        bufp->chgCData(oldp+79,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[0]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[1]),8);
        bufp->chgCData(oldp+81,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[2]),8);
        bufp->chgCData(oldp+82,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[3]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[4]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[5]),8);
        bufp->chgCData(oldp+85,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[6]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[7]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[8]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[9]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[10]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[11]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[12]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[13]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[14]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__tracePC[15]),8);
        bufp->chgWData(oldp+95,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                [0U]),256);
        bufp->chgWData(oldp+103,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [1U]),256);
        bufp->chgWData(oldp+111,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [2U]),256);
        bufp->chgWData(oldp+119,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [3U]),256);
        bufp->chgWData(oldp+127,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [4U]),256);
        bufp->chgWData(oldp+135,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [5U]),256);
        bufp->chgWData(oldp+143,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [6U]),256);
        bufp->chgWData(oldp+151,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [7U]),256);
        bufp->chgWData(oldp+159,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [8U]),256);
        bufp->chgWData(oldp+167,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [9U]),256);
        bufp->chgWData(oldp+175,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xaU]),256);
        bufp->chgWData(oldp+183,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xbU]),256);
        bufp->chgWData(oldp+191,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xcU]),256);
        bufp->chgWData(oldp+199,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xdU]),256);
        bufp->chgWData(oldp+207,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xeU]),256);
        bufp->chgWData(oldp+215,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__traceRegs
                                 [0xfU]),256);
        bufp->chgIData(oldp+223,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal),32);
        bufp->chgSData(oldp+224,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister),10);
        bufp->chgCData(oldp+225,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte),8);
        bufp->chgCData(oldp+226,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)),8);
        bufp->chgIData(oldp+227,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j),32);
    }
    bufp->chgBit(oldp+228,(vlSelfRef.uart_tb__DOT__clk));
    bufp->chgBit(oldp+229,(vlSelfRef.uart_tb__DOT__rst));
    bufp->chgBit(oldp+230,((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))));
    bufp->chgCData(oldp+231,(vlSelfRef.uart_tb__DOT__rx_byte),8);
    bufp->chgIData(oldp+232,(vlSelfRef.uart_tb__DOT__byte_count),32);
    bufp->chgIData(oldp+233,(vlSelfRef.uart_tb__DOT__line_count),32);
    bufp->chgCData(oldp+234,(((IData)(vlSelfRef.uart_tb__DOT__rst)
                               ? (0xffU & (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                            & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))
                                            ? ((IData)(1U) 
                                               + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                                  + 
                                                  vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                  [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                                            : (((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                                                & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                                                   & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))
                                                ? vlSelfRef.uart_tb__DOT__dut__DOT__regA_val
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))))
                               : 0U)),8);
}

void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_cleanup\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
