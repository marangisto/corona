#pragma once

////
//
//      STM32WB ADC peripherals
//
///

// ADC: Analog to Digital Converter instance 1

struct stm32wb30_cm4_adc_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    reserved_t<0x1> _0x1c;
    volatile uint32_t TR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t TR2; // ADC analog watchdog 2 threshold register
    volatile uint32_t TR3; // ADC analog watchdog 3 threshold register
    reserved_t<0x1> _0x2c;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    reserved_t<0x94> _0xb8;
    volatile uint32_t CCR; // ADC common control register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<6, 0xf> CFGR_EXTSEL; // ADC group regular external trigger source
    static constexpr uint32_t CFGR_ALIGN = 0x20; // ADC data alignement
    typedef bit_field_t<3, 0x3> CFGR_RES; // ADC data resolution
    static constexpr uint32_t CFGR_DMACFG = 0x2; // ADC DMA transfer configuration
    static constexpr uint32_t CFGR_DMAEN = 0x1; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // ADC oversampling mode managing interlaced conversions of ADC group regular and group injected
    static constexpr uint32_t CFGR2_TOVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // ADC oversampling ratio
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection


    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TR1_HT1; // ADC analog watchdog 1 threshold high
    typedef bit_field_t<0, 0xfff> TR1_LT1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xff> TR2_HT2; // ADC analog watchdog 2 threshold high
    typedef bit_field_t<0, 0xff> TR2_LT2; // ADC analog watchdog 2 threshold low

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xff> TR3_HT3; // ADC analog watchdog 3 threshold high
    typedef bit_field_t<0, 0xff> TR3_LT3; // ADC analog watchdog 3 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> DR_RDATA_0_6; // Regular Data converted 0_6
    typedef bit_field_t<7, 0x1ff> DR_RDATA_7_15; // 15


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<20, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<14, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<8, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<6, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0xf> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0xfff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // ADC offset number 2 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET2_CH; // ADC offset number 2 channel selection
    typedef bit_field_t<0, 0xfff> OFR2_OFFSET2; // ADC offset number 2 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // ADC offset number 3 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET3_CH; // ADC offset number 3 channel selection
    typedef bit_field_t<0, 0xfff> OFR3_OFFSET3; // ADC offset number 3 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // ADC offset number 4 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET4_CH; // ADC offset number 4 channel selection
    typedef bit_field_t<0, 0xfff> OFR4_OFFSET4; // ADC offset number 4 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1; // ADC channel differential or single-ended mode for channel 0
    typedef bit_field_t<1, 0x7fff> DIFSEL_DIFSEL_1_15; // ADC channel differential or single-ended mode for channels 1 to 15
    typedef bit_field_t<16, 0x7> DIFSEL_DIFSEL_16_18; // ADC channel differential or single-ended mode for channels 18 to 16

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7f> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFEN
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
};

template<>
struct peripheral_t<STM32WB30_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wb30_cm4_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wb30_cm4_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wb30_cm4_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32wb30_cm4_adc_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

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
