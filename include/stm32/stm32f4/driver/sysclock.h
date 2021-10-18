#pragma once

#include <device/fpu.h>
#include <device/pwr.h>

enum pllP_t
    { pllP_2 = 0x0
    , pllP_4 = 0x1
    , pllP_6 = 0x2
    , pllP_8 = 0x3
    };

template<int FREQ> struct clock_traits {};

template<> struct clock_traits<84>
{
    using _ = rcc_t::T;

    static const uint8_t WS = 3;        // 100MHz at 2.7-3.3V

    static constexpr uint32_t
        CFGR = _::CFGR_PPRE1::W(0x4)    // divide by 2
             | _::CFGR_PPRE2::W(0x0)    // divide by 1
             ;

    static constexpr int APB1_PERIPH_SHIFT = 1;
    static constexpr int APB1_TIMER_SHIFT = 0;
    static constexpr int APB2_PERIPH_SHIFT = 0;
    static constexpr int APB2_TIMER_SHIFT = 0;

    template<typename PWR>
    static void enable_overdrive() {}   // not available on access-line

    static const uint16_t pllN = 200;   // 9 bits, valid range [50..432]
    static const uint8_t pllM = 4;      // 6 bits, valid range [2..63]
    static const pllP_t pllP = pllP_4;  // 2 bits, enum range [2, 4, 6, 8]
    static const uint8_t pllQ = 9;      // 4 bits, valid range [2..15]
    static const uint8_t pllSRC = 1;    // 1 bit, 0 = HSI, 1 = HSE

    static constexpr uint32_t
        PLLCFGR = (pllSRC ? _::PLLCFGR_PLLSRC : 0)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
                ;
};

template<> struct clock_traits<100>
{
    using _ = rcc_t::T;

    static const uint8_t WS = 3;        // 100MHz at 2.7-3.3V

    static constexpr uint32_t
        CFGR = _::CFGR_PPRE1::W(0x4)    // divide by 2
             | _::CFGR_PPRE2::W(0x0)    // divide by 1
             ;

    static constexpr int APB1_PERIPH_SHIFT = 1;
    static constexpr int APB1_TIMER_SHIFT = 0;
    static constexpr int APB2_PERIPH_SHIFT = 0;
    static constexpr int APB2_TIMER_SHIFT = 0;

    template<typename PWR>
    static void enable_overdrive() {}   // not available on access-line

    static const uint16_t pllN = 200;   // 9 bits, valid range [50..432]
    static const uint8_t pllM = 4;      // 6 bits, valid range [2..63]
    static const pllP_t pllP = pllP_4;  // 2 bits, enum range [2, 4, 6, 8]
    static const uint8_t pllQ = 9;      // 4 bits, valid range [2..15]
    static const uint8_t pllSRC = 1;    // 1 bit, 0 = HSI, 1 = HSE

    static constexpr uint32_t
        PLLCFGR = (pllSRC ? _::PLLCFGR_PLLSRC : 0)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
                ;
};

template<> struct clock_traits<180>
{
    using _ = rcc_t::T;

    static const uint8_t WS = 5;        // 180MHz at 2.7-3.6V

    static constexpr uint32_t
        CFGR = _::CFGR_PPRE1::W(0x5)    // divide by 4
             | _::CFGR_PPRE2::W(0x4)    // divide by 2
             ;

    static constexpr int APB1_PERIPH_SHIFT = 2;
    static constexpr int APB1_TIMER_SHIFT = 1;
    static constexpr int APB2_PERIPH_SHIFT = 1;
    static constexpr int APB2_TIMER_SHIFT = 0;

    template<typename PWR>
    static void enable_overdrive()
    {
        pwr_traits<0>::template enable<rcc_t>();        // enable pwr clock
        PWR::V.CR |= PWR::T::CR_ODEN;                   // enable over-drive
        while (!(PWR::V.CSR & PWR::T::CSR_ODRDY));      // wait until ready
        PWR::V.CR |= PWR::T::CR_ODSWEN;                 // enable switching
        while (!(PWR::V.CSR & PWR::T::CSR_ODSWRDY));    // wait until ready
    }

    static const uint16_t pllN = 360;   // 9 bits, valid range [50..432]
    static const uint8_t pllM = 8;      // 6 bits, valid range [2..63]
    static const pllP_t pllP = pllP_2;  // 2 bits, enum range [2, 4, 6, 8]
    static const uint8_t pllQ = 9;      // 4 bits, valid range [2..15]
    static const uint8_t pllSRC = 1;    // 1 bit, 0 = HSI, 1 = HSE

    static constexpr uint32_t
        PLLCFGR = (pllSRC ? _::PLLCFGR_PLLSRC : 0)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
                ;
};

static inline uint32_t clock_tree_init()
{
    constexpr unsigned fmax = mcu_traits<mcu>::frequency;

    using _ = rcc_t::T;
    using __ = flash_t::T;
    using traits = clock_traits<fmax>;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CR = _::CR_RESET_VALUE;
    RCC.CFGR = _::CFGR_RESET_VALUE;
    RCC.CIR = _::CIR_RESET_VALUE;

    // configure flash wait-states for max-speed

    FLASH.ACR = __::ACR_PRFTEN | __::ACR_LATENCY::W(traits::WS);
    while (__::ACR_LATENCY::R(FLASH.ACR) != traits::WS); // take effect

    RCC.CFGR |= traits::CFGR;                   // set bus prescalers

    RCC.CR |= _::CR_HSEON;              // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

    RCC.PLLCFGR = traits::PLLCFGR;              // configure PLL
    RCC.CR |= _::CR_PLLON;                      // enable PLL
    traits::template enable_overdrive<pwr_t>(); // enable over-drive mode
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL to be ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    // RCC.DCKCFGR = _::DCKCFGR_TIMPRE;            // let timers run at HCLK

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset

    return fmax * 1000000;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    constexpr unsigned fmax = mcu_traits<mcu>::frequency;
    using traits = clock_traits<fmax>;

    switch (cs)
    {
        case APB1_PERIPH:   return f >> traits::APB1_PERIPH_SHIFT;
        case APB1_TIMER:    return f >> traits::APB1_TIMER_SHIFT;
        case APB2_PERIPH:   return f >> traits::APB2_PERIPH_SHIFT;
        case APB2_TIMER:    return f >> traits::APB2_TIMER_SHIFT;
        default:            return f;
    }
}

