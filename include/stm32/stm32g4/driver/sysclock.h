#pragma once

#include <device/fpu.h>


template<unsigned F> struct clock_traits
{
    static void setup_pll()
    {
        static_assert
            ( always_false_i<F>::value
            , "unsupported HSE frequency"
            );
    }
};

template<> struct clock_traits<0>
{
    static constexpr uint32_t freq = 170000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        // pllN = 85.0, pllM = 4.0, pllP = 7.0, pllPDIV = 2.0
        // pllQ = 2.0, pllR = 2.0, fSYS = 1.7e8, fPllP = 1.7e8
        // fPllQ = 1.7e8, fVCO = 3.4e8
        constexpr uint8_t pllM = 4 - 1; // 3 bits, valid range [1..15]-1
        constexpr uint8_t pllSRC = 2;   // 2 bits, 2 = HSI16, 3 = HSE
        constexpr uint16_t pllN = 85;   // 7 bits, valid range [8..127]
        constexpr uint8_t pllPDIV = 2;  // 5 bits, valid range [2..31]
        constexpr uint8_t pllR = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8
        constexpr uint8_t pllQ = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8

        RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC::W(pllSRC)
                       | _::PLLSYSCFGR_PLLSYSN::W(pllN)
                       | _::PLLSYSCFGR_PLLSYSM::W(pllM)
                       | _::PLLSYSCFGR_PLLSYSPDIV::W(pllPDIV)
                       | _::PLLSYSCFGR_PLLSYSQ::W(pllQ)
                       | _::PLLSYSCFGR_PLLSYSR::W(pllR)
                       | _::PLLSYSCFGR_PLLSYSQEN
                       | _::PLLSYSCFGR_PLLSYSREN
                       ;
    }
};

template<> struct clock_traits<24000000>
{
    static constexpr uint32_t freq = 170000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        RCC.CR |= _::CR_HSEON;              // enable external clock
        while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

        // pllN = 85.0, pllM = 6.0, pllP = 7.0, pllPDIV = 2.0
        // pllQ = 2.0, pllR = 2.0, fSYS = 1.7e8, fPllP = 1.7e8
        // fPllQ = 1.7e8, fVCO = 3.4e8
        constexpr uint8_t pllM = 6 - 1; // 3 bits, valid range [1..15]-1
        constexpr uint8_t pllSRC = 3;   // 2 bits, 2 = HSI16, 3 = HSE
        constexpr uint16_t pllN = 85;   // 7 bits, valid range [8..127]
        constexpr uint8_t pllPDIV = 2;  // 5 bits, valid range [2..31]
        constexpr uint8_t pllR = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8
        constexpr uint8_t pllQ = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8

        RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC::W(pllSRC)
                       | _::PLLSYSCFGR_PLLSYSN::W(pllN)
                       | _::PLLSYSCFGR_PLLSYSM::W(pllM)
                       | _::PLLSYSCFGR_PLLSYSPDIV::W(pllPDIV)
                       | _::PLLSYSCFGR_PLLSYSQ::W(pllQ)
                       | _::PLLSYSCFGR_PLLSYSR::W(pllR)
                       | _::PLLSYSCFGR_PLLSYSQEN
                       | _::PLLSYSCFGR_PLLSYSREN
                       ;
    }
};

template<> struct clock_traits<8000000>
{
    static constexpr uint32_t freq = 170000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        RCC.CR |= _::CR_HSEON;              // enable external clock
        while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

        // pllN = 85.0, pllM = 2.0, pllP = 7.0, pllPDIV = 2.0
        // pllQ = 2.0, pllR = 2.0, fSYS = 1.7e8, fPllP = 1.7e8
        // fPllQ = 1.7e8, fVCO = 3.4e8
        constexpr uint8_t pllM = 2 - 1; // 3 bits, valid range [1..15]-1
        constexpr uint8_t pllSRC = 3;   // 2 bits, 2 = HSI16, 3 = HSE
        constexpr uint16_t pllN = 85;   // 7 bits, valid range [8..127]
        constexpr uint8_t pllPDIV = 2;  // 5 bits, valid range [2..31]
        constexpr uint8_t pllR = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8
        constexpr uint8_t pllQ = 0;     // 2 bits, 0=2, 1=4, 2=6, 3=8

        RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC::W(pllSRC)
                       | _::PLLSYSCFGR_PLLSYSN::W(pllN)
                       | _::PLLSYSCFGR_PLLSYSM::W(pllM)
                       | _::PLLSYSCFGR_PLLSYSPDIV::W(pllPDIV)
                       | _::PLLSYSCFGR_PLLSYSQ::W(pllQ)
                       | _::PLLSYSCFGR_PLLSYSR::W(pllR)
                       | _::PLLSYSCFGR_PLLSYSQEN
                       | _::PLLSYSCFGR_PLLSYSREN
                       ;
    }
};

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
    FLASH.ACR |= __::ACR_PRFTEN | __::ACR_LATENCY::W(wait_states);

    while ( __::ACR_LATENCY::R(FLASH.ACR) != wait_states);

    clock_traits<HSE>::setup_pll();

    RCC.CR |= _::CR_PLLSYSON;                   // enable PLL
    while (!(RCC.CR & _::CR_PLLSYSRDY));        // wait for PLL ready
    RCC.CFGR |= _::CFGR_SW::W(0x3);             // set PLL as sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x3);    // wait for PLL sys clock

    fpu_cpacr_t::V.CPACR |= fpu_cpacr_t::T::CPACR_CP::W(0xf); // enable fpu
    __asm volatile ("dsb");         // data pipe-line reset
    __asm volatile ("isb");         // instruction pipe-line reset
    return clock_traits<HSE>::freq;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    return f;
}

