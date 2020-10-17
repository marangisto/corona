#pragma once

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
    static constexpr uint32_t freq = 64000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        // pllN = 8.0, pllM = 1.0, pllP = 2.0, pllR = 2.0
        // fSYS = 6.4e7, fPllP = 6.4e7, fVCO = 1.28e8

        constexpr uint16_t pllN = 8;    // 7 bits, valid range [8..86]
        constexpr uint8_t pllM = 1 - 1; // 3 bits, valid range [1..8]-1
        constexpr uint8_t pllP = 2 - 1; // 5 bits, valid range [2..32]-1
        constexpr uint8_t pllR = 2 - 1; // 3 bits, valid range [2..8]-1
        constexpr uint8_t pllSRC = 2;   // 2 bits, 2 = HSI16, 3 = HSE

        RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC::W(pllSRC)
                       | _::PLLSYSCFGR_PLLN::W(pllN)
                       | _::PLLSYSCFGR_PLLM::W(pllM)
                       | _::PLLSYSCFGR_PLLP::W(pllP)
                       | _::PLLSYSCFGR_PLLR::W(pllR)
                       | _::PLLSYSCFGR_PLLREN
                       | _::PLLSYSCFGR_PLLPEN
                       ;
    }
};

template<> struct clock_traits<8000000>
{
    static constexpr uint32_t freq = 64000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        RCC.CR |= _::CR_HSEON;              // enable external clock
        while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

        // pllN = 16.0, pllM = 1.0, pllP = 2.0, pllR = 2.0
        // fSYS = 6.4e7, fPllP = 6.4e7, fVCO = 1.28e8

        constexpr uint16_t pllN = 8;    // 7 bits, valid range [8..86]
        constexpr uint8_t pllM = 1 - 1; // 3 bits, valid range [1..8]-1
        constexpr uint8_t pllP = 2 - 1; // 5 bits, valid range [2..32]-1
        constexpr uint8_t pllR = 2 - 1; // 3 bits, valid range [2..8]-1
        constexpr uint8_t pllSRC = 3;   // 2 bits, 2 = HSI16, 3 = HSE

        RCC.PLLSYSCFGR = _::PLLSYSCFGR_PLLSRC::W(pllSRC)
                       | _::PLLSYSCFGR_PLLN::W(pllN)
                       | _::PLLSYSCFGR_PLLM::W(pllM)
                       | _::PLLSYSCFGR_PLLP::W(pllP)
                       | _::PLLSYSCFGR_PLLR::W(pllR)
                       | _::PLLSYSCFGR_PLLREN
                       | _::PLLSYSCFGR_PLLPEN
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

    // set system clock to HSI-PLL 64MHz and p-clock = 64MHz

    constexpr uint8_t wait_states = 0x2;    // 2 wait-states

    FLASH.ACR |= __::ACR_PRFTEN | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    clock_traits<HSE>::setup_pll();

    RCC.CR |= _::CR_PLLON;                      // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));           // wait for PLL ready
    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock
    return 64000000;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    return f;
}

