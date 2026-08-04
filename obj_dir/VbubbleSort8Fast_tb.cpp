// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VbubbleSort8Fast_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VbubbleSort8Fast_tb::VbubbleSort8Fast_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VbubbleSort8Fast_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VbubbleSort8Fast_tb::VbubbleSort8Fast_tb(const char* _vcname__)
    : VbubbleSort8Fast_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VbubbleSort8Fast_tb::~VbubbleSort8Fast_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VbubbleSort8Fast_tb___024root___eval_debug_assertions(VbubbleSort8Fast_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VbubbleSort8Fast_tb___024root___eval_static(VbubbleSort8Fast_tb___024root* vlSelf);
void VbubbleSort8Fast_tb___024root___eval_initial(VbubbleSort8Fast_tb___024root* vlSelf);
void VbubbleSort8Fast_tb___024root___eval_settle(VbubbleSort8Fast_tb___024root* vlSelf);
void VbubbleSort8Fast_tb___024root___eval(VbubbleSort8Fast_tb___024root* vlSelf);

void VbubbleSort8Fast_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VbubbleSort8Fast_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VbubbleSort8Fast_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VbubbleSort8Fast_tb___024root___eval_static(&(vlSymsp->TOP));
        VbubbleSort8Fast_tb___024root___eval_initial(&(vlSymsp->TOP));
        VbubbleSort8Fast_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VbubbleSort8Fast_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VbubbleSort8Fast_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VbubbleSort8Fast_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VbubbleSort8Fast_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VbubbleSort8Fast_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VbubbleSort8Fast_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VbubbleSort8Fast_tb___024root___eval_final(VbubbleSort8Fast_tb___024root* vlSelf);

VL_ATTR_COLD void VbubbleSort8Fast_tb::final() {
    VbubbleSort8Fast_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VbubbleSort8Fast_tb::hierName() const { return vlSymsp->name(); }
const char* VbubbleSort8Fast_tb::modelName() const { return "VbubbleSort8Fast_tb"; }
unsigned VbubbleSort8Fast_tb::threads() const { return 1; }
void VbubbleSort8Fast_tb::prepareClone() const { contextp()->prepareClone(); }
void VbubbleSort8Fast_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VbubbleSort8Fast_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VbubbleSort8Fast_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VbubbleSort8Fast_tb___024root__trace_init_top(VbubbleSort8Fast_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VbubbleSort8Fast_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VbubbleSort8Fast_tb___024root*>(voidSelf);
    VbubbleSort8Fast_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VbubbleSort8Fast_tb___024root__trace_decl_types(tracep);
    VbubbleSort8Fast_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VbubbleSort8Fast_tb___024root__trace_register(VbubbleSort8Fast_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VbubbleSort8Fast_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VbubbleSort8Fast_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VbubbleSort8Fast_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
