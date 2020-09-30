#pragma once

////
//
//      STM32F4 CRC peripherals
//
///

// CRC: Cryptographic processor

struct stm32f401_crc_t
{
    volatile uint32_t DR; // Data register
    volatile uint32_t IDR; // Independent Data register
    volatile uint32_t CR; // Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DR; // Data Register

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IDR_IDR; // Independent Data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_CR = 0x1; // Control regidter
};

template<>
struct peripheral_t<STM32F401, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, CRC>
{
    static constexpr periph_t P = CRC;
    using T = stm32f401_crc_t;
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
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_CRCEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
