#pragma once

#include <device/fpu.h>

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CIR = _::CIR_RESET_VALUE;

    // set system clock to HSI-PLL 100MHz

    constexpr uint8_t wait_states = 0x3;    // 100MHz at 2.7-3.3V

    FLASH.ACR = __::ACR_PRFTEN | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    enum pllP_t { pllP_2 = 0x0
                , pllP_4 = 0x1
                , pllP_6 = 0x2
                , pllP_8 = 0x3
                };

    // fVCO = hs[ei] * pllN / pllM      // must be 100MHz - 400MHz
    // fSYS = fVCO / pllP               // <= 100MHz
    // fUSB = fVCO / pllQ               // <= 48MHz

    // pllN = 200, pllM = 8, pllP = 4, pllQ = 9
    // fSYS = 1.0e8, fUSB = 4.4445e7

    constexpr uint16_t pllN = 200;      // 9 bits, valid range [50..432]
    constexpr uint8_t pllM = 8;         // 6 bits, valid range [2..63]
    constexpr pllP_t pllP = pllP_4;     // 2 bits, enum range [2, 4, 6, 8]
    constexpr uint8_t pllQ = 9;         // 4 bits, valid range [2..15]
    constexpr uint8_t pllSRC = 0;       // 1 bit, 0 = HSI, 1 = HSE

    RCC.PLLCFGR = (pllSRC ? _::PLLCFGR_PLLSRC : 0)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
                ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL to be ready
    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock
 
    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset

    return 100000000;
}

