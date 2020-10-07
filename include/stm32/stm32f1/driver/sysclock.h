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

        RCC.CFGR |= _::CFGR_PLLMUL::W(0xe)  // pll multiplier = 16
                 |  _::CFGR_PPRE1::W(0x4)   // APB low-speed prescale = 2
                 ;
    }
};

template<> struct clock_traits<8000000>
{
    static constexpr uint32_t freq = 72000000;

    static void setup_pll()
    {
        typedef rcc_t::T _;
        rcc_t::T& RCC = rcc_t::V;

        RCC.CR |= _::CR_HSEON;              // enable external clock
        while (!(RCC.CR & _::CR_HSERDY));   // wait for HSE ready

        RCC.CFGR |= _::CFGR_PLLSRC          // HSE from PREDIV1
                 |  _::CFGR_PLLMUL::W(0x7)  // pll multiplier = 9
                 |  _::CFGR_PPRE1::W(0x4)   // APB low-speed prescale = 2
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

    RCC.CFGR = _::CFGR_RESET_VALUE;
    RCC.CR = _::CR_RESET_VALUE;

    // set system clock to HSE-PLL 72MHz

    constexpr uint8_t wait_states = 2;  // 2 wait-states

    FLASH.ACR = __::ACR_PRFTBE | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    clock_traits<HSE>::setup_pll();

    RCC.CR |= _::CR_PLLON;              // enable pll
    while (!(RCC.CR & _::CR_PLLRDY));   // wait for pll ready

    RCC.CFGR |= _::CFGR_SW::W(0x2);             // select PLL sys clock
    while (_::CFGR_SWS::R(RCC.CFGR) != 0x2);    // wait for PLL sys clock

    return clock_traits<HSE>::freq;
}

static uint32_t clock_tree_scale(clock_source_t cs, uint32_t f)
{
    switch (cs)
    {
        case APB1_PERIPH:   return f >> 1;
        default:            return f;
    }
}

