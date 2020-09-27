#pragma once

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CFGR2 = _::CFGR2_RESET_VALUE;
    RCC.CFGR3 = _::CFGR3_RESET_VALUE;
    RCC.CR2 = _::CR2_RESET_VALUE;
    RCC.CIR = _::CIR_RESET_VALUE;

    // set system clock to HSI-PLL 48MHz

    constexpr uint8_t wait_states = 0x1;        // 1 wait-state

    FLASH.ACR = __::ACR_PRFTBE | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    RCC.CFGR |= _::CFGR_PLLMUL::W(0xa);         // PLL multiplier 12
    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready
    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    return 48000000;
}

static uint32_t clock_tree_scale(periph_t p, uint32_t f)
{
    return f;
}

