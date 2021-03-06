#pragma once

#include <device/fpu.h>
#include <device/pwr.h>

static inline uint32_t clock_tree_init()
{
    using _ =rcc_t::T;
    _& RCC = rcc_t::V;

    // reset clock control registers

    RCC.CR = _::CIR_RESET_VALUE;
    RCC.CIR = _::CIR_RESET_VALUE;
    RCC.CFGR = _::CFGR_RESET_VALUE;

    // set flash wait-states for maximum clock speed

    {
        using _ =  flash_t::T;
        _& FLASH = flash_t::V;
        constexpr uint8_t wait_states = 0x7;    // 216MHz at 2.7-3.6V

        FLASH.ACR = _::ACR_LATENCY::W(wait_states)
                  | _::ACR_ARTEN
                  | _::ACR_PRFTEN
                  ;

        while (_::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect
    }

    // set over-drive power mode for maximum speed

    {
        using _ =  pwr_t::T;
        _& PWR = pwr_t::V;

        pwr_traits<0>::template enable<rcc_t>();
        PWR.CR1 |= _::CR1_ODEN;                 // enable over-drive mode
        while (!(PWR.CSR1 & _::CSR1_ODRDY));    // wait for over-drive ready
    }

    // we leave HPRE = 0 but set ppre 1 / 2 to divide 8 / 4 for APB 27MHz / 54MHz

    RCC.CFGR |= _::CFGR_PPRE1::W(0x6) | _::CFGR_PPRE2::W(0x5);

    // set system clock to HSE-PLL 216MHz

    RCC.CR |= _::CR_HSEON;              // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

    // pllN = 216.0, pllM = 4.0, pllP = 2.0, pllQ = 9.0
    // pllR = 2.0, fPllP = 2.16e8, fPllQ = 4.8e7, fPllR = 2.16e8

    enum pllP_t { pllP_2 = 0x0
                , pllP_4 = 0x1
                , pllP_6 = 0x2
                , pllP_8 = 0x3
                };

    constexpr uint16_t pllN = 216;      // 9 bits, valid range [50..432]
    constexpr uint8_t pllM = 4;         // 6 bits, valid range [2..63]
    constexpr pllP_t pllP = pllP_2;     // 2 bits, enum range [2, 4, 6, 8]
    constexpr uint8_t pllQ = 9;         // 4 bits, valid range [2..15]
//  constexpr uint8_t pllR = 2;         // 3 bits, valid range [2..7]
    constexpr uint8_t pllSRC = 1;       // 1 bit, 0 = HSI, 1 = HSE

    RCC.PLLCFGR = (pllSRC ? _::PLLCFGR_PLLSRC : 0)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
//              | _::PLLCFGR_PLLR::W(pllR)      // FIXME: where is PLLR?
                ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL to be ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    // set timer clock prescaler selection

    // RCC.DCKCFGR1 |= _::DCKCFGR1_TIMPRE;         // use HCLK for timers

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset
    return 216000000;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    switch (cs)
    {
        case APB1_PERIPH:   return f >> 3;
        case APB1_TIMER:    return f >> 2;
        case APB2_PERIPH:   return f >> 2;
        case APB2_TIMER:    return f >> 1;
        default:            return f;
    }
}

