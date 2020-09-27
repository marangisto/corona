#pragma once

////
//
//      STM32F2 CRC peripherals
//
///

// CRC: cyclic redundancy check calculation unit

struct stm32f215_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent data register
    volatile uint32_t CR; // Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data register bits

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IDR_IDR; // General-purpose 8-bit data register bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x1; // reset bit
};

template<>
struct peripheral_t<STM32F215, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f215_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f215_crc_t;
    static T& V;
};

using crc_t = peripheral_t<svd, CRC>;

template<int INST> struct crc_traits {};

template<> struct crc_traits<0>
{
    using crc = crc_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_CRCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_CRCRST;
    }
};
