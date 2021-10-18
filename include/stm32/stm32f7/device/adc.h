#pragma once

////
//
//      STM32F7 ADC peripherals
//
///

// ADC2: Analog-to-digital converter

struct stm32f722_adc2_t
{
    volatile uint32_t SR; // status register
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMPR1; // sample time register 1
    volatile uint32_t SMPR2; // sample time register 2
    volatile uint32_t JOFR1; // injected channel data offset register x
    volatile uint32_t JOFR2; // injected channel data offset register x
    volatile uint32_t JOFR3; // injected channel data offset register x
    volatile uint32_t JOFR4; // injected channel data offset register x
    volatile uint32_t HTR; // watchdog higher threshold register
    volatile uint32_t LTR; // watchdog lower threshold register
    volatile uint32_t SQR1; // regular sequence register 1
    volatile uint32_t SQR2; // regular sequence register 2
    volatile uint32_t SQR3; // regular sequence register 3
    volatile uint32_t JSQR; // injected sequence register
    volatile uint32_t JDR1; // injected data register x
    volatile uint32_t JDR2; // injected data register x
    volatile uint32_t JDR3; // injected data register x
    volatile uint32_t JDR4; // injected data register x
    volatile uint32_t DR; // regular data register

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR2_DDS = 0x200; // DMA disable selection (for single ADC mode)
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode (for single ADC mode)
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D Converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SMPR1_SMPX_X; // Sample time bits

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SMPR2_SMPX_X; // Sample time bits

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
    typedef bit_field_t<15, 0x1f> SQR1_SQ16; // 16th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR1_SQ15; // 15th conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR1_SQ14; // 14th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR1_SQ13; // 13th conversion in regular sequence

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR2_SQ12; // 12th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR2_SQ11; // 11th conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR2_SQ10; // 10th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR2_SQ9; // 9th conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR2_SQ8; // 8th conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR2_SQ7; // 7th conversion in regular sequence

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x1f> SQR3_SQ6; // 6th conversion in regular sequence
    typedef bit_field_t<20, 0x1f> SQR3_SQ5; // 5th conversion in regular sequence
    typedef bit_field_t<15, 0x1f> SQR3_SQ4; // 4th conversion in regular sequence
    typedef bit_field_t<10, 0x1f> SQR3_SQ3; // 3rd conversion in regular sequence
    typedef bit_field_t<5, 0x1f> SQR3_SQ2; // 2nd conversion in regular sequence
    typedef bit_field_t<0, 0x1f> SQR3_SQ1; // 1st conversion in regular sequence

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
    typedef bit_field_t<0, 0xffff> DR_DATA; // Regular data
};

// ADC_COMMON: Analog-to-Digital Converter

struct stm32f765_adc_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_AWD1 = 0x1; // AWD1
    static constexpr uint32_t CSR_EOC1 = 0x2; // EOC1
    static constexpr uint32_t CSR_JEOC1 = 0x4; // JEOC1
    static constexpr uint32_t CSR_JSTRT1 = 0x8; // JSTRT1
    static constexpr uint32_t CSR_STRT1 = 0x10; // STRT1
    static constexpr uint32_t CSR_OVR1 = 0x20; // OVR1
    static constexpr uint32_t CSR_AWD2 = 0x100; // AWD2
    static constexpr uint32_t CSR_EOC2 = 0x200; // EOC2
    static constexpr uint32_t CSR_JEOC2 = 0x400; // JEOC2
    static constexpr uint32_t CSR_JSTRT2 = 0x800; // JSTRT2
    static constexpr uint32_t CSR_STRT2 = 0x1000; // STRT2
    static constexpr uint32_t CSR_OVR2 = 0x2000; // OVR2
    static constexpr uint32_t CSR_AWD3 = 0x10000; // AWD3
    static constexpr uint32_t CSR_EOC3 = 0x20000; // EOC3
    static constexpr uint32_t CSR_JEOC3 = 0x40000; // JEOC3
    static constexpr uint32_t CSR_JSTRT3 = 0x80000; // JSTRT3
    static constexpr uint32_t CSR_STRT3 = 0x100000; // STRT3
    static constexpr uint32_t CSR_OVR3 = 0x200000; // OVR3

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_MULTI; // MULTI
    typedef bit_field_t<8, 0xf> CCR_DELAY; // DELAY
    static constexpr uint32_t CCR_DDS = 0x2000; // DDS
    typedef bit_field_t<14, 0x3> CCR_DMA; // DMA
    typedef bit_field_t<16, 0x3> CCR_ADCPRE; // ADCPRE
    static constexpr uint32_t CCR_VBATE = 0x400000; // VBATE
    static constexpr uint32_t CCR_TSVREFE = 0x800000; // TSVREFE

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CDR_DATA1; // DATA1
    typedef bit_field_t<16, 0xffff> CDR_DATA2; // DATA2
};

// C_ADC: Common ADC registers

struct stm32f722_c_adc_t
{
    volatile uint32_t CSR; // ADC Common status register
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_OVR3 = 0x200000; // Overrun flag of ADC3
    static constexpr uint32_t CSR_STRT3 = 0x100000; // Regular channel Start flag of ADC 3
    static constexpr uint32_t CSR_JSTRT3 = 0x80000; // Injected channel Start flag of ADC 3
    static constexpr uint32_t CSR_JEOC3 = 0x40000; // Injected channel end of conversion of ADC 3
    static constexpr uint32_t CSR_EOC3 = 0x20000; // End of conversion of ADC 3
    static constexpr uint32_t CSR_AWD3 = 0x10000; // Analog watchdog flag of ADC 3
    static constexpr uint32_t CSR_OVR2 = 0x2000; // Overrun flag of ADC 2
    static constexpr uint32_t CSR_STRT2 = 0x1000; // Regular channel Start flag of ADC 2
    static constexpr uint32_t CSR_JSTRT2 = 0x800; // Injected channel Start flag of ADC 2
    static constexpr uint32_t CSR_JEOC2 = 0x400; // Injected channel end of conversion of ADC 2
    static constexpr uint32_t CSR_EOC2 = 0x200; // End of conversion of ADC 2
    static constexpr uint32_t CSR_AWD2 = 0x100; // Analog watchdog flag of ADC 2
    static constexpr uint32_t CSR_OVR1 = 0x20; // Overrun flag of ADC 1
    static constexpr uint32_t CSR_STRT1 = 0x10; // Regular channel Start flag of ADC 1
    static constexpr uint32_t CSR_JSTRT1 = 0x8; // Injected channel Start flag of ADC 1
    static constexpr uint32_t CSR_JEOC1 = 0x4; // Injected channel end of conversion of ADC 1
    static constexpr uint32_t CSR_EOC1 = 0x2; // End of conversion of ADC 1
    static constexpr uint32_t CSR_AWD1 = 0x1; // Analog watchdog flag of ADC 1

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CCR_VBATE = 0x400000; // VBAT enable
    typedef bit_field_t<16, 0x3> CCR_ADCPRE; // ADC prescaler
    typedef bit_field_t<14, 0x3> CCR_DMA; // Direct memory access mode for multi ADC mode
    static constexpr uint32_t CCR_DDS = 0x2000; // DMA disable selection for multi-ADC mode
    typedef bit_field_t<8, 0xf> CCR_DELAY; // Delay between 2 sampling phases
    typedef bit_field_t<0, 0x1f> CCR_MULT; // Multi ADC mode selection

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CDR_DATA2; // 2nd data item of a pair of regular conversions
    typedef bit_field_t<0, 0xffff> CDR_DATA1; // 1st data item of a pair of regular conversions
};

template<>
struct peripheral_t<STM32F722, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f722_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC_COMMON>
{
    static constexpr periph_t P = ADC_COMMON;
    using T = stm32f765_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, C_ADC>
{
    static constexpr periph_t P = C_ADC;
    using T = stm32f722_c_adc_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc2_t = peripheral_t<svd, ADC2>;
using adc3_t = peripheral_t<svd, ADC3>;
using adc_common_t = peripheral_t<svd, ADC_COMMON>;
using c_adc_t = peripheral_t<svd, C_ADC>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_ADC1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

template<> struct adc_traits<2>
{
    using adc = adc2_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN;
    }
};

template<> struct adc_traits<3>
{
    using adc = adc3_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_ADC3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN;
    }
};

template<> struct adc_traits<123>
{
    using adc = adc_common_t;
};
