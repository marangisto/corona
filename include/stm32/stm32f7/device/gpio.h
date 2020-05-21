#pragma once

////
//
//      STM32F7 GPIO peripherals
//
////

////
//
//      General-purpose I/Os
//
////

struct stm32f722_gpioa_t
{
    volatile uint32_t MODER;   // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;  // [read-write] GPIO port output type register
    volatile uint32_t OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;   // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;     // [read-only] GPIO port input data register
    volatile uint32_t ODR;     // [read-write] GPIO port output data register
    volatile uint32_t BSRR;    // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;    // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;    // [read-write] GPIO alternate function low register
    volatile uint32_t AFRH;    // [read-write] GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0xa8000000;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x64000000;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();
};


////
//
//      General-purpose I/Os
//
////

struct stm32f745_gpioa_t
{
    volatile uint32_t MODER;         // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;        // [read-write] GPIO port output type register
    volatile uint32_t GPIOB_OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;         // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;           // [read-only] GPIO port input data register
    volatile uint32_t ODR;           // [read-write] GPIO port output data register
    volatile uint32_t BSRR;          // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;          // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;          // [read-write] GPIO alternate function low register
    volatile uint32_t AFRH;          // [read-write] GPIO alternate function high register
    volatile uint32_t BRR;           // [read-write] GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0xa8000000;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t GPIOB_OSPEEDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x64000000;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BRR_BR0 = 0x1;     // Port A Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2;     // Port A Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4;     // Port A Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8;     // Port A Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10;    // Port A Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20;    // Port A Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40;    // Port A Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80;    // Port A Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100;   // Port A Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200;   // Port A Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400;  // Port A Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800;  // Port A Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port A Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port A Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port A Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port A Reset bit 15
};


////
//
//      General-purpose I/Os
//
////

struct stm32f722_gpiob_t
{
    volatile uint32_t MODER;   // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;  // [read-write] GPIO port output type register
    volatile uint32_t OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;   // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;     // [read-only] GPIO port input data register
    volatile uint32_t ODR;     // [read-write] GPIO port output data register
    volatile uint32_t BSRR;    // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;    // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;    // [read-write] GPIO alternate function low register
    volatile uint32_t AFRH;    // [read-write] GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0x280;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0xc0;
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x100;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();
};


////
//
//      General-purpose I/Os
//
////

struct stm32f745_gpiob_t
{
    volatile uint32_t MODER;         // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;        // [read-write] GPIO port output type register
    volatile uint32_t GPIOB_OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;         // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;           // [read-only] GPIO port input data register
    volatile uint32_t ODR;           // [read-write] GPIO port output data register
    volatile uint32_t BSRR;          // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;          // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;          // [read-write] GPIO alternate function low register
    volatile uint32_t AFRH;          // [read-write] GPIO alternate function high register
    volatile uint32_t BRR;           // [read-write] GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0x280;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t GPIOB_OSPEEDR_RESET_VALUE = 0xc0;
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x100;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BRR_BR0 = 0x1;     // Port B Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2;     // Port B Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4;     // Port B Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8;     // Port B Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10;    // Port B Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20;    // Port B Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40;    // Port B Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80;    // Port B Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100;   // Port B Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200;   // Port B Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400;  // Port B Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800;  // Port B Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port B Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port B Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port B Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port B Reset bit 15
};


////
//
//      General-purpose I/Os
//
////

struct stm32f745_gpiod_t
{
    volatile uint32_t MODER;         // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;        // [read-write] GPIO port output type register
    volatile uint32_t GPIOB_OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;         // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;           // [read-only] GPIO port input data register
    volatile uint32_t ODR;           // [read-write] GPIO port output data register
    volatile uint32_t BSRR;          // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;          // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;          // [read-write] GPIO alternate function lowregister
    volatile uint32_t AFRH;          // [read-write] GPIO alternate function high register
    volatile uint32_t BRR;           // [read-write] GPIO port bit reset register

    static constexpr uint32_t MODER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t GPIOB_OSPEEDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOB_OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BRR_BR0 = 0x1;     // Port D Reset bit 0
    static constexpr uint32_t BRR_BR1 = 0x2;     // Port D Reset bit 1
    static constexpr uint32_t BRR_BR2 = 0x4;     // Port D Reset bit 2
    static constexpr uint32_t BRR_BR3 = 0x8;     // Port D Reset bit 3
    static constexpr uint32_t BRR_BR4 = 0x10;    // Port D Reset bit 4
    static constexpr uint32_t BRR_BR5 = 0x20;    // Port D Reset bit 5
    static constexpr uint32_t BRR_BR6 = 0x40;    // Port D Reset bit 6
    static constexpr uint32_t BRR_BR7 = 0x80;    // Port D Reset bit 7
    static constexpr uint32_t BRR_BR8 = 0x100;   // Port D Reset bit 8
    static constexpr uint32_t BRR_BR9 = 0x200;   // Port D Reset bit 9
    static constexpr uint32_t BRR_BR10 = 0x400;  // Port D Reset bit 10
    static constexpr uint32_t BRR_BR11 = 0x800;  // Port D Reset bit 11
    static constexpr uint32_t BRR_BR12 = 0x1000; // Port D Reset bit 12
    static constexpr uint32_t BRR_BR13 = 0x2000; // Port D Reset bit 13
    static constexpr uint32_t BRR_BR14 = 0x4000; // Port D Reset bit 14
    static constexpr uint32_t BRR_BR15 = 0x8000; // Port D Reset bit 15
};


////
//
//      General-purpose I/Os
//
////

struct stm32f722_gpioh_t
{
    volatile uint32_t MODER;   // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;  // [read-write] GPIO port output type register
    volatile uint32_t OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;   // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;     // [read-only] GPIO port input data register
    volatile uint32_t ODR;     // [read-write] GPIO port output data register
    volatile uint32_t BSRR;    // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;    // [read-write] GPIO port configuration lock register
    volatile uint32_t AFRL;    // [read-write] GPIO alternate function lowregister
    volatile uint32_t AFRH;    // [read-write] GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODER0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15)
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15)

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEEDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR15 =   // Port x configuration bits (y = 0..15)
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR14 =   // Port x configuration bits (y = 0..15)
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR13 =   // Port x configuration bits (y = 0..15)
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR12 =   // Port x configuration bits (y = 0..15)
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR11 =   // Port x configuration bits (y = 0..15)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR10 =   // Port x configuration bits (y = 0..15)
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR9 =    // Port x configuration bits (y = 0..15)
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR8 =    // Port x configuration bits (y = 0..15)
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR7 =    // Port x configuration bits (y = 0..15)
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR6 =    // Port x configuration bits (y = 0..15)
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR5 =    // Port x configuration bits (y = 0..15)
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR4 =    // Port x configuration bits (y = 0..15)
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR3 =    // Port x configuration bits (y = 0..15)
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR2 =    // Port x configuration bits (y = 0..15)
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR1 =    // Port x configuration bits (y = 0..15)
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPDR0 =    // Port x configuration bits (y = 0..15)
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_IDR15 = 0x8000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR14 = 0x4000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR13 = 0x2000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR12 = 0x1000; // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR11 = 0x800;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR10 = 0x400;  // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR9 = 0x200;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR8 = 0x100;   // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR7 = 0x80;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR6 = 0x40;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR5 = 0x20;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR4 = 0x10;    // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR3 = 0x8;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR2 = 0x4;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR1 = 0x2;     // Port input data (y = 0..15)
    static constexpr uint32_t IDR_IDR0 = 0x1;     // Port input data (y = 0..15)

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_ODR15 = 0x8000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR14 = 0x4000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR13 = 0x2000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR12 = 0x1000; // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR11 = 0x800;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR10 = 0x400;  // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR9 = 0x200;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR8 = 0x100;   // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR7 = 0x80;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR6 = 0x40;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR5 = 0x20;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR4 = 0x10;    // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR3 = 0x8;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR2 = 0x4;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR1 = 0x2;     // Port output data (y = 0..15)
    static constexpr uint32_t ODR_ODR0 = 0x1;     // Port output data (y = 0..15)

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15)
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15)
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15)

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15)
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15)

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL7 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL6 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL5 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL4 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL3 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL2 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL1 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFRL0 =   // Alternate function selection for port x bit y (y = 0..7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH15 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH14 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH13 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH12 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH11 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH10 =   // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH9 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFRH8 =    // Alternate function selection for port x bit y (y = 8..15)
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32F722, GPIOH>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOF>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOG>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOI>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOE>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOD>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOC>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOH>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOF>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOG>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOI>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOE>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOD>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOC>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOH>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOF>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOG>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOI>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOE>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOD>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOC>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOH>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOF>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOG>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOI>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOE>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOD>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOC>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOH>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOF>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOG>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOI>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOE>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOD>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOC>
{
    typedef stm32f722_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOB>
{
    typedef stm32f722_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOB>
{
    typedef stm32f722_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOB>
{
    typedef stm32f722_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOB>
{
    typedef stm32f722_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOB>
{
    typedef stm32f722_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, GPIOA>
{
    typedef stm32f722_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, GPIOA>
{
    typedef stm32f722_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, GPIOA>
{
    typedef stm32f722_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, GPIOA>
{
    typedef stm32f722_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, GPIOA>
{
    typedef stm32f722_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOD>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOC>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOK>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOJ>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOI>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOH>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOG>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOF>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOE>
{
    typedef stm32f745_gpiod_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOB>
{
    typedef stm32f745_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, GPIOA>
{
    typedef stm32f745_gpioa_t T;
    static T& V;
};

using gpioa_t = peripheral_t<mcu_svd, GPIOA>;
using gpiob_t = peripheral_t<mcu_svd, GPIOB>;
using gpioc_t = peripheral_t<mcu_svd, GPIOC>;
using gpiod_t = peripheral_t<mcu_svd, GPIOD>;
using gpioe_t = peripheral_t<mcu_svd, GPIOE>;
using gpiof_t = peripheral_t<mcu_svd, GPIOF>;
using gpiog_t = peripheral_t<mcu_svd, GPIOG>;
using gpioh_t = peripheral_t<mcu_svd, GPIOH>;
using gpioi_t = peripheral_t<mcu_svd, GPIOI>;
using gpioj_t = peripheral_t<mcu_svd, GPIOJ>;
using gpiok_t = peripheral_t<mcu_svd, GPIOK>;

