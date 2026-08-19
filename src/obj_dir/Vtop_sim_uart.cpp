// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_sim_uart__pch.h"

//============================================================
// Constructors

Vtop_sim_uart::Vtop_sim_uart(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_sim_uart__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetButton{vlSymsp->TOP.resetButton}
    , done{vlSymsp->TOP.done}
    , ovf{vlSymsp->TOP.ovf}
    , txBit{vlSymsp->TOP.txBit}
    , resetLED{vlSymsp->TOP.resetLED}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_sim_uart::Vtop_sim_uart(const char* _vcname__)
    : Vtop_sim_uart(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_sim_uart::~Vtop_sim_uart() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_sim_uart___024root___eval_debug_assertions(Vtop_sim_uart___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_sim_uart___024root___eval_static(Vtop_sim_uart___024root* vlSelf);
void Vtop_sim_uart___024root___eval_initial(Vtop_sim_uart___024root* vlSelf);
void Vtop_sim_uart___024root___eval_settle(Vtop_sim_uart___024root* vlSelf);
void Vtop_sim_uart___024root___eval(Vtop_sim_uart___024root* vlSelf);

void Vtop_sim_uart::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_sim_uart::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_sim_uart___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_sim_uart___024root___eval_static(&(vlSymsp->TOP));
        Vtop_sim_uart___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_sim_uart___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_sim_uart___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_sim_uart::eventsPending() { return false; }

uint64_t Vtop_sim_uart::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_sim_uart::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_sim_uart___024root___eval_final(Vtop_sim_uart___024root* vlSelf);

VL_ATTR_COLD void Vtop_sim_uart::final() {
    Vtop_sim_uart___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_sim_uart::hierName() const { return vlSymsp->name(); }
const char* Vtop_sim_uart::modelName() const { return "Vtop_sim_uart"; }
unsigned Vtop_sim_uart::threads() const { return 1; }
void Vtop_sim_uart::prepareClone() const { contextp()->prepareClone(); }
void Vtop_sim_uart::atClone() const {
    contextp()->threadPoolpOnClone();
}
