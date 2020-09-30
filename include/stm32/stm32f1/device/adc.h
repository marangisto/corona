#pragma once

////
//
//      STM32F1 ADC peripherals
//
///

// ADC1: Analog to digital converter

struct stm32f100_adc1_t
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
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4; // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2; // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1; // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR2_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CR2_SWSTART = 0x400000; // Start conversion of regular channels
    static constexpr uint32_t CR2_JSWSTART = 0x200000; // Start conversion of injected channels
    static constexpr uint32_t CR2_EXTTRIG = 0x100000; // External trigger conversion mode for regular channels
    typedef bit_field_t<17, 0x7> CR2_EXTSEL; // External event select for regular group
    static constexpr uint32_t CR2_JEXTTRIG = 0x8000; // External trigger conversion mode for injected channels
    typedef bit_field_t<12, 0x7> CR2_JEXTSEL; // External event select for injected group
    static constexpr uint32_t CR2_ALIGN = 0x800; // Data alignment
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode
    static constexpr uint32_t CR2_RSTCAL = 0x8; // Reset calibration
    static constexpr uint32_t CR2_CAL = 0x4; // A/D calibration
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR1_SMP10; // Channel 10 sample time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP11; // Channel 11 sample time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP12; // Channel 12 sample time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP13; // Channel 13 sample time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP14; // Channel 14 sample time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP15; // Channel 15 sample time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP16; // Channel 16 sample time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP17; // Channel 17 sample time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR2_SMP0; // Channel 0 sample time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP1; // Channel 1 sample time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP2; // Channel 2 sample time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP3; // Channel 3 sample time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP4; // Channel 4 sample time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP5; // Channel 5 sample time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP6; // Channel 6 sample time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP7; // Channel 7 sample time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP8; // Channel 8 sample time selection
    typedef bit_field_t<27, 0x7> SMPR2_SMP9; // Channel 9 sample time selection

    static constexpr uint32_t JOFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR1_JOFFSET1; // Data offset for injected channel 1

    static constexpr uint32_t JOFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR2_JOFFSET2; // Data offset for injected channel 2

    static constexpr uint32_t JOFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR3_JOFFSET3; // Data offset for injected channel 3

    static constexpr uint32_t JOFR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> JOFR4_JOFFSET4; // Data offset for injected channel 4

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

// ADC1: Analog to digital converter

struct stm32f101_adc1_t
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
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4; // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2; // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1; // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_AWDEN = 0x800000; // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    typedef bit_field_t<16, 0xf> CR1_DUALMOD; // Dual mode selection
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
    static constexpr uint32_t CR2_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CR2_SWSTART = 0x400000; // Start conversion of regular channels
    static constexpr uint32_t CR2_JSWSTART = 0x200000; // Start conversion of injected channels
    static constexpr uint32_t CR2_EXTTRIG = 0x100000; // External trigger conversion mode for regular channels
    typedef bit_field_t<17, 0x7> CR2_EXTSEL; // External event select for regular group
    static constexpr uint32_t CR2_JEXTTRIG = 0x8000; // External trigger conversion mode for injected channels
    typedef bit_field_t<12, 0x7> CR2_JEXTSEL; // External event select for injected group
    static constexpr uint32_t CR2_ALIGN = 0x800; // Data alignment
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode
    static constexpr uint32_t CR2_RSTCAL = 0x8; // Reset calibration
    static constexpr uint32_t CR2_CAL = 0x4; // A/D calibration
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR1_SMP10; // Channel 10 sample time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP11; // Channel 11 sample time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP12; // Channel 12 sample time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP13; // Channel 13 sample time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP14; // Channel 14 sample time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP15; // Channel 15 sample time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP16; // Channel 16 sample time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP17; // Channel 17 sample time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR2_SMP0; // Channel 0 sample time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP1; // Channel 1 sample time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP2; // Channel 2 sample time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP3; // Channel 3 sample time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP4; // Channel 4 sample time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP5; // Channel 5 sample time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP6; // Channel 6 sample time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP7; // Channel 7 sample time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP8; // Channel 8 sample time selection
    typedef bit_field_t<27, 0x7> SMPR2_SMP9; // Channel 9 sample time selection

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

// ADC1: Analog to digital converter

struct stm32f103_adc1_t
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
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4; // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2; // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1; // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_AWDEN = 0x800000; // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    typedef bit_field_t<16, 0xf> CR1_DUALMOD; // Dual mode selection
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
    static constexpr uint32_t CR2_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CR2_SWSTART = 0x400000; // Start conversion of regular channels
    static constexpr uint32_t CR2_JSWSTART = 0x200000; // Start conversion of injected channels
    static constexpr uint32_t CR2_EXTTRIG = 0x100000; // External trigger conversion mode for regular channels
    typedef bit_field_t<17, 0x7> CR2_EXTSEL; // External event select for regular group
    static constexpr uint32_t CR2_JEXTTRIG = 0x8000; // External trigger conversion mode for injected channels
    typedef bit_field_t<12, 0x7> CR2_JEXTSEL; // External event select for injected group
    static constexpr uint32_t CR2_ALIGN = 0x800; // Data alignment
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode
    static constexpr uint32_t CR2_RSTCAL = 0x8; // Reset calibration
    static constexpr uint32_t CR2_CAL = 0x4; // A/D calibration
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR1_SMP10; // Channel 10 sample time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP11; // Channel 11 sample time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP12; // Channel 12 sample time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP13; // Channel 13 sample time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP14; // Channel 14 sample time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP15; // Channel 15 sample time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP16; // Channel 16 sample time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP17; // Channel 17 sample time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR2_SMP0; // Channel 0 sample time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP1; // Channel 1 sample time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP2; // Channel 2 sample time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP3; // Channel 3 sample time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP4; // Channel 4 sample time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP5; // Channel 5 sample time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP6; // Channel 6 sample time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP7; // Channel 7 sample time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP8; // Channel 8 sample time selection
    typedef bit_field_t<27, 0x7> SMPR2_SMP9; // Channel 9 sample time selection

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
    typedef bit_field_t<16, 0xffff> DR_ADC2DATA; // ADC2 data
};

// ADC2: Analog to digital converter

struct stm32f101_adc2_t
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
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4; // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2; // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1; // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_AWDEN = 0x800000; // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    typedef bit_field_t<16, 0xf> CR1_DUALMOD; // Dual mode selection
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
    static constexpr uint32_t CR2_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CR2_SWSTART = 0x400000; // Start conversion of regular channels
    static constexpr uint32_t CR2_JSWSTART = 0x200000; // Start conversion of injected channels
    static constexpr uint32_t CR2_EXTTRIG = 0x100000; // External trigger conversion mode for regular channels
    typedef bit_field_t<17, 0x7> CR2_EXTSEL; // External event select for regular group
    static constexpr uint32_t CR2_JEXTTRIG = 0x8000; // External trigger conversion mode for injected channels
    typedef bit_field_t<12, 0x7> CR2_JEXTSEL; // External event select for injected group
    static constexpr uint32_t CR2_ALIGN = 0x800; // Data alignment
    static constexpr uint32_t CR2_DMA = 0x100; // Direct memory access mode
    static constexpr uint32_t CR2_RSTCAL = 0x8; // Reset calibration
    static constexpr uint32_t CR2_CAL = 0x4; // A/D calibration
    static constexpr uint32_t CR2_CONT = 0x2; // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1; // A/D converter ON / OFF

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

template<>
struct peripheral_t<STM32F100, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f100_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f100_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f100_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f100_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f100_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f101_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f103_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f103_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32f101_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f101_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32f101_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f101_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32f101_adc2_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc2_t = peripheral_t<svd, ADC2>;
using adc3_t = peripheral_t<svd, ADC3>;

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

template<> struct adc_traits<2>
{
    using adc = adc2_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_ADC2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_ADC2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_ADC2RST;
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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_ADC3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_ADC3RST;
    }
};
