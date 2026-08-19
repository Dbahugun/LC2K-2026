// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_sim_uart.h for the primary calling header

#include "Vtop_sim_uart__pch.h"
#include "Vtop_sim_uart__Syms.h"
#include "Vtop_sim_uart___024root.h"

void Vtop_sim_uart___024root___ctor_var_reset(Vtop_sim_uart___024root* vlSelf);

Vtop_sim_uart___024root::Vtop_sim_uart___024root(Vtop_sim_uart__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_sim_uart___024root___ctor_var_reset(this);
}

void Vtop_sim_uart___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_sim_uart___024root::~Vtop_sim_uart___024root() {
}
