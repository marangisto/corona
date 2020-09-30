#pragma once

////
//
//      STM32L1 ADC peripherals
//
///

// ADC: Analog-to-digital converter

struct stm32l100_adc_t
{
    volatile uint32_t SR; // status register
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMPR1; // sample time register 1
    volatile uint32_t SMPR2; // sample time register 2
    volatile uint32_t SMPR3; // sample time register 3
    volatile uint32_t JOFR1; // injected channel data offset register x
    volatile uint32_t JOFR2; // injected channel data offset register x
    volatile uint32_t JOFR3; // injected channel data offset register x
    volatile uint32_t JOFR4; // injected channel data offset register x
    volatile uint32_t HTR; // watchdog higher threshold register
    volatile uint32_t LTR; // watchdog lower threshold register
    volatile uint32_t SQR1; // regular sequence register 1
    volatile uint32_t SQR2; // regular sequence register 2
    volatile uint32_t SQR3; // regular sequence register 3
    volatile uint32_t SQR4; // regular sequence register 4
    volatile uint32_t SQR5; // regular sequence register 5
    volatile uint32_t JSQR; // injected sequence register
    volatile uint32_t JDR1; // injected data register x
    volatile uint32_t JDR2; // injected data register x
    volatile uint32_t JDR3; // injected data register x
    volatile uint32_t JDR4; // injected data register x
    volatile uint32_t DR; // regular data register
    volatile uint32_t SMPR0; // sample time register 0
    reserved_t<0xa8> _0x60;
    volatile uint32_t CSR; // ADC common status register
    volatile uint32_t CCR; // ADC common control register

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_JCNR = 0x200; // Injected channel not ready
    static constexpr uint32_t SR_RCNR = 0x100; // Regular channel not ready
    static constexpr uint32_t SR_ADONS = 0x40; // ADC ON status
    static constexpr uint32_t SR_OVR = 0x20; // Overrun
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4; // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2; // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1; // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_OVRIE = 0x4000000; // Overrun interrupt enable
    typedef bit_field_t<24, 0x3> CR1_RES; // Resolution
    static constexpr uint32_t CR1_AWDEN = 0x800000; // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    static constexpr uint32_t CR1_PDI = 0x20000; // Power down during the idle phase
    static constexpr uint32_t CR1_PDD = 0x10000; // Power down during the delay phase
    typedef bit_field_t<13, 0x7> CR1_DISCNUM; // Discontinuous mode channel count
    static constexpr uint32_t CR1_JDISCEN = 0x1000; // Discontinuous mode on injected channels
    static constexpr uint32_t CR1_DISCEN = 0x800; // Discontinuous mode on regular channels
    static constexpr uint32_t CR1_JAUTO = 0x400; // Automatic injected group conversion
    static constexpr uint32_t CR1_AWDSGL = 0x200; // Enable the watchdog on a single channel in scan mode
    static constexpr uint32_t CR1_SCAN = 0x100; // Scan mode
    static constexpr uint32_t CR1_JEOCIE = 0x80; // Interrupt enable for injected channels
    static constexpr uint32_t CR1_AWDIE = 0x40; // Analog watchdog interrupt enable
    static constexpr uint32_t CR1_EOCIE = 0x20; // Interrupt enable for EOC
    typedef bit_field_t<0, 0x1f> CR1_AWDCH; // Analog watchdog channel select bits

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SWSTART = 0x40000000; // Start conversion of regular channels
    typedef bit_field_t<28, 0x3> CR2_EXTEN; // External trigger enable for regular channels
    typedef bit_field_t<24, 0xf> CR2_EXTSEL; // External event select for regular group
    static constexpr uint32_t CR2_JSWSTART = 0x400000; // Start conversion of injected channels
    typedef bit_field_t<20, 0x3> CR2_JEXTEN; // External trigger enable for injected channels
    typedef bit_field_t<16, 0xf> CR2_JEXTSEL; // External event select for injected group
    static constexpr uint32_t CR2_ALIGN = 0x800; // Data alignment
    static constexpr uint32_t CR2_EOCS = 0x400; // End of conversion selection
    static constexpr uint32_t CR2_DDS = 0x200; // DMA disable selection
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode
    typedef bit_field_t<4, 0x7> CR2_DELS; // Delay selection
    static constexpr uint32_t CR2_ADC_CFG = 0x4; // ADC configuration
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D Converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> SMPR1_SMP; // Channel sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> SMPR2_SMP; // Channel sampling time selection

    static constexpr uint32_t SMPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> SMPR3_SMP; // Channel Sample time selection

    static constexpr uint32_t JOFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR1_JOFFSET1; // Data offset for injected channel x

    static constexpr uint32_t JOFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR2_JOFFSET2; // Data offset for injected channel x

    static constexpr uint32_t JOFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR3_JOFFSET3; // Data offset for injected channel x

    static constexpr uint32_t JOFR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR4_JOFFSET4; // Data offset for injected channel x

    static constexpr uint32_t HTR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> HTR_HT; // Analog watchdog higher threshold

    static constexpr uint32_t LTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> LTR_LT; // Analog watchdog lower threshold

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> SQR1_L; // Regular channel sequence length
    typedef bit_field_t<15, 0x1f> SQR1_SQ28; // 28th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR1_SQ27; // 27th conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR1_SQ26; // 26th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR1_SQ25; // 25th conversion in regular sequence

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR2_SQ24; // 24th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR2_SQ23; // 23rd conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR2_SQ22; // 22nd conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR2_SQ21; // 21st conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR2_SQ20; // 20th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR2_SQ19; // 19th conversion in regular sequence

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR3_SQ18; // 18th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR3_SQ17; // 17th conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR3_SQ16; // 16th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR3_SQ15; // 15th conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR3_SQ14; // 14th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR3_SQ13; // 13th conversion in regular sequence

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR4_SQ12; // 12th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR4_SQ11; // 11th conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR4_SQ10; // 10th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR4_SQ9; // 9th conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR4_SQ8; // 8th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR4_SQ7; // 7th conversion in regular sequence

    static constexpr uint32_t SQR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR5_SQ6; // 6th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR5_SQ5; // 5th conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR5_SQ4; // 4th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR5_SQ3; // 3rd conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR5_SQ2; // 2nd conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR5_SQ1; // 1st conversion in regular sequence

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> JSQR_JL; // Injected sequence length
    typedef bit_field_t<15, 0x1f> JSQR_JSQ4; // 4th conversion in injected sequence
    typedef bit_field_t<10, 0x1f> JSQR_JSQ3; // 3rd conversion in injected sequence
    typedef bit_field_t<5, 0x1f> JSQR_JSQ2; // 2nd conversion in injected sequence
    typedef bit_field_t<0, 0x1f> JSQR_JSQ1; // 1st conversion in injected sequence

    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR1_JDATA; // Injected data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR2_JDATA; // Injected data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR3_JDATA; // Injected data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR4_JDATA; // Injected data

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_REGULARDATA; // Regular data

    static constexpr uint32_t SMPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> SMPR0_SMP; // Channel Sample time selection


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_AWD1 = 0x1; // Analog watchdog flag of the ADC
    static constexpr uint32_t CSR_EOC1 = 0x2; // End of conversion of the ADC
    static constexpr uint32_t CSR_JEOC1 = 0x4; // Injected channel end of conversion of the ADC
    static constexpr uint32_t CSR_JSTRT1 = 0x8; // Injected channel Start flag of the ADC
    static constexpr uint32_t CSR_STRT1 = 0x10; // Regular channel Start flag of the ADC
    static constexpr uint32_t CSR_OVR1 = 0x20; // Overrun flag of the ADC
    static constexpr uint32_t CSR_ADONS1 = 0x40; // ADON Status of ADC1

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3> CCR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CCR_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
};

template<>
struct peripheral_t<STM32L100, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32l100_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32l100_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32l100_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32l100_adc_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

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
