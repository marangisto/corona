#pragma once

////
//
//      STM32F0 CRC peripherals
//
///

// CRC: cyclic redundancy check calculation unit

struct stm32f0x0_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent data register
    volatile uint32_t CR; // Control register
    volatile uint32_t INIT; // Initial CRC value

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data register bits

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IDR_IDR; // General-purpose 8-bit data register bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x1; // reset bit
    typedef bit_field_t<3, 0x3> CR_POLYSIZE; // Polynomial size
    typedef bit_field_t<5, 0x3> CR_REV_IN; // Reverse input data
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data

    static constexpr uint32_t INIT_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> INIT_INIT; // Programmable initial CRC value
};

template<>
struct peripheral_t<STM32F0x0, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f0x0_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f0x0_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f0x0_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f0x0_crc_t;
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
};
