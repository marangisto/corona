#pragma once

////
//
//      STM32F1 CRC peripherals
//
///

// CRC: CRC calculation unit

struct stm32f100_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent Data register
    volatile uint32_t CR; // Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data Register

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IDR_IDR; // Independent Data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x1; // Reset bit
};

template<>
struct peripheral_t<STM32F100, CRC>
{
    using T = stm32f100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, CRC>
{
    using T = stm32f100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, CRC>
{
    using T = stm32f100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, CRC>
{
    using T = stm32f100_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, CRC>
{
    using T = stm32f100_crc_t;
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
        RCC::V.AHBENR |= RCC::T::AHBENR_CRCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_CRCEN;
    }
};
