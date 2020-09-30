#pragma once

////
//
//      STM32G0 CRC peripherals
//
///

// CRC: Cyclic redundancy check calculation unit

struct stm32g030_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent data register
    volatile uint32_t CR; // Control register
    reserved_t<0x1> _0xc;
    volatile uint32_t INIT; // Initial CRC value
    volatile uint32_t POL; // polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data register bits

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IDR_IDR; // General-purpose 32-bit data register bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data
    typedef bit_field_t<5, 0x3> CR_REV_IN; // Reverse input data
    typedef bit_field_t<3, 0x3> CR_POLYSIZE; // Polynomial size
    static constexpr uint32_t CR_RESET = 0x1; // RESET bit


    static constexpr uint32_t INIT_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> INIT_CRC_INIT; // Programmable initial CRC value

    static constexpr uint32_t POL_RESET_VALUE = 0x4c11db7; // Reset value
    typedef bit_field_t<0, 0xffffffff> POL_POL; // Programmable polynomial
};

template<>
struct peripheral_t<STM32G030, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32g030_crc_t;
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
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_CRCSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_CRCSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_CRCRST;
    }
};
