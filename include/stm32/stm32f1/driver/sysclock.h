#pragma once

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CFGR = _::CFGR_RESET_VALUE;
    RCC.CR = _::CR_RESET_VALUE;

    // set system clock to HSE-PLL 72MHz

    constexpr uint8_t wait_states = 0x2;        // 2 wait-states

    FLASH.ACR = __::ACR_PRFTBE | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    RCC.CR |= _::CR_HSEON;              // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

    RCC.CFGR |= _::CFGR_PLLSRC          // HSE from PREDIV1
             |  _::CFGR_PLLMUL::W(0x7)  // pll multiplier = 9
             |  _::CFGR_PPRE1::W(0x4)   // APB low-speed prescale = 2
             ;

    RCC.CR |= _::CR_PLLON;              // enable pll
    while (!(RCC.CR & _::CR_PLLRDY));   // wait for pll ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    return 72000000;
}

static uint32_t clock_tree_scale(periph_t p, uint32_t f)
{
    switch (p)
    {
    case USART1:;
    case USART2:;
    case USART3:
        return f >> 1;
    default:
        return f;
    }
}

