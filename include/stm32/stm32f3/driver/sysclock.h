#pragma once

#include <device/fpu.h>

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CFGR = _::CFGR_RESET_VALUE;
    RCC.CIR = _::CIR_RESET_VALUE;

    // set system clock to HSI-PLL 72MHz

    constexpr uint8_t wait_states = 0x2;        // 2 wait-state

    FLASH.ACR = __::ACR_PRFTBE | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    constexpr uint8_t  pllMul = 7;      // 4 bits, see reference manual
    constexpr uint8_t  pllSrc = 1;      // 2 bits, see reference manual

    RCC.CFGR |= _::CFGR_PLLMUL::W(pllMul)
             |  _::CFGR_PLLSRC::W(pllSrc)
             ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // set PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset

    return 72000000;
}

