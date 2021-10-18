#pragma once

////
//
//      STM32U5 LPGPIO peripherals
//
///

// LPGPIO1: LPGPIO1

struct stm32u5xx_lpgpio1_t
{
    volatile uint32_t LPGPIO_MODER; // LPGPIO port mode register
    reserved_t<0x3> _0x4;
    volatile uint32_t LPGPIO_IDR; // LPGPIO port input data register
    volatile uint32_t LPGPIO_ODR; // LPGPIO port output data register
    volatile uint32_t LPGPIO_BSRR; // LPGPIO port bit set/reset register
    reserved_t<0x3> _0x1c;
    volatile uint32_t LPGPIO_BRR; // LPGPIO port bit reset register

    static constexpr uint32_t LPGPIO_MODER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPGPIO_MODER_MODE15 = 0x8000; // MODE15
    static constexpr uint32_t LPGPIO_MODER_MODE14 = 0x4000; // MODE14
    static constexpr uint32_t LPGPIO_MODER_MODE13 = 0x2000; // MODE13
    static constexpr uint32_t LPGPIO_MODER_MODE12 = 0x1000; // MODE12
    static constexpr uint32_t LPGPIO_MODER_MODE11 = 0x800; // MODE11
    static constexpr uint32_t LPGPIO_MODER_MODE10 = 0x400; // MODE10
    static constexpr uint32_t LPGPIO_MODER_MODE9 = 0x200; // MODE9
    static constexpr uint32_t LPGPIO_MODER_MODE8 = 0x100; // MODE8
    static constexpr uint32_t LPGPIO_MODER_MODE7 = 0x80; // MODE7
    static constexpr uint32_t LPGPIO_MODER_MODE6 = 0x40; // MODE6
    static constexpr uint32_t LPGPIO_MODER_MODE5 = 0x20; // MODE5
    static constexpr uint32_t LPGPIO_MODER_MODE4 = 0x10; // MODE4
    static constexpr uint32_t LPGPIO_MODER_MODE3 = 0x8; // MODE3
    static constexpr uint32_t LPGPIO_MODER_MODE2 = 0x4; // MODE2
    static constexpr uint32_t LPGPIO_MODER_MODE1 = 0x2; // MODE1
    static constexpr uint32_t LPGPIO_MODER_MODE0 = 0x1; // MODE0


    static constexpr uint32_t LPGPIO_IDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPGPIO_IDR_IDY; // IDy

    static constexpr uint32_t LPGPIO_ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPGPIO_ODR_ODY15 = 0x8000; // ODy15
    static constexpr uint32_t LPGPIO_ODR_ODY14 = 0x4000; // ODy14
    static constexpr uint32_t LPGPIO_ODR_ODY13 = 0x2000; // ODy13
    static constexpr uint32_t LPGPIO_ODR_ODY12 = 0x1000; // ODy12
    static constexpr uint32_t LPGPIO_ODR_ODY11 = 0x800; // ODy11
    static constexpr uint32_t LPGPIO_ODR_ODY10 = 0x400; // ODy10
    static constexpr uint32_t LPGPIO_ODR_ODY9 = 0x200; // ODy9
    static constexpr uint32_t LPGPIO_ODR_ODY8 = 0x100; // ODy8
    static constexpr uint32_t LPGPIO_ODR_ODY7 = 0x80; // ODy7
    static constexpr uint32_t LPGPIO_ODR_ODY6 = 0x40; // ODy6
    static constexpr uint32_t LPGPIO_ODR_ODY5 = 0x20; // ODy5
    static constexpr uint32_t LPGPIO_ODR_ODY4 = 0x10; // ODy4
    static constexpr uint32_t LPGPIO_ODR_ODY3 = 0x8; // ODy3
    static constexpr uint32_t LPGPIO_ODR_ODY2 = 0x4; // ODy2
    static constexpr uint32_t LPGPIO_ODR_ODY1 = 0x2; // ODy1
    static constexpr uint32_t LPGPIO_ODR_ODY0 = 0x1; // ODy0

    static constexpr uint32_t LPGPIO_BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPGPIO_BSRR_BRY31 = 0x80000000; // BRy31
    static constexpr uint32_t LPGPIO_BSRR_BRY30 = 0x40000000; // BRy30
    static constexpr uint32_t LPGPIO_BSRR_BRY29 = 0x20000000; // BRy29
    static constexpr uint32_t LPGPIO_BSRR_BRY28 = 0x10000000; // BRy28
    static constexpr uint32_t LPGPIO_BSRR_BRY27 = 0x8000000; // BRy27
    static constexpr uint32_t LPGPIO_BSRR_BRY26 = 0x4000000; // BRy26
    static constexpr uint32_t LPGPIO_BSRR_BRY25 = 0x2000000; // BRy25
    static constexpr uint32_t LPGPIO_BSRR_BRY24 = 0x1000000; // BRy24
    static constexpr uint32_t LPGPIO_BSRR_BRY23 = 0x800000; // BRy23
    static constexpr uint32_t LPGPIO_BSRR_BRY22 = 0x400000; // BRy22
    static constexpr uint32_t LPGPIO_BSRR_BRY21 = 0x200000; // BRy21
    static constexpr uint32_t LPGPIO_BSRR_BRY20 = 0x100000; // BRy20
    static constexpr uint32_t LPGPIO_BSRR_BRY19 = 0x80000; // BRy19
    static constexpr uint32_t LPGPIO_BSRR_BRY18 = 0x40000; // BRy18
    static constexpr uint32_t LPGPIO_BSRR_BRY17 = 0x20000; // BRy17
    static constexpr uint32_t LPGPIO_BSRR_BRY16 = 0x10000; // BRy16
    static constexpr uint32_t LPGPIO_BSRR_BSY15 = 0x8000; // BSy15
    static constexpr uint32_t LPGPIO_BSRR_BSY14 = 0x4000; // BSy14
    static constexpr uint32_t LPGPIO_BSRR_BSY13 = 0x2000; // BSy13
    static constexpr uint32_t LPGPIO_BSRR_BSY12 = 0x1000; // BSy12
    static constexpr uint32_t LPGPIO_BSRR_BSY11 = 0x800; // BSy11
    static constexpr uint32_t LPGPIO_BSRR_BSY10 = 0x400; // BSy10
    static constexpr uint32_t LPGPIO_BSRR_BSY9 = 0x200; // BSy9
    static constexpr uint32_t LPGPIO_BSRR_BSY8 = 0x100; // BSy8
    static constexpr uint32_t LPGPIO_BSRR_BSY7 = 0x80; // BSy7
    static constexpr uint32_t LPGPIO_BSRR_BSY6 = 0x40; // BSy6
    static constexpr uint32_t LPGPIO_BSRR_BSY5 = 0x20; // BSy5
    static constexpr uint32_t LPGPIO_BSRR_BSY4 = 0x10; // BSy4
    static constexpr uint32_t LPGPIO_BSRR_BSY3 = 0x8; // BSy3
    static constexpr uint32_t LPGPIO_BSRR_BSY2 = 0x4; // BSy2
    static constexpr uint32_t LPGPIO_BSRR_BSY1 = 0x2; // BSy1
    static constexpr uint32_t LPGPIO_BSRR_BSY0 = 0x1; // BSy0


    static constexpr uint32_t LPGPIO_BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPGPIO_BRR_BRY15 = 0x8000; // BRy15
    static constexpr uint32_t LPGPIO_BRR_BRY14 = 0x4000; // BRy14
    static constexpr uint32_t LPGPIO_BRR_BRY13 = 0x2000; // BRy13
    static constexpr uint32_t LPGPIO_BRR_BRY12 = 0x1000; // BRy12
    static constexpr uint32_t LPGPIO_BRR_BRY11 = 0x800; // BRy11
    static constexpr uint32_t LPGPIO_BRR_BRY10 = 0x400; // BRy10
    static constexpr uint32_t LPGPIO_BRR_BRY9 = 0x200; // BRy9
    static constexpr uint32_t LPGPIO_BRR_BRY8 = 0x100; // BRy8
    static constexpr uint32_t LPGPIO_BRR_BRY7 = 0x80; // BRy7
    static constexpr uint32_t LPGPIO_BRR_BRY6 = 0x40; // BRy6
    static constexpr uint32_t LPGPIO_BRR_BRY5 = 0x20; // BRy5
    static constexpr uint32_t LPGPIO_BRR_BRY4 = 0x10; // BRy4
    static constexpr uint32_t LPGPIO_BRR_BRY3 = 0x8; // BRy3
    static constexpr uint32_t LPGPIO_BRR_BRY2 = 0x4; // BRy2
    static constexpr uint32_t LPGPIO_BRR_BRY1 = 0x2; // BRy1
    static constexpr uint32_t LPGPIO_BRR_BRY0 = 0x1; // BRy0
};

template<>
struct peripheral_t<STM32U5xx, LPGPIO1>
{
    static constexpr periph_t P = LPGPIO1;
    using T = stm32u5xx_lpgpio1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPGPIO1>
{
    static constexpr periph_t P = SEC_LPGPIO1;
    using T = stm32u5xx_lpgpio1_t;
    static T& V;
};

using lpgpio1_t = peripheral_t<svd, LPGPIO1>;
using sec_lpgpio1_t = peripheral_t<svd, SEC_LPGPIO1>;
