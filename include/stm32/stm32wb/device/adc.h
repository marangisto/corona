#pragma once

////
//
//      STM32WB ADC peripherals
//
////

////
//
//      Analog to Digital Converter instance 1
//
////

struct stm32wb30_cm4_adc_t
{
    volatile uint32_t ISR;     // [read-write] ADC interrupt and status register
    volatile uint32_t IER;     // [read-write] ADC interrupt enable register
    volatile uint32_t CR;      // [read-write] ADC control register
    volatile uint32_t CFGR;    // [read-write] ADC configuration register 1
    volatile uint32_t CFGR2;   // [read-write] ADC configuration register 2
    volatile uint32_t SMPR1;   // [read-write] ADC sampling time register 1
    volatile uint32_t SMPR2;   // [read-write] ADC sampling time register 2
    reserved_t<0x1> _0x20;
    volatile uint32_t TR1;     // [read-write] ADC analog watchdog 1 threshold register
    volatile uint32_t TR2;     // [read-write] ADC analog watchdog 2 threshold register
    volatile uint32_t TR3;     // [read-write] ADC analog watchdog 3 threshold register
    reserved_t<0x1> _0x30;
    volatile uint32_t SQR1;    // [read-write] ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2;    // [read-write] ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3;    // [read-write] ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4;    // [read-write] ADC group regular sequencer ranks register 4
    volatile uint32_t DR;      // ADC group regular conversion data register
    reserved_t<0x2> _0x4c;
    volatile uint32_t JSQR;    // [read-write] ADC group injected sequencer register
    reserved_t<0x4> _0x60;
    volatile uint32_t OFR1;    // [read-write] ADC offset number 1 register
    volatile uint32_t OFR2;    // [read-write] ADC offset number 2 register
    volatile uint32_t OFR3;    // [read-write] ADC offset number 3 register
    volatile uint32_t OFR4;    // [read-write] ADC offset number 4 register
    reserved_t<0x4> _0x80;
    volatile uint32_t JDR1;    // [read-only] ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2;    // [read-only] ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3;    // [read-only] ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4;    // [read-only] ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0xa0;
    volatile uint32_t AWD2CR;  // [read-write] ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR;  // [read-write] ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xb0;
    volatile uint32_t DIFSEL;  // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // [read-write] ADC calibration factors register
    reserved_t<0x94> _0x308;
    volatile uint32_t CCR;     // [read-write] ADC common control register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200;  // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100;  // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80;   // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40;   // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20;   // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10;    // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8;     // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4;     // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2;   // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1;   // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200;  // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100;  // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80;   // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40;   // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20;   // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10;    // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8;     // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4;     // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2;   // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1;   // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000;  // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_JADSTP = 0x20;         // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8;        // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1;            // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CFGR_JQDIS = 0x80000000;  // ADC group injected contexts queue disable
    template<uint32_t X>
    static constexpr uint32_t CFGR_AWDCH1CH =           // ADC analog watchdog 1 monitored channel selection
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR_JAUTO = 0x2000000;   // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000;   // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000;  // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000;      // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000;  // ADC group injected sequencer discontinuous mode
    template<uint32_t X>
    static constexpr uint32_t CFGR_DISCNUM =            // ADC group regular sequencer discontinuous number of ranks
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t CFGR_DISCEN = 0x10000;    // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000;       // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // ADC group regular overrun configuration
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // ADC group regular external trigger polarity
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // ADC group regular external trigger source
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN = 0x20;        // ADC data alignement
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // ADC data resolution
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // ADC DMA transfer configuration
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // ADC oversampling mode managing interlaced conversions of ADC group regular and group injected
    static constexpr uint32_t CFGR2_TOVS = 0x200;  // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =         // ADC oversampling shift
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =         // ADC oversampling ratio
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_JOVSE = 0x2;   // ADC oversampler enable on scope ADC group injected
    static constexpr uint32_t CFGR2_ROVSE = 0x1;   // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =   // ADC channel 9 sampling time selection
        bit_field_t<27, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =   // ADC channel 8 sampling time selection
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =   // ADC channel 7 sampling time selection
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =   // ADC channel 6 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =   // ADC channel 5 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =   // ADC channel 4 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =   // ADC channel 3 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =   // ADC channel 2 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =   // ADC channel 1 sampling time selection
        bit_field_t<3, 0x7>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP18 =   // ADC channel 18 sampling time selection
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP17 =   // ADC channel 17 sampling time selection
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP16 =   // ADC channel 16 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP15 =   // ADC channel 15 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP14 =   // ADC channel 14 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP13 =   // ADC channel 13 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP12 =   // ADC channel 12 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP11 =   // ADC channel 11 sampling time selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP10 =   // ADC channel 10 sampling time selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR1_HT1 =   // ADC analog watchdog 1 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =   // ADC analog watchdog 1 threshold low
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // ADC analog watchdog 2 threshold high
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // ADC analog watchdog 2 threshold low
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR3_HT3 =   // ADC analog watchdog 3 threshold high
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR3_LT3 =   // ADC analog watchdog 3 threshold low
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ4 =   // ADC group regular sequencer rank 4
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ3 =   // ADC group regular sequencer rank 3
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ2 =   // ADC group regular sequencer rank 2
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ1 =   // ADC group regular sequencer rank 1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_L3 =    // L3
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ9 =   // ADC group regular sequencer rank 9
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ8 =   // ADC group regular sequencer rank 8
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ7 =   // ADC group regular sequencer rank 7
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ6 =   // ADC group regular sequencer rank 6
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ5 =   // ADC group regular sequencer rank 5
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ14 =   // ADC group regular sequencer rank 14
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ13 =   // ADC group regular sequencer rank 13
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ12 =   // ADC group regular sequencer rank 12
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ11 =   // ADC group regular sequencer rank 11
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ10 =   // ADC group regular sequencer rank 10
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ16 =   // ADC group regular sequencer rank 16
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ15 =   // ADC group regular sequencer rank 15
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_RDATA_0_6 =    // Regular Data converted 0_6
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_RDATA_7_15 =   // 15
        bit_field_t<7, 0x1ff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // ADC group injected sequencer rank 4
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // ADC group injected sequencer rank 3
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // ADC group injected sequencer rank 2
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // ADC group injected sequencer rank 1
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // ADC group injected external trigger polarity
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // ADC group injected external trigger source
        bit_field_t<2, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // ADC group injected sequencer scan length
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // ADC offset number 1 enable
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // ADC offset number 1 channel selection
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // ADC offset number 1 offset level
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // ADC offset number 2 enable
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2_CH =             // ADC offset number 2 channel selection
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2 =                // ADC offset number 2 offset level
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // ADC offset number 3 enable
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3_CH =             // ADC offset number 3 channel selection
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3 =                // ADC offset number 3 offset level
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // ADC offset number 4 enable
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4_CH =             // ADC offset number 4 channel selection
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4 =                // ADC offset number 4 offset level
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JDR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR1_JDATA1 =   // ADC group injected sequencer rank 1 conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR2_JDATA2 =   // ADC group injected sequencer rank 2 conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR3_JDATA3 =   // ADC group injected sequencer rank 3 conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR4_JDATA4 =   // ADC group injected sequencer rank 4 conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // ADC analog watchdog 2 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // ADC analog watchdog 3 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1;  // ADC channel differential or single-ended mode for channel 0
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_1_15 =    // ADC channel differential or single-ended mode for channels 1 to 15
        bit_field_t<1, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_16_18 =   // ADC channel differential or single-ended mode for channels 18 to 16
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // ADC calibration factor in differential mode
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // ADC calibration factor in single-ended mode
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable
    static constexpr uint32_t CCR_TSEN = 0x800000;    // Temperature sensor enable
    static constexpr uint32_t CCR_VREFEN = 0x400000;  // VREFEN
    template<uint32_t X>
    static constexpr uint32_t CCR_PRESC =             // ADC prescaler
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_CKMODE =            // ADC clock mode
        bit_field_t<16, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32WB30_CM4, ADC>
{
    typedef stm32wb30_cm4_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, ADC>
{
    typedef stm32wb30_cm4_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, ADC>
{
    typedef stm32wb30_cm4_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, ADC>
{
    typedef stm32wb30_cm4_adc_t T;
    static T& V;
};

using adc_t = peripheral_t<mcu_svd, ADC>;

