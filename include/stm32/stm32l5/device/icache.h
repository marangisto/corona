#pragma once

////
//
//      STM32L5 ICACHE peripherals
//
///

// ICACHE: ICache

struct stm32l552_icache_t
{
    volatile uint32_t ICACHE_CR; // ICACHE control register
    volatile uint32_t ICACHE_SR; // ICACHE status register
    volatile uint32_t ICACHE_IER; // ICACHE interrupt enable register
    volatile uint32_t ICACHE_FCR; // ICACHE flag clear register
    volatile uint32_t ICACHE_HMONR; // ICACHE hit monitor register
    volatile uint32_t ICACHE_MMONR; // ICACHE miss monitor register
    reserved_t<0x2> _0x18;
    volatile uint32_t ICACHE_CRR0; // ICACHE region configuration register
    volatile uint32_t ICACHE_CRR1; // ICACHE region configuration register
    volatile uint32_t ICACHE_CRR2; // ICACHE region configuration register
    volatile uint32_t ICACHE_CRR3; // ICACHE region configuration register

    static constexpr uint32_t ICACHE_CR_RESET_VALUE = 0x4; // Reset value
    static constexpr uint32_t ICACHE_CR_EN = 0x1; // EN
    static constexpr uint32_t ICACHE_CR_CACHEINV = 0x2; // CACHEINV
    static constexpr uint32_t ICACHE_CR_WAYSEL = 0x4; // WAYSEL
    static constexpr uint32_t ICACHE_CR_HITMEN = 0x10000; // HITMEN
    static constexpr uint32_t ICACHE_CR_MISSMEN = 0x20000; // MISSMEN
    static constexpr uint32_t ICACHE_CR_HITMRST = 0x40000; // HITMRST
    static constexpr uint32_t ICACHE_CR_MISSMRST = 0x80000; // MISSMRST

    static constexpr uint32_t ICACHE_SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t ICACHE_SR_BUSYF = 0x1; // BUSYF
    static constexpr uint32_t ICACHE_SR_BSYENDF = 0x2; // BSYENDF
    static constexpr uint32_t ICACHE_SR_ERRF = 0x4; // ERRF

    static constexpr uint32_t ICACHE_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICACHE_IER_BSYENDIE = 0x2; // BSYENDIE
    static constexpr uint32_t ICACHE_IER_ERRIE = 0x4; // ERRIE

    static constexpr uint32_t ICACHE_FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICACHE_FCR_CBSYENDF = 0x2; // CBSYENDF
    static constexpr uint32_t ICACHE_FCR_CERRF = 0x4; // CERRF

    static constexpr uint32_t ICACHE_HMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICACHE_HMONR_HITMON; // HITMON

    static constexpr uint32_t ICACHE_MMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ICACHE_MMONR_MISSMON; // MISSMON


    static constexpr uint32_t ICACHE_CRR0_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xff> ICACHE_CRR0_BASEADDR; // BASEADDR
    typedef bit_field_t<9, 0x7> ICACHE_CRR0_RSIZE; // RSIZE
    static constexpr uint32_t ICACHE_CRR0_REN = 0x8000; // REN
    typedef bit_field_t<16, 0x7ff> ICACHE_CRR0_REMAPADDR; // REMAPADDR
    static constexpr uint32_t ICACHE_CRR0_MSTSEL = 0x10000000; // MSTSEL
    static constexpr uint32_t ICACHE_CRR0_HBURST = 0x80000000; // HBURST

    static constexpr uint32_t ICACHE_CRR1_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xff> ICACHE_CRR1_BASEADDR; // BASEADDR
    typedef bit_field_t<9, 0x7> ICACHE_CRR1_RSIZE; // RSIZE
    static constexpr uint32_t ICACHE_CRR1_REN = 0x8000; // REN
    typedef bit_field_t<16, 0x7ff> ICACHE_CRR1_REMAPADDR; // REMAPADDR
    static constexpr uint32_t ICACHE_CRR1_MSTSEL = 0x10000000; // MSTSEL
    static constexpr uint32_t ICACHE_CRR1_HBURST = 0x80000000; // HBURST

    static constexpr uint32_t ICACHE_CRR2_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xff> ICACHE_CRR2_BASEADDR; // BASEADDR
    typedef bit_field_t<9, 0x7> ICACHE_CRR2_RSIZE; // RSIZE
    static constexpr uint32_t ICACHE_CRR2_REN = 0x8000; // REN
    typedef bit_field_t<16, 0x7ff> ICACHE_CRR2_REMAPADDR; // REMAPADDR
    static constexpr uint32_t ICACHE_CRR2_MSTSEL = 0x10000000; // MSTSEL
    static constexpr uint32_t ICACHE_CRR2_HBURST = 0x80000000; // HBURST

    static constexpr uint32_t ICACHE_CRR3_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xff> ICACHE_CRR3_BASEADDR; // BASEADDR
    typedef bit_field_t<9, 0x7> ICACHE_CRR3_RSIZE; // RSIZE
    static constexpr uint32_t ICACHE_CRR3_REN = 0x8000; // REN
    typedef bit_field_t<16, 0x7ff> ICACHE_CRR3_REMAPADDR; // REMAPADDR
    static constexpr uint32_t ICACHE_CRR3_MSTSEL = 0x10000000; // MSTSEL
    static constexpr uint32_t ICACHE_CRR3_HBURST = 0x80000000; // HBURST
};

template<>
struct peripheral_t<STM32L552, ICACHE>
{
    static constexpr periph_t P = ICACHE;
    using T = stm32l552_icache_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_ICACHE>
{
    static constexpr periph_t P = SEC_ICACHE;
    using T = stm32l552_icache_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, ICACHE>
{
    static constexpr periph_t P = ICACHE;
    using T = stm32l552_icache_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_ICACHE>
{
    static constexpr periph_t P = SEC_ICACHE;
    using T = stm32l552_icache_t;
    static T& V;
};

using icache_t = peripheral_t<svd, ICACHE>;
using sec_icache_t = peripheral_t<svd, SEC_ICACHE>;

template<int INST> struct icache_traits {};

template<> struct icache_traits<0>
{
    using icache = icache_t;

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_ICACHESMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_ICACHESMEN;
    }
};
