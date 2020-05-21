#pragma once

////
//
//      STM32H7 GPIO peripherals
//
////

////
//
//      GPIO
//
////

struct stm32h742x_gpioa_t
{
    volatile uint32_t MODER;   // [read-write] GPIO port mode register
    volatile uint32_t OTYPER;  // [read-write] GPIO port output type register
    volatile uint32_t OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t PUPDR;   // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t IDR;     // [read-only] GPIO port input data register
    volatile uint32_t ODR;     // [read-write] GPIO port output data register
    volatile uint32_t BSRR;    // [write-only] GPIO port bit set/reset register
    volatile uint32_t LCKR;    // [read-write] This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers).
    volatile uint32_t AFRL;    // [read-write] GPIO alternate function low register
    volatile uint32_t AFRH;    // [read-write] GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0xabffffff;
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MODER_MODE15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0xc000000;
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OSPEEDR_OSPEED15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x12100000;
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PUPDR_PUPD15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDR_ID0 = 0x1;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID1 = 0x2;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID2 = 0x4;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID3 = 0x8;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID4 = 0x10;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID5 = 0x20;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID6 = 0x40;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID7 = 0x80;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID8 = 0x100;   // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID9 = 0x200;   // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID10 = 0x400;  // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID11 = 0x800;  // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID12 = 0x1000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID13 = 0x2000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID14 = 0x4000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID15 = 0x8000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.

    static constexpr uint32_t ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODR_OD0 = 0x1;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD1 = 0x2;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD2 = 0x4;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD3 = 0x8;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD4 = 0x10;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD5 = 0x20;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD6 = 0x40;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD7 = 0x80;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD8 = 0x100;   // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD9 = 0x200;   // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD10 = 0x400;  // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD11 = 0x800;  // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD12 = 0x1000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD13 = 0x2000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD14 = 0x4000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD15 = 0x8000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BR0 = 0x10000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset.

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL0 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL1 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL2 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL3 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL4 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL5 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL6 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRL_AFSEL7 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL8 =    // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL9 =    // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL10 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL11 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL12 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL13 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL14 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRH_AFSEL15 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<28, 0xf>::value<X>();
};


////
//
//      GPIO
//
////

struct stm32h750x_gpioa_t
{
    volatile uint32_t GPIO_MODER;   // [read-write] GPIO port mode register
    volatile uint32_t GPIO_OTYPER;  // [read-write] GPIO port output type register
    volatile uint32_t GPIO_OSPEEDR; // [read-write] GPIO port output speed register
    volatile uint32_t GPIO_PUPDR;   // [read-write] GPIO port pull-up/pull-down register
    volatile uint32_t GPIO_IDR;     // [read-only] GPIO port input data register
    volatile uint32_t GPIO_ODR;     // [read-write] GPIO port output data register
    volatile uint32_t GPIO_BSRR;    // [write-only] GPIO port bit set/reset register
    volatile uint32_t GPIO_LCKR;    // [read-write] This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers).
    volatile uint32_t GPIO_AFRL;    // [read-write] GPIO alternate function low register
    volatile uint32_t GPIO_AFRH;    // [read-write] GPIO alternate function high register

    static constexpr uint32_t GPIO_MODER_RESET_VALUE = 0xabffffff;
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_MODER_MODE15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIO_OTYPER_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIO_OTYPER_OT0 = 0x1;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT1 = 0x2;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT2 = 0x4;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT3 = 0x8;     // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT4 = 0x10;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT5 = 0x20;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT6 = 0x40;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT7 = 0x80;    // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT8 = 0x100;   // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT9 = 0x200;   // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT10 = 0x400;  // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT11 = 0x800;  // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.

    static constexpr uint32_t GPIO_OSPEEDR_RESET_VALUE = 0xc000000;
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_OSPEEDR_OSPEED15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIO_PUPDR_RESET_VALUE = 0x12100000;
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD0 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD1 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD2 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD3 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD4 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD5 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD6 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD7 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD8 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD9 =    // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD10 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD11 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD12 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD13 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD14 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_PUPDR_PUPD15 =   // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t GPIO_IDR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIO_IDR_ID0 = 0x1;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID1 = 0x2;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID2 = 0x4;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID3 = 0x8;     // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID4 = 0x10;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID5 = 0x20;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID6 = 0x40;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID7 = 0x80;    // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID8 = 0x100;   // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID9 = 0x200;   // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID10 = 0x400;  // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID11 = 0x800;  // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID12 = 0x1000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID13 = 0x2000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID14 = 0x4000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID15 = 0x8000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.

    static constexpr uint32_t GPIO_ODR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIO_ODR_OD0 = 0x1;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD1 = 0x2;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD2 = 0x4;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD3 = 0x8;     // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD4 = 0x10;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD5 = 0x20;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD6 = 0x40;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD7 = 0x80;    // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD8 = 0x100;   // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD9 = 0x200;   // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD10 = 0x400;  // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD11 = 0x800;  // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD12 = 0x1000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD13 = 0x2000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD14 = 0x4000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD15 = 0x8000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).

    static constexpr uint32_t GPIO_BSRR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIO_BSRR_BS0 = 0x1;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS1 = 0x2;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS2 = 0x4;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS3 = 0x8;         // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS4 = 0x10;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS5 = 0x20;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS6 = 0x40;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS7 = 0x80;        // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS8 = 0x100;       // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS9 = 0x200;       // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS10 = 0x400;      // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS11 = 0x800;      // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS12 = 0x1000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS13 = 0x2000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS14 = 0x4000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS15 = 0x8000;     // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BR0 = 0x10000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR1 = 0x20000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR2 = 0x40000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR3 = 0x80000;     // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR4 = 0x100000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR5 = 0x200000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR6 = 0x400000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR7 = 0x800000;    // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR8 = 0x1000000;   // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR9 = 0x2000000;   // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR10 = 0x4000000;  // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR11 = 0x8000000;  // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.

    static constexpr uint32_t GPIO_LCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t GPIO_LCKR_LCK0 = 0x1;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK1 = 0x2;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK2 = 0x4;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK3 = 0x8;     // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK4 = 0x10;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK5 = 0x20;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK6 = 0x40;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK7 = 0x80;    // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK8 = 0x100;   // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK9 = 0x200;   // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK10 = 0x400;  // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK11 = 0x800;  // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCKK = 0x10000; // Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset.

    static constexpr uint32_t GPIO_AFRL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL0 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL1 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL2 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL3 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL4 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL5 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL6 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRL_AFSEL7 =   // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t GPIO_AFRH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL8 =    // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL9 =    // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL10 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL11 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL12 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL13 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL14 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GPIO_AFRH_AFSEL15 =   // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
        bit_field_t<28, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOA>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOB>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOC>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOD>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOE>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOF>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOG>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOH>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOI>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOJ>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOK>
{
    typedef stm32h742x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOA>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOB>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOC>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOD>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOE>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOF>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOG>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOH>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOI>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOJ>
{
    typedef stm32h750x_gpioa_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOK>
{
    typedef stm32h750x_gpioa_t T;
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

