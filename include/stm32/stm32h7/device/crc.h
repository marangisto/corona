#pragma once

////
//
//      STM32H7 CRC peripherals
//
///

// CRC: Cryptographic processor

struct stm32h742x_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent Data register
    volatile uint32_t CR; // Control register
    volatile uint32_t INIT; // Initial CRC value
    volatile uint32_t POL; // CRC polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data Register

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IDR_IDR; // Independent Data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x1; // RESET bit
    typedef bit_field_t<3, 0x3> CR_POLYSIZE; // Polynomial size
    typedef bit_field_t<5, 0x3> CR_REV_IN; // Reverse input data
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data

    static constexpr uint32_t INIT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> INIT_CRC_INIT; // Programmable initial CRC value

    static constexpr uint32_t POL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> POL_POL; // Programmable polynomial
};

template<>
struct peripheral_t<STM32H742x, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32h742x_crc_t;
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
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_CRCEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_CRCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_CRCRST;
    }
};
