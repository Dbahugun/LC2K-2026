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
        bufp->chgCData(oldp+52,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter),8);
        bufp->chgCData(oldp+53,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter),4);
        bufp->chgCData(oldp+54,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter),4);
        bufp->chgCData(oldp+55,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter),4);
        bufp->chgBit(oldp+56,((1U & ((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                      >> 1U) & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+57,(vlSelfRef.uart_tb__DOT__dut__DOT__overflow));
        bufp->chgBit(oldp+58,(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable));
        bufp->chgBit(oldp+59,(vlSelfRef.uart_tb__DOT__txOut));
        bufp->chgCData(oldp+60,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__regA_val)),8);
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                               & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                               & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))));
        bufp->chgCData(oldp+63,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc),3);
        bufp->chgCData(oldp+64,(vlSelfRef.uart_tb__DOT__dut__DOT__opcode),3);
        bufp->chgBit(oldp+65,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMode));
        bufp->chgIData(oldp+66,(vlSelfRef.uart_tb__DOT__dut__DOT__regA_val),32);
        bufp->chgIData(oldp+67,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_val),32);
        bufp->chgIData(oldp+68,(vlSelfRef.uart_tb__DOT__dut__DOT__aluResult),32);
        bufp->chgBit(oldp+69,(vlSelfRef.uart_tb__DOT__dut__DOT__zeroFlag));
        bufp->chgBit(oldp+70,(vlSelfRef.uart_tb__DOT__dut__DOT__equal));
        bufp->chgCData(oldp+71,(vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux),3);
        bufp->chgIData(oldp+72,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMux),32);
        bufp->chgBit(oldp+73,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__sameMSB));
        bufp->chgWData(oldp+74,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze),256);
        bufp->chgSData(oldp+82,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister),10);
        bufp->chgCData(oldp+83,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte),8);
        bufp->chgCData(oldp+84,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)),8);
        bufp->chgIData(oldp+85,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j),32);
    }
    bufp->chgBit(oldp+86,(vlSelfRef.uart_tb__DOT__clk));
    bufp->chgBit(oldp+87,(vlSelfRef.uart_tb__DOT__rst));
    bufp->chgCData(oldp+88,(vlSelfRef.uart_tb__DOT__rx_byte),8);
    bufp->chgIData(oldp+89,(vlSelfRef.uart_tb__DOT__byte_count),32);
    bufp->chgBit(oldp+90,((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))));
    bufp->chgCData(oldp+91,(((IData)(vlSelfRef.uart_tb__DOT__rst)
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
