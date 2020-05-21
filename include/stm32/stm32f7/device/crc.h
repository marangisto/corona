#pragma once

////
//
//      STM32F7 CRC peripherals
//
////

////
//
//      Cryptographic processor
//
////

struct stm32f722_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent Data register
    volatile uint32_t CR;   // [write-only] Control register
    reserved_t<0x1> _0x10;
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] CRC polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // Independent Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x1;    // RESET bit
    template<uint32_t X>
    static constexpr uint32_t CR_POLYSIZE =      // Polynomial size
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_REV_IN =        // Reverse input data
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data

    static constexpr uint32_t INIT_RESET_VALUE = 0x0;

    static constexpr uint32_t POL_RESET_VALUE = 0x0;
};


////
//
//      Cryptographic processor
//
////

struct stm32f745_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent Data register
    volatile uint32_t CR;   // [write-only] Control register
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] CRC polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // Independent Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_CR = 0x1; // Control regidter

    static constexpr uint32_t INIT_RESET_VALUE = 0x0;

    static constexpr uint32_t POL_RESET_VALUE = 0x0;
};


////
//
//      Cryptographic processor
//
////

struct stm32f746_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent Data register
    volatile uint32_t CR;   // [write-only] Control register
    reserved_t<0x1> _0x10;
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] CRC polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDR_IDR =   // Independent Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_CR = 0x1; // Control regidter

    static constexpr uint32_t INIT_RESET_VALUE = 0x0;

    static constexpr uint32_t POL_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F722, CRC>
{
    typedef stm32f722_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, CRC>
{
    typedef stm32f722_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, CRC>
{
    typedef stm32f722_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, CRC>
{
    typedef stm32f722_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, CRC>
{
    typedef stm32f722_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, CRC>
{
    typedef stm32f745_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, CRC>
{
    typedef stm32f746_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, CRC>
{
    typedef stm32f746_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

