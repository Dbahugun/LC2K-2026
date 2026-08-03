// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfibonacci_tb.h for the primary calling header

#include "Vfibonacci_tb__pch.h"
#include "Vfibonacci_tb__Syms.h"
#include "Vfibonacci_tb___024root.h"

void Vfibonacci_tb___024root___ctor_var_reset(Vfibonacci_tb___024root* vlSelf);

Vfibonacci_tb___024root::Vfibonacci_tb___024root(Vfibonacci_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfibonacci_tb___024root___ctor_var_reset(this);
}

void Vfibonacci_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfibonacci_tb___024root::~Vfibonacci_tb___024root() {
}
