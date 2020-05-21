#pragma once

////
//
//      STM32F1 CRC peripherals
//
////

////
//
//      CRC calculation unit
//
////

struct stm32f100_crc_t
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
    static constexpr uint32_t CR_RESET = 0x1; // Reset bit
};


template<>
struct peripheral_t<STM32F100, CRC>
{
    typedef stm32f100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, CRC>
{
    typedef stm32f100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, CRC>
{
    typedef stm32f100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, CRC>
{
    typedef stm32f100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, CRC>
{
    typedef stm32f100_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

