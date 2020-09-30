#pragma once

////
//
//      STM32L1 CRC peripherals
//
///

// CRC: CRC calculation unit

struct stm32l100_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent data register
    volatile uint32_t CR; // Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DATA_REGISTER; // Data Register

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> IDR_INDEPENDENT_DATA_REGISTER; // Independent data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x1; // RESET
};

template<>
struct peripheral_t<STM32L100, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32l100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32l100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32l100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32l100_crc_t;
    static T& V;
};

using crc_t = peripheral_t<svd, CRC>;

template<int INST> struct crc_traits {};

template<> struct crc_traits<0>
{
    using crc = crc_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_CRCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_CRCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST;
    }
};
