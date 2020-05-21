#pragma once

////
//
//      STM32MP1 GPIOI peripherals
//
////

////
//
//      GPIOI
//
////

struct stm32mp15xxx_gpioi_t
{
    volatile uint32_t GPIOI_MODER;    // [read-write] GPIO port mode register
    volatile uint32_t GPIOI_OTYPER;   // [read-write] GPIO port output type register
    volatile uint32_t GPIOI_OSPEEDR;  // [read-write] GPIO port output speed register
    volatile uint32_t GPIOI_PUPDR;    // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t GPIOI_IDR;      // [read-only] GPIO port input data register
    volatile uint32_t GPIOI_ODR;      // [read-write] GPIO port output data register
    volatile uint32_t GPIOI_BSRR;     // [write-only] GPIO port bit set/reset register
    volatile uint32_t GPIOI_LCKR;     // [read-write] This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset. A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence. Each lock bit freezes a specific configuration register (control and alternate function registers).
    volatile uint32_t GPIOI_AFRL;     // [read-write] GPIO alternate function low register
    volatile uint32_t GPIOI_AFRH;     // [read-write] GPIO alternate function high register
    volatile uint32_t GPIOI_BRR;      // [write-only] GPIO port bit reset register
    reserved_t<0xe7> _0x3c8;
    volatile uint32_t GPIOI_HWCFGR10; // [read-only] For GPIOA, B, C, D, E, F, G, H, I, J and GPIOK: For GPIOZ:
    volatile uint32_t GPIOI_HWCFGR9;  // [read-only] For GPIOA, B, C, D, E, F, G, H, I, and GPIOJ: For GPIOK and GPIOZ:
    volatile uint32_t GPIOI_HWCFGR8;  // [read-only] For GPIOA, B, C, D, E, F, G, H, I, and GPIOJ: For GPIOK and GPIOZ:
    volatile uint32_t GPIOI_HWCFGR7;  // [read-only] GPIO hardware configuration register 7
    volatile uint32_t GPIOI_HWCFGR6;  // [read-only] GPIO hardware configuration register 6
    volatile uint32_t GPIOI_HWCFGR5;  // [read-only] GPIO hardware configuration register 5
    volatile uint32_t GPIOI_HWCFGR4;  // [read-only] GPIO hardware configuration register 4
    volatile uint32_t GPIOI_HWCFGR3;  // [read-only] GPIO hardware configuration register 3
    volatile uint32_t GPIOI_HWCFGR2;  // [read-only] GPIO hardware configuration register 2
    volatile uint32_t GPIOI_HWCFGR1;  // [read-only] GPIO hardware configuration register 1
    volatile uint32_t GPIOI_HWCFGR0;  // [read-only] GPIO hardware configuration register 0
    volatile uint32_t GPIOI_VERR;     // [read-only] GPIO version register
    volatile uint32_t GPIOI_IPIDR;    // [read-only] GPIO identification register
    volatile uint32_t GPIOI_SIDR;     // [read-only] GPIO size identification register

    static constexpr uint32_t GPIOI_MODER_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER0 =    // MODER0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER1 =    // MODER1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER2 =    // MODER2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER3 =    // MODER3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER4 =    // MODER4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER5 =    // MODER5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER6 =    // MODER6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER7 =    // MODER7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER8 =    // MODER8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER9 =    // MODER9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER10 =   // MODER10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER11 =   // MODER11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER12 =   // MODER12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER13 =   // MODER13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER14 =   // MODER14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_MODER_MODER15 =   // MODER15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIOI_OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_OTYPER_OT0 = 0x1;     // OT0
    static constexpr uint32_t GPIOI_OTYPER_OT1 = 0x2;     // OT1
    static constexpr uint32_t GPIOI_OTYPER_OT2 = 0x4;     // OT2
    static constexpr uint32_t GPIOI_OTYPER_OT3 = 0x8;     // OT3
    static constexpr uint32_t GPIOI_OTYPER_OT4 = 0x10;    // OT4
    static constexpr uint32_t GPIOI_OTYPER_OT5 = 0x20;    // OT5
    static constexpr uint32_t GPIOI_OTYPER_OT6 = 0x40;    // OT6
    static constexpr uint32_t GPIOI_OTYPER_OT7 = 0x80;    // OT7
    static constexpr uint32_t GPIOI_OTYPER_OT8 = 0x100;   // OT8
    static constexpr uint32_t GPIOI_OTYPER_OT9 = 0x200;   // OT9
    static constexpr uint32_t GPIOI_OTYPER_OT10 = 0x400;  // OT10
    static constexpr uint32_t GPIOI_OTYPER_OT11 = 0x800;  // OT11
    static constexpr uint32_t GPIOI_OTYPER_OT12 = 0x1000; // OT12
    static constexpr uint32_t GPIOI_OTYPER_OT13 = 0x2000; // OT13
    static constexpr uint32_t GPIOI_OTYPER_OT14 = 0x4000; // OT14
    static constexpr uint32_t GPIOI_OTYPER_OT15 = 0x8000; // OT15

    static constexpr uint32_t GPIOI_OSPEEDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR0 =    // OSPEEDR0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR1 =    // OSPEEDR1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR2 =    // OSPEEDR2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR3 =    // OSPEEDR3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR4 =    // OSPEEDR4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR5 =    // OSPEEDR5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR6 =    // OSPEEDR6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR7 =    // OSPEEDR7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR8 =    // OSPEEDR8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR9 =    // OSPEEDR9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR10 =   // OSPEEDR10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR11 =   // OSPEEDR11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR12 =   // OSPEEDR12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR13 =   // OSPEEDR13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR14 =   // OSPEEDR14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_OSPEEDR_OSPEEDR15 =   // OSPEEDR15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIOI_PUPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR0 =    // PUPDR0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR1 =    // PUPDR1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR2 =    // PUPDR2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR3 =    // PUPDR3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR4 =    // PUPDR4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR5 =    // PUPDR5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR6 =    // PUPDR6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR7 =    // PUPDR7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR8 =    // PUPDR8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR9 =    // PUPDR9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR10 =   // PUPDR10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR11 =   // PUPDR11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR12 =   // PUPDR12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR13 =   // PUPDR13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR14 =   // PUPDR14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_PUPDR_PUPDR15 =   // PUPDR15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIOI_IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_IDR_IDR0 = 0x1;     // IDR0
    static constexpr uint32_t GPIOI_IDR_IDR1 = 0x2;     // IDR1
    static constexpr uint32_t GPIOI_IDR_IDR2 = 0x4;     // IDR2
    static constexpr uint32_t GPIOI_IDR_IDR3 = 0x8;     // IDR3
    static constexpr uint32_t GPIOI_IDR_IDR4 = 0x10;    // IDR4
    static constexpr uint32_t GPIOI_IDR_IDR5 = 0x20;    // IDR5
    static constexpr uint32_t GPIOI_IDR_IDR6 = 0x40;    // IDR6
    static constexpr uint32_t GPIOI_IDR_IDR7 = 0x80;    // IDR7
    static constexpr uint32_t GPIOI_IDR_IDR8 = 0x100;   // IDR8
    static constexpr uint32_t GPIOI_IDR_IDR9 = 0x200;   // IDR9
    static constexpr uint32_t GPIOI_IDR_IDR10 = 0x400;  // IDR10
    static constexpr uint32_t GPIOI_IDR_IDR11 = 0x800;  // IDR11
    static constexpr uint32_t GPIOI_IDR_IDR12 = 0x1000; // IDR12
    static constexpr uint32_t GPIOI_IDR_IDR13 = 0x2000; // IDR13
    static constexpr uint32_t GPIOI_IDR_IDR14 = 0x4000; // IDR14
    static constexpr uint32_t GPIOI_IDR_IDR15 = 0x8000; // IDR15

    static constexpr uint32_t GPIOI_ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_ODR_ODR0 = 0x1;     // ODR0
    static constexpr uint32_t GPIOI_ODR_ODR1 = 0x2;     // ODR1
    static constexpr uint32_t GPIOI_ODR_ODR2 = 0x4;     // ODR2
    static constexpr uint32_t GPIOI_ODR_ODR3 = 0x8;     // ODR3
    static constexpr uint32_t GPIOI_ODR_ODR4 = 0x10;    // ODR4
    static constexpr uint32_t GPIOI_ODR_ODR5 = 0x20;    // ODR5
    static constexpr uint32_t GPIOI_ODR_ODR6 = 0x40;    // ODR6
    static constexpr uint32_t GPIOI_ODR_ODR7 = 0x80;    // ODR7
    static constexpr uint32_t GPIOI_ODR_ODR8 = 0x100;   // ODR8
    static constexpr uint32_t GPIOI_ODR_ODR9 = 0x200;   // ODR9
    static constexpr uint32_t GPIOI_ODR_ODR10 = 0x400;  // ODR10
    static constexpr uint32_t GPIOI_ODR_ODR11 = 0x800;  // ODR11
    static constexpr uint32_t GPIOI_ODR_ODR12 = 0x1000; // ODR12
    static constexpr uint32_t GPIOI_ODR_ODR13 = 0x2000; // ODR13
    static constexpr uint32_t GPIOI_ODR_ODR14 = 0x4000; // ODR14
    static constexpr uint32_t GPIOI_ODR_ODR15 = 0x8000; // ODR15

    static constexpr uint32_t GPIOI_BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_BSRR_BS0 = 0x1;         // BS0
    static constexpr uint32_t GPIOI_BSRR_BS1 = 0x2;         // BS1
    static constexpr uint32_t GPIOI_BSRR_BS2 = 0x4;         // BS2
    static constexpr uint32_t GPIOI_BSRR_BS3 = 0x8;         // BS3
    static constexpr uint32_t GPIOI_BSRR_BS4 = 0x10;        // BS4
    static constexpr uint32_t GPIOI_BSRR_BS5 = 0x20;        // BS5
    static constexpr uint32_t GPIOI_BSRR_BS6 = 0x40;        // BS6
    static constexpr uint32_t GPIOI_BSRR_BS7 = 0x80;        // BS7
    static constexpr uint32_t GPIOI_BSRR_BS8 = 0x100;       // BS8
    static constexpr uint32_t GPIOI_BSRR_BS9 = 0x200;       // BS9
    static constexpr uint32_t GPIOI_BSRR_BS10 = 0x400;      // BS10
    static constexpr uint32_t GPIOI_BSRR_BS11 = 0x800;      // BS11
    static constexpr uint32_t GPIOI_BSRR_BS12 = 0x1000;     // BS12
    static constexpr uint32_t GPIOI_BSRR_BS13 = 0x2000;     // BS13
    static constexpr uint32_t GPIOI_BSRR_BS14 = 0x4000;     // BS14
    static constexpr uint32_t GPIOI_BSRR_BS15 = 0x8000;     // BS15
    static constexpr uint32_t GPIOI_BSRR_BR0 = 0x10000;     // BR0
    static constexpr uint32_t GPIOI_BSRR_BR1 = 0x20000;     // BR1
    static constexpr uint32_t GPIOI_BSRR_BR2 = 0x40000;     // BR2
    static constexpr uint32_t GPIOI_BSRR_BR3 = 0x80000;     // BR3
    static constexpr uint32_t GPIOI_BSRR_BR4 = 0x100000;    // BR4
    static constexpr uint32_t GPIOI_BSRR_BR5 = 0x200000;    // BR5
    static constexpr uint32_t GPIOI_BSRR_BR6 = 0x400000;    // BR6
    static constexpr uint32_t GPIOI_BSRR_BR7 = 0x800000;    // BR7
    static constexpr uint32_t GPIOI_BSRR_BR8 = 0x1000000;   // BR8
    static constexpr uint32_t GPIOI_BSRR_BR9 = 0x2000000;   // BR9
    static constexpr uint32_t GPIOI_BSRR_BR10 = 0x4000000;  // BR10
    static constexpr uint32_t GPIOI_BSRR_BR11 = 0x8000000;  // BR11
    static constexpr uint32_t GPIOI_BSRR_BR12 = 0x10000000; // BR12
    static constexpr uint32_t GPIOI_BSRR_BR13 = 0x20000000; // BR13
    static constexpr uint32_t GPIOI_BSRR_BR14 = 0x40000000; // BR14
    static constexpr uint32_t GPIOI_BSRR_BR15 = 0x80000000; // BR15

    static constexpr uint32_t GPIOI_LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_LCKR_LCK0 = 0x1;     // LCK0
    static constexpr uint32_t GPIOI_LCKR_LCK1 = 0x2;     // LCK1
    static constexpr uint32_t GPIOI_LCKR_LCK2 = 0x4;     // LCK2
    static constexpr uint32_t GPIOI_LCKR_LCK3 = 0x8;     // LCK3
    static constexpr uint32_t GPIOI_LCKR_LCK4 = 0x10;    // LCK4
    static constexpr uint32_t GPIOI_LCKR_LCK5 = 0x20;    // LCK5
    static constexpr uint32_t GPIOI_LCKR_LCK6 = 0x40;    // LCK6
    static constexpr uint32_t GPIOI_LCKR_LCK7 = 0x80;    // LCK7
    static constexpr uint32_t GPIOI_LCKR_LCK8 = 0x100;   // LCK8
    static constexpr uint32_t GPIOI_LCKR_LCK9 = 0x200;   // LCK9
    static constexpr uint32_t GPIOI_LCKR_LCK10 = 0x400;  // LCK10
    static constexpr uint32_t GPIOI_LCKR_LCK11 = 0x800;  // LCK11
    static constexpr uint32_t GPIOI_LCKR_LCK12 = 0x1000; // LCK12
    static constexpr uint32_t GPIOI_LCKR_LCK13 = 0x2000; // LCK13
    static constexpr uint32_t GPIOI_LCKR_LCK14 = 0x4000; // LCK14
    static constexpr uint32_t GPIOI_LCKR_LCK15 = 0x8000; // LCK15
    static constexpr uint32_t GPIOI_LCKR_LCKK = 0x10000; // LCKK

    static constexpr uint32_t GPIOI_AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR0 =   // AFR0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR1 =   // AFR1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR2 =   // AFR2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR3 =   // AFR3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR4 =   // AFR4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR5 =   // AFR5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR6 =   // AFR6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRL_AFR7 =   // AFR7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR8 =    // AFR8
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR9 =    // AFR9
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR10 =   // AFR10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR11 =   // AFR11
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR12 =   // AFR12
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR13 =   // AFR13
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR14 =   // AFR14
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_AFRH_AFR15 =   // AFR15
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_BRR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIOI_BRR_BR0 = 0x1;     // BR0
    static constexpr uint32_t GPIOI_BRR_BR1 = 0x2;     // BR1
    static constexpr uint32_t GPIOI_BRR_BR2 = 0x4;     // BR2
    static constexpr uint32_t GPIOI_BRR_BR3 = 0x8;     // BR3
    static constexpr uint32_t GPIOI_BRR_BR4 = 0x10;    // BR4
    static constexpr uint32_t GPIOI_BRR_BR5 = 0x20;    // BR5
    static constexpr uint32_t GPIOI_BRR_BR6 = 0x40;    // BR6
    static constexpr uint32_t GPIOI_BRR_BR7 = 0x80;    // BR7
    static constexpr uint32_t GPIOI_BRR_BR8 = 0x100;   // BR8
    static constexpr uint32_t GPIOI_BRR_BR9 = 0x200;   // BR9
    static constexpr uint32_t GPIOI_BRR_BR10 = 0x400;  // BR10
    static constexpr uint32_t GPIOI_BRR_BR11 = 0x800;  // BR11
    static constexpr uint32_t GPIOI_BRR_BR12 = 0x1000; // BR12
    static constexpr uint32_t GPIOI_BRR_BR13 = 0x2000; // BR13
    static constexpr uint32_t GPIOI_BRR_BR14 = 0x4000; // BR14
    static constexpr uint32_t GPIOI_BRR_BR15 = 0x8000; // BR15

    static constexpr uint32_t GPIOI_HWCFGR10_RESET_VALUE = 0x11240;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_AHB_IOP =     // AHB_IOP
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_AF_SIZE =     // AF_SIZE
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_SPEED_CFG =   // SPEED_CFG
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_LOCK_CFG =    // LOCK_CFG
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_SEC_CFG =     // SEC_CFG
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR10_OR_CFG =      // OR_CFG
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_HWCFGR9_RESET_VALUE = 0xff;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR9_EN_IO =   // EN_IO
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t GPIOI_HWCFGR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO8 =    // AF_PRIO8
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO9 =    // AF_PRIO9
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO10 =   // AF_PRIO10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO11 =   // AF_PRIO11
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO12 =   // AF_PRIO12
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO13 =   // AF_PRIO13
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO14 =   // AF_PRIO14
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR8_AF_PRIO15 =   // AF_PRIO15
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_HWCFGR7_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO0 =   // AF_PRIO0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO1 =   // AF_PRIO1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO2 =   // AF_PRIO2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO3 =   // AF_PRIO3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO4 =   // AF_PRIO4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO5 =   // AF_PRIO5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO6 =   // AF_PRIO6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR7_AF_PRIO7 =   // AF_PRIO7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_HWCFGR6_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t GPIOI_HWCFGR5_RESET_VALUE = 0x0;

    static constexpr uint32_t GPIOI_HWCFGR4_RESET_VALUE = 0x0;

    static constexpr uint32_t GPIOI_HWCFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR3_ODR_RES =      // ODR_RES
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR3_OTYPER_RES =   // OTYPER_RES
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t GPIOI_HWCFGR2_RESET_VALUE = 0x0;

    static constexpr uint32_t GPIOI_HWCFGR1_RESET_VALUE = 0x0;

    static constexpr uint32_t GPIOI_HWCFGR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_HWCFGR0_OR_RES =   // OR_RES
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t GPIOI_VERR_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t GPIOI_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIOI_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t GPIOI_IPIDR_RESET_VALUE = 0xf0002;

    static constexpr uint32_t GPIOI_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, GPIOI>
{
    typedef stm32mp15xxx_gpioi_t T;
    static T& V;
};

using gpioi_t = peripheral_t<mcu_svd, GPIOI>;

