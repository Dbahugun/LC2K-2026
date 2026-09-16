// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vuart_tb___024root__trace_init_sub__TOP__0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_sub__TOP__0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "uart_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"txOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"resetLEDBlank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"MAX_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"UART_PASS_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"UART_WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"run_until_halt__Vstatic__run_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"line_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"resetButton",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"txBit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"resetLED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"gw_gnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"pcDisable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"plusOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"branched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"jumped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"fullInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"regA_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"regB_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"regDest_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"offsetRaw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"offsetExtended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"controlSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"regFileReadSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"regDataInSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"regFileWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"aluSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"aluMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"dataMemEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"dataMemWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"regA_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"regB_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"regDest_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"allRegs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"dataMemOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"dOutExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"regFileReadMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"regFileWriteMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"aluMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"txHaltTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"txCycleTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"haltCycleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "PC_File", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"plusOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"newPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"numberOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"numberTwo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"zeroFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"equalFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"sameMSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "computerDisplay", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"allRegs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"txOutHalt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"BAUD_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"S_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+46,0,"allRegsFreeze",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"frozenPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"baudCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"bitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"charCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"lineCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);

    Vuart_tb___024root__trace_init_dtype____0(vlSelf, tracep, "ascii", 0, c+71, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"displayVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"asciiByte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "control_prom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);

    Vuart_tb___024root__trace_init_dtype____1(vlSelf, tracep, "control_rom", 0, c+87, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "data_memory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"doutb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"ocea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"cea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reseta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"wrea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"oceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"ceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"resetb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"wreb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"ada",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"adb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"dinb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instruction", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_file", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"addressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"addressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"addressDest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"WrEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"dataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"registerA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"registerB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"allRegs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+16,0,"registers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype_sub____0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_dtype____0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype_sub____0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_dtype_sub____0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype_sub____1(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_dtype____1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_dtype_sub____1(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_dtype_sub____1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 7, 0);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (7 - i), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_top(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_top\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vuart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuart_tb___024root__trace_register(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_register\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vuart_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vuart_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vuart_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vuart_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_const_0\n"); );
    // Body
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vuart_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_const_0_sub_0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+95,(0x000007d0U),32);
    bufp->fullIData(oldp+96,(0x0014e344U),32);
    bufp->fullIData(oldp+97,(0x00154eb0U),32);
    bufp->fullIData(oldp+98,(0x00000020U),32);
    bufp->fullBit(oldp+99,(0U));
    bufp->fullIData(oldp+100,(vlSelfRef.uart_tb__DOT__dut__DOT__regDest_val),32);
    bufp->fullBit(oldp+101,(vlSelfRef.uart_tb__DOT__dut__DOT__txCycleTrigger));
    bufp->fullIData(oldp+102,(8U),32);
    bufp->fullCData(oldp+103,(0xe9U),8);
    bufp->fullCData(oldp+104,(0U),2);
    bufp->fullCData(oldp+105,(1U),2);
    bufp->fullCData(oldp+106,(2U),2);
    bufp->fullBit(oldp+107,(1U));
    bufp->fullCData(oldp+108,(0U),8);
    bufp->fullIData(oldp+109,(0U),32);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_0\n"); );
    // Body
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vuart_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
VL_ATTR_COLD void Vuart_tb___024root__trace_full_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_0_sub_0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.uart_tb__DOT__dut__DOT__PC),8);
    bufp->fullCData(oldp+1,((0x000000ffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))),8);
    bufp->fullCData(oldp+2,((0x000000ffU & ((IData)(1U) 
                                            + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                               + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                               [vlSelfRef.uart_tb__DOT__dut__DOT__PC])))),8);
    bufp->fullIData(oldp+3,(vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                            [vlSelfRef.uart_tb__DOT__dut__DOT__PC]),32);
    bufp->fullCData(oldp+4,((7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                   [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                   >> 0x00000013U))),3);
    bufp->fullCData(oldp+5,((7U & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                             [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),3);
    bufp->fullSData(oldp+6,((0x0000ffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                             [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),16);
    bufp->fullIData(oldp+7,((((- (IData)((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                >> 0x0000000fU)))) 
                              << 0x00000010U) | (0x0000ffffU 
                                                 & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))),32);
    bufp->fullCData(oldp+8,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                            [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]),8);
    bufp->fullBit(oldp+9,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                 [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                 >> 7U))));
    bufp->fullCData(oldp+10,((3U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                    [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                    >> 5U))),2);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                  >> 4U))));
    bufp->fullBit(oldp+12,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                  >> 3U))));
    bufp->fullBit(oldp+13,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0] 
                                  >> 1U))));
    bufp->fullBit(oldp+15,((1U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                            [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])));
    bufp->fullWData(oldp+16,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
    bufp->fullIData(oldp+24,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem[0U]),32);
    bufp->fullIData(oldp+26,(((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                               ? (0x000000ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                               : ((0x00000020U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0])
                                   ? vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result
                                   : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                  [(0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)]))),32);
    bufp->fullBit(oldp+27,((3U == (3U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0]))));
    bufp->fullBit(oldp+28,((1U & ((~ ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
                                       ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne) 
                                      >> 0x0000001fU)) 
                                  & ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne 
                                      ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result) 
                                     >> 0x0000001fU)))));
    bufp->fullBit(oldp+29,(vlSelfRef.uart_tb__DOT__dut__DOT__PC_File__DOT__halt));
    bufp->fullBit(oldp+30,(((1U != (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state)) 
                            | ((9U >= (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter)) 
                               & ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame) 
                                  >> (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter))))));
    bufp->fullCData(oldp+31,((0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne)),8);
    bufp->fullBit(oldp+32,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                            & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag)) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))));
    bufp->fullCData(oldp+34,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressB),3);
    bufp->fullCData(oldp+35,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0),3);
    bufp->fullIData(oldp+36,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne),32);
    bufp->fullIData(oldp+37,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dina),32);
    bufp->fullIData(oldp+38,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result),32);
    bufp->fullBit(oldp+39,((1U & (~ (0U != vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)))));
    bufp->fullBit(oldp+40,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__equalFlag));
    bufp->fullCData(oldp+41,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__addressDest),3);
    bufp->fullIData(oldp+42,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo),32);
    bufp->fullIData(oldp+43,(vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount),32);
    bufp->fullBit(oldp+44,((1U & (~ ((vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberTwo 
                                      ^ vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__numberOne) 
                                     >> 0x0000001fU)))));
    bufp->fullCData(oldp+45,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state),2);
    bufp->fullWData(oldp+46,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze),256);
    bufp->fullCData(oldp+54,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenPC),8);
    bufp->fullCData(oldp+55,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__baudCounter),8);
    bufp->fullCData(oldp+56,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter),4);
    bufp->fullCData(oldp+57,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__charCounter),4);
    bufp->fullCData(oldp+58,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__lineCounter),4);
    bufp->fullIData(oldp+59,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal),32);
    bufp->fullCData(oldp+60,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte),8);
    bufp->fullSData(oldp+61,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frame),10);
    bufp->fullCData(oldp+62,((0x000000ffU & vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__result)),8);
    bufp->fullBit(oldp+63,(vlSelfRef.uart_tb__DOT__clk));
    bufp->fullBit(oldp+64,(vlSelfRef.uart_tb__DOT__rst));
    bufp->fullBit(oldp+65,((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))));
    bufp->fullIData(oldp+66,(vlSelfRef.uart_tb__DOT__run_until_halt__Vstatic__run_number),32);
    bufp->fullCData(oldp+67,(vlSelfRef.uart_tb__DOT__rx_byte),8);
    bufp->fullIData(oldp+68,(vlSelfRef.uart_tb__DOT__byte_count),32);
    bufp->fullIData(oldp+69,(vlSelfRef.uart_tb__DOT__line_count),32);
    bufp->fullCData(oldp+70,((0x000000ffU & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
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
    Vuart_tb___024root__trace_full_dtype____0(vlSelf, bufp, 71, vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii);
    Vuart_tb___024root__trace_full_dtype____1(vlSelf, bufp, 87, vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_dtype____0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_dtype____0\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->fullCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->fullCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->fullCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->fullCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->fullCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->fullCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->fullCData(oldp+15,(__VdtypeVar[15]),8);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_dtype____1(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_dtype____1\n"); );
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[0]),8);
}
