#pragma once

////
//
//      STM32L4 SCB peripherals
//
///

// SCB: System control block

struct stm32l412_scb_t
{
    volatile uint32_t CPUID; // CPUID base register
    volatile uint32_t ICSR; // Interrupt control and state register
    volatile uint32_t VTOR; // Vector table offset register
    volatile uint32_t AIRCR; // Application interrupt and reset control register
    volatile uint32_t SCR; // System control register
    volatile uint32_t CCR; // Configuration and control register
    volatile uint32_t SHPR1; // System handler priority registers
    volatile uint32_t SHPR2; // System handler priority registers
    volatile uint32_t SHPR3; // System handler priority registers
    volatile uint32_t SHCSR; // System handler control and state register
    volatile uint32_t CFSR_UFSR_BFSR_MMFSR; // Configurable fault status register
    volatile uint32_t HFSR; // Hard fault status register
    reserved_t<0x1> _0x30;
    volatile uint32_t MMFAR; // Memory management fault address register
    volatile uint32_t BFAR; // Bus fault address register
    volatile uint32_t AFSR; // Auxiliary fault status register

    static constexpr uint32_t CPUID_RESET_VALUE = 0x410fc241; // Reset value
    typedef bit_field_t<0, 0xf> CPUID_REVISION; // Revision number
    typedef bit_field_t<4, 0xfff> CPUID_PARTNO; // Part number of the processor
    typedef bit_field_t<16, 0xf> CPUID_CONSTANT; // Reads as 0xF
    typedef bit_field_t<20, 0xf> CPUID_VARIANT; // Variant number
    typedef bit_field_t<24, 0xff> CPUID_IMPLEMENTER; // Implementer code

    static constexpr uint32_t ICSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> ICSR_VECTACTIVE; // Active vector
    static constexpr uint32_t ICSR_RETTOBASE = 0x800; // Return to base level
    typedef bit_field_t<12, 0x7f> ICSR_VECTPENDING; // Pending vector
    static constexpr uint32_t ICSR_ISRPENDING = 0x400000; // Interrupt pending flag
    static constexpr uint32_t ICSR_PENDSTCLR = 0x2000000; // SysTick exception clear-pending bit
    static constexpr uint32_t ICSR_PENDSTSET = 0x4000000; // SysTick exception set-pending bit
    static constexpr uint32_t ICSR_PENDSVCLR = 0x8000000; // PendSV clear-pending bit
    static constexpr uint32_t ICSR_PENDSVSET = 0x10000000; // PendSV set-pending bit
    static constexpr uint32_t ICSR_NMIPENDSET = 0x80000000; // NMI set-pending bit.

    static constexpr uint32_t VTOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<9, 0x1fffff> VTOR_TBLOFF; // Vector table base offset field

    static constexpr uint32_t AIRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AIRCR_VECTRESET = 0x1; // VECTRESET
    static constexpr uint32_t AIRCR_VECTCLRACTIVE = 0x2; // VECTCLRACTIVE
    static constexpr uint32_t AIRCR_SYSRESETREQ = 0x4; // SYSRESETREQ
    typedef bit_field_t<8, 0x7> AIRCR_PRIGROUP; // PRIGROUP
    static constexpr uint32_t AIRCR_ENDIANESS = 0x8000; // ENDIANESS
    typedef bit_field_t<16, 0xffff> AIRCR_VECTKEYSTAT; // Register key

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_SLEEPONEXIT = 0x2; // SLEEPONEXIT
    static constexpr uint32_t SCR_SLEEPDEEP = 0x4; // SLEEPDEEP
    static constexpr uint32_t SCR_SEVEONPEND = 0x10; // Send Event on Pending bit

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_NONBASETHRDENA = 0x1; // Configures how the processor enters Thread mode
    static constexpr uint32_t CCR_USERSETMPEND = 0x2; // USERSETMPEND
    static constexpr uint32_t CCR_UNALIGN__TRP = 0x8; // UNALIGN_ TRP
    static constexpr uint32_t CCR_DIV_0_TRP = 0x10; // DIV_0_TRP
    static constexpr uint32_t CCR_BFHFNMIGN = 0x100; // BFHFNMIGN
    static constexpr uint32_t CCR_STKALIGN = 0x200; // STKALIGN

    static constexpr uint32_t SHPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SHPR1_PRI_4; // Priority of system handler 4
    typedef bit_field_t<8, 0xff> SHPR1_PRI_5; // Priority of system handler 5
    typedef bit_field_t<16, 0xff> SHPR1_PRI_6; // Priority of system handler 6

    static constexpr uint32_t SHPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> SHPR2_PRI_11; // Priority of system handler 11

    static constexpr uint32_t SHPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> SHPR3_PRI_14; // Priority of system handler 14
    typedef bit_field_t<24, 0xff> SHPR3_PRI_15; // Priority of system handler 15

    static constexpr uint32_t SHCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SHCSR_MEMFAULTACT = 0x1; // Memory management fault exception active bit
    static constexpr uint32_t SHCSR_BUSFAULTACT = 0x2; // Bus fault exception active bit
    static constexpr uint32_t SHCSR_USGFAULTACT = 0x8; // Usage fault exception active bit
    static constexpr uint32_t SHCSR_SVCALLACT = 0x80; // SVC call active bit
    static constexpr uint32_t SHCSR_MONITORACT = 0x100; // Debug monitor active bit
    static constexpr uint32_t SHCSR_PENDSVACT = 0x400; // PendSV exception active bit
    static constexpr uint32_t SHCSR_SYSTICKACT = 0x800; // SysTick exception active bit
    static constexpr uint32_t SHCSR_USGFAULTPENDED = 0x1000; // Usage fault exception pending bit
    static constexpr uint32_t SHCSR_MEMFAULTPENDED = 0x2000; // Memory management fault exception pending bit
    static constexpr uint32_t SHCSR_BUSFAULTPENDED = 0x4000; // Bus fault exception pending bit
    static constexpr uint32_t SHCSR_SVCALLPENDED = 0x8000; // SVC call pending bit
    static constexpr uint32_t SHCSR_MEMFAULTENA = 0x10000; // Memory management fault enable bit
    static constexpr uint32_t SHCSR_BUSFAULTENA = 0x20000; // Bus fault enable bit
    static constexpr uint32_t SHCSR_USGFAULTENA = 0x40000; // Usage fault enable bit

    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IACCVIOL = 0x2; // Instruction access violation flag
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MUNSTKERR = 0x8; // Memory manager fault on unstacking for a return from exception
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MSTKERR = 0x10; // Memory manager fault on stacking for exception entry.
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MLSPERR = 0x20; // MLSPERR
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_MMARVALID = 0x80; // Memory Management Fault Address Register (MMAR) valid flag
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IBUSERR = 0x100; // Instruction bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_PRECISERR = 0x200; // Precise data bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_IMPRECISERR = 0x400; // Imprecise data bus error
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNSTKERR = 0x800; // Bus fault on unstacking for a return from exception
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_STKERR = 0x1000; // Bus fault on stacking for exception entry
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_LSPERR = 0x2000; // Bus fault on floating-point lazy state preservation
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_BFARVALID = 0x8000; // Bus Fault Address Register (BFAR) valid flag
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR = 0x10000; // Undefined instruction usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_INVSTATE = 0x20000; // Invalid state usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_INVPC = 0x40000; // Invalid PC load usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_NOCP = 0x80000; // No coprocessor usage fault.
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_UNALIGNED = 0x1000000; // Unaligned access usage fault
    static constexpr uint32_t CFSR_UFSR_BFSR_MMFSR_DIVBYZERO = 0x2000000; // Divide by zero usage fault

    static constexpr uint32_t HFSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HFSR_VECTTBL = 0x2; // Vector table hard fault
    static constexpr uint32_t HFSR_FORCED = 0x40000000; // Forced hard fault
    static constexpr uint32_t HFSR_DEBUG_VT = 0x80000000; // Reserved for Debug use


    static constexpr uint32_t MMFAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMFAR_MMFAR; // Memory management fault address

    static constexpr uint32_t BFAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BFAR_BFAR; // Bus fault address

    static constexpr uint32_t AFSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AFSR_IMPDEF; // Implementation defined
};

// SCB_ACTRL: System control block ACTLR

struct stm32l412_scb_actrl_t
{
    volatile uint32_t ACTRL; // Auxiliary control register

    static constexpr uint32_t ACTRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ACTRL_DISMCYCINT = 0x1; // DISMCYCINT
    static constexpr uint32_t ACTRL_DISDEFWBUF = 0x2; // DISDEFWBUF
    static constexpr uint32_t ACTRL_DISFOLD = 0x4; // DISFOLD
    static constexpr uint32_t ACTRL_DISFPCA = 0x100; // DISFPCA
    static constexpr uint32_t ACTRL_DISOOFP = 0x200; // DISOOFP
};

template<>
struct peripheral_t<STM32L412, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, SCB>
{
    static constexpr periph_t P = SCB;
    using T = stm32l412_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L412, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, SCB_ACTRL>
{
    static constexpr periph_t P = SCB_ACTRL;
    using T = stm32l412_scb_actrl_t;
    static T& V;
};

using scb_t = peripheral_t<svd, SCB>;
using scb_actrl_t = peripheral_t<svd, SCB_ACTRL>;
