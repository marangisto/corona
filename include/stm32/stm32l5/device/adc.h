#pragma once

////
//
//      STM32L5 ADC peripherals
//
///

// ADC: Analog-to-Digital Converter

struct stm32l552_adc_t
{
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t CR; // control register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t CFGR2; // configuration register
    volatile uint32_t SMPR1; // sample time register 1
    volatile uint32_t SMPR2; // sample time register 2
    reserved_t<0x1> _0x1c;
    volatile uint32_t TR1; // watchdog threshold register 1
    volatile uint32_t TR2; // watchdog threshold register
    volatile uint32_t TR3; // watchdog threshold register 3
    reserved_t<0x1> _0x2c;
    volatile uint32_t SQR1; // regular sequence register 1
    volatile uint32_t SQR2; // regular sequence register 2
    volatile uint32_t SQR3; // regular sequence register 3
    volatile uint32_t SQR4; // regular sequence register 4
    volatile uint32_t DR; // regular Data Register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // injected sequence register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // offset register 1
    volatile uint32_t OFR2; // offset register 2
    volatile uint32_t OFR3; // offset register 3
    volatile uint32_t OFR4; // offset register 4
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // injected data register 1
    volatile uint32_t JDR2; // injected data register 2
    volatile uint32_t JDR3; // injected data register 3
    volatile uint32_t JDR4; // injected data register 4
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // Analog Watchdog 2 Configuration Register
    volatile uint32_t AWD3CR; // Analog Watchdog 3 Configuration Register
    reserved_t<0x2> _0xa8;
    volatile uint32_t DIFSEL; // Differential Mode Selection Register 2
    volatile uint32_t CALFACT; // Calibration Factors

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // JQOVF
    static constexpr uint32_t ISR_AWD3 = 0x200; // AWD3
    static constexpr uint32_t ISR_AWD2 = 0x100; // AWD2
    static constexpr uint32_t ISR_AWD1 = 0x80; // AWD1
    static constexpr uint32_t ISR_JEOS = 0x40; // JEOS
    static constexpr uint32_t ISR_JEOC = 0x20; // JEOC
    static constexpr uint32_t ISR_OVR = 0x10; // OVR
    static constexpr uint32_t ISR_EOS = 0x8; // EOS
    static constexpr uint32_t ISR_EOC = 0x4; // EOC
    static constexpr uint32_t ISR_EOSMP = 0x2; // EOSMP
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADRDY

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // JQOVFIE
    static constexpr uint32_t IER_AWD3IE = 0x200; // AWD3IE
    static constexpr uint32_t IER_AWD2IE = 0x100; // AWD2IE
    static constexpr uint32_t IER_AWD1IE = 0x80; // AWD1IE
    static constexpr uint32_t IER_JEOSIE = 0x40; // JEOSIE
    static constexpr uint32_t IER_JEOCIE = 0x20; // JEOCIE
    static constexpr uint32_t IER_OVRIE = 0x10; // OVRIE
    static constexpr uint32_t IER_EOSIE = 0x8; // EOSIE
    static constexpr uint32_t IER_EOCIE = 0x4; // EOCIE
    static constexpr uint32_t IER_EOSMPIE = 0x2; // EOSMPIE
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADRDYIE

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADCAL
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADCALDIF
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // DEEPPWD
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADVREGEN
    static constexpr uint32_t CR_JADSTP = 0x20; // JADSTP
    static constexpr uint32_t CR_ADSTP = 0x10; // ADSTP
    static constexpr uint32_t CR_JADSTART = 0x8; // JADSTART
    static constexpr uint32_t CR_ADSTART = 0x4; // ADSTART
    static constexpr uint32_t CR_ADDIS = 0x2; // ADDIS
    static constexpr uint32_t CR_ADEN = 0x1; // ADEN

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // JQDIS
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // AWDCH1CH
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // JAUTO
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // JAWD1EN
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // AWD1EN
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // AWD1SGL
    static constexpr uint32_t CFGR_JQM = 0x200000; // JQM
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // JDISCEN
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // DISCNUM
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // DISCEN
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // AUTDLY
    static constexpr uint32_t CFGR_CONT = 0x2000; // CONT
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // OVRMOD
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // EXTEN
    typedef bit_field_t<6, 0xf> CFGR_EXTSEL; // EXTSEL
    static constexpr uint32_t CFGR_ALIGN = 0x20; // ALIGN
    typedef bit_field_t<3, 0x3> CFGR_RES; // RES
    static constexpr uint32_t CFGR_DMACFG = 0x2; // DMACFG
    static constexpr uint32_t CFGR_DMAEN = 0x1; // DMAEN

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // EXTEN
    static constexpr uint32_t CFGR2_TOVS = 0x200; // EXTSEL
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ALIGN
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // RES
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // DMACFG
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // DMAEN

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // SMP9
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // SMP8
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // SMP7
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // SMP6
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // SMP5
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // SMP4
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // SMP3
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // SMP2
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // SMP1
    typedef bit_field_t<0, 0x7> SMPR1_SMP0; // SMP0

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // SMP18
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // SMP17
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // SMP16
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // SMP15
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // SMP14
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // SMP13
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // SMP12
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // SMP11
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // SMP10


    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TR1_HT1; // HT1
    typedef bit_field_t<0, 0xfff> TR1_LT1; // LT1

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xff> TR2_HT2; // HT2
    typedef bit_field_t<0, 0xff> TR2_LT2; // LT2

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xff> TR3_HT3; // HT3
    typedef bit_field_t<0, 0xff> TR3_LT3; // LT3


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // SQ4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // SQ3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // SQ2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // SQ1
    typedef bit_field_t<0, 0xf> SQR1_L; // L

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // SQ9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // SQ8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // SQ7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // SQ6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // SQ5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // SQ14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // SQ13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // SQ12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // SQ11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // SQ10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // SQ16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // SQ15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // regularDATA


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> JSQR_JSQ4; // JSQ4
    typedef bit_field_t<20, 0x1f> JSQR_JSQ3; // JSQ3
    typedef bit_field_t<14, 0x1f> JSQR_JSQ2; // JSQ2
    typedef bit_field_t<8, 0x1f> JSQR_JSQ1; // JSQ1
    typedef bit_field_t<6, 0x3> JSQR_JEXTEN; // JEXTEN
    typedef bit_field_t<2, 0xf> JSQR_JEXTSEL; // JEXTSEL
    typedef bit_field_t<0, 0x3> JSQR_JL; // JL


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // OFFSET1_CH
    typedef bit_field_t<0, 0xfff> OFR1_OFFSET1; // OFFSET1

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // OFFSET2_EN
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET2_CH; // OFFSET2_CH
    typedef bit_field_t<0, 0xfff> OFR2_OFFSET2; // OFFSET2

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // OFFSET3_EN
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET3_CH; // OFFSET3_CH
    typedef bit_field_t<0, 0xfff> OFR3_OFFSET3; // OFFSET3

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // OFFSET4_EN
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET4_CH; // OFFSET4_CH
    typedef bit_field_t<0, 0xfff> OFR4_OFFSET4; // OFFSET4


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR1_JDATA; // JDATA1

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR2_JDATA; // JDATA2

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR3_JDATA; // JDATA3

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR4_JDATA; // JDATA4


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD2CR_AWD2CH; // AWD2CH

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD3CR_AWD3CH; // AWD3CH


    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1; // Differential mode for channel 0
    typedef bit_field_t<1, 0x7fff> DIFSEL_DIFSEL_1_15; // Differential mode for channels 15 to 1
    typedef bit_field_t<16, 0x7> DIFSEL_DIFSEL_16_18; // Differential mode for channels 18 to 16

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7f> CALFACT_CALFACT_D; // CALFACT_D
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT_S; // CALFACT_S
};

// ADC_COMMON: Analog-to-Digital Converter

struct stm32l552_adc_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // Common regular data register for dual mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ADDRDY_MST = 0x1; // ADDRDY_MST
    static constexpr uint32_t CSR_EOSMP_MST = 0x2; // EOSMP_MST
    static constexpr uint32_t CSR_EOC_MST = 0x4; // EOC_MST
    static constexpr uint32_t CSR_EOS_MST = 0x8; // EOS_MST
    static constexpr uint32_t CSR_OVR_MST = 0x10; // OVR_MST
    static constexpr uint32_t CSR_JEOC_MST = 0x20; // JEOC_MST
    static constexpr uint32_t CSR_JEOS_MST = 0x40; // JEOS_MST
    static constexpr uint32_t CSR_AWD1_MST = 0x80; // AWD1_MST
    static constexpr uint32_t CSR_AWD2_MST = 0x100; // AWD2_MST
    static constexpr uint32_t CSR_AWD3_MST = 0x200; // AWD3_MST
    static constexpr uint32_t CSR_JQOVF_MST = 0x400; // JQOVF_MST
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000; // ADRDY_SLV
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000; // EOSMP_SLV
    static constexpr uint32_t CSR_EOC_SLV = 0x40000; // EOC_SLV
    static constexpr uint32_t CSR_EOS_SLV = 0x80000; // EOS_SLV
    static constexpr uint32_t CSR_OVR_SLV = 0x100000; // OVR_SLV
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000; // JEOC_SLV
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000; // JEOS_SLV
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000; // AWD1_SLV
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000; // AWD2_SLV
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000; // AWD3_SLV
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // JQOVF_SLV


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_CH17SEL = 0x800000; // CH17SEL
    static constexpr uint32_t CCR_CH18SEL = 0x1000000; // CH18SEL
    typedef bit_field_t<14, 0x3> CCR_MDMA; // MDMA
    static constexpr uint32_t CCR_DMACFG = 0x2000; // DMACFG
    typedef bit_field_t<8, 0x7> CCR_DELAY; // DELAY
    typedef bit_field_t<0, 0x1f> CCR_DUAL; // DUAL

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CDR_RDATA_MST; // RDATA_MST
    typedef bit_field_t<16, 0xffff> CDR_RDATA_SLV; // RDATA_SLV
};

template<>
struct peripheral_t<STM32L552, ADC1>
{
    using T = stm32l552_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_ADC>
{
    using T = stm32l552_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, ADC1>
{
    using T = stm32l552_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_ADC>
{
    using T = stm32l552_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, ADC_COMMON>
{
    using T = stm32l552_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_ADC_COMMON>
{
    using T = stm32l552_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, ADC_COMMON>
{
    using T = stm32l552_adc_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_ADC_COMMON>
{
    using T = stm32l552_adc_common_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc_common_t = peripheral_t<svd, ADC_COMMON>;
using sec_adc_t = peripheral_t<svd, SEC_ADC>;
using sec_adc_common_t = peripheral_t<svd, SEC_ADC_COMMON>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_ADC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_ADC1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_ADC1RST;
    }
};
