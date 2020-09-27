#pragma once

////
//
//      STM32L0 GPIO peripherals
//
///

// GPIOA: General-purpose I/Os

struct stm32l0x0_gpioa_t
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

    static constexpr uint32_t MODER_RESET_VALUE = 0xebfffcff; // Reset value
    typedef bit_field_t<0, 0x3> MODER_MODE0; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODE1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODE2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODE3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODE4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODE5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODE6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODE7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODE8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODE9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODE10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODE11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODE12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODE13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODE14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<30, 0x3> MODER_MODE15; // Port x configuration bits (y = 0..15)

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
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEED15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEED14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEED13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEED12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEED11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEED10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEED9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEED8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEED7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEED6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEED5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEED4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEED3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEED2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEED1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEED0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x24000000; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPD15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPD14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPD13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPD12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPD11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPD10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPD9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPD8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPD7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPD6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPD5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPD4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPD3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPD2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPD1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPD0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_ID15 = 0x8000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID14 = 0x4000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID13 = 0x2000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID12 = 0x1000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID11 = 0x800; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID10 = 0x400; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID9 = 0x200; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID8 = 0x100; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID7 = 0x80; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID6 = 0x40; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID5 = 0x20; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID4 = 0x10; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID3 = 0x8; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID2 = 0x4; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID1 = 0x2; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID0 = 0x1; // Port input data bit (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_OD15 = 0x8000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD14 = 0x4000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD13 = 0x2000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD12 = 0x1000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD11 = 0x800; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD10 = 0x400; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD9 = 0x200; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD8 = 0x100; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD7 = 0x80; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD6 = 0x40; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD5 = 0x20; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD4 = 0x10; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD3 = 0x8; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD2 = 0x4; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD1 = 0x2; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD0 = 0x1; // Port output data bit (y = 0..15)

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
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x reset bit y (y = 0..15)
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
    typedef bit_field_t<28, 0xf> AFRL_AFSEL7; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFSEL6; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFSEL5; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFSEL4; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFSEL3; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFSEL2; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFSEL1; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFSEL0; // Alternate function selection for port x pin y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFSEL15; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFSEL14; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFSEL13; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFSEL12; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFSEL11; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFSEL10; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFSEL9; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFSEL8; // Alternate function selection for port x pin y (y = 8..15)

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR11 = 0x800; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR10 = 0x400; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR9 = 0x200; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR8 = 0x100; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR7 = 0x80; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR6 = 0x40; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR5 = 0x20; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR4 = 0x10; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR3 = 0x8; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR2 = 0x4; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR1 = 0x2; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR0 = 0x1; // Port x Reset bit y (y= 0 .. 15)
};

// GPIOB: General-purpose I/Os

struct stm32l0x0_gpiob_t
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

    static constexpr uint32_t MODER_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<30, 0x3> MODER_MODE15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> MODER_MODE14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> MODER_MODE13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> MODER_MODE12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> MODER_MODE11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> MODER_MODE10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> MODER_MODE9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> MODER_MODE8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> MODER_MODE7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> MODER_MODE6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> MODER_MODE5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> MODER_MODE4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> MODER_MODE3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> MODER_MODE2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> MODER_MODE1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> MODER_MODE0; // Port x configuration bits (y = 0..15)

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
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEED15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEED14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEED13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEED12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEED11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEED10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEED9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEED8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEED7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEED6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEED5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEED4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEED3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEED2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEED1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEED0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> PUPDR_PUPD15; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<28, 0x3> PUPDR_PUPD14; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<26, 0x3> PUPDR_PUPD13; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<24, 0x3> PUPDR_PUPD12; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<22, 0x3> PUPDR_PUPD11; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<20, 0x3> PUPDR_PUPD10; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<18, 0x3> PUPDR_PUPD9; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<16, 0x3> PUPDR_PUPD8; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<14, 0x3> PUPDR_PUPD7; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<12, 0x3> PUPDR_PUPD6; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<10, 0x3> PUPDR_PUPD5; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<8, 0x3> PUPDR_PUPD4; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<6, 0x3> PUPDR_PUPD3; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<4, 0x3> PUPDR_PUPD2; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<2, 0x3> PUPDR_PUPD1; // Port x configuration bits (y = 0..15)
    typedef bit_field_t<0, 0x3> PUPDR_PUPD0; // Port x configuration bits (y = 0..15)

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_ID15 = 0x8000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID14 = 0x4000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID13 = 0x2000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID12 = 0x1000; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID11 = 0x800; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID10 = 0x400; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID9 = 0x200; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID8 = 0x100; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID7 = 0x80; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID6 = 0x40; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID5 = 0x20; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID4 = 0x10; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID3 = 0x8; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID2 = 0x4; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID1 = 0x2; // Port input data bit (y = 0..15)
    static constexpr uint32_t IDR_ID0 = 0x1; // Port input data bit (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_OD15 = 0x8000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD14 = 0x4000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD13 = 0x2000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD12 = 0x1000; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD11 = 0x800; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD10 = 0x400; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD9 = 0x200; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD8 = 0x100; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD7 = 0x80; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD6 = 0x40; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD5 = 0x20; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD4 = 0x10; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD3 = 0x8; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD2 = 0x4; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD1 = 0x2; // Port output data bit (y = 0..15)
    static constexpr uint32_t ODR_OD0 = 0x1; // Port output data bit (y = 0..15)

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
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x reset bit y (y = 0..15)
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
    typedef bit_field_t<28, 0xf> AFRL_AFSEL7; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<24, 0xf> AFRL_AFSEL6; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<20, 0xf> AFRL_AFSEL5; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<16, 0xf> AFRL_AFSEL4; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<12, 0xf> AFRL_AFSEL3; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<8, 0xf> AFRL_AFSEL2; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<4, 0xf> AFRL_AFSEL1; // Alternate function selection for port x pin y (y = 0..7)
    typedef bit_field_t<0, 0xf> AFRL_AFSEL0; // Alternate function selection for port x pin y (y = 0..7)

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> AFRH_AFSEL15; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<24, 0xf> AFRH_AFSEL14; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<20, 0xf> AFRH_AFSEL13; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<16, 0xf> AFRH_AFSEL12; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<12, 0xf> AFRH_AFSEL11; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<8, 0xf> AFRH_AFSEL10; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<4, 0xf> AFRH_AFSEL9; // Alternate function selection for port x pin y (y = 8..15)
    typedef bit_field_t<0, 0xf> AFRH_AFSEL8; // Alternate function selection for port x pin y (y = 8..15)

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR11 = 0x800; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR10 = 0x400; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR9 = 0x200; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR8 = 0x100; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR7 = 0x80; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR6 = 0x40; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR5 = 0x20; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR4 = 0x10; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR3 = 0x8; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR2 = 0x4; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR1 = 0x2; // Port x Reset bit y (y= 0 .. 15)
    static constexpr uint32_t BRR_BR0 = 0x1; // Port x Reset bit y (y= 0 .. 15)
};

template<>
struct peripheral_t<STM32L0x0, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32l0x0_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32l0x0_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32l0x0_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32l0x0_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32l0x0_gpiob_t;
    static T& V;
};

using gpioa_t = peripheral_t<svd, GPIOA>;
using gpiob_t = peripheral_t<svd, GPIOB>;
using gpioc_t = peripheral_t<svd, GPIOC>;
using gpiod_t = peripheral_t<svd, GPIOD>;
using gpioe_t = peripheral_t<svd, GPIOE>;
using gpioh_t = peripheral_t<svd, GPIOH>;

template<int INST> struct gpio_traits {};

template<> struct gpio_traits<0>
{
    using gpio = gpioa_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPAEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPASMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPASMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPARST;
    }
};

template<> struct gpio_traits<1>
{
    using gpio = gpiob_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPBEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPBEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPBSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPBSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPBRST;
    }
};

template<> struct gpio_traits<2>
{
    using gpio = gpioc_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPCEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPCSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPCSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPCRST;
    }
};

template<> struct gpio_traits<3>
{
    using gpio = gpiod_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPDEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPDEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPDSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPDSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPDRST;
    }
};

template<> struct gpio_traits<4>
{
    using gpio = gpioe_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPEEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPEEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPESMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPESMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPERST;
    }
};

template<> struct gpio_traits<7>
{
    using gpio = gpioh_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.IOPENR |= RCC::T::IOPENR_IOPHEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.IOPENR &= ~RCC::T::IOPENR_IOPHEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.IOPSMEN |= RCC::T::IOPSMEN_IOPHSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.IOPSMEN &= ~RCC::T::IOPSMEN_IOPHSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.IOPRSTR |= RCC::T::IOPRSTR_IOPHRST;
    }
};
