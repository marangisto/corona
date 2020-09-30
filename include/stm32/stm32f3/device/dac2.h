#pragma once

////
//
//      STM32F3 DAC2 peripherals
//
///

// DAC2: Digital-to-analog converter

struct stm32f301_dac2_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SWTRIGR; // software trigger register
    volatile uint32_t DHR12R1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1; // DAC channel1 8-bit right aligned data holding register
    reserved_t<0x6> _0x14;
    volatile uint32_t DOR1; // DAC channel1 data output register
    reserved_t<0x1> _0x30;
    volatile uint32_t SR; // DAC status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    static constexpr uint32_t CR_MAMP13 = 0x800; // DAC channel1 mask/amplitude selector
    static constexpr uint32_t CR_MAMP12 = 0x400; // MAMP12
    static constexpr uint32_t CR_MAMP11 = 0x200; // MAMP11
    static constexpr uint32_t CR_MAMP10 = 0x100; // MAMP10
    static constexpr uint32_t CR_WAVE1 = 0x80; // DAC channel1 noise/triangle wave generation enable
    static constexpr uint32_t CR_WAVE2 = 0x40; // WAVE2
    typedef bit_field_t<3, 0x7> CR_TSEL1; // DAC channel1 trigger selection
    static constexpr uint32_t CR_TEN1 = 0x4; // DAC channel1 trigger enable
    static constexpr uint32_t CR_BOFF1 = 0x2; // DAC channel1 output buffer disable
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRIGR_SWTRIG1 = 0x1; // DAC channel1 software trigger

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data


    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DAC channel1 data output


    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag
};

template<>
struct peripheral_t<STM32F301, DAC2>
{
    static constexpr periph_t P = DAC2;
    using T = stm32f301_dac2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, DAC2>
{
    static constexpr periph_t P = DAC2;
    using T = stm32f301_dac2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, DAC2>
{
    static constexpr periph_t P = DAC2;
    using T = stm32f301_dac2_t;
    static T& V;
};

using dac2_t = peripheral_t<svd, DAC2>;

template<int INST> struct dac2_traits {};

template<> struct dac2_traits<2>
{
    using dac2 = dac2_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_DAC2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_DAC2EN;
    }
};
