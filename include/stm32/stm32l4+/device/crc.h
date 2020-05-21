#pragma once

////
//
//      STM32L4+ CRC peripherals
//
////

////
//
//      Cyclic redundancy check calculation unit
//
////

struct stm32l4p5_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent data register
    volatile uint32_t CR;   // Control register
    reserved_t<0x1> _0x10;
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // General-purpose 8-bit data register bits
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data
    template<uint32_t X>
    static constexpr uint32_t CR_REV_IN =        // Reverse input data
        bit_field_t<5, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_POLYSIZE =      // Polynomial size
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CR_RESET = 0x1;    // RESET bit

    static constexpr uint32_t INIT_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t POL_RESET_VALUE = 0x4c11db7;
};


template<>
struct peripheral_t<STM32L4P5, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, CRC>
{
    typedef stm32l4p5_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

