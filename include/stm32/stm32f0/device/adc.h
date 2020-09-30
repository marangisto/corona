#pragma once

////
//
//      STM32F0 ADC peripherals
//
///

// ADC: Analog-to-digital converter

struct stm32f0x0_adc_t
{
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t CR; // control register
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t CFGR2; // configuration register 2
    volatile uint32_t SMPR; // sampling time register
    reserved_t<0x2> _0x18;
    volatile uint32_t TR; // watchdog threshold register
    reserved_t<0x1> _0x24;
    volatile uint32_t CHSELR; // channel selection register
    reserved_t<0x5> _0x2c;
    volatile uint32_t DR; // data register
    reserved_t<0xb1> _0x44;
    volatile uint32_t CCR; // common configuration register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_AWD = 0x80; // Analog watchdog flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC overrun
    static constexpr uint32_t ISR_EOS = 0x8; // End of sequence flag
    static constexpr uint32_t ISR_EOC = 0x4; // End of conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // End of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_AWDIE = 0x80; // Analog watchdog interrupt enable
    static constexpr uint32_t IER_OVRIE = 0x10; // Overrun interrupt enable
    static constexpr uint32_t IER_EOSIE = 0x8; // End of conversion sequence interrupt enable
    static constexpr uint32_t IER_EOCIE = 0x4; // End of conversion interrupt enable
    static constexpr uint32_t IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt enable

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC stop conversion command
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC start conversion command
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable command
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable command

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> CFGR1_AWDCH; // Analog watchdog channel selection
    static constexpr uint32_t CFGR1_AWDEN = 0x800000; // Analog watchdog enable
    static constexpr uint32_t CFGR1_AWDSGL = 0x400000; // Enable the watchdog on a single channel or on all channels
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // Discontinuous mode
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // Auto-off mode
    static constexpr uint32_t CFGR1_AUTDLY = 0x4000; // Auto-delayed conversion mode
    static constexpr uint32_t CFGR1_CONT = 0x2000; // Single / continuous conversion mode
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // Overrun management mode
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // External trigger enable and polarity selection
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // External trigger selection
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // Data alignment
    typedef bit_field_t<3, 0x3> CFGR1_RES; // Data resolution
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // Scan sequence direction
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // Direct memery access configuration
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // Direct memory access enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CFGR2_JITOFF_D4 = 0x80000000; // JITOFF_D4
    static constexpr uint32_t CFGR2_JITOFF_D2 = 0x40000000; // JITOFF_D2

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMPR; // Sampling time selection


    static constexpr uint32_t TR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<16, 0xfff> TR_HT; // Analog watchdog higher threshold
    typedef bit_field_t<0, 0xfff> TR_LT; // Analog watchdog lower threshold


    static constexpr uint32_t CHSELR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CHSELR_CHSEL18 = 0x40000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL17 = 0x20000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL16 = 0x10000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL15 = 0x8000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL14 = 0x4000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL13 = 0x2000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL12 = 0x1000; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL11 = 0x800; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL10 = 0x400; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL9 = 0x200; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL8 = 0x100; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL7 = 0x80; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL6 = 0x40; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL5 = 0x20; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL4 = 0x10; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL3 = 0x8; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL2 = 0x4; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL1 = 0x2; // Channel-x selection
    static constexpr uint32_t CHSELR_CHSEL0 = 0x1; // Channel-x selection


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DATA; // Converted data


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VREFEN = 0x400000; // Temperature sensor and VREFINT enable
};

template<>
struct peripheral_t<STM32F0x0, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f0x0_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f0x0_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f0x0_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f0x0_adc_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
    static constexpr clock_source_t CS = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_ADC1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST;
    }
};
