#pragma once

////
//
//      STM32L4+ DAC peripherals
//
///

// DAC: Digital-to-analog converter

struct stm32l4p5_dac_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SWTRIGR; // software trigger register
    volatile uint32_t DHR12R1; // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // channel1 12-bit left-aligned data holding register
    volatile uint32_t DHR8R1; // channel1 8-bit right-aligned data holding register
    volatile uint32_t DHR12R2; // channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2; // channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2; // channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD; // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1; // channel1 data output register
    volatile uint32_t DOR2; // channel2 data output register
    volatile uint32_t SR; // status register
    volatile uint32_t CCR; // calibration control register
    volatile uint32_t MCR; // mode control register
    volatile uint32_t SHSR1; // Sample and Hold sample time register 1
    volatile uint32_t SHSR2; // Sample and Hold sample time register 2
    volatile uint32_t SHHR; // Sample and Hold hold time register
    volatile uint32_t SHRR; // Sample and Hold refresh time register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN1 = 0x1; // DAC channel1 enable
    static constexpr uint32_t CR_TEN1 = 0x4; // DAC channel1 trigger enable
    typedef bit_field_t<3, 0x7> CR_TSEL1; // DAC channel1 trigger selection
    typedef bit_field_t<6, 0x3> CR_WAVE1; // DAC channel1 noise/triangle wave generation enable
    typedef bit_field_t<8, 0xf> CR_MAMP1; // DAC channel1 mask/amplitude selector
    static constexpr uint32_t CR_DMAEN1 = 0x1000; // DAC channel1 DMA enable
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000; // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_CEN1 = 0x4000; // DAC Channel 1 calibration enable
    static constexpr uint32_t CR_EN2 = 0x10000; // DAC channel2 enable
    static constexpr uint32_t CR_TEN2 = 0x40000; // DAC channel2 trigger enable
    typedef bit_field_t<19, 0x7> CR_TSEL2; // DAC channel2 trigger selection
    typedef bit_field_t<22, 0x3> CR_WAVE2; // DAC channel2 noise/triangle wave generation enable
    typedef bit_field_t<24, 0xf> CR_MAMP2; // DAC channel2 mask/amplitude selector
    static constexpr uint32_t CR_DMAEN2 = 0x10000000; // DAC channel2 DMA enable
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable
    static constexpr uint32_t CR_CEN2 = 0x40000000; // DAC Channel 2 calibration enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWTRIGR_SWTRIG1 = 0x1; // DAC channel1 software trigger
    static constexpr uint32_t SWTRIGR_SWTRIG2 = 0x2; // DAC channel2 software trigger

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
    static constexpr uint32_t SR_CAL_FLAG1 = 0x4000; // DAC Channel 1 calibration offset status
    static constexpr uint32_t SR_BWST1 = 0x8000; // DAC Channel 1 busy writing sample time flag
    static constexpr uint32_t SR_DMAUDR2 = 0x20000000; // DAC channel2 DMA underrun flag
    static constexpr uint32_t SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status
    static constexpr uint32_t SR_BWST2 = 0x80000000; // DAC Channel 2 busy writing sample time flag

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_OTRIM1; // DAC Channel 1 offset trimming value
    typedef bit_field_t<16, 0x1f> CCR_OTRIM2; // DAC Channel 2 offset trimming value

    static constexpr uint32_t MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MCR_MODE1; // DAC Channel 1 mode
    typedef bit_field_t<16, 0x7> MCR_MODE2; // DAC Channel 2 mode

    static constexpr uint32_t SHSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR1_TSAMPLE1; // DAC Channel 1 sample Time

    static constexpr uint32_t SHSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SHSR2_TSAMPLE2; // DAC Channel 2 sample Time

    static constexpr uint32_t SHHR_RESET_VALUE = 0x10001; // Reset value
    typedef bit_field_t<0, 0x3ff> SHHR_THOLD1; // DAC Channel 1 hold Time
    typedef bit_field_t<16, 0x3ff> SHHR_THOLD2; // DAC Channel 2 hold time

    static constexpr uint32_t SHRR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> SHRR_TREFRESH1; // DAC Channel 1 refresh Time
    typedef bit_field_t<16, 0xff> SHRR_TREFRESH2; // DAC Channel 2 refresh Time
};

template<>
struct peripheral_t<STM32L4P5, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, DAC1>
{
    static constexpr periph_t P = DAC1;
    using T = stm32l4p5_dac_t;
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

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_DAC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_DAC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_DAC1RST;
    }
};
