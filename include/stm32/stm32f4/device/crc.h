#pragma once

////
//
//      STM32F4 CRC peripherals
//
////

////
//
//      Cryptographic processor
//
////

struct stm32f401_crc_t
{
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t IDR; // [read-write] Independent Data register
    volatile uint32_t CR;  // [write-only] Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // Independent Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_CR = 0x1; // Control regidter
};


template<>
struct peripheral_t<STM32F401, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, CRC>
{
    typedef stm32f401_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

