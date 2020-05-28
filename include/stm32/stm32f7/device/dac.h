#pragma once

////
//
//      STM32F7 DAC peripherals
//
////

////
//
//      Digital-to-analog converter
//
////

struct stm32f722_dac1_t
{
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t SWTRIGR; // [write-only] software trigger register
    volatile uint32_t DHR12R1; // [read-write] channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // [read-write] channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1;  // [read-write] channel1 8-bit right aligned data holding register
    volatile uint32_t DHR12R2; // [read-write] channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2; // [read-write] channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2;  // [read-write] channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // [read-write] Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // [read-write] DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD;  // [read-write] DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1;    // [read-only] channel1 data output register
    volatile uint32_t DOR2;    // [read-only] channel2 data output register
    volatile uint32_t SR;      // [read-write] status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable
    static constexpr uint32_t CR_DMAEN2 = 0x10000000;    // DAC channel2 DMA enable
    template<uint32_t X>
    static constexpr uint32_t CR_MAMP2 =                 // DAC channel2 mask/amplitude selector
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_WAVE2 =                 // DAC channel2 noise/triangle wave generation enable
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_TSEL2 =                 // DAC channel2 trigger selection
        bit_field_t<19, 0x7>::value<X>();
    static constexpr uint32_t CR_TEN2 = 0x40000;         // DAC channel2 trigger enable
    static constexpr uint32_t CR_BOFF2 = 0x20000;        // DAC channel2 output buffer disable
    static constexpr uint32_t CR_EN2 = 0x10000;          // DAC channel2 enable
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000;     // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000;        // DAC channel1 DMA enable
    template<uint32_t X>
    static constexpr uint32_t CR_MAMP1 =                 // DAC channel1 mask/amplitude selector
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_WAVE1 =                 // DAC channel1 noise/triangle wave generation enable
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_TSEL1 =                 // DAC channel1 trigger selection
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t CR_TEN1 = 0x4;             // DAC channel1 trigger enable
    static constexpr uint32_t CR_BOFF1 = 0x2;            // DAC channel1 output buffer disable
    static constexpr uint32_t CR_EN1 = 0x1;              // DAC channel1 enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0;
    static constexpr uint32_t SWTRIGR_SWTRIG2 = 0x2; // DAC channel2 software trigger
    static constexpr uint32_t SWTRIGR_SWTRIG1 = 0x1; // DAC channel1 software trigger

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12R1_DACC1DHR =   // DAC channel1 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12L1_DACC1DHR =   // DAC channel1 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8R1_DACC1DHR =   // DAC channel1 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12R2_DACC2DHR =   // DAC channel2 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12L2_DACC2DHR =   // DAC channel2 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8R2_DACC2DHR =   // DAC channel2 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12RD_DACC2DHR =   // DAC channel2 12-bit right-aligned data
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR12RD_DACC1DHR =   // DAC channel1 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12LD_DACC2DHR =   // DAC channel2 12-bit left-aligned data
        bit_field_t<20, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR12LD_DACC1DHR =   // DAC channel1 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8RD_DACC2DHR =   // DAC channel2 8-bit right-aligned data
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR8RD_DACC1DHR =   // DAC channel1 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOR1_DACC1DOR =   // DAC channel1 data output
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOR2_DACC2DOR =   // DAC channel2 data output
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag
    static constexpr uint32_t SR_DMAUDR1 = 0x2000;     // DAC channel1 DMA underrun flag
};


template<>
struct peripheral_t<STM32F722, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, DAC1>
{
    typedef stm32f722_dac1_t T;
    static T& V;
};

using dac1_t = peripheral_t<mcu_svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
};

