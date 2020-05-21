#pragma once

////
//
//      STM32F4 GPIO peripherals
//
////

////
//
//      General-purpose I/Os
//
////

struct stm32f401_gpioa_t
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

struct stm32f401_gpiob_t
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

struct stm32f401_gpioh_t
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
struct peripheral_t<STM32F401, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOI>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOJ>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOK>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOI>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOJ>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOK>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOI>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOJ>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOK>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOK>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOJ>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOI>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOK>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOJ>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOI>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOH>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOG>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOF>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOE>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOD>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOC>
{
    typedef stm32f401_gpioh_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOB>
{
    typedef stm32f401_gpiob_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, GPIOA>
{
    typedef stm32f401_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, GPIOA>
{
    typedef stm32f401_gpioa_t T;
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

