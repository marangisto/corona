#pragma once

////
//
//      STM32F3 DAC2 peripherals
//
////

////
//
//      Digital-to-analog converter
//
////

struct stm32f301_dac2_t
{
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t SWTRIGR; // [write-only] software trigger register
    volatile uint32_t DHR12R1; // [read-write] channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // [read-write] DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1;  // [read-write] DAC channel1 8-bit right aligned data holding register
    reserved_t<0x6> _0x2c;
    volatile uint32_t DOR1;    // [read-only] DAC channel1 data output register
    reserved_t<0x1> _0x34;
    volatile uint32_t SR;      // [read-write] DAC status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000;    // DAC channel1 DMA enable
    static constexpr uint32_t CR_MAMP13 = 0x800;     // DAC channel1 mask/amplitude selector
    static constexpr uint32_t CR_MAMP12 = 0x400;     // MAMP12
    static constexpr uint32_t CR_MAMP11 = 0x200;     // MAMP11
    static constexpr uint32_t CR_MAMP10 = 0x100;     // MAMP10
    static constexpr uint32_t CR_WAVE1 = 0x80;       // DAC channel1 noise/triangle wave generation enable
    static constexpr uint32_t CR_WAVE2 = 0x40;       // WAVE2
    template<uint32_t X>
    static constexpr uint32_t CR_TSEL1 =             // DAC channel1 trigger selection
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t CR_TEN1 = 0x4;         // DAC channel1 trigger enable
    static constexpr uint32_t CR_BOFF1 = 0x2;        // DAC channel1 output buffer disable
    static constexpr uint32_t CR_EN1 = 0x1;          // DAC channel1 enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0;
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

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOR1_DACC1DOR =   // DAC channel1 data output
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag
};


template<>
struct peripheral_t<STM32F301, DAC2>
{
    typedef stm32f301_dac2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, DAC2>
{
    typedef stm32f301_dac2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, DAC2>
{
    typedef stm32f301_dac2_t T;
    static T& V;
};

using dac2_t = peripheral_t<mcu_svd, DAC2>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<2>
{
    using dac = dac2_t;
};

