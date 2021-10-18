#pragma once

////
//
//      STM32U5 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32u5xx_syscfg_t
{
    volatile uint32_t SECCFGR; // SYSCFG secure configuration register
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t FPUIMR; // FPU interrupt mask register
    volatile uint32_t CNSLCKR; // SYSCFG CPU non-secure lock register
    volatile uint32_t CSLOCKR; // SYSCFG CPU secure lock register
    volatile uint32_t CFGR2; // configuration register 2
    volatile uint32_t MESR; // memory erase status register
    volatile uint32_t CCCSR; // compensation cell control/status register
    volatile uint32_t CCVR; // compensation cell value register
    volatile uint32_t CCCR; // compensation cell code register
    reserved_t<0x1> _0x28;
    volatile uint32_t RSSCMDR; // RSS command register
    reserved_t<0x10> _0x30;
    volatile uint32_t UCPDR; // USB Type C and Power Delivery register

    static constexpr uint32_t SECCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SECCFGR_SYSCFGSEC = 0x1; // SYSCFG clock control security
    static constexpr uint32_t SECCFGR_CLASSBSEC = 0x2; // CLASSBSEC
    static constexpr uint32_t SECCFGR_FPUSEC = 0x8; // FPUSEC

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR1_PB9_FMP = 0x80000; // PB9_FMP
    static constexpr uint32_t CFGR1_PB8_FMP = 0x40000; // PB8_FMP
    static constexpr uint32_t CFGR1_PB7_FMP = 0x20000; // PB7_FMP
    static constexpr uint32_t CFGR1_PB6_FMP = 0x10000; // PB6_FMP
    static constexpr uint32_t CFGR1_ANASWVDD = 0x200; // GPIO analog switch control voltage selection
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable

    static constexpr uint32_t FPUIMR_RESET_VALUE = 0x1f; // Reset value
    typedef bit_field_t<0, 0x3f> FPUIMR_FPU_IE; // Floating point unit interrupts enable bits

    static constexpr uint32_t CNSLCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNSLCKR_LOCKNSVTOR = 0x1; // VTOR_NS register lock
    static constexpr uint32_t CNSLCKR_LOCKNSMPU = 0x2; // Non-secure MPU registers lock

    static constexpr uint32_t CSLOCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSLOCKR_LOCKSVTAIRCR = 0x1; // LOCKSVTAIRCR
    static constexpr uint32_t CSLOCKR_LOCKSMPU = 0x2; // LOCKSMPU
    static constexpr uint32_t CSLOCKR_LOCKSAU = 0x4; // LOCKSAU

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_SPL = 0x2; // SRAM ECC lock bit
    static constexpr uint32_t CFGR2_CLL = 0x1; // LOCKUP (hardfault) output enable bit

    static constexpr uint32_t MESR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MESR_IPMEE = 0x10000; // IPMEE
    static constexpr uint32_t MESR_MCLR = 0x1; // MCLR

    static constexpr uint32_t CCCSR_RESET_VALUE = 0xa; // Reset value
    static constexpr uint32_t CCCSR_EN1 = 0x1; // EN1
    static constexpr uint32_t CCCSR_CS1 = 0x2; // CS1
    static constexpr uint32_t CCCSR_EN2 = 0x4; // EN2
    static constexpr uint32_t CCCSR_CS2 = 0x8; // CS2
    static constexpr uint32_t CCCSR_RDY1 = 0x100; // RDY1
    static constexpr uint32_t CCCSR_RDY2 = 0x200; // RDY2

    static constexpr uint32_t CCVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CCVR_NCV1; // NCV1
    typedef bit_field_t<4, 0xf> CCVR_PCV1; // PCV1
    typedef bit_field_t<8, 0xf> CCVR_NCV2; // NCV2
    typedef bit_field_t<12, 0xf> CCVR_PCV2; // PCV2

    static constexpr uint32_t CCCR_RESET_VALUE = 0x7878; // Reset value
    typedef bit_field_t<0, 0xf> CCCR_NCC1; // NCC1
    typedef bit_field_t<4, 0xf> CCCR_PCC1; // PCC1
    typedef bit_field_t<8, 0xf> CCCR_NCC2; // NCC2
    typedef bit_field_t<12, 0xf> CCCR_PCC2; // PCC2


    static constexpr uint32_t RSSCMDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RSSCMDR_RSSCMD; // RSS commands


    static constexpr uint32_t UCPDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t UCPDR_CC1ENRXFILTER = 0x1; // CC1ENRXFILTER
    static constexpr uint32_t UCPDR_CC2ENRXFILTER = 0x2; // CC2ENRXFILTER
};

template<>
struct peripheral_t<STM32U5xx, SEC_SYSCFG>
{
    static constexpr periph_t P = SEC_SYSCFG;
    using T = stm32u5xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32u5xx_syscfg_t;
    static T& V;
};

using sec_syscfg_t = peripheral_t<svd, SEC_SYSCFG>;
using syscfg_t = peripheral_t<svd, SYSCFG>;
