#pragma once

////
//
//      STM32L0 DAC peripherals
//
///

// DAC: Digital-to-analog converter

struct stm32l0x2_dac_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SWTRIGR; // software trigger register
    volatile uint32_t DHR12R1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // channel1 12-bit left-aligned data holding register
    volatile uint32_t DHR8R1; // channel1 8-bit right-aligned data holding register
    volatile uint32_t DHR12R2; // channel2 12-bit right-aligned data holding register
    volatile uint32_t DHR12L2; // channel2 12-bit left-aligned data holding register
    volatile uint32_t DHR8R2; // channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // Dual DAC 12-bit left-aligned data holding register
    volatile uint32_t DHR8RD; // Dual DAC 8-bit right-aligned data holding register
    volatile uint32_t DOR1; // channel1 data output register
    volatile uint32_t DOR2; // channel2 data output register
    volatile uint32_t SR; // status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable
    typedef bit_field_t<3, 0x7> CR_TSEL1; // DAC channel1 trigger selection
    static constexpr uint32_t CR_TEN1 = 0x4; // DAC channel1 trigger enable
    static constexpr uint32_t CR_BOFF1 = 0x2; // DAC channel1 output buffer disable
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable
    static constexpr uint32_t CR_EN2 = 0x10000; // DAC channel2 enable
    static constexpr uint32_t CR_BOFF2 = 0x20000; // DAC channel2 output buffer disable
    static constexpr uint32_t CR_TEN2 = 0x40000; // DAC channel2 trigger enable
    typedef bit_field_t<19, 0x7> CR_TSEL2; // DAC channel2 trigger selection
    typedef bit_field_t<22, 0x3> CR_WAVE2; // DAC channel2 noise/triangle wave generation enable
    typedef bit_field_t<24, 0xf> CR_MAMP2; // DAC channel2 mask/amplitude selector
    static constexpr uint32_t CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRIGR_SWTRIG1 = 0x1; // DAC channel1 software trigger

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data
    typedef bit_field_t<16, 0xfff> DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data
    typedef bit_field_t<20, 0xfff> DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data
    typedef bit_field_t<8, 0xff> DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DAC channel1 data output

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR2_DACC2DOR; // DAC channel2 data output

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag
};

// DAC: Digital-to-analog converter

struct stm32l0x3_dac_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SWTRIGR; // software trigger register
    volatile uint32_t DHR12R1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // channel1 12-bit left-aligned data holding register
    volatile uint32_t DHR8R1; // channel1 8-bit right-aligned data holding register
    volatile uint32_t DHR12R2; // channel2 12-bit right-aligned data holding register
    volatile uint32_t DHR12L2; // channel2 12-bit left-aligned data holding register
    volatile uint32_t DHR8R2; // channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // Dual DAC 12-bit left-aligned data holding register
    volatile uint32_t DHR8RD; // Dual DAC 8-bit right-aligned data holding register
    volatile uint32_t DOR1; // channel1 data output register
    volatile uint32_t DOR2; // channel2 data output register
    volatile uint32_t SR; // status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable
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

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data
    typedef bit_field_t<16, 0xfff> DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data
    typedef bit_field_t<20, 0xfff> DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data
    typedef bit_field_t<8, 0xff> DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DAC channel1 data output

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR2_DACC2DOR; // DAC channel2 data output

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag
};

template<>
struct peripheral_t<STM32L0x2, DAC1>
{
    using T = stm32l0x2_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, DAC1>
{
    using T = stm32l0x3_dac_t;
    static T& V;
};

using dac1_t = peripheral_t<svd, DAC1>;
