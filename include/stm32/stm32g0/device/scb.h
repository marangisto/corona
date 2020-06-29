#pragma once

////
//
//      STM32G0 SCB peripherals
//
///

// SCB: System control block

struct stm32g030_scb_t
{
    volatile uint32_t CPUID; // CPUID base register
    volatile uint32_t ICSR; // Interrupt control and state register
    volatile uint32_t VTOR; // Vector table offset register
    volatile uint32_t AIRCR; // Application interrupt and reset control register
    volatile uint32_t SCR; // System control register
    volatile uint32_t CCR; // Configuration and control register
    reserved_t<0x1> _0x18;
    volatile uint32_t SHPR2; // System handler priority registers
    volatile uint32_t SHPR3; // System handler priority registers

    static constexpr uint32_t CPUID_RESET_VALUE = 0x410fc241; // Reset value
    typedef bit_field_t<0, 0xf> CPUID_REVISION; // Revision number
    typedef bit_field_t<4, 0xfff> CPUID_PARTNO; // Part number of the processor
    typedef bit_field_t<16, 0xf> CPUID_ARCHITECTURE; // Reads as 0xF
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
    typedef bit_field_t<7, 0x1ffffff> VTOR_TBLOFF; // Vector table base offset field

    static constexpr uint32_t AIRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AIRCR_VECTCLRACTIVE = 0x2; // VECTCLRACTIVE
    static constexpr uint32_t AIRCR_SYSRESETREQ = 0x4; // SYSRESETREQ
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


    static constexpr uint32_t SHPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> SHPR2_PRI_11; // Priority of system handler 11

    static constexpr uint32_t SHPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> SHPR3_PRI_14; // Priority of system handler 14
    typedef bit_field_t<24, 0xff> SHPR3_PRI_15; // Priority of system handler 15
};

// SCB_ACTRL: System control block ACTLR

struct stm32g030_scb_actrl_t
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
struct peripheral_t<STM32G030, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, SCB>
{
    using T = stm32g030_scb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, SCB_ACTRL>
{
    using T = stm32g030_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SCB_ACTRL>
{
    using T = stm32g030_scb_actrl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SCB_ACTRL>
{
    using T = stm32g030_scb_actrl_t;
    static T& V;
};

using scb_t = peripheral_t<svd, SCB>;
using scb_actrl_t = peripheral_t<svd, SCB_ACTRL>;

template<int INST> struct scb_traits {};
