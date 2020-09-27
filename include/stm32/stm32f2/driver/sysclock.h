#pragma once

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CFGR = _::CFGR_RESET_VALUE;
    RCC.CIR = _::CIR_RESET_VALUE;

    // set system clock to HSI-PLL 120MHz

    constexpr uint8_t wait_states = 0x7;        // 7 wait-state

    FLASH.ACR = __::ACR_PRFTEN | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    // pllN = 120.0, pllM = 8.0, pllP = 2.0, pllQ = 5.0
    // fPllP = 1.2e8, fPllQ = 4.8e7, fVCO = 2.4e8

    constexpr uint16_t pllM = 8;        // 6 bits, valid range [2..63]
    constexpr uint16_t pllN = 120;      // 9 bits, valid range [64..432]
    constexpr uint8_t  pllP = 0;        // 2 bits, 0=2, 1=4, 2=6, 3=8
    constexpr uint16_t pllQ = 5;        // 4 bits, valid range [2..15]

    RCC.PLLCFGR = _::PLLCFGR_PLLM::W(pllM)
                | _::PLLCFGR_PLLN::W(pllN)
                | _::PLLCFGR_PLLP::W(pllP)
                | _::PLLCFGR_PLLQ::W(pllQ)
                ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // set PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    return 120000000;
}

static uint32_t clock_tree_scale(periph_t p, uint32_t f)
{
    return f;
}

