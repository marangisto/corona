#pragma once

////
//
//      STM32U5 DAC peripherals
//
///

// DAC1: Digital-to-analog converter

struct stm32u5xx_dac1_t
{
    volatile uint32_t DAC_CR; // DAC control register
    volatile uint32_t DAC_SWTRGR; // DAC software trigger register
    volatile uint32_t DAC_DHR12R1; // DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12L1; // DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R1; // DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DAC_DHR12R2; // DAC channel2 12-bit right aligned data holding register
    volatile uint32_t DAC_DHR12L2; // DAC channel2 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R2; // DAC channel2 8-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12LD; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8RD; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DAC_DOR1; // DAC channel1 data output register
    volatile uint32_t DAC_DOR2; // DAC channel2 data output register
    volatile uint32_t DAC_SR; // DAC status register
    volatile uint32_t DAC_CCR; // DAC calibration control register
    volatile uint32_t DAC_MCR; // DAC mode control register
    volatile uint32_t DAC_SHSR1; // DAC Sample and Hold sample time register 1
    volatile uint32_t DAC_SHSR2; // DAC channel2 sample and hold sample time register
    volatile uint32_t DAC_SHHR; // DAC Sample and Hold hold time register
    volatile uint32_t DAC_SHRR; // DAC Sample and Hold refresh time register
    reserved_t<0x1> _0x50;
    volatile uint32_t DAC_AUTOCR; // Autonomous mode control register

    static constexpr uint32_t DAC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_CR_EN1 = 0x1; // DAC channel1 enable
    static constexpr uint32_t DAC_CR_TEN1 = 0x2; // DAC channel1 trigger enable
    typedef bit_field_t<2, 0xf> DAC_CR_TSEL1; // DAC channel1 trigger selection
    typedef bit_field_t<6, 0x3> DAC_CR_WAVE1; // DAC channel1 noise/triangle wave generation enable
    typedef bit_field_t<8, 0xf> DAC_CR_MAMP1; // DAC channel1 mask/amplitude selector
    static constexpr uint32_t DAC_CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    static constexpr uint32_t DAC_CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t DAC_CR_CEN1 = 0x4000; // DAC channel1 calibration enable
    static constexpr uint32_t DAC_CR_EN2 = 0x10000; // DAC channel2 enable
    static constexpr uint32_t DAC_CR_TEN2 = 0x20000; // DAC channel2 trigger enable
    typedef bit_field_t<18, 0xf> DAC_CR_TSEL2; // DAC channel2 trigger selection
    typedef bit_field_t<22, 0x3> DAC_CR_WAVE2; // DAC channel2 noise/triangle wave generation enable
    typedef bit_field_t<24, 0xf> DAC_CR_MAMP2; // DAC channel2 mask/amplitude selector
    static constexpr uint32_t DAC_CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable
    static constexpr uint32_t DAC_CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable
    static constexpr uint32_t DAC_CR_CEN2 = 0x40000000; // DAC channel2 calibration enable

    static constexpr uint32_t DAC_SWTRGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger
    static constexpr uint32_t DAC_SWTRGR_SWTRIG2 = 0x2; // DAC channel2 software trigger

    static constexpr uint32_t DAC_DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data
    typedef bit_field_t<16, 0xfff> DAC_DHR12R1_DACC1DHRB; // DAC channel1 12-bit right-aligned data B

    static constexpr uint32_t DAC_DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data
    typedef bit_field_t<20, 0xfff> DAC_DHR12L1_DACC1DHRB; // DAC channel1 12-bit left-aligned data B

    static constexpr uint32_t DAC_DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data
    typedef bit_field_t<8, 0xff> DAC_DHR8R1_DACC1DHRB; // DAC channel1 8-bit right-aligned Sdata

    static constexpr uint32_t DAC_DHR12R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12R2_DACC2DHR; // DAC channel2 12-bit right-aligned data
    typedef bit_field_t<16, 0xfff> DAC_DHR12R2_DACC2DHRB; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DAC_DHR12L2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12L2_DACC2DHR; // DAC channel2 12-bit left-aligned data
    typedef bit_field_t<20, 0xfff> DAC_DHR12L2_DACC2DHRB; // DAC channel2 12-bit left-aligned data B

    static constexpr uint32_t DAC_DHR8R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8R2_DACC2DHR; // DAC channel2 8-bit right-aligned data
    typedef bit_field_t<8, 0xff> DAC_DHR8R2_DACC2DHRB; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DAC_DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data
    typedef bit_field_t<16, 0xfff> DAC_DHR12RD_DACC2DHR; // DAC channel2 12-bit right-aligned data

    static constexpr uint32_t DAC_DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DAC_DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data
    typedef bit_field_t<20, 0xfff> DAC_DHR12LD_DACC2DHR; // DAC channel2 12-bit left-aligned data

    static constexpr uint32_t DAC_DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DAC_DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data
    typedef bit_field_t<8, 0xff> DAC_DHR8RD_DACC2DHR; // DAC channel2 8-bit right-aligned data

    static constexpr uint32_t DAC_DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DOR1_DACC1DOR; // DAC channel1 data output
    typedef bit_field_t<16, 0xfff> DAC_DOR1_DACC1DORB; // DAC channel1 data output

    static constexpr uint32_t DAC_DOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DAC_DOR2_DACC2DOR; // DAC channel2 data output
    typedef bit_field_t<16, 0xfff> DAC_DOR2_DACC2DORB; // DAC channel2 data output

    static constexpr uint32_t DAC_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_SR_DAC1RDY = 0x800; // DAC channel1 ready status bit
    static constexpr uint32_t DAC_SR_DORSTAT1 = 0x1000; // DAC channel1 output register status bit
    static constexpr uint32_t DAC_SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag
    static constexpr uint32_t DAC_SR_CAL_FLAG1 = 0x4000; // DAC Channel 1 calibration offset status
    static constexpr uint32_t DAC_SR_BWST1 = 0x8000; // DAC Channel 1 busy writing sample time flag
    static constexpr uint32_t DAC_SR_DAC2RDY = 0x8000000; // DAC channel 2 ready status bit
    static constexpr uint32_t DAC_SR_DORSTAT2 = 0x10000000; // DAC channel 2 output register status bit
    static constexpr uint32_t DAC_SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag
    static constexpr uint32_t DAC_SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status
    static constexpr uint32_t DAC_SR_BWST2 = 0x80000000; // DAC Channel 2 busy writing sample time flag

    static constexpr uint32_t DAC_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DAC_CCR_OTRIM1; // DAC Channel 1 offset trimming value
    typedef bit_field_t<16, 0x1f> DAC_CCR_OTRIM2; // DAC Channel 2 offset trimming value

    static constexpr uint32_t DAC_MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DAC_MCR_MODE1; // DAC Channel 1 mode
    static constexpr uint32_t DAC_MCR_DMADOUBLE1 = 0x100; // DAC Channel1 DMA double data mode
    static constexpr uint32_t DAC_MCR_SINFORMAT1 = 0x200; // Enable signed format for DAC channel1
    typedef bit_field_t<14, 0x3> DAC_MCR_HFSEL; // High frequency interface mode selection
    typedef bit_field_t<16, 0x7> DAC_MCR_MODE2; // DAC Channel 2 mode
    static constexpr uint32_t DAC_MCR_DMADOUBLE2 = 0x1000000; // DAC Channel2 DMA double data mode
    static constexpr uint32_t DAC_MCR_SINFORMAT2 = 0x2000000; // Enable signed format for DAC channel2

    static constexpr uint32_t DAC_SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHSR1_TSAMPLE1; // DAC Channel 1 sample Time (only valid in sample &amp;amp; hold mode)

    static constexpr uint32_t DAC_SHSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHSR2_TSAMPLE2; // DAC Channel 2 sample Time (only valid in sample and hold mode)

    static constexpr uint32_t DAC_SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> DAC_SHHR_THOLD1; // DAC Channel 1 hold Time (only valid in sample and hold mode)
    typedef bit_field_t<16, 0x3ff> DAC_SHHR_THOLD2; // DAC Channel 2 hold time (only valid in sample and hold mode)

    static constexpr uint32_t DAC_SHRR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0xff> DAC_SHRR_TREFRESH1; // DAC Channel 1 refresh Time (only valid in sample and hold mode)
    typedef bit_field_t<16, 0xff> DAC_SHRR_TREFRESH2; // DAC Channel 2 refresh Time (only valid in sample and hold mode)


    static constexpr uint32_t DAC_AUTOCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DAC_AUTOCR_AUTOMODE = 0x400000; // DAC Autonomous mode
};

template<>
struct peripheral_t<STM32U5xx, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32u5xx_dac1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DAC1>
{
    static constexpr periph_t P = SEC_DAC1;
    using T = stm32u5xx_dac1_t;
    static T& V;
};

using dac1_t = peripheral_t<svd, DAC1>;
using sec_dac1_t = peripheral_t<svd, SEC_DAC1>;
