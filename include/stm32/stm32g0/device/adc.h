#pragma once

////
//
//      STM32G0 ADC peripherals
//
///

// ADC: Analog to Digital Converter instance 1

struct stm32g030_adc_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR1; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR; // ADC sampling time register
    reserved_t<0x2> _0x18;
    volatile uint32_t AWD1TR; // watchdog threshold register
    volatile uint32_t AWD2TR; // watchdog threshold register
    volatile uint32_t CHSELR; // channel selection register
    volatile uint32_t AWD3TR; // watchdog threshold register
    reserved_t<0x4> _0x30;
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x17> _0x44;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x3> _0xa8;
    volatile uint32_t CALFACT; // ADC calibration factors register
    reserved_t<0x94> _0xb8;
    volatile uint32_t CCR; // ADC common control register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag
    static constexpr uint32_t ISR_EOCAL = 0x800; // End Of Calibration flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable
    static constexpr uint32_t IER_EOCALIE = 0x800; // End of calibration interrupt enable
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> CFGR1_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // Auto-off mode
    static constexpr uint32_t CFGR1_WAIT = 0x4000; // Wait conversion mode
    static constexpr uint32_t CFGR1_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // ADC group regular external trigger source
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // ADC data alignement
    typedef bit_field_t<3, 0x3> CFGR1_RES; // ADC data resolution
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // Scan sequence direction
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // ADC DMA transfer configuration
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> CFGR2_CKMODE; // ADC clock mode
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable
    static constexpr uint32_t CFGR2_TOVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // ADC oversampling ratio
    static constexpr uint32_t CFGR2_OVSE = 0x1; // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMP1; // Sampling time selection
    typedef bit_field_t<4, 0x7> SMPR_SMP2; // Sampling time selection
    typedef bit_field_t<8, 0x7ffff> SMPR_SMPSEL; // Channel sampling time selection


    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD1TR_HT1; // ADC analog watchdog 1 threshold high
    typedef bit_field_t<0, 0xfff> AWD1TR_LT1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD2TR_HT2; // ADC analog watchdog 2 threshold high
    typedef bit_field_t<0, 0xfff> AWD2TR_LT2; // ADC analog watchdog 2 threshold low

    static constexpr uint32_t CHSELR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x7ffff> CHSELR_CHSEL; // Channel-x selection

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD3TR_HT3; // ADC analog watchdog 3 threshold high
    typedef bit_field_t<0, 0xfff> AWD3TR_LT3; // ADC analog watchdog 3 threshold high


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_REGULARDATA; // ADC group regular conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT; // ADC calibration factor in single-ended mode


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable
};

// ADC: Analog to Digital Converter instance 1

struct stm32g070_adc_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR1; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR; // ADC sampling time register
    reserved_t<0x2> _0x18;
    volatile uint32_t AWD1TR; // watchdog threshold register
    volatile uint32_t AWD2TR; // watchdog threshold register
    volatile uint32_t CHSELR; // channel selection register
    volatile uint32_t AWD3TR; // watchdog threshold register
    reserved_t<0x4> _0x30;
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x17> _0x44;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x3> _0xa8;
    volatile uint32_t CALFACT; // ADC calibration factors register
    reserved_t<0x94> _0xb8;
    volatile uint32_t CCR; // ADC common control register
    reserved_t<0x33> _0x30c;
    volatile uint32_t HWCFGR6; // Hardware Configuration Register
    volatile uint32_t HWCFGR5; // Hardware Configuration Register
    volatile uint32_t HWCFGR4; // Hardware Configuration Register
    volatile uint32_t HWCFGR3; // Hardware Configuration Register
    volatile uint32_t HWCFGR2; // Hardware Configuration Register
    volatile uint32_t HWCFGR1; // Hardware Configuration Register
    volatile uint32_t HWCFGR0; // Hardware Configuration Register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag
    static constexpr uint32_t ISR_EOCAL = 0x800; // End Of Calibration flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable
    static constexpr uint32_t IER_EOCALIE = 0x800; // End of calibration interrupt enable
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> CFGR1_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // Auto-off mode
    static constexpr uint32_t CFGR1_WAIT = 0x4000; // Wait conversion mode
    static constexpr uint32_t CFGR1_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // ADC group regular external trigger source
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // ADC data alignement
    typedef bit_field_t<3, 0x3> CFGR1_RES; // ADC data resolution
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // Scan sequence direction
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // ADC DMA transfer configuration
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> CFGR2_CKMODE; // ADC clock mode
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable
    static constexpr uint32_t CFGR2_TOVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // ADC oversampling ratio
    static constexpr uint32_t CFGR2_OVSE = 0x1; // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMP1; // Sampling time selection
    typedef bit_field_t<4, 0x7> SMPR_SMP2; // Sampling time selection
    typedef bit_field_t<8, 0x7ffff> SMPR_SMPSEL; // Channel sampling time selection


    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD1TR_HT1; // ADC analog watchdog 1 threshold high
    typedef bit_field_t<0, 0xfff> AWD1TR_LT1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD2TR_HT2; // ADC analog watchdog 2 threshold high
    typedef bit_field_t<0, 0xfff> AWD2TR_LT2; // ADC analog watchdog 2 threshold low

    static constexpr uint32_t CHSELR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x7ffff> CHSELR_CHSEL; // Channel-x selection

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> AWD3TR_HT3; // ADC analog watchdog 3 threshold high
    typedef bit_field_t<0, 0xfff> AWD3TR_LT3; // ADC analog watchdog 3 threshold high


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_REGULARDATA; // ADC group regular conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT; // ADC calibration factor in single-ended mode


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable


    static constexpr uint32_t HWCFGR6_RESET_VALUE = 0x1f1f1f1f; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR6_CHMAP20; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR6_CHMAP21; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR6_CHMAP22; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR6_CHMAP23; // Input channel mapping

    static constexpr uint32_t HWCFGR5_RESET_VALUE = 0x1f080807; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR5_CHMAP19; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR5_CHMAP18; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR5_CHMAP17; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR5_CHMAP16; // Input channel mapping

    static constexpr uint32_t HWCFGR4_RESET_VALUE = 0x70b0a09; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR4_CHMAP15; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR4_CHMAP14; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR4_CHMAP13; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR4_CHMAP12; // Input channel mapping

    static constexpr uint32_t HWCFGR3_RESET_VALUE = 0x7060605; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR3_CHMAP11; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR3_CHMAP10; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR3_CHMAP9; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR3_CHMAP8; // Input channel mapping

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x5050404; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR2_CHMAP7; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR2_CHMAP6; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR2_CHMAP5; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR2_CHMAP4; // Input channel mapping

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x3020100; // Reset value
    typedef bit_field_t<0, 0x1f> HWCFGR1_CHMAP3; // Input channel mapping
    typedef bit_field_t<8, 0x1f> HWCFGR1_CHMAP2; // Input channel mapping
    typedef bit_field_t<16, 0x1f> HWCFGR1_CHMAP1; // Input channel mapping
    typedef bit_field_t<24, 0x1f> HWCFGR1_CHMAP0; // Input channel mapping

    static constexpr uint32_t HWCFGR0_RESET_VALUE = 0x110; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR0_NUM_CHAN_24; // NUM_CHAN_24
    typedef bit_field_t<4, 0xf> HWCFGR0_EXTRA_AWDS; // Extra analog watchdog
    typedef bit_field_t<8, 0xf> HWCFGR0_OVS; // Oversampling

    static constexpr uint32_t VERR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32G030, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g030_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g030_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g030_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g070_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g070_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g070_adc_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APBENR2 |= RCC::T::APBENR2_ADC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APBENR2 &= ~RCC::T::APBENR2_ADC1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APBSMENR2 |= RCC::T::APBSMENR2_ADC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APBSMENR2 &= ~RCC::T::APBSMENR2_ADC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APBRSTR2 |= RCC::T::APBRSTR2_ADC1RST;
    }
};
