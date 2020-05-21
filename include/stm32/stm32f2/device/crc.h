#pragma once

////
//
//      STM32F2 CRC peripherals
//
////

////
//
//      cyclic redundancy check calculation unit
//
////

struct stm32f215_crc_t
{
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t IDR; // [read-write] Independent data register
    volatile uint32_t CR;  // [write-only] Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // General-purpose 8-bit data register bits
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x1; // reset bit
};


template<>
struct peripheral_t<STM32F215, CRC>
{
    typedef stm32f215_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, CRC>
{
    typedef stm32f215_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

