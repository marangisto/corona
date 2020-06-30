#pragma once

template<uint32_t x, uint32_t b, uint8_t nbits>
static constexpr uint32_t encode()
{
    static_assert(x < (1 << nbits), "bit field overflow");
    return ((x & (1 << 0)) ? (b << 0) : 0)
         | ((x & (1 << 1)) ? (b << 1) : 0)
         | ((x & (1 << 2)) ? (b << 2) : 0)
         | ((x & (1 << 3)) ? (b << 3) : 0)
         | ((x & (1 << 4)) ? (b << 4) : 0)
         | ((x & (1 << 5)) ? (b << 5) : 0)
         | ((x & (1 << 6)) ? (b << 6) : 0)
         | ((x & (1 << 7)) ? (b << 7) : 0)
         | ((x & (1 << 8)) ? (b << 8) : 0)
         ;
}

static inline uint32_t clock_tree_init()
{
    typedef rcc_t::T _;
    typedef flash_t::T __;
    rcc_t::T& RCC = rcc_t::V;
    flash_t::T& FLASH = flash_t::V;

    // reset clock control registers

    RCC.CIR = _::CIR_RESET_VALUE;

    // set system clock to HSI-PLL 100MHz

    constexpr uint8_t wait_states = 0x3;    // 100MHz at 2.7-3.3V

    FLASH.ACR = __::ACR_PRFTEN | __::ACR_LATENCY::W(wait_states);
    while (__::ACR_LATENCY::R(FLASH.ACR) != wait_states); // take effect

    enum pllP_t { pllP_2 = 0x0
                , pllP_4 = 0x1
                , pllP_6 = 0x2
                , pllP_8 = 0x3
                };

    // fVCO = hs[ei] * pllN / pllM      // must be 100MHz - 400MHz
    // fSYS = fVCO / pllP               // <= 100MHz
    // fUSB = fVCO / pllQ               // <= 48MHz

    // pllN = 200, pllM = 8, pllP = 4, pllQ = 9
    // fSYS = 1.0e8, fUSB = 4.4445e7

    constexpr uint16_t pllN = 200;      // 9 bits, valid range [50..432]
    constexpr uint8_t pllM = 8;         // 6 bits, valid range [2..63]
    constexpr pllP_t pllP = pllP_4;     // 2 bits, enum range [2, 4, 6, 8]
    constexpr uint8_t pllQ = 9;         // 4 bits, valid range [2..15]
    constexpr uint8_t pllSRC = 0;       // 1 bit, 0 = HSI, 1 = HSE

    RCC.PLLCFGR = encode<pllSRC, _::PLLCFGR_PLLSRC, 1>()
                | encode<pllN, _::PLLCFGR_PLLN0, 9>()
                | encode<pllM, _::PLLCFGR_PLLM0, 6>()
                | encode<pllP, _::PLLCFGR_PLLP0, 2>()
                | encode<pllQ, _::PLLCFGR_PLLQ0, 4>()
                ;

    RCC.CR |= _::CR_PLLON;              // enable PLL
    while (!(RCC.CR & _::CR_PLLRDY));   // wait for PLL to be ready
    RCC.CFGR |= encode<0x2, _::CFGR_SW0, 2>(); // select PLL as sys clock

    // wait for PLL as system clock

    while ((RCC.CFGR & encode<0x3, _::CFGR_SWS0, 2>()) != encode<0x2, _::CFGR_SWS0, 2>());
    return 100000000;
}

