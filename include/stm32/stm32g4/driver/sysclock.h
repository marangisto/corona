#pragma once

#include <device/fpu.h>

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CR = _::CR_RESET_VALUE;
    RCC.CFGR = _::CFGR_RESET_VALUE;

    // set system clock to HSI-PLL 170MHz (R)
    // and same for P and Q clocks

    // 8 wait-states for 170MHz at Vcore range 1
    constexpr uint8_t wait_states = 0x8;

    FLASH.ACR = __::ACR_RESET_VALUE;
    FLASH.ACR |= __::ACR_PRFTEN | __::ACR_LATENCY<wait_states>;

    while ( (FLASH.ACR & __::ACR_LATENCY<0xf>)
          != __::ACR_LATENCY<wait_states>
          ); // wait to take effect

#if defined(HSE)
    RCC.CR |= _::CR_HSEON;              // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

#if HSE == 24000000
    constexpr uint8_t pllM = 6 - 1; // 3 bits, valid range [1..15]-1
#elif HSE == 8000000
    constexpr uint8_t pllM = 2 - 1; // 3 bits, valid range [1..15]-1
#else
    static_assert(false, "unsupported HSE frequency");
#endif
    constexpr uint8_t pllSRC = 3;   // 2 bits, 2 = HSI16, 3 = HSE
#else
    // pllN = 85.0, pllM = 4.0, pllP = 7.0, pllPDIV = 2.0
    // pllQ = 2.0, pllR = 2.0, fSYS = 1.7e8, fPllP = 1.7e8
    // fPllQ = 1.7e8, fVCO = 3.4e8
    constexpr uint8_t pllM = 4 - 1; // 3 bits, valid range [1..15]-1
    constexpr uint8_t pllSRC = 2;   // 2 bits, 2 = HSI16, 3 = HSE
#endif
    constexpr uint16_t pllN = 85;   // 7 bits, valid range [8..127]
    constexpr uint8_t pllPDIV = 2;  // 5 bits, valid range [2..31]
    constexpr uint8_t pllR = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8
    constexpr uint8_t pllQ = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8

    RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC<pllSRC>
                   | _::PLLSYSCFGR_PLLSYSN<pllN>
                   | _::PLLSYSCFGR_PLLSYSM<pllM>
                   | _::PLLSYSCFGR_PLLSYSPDIV<pllPDIV>
                   | _::PLLSYSCFGR_PLLSYSQ<pllQ>
                   | _::PLLSYSCFGR_PLLSYSR<pllR>
                   | _::PLLSYSCFGR_PLLPEN
                   | _::PLLSYSCFGR_PLLSYSQEN
                   | _::PLLSYSCFGR_PLLSYSREN
                   ;

    RCC.CR |= _::CR_PLLSYSON;               // enable PLL
    while (!(RCC.CR & _::CR_PLLSYSRDY));    // wait for PLL to be ready
    RCC.CFGR |= _::CFGR_SW<0x3>;            // set PLL as system clock
    // wait for PLL as system clock
    while ((RCC.CFGR & _::CFGR_SWS<0x3>) != _::CFGR_SWS<0x3>);

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP<0xf>; // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset
    return 170000000;
}

