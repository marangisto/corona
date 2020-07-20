#pragma once

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CR = _::CR_RESET_VALUE;
    RCC.CFGR = _::CFGR_RESET_VALUE;

    // set system clock to HSI-PLL 32MHz

    // 1 wait-state for 32MHz

    FLASH.ACR = __::ACR_RESET_VALUE;
    FLASH.ACR |= __::ACR_ACC64;                 // because reasons
    FLASH.ACR |= __::ACR_PRFTEN                 // enable prefetch
              |  __::ACR_LATENCY                // set one wait-state
              ;

    while (!(FLASH.ACR & __::ACR_LATENCY));

    // turn on HSI

    RCC.CR |= _::CR_HSION;                      // enable HSI16 clock
    while (!(RCC.CR & _::CR_HSIRDY));           // wait for HSI16 ready

    // configure PLL

    RCC.CFGR = _::CFGR_PLLMUL::W(0x02)          // PLL clock * 6
             | _::CFGR_PLLDIV::W(0x02)          // PLLVCO / 3
             ;

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready

    // switch clock source
 
    RCC.CFGR |= _::CFGR_SW::W(0x3);             // set PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x3);    // wait for PLL sys clock

    return 32000000;
}

