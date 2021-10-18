#pragma once

////
//
//      STM32WL DAC peripherals
//
///

// DAC: Digital-to-analog converter

struct stm32wl5x_cm0p_dac_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SWTRGR; // software trigger register
    volatile uint32_t DHR12R1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1; // channel1 8-bit right aligned data holding register
    reserved_t<0x3> _0x14;
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // Dual DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD; // Dual DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1; // DAC channel1 data output register
    reserved_t<0x1> _0x30;
    volatile uint32_t SR; // status register
    volatile uint32_t CCR; // calibration control register
    volatile uint32_t MCR; // mode control register
    volatile uint32_t SHSR1; // Sample and Hold sample time register 1
    reserved_t<0x1> _0x44;
    volatile uint32_t SHHR; // Sample and Hold hold time register
    volatile uint32_t SHRR; // Sample and Hold refresh time register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_CEN1 = 0x4000; // DAC Channel 1 calibration enable
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable
    static constexpr uint32_t CR_TSEL13 = 0x20; // DAC channel1 trigger selection
    static constexpr uint32_t CR_TSEL12 = 0x10; // TSEL12
    static constexpr uint32_t CR_TSEL11 = 0x8; // TSEL11
    static constexpr uint32_t CR_TSEL10 = 0x4; // TSEL10
    static constexpr uint32_t CR_TEN1 = 0x2; // DAC channel1 trigger enable
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable

    static constexpr uint32_t SWTRGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12R1_DACC1DHR; // DAC channel1 12-bit right-aligned data

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12L1_DACC1DHR; // DAC channel1 12-bit left-aligned data

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8R1_DACC1DHR; // DAC channel1 8-bit right-aligned data


    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DHR12RD_DACC1DHR; // DAC channel1 12-bit right-aligned data

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> DHR12LD_DACC1DHR; // DAC channel1 12-bit left-aligned data

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DHR8RD_DACC1DHR; // DAC channel1 8-bit right-aligned data

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DOR1_DACC1DOR; // DACC1DOR


    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_BWST1 = 0x8000; // DAC Channel 1 busy writing sample time flag
    static constexpr uint32_t SR_CAL_FLAG1 = 0x4000; // DAC Channel 1 calibration offset status
    static constexpr uint32_t SR_DMAUDR1 = 0x2000; // DAC channel1 DMA underrun flag

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_OTRIM1; // DAC Channel 1 offset trimming value

    static constexpr uint32_t MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MCR_MODE1; // DAC Channel 1 mode

    static constexpr uint32_t SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR1_TSAMPLE1; // DAC Channel 1 sample Time (only valid in Sample and Hold mode)


    static constexpr uint32_t SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> SHHR_THOLD1; // DAC Channel 1 hold Time (only valid in Sample and Hold mode)

    static constexpr uint32_t SHRR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0xff> SHRR_TREFRESH1; // DAC Channel 1 refresh Time (only valid in Sample and Hold mode)
};

template<>
struct peripheral_t<STM32WL5x_CM0P, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32wl5x_cm0p_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32wl5x_cm0p_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32wl5x_cm0p_dac_t;
    static T& V;
};

using dac1_t = peripheral_t<svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_DAC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_DAC1EN;
    }
};

template<> struct dma_request_t<DAC, DAC_OUT1>
{
    static constexpr unsigned ID = 7;
};
