// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgcd_tb.h for the primary calling header

#include "Vgcd_tb__pch.h"
#include "Vgcd_tb__Syms.h"
#include "Vgcd_tb___024root.h"

void Vgcd_tb___024root___ctor_var_reset(Vgcd_tb___024root* vlSelf);

Vgcd_tb___024root::Vgcd_tb___024root(Vgcd_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgcd_tb___024root___ctor_var_reset(this);
}

void Vgcd_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgcd_tb___024root::~Vgcd_tb___024root() {
}
