#pragma once

////
//
//      STM32L1 CRC peripherals
//
////

////
//
//      CRC calculation unit
//
////

struct stm32l100_crc_t
{
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t IDR; // [read-write] Independent data register
    volatile uint32_t CR;  // [write-only] Control register

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_Independent_data_register =   // Independent data register
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x1; // RESET
};


template<>
struct peripheral_t<STM32L100, CRC>
{
    typedef stm32l100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, CRC>
{
    typedef stm32l100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, CRC>
{
    typedef stm32l100_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, CRC>
{
    typedef stm32l100_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

