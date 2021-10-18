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
    typedef bit_field_t<0, 0xf> CHSELR_SQ1; // conversion of the sequence
    typedef bit_field_t<4, 0xf> CHSELR_SQ2; // conversion of the sequence
    typedef bit_field_t<8, 0xf> CHSELR_SQ3; // conversion of the sequence
    typedef bit_field_t<12, 0xf> CHSELR_SQ4; // conversion of the sequence
    typedef bit_field_t<16, 0xf> CHSELR_SQ5; // conversion of the sequence
    typedef bit_field_t<20, 0xf> CHSELR_SQ6; // conversion of the sequence
    typedef bit_field_t<24, 0xf> CHSELR_SQ7; // conversion of the sequence
    typedef bit_field_t<28, 0xf> CHSELR_SQ8; // conversion of the sequence

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

// ADC: ADC address block description

struct stm32g050_adc_t
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
    volatile uint32_t CHSELRMOD0; // ADC channel selection register
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
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready This bit is set by hardware after the ADC has been enabled (ADEN=1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_EOSMP = 0x2; // End of sampling flag This bit is set by hardware during the conversion, at the end of the sampling phase.It is cleared by software by programming it to &#39;1.
    static constexpr uint32_t ISR_EOC = 0x4; // End of conversion flag This bit is set by hardware at the end of each conversion of a channel when a new data result is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register.
    static constexpr uint32_t ISR_EOS = 0x8; // End of sequence flag This bit is set by hardware at the end of the conversion of a sequence of channels selected by the CHSEL bits. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_OVR = 0x10; // ADC overrun This bit is set by hardware when an overrun occurs, meaning that a new conversion has complete while the EOC flag was already set. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_AWD1 = 0x80; // Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_TR1 and ADC_HR1 registers. It is cleared by software by programming it to 1.
    static constexpr uint32_t ISR_AWD2 = 0x100; // Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD2TR and ADC_AWD2TR registers. It is cleared by software programming it it.
    static constexpr uint32_t ISR_AWD3 = 0x200; // Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD3TR and ADC_AWD3TR registers. It is cleared by software by programming it to 1.
    static constexpr uint32_t ISR_EOCAL = 0x800; // End Of Calibration flag This bit is set by hardware when calibration is complete. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag This flag bit is set by hardware when the channel configuration is applied after programming to ADC_CHSELR register or changing CHSELRMOD or SCANDIR. It is cleared by software by programming it to it. Note: When the software configures the channels (by programming ADC_CHSELR or changing CHSELRMOD or SCANDIR), it must wait until the CCRDY flag rises before configuring again or starting conversions, otherwise the new configuration (or the START bit) is ignored. Once the flag is asserted, if the software needs to configure again the channels, it must clear the CCRDY flag before proceeding with a new configuration.

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOCIE = 0x4; // End of conversion interrupt enable This bit is set and cleared by software to enable/disable the end of conversion interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOSIE = 0x8; // End of conversion sequence interrupt enable This bit is set and cleared by software to enable/disable the end of sequence of conversions interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_OVRIE = 0x10; // Overrun interrupt enable This bit is set and cleared by software to enable/disable the overrun interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD1IE = 0x80; // Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD2IE = 0x100; // Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD3IE = 0x200; // Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOCALIE = 0x800; // End of calibration interrupt enable This bit is set and cleared by software to enable/disable the end of calibration interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable This bit is set and cleared by software to enable/disable the channel configuration ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable command This bit is set by software to enable the ADC. The ADC is effectively ready to operate once the ADRDY flag has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL=0, ADSTP=0, ADSTART=0, ADDIS=0 and ADEN=0)
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: Setting ADDIS to &#39;1 is only effective when ADEN=1 and ADSTART=0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC start conversion command This bit is set by software to start ADC conversion. Depending on the EXTEN [1:0] configuration bits, a conversion either starts immediately (software trigger configuration) or once a hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: In single conversion mode (CONT=0, DISCEN=0), when software trigger is selected (EXTEN=00): at the assertion of the end of Conversion Sequence (EOS) flag. In discontinuous conversion mode(CONT=0, DISCEN=1), when the software trigger is selected (EXTEN=00): at the assertion of the end of Conversion (EOC) flag. In all other cases: after the execution of the ADSTP command, at the same time as the ADSTP bit is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC). After writing to ADC_CHSELR register or changing CHSELRMOD or SCANDIRW, it is mandatory to wait until CCRDY flag is asserted before setting ADSTART, otherwise, the value written to ADSTART is ignored.
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC stop conversion command This bit is set by software to stop and discard an ongoing conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC is ready to accept a new start conversion command. Note: Setting ADSTP to &#39;1 is only effective when ADSTART=1 and ADDIS=0 (ADC is enabled and may be converting and there is no pending request to disable the ADC)
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC Voltage Regulator Enable This bit is set by software, to enable the ADC internal voltage regulator. The voltage regulator output is available after tADCVREG_SETUP. It is cleared by software to disable the voltage regulator. It can be cleared only if ADEN is et to 0. Note: The software is allowed to program this bit field only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration This bit is set by software to start the calibration of the ADC. It is cleared by hardware after calibration is complete. Note: The software is allowed to set ADCAL only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN=1 and ADSTART=0 (ADC enabled and no conversion is ongoing).

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // Direct memory access enable This bit is set and cleared by software to enable the generation of DMA requests. This allows the DMA controller to be used to manage automatically the converted data. For more details, refer to . Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // Direct memory access configuration This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN=1. For more details, refer to page391 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // Scan sequence direction This bit is set and cleared by software to select the direction in which the channels is scanned in the sequence. It is effective only if CHSELMOD bit is cleared to 0. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    typedef bit_field_t<3, 0x3> CFGR1_RES; // Data resolution These bits are written by software to select the resolution of the conversion. Note: The software is allowed to write these bits only when ADEN=0.
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // Data alignment This bit is set and cleared by software to select right or left alignment. Refer to Data alignment and resolution (oversampling disabled: OVSE = 0) on page389 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // External trigger selection These bits select the external event used to trigger the start of conversion (refer to External triggers for details): Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // External trigger enable and polarity selection These bits are set and cleared by software to select the external trigger polarity and enable the trigger. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // Overrun management mode This bit is set and cleared by software and configure the way data overruns are managed. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_CONT = 0x2000; // Single / continuous conversion mode This bit is set and cleared by software. If it is set, conversion takes place continuously until it is cleared. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_WAIT = 0x4000; // Wait conversion mode This bit is set and cleared by software to enable/disable wait conversion mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // Auto-off mode This bit is set and cleared by software to enable/disable auto-off mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // Discontinuous mode This bit is set and cleared by software to enable/disable discontinuous mode. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register This bit is set and cleared by software to control the ADC_CHSELR feature: Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000; // Enable the watchdog on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWDCH[4:0] bits or on all the channels Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000; // Analog watchdog enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> CFGR1_AWD1CH; // Analog watchdog channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... Others: Reserved Note: The channel selected by the AWDCH[4:0] bits must be also set into the CHSELR register. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_OVSE = 0x1; // Oversampler Enable This bit is set and cleared by software. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // Oversampling ratio This bit filed defines the number of oversampling ratio. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // Oversampling shift This bit is set and cleared by software. Others: Reserved Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR2_TOVS = 0x200; // Triggered Oversampling This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<30, 0x3> CFGR2_CKMODE; // ADC clock mode These bits are set and cleared by software to define how the analog ADC is clocked: In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMP1; // Sampling time selection 1 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<4, 0x7> SMPR_SMP2; // Sampling time selection 2 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL0 = 0x100; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL1 = 0x200; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL2 = 0x400; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL3 = 0x800; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL4 = 0x1000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL5 = 0x2000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL6 = 0x4000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL7 = 0x8000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL8 = 0x10000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL9 = 0x20000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL10 = 0x40000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL11 = 0x80000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL12 = 0x100000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL13 = 0x200000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL14 = 0x400000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL15 = 0x800000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL16 = 0x1000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL17 = 0x2000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL18 = 0x4000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD1TR_LT1; // Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.
    typedef bit_field_t<16, 0xfff> AWD1TR_HT1; // Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD2TR_LT2; // Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.
    typedef bit_field_t<16, 0xfff> AWD2TR_HT2; // Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.

    static constexpr uint32_t CHSELRMOD0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CHSELRMOD0_CHSEL0 = 0x1; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL1 = 0x2; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL10 = 0x400; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL11 = 0x800; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL12 = 0x1000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL13 = 0x2000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL14 = 0x4000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL15 = 0x8000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL16 = 0x10000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL17 = 0x20000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL18 = 0x40000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL2 = 0x4; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL3 = 0x8; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL4 = 0x10; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL5 = 0x20; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL6 = 0x40; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL7 = 0x80; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL8 = 0x100; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELRMOD0_CHSEL9 = 0x200; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    typedef bit_field_t<0, 0xf> CHSELRMOD0_SQ1; // 1st conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<4, 0xf> CHSELRMOD0_SQ2; // 2nd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<8, 0xf> CHSELRMOD0_SQ3; // 3rd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0xf> CHSELRMOD0_SQ4; // 4th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0xf> CHSELRMOD0_SQ5; // 5th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<20, 0xf> CHSELRMOD0_SQ6; // 6th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0xf> CHSELRMOD0_SQ7; // 7th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<28, 0xf> CHSELRMOD0_SQ8; // 8th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates the end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. ... Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD3TR_LT3; // Analog watchdog 3lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.
    typedef bit_field_t<16, 0xfff> AWD3TR_HT3; // Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page395.


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DATA; // Converted data These bits are read-only. They contain the conversion result from the last converted channel. The data are left- or right-aligned as shown in OVSE = 0) on page389. Just after a calibration is complete, DATA[6:0] contains the calibration factor.


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AWD2CR_AWD2CH0 = 0x1; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH1 = 0x2; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH2 = 0x4; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH3 = 0x8; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH4 = 0x10; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH5 = 0x20; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH6 = 0x40; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH7 = 0x80; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH8 = 0x100; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH9 = 0x200; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH10 = 0x400; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH11 = 0x800; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH12 = 0x1000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH13 = 0x2000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH14 = 0x4000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH15 = 0x8000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH16 = 0x10000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH17 = 0x20000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH18 = 0x40000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AWD3CR_AWD3CH0 = 0x1; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH1 = 0x2; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH2 = 0x4; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH3 = 0x8; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH4 = 0x10; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH5 = 0x20; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH6 = 0x40; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH7 = 0x80; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH8 = 0x100; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH9 = 0x200; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH10 = 0x400; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH11 = 0x800; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH12 = 0x1000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH13 = 0x2000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH14 = 0x4000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH15 = 0x8000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH16 = 0x10000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH17 = 0x20000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH18 = 0x40000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT; // Calibration factor These bits are written by hardware or by software. Once a calibration is complete,they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new calibration is launched. Just after a calibration is complete, DATA[6:0] contains the calibration factor. Note: Software can write these bits only when ADEN=1 (ADC is enabled and no calibration is ongoing and no conversion is ongoing). Refer to SQ8[3:0] for a definition of channel selection.


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler Set and cleared by software to select the frequency of the clock to the ADC. Other: Reserved Note: Software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable This bit is set and cleared by software to enable/disable the VREFINT. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable This bit is set and cleared by software to enable/disable the temperature sensor. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable This bit is set and cleared by software to enable/disable the VBAT channel. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing)
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
    typedef bit_field_t<0, 0xf> CHSELR_SQ1; // conversion of the sequence
    typedef bit_field_t<4, 0xf> CHSELR_SQ2; // conversion of the sequence
    typedef bit_field_t<8, 0xf> CHSELR_SQ3; // conversion of the sequence
    typedef bit_field_t<12, 0xf> CHSELR_SQ4; // conversion of the sequence
    typedef bit_field_t<16, 0xf> CHSELR_SQ5; // conversion of the sequence
    typedef bit_field_t<20, 0xf> CHSELR_SQ6; // conversion of the sequence
    typedef bit_field_t<24, 0xf> CHSELR_SQ7; // conversion of the sequence
    typedef bit_field_t<28, 0xf> CHSELR_SQ8; // conversion of the sequence

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

// ADC: Analog to Digital Converter

struct stm32g0b1_adc_t
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
    volatile uint32_t CHSELR; // ADC channel selection register [alternate]
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
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready This bit is set by hardware after the ADC has been enabled (ADEN=1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_EOSMP = 0x2; // End of sampling flag This bit is set by hardware during the conversion, at the end of the sampling phase.It is cleared by software by programming it to &#39;1.
    static constexpr uint32_t ISR_EOC = 0x4; // End of conversion flag This bit is set by hardware at the end of each conversion of a channel when a new data result is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register.
    static constexpr uint32_t ISR_EOS = 0x8; // End of sequence flag This bit is set by hardware at the end of the conversion of a sequence of channels selected by the CHSEL bits. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_OVR = 0x10; // ADC overrun This bit is set by hardware when an overrun occurs, meaning that a new conversion has complete while the EOC flag was already set. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_AWD1 = 0x80; // Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_TR1 and ADC_HR1 registers. It is cleared by software by programming it to 1.
    static constexpr uint32_t ISR_AWD2 = 0x100; // Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD2TR and ADC_AWD2TR registers. It is cleared by software programming it it.
    static constexpr uint32_t ISR_AWD3 = 0x200; // Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD3TR and ADC_AWD3TR registers. It is cleared by software by programming it to 1.
    static constexpr uint32_t ISR_EOCAL = 0x800; // End Of Calibration flag This bit is set by hardware when calibration is complete. It is cleared by software writing 1 to it.
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag This flag bit is set by hardware when the channel configuration is applied after programming to ADC_CHSELR register or changing CHSELRMOD or SCANDIR. It is cleared by software by programming it to it. Note: When the software configures the channels (by programming ADC_CHSELR or changing CHSELRMOD or SCANDIR), it must wait until the CCRDY flag rises before configuring again or starting conversions, otherwise the new configuration (or the START bit) is ignored. Once the flag is asserted, if the software needs to configure again the channels, it must clear the CCRDY flag before proceeding with a new configuration.

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOCIE = 0x4; // End of conversion interrupt enable This bit is set and cleared by software to enable/disable the end of conversion interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOSIE = 0x8; // End of conversion sequence interrupt enable This bit is set and cleared by software to enable/disable the end of sequence of conversions interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_OVRIE = 0x10; // Overrun interrupt enable This bit is set and cleared by software to enable/disable the overrun interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD1IE = 0x80; // Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD2IE = 0x100; // Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_AWD3IE = 0x200; // Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_EOCALIE = 0x800; // End of calibration interrupt enable This bit is set and cleared by software to enable/disable the end of calibration interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable This bit is set and cleared by software to enable/disable the channel configuration ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable command This bit is set by software to enable the ADC. The ADC is effectively ready to operate once the ADRDY flag has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL=0, ADSTP=0, ADSTART=0, ADDIS=0 and ADEN=0)
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: Setting ADDIS to &#39;1 is only effective when ADEN=1 and ADSTART=0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC start conversion command This bit is set by software to start ADC conversion. Depending on the EXTEN [1:0] configuration bits, a conversion either starts immediately (software trigger configuration) or once a hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: In single conversion mode (CONT=0, DISCEN=0), when software trigger is selected (EXTEN=00): at the assertion of the end of Conversion Sequence (EOS) flag. In discontinuous conversion mode(CONT=0, DISCEN=1), when the software trigger is selected (EXTEN=00): at the assertion of the end of Conversion (EOC) flag. In all other cases: after the execution of the ADSTP command, at the same time as the ADSTP bit is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC). After writing to ADC_CHSELR register or changing CHSELRMOD or SCANDIRW, it is mandatory to wait until CCRDY flag is asserted before setting ADSTART, otherwise, the value written to ADSTART is ignored.
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC stop conversion command This bit is set by software to stop and discard an ongoing conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC is ready to accept a new start conversion command. Note: Setting ADSTP to &#39;1 is only effective when ADSTART=1 and ADDIS=0 (ADC is enabled and may be converting and there is no pending request to disable the ADC)
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC Voltage Regulator Enable This bit is set by software, to enable the ADC internal voltage regulator. The voltage regulator output is available after tADCVREG_SETUP. It is cleared by software to disable the voltage regulator. It can be cleared only if ADEN is et to 0. Note: The software is allowed to program this bit field only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration This bit is set by software to start the calibration of the ADC. It is cleared by hardware after calibration is complete. Note: The software is allowed to set ADCAL only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN=1 and ADSTART=0 (ADC enabled and no conversion is ongoing).

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR1_DMAEN = 0x1; // Direct memory access enable This bit is set and cleared by software to enable the generation of DMA requests. This allows the DMA controller to be used to manage automatically the converted data. For more details, refer to . Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_DMACFG = 0x2; // Direct memory access configuration This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN=1. For more details, refer to page403 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_SCANDIR = 0x4; // Scan sequence direction This bit is set and cleared by software to select the direction in which the channels is scanned in the sequence. It is effective only if CHSELMOD bit is cleared to 0. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    typedef bit_field_t<3, 0x3> CFGR1_RES; // Data resolution These bits are written by software to select the resolution of the conversion. Note: The software is allowed to write these bits only when ADEN=0.
    static constexpr uint32_t CFGR1_ALIGN = 0x20; // Data alignment This bit is set and cleared by software to select right or left alignment. Refer to Data alignment and resolution (oversampling disabled: OVSE = 0) on page401 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> CFGR1_EXTSEL; // External trigger selection These bits select the external event used to trigger the start of conversion (refer to External triggers for details): Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<10, 0x3> CFGR1_EXTEN; // External trigger enable and polarity selection These bits are set and cleared by software to select the external trigger polarity and enable the trigger. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000; // Overrun management mode This bit is set and cleared by software and configure the way data overruns are managed. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_CONT = 0x2000; // Single / continuous conversion mode This bit is set and cleared by software. If it is set, conversion takes place continuously until it is cleared. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_WAIT = 0x4000; // Wait conversion mode This bit is set and cleared by software to enable/disable wait conversion mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000; // Auto-off mode This bit is set and cleared by software to enable/disable auto-off mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_DISCEN = 0x10000; // Discontinuous mode This bit is set and cleared by software to enable/disable discontinuous mode. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register This bit is set and cleared by software to control the ADC_CHSELR feature: Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000; // Enable the watchdog on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWDCH[4:0] bits or on all the channels Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000; // Analog watchdog enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> CFGR1_AWD1CH; // Analog watchdog channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... Others: Reserved Note: The channel selected by the AWDCH[4:0] bits must be also set into the CHSELR register. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_OVSE = 0x1; // Oversampler Enable This bit is set and cleared by software. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<2, 0x7> CFGR2_OVSR; // Oversampling ratio This bit filed defines the number of oversampling ratio. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // Oversampling shift This bit is set and cleared by software. Others: Reserved Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR2_TOVS = 0x200; // Triggered Oversampling This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing).
    typedef bit_field_t<30, 0x3> CFGR2_CKMODE; // ADC clock mode These bits are set and cleared by software to define how the analog ADC is clocked: In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMPR_SMP1; // Sampling time selection 1 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<4, 0x7> SMPR_SMP2; // Sampling time selection 2 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL0 = 0x100; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL1 = 0x200; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL2 = 0x400; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL3 = 0x800; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL4 = 0x1000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL5 = 0x2000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL6 = 0x4000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL7 = 0x8000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL8 = 0x10000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL9 = 0x20000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL10 = 0x40000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL11 = 0x80000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL12 = 0x100000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL13 = 0x200000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL14 = 0x400000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL15 = 0x800000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL16 = 0x1000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL17 = 0x2000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t SMPR_SMPSEL18 = 0x4000000; // Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD1TR_LT1; // Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.
    typedef bit_field_t<16, 0xfff> AWD1TR_HT1; // Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD2TR_LT2; // Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.
    typedef bit_field_t<16, 0xfff> AWD2TR_HT2; // Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.

    static constexpr uint32_t CHSELR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CHSELR_CHSEL0 = 0x1; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL1 = 0x2; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL10 = 0x400; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL11 = 0x800; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL12 = 0x1000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL13 = 0x2000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL14 = 0x4000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL15 = 0x8000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL16 = 0x10000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL17 = 0x20000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL18 = 0x40000; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL2 = 0x4; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL3 = 0x8; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL4 = 0x10; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL5 = 0x20; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL6 = 0x40; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL7 = 0x80; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL8 = 0x100; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    static constexpr uint32_t CHSELR_CHSEL9 = 0x200; // Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored.
    typedef bit_field_t<0, 0xf> CHSELR_SQ1; // 1st conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<4, 0xf> CHSELR_SQ2; // 2nd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<8, 0xf> CHSELR_SQ3; // 3rd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0xf> CHSELR_SQ4; // 4th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0xf> CHSELR_SQ5; // 5th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<20, 0xf> CHSELR_SQ6; // 6th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0xf> CHSELR_SQ7; // 7th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<28, 0xf> CHSELR_SQ8; // 8th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates the end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. ... Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> AWD3TR_LT3; // Analog watchdog 3lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.
    typedef bit_field_t<16, 0xfff> AWD3TR_HT3; // Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page407.


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DATA; // Converted data These bits are read-only. They contain the conversion result from the last converted channel. The data are left- or right-aligned as shown in OVSE = 0) on page401. Just after a calibration is complete, DATA[6:0] contains the calibration factor.


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AWD2CR_AWD2CH0 = 0x1; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH1 = 0x2; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH2 = 0x4; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH3 = 0x8; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH4 = 0x10; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH5 = 0x20; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH6 = 0x40; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH7 = 0x80; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH8 = 0x100; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH9 = 0x200; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH10 = 0x400; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH11 = 0x800; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH12 = 0x1000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH13 = 0x2000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH14 = 0x4000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH15 = 0x8000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH16 = 0x10000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH17 = 0x20000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD2CR_AWD2CH18 = 0x40000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AWD3CR_AWD3CH0 = 0x1; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH1 = 0x2; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH2 = 0x4; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH3 = 0x8; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH4 = 0x10; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH5 = 0x20; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH6 = 0x40; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH7 = 0x80; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH8 = 0x100; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH9 = 0x200; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH10 = 0x400; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH11 = 0x800; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH12 = 0x1000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH13 = 0x2000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH14 = 0x4000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH15 = 0x8000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH16 = 0x10000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH17 = 0x20000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t AWD3CR_AWD3CH18 = 0x40000; // Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CALFACT_CALFACT; // Calibration factor These bits are written by hardware or by software. Once a calibration is complete,they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new calibration is launched. Just after a calibration is complete, DATA[6:0] contains the calibration factor. Note: Software can write these bits only when ADEN=1 (ADC is enabled and no calibration is ongoing and no conversion is ongoing). Refer to SQ8[3:0] for a definition of channel selection.


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler Set and cleared by software to select the frequency of the clock to the ADC. Other: Reserved Note: Software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable This bit is set and cleared by software to enable/disable the VREFINT. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CCR_TSEN = 0x800000; // Temperature sensor enable This bit is set and cleared by software to enable/disable the temperature sensor. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable This bit is set and cleared by software to enable/disable the VBAT channel. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing)
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
struct peripheral_t<STM32G050, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g050_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g050_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g050_adc_t;
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

template<>
struct peripheral_t<STM32G0B1, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g0b1_adc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32g0b1_adc_t;
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
