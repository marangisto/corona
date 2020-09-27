#pragma once

////
//
//      STM32F7 GPIO peripherals
//
///

// GPIOA: General-purpose I/Os

struct stm32f722_gpioa_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function low register
    volatile uint32_t AFRH; // GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0xa8000000; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x64000000; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)
};

// GPIOA: General-purpose I/Os

struct stm32f745_gpioa_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function low register
    volatile uint32_t AFRH; // GPIO alternate function high register
    volatile uint32_t BRR; // GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0xa8000000; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x64000000; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR0 = 0x1; // Port A Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2; // Port A Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4; // Port A Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8; // Port A Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10; // Port A Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20; // Port A Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40; // Port A Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80; // Port A Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100; // Port A Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200; // Port A Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400; // Port A Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800; // Port A Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port A Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port A Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port A Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port A Reset bit 15
};

// GPIOB: General-purpose I/Os

struct stm32f722_gpiob_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function low register
    volatile uint32_t AFRH; // GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0x280; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0xc0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x100; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)
};

// GPIOB: General-purpose I/Os

struct stm32f745_gpiob_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function low register
    volatile uint32_t AFRH; // GPIO alternate function high register
    volatile uint32_t BRR; // GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0x280; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0xc0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x100; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR0 = 0x1; // Port B Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2; // Port B Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4; // Port B Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8; // Port B Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10; // Port B Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20; // Port B Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40; // Port B Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80; // Port B Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100; // Port B Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200; // Port B Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400; // Port B Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800; // Port B Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port B Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port B Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port B Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port B Reset bit 15
};

// GPIOD: General-purpose I/Os

struct stm32f745_gpiod_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function lowregister
    volatile uint32_t AFRH; // GPIO alternate function high register
    volatile uint32_t BRR; // GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR0 = 0x1; // Port D Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2; // Port D Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4; // Port D Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8; // Port D Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10; // Port D Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20; // Port D Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40; // Port D Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80; // Port D Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100; // Port D Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200; // Port D Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400; // Port D Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800; // Port D Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port D Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port D Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port D Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port D Reset bit 15
};

// GPIOH: General-purpose I/Os

struct stm32f722_gpioh_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // GPIO port configuration lock register
    volatile uint32_t AFRL; // GPIO alternate function lowregister
    volatile uint32_t AFRH; // GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODER15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODER14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODER13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODER12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODER11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODER10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODER9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODER8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODER7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODER6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODER5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODER4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODER3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODER2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODER1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODER0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEEDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEEDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEEDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEEDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEEDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEEDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEEDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEEDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEEDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEEDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEEDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEEDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEEDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEEDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEEDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEEDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPDR15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPDR14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPDR13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPDR12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPDR11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPDR10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPDR9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPDR8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPDR7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPDR6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPDR5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPDR4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPDR3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPDR2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPDR1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPDR0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1; // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1; // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRL_AFRL7; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFRL6; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFRL5; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFRL4; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFRL3; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFRL2; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFRL1; // Alternate function selection for port x bit y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFRL0; // Alternate function selection for port x bit y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFRH15; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFRH14; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFRH13; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFRH12; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFRH11; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFRH10; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFRH9; // Alternate function selection for port x bit y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFRH8; // Alternate function selection for port x bit y (y = 8..15)
};

template<>
struct peripheral_t<STM32F722, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f722_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f722_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f722_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f722_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f722_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32f745_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f722_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f722_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f722_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f722_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f722_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32f745_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32f745_gpiod_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32f722_gpioh_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32f722_gpioh_t;
    static T& V;
};

using gpioa_t = peripheral_t<svd, GPIOA>;
using gpiob_t = peripheral_t<svd, GPIOB>;
using gpioc_t = peripheral_t<svd, GPIOC>;
using gpiod_t = peripheral_t<svd, GPIOD>;
using gpioe_t = peripheral_t<svd, GPIOE>;
using gpiof_t = peripheral_t<svd, GPIOF>;
using gpiog_t = peripheral_t<svd, GPIOG>;
using gpioh_t = peripheral_t<svd, GPIOH>;
using gpioi_t = peripheral_t<svd, GPIOI>;
using gpioj_t = peripheral_t<svd, GPIOJ>;
using gpiok_t = peripheral_t<svd, GPIOK>;

template<int INST> struct gpio_traits {};

template<> struct gpio_traits<0>
{
    using gpio = gpioa_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOAEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOARST;
    }
};

template<> struct gpio_traits<1>
{
    using gpio = gpiob_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOBEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOBEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOBRST;
    }
};

template<> struct gpio_traits<2>
{
    using gpio = gpioc_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOCRST;
    }
};

template<> struct gpio_traits<3>
{
    using gpio = gpiod_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIODEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIODEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIODRST;
    }
};

template<> struct gpio_traits<4>
{
    using gpio = gpioe_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOEEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOEEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOERST;
    }
};

template<> struct gpio_traits<5>
{
    using gpio = gpiof_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOFEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOFEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOFRST;
    }
};

template<> struct gpio_traits<6>
{
    using gpio = gpiog_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOGEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOGRST;
    }
};

template<> struct gpio_traits<7>
{
    using gpio = gpioh_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOHEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOHEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOHRST;
    }
};

template<> struct gpio_traits<8>
{
    using gpio = gpioi_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOIEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOIEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOIRST;
    }
};

template<> struct gpio_traits<9>
{
    using gpio = gpioj_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOJEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOJEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOJRST;
    }
};

template<> struct gpio_traits<10>
{
    using gpio = gpiok_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_GPIOKEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_GPIOKEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_GPIOKRST;
    }
};
