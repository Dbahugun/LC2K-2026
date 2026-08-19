// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_SIM_UART__SYMS_H_
#define VERILATED_VTOP_SIM_UART__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_sim_uart.h"

// INCLUDE MODULE CLASSES
#include "Vtop_sim_uart___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_sim_uart__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_sim_uart* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_sim_uart___024root        TOP;

    // CONSTRUCTORS
    Vtop_sim_uart__Syms(VerilatedContext* contextp, const char* namep, Vtop_sim_uart* modelp);
    ~Vtop_sim_uart__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
