// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0\n"); );
    // Body
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vuart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tb___024root__trace_chg_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
void Vuart_tb___024root__trace_chg_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);

void Vuart_tb___024root__trace_chg_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_0_sub_0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.uart_tb__DOT__dut__DOT__PC),8);
        bufp->chgCData(oldp+1,((0x000000ffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))),8);
        bufp->chgCData(oldp+2,((0x000000ffU & ((IData)(1U) 
                                               + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                                  + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                  [vlSelfRef.uart_tb__DOT__dut__DOT__PC])))),8);
        bufp->chgIData(oldp+3,(vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                               [vlSelfRef.uart_tb__DOT__dut__DOT__PC]),32);
        bufp->chgCData(oldp+4,((7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                      [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                      >> 0x00000013U))),3);
        bufp->chgCData(oldp+5,((7U & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),3);
        bufp->chgSData(oldp+6,((0x0000ffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),16);
        bufp->chgIData(oldp+7,((((- (IData)((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                   >> 0x0000000fU)))) 
                                 << 0x00000010U) | 
                                (0x0000ffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))),32);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                               [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]),8);
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                    [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                    >> 7U))));
        bufp->chgCData(oldp+10,((3U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                       [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                       >> 5U))),2);
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                     >> 4U))));
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                     >> 2U))));
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                               [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])));
        bufp->chgWData(oldp+16,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
        bufp->chgIData(oldp+24,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                [(0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[0U]),32);
        bufp->chgIData(oldp+26,(((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                  ? (0x000000ffU & 
                                     ((IData)(1U) + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                                  : ((0x00000020U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
                                      ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result
                                      : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                     [(0x000000ffU 
                                       & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)]))),32);
        bufp->chgBit(oldp+27,((3U == (3U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                      [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+28,((1U & ((~ ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
                                          ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne) 
                                         >> 0x0000001fU)) 
                                     & ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne 
                                         ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result) 
                                        >> 0x0000001fU)))));
        bufp->chgBit(oldp+29,(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt));
        bufp->chgBit(oldp+30,(((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                               | ((9U >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                                  & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                     >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))))));
        bufp->chgCData(oldp+31,((0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne)),8);
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                                  & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                               & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))));
        bufp->chgCData(oldp+34,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB),3);
        bufp->chgCData(oldp+35,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0),3);
        bufp->chgIData(oldp+36,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne),32);
        bufp->chgIData(oldp+37,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dina),32);
        bufp->chgIData(oldp+38,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result),32);
        bufp->chgBit(oldp+39,((1U & (~ (0U != vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)))));
        bufp->chgBit(oldp+40,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag));
        bufp->chgCData(oldp+41,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest),3);
        bufp->chgIData(oldp+42,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo),32);
        bufp->chgIData(oldp+43,(vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount),32);
        bufp->chgBit(oldp+44,((1U & (~ ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
                                         ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne) 
                                        >> 0x0000001fU)))));
        bufp->chgCData(oldp+45,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state),2);
        bufp->chgWData(oldp+46,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze),256);
        bufp->chgCData(oldp+54,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC),8);
        bufp->chgCData(oldp+55,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter),8);
        bufp->chgCData(oldp+56,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter),4);
        bufp->chgCData(oldp+57,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter),4);
        bufp->chgCData(oldp+58,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter),4);
        bufp->chgIData(oldp+59,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal),32);
        bufp->chgCData(oldp+60,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte),8);
        bufp->chgSData(oldp+61,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame),10);
        bufp->chgCData(oldp+62,((0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)),8);
    }
    bufp->chgBit(oldp+63,(vlSelfRef.uart_tb__DOT__clk));
    bufp->chgBit(oldp+64,(vlSelfRef.uart_tb__DOT__rst));
    bufp->chgBit(oldp+65,((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))));
    bufp->chgIData(oldp+66,(vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number),32);
    bufp->chgCData(oldp+67,(vlSelfRef.uart_tb__DOT__rx_byte),8);
    bufp->chgIData(oldp+68,(vlSelfRef.uart_tb__DOT__byte_count),32);
    bufp->chgIData(oldp+69,(vlSelfRef.uart_tb__DOT__line_count),32);
    bufp->chgCData(oldp+70,((0x000000ffU & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                                                 & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                                  + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                  [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))
                                              : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                  & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                                                  ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))) 
                                            & (- (IData)((IData)(vlSelfRef.uart_tb__DOT__rst)))))),8);
    Vuart_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 71, vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii);
    Vuart_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 87, vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom);
}

void Vuart_tb___024root__trace_chg_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_dtype____0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
}

void Vuart_tb___024root__trace_chg_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_chg_dtype____1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),8);
}

void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_cleanup\n"); );
    // Body
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
