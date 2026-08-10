// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tb__Syms.h"


VL_ATTR_COLD void Vuart_tb___024root__trace_init_sub__TOP__0(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("uart_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"txOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"resetLEDBlank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"MAX_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"UART_PASS_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"UART_WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+94,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"resetButton",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ovf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"txBit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"resetLED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"gw_gnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"pcDisable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"plusOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"branched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"jumped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"fullInstruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"regA_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"regB_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"regDest_loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"offsetRaw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"offsetExtended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"controlSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"regFileReadSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"regDataInSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"regFileWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"aluSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"aluMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"dataMemEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"dataMemWrEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"regA_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"regB_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"regDest_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+41,0,"allRegs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+69,0,"aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"dataMemOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"dOutExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"regFileReadMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"regFileWriteMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"aluMux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"txHaltTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"txCycleTrigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"haltCycleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("PC_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"plusOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"newPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"numberOne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"numberTwo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"zeroFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"equalFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"sameMSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("computerDisplay", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"allRegs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"txOutHalt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"haltCycleCount",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"conversion",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"initState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,0,"dataTransmitCycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+108,0,"dataTransmitDisable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+76,0,"allRegsFreeze",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+84,0,"frozenCycleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"displayVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"cycleCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"registerCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"bitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"messageCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"shiftRegister",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+87,0,"asciiByte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"halt_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ascii", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("control_prom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("control_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"doutb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"ocea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"cea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reseta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"wrea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"oceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ceb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"resetb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"wreb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"ada",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"adb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"dinb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"oce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"ad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"addressA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"addressB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"addressDest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+37,0,"WrEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"dataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"registerA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"registerB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+41,0,"allRegs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+41,0,"registers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_tb___024root__trace_init_top(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vuart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuart_tb___024root__trace_register(Vuart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vuart_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vuart_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vuart_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vuart_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_const_0\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_const_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+97,(0x7d0U),32);
    bufp->fullIData(oldp+98,(0x3b6a0U),32);
    bufp->fullIData(oldp+99,(0x3ca28U),32);
    bufp->fullIData(oldp+100,(0x20U),32);
    bufp->fullBit(oldp+101,(0U));
    bufp->fullIData(oldp+102,(vlSelfRef.uart_tb__DOT__dut__DOT__regDest_val),32);
    bufp->fullBit(oldp+103,(vlSelfRef.uart_tb__DOT__dut__DOT__txCycleTrigger));
    bufp->fullIData(oldp+104,(8U),32);
    bufp->fullCData(oldp+105,(0xeaU),8);
    bufp->fullCData(oldp+106,(0U),2);
    bufp->fullCData(oldp+107,(1U),2);
    bufp->fullCData(oldp+108,(2U),2);
    bufp->fullCData(oldp+109,(3U),2);
    bufp->fullBit(oldp+110,(1U));
    bufp->fullCData(oldp+111,(0U),8);
    bufp->fullIData(oldp+112,(0U),32);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_0\n"); );
    // Init
    Vuart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tb___024root*>(voidSelf);
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuart_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuart_tb___024root__trace_full_0_sub_0(Vuart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[7]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[8]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[9]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[10]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[11]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[12]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[13]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[14]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__ascii[15]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[0]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[1]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[2]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[3]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[4]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[5]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[6]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom[7]),8);
    bufp->fullIData(oldp+25,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+26,(vlSelfRef.uart_tb__DOT__dut__DOT__PC),8);
    bufp->fullCData(oldp+27,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))),8);
    bufp->fullCData(oldp+28,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC) 
                                          + vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                          [vlSelfRef.uart_tb__DOT__dut__DOT__PC])))),8);
    bufp->fullIData(oldp+29,(vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                             [vlSelfRef.uart_tb__DOT__dut__DOT__PC]),32);
    bufp->fullCData(oldp+30,((7U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                    [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                    >> 0x13U))),3);
    bufp->fullCData(oldp+31,((7U & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                              [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),3);
    bufp->fullSData(oldp+32,((0xffffU & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                              [vlSelfRef.uart_tb__DOT__dut__DOT__PC])),16);
    bufp->fullIData(oldp+33,((((- (IData)((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                                 [vlSelfRef.uart_tb__DOT__dut__DOT__PC] 
                                                 >> 0xfU)))) 
                               << 0x10U) | (0xffffU 
                                            & vlSelfRef.uart_tb__DOT__dut__DOT__instruction__DOT__instructionSimMem
                                            [vlSelfRef.uart_tb__DOT__dut__DOT__PC]))),32);
    bufp->fullCData(oldp+34,(vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                             [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]),8);
    bufp->fullBit(oldp+35,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                  >> 7U))));
    bufp->fullCData(oldp+36,((3U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                    [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                    >> 5U))),2);
    bufp->fullBit(oldp+37,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                  >> 4U))));
    bufp->fullBit(oldp+38,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                  >> 3U))));
    bufp->fullBit(oldp+39,((1U & (vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                  >> 1U))));
    bufp->fullBit(oldp+40,((1U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                            [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])));
    bufp->fullWData(oldp+41,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__registers),256);
    bufp->fullIData(oldp+49,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [(0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                             [0U]),32);
    bufp->fullIData(oldp+51,(((5U == (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__opcode))
                               ? (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__PC)))
                               : ((0x20U & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.uart_tb__DOT__dut__DOT__opcode])
                                   ? vlSelfRef.uart_tb__DOT__dut__DOT__aluResult
                                   : vlSelfRef.uart_tb__DOT__dut__DOT__data_memory__DOT__dataSimMem
                                  [(0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)]))),32);
    bufp->fullCData(oldp+52,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__state),2);
    bufp->fullCData(oldp+53,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__cycleCounter),8);
    bufp->fullCData(oldp+54,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__registerCounter),4);
    bufp->fullCData(oldp+55,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__bitCounter),4);
    bufp->fullCData(oldp+56,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__messageCounter),4);
    bufp->fullBit(oldp+57,((1U & ((vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                   [vlSelfRef.uart_tb__DOT__dut__DOT__opcode] 
                                   >> 1U) & vlSelfRef.uart_tb__DOT__dut__DOT__control_prom__DOT__control_rom
                                  [vlSelfRef.uart_tb__DOT__dut__DOT__opcode]))));
    bufp->fullBit(oldp+58,(vlSelfRef.uart_tb__DOT__dut__DOT__overflow));
    bufp->fullBit(oldp+59,(vlSelfRef.uart_tb__DOT__dut__DOT__pcDisable));
    bufp->fullBit(oldp+60,(vlSelfRef.uart_tb__DOT__txOut));
    bufp->fullCData(oldp+61,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__regA_val)),8);
    bufp->fullBit(oldp+62,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                            & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)) 
                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)))));
    bufp->fullBit(oldp+63,(((IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_1) 
                            & ((~ (IData)(vlSelfRef.uart_tb__DOT__dut__DOT__equal)) 
                               & (IData)(vlSelfRef.uart_tb__DOT__dut__DOT____VdfgRegularize_h8ea05e1a_1_2)))));
    bufp->fullCData(oldp+64,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_loc),3);
    bufp->fullCData(oldp+65,(vlSelfRef.uart_tb__DOT__dut__DOT__opcode),3);
    bufp->fullBit(oldp+66,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMode));
    bufp->fullIData(oldp+67,(vlSelfRef.uart_tb__DOT__dut__DOT__regA_val),32);
    bufp->fullIData(oldp+68,(vlSelfRef.uart_tb__DOT__dut__DOT__regB_val),32);
    bufp->fullIData(oldp+69,(vlSelfRef.uart_tb__DOT__dut__DOT__aluResult),32);
    bufp->fullBit(oldp+70,(vlSelfRef.uart_tb__DOT__dut__DOT__zeroFlag));
    bufp->fullBit(oldp+71,(vlSelfRef.uart_tb__DOT__dut__DOT__equal));
    bufp->fullCData(oldp+72,(vlSelfRef.uart_tb__DOT__dut__DOT__regFileReadMux),3);
    bufp->fullIData(oldp+73,(vlSelfRef.uart_tb__DOT__dut__DOT__aluMux),32);
    bufp->fullIData(oldp+74,(vlSelfRef.uart_tb__DOT__dut__DOT__haltCycleCount),32);
    bufp->fullBit(oldp+75,(vlSelfRef.uart_tb__DOT__dut__DOT__alu__DOT__sameMSB));
    bufp->fullWData(oldp+76,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__allRegsFreeze),256);
    bufp->fullIData(oldp+84,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__frozenCycleCount),32);
    bufp->fullIData(oldp+85,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__displayVal),32);
    bufp->fullSData(oldp+86,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__shiftRegister),10);
    bufp->fullCData(oldp+87,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__asciiByte),8);
    bufp->fullBit(oldp+88,(vlSelfRef.uart_tb__DOT__dut__DOT__computerDisplay__DOT__halt_latched));
    bufp->fullCData(oldp+89,((0xffU & vlSelfRef.uart_tb__DOT__dut__DOT__aluResult)),8);
    bufp->fullIData(oldp+90,(vlSelfRef.uart_tb__DOT__dut__DOT__reg_file__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+91,(vlSelfRef.uart_tb__DOT__clk));
    bufp->fullBit(oldp+92,(vlSelfRef.uart_tb__DOT__rst));
    bufp->fullBit(oldp+93,((1U & (~ (IData)(vlSelfRef.uart_tb__DOT__rst)))));
    bufp->fullCData(oldp+94,(vlSelfRef.uart_tb__DOT__rx_byte),8);
    bufp->fullIData(oldp+95,(vlSelfRef.uart_tb__DOT__byte_count),32);
    bufp->fullCData(oldp+96,(((IData)(vlSelfRef.uart_tb__DOT__rst)
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
