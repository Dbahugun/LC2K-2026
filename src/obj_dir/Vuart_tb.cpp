// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_tb__pch.h"

//============================================================
// Constructors

Vuart_tb::Vuart_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vuart_tb::Vuart_tb(const char* _vcname__)
    : Vuart_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_tb::~Vuart_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_tb___024root___eval_static(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval_settle(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf);

void Vuart_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_tb___024root___eval_static(&(vlSymsp->TOP));
        Vuart_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuart_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vuart_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vuart_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_tb___024root___eval_final(Vuart_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tb::final() {
    Vuart_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_tb::hierName() const { return vlSymsp->name(); }
const char* Vuart_tb::modelName() const { return "Vuart_tb"; }
unsigned Vuart_tb::threads() const { return 1; }
void Vuart_tb::prepareClone() const { contextp()->prepareClone(); }
void Vuart_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
