#pragma once

////
//
//      STM32F0 CRC peripherals
//
////

////
//
//      cyclic redundancy check calculation unit
//
////

struct stm32f0x0_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent data register
    volatile uint32_t CR;   // [read-write] Control register
    volatile uint32_t INIT; // [read-write] Initial CRC value

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // General-purpose 8-bit data register bits
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x1;    // reset bit
    template<uint32_t X>
    static constexpr uint32_t CR_POLYSIZE =      // Polynomial size
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_REV_IN =        // Reverse input data
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data

    static constexpr uint32_t INIT_RESET_VALUE = 0xffffffff;
};


template<>
struct peripheral_t<STM32F0x0, CRC>
{
    typedef stm32f0x0_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, CRC>
{
    typedef stm32f0x0_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, CRC>
{
    typedef stm32f0x0_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, CRC>
{
    typedef stm32f0x0_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

