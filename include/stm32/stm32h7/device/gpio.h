#pragma once

////
//
//      STM32H7 GPIO peripherals
//
///

// GPIOA: GPIO

struct stm32h723_gpioa_t
{
    volatile uint32_t MODER; // GPIO port mode register
    volatile uint32_t OTYPER; // GPIO port output type register
    volatile uint32_t OSPEEDR; // GPIO port output speed register
    volatile uint32_t PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t IDR; // GPIO port input data register
    volatile uint32_t ODR; // GPIO port output data register
    volatile uint32_t BSRR; // GPIO port bit set/reset register
    volatile uint32_t LCKR; // This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers).
    volatile uint32_t AFRL; // GPIO alternate function low register
    volatile uint32_t AFRH; // GPIO alternate function high register

    static constexpr uint32_t MODER_RESET_VALUE = 0xabffffff; // Reset value
    typedef bit_field_t<0, 0x3> MODER_MODE0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<2, 0x3> MODER_MODE1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<4, 0x3> MODER_MODE2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<6, 0x3> MODER_MODE3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<8, 0x3> MODER_MODE4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<10, 0x3> MODER_MODE5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<12, 0x3> MODER_MODE6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<14, 0x3> MODER_MODE7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<16, 0x3> MODER_MODE8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<18, 0x3> MODER_MODE9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<20, 0x3> MODER_MODE10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<22, 0x3> MODER_MODE11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<24, 0x3> MODER_MODE12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<26, 0x3> MODER_MODE13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<28, 0x3> MODER_MODE14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<30, 0x3> MODER_MODE15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.

    static constexpr uint32_t OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.

    static constexpr uint32_t OSPEEDR_RESET_VALUE = 0xc000000; // Reset value
    typedef bit_field_t<0, 0x3> OSPEEDR_OSPEED0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<2, 0x3> OSPEEDR_OSPEED1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<4, 0x3> OSPEEDR_OSPEED2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<6, 0x3> OSPEEDR_OSPEED3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<8, 0x3> OSPEEDR_OSPEED4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<10, 0x3> OSPEEDR_OSPEED5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<12, 0x3> OSPEEDR_OSPEED6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<14, 0x3> OSPEEDR_OSPEED7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<16, 0x3> OSPEEDR_OSPEED8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<18, 0x3> OSPEEDR_OSPEED9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<20, 0x3> OSPEEDR_OSPEED10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<22, 0x3> OSPEEDR_OSPEED11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<24, 0x3> OSPEEDR_OSPEED12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<26, 0x3> OSPEEDR_OSPEED13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<28, 0x3> OSPEEDR_OSPEED14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<30, 0x3> OSPEEDR_OSPEED15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.

    static constexpr uint32_t PUPDR_RESET_VALUE = 0x12100000; // Reset value
    typedef bit_field_t<0, 0x3> PUPDR_PUPD0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<2, 0x3> PUPDR_PUPD1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<4, 0x3> PUPDR_PUPD2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<6, 0x3> PUPDR_PUPD3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<8, 0x3> PUPDR_PUPD4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<10, 0x3> PUPDR_PUPD5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<12, 0x3> PUPDR_PUPD6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<14, 0x3> PUPDR_PUPD7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<16, 0x3> PUPDR_PUPD8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<18, 0x3> PUPDR_PUPD9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<20, 0x3> PUPDR_PUPD10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<22, 0x3> PUPDR_PUPD11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<24, 0x3> PUPDR_PUPD12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<26, 0x3> PUPDR_PUPD13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<28, 0x3> PUPDR_PUPD14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<30, 0x3> PUPDR_PUPD15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down

    static constexpr uint32_t IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IDR_ID0 = 0x1; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID1 = 0x2; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID2 = 0x4; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID3 = 0x8; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID4 = 0x10; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID5 = 0x20; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID6 = 0x40; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID7 = 0x80; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID8 = 0x100; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID9 = 0x200; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID10 = 0x400; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID11 = 0x800; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID12 = 0x1000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID13 = 0x2000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID14 = 0x4000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t IDR_ID15 = 0x8000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.

    static constexpr uint32_t ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODR_OD0 = 0x1; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD1 = 0x2; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD2 = 0x4; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD3 = 0x8; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD4 = 0x10; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD5 = 0x20; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD6 = 0x40; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD7 = 0x80; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD8 = 0x100; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD9 = 0x200; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD10 = 0x400; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD11 = 0x800; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD12 = 0x1000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD13 = 0x2000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD14 = 0x4000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t ODR_OD15 = 0x8000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).

    static constexpr uint32_t BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t BSRR_BR0 = 0x10000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.

    static constexpr uint32_t LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t LCKR_LCKK = 0x10000; // Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset.

    static constexpr uint32_t AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> AFRL_AFSEL0; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<4, 0xf> AFRL_AFSEL1; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<8, 0xf> AFRL_AFSEL2; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<12, 0xf> AFRL_AFSEL3; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<16, 0xf> AFRL_AFSEL4; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<20, 0xf> AFRL_AFSEL5; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<24, 0xf> AFRL_AFSEL6; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<28, 0xf> AFRL_AFSEL7; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:

    static constexpr uint32_t AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> AFRH_AFSEL8; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<4, 0xf> AFRH_AFSEL9; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<8, 0xf> AFRH_AFSEL10; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<12, 0xf> AFRH_AFSEL11; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<16, 0xf> AFRH_AFSEL12; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<20, 0xf> AFRH_AFSEL13; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<24, 0xf> AFRH_AFSEL14; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<28, 0xf> AFRH_AFSEL15; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
};

// GPIOA: GPIO

struct stm32h750x_gpioa_t
{
    volatile uint32_t GPIO_MODER; // GPIO port mode register
    volatile uint32_t GPIO_OTYPER; // GPIO port output type register
    volatile uint32_t GPIO_OSPEEDR; // GPIO port output speed register
    volatile uint32_t GPIO_PUPDR; // GPIO port pull-up/pull-down register
    volatile uint32_t GPIO_IDR; // GPIO port input data register
    volatile uint32_t GPIO_ODR; // GPIO port output data register
    volatile uint32_t GPIO_BSRR; // GPIO port bit set/reset register
    volatile uint32_t GPIO_LCKR; // This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset.A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence.Each lock bit freezes a specific configuration register (control and alternate function registers).
    volatile uint32_t GPIO_AFRL; // GPIO alternate function low register
    volatile uint32_t GPIO_AFRH; // GPIO alternate function high register

    static constexpr uint32_t GPIO_MODER_RESET_VALUE = 0xabffffff; // Reset value
    typedef bit_field_t<0, 0x3> GPIO_MODER_MODE0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<2, 0x3> GPIO_MODER_MODE1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<4, 0x3> GPIO_MODER_MODE2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<6, 0x3> GPIO_MODER_MODE3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<8, 0x3> GPIO_MODER_MODE4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<10, 0x3> GPIO_MODER_MODE5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<12, 0x3> GPIO_MODER_MODE6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<14, 0x3> GPIO_MODER_MODE7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<16, 0x3> GPIO_MODER_MODE8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<18, 0x3> GPIO_MODER_MODE9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<20, 0x3> GPIO_MODER_MODE10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<22, 0x3> GPIO_MODER_MODE11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<24, 0x3> GPIO_MODER_MODE12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<26, 0x3> GPIO_MODER_MODE13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<28, 0x3> GPIO_MODER_MODE14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.
    typedef bit_field_t<30, 0x3> GPIO_MODER_MODE15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O mode.

    static constexpr uint32_t GPIO_OTYPER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GPIO_OTYPER_OT0 = 0x1; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT1 = 0x2; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT2 = 0x4; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT3 = 0x8; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT4 = 0x10; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT5 = 0x20; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT6 = 0x40; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT7 = 0x80; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT8 = 0x100; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT9 = 0x200; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT10 = 0x400; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT11 = 0x800; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT12 = 0x1000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT13 = 0x2000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT14 = 0x4000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.
    static constexpr uint32_t GPIO_OTYPER_OT15 = 0x8000; // Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output type.

    static constexpr uint32_t GPIO_OSPEEDR_RESET_VALUE = 0xc000000; // Reset value
    typedef bit_field_t<0, 0x3> GPIO_OSPEEDR_OSPEED0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<2, 0x3> GPIO_OSPEEDR_OSPEED1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<4, 0x3> GPIO_OSPEEDR_OSPEED2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<6, 0x3> GPIO_OSPEEDR_OSPEED3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<8, 0x3> GPIO_OSPEEDR_OSPEED4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<10, 0x3> GPIO_OSPEEDR_OSPEED5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<12, 0x3> GPIO_OSPEEDR_OSPEED6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<14, 0x3> GPIO_OSPEEDR_OSPEED7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<16, 0x3> GPIO_OSPEEDR_OSPEED8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<18, 0x3> GPIO_OSPEEDR_OSPEED9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<20, 0x3> GPIO_OSPEEDR_OSPEED10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<22, 0x3> GPIO_OSPEEDR_OSPEED11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<24, 0x3> GPIO_OSPEEDR_OSPEED12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<26, 0x3> GPIO_OSPEEDR_OSPEED13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<28, 0x3> GPIO_OSPEEDR_OSPEED14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
    typedef bit_field_t<30, 0x3> GPIO_OSPEEDR_OSPEED15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.

    static constexpr uint32_t GPIO_PUPDR_RESET_VALUE = 0x12100000; // Reset value
    typedef bit_field_t<0, 0x3> GPIO_PUPDR_PUPD0; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<2, 0x3> GPIO_PUPDR_PUPD1; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<4, 0x3> GPIO_PUPDR_PUPD2; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<6, 0x3> GPIO_PUPDR_PUPD3; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<8, 0x3> GPIO_PUPDR_PUPD4; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<10, 0x3> GPIO_PUPDR_PUPD5; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<12, 0x3> GPIO_PUPDR_PUPD6; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<14, 0x3> GPIO_PUPDR_PUPD7; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<16, 0x3> GPIO_PUPDR_PUPD8; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<18, 0x3> GPIO_PUPDR_PUPD9; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<20, 0x3> GPIO_PUPDR_PUPD10; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<22, 0x3> GPIO_PUPDR_PUPD11; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<24, 0x3> GPIO_PUPDR_PUPD12; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<26, 0x3> GPIO_PUPDR_PUPD13; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<28, 0x3> GPIO_PUPDR_PUPD14; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down
    typedef bit_field_t<30, 0x3> GPIO_PUPDR_PUPD15; // [1:0]: Port x configuration bits (y = 0..15) These bits are written by software to configure the I/O pull-up or pull-down

    static constexpr uint32_t GPIO_IDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GPIO_IDR_ID0 = 0x1; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID1 = 0x2; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID2 = 0x4; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID3 = 0x8; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID4 = 0x10; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID5 = 0x20; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID6 = 0x40; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID7 = 0x80; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID8 = 0x100; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID9 = 0x200; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID10 = 0x400; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID11 = 0x800; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID12 = 0x1000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID13 = 0x2000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID14 = 0x4000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.
    static constexpr uint32_t GPIO_IDR_ID15 = 0x8000; // Port input data bit (y = 0..15) These bits are read-only. They contain the input value of the corresponding I/O port.

    static constexpr uint32_t GPIO_ODR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GPIO_ODR_OD0 = 0x1; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD1 = 0x2; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD2 = 0x4; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD3 = 0x8; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD4 = 0x10; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD5 = 0x20; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD6 = 0x40; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD7 = 0x80; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD8 = 0x100; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD9 = 0x200; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD10 = 0x400; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD11 = 0x800; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD12 = 0x1000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD13 = 0x2000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD14 = 0x4000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
    static constexpr uint32_t GPIO_ODR_OD15 = 0x8000; // Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).

    static constexpr uint32_t GPIO_BSRR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GPIO_BSRR_BS0 = 0x1; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS1 = 0x2; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS2 = 0x4; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS3 = 0x8; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS4 = 0x10; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS5 = 0x20; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS6 = 0x40; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS7 = 0x80; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS8 = 0x100; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS9 = 0x200; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS10 = 0x400; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS11 = 0x800; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS12 = 0x1000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS13 = 0x2000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS14 = 0x4000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BS15 = 0x8000; // Port x set bit y (y= 0..15) These bits are write-only. A read to these bits returns the value 0x0000.
    static constexpr uint32_t GPIO_BSRR_BR0 = 0x10000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR1 = 0x20000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR2 = 0x40000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR3 = 0x80000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR4 = 0x100000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR5 = 0x200000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR6 = 0x400000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR7 = 0x800000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR8 = 0x1000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR9 = 0x2000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR10 = 0x4000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR11 = 0x8000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR12 = 0x10000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR13 = 0x20000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR14 = 0x40000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
    static constexpr uint32_t GPIO_BSRR_BR15 = 0x80000000; // Port x reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.

    static constexpr uint32_t GPIO_LCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GPIO_LCKR_LCK0 = 0x1; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK1 = 0x2; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK2 = 0x4; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK3 = 0x8; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK4 = 0x10; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK5 = 0x20; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK6 = 0x40; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK7 = 0x80; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK8 = 0x100; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK9 = 0x200; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK10 = 0x400; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK11 = 0x800; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK12 = 0x1000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK13 = 0x2000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK14 = 0x4000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCK15 = 0x8000; // Port x lock bit y (y= 0..15) These bits are read/write but can only be written when the LCKK bit is 0.
    static constexpr uint32_t GPIO_LCKR_LCKK = 0x10000; // Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset.

    static constexpr uint32_t GPIO_AFRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> GPIO_AFRL_AFSEL0; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<4, 0xf> GPIO_AFRL_AFSEL1; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<8, 0xf> GPIO_AFRL_AFSEL2; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<12, 0xf> GPIO_AFRL_AFSEL3; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<16, 0xf> GPIO_AFRL_AFSEL4; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<20, 0xf> GPIO_AFRL_AFSEL5; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<24, 0xf> GPIO_AFRL_AFSEL6; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:
    typedef bit_field_t<28, 0xf> GPIO_AFRL_AFSEL7; // [3:0]: Alternate function selection for port x pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection:

    static constexpr uint32_t GPIO_AFRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> GPIO_AFRH_AFSEL8; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<4, 0xf> GPIO_AFRH_AFSEL9; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<8, 0xf> GPIO_AFRH_AFSEL10; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<12, 0xf> GPIO_AFRH_AFSEL11; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<16, 0xf> GPIO_AFRH_AFSEL12; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<20, 0xf> GPIO_AFRH_AFSEL13; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<24, 0xf> GPIO_AFRH_AFSEL14; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
    typedef bit_field_t<28, 0xf> GPIO_AFRH_AFSEL15; // [3:0]: Alternate function selection for port x pin y (y = 8..15) These bits are written by software to configure alternate function I/Os
};

template<>
struct peripheral_t<STM32H723, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h723_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOA>
{
    static constexpr periph_t P = GPIOA;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOB>
{
    static constexpr periph_t P = GPIOB;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOC>
{
    static constexpr periph_t P = GPIOC;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOD>
{
    static constexpr periph_t P = GPIOD;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOE>
{
    static constexpr periph_t P = GPIOE;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOF>
{
    static constexpr periph_t P = GPIOF;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOG>
{
    static constexpr periph_t P = GPIOG;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOH>
{
    static constexpr periph_t P = GPIOH;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOI>
{
    static constexpr periph_t P = GPIOI;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOJ>
{
    static constexpr periph_t P = GPIOJ;
    using T = stm32h750x_gpioa_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, GPIOK>
{
    static constexpr periph_t P = GPIOK;
    using T = stm32h750x_gpioa_t;
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
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOAEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOAEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOARST;
    }
};

template<> struct gpio_traits<1>
{
    using gpio = gpiob_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOBEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOBEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOBRST;
    }
};

template<> struct gpio_traits<2>
{
    using gpio = gpioc_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOCEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOCRST;
    }
};

template<> struct gpio_traits<3>
{
    using gpio = gpiod_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIODEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIODEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIODRST;
    }
};

template<> struct gpio_traits<4>
{
    using gpio = gpioe_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOEEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOEEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOERST;
    }
};

template<> struct gpio_traits<5>
{
    using gpio = gpiof_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOFEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOFEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOFRST;
    }
};

template<> struct gpio_traits<6>
{
    using gpio = gpiog_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOGEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOGEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOGRST;
    }
};

template<> struct gpio_traits<7>
{
    using gpio = gpioh_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOHEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOHEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOHRST;
    }
};

template<> struct gpio_traits<8>
{
    using gpio = gpioi_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOIEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOIEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOIRST;
    }
};

template<> struct gpio_traits<9>
{
    using gpio = gpioj_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOJEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOJEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOJRST;
    }
};

template<> struct gpio_traits<10>
{
    using gpio = gpiok_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_GPIOKEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_GPIOKEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_GPIOKRST;
    }
};
