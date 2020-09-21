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

    /*

    RCC.CR |= _::CR_HSEON;                  // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));       // wait for HSE ready
    RCC.CFGR |= _::CFGR_PLLSRC              // clock from PREDIV1
              | _::CFGR_PLLMUL<0x7>         // pll multiplier = 9
              | _::CFGR_PPRE1<0x4>          // APB low-speed prescale = 2
              ;
    RCC.CR |= _::CR_PLLON;                  // enable external clock
    while (!(RCC.CR & _::CR_PLLRDY));       // wait for pll ready
    RCC.CFGR |= _::CFGR_SW<0x2>;            // use pll as clock source

    // wait for clock switch completion

    while ((RCC.CFGR & _::CFGR_SWS<0x3>) != _::CFGR_SWS<0x2>);
    */
    /*
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
    */
    return 8000000;
    //return 72000000;
}

