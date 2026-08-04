// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfibonacci_tb__Syms.h"


VL_ATTR_COLD void Vfibonacci_tb___024root__trace_init_sub__TOP__0(Vfibonacci_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("fibonacci_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"MAX_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"resetButton",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"gw_gnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"pcDisable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"plusOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+38,0,"branched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"jumped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"fullInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"regA_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"regB_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"regDest_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"offsetRaw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"offsetExtended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"controlSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"regFileReadSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"regDataInSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"regFileWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"aluSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"aluMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"dataMemEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"dataMemWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"regA_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"regB_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"regDest_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"dataMemOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"dOutExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"regFileReadMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"regFileWriteMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"aluMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("PC_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"plusOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"newPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"numberOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"numberTwo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"zeroFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"equalFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"sameMSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control_prom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("control_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"doutb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"ocea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"cea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reseta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"wrea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"oceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"ceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"resetb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"wreb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"ada",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"adb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"dinb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"addressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"addressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"addressDest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+42,0,"WrEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"dataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"registerA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"registerB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+28,0,"registers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_init_top(Vfibonacci_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfibonacci_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfibonacci_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfibonacci_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfibonacci_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_register(Vfibonacci_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfibonacci_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfibonacci_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfibonacci_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfibonacci_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_const_0_sub_0(Vfibonacci_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_const_0\n"); );
    // Init
    Vfibonacci_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfibonacci_tb___024root*>(voidSelf);
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfibonacci_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_const_0_sub_0(Vfibonacci_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+59,(0x7d0U),32);
    bufp->fullIData(oldp+60,(0x20U),32);
    bufp->fullBit(oldp+61,(0U));
    bufp->fullIData(oldp+62,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regDest_val),32);
    bufp->fullIData(oldp+63,(8U),32);
    bufp->fullBit(oldp+64,(1U));
    bufp->fullCData(oldp+65,(0U),8);
    bufp->fullIData(oldp+66,(0U),32);
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_full_0_sub_0(Vfibonacci_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_full_0\n"); );
    // Init
    Vfibonacci_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfibonacci_tb___024root*>(voidSelf);
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfibonacci_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfibonacci_tb___024root__trace_full_0_sub_0(Vfibonacci_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfibonacci_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom[7]),8);
    bufp->fullIData(oldp+9,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+10,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC),8);
    bufp->fullCData(oldp+11,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC)))),8);
    bufp->fullCData(oldp+12,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC) 
                                          + vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                          [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC])))),8);
    bufp->fullIData(oldp+13,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                             [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC]),32);
    bufp->fullCData(oldp+14,((7U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                    [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                    >> 0x13U))),3);
    bufp->fullCData(oldp+15,((7U & vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                              [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC])),3);
    bufp->fullSData(oldp+16,((0xffffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                              [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC])),16);
    bufp->fullIData(oldp+17,((((- (IData)((1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC] 
                                                 >> 0xfU)))) 
                               << 0x10U) | (0xffffU 
                                            & vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                            [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC]))),32);
    bufp->fullCData(oldp+18,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                             [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode]),8);
    bufp->fullBit(oldp+19,((1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                                  >> 7U))));
    bufp->fullCData(oldp+20,((3U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                    [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                                    >> 5U))),2);
    bufp->fullBit(oldp+21,((1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                                  >> 3U))));
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                            [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode])));
    bufp->fullIData(oldp+24,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult)]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [0U]),32);
    bufp->fullIData(oldp+26,(((5U == (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode))
                               ? (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC)))
                               : ((0x20U & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode])
                                   ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult
                                   : vlSelfRef.fibonacci_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                  [(0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult)]))),32);
    bufp->fullBit(oldp+27,((1U & ((vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode] 
                                   >> 1U) & vlSelfRef.fibonacci_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode]))));
    bufp->fullWData(oldp+28,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
    bufp->fullBit(oldp+36,(((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_4) 
                            & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                               & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_3)))));
    bufp->fullCData(oldp+37,((0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val)),8);
    bufp->fullBit(oldp+38,(((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                            & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                               & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                            & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)) 
                               & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)))));
    bufp->fullCData(oldp+40,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_loc),3);
    bufp->fullCData(oldp+41,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__opcode),3);
    bufp->fullBit(oldp+42,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileWrEn));
    bufp->fullBit(oldp+43,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMode));
    bufp->fullIData(oldp+44,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val),32);
    bufp->fullIData(oldp+45,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regB_val),32);
    bufp->fullIData(oldp+46,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult),32);
    bufp->fullBit(oldp+47,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__zeroFlag));
    bufp->fullBit(oldp+48,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal));
    bufp->fullBit(oldp+49,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__overflow));
    bufp->fullCData(oldp+50,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__regFileReadMux),3);
    bufp->fullIData(oldp+51,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluMux),32);
    bufp->fullBit(oldp+52,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__alu__DOT__sameMSB));
    bufp->fullCData(oldp+53,((0xffU & vlSelfRef.fibonacci_tb__DOT__dut__DOT__aluResult)),8);
    bufp->fullIData(oldp+54,(vlSelfRef.fibonacci_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+55,(vlSelfRef.fibonacci_tb__DOT__clk));
    bufp->fullBit(oldp+56,(vlSelfRef.fibonacci_tb__DOT__rst));
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelfRef.fibonacci_tb__DOT__rst)))));
    bufp->fullCData(oldp+58,(((IData)(vlSelfRef.fibonacci_tb__DOT__rst)
                               ? (0xffU & (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                                            & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)) 
                                               & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)))
                                            ? ((IData)(1U) 
                                               + ((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC) 
                                                  + 
                                                  vlSelfRef.fibonacci_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                  [vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC]))
                                            : (((IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_1) 
                                                & ((~ (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__equal)) 
                                                   & (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT____VdfgRegularize_hd1a8765f_1_2)))
                                                ? vlSelfRef.fibonacci_tb__DOT__dut__DOT__regA_val
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelfRef.fibonacci_tb__DOT__dut__DOT__PC)))))
                               : 0U)),8);
}
