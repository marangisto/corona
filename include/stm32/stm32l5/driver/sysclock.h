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

    // set system clock to HSI-PLL 110MHz

    // 5 wait-states for 110MHz

    constexpr uint8_t wait_states = 0x5;

    FLASH.ACR = __::ACR_RESET_VALUE;
    FLASH.ACR |= __::ACR_LATENCY::W(wait_states);

    while ( __::ACR_LATENCY::R(FLASH.ACR) != wait_states);

    // turn on HSI

    RCC.CR |= _::CR_HSION;                      // enable HSI16 clock
    while (!(RCC.CR & _::CR_HSIRDY));           // wait for HSI16 ready

    // configure PLL

    // pllN = 55.0, pllM = 4.0, pllP = 7.0, pllQ = 2.0, pllR = 2.0

    constexpr uint8_t pllM = 4 - 1; // 3 bits, valid range [1..8]-1
    constexpr uint8_t pllSRC = 2;   // 2 bits, 2 = HSI16, 3 = HSE
    constexpr uint16_t pllN = 55;   // 7 bits, valid range [8..86]
    constexpr uint8_t pllP = 0;     // 1 bits, 0=2, 1=17
    constexpr uint8_t pllR = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8
    constexpr uint8_t pllQ = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8

    RCC.PLLCFGR = _::PLLCFGR_PLLSRC::W(pllSRC)
                   | _::PLLCFGR_PLLN::W(pllN)
                   | _::PLLCFGR_PLLM::W(pllM)
                   | _::PLLCFGR_PLLP * pllP     // 1 bit
                   | _::PLLCFGR_PLLQ::W(pllQ)
                   | _::PLLCFGR_PLLR::W(pllR)
                   | (_::PLLCFGR_PLLREN & 0)    // FIXME: not used yet
                   | (_::PLLCFGR_PLLQEN & 0)    // FIXME: wrong USB frequency
                   | _::PLLCFGR_PLLREN
                   ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready

    RCC.CFGR |= _::CFGR_SW::W(0x3);             // set PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x3);    // wait for PLL sys clock

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset

    return 110000000;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    return f;
}

