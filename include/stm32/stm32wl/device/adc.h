#pragma once

////
//
//      STM32WL ADC peripherals
//
///

// ADC: Analog to digital convertor

struct stm32wl5x_cm0p_adc_t
{
    volatile uint32_t ADC_ISR; // ADC interrupt and status register
    volatile uint32_t ADC_IER; // ADC interrupt enable register
    volatile uint32_t ADC_CR; // ADC control register
    volatile uint32_t ADC_CFGR1; // ADC configuration register 1
    volatile uint32_t ADC_CFGR2; // ADC configuration register 2
    volatile uint32_t ADC_SMPR; // ADC sampling time register
    reserved_t<0x2> _0x18;
    volatile uint32_t ADC_AWD1TR; // ADC watchdog threshold register
    volatile uint32_t ADC_AWD2TR; // ADC watchdog threshold register
    volatile uint32_t ADC_CHSELR0; // channel selection register
    volatile uint32_t ADC_AWD3TR; // ADC watchdog threshold register
    reserved_t<0x4> _0x30;
    volatile uint32_t ADC_DR; // ADC data register
    reserved_t<0x17> _0x44;
    volatile uint32_t ADC_AWD2CR; // ADC Analog Watchdog 2 Configuration register
    volatile uint32_t ADC_AWD3CR; // ADC Analog Watchdog 3 Configuration register
    reserved_t<0x3> _0xa8;
    volatile uint32_t ADC_CALFACT; // ADC Calibration factor
    reserved_t<0x94> _0xb8;
    volatile uint32_t ADC_CCR; // ADC common configuration register

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1; // ADRDY
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2; // EOSMP
    static constexpr uint32_t ADC_ISR_EOC = 0x4; // EOC
    static constexpr uint32_t ADC_ISR_EOS = 0x8; // EOS
    static constexpr uint32_t ADC_ISR_OVR = 0x10; // OVR
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80; // AWD1
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100; // AWD2
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200; // AWD3
    static constexpr uint32_t ADC_ISR_EOCAL = 0x800; // EOCAL
    static constexpr uint32_t ADC_ISR_CCRDY = 0x2000; // CCRDY

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1; // ADRDYIE
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2; // EOSMPIE
    static constexpr uint32_t ADC_IER_EOCIE = 0x4; // EOCIE
    static constexpr uint32_t ADC_IER_EOSIE = 0x8; // EOSIE
    static constexpr uint32_t ADC_IER_OVRIE = 0x10; // OVRIE
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80; // AWD1IE
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100; // AWD2IE
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200; // AWD3IE
    static constexpr uint32_t ADC_IER_EOCALIE = 0x800; // EOCALIE
    static constexpr uint32_t ADC_IER_CCRDYIE = 0x2000; // CCRDYIE

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CR_ADEN = 0x1; // ADEN
    static constexpr uint32_t ADC_CR_ADDIS = 0x2; // ADDIS
    static constexpr uint32_t ADC_CR_ADSTART = 0x4; // ADSTART
    static constexpr uint32_t ADC_CR_ADSTP = 0x10; // ADSTP
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000; // ADVREGEN
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000; // ADCAL

    static constexpr uint32_t ADC_CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR1_DMAEN = 0x1; // DMAEN
    static constexpr uint32_t ADC_CFGR1_DMACFG = 0x2; // DMACFG
    static constexpr uint32_t ADC_CFGR1_SCANDIR = 0x4; // SCANDIR
    typedef bit_field_t<3, 0x3> ADC_CFGR1_RES; // RES
    static constexpr uint32_t ADC_CFGR1_ALIGN = 0x20; // ALIGN
    typedef bit_field_t<6, 0x7> ADC_CFGR1_EXTSEL; // EXTSEL
    typedef bit_field_t<10, 0x3> ADC_CFGR1_EXTEN; // EXTEN
    static constexpr uint32_t ADC_CFGR1_OVRMOD = 0x1000; // OVRMOD
    static constexpr uint32_t ADC_CFGR1_CONT = 0x2000; // CONT
    static constexpr uint32_t ADC_CFGR1_WAIT = 0x4000; // WAIT
    static constexpr uint32_t ADC_CFGR1_AUTOFF = 0x8000; // AUTOFF
    static constexpr uint32_t ADC_CFGR1_DISCEN = 0x10000; // DISCEN
    static constexpr uint32_t ADC_CFGR1_CHSELRMOD = 0x200000; // CHSELRMOD
    static constexpr uint32_t ADC_CFGR1_AWD1SGL = 0x400000; // AWD1SGL
    static constexpr uint32_t ADC_CFGR1_AWD1EN = 0x800000; // AWD1EN
    typedef bit_field_t<26, 0x1f> ADC_CFGR1_AWD1CH; // AWD1CH

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR2_OVSE = 0x1; // OVSE
    static constexpr uint32_t ADC_CFGR2_OVSR0 = 0x4; // OVSR0
    static constexpr uint32_t ADC_CFGR2_OVSR1 = 0x8; // OVSR1
    static constexpr uint32_t ADC_CFGR2_OVSR2 = 0x10; // OVSR2
    static constexpr uint32_t ADC_CFGR2_OVSS0 = 0x20; // OVSS0
    static constexpr uint32_t ADC_CFGR2_OVSS1 = 0x40; // OVSS1
    static constexpr uint32_t ADC_CFGR2_OVSS2 = 0x80; // OVSS2
    static constexpr uint32_t ADC_CFGR2_OVSS3 = 0x100; // OVSS3
    static constexpr uint32_t ADC_CFGR2_TOVS = 0x200; // TOVS
    static constexpr uint32_t ADC_CFGR2_LFTRIG = 0x20000000; // LFTRIG
    typedef bit_field_t<30, 0x3> ADC_CFGR2_CKMODE; // CKMODE

    static constexpr uint32_t ADC_SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR_SMP1; // SMP1
    typedef bit_field_t<4, 0x7> ADC_SMPR_SMP2; // SMP2
    typedef bit_field_t<8, 0x3ffff> ADC_SMPR_SMPSEL; // SMPSEL


    static constexpr uint32_t ADC_AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_AWD1TR_LT1; // LT1
    typedef bit_field_t<16, 0xfff> ADC_AWD1TR_HT1; // HT1

    static constexpr uint32_t ADC_AWD2TR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_AWD2TR_LT2; // LT2
    typedef bit_field_t<16, 0xfff> ADC_AWD2TR_HT2; // HT2

    static constexpr uint32_t ADC_CHSELR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> ADC_CHSELR0_CHSEL; // CHSEL
    typedef bit_field_t<0, 0xf> ADC_CHSELR0_SQ1; // SQ1
    typedef bit_field_t<4, 0xf> ADC_CHSELR0_SQ2; // SQ2
    typedef bit_field_t<8, 0xf> ADC_CHSELR0_SQ3; // SQ3
    typedef bit_field_t<12, 0xf> ADC_CHSELR0_SQ4; // SQ4
    typedef bit_field_t<16, 0xf> ADC_CHSELR0_SQ5; // SQ5
    typedef bit_field_t<20, 0xf> ADC_CHSELR0_SQ6; // SQ6
    typedef bit_field_t<24, 0xf> ADC_CHSELR0_SQ7; // SQ7
    typedef bit_field_t<28, 0xf> ADC_CHSELR0_SQ8; // SQ8

    static constexpr uint32_t ADC_AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_AWD3TR_LT3; // LT3
    typedef bit_field_t<16, 0xfff> ADC_AWD3TR_HT3; // HT3


    static constexpr uint32_t ADC_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_DR_DATA; // DATA


    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> ADC_AWD2CR_AWD2CH; // AWD2CH

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> ADC_AWD3CR_AWD3CH; // AWD3CH


    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> ADC_CALFACT_CALFACT; // CALFACT


    static constexpr uint32_t ADC_CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CCR_PRESC0 = 0x40000; // PRESC0
    static constexpr uint32_t ADC_CCR_PRESC1 = 0x80000; // PRESC1
    static constexpr uint32_t ADC_CCR_PRESC2 = 0x100000; // PRESC2
    static constexpr uint32_t ADC_CCR_PRESC3 = 0x200000; // PRESC3
    static constexpr uint32_t ADC_CCR_VREFEN = 0x400000; // VREFEN
    static constexpr uint32_t ADC_CCR_TSEN = 0x800000; // TSEN
    static constexpr uint32_t ADC_CCR_VBATEN = 0x1000000; // VBATEN
};

// ADC: Analog to digital convertor

struct stm32wl5x_cm4_adc_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR1; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR; // ADC sampling time register
    reserved_t<0x2> _0x18;
    volatile uint32_t AWD1TR; // ADC watchdog threshold register
    volatile uint32_t AWD2TR; // ADC watchdog threshold register
    volatile uint32_t CHSELR0; // channel selection register
    volatile uint32_t AWD3TR; // ADC watchdog threshold register
    reserved_t<0x4> _0x30;
    volatile uint32_t DR; // ADC data register
    reserved_t<0x17> _0x44;
    volatile uint32_t AWD2CR; // ADC Analog Watchdog 2 Configuration register
    volatile uint32_t AWD3CR; // ADC Analog Watchdog 3 Configuration register
    reserved_t<0x3> _0xa8;
    volatile uint32_t CALFACT; // ADC Calibration factor
    reserved_t<0x94> _0xb8;
    volatile uint32_t CCR; // ADC common configuration register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADRDY
    static constexpr uint32_t ISR_EOSMP = 0x2; // EOSMP
    static constexpr uint32_t ISR_EOC = 0x4; // EOC
    static constexpr uint32_t ISR_EOS = 0x8; // EOS
    static constexpr uint32_t ISR_OVR = 0x10; // OVR
    static constexpr uint32_t ISR_AWD1 = 0x80; // AWD1
    static constexpr uint32_t ISR_AWD2 = 0x100; // AWD2
    static constexpr uint32_t ISR_AWD3 = 0x200; // AWD3
    static constexpr uint32_t ISR_EOCAL = 0x800; // EOCAL
    static constexpr uint32_t ISR_CCRDY = 0x2000; // CCRDY

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADRDYIE
    static constexpr uint32_t IER_EOSMPIE = 0x2; // EOSMPIE
    static constexpr uint32_t IER_EOCIE = 0x4; // EOCIE
    static constexpr uint32_t IER_EOSIE = 0x8; // EOSIE
    static constexpr uint32_t IER_OVRIE = 0x10; // OVRIE
    static constexpr uint32_t IER_AWD1IE = 0x80; // AWD1IE
    static constexpr uint32_t IER_AWD2IE = 0x100; // AWD2IE
    static constexpr uint32_t IER_AWD3IE = 0x200; // AWD3IE
    static constexpr uint32_t IER_EOCALIE = 0x800; // EOCALIE
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // CCRDYIE

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADEN = 0x1; // ADEN
    static constexpr uint32_t CR_ADDIS = 0x2; // ADDIS
    static constexpr uint32_t CR_ADSTART = 0x4; // ADSTART
    static constexpr uint32_t CR_ADSTP = 0x10; // ADSTP
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADVREGEN
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADCAL

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // DMAEN
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // DMACFG
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // SCANDIR
    typedef bit_field_t<3, 0x3> CFGR1_RES; // RES
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // ALIGN
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // EXTSEL
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // EXTEN
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // OVRMOD
    static constexpr uint32_t CFGR1_CONT = 0x2000; // CONT
    static constexpr uint32_t CFGR1_WAIT = 0x4000; // WAIT
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // AUTOFF
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // DISCEN
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // CHSELRMOD
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000; // AWD1SGL
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000; // AWD1EN
    typedef bit_field_t<26, 0x1f> CFGR1_AWD1CH; // AWD1CH

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_OVSE = 0x1; // OVSE
    static constexpr uint32_t CFGR2_OVSR0 = 0x4; // OVSR0
    static constexpr uint32_t CFGR2_OVSR1 = 0x8; // OVSR1
    static constexpr uint32_t CFGR2_OVSR2 = 0x10; // OVSR2
    static constexpr uint32_t CFGR2_OVSS0 = 0x20; // OVSS0
    static constexpr uint32_t CFGR2_OVSS1 = 0x40; // OVSS1
    static constexpr uint32_t CFGR2_OVSS2 = 0x80; // OVSS2
    static constexpr uint32_t CFGR2_OVSS3 = 0x100; // OVSS3
    static constexpr uint32_t CFGR2_TOVS = 0x200; // TOVS
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // LFTRIG
    typedef bit_field_t<30, 0x3> CFGR2_CKMODE; // CKMODE

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMP1; // SMP1
    typedef bit_field_t<4, 0x7> SMPR_SMP2; // SMP2
    typedef bit_field_t<8, 0x3ffff> SMPR_SMPSEL; // SMPSEL


    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD1TR_LT1; // LT1
    typedef bit_field_t<16, 0xfff> AWD1TR_HT1; // HT1

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> AWD2TR_LT2; // LT2
    typedef bit_field_t<16, 0xfff> AWD2TR_HT2; // HT2

    static constexpr uint32_t CHSELR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CHSELR0_CHSEL; // CHSEL
    typedef bit_field_t<0, 0xf> CHSELR0_SQ1; // SQ1
    typedef bit_field_t<4, 0xf> CHSELR0_SQ2; // SQ2
    typedef bit_field_t<8, 0xf> CHSELR0_SQ3; // SQ3
    typedef bit_field_t<12, 0xf> CHSELR0_SQ4; // SQ4
    typedef bit_field_t<16, 0xf> CHSELR0_SQ5; // SQ5
    typedef bit_field_t<20, 0xf> CHSELR0_SQ6; // SQ6
    typedef bit_field_t<24, 0xf> CHSELR0_SQ7; // SQ7
    typedef bit_field_t<28, 0xf> CHSELR0_SQ8; // SQ8

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD3TR_LT3; // LT3
    typedef bit_field_t<16, 0xfff> AWD3TR_HT3; // HT3


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DATA; // DATA


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> AWD2CR_AWD2CH; // AWD2CH

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> AWD3CR_AWD3CH; // AWD3CH


    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT; // CALFACT


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_PRESC0 = 0x40000; // PRESC0
    static constexpr uint32_t CCR_PRESC1 = 0x80000; // PRESC1
    static constexpr uint32_t CCR_PRESC2 = 0x100000; // PRESC2
    static constexpr uint32_t CCR_PRESC3 = 0x200000; // PRESC3
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFEN
    static constexpr uint32_t CCR_TSEN = 0x800000; // TSEN
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBATEN
};

template<>
struct peripheral_t<STM32WL5x_CM0P, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wl5x_cm0p_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wl5x_cm4_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wl5x_cm4_adc_t;
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
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_ADC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_ADC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_ADC1RST;
    }
};
