#pragma once

#include <device/fpu.h>
#include <device/pwr.h>
#include <device/syscfg.h>

static inline uint32_t clock_tree_init()
{
    using _ = rcc_t::T;
    _& RCC = rcc_t::V;

    // FLASH seems to default to 7 wait-states

    RCC.CR |= _::CR_HSEON;              // enable external clock
    while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

    // We set HPRE to 0b1001 to divide 4 for APB 120MHz

    RCC.D1CFGR = _::D1CFGR_HPRE::W(0x9);

    // Activate VOS0 voltage scaling level to reach max frequency
 
    {
        using _ = pwr_t::T;
        using __ = syscfg_t::T;
        pwr_t::T& PWR = pwr_t::V;

        syscfg_traits<0>::template enable<rcc_t>();     // syscfg clock

        PWR.CR3 |= _::CR3_LDOEN;                    // one-shot setting
        while (!(PWR.CSR1 & _::CSR1_ACTVOSRDY));    // supply ready

        PWR.D3CR = _::D3CR_VOS::W(0x3);          // set VOS1 power scale
        while (!(PWR.CSR1 & _::CSR1_ACTVOSRDY));    // supply ready
        syscfg_t::V.PWRCR |= __::PWRCR_ODEN;   // over-drive enable
        while (!(PWR.CSR1 & _::CSR1_ACTVOSRDY));    // supply ready
    } 

    // Set system clock to 8MHz HSE & PLL 480MHz, buses 120MHz and 48MHz USB

    // pllN = 120.0, pllM = 2.0, pllP = 1.0, pllQ = 1.0, pllR = 1.0
    // fPllP = 4.8e8, fPllQ = 4.8e8, fPllR = 4.8e8, fVCO = 4.8e8

    constexpr uint16_t pllN = 120 - 1;  // 9 bits, k = x + 1, x = [3..511]
    constexpr uint8_t pllP = 1 - 1;     // 7 bits, k = x + 1, x = [0..127]
    constexpr uint8_t pllQ = 1 - 1;     // 7 bits, k = x + 1, x = [0..127]
    constexpr uint8_t pllR = 1 - 1;     // 7 bits, k = x + 1, x = [0..127]

    // FIXME: PLL input seems to be scaled by Q, not P?

    RCC.PLL1DIVR = _::PLL1DIVR_DIVN1::W(pllN)
                 | _::PLL1DIVR_DIVP1::W(pllP)
                 | _::PLL1DIVR_DIVQ1::W(pllQ)
                 | _::PLL1DIVR_DIVR1::W(pllR)
                 ;

    RCC.PLLCKSELR = _::PLLCKSELR_DIVM1::W(0x2)  // prescale 2
                  | _::PLLCKSELR_PLLSRC::W(0x2) // HSE PLL source
                  ;

    RCC.CR |= _::CR_PLL1ON;                     // enable PLL
    while (!(RCC.CR & _::CR_PLL1RDY));          // wait for PLL to be ready

    RCC.CFGR |= _::CFGR_SW::W(0x3);             // select PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x3);    // wait for PLL sys clock

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset

    return 480000000;
}

