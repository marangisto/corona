#pragma once

////
//
//      STM32F7 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32f722_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t CR; // control register
    volatile uint32_t ISR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    reserved_t<0x1> _0x18;
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t WPR; // write protection register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t SHIFTR; // shift control register
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    volatile uint32_t TSSSR; // timestamp sub second register
    volatile uint32_t CALR; // calibration register
    volatile uint32_t TAMPCR; // tamper configuration register
    volatile uint32_t ALRMASSR; // alarm A sub second register
    volatile uint32_t ALRMBSSR; // alarm B sub second register
    volatile uint32_t OR; // option register
    volatile uint32_t BKP0R; // backup register
    volatile uint32_t BKP1R; // backup register
    volatile uint32_t BKP2R; // backup register
    volatile uint32_t BKP3R; // backup register
    volatile uint32_t BKP4R; // backup register
    volatile uint32_t BKP5R; // backup register
    volatile uint32_t BKP6R; // backup register
    volatile uint32_t BKP7R; // backup register
    volatile uint32_t BKP8R; // backup register
    volatile uint32_t BKP9R; // backup register
    volatile uint32_t BKP10R; // backup register
    volatile uint32_t BKP11R; // backup register
    volatile uint32_t BKP12R; // backup register
    volatile uint32_t BKP13R; // backup register
    volatile uint32_t BKP14R; // backup register
    volatile uint32_t BKP15R; // backup register
    volatile uint32_t BKP16R; // backup register
    volatile uint32_t BKP17R; // backup register
    volatile uint32_t BKP18R; // backup register
    volatile uint32_t BKP19R; // backup register
    volatile uint32_t BKP20R; // backup register
    volatile uint32_t BKP21R; // backup register
    volatile uint32_t BKP22R; // backup register
    volatile uint32_t BKP23R; // backup register
    volatile uint32_t BKP24R; // backup register
    volatile uint32_t BKP25R; // backup register
    volatile uint32_t BKP26R; // backup register
    volatile uint32_t BKP27R; // backup register
    volatile uint32_t BKP28R; // backup register
    volatile uint32_t BKP29R; // backup register
    volatile uint32_t BKP30R; // backup register
    volatile uint32_t BKP31R; // backup register

    static constexpr uint32_t TR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format

    static constexpr uint32_t DR_RESET_VALUE = 0x2101; // Reset value
    typedef bit_field_t<20, 0xf> DR_YT; // Year tens in BCD format
    typedef bit_field_t<16, 0xf> DR_YU; // Year units in BCD format
    typedef bit_field_t<13, 0x7> DR_WDU; // Week day units
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> DR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> DR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> DR_DU; // Date units in BCD format

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WCKSEL; // Wakeup clock selection
    static constexpr uint32_t CR_TSEDGE = 0x8; // Time-stamp event active edge
    static constexpr uint32_t CR_REFCKON = 0x10; // Reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_BYPSHAD = 0x20; // Bypass the shadow registers
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable
    static constexpr uint32_t CR_TSE = 0x800; // Time stamp enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_TSIE = 0x8000; // Time-stamp interrupt enable
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_BKP = 0x40000; // Backup
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_POL = 0x100000; // Output polarity
    typedef bit_field_t<21, 0x3> CR_OSEL; // Output selection
    static constexpr uint32_t CR_COE = 0x800000; // Calibration output enable
    static constexpr uint32_t CR_ITSE = 0x1000000; // timestamp on internal event enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ISR_ALRAWF = 0x1; // Alarm A write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ISR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ISR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ISR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ISR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ISR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ISR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ISR_ALRAF = 0x100; // Alarm A flag
    static constexpr uint32_t ISR_ALRBF = 0x200; // Alarm B flag
    static constexpr uint32_t ISR_WUTF = 0x400; // Wakeup timer flag
    static constexpr uint32_t ISR_TSF = 0x800; // Time-stamp flag
    static constexpr uint32_t ISR_TSOVF = 0x1000; // Time-stamp overflow flag
    static constexpr uint32_t ISR_TAMP1F = 0x2000; // Tamper detection flag
    static constexpr uint32_t ISR_TAMP2F = 0x4000; // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP3F = 0x8000; // RTC_TAMP3 detection flag
    static constexpr uint32_t ISR_RECALPF = 0x10000; // Recalibration pending Flag
    static constexpr uint32_t ISR_ITSF = 0x20000; // Internal tTime-stamp flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000; // Alarm B date mask
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMBR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMBR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000; // Alarm B hours mask
    static constexpr uint32_t ALRMBR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMBR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMBR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000; // Alarm B minutes mask
    typedef bit_field_t<12, 0x7> ALRMBR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMBR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMBR_MSK1 = 0x80; // Alarm B seconds mask
    typedef bit_field_t<4, 0x7> ALRMBR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMBR_SU; // Second units in BCD format

    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second
    typedef bit_field_t<0, 0x7fff> SHIFTR_SUBFS; // Subtract a fraction of a second

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<13, 0x7> TSDR_WDU; // Week day units
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> TSDR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> TSDR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> TSDR_DU; // Date units in BCD format

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSSSR_SS; // Sub second value

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

    static constexpr uint32_t TAMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMPCR_TAMP1E = 0x1; // Tamper 1 detection enable
    static constexpr uint32_t TAMPCR_TAMP1TRG = 0x2; // Active level for tamper 1
    static constexpr uint32_t TAMPCR_TAMPIE = 0x4; // Tamper interrupt enable
    static constexpr uint32_t TAMPCR_TAMP2E = 0x8; // Tamper 2 detection enable
    static constexpr uint32_t TAMPCR_TAMP2TRG = 0x10; // Active level for tamper 2
    static constexpr uint32_t TAMPCR_TAMP3E = 0x20; // Tamper 3 detection enable
    static constexpr uint32_t TAMPCR_TAMP3TRG = 0x40; // Active level for tamper 3
    static constexpr uint32_t TAMPCR_TAMPTS = 0x80; // Activate timestamp on tamper detection event
    typedef bit_field_t<8, 0x7> TAMPCR_TAMPFREQ; // Tamper sampling frequency
    typedef bit_field_t<11, 0x3> TAMPCR_TAMPFLT; // Tamper filter count
    typedef bit_field_t<13, 0x3> TAMPCR_TAMPPRCH; // Tamper precharge duration
    static constexpr uint32_t TAMPCR_TAMPPUDIS = 0x8000; // TAMPER pull-up disable
    static constexpr uint32_t TAMPCR_TAMP1IE = 0x10000; // Tamper 1 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1NOERASE = 0x20000; // Tamper 1 no erase
    static constexpr uint32_t TAMPCR_TAMP1MF = 0x40000; // Tamper 1 mask flag
    static constexpr uint32_t TAMPCR_TAMP2IE = 0x80000; // Tamper 2 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP2NOERASE = 0x100000; // Tamper 2 no erase
    static constexpr uint32_t TAMPCR_TAMP2MF = 0x200000; // Tamper 2 mask flag
    static constexpr uint32_t TAMPCR_TAMP3IE = 0x400000; // Tamper 3 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP3NOERASE = 0x800000; // Tamper 3 no erase
    static constexpr uint32_t TAMPCR_TAMP3MF = 0x1000000; // Tamper 3 mask flag

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR_RTC_ALARM_TYPE = 0x8; // RTC_ALARM on PC13 output type
    static constexpr uint32_t OR_TSINSEL = 0x2; // TIMESTAMP mapping

    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // BKP

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // BKP

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // BKP

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // BKP

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // BKP

    static constexpr uint32_t BKP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP5R_BKP; // BKP

    static constexpr uint32_t BKP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP6R_BKP; // BKP

    static constexpr uint32_t BKP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP7R_BKP; // BKP

    static constexpr uint32_t BKP8R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP8R_BKP; // BKP

    static constexpr uint32_t BKP9R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP9R_BKP; // BKP

    static constexpr uint32_t BKP10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP10R_BKP; // BKP

    static constexpr uint32_t BKP11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP11R_BKP; // BKP

    static constexpr uint32_t BKP12R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP12R_BKP; // BKP

    static constexpr uint32_t BKP13R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP13R_BKP; // BKP

    static constexpr uint32_t BKP14R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP14R_BKP; // BKP

    static constexpr uint32_t BKP15R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP15R_BKP; // BKP

    static constexpr uint32_t BKP16R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP16R_BKP; // BKP

    static constexpr uint32_t BKP17R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP17R_BKP; // BKP

    static constexpr uint32_t BKP18R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP18R_BKP; // BKP

    static constexpr uint32_t BKP19R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP19R_BKP; // BKP

    static constexpr uint32_t BKP20R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP20R_BKP; // BKP

    static constexpr uint32_t BKP21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP21R_BKP; // BKP

    static constexpr uint32_t BKP22R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP22R_BKP; // BKP

    static constexpr uint32_t BKP23R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP23R_BKP; // BKP

    static constexpr uint32_t BKP24R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP24R_BKP; // BKP

    static constexpr uint32_t BKP25R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP25R_BKP; // BKP

    static constexpr uint32_t BKP26R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP26R_BKP; // BKP

    static constexpr uint32_t BKP27R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP27R_BKP; // BKP

    static constexpr uint32_t BKP28R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP28R_BKP; // BKP

    static constexpr uint32_t BKP29R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP29R_BKP; // BKP

    static constexpr uint32_t BKP30R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP30R_BKP; // BKP

    static constexpr uint32_t BKP31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP31R_BKP; // BKP
};

// RTC: Real-time clock

struct stm32f745_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t CR; // control register
    volatile uint32_t ISR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    reserved_t<0x1> _0x18;
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t WPR; // write protection register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t SHIFTR; // shift control register
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    volatile uint32_t TSSSR; // timestamp sub second register
    volatile uint32_t CALR; // calibration register
    volatile uint32_t TAMPCR; // tamper configuration register
    volatile uint32_t ALRMASSR; // alarm A sub second register
    volatile uint32_t ALRMBSSR; // alarm B sub second register
    volatile uint32_t OR; // option register
    volatile uint32_t BKP0R; // backup register
    volatile uint32_t BKP1R; // backup register
    volatile uint32_t BKP2R; // backup register
    volatile uint32_t BKP3R; // backup register
    volatile uint32_t BKP4R; // backup register
    volatile uint32_t BKP5R; // backup register
    volatile uint32_t BKP6R; // backup register
    volatile uint32_t BKP7R; // backup register
    volatile uint32_t BKP8R; // backup register
    volatile uint32_t BKP9R; // backup register
    volatile uint32_t BKP10R; // backup register
    volatile uint32_t BKP11R; // backup register
    volatile uint32_t BKP12R; // backup register
    volatile uint32_t BKP13R; // backup register
    volatile uint32_t BKP14R; // backup register
    volatile uint32_t BKP15R; // backup register
    volatile uint32_t BKP16R; // backup register
    volatile uint32_t BKP17R; // backup register
    volatile uint32_t BKP18R; // backup register
    volatile uint32_t BKP19R; // backup register
    volatile uint32_t BKP20R; // backup register
    volatile uint32_t BKP21R; // backup register
    volatile uint32_t BKP22R; // backup register
    volatile uint32_t BKP23R; // backup register
    volatile uint32_t BKP24R; // backup register
    volatile uint32_t BKP25R; // backup register
    volatile uint32_t BKP26R; // backup register
    volatile uint32_t BKP27R; // backup register
    volatile uint32_t BKP28R; // backup register
    volatile uint32_t BKP29R; // backup register
    volatile uint32_t BKP30R; // backup register
    volatile uint32_t BKP31R; // backup register

    static constexpr uint32_t TR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format

    static constexpr uint32_t DR_RESET_VALUE = 0x2101; // Reset value
    typedef bit_field_t<20, 0xf> DR_YT; // Year tens in BCD format
    typedef bit_field_t<16, 0xf> DR_YU; // Year units in BCD format
    typedef bit_field_t<13, 0x7> DR_WDU; // Week day units
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> DR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> DR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> DR_DU; // Date units in BCD format

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WCKSEL; // Wakeup clock selection
    static constexpr uint32_t CR_TSEDGE = 0x8; // Time-stamp event active edge
    static constexpr uint32_t CR_REFCKON = 0x10; // Reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_BYPSHAD = 0x20; // Bypass the shadow registers
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable
    static constexpr uint32_t CR_TSE = 0x800; // Time stamp enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_TSIE = 0x8000; // Time-stamp interrupt enable
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_BKP = 0x40000; // Backup
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_POL = 0x100000; // Output polarity
    typedef bit_field_t<21, 0x3> CR_OSEL; // Output selection
    static constexpr uint32_t CR_COE = 0x800000; // Calibration output enable
    static constexpr uint32_t CR_ITSE = 0x1000000; // timestamp on internal event enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ISR_ALRAWF = 0x1; // Alarm A write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ISR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ISR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ISR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ISR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ISR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ISR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ISR_ALRAF = 0x100; // Alarm A flag
    static constexpr uint32_t ISR_ALRBF = 0x200; // Alarm B flag
    static constexpr uint32_t ISR_WUTF = 0x400; // Wakeup timer flag
    static constexpr uint32_t ISR_TSF = 0x800; // Time-stamp flag
    static constexpr uint32_t ISR_TSOVF = 0x1000; // Time-stamp overflow flag
    static constexpr uint32_t ISR_TAMP1F = 0x2000; // Tamper detection flag
    static constexpr uint32_t ISR_TAMP2F = 0x4000; // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP3F = 0x8000; // RTC_TAMP3 detection flag
    static constexpr uint32_t ISR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000; // Alarm B date mask
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMBR_DT; // Date tens in BCD format
    typedef bit_field_t<24, 0xf> ALRMBR_DU; // Date units or day in BCD format
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000; // Alarm B hours mask
    static constexpr uint32_t ALRMBR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMBR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> ALRMBR_HU; // Hour units in BCD format
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000; // Alarm B minutes mask
    typedef bit_field_t<12, 0x7> ALRMBR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> ALRMBR_MNU; // Minute units in BCD format
    static constexpr uint32_t ALRMBR_MSK1 = 0x80; // Alarm B seconds mask
    typedef bit_field_t<4, 0x7> ALRMBR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> ALRMBR_SU; // Second units in BCD format

    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second
    typedef bit_field_t<0, 0x7fff> SHIFTR_SUBFS; // Subtract a fraction of a second

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<13, 0x7> TSDR_WDU; // Week day units
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<8, 0xf> TSDR_MU; // Month units in BCD format
    typedef bit_field_t<4, 0x3> TSDR_DT; // Date tens in BCD format
    typedef bit_field_t<0, 0xf> TSDR_DU; // Date units in BCD format

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSSSR_SS; // Sub second value

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

    static constexpr uint32_t TAMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMPCR_TAMP1E = 0x1; // Tamper 1 detection enable
    static constexpr uint32_t TAMPCR_TAMP1TRG = 0x2; // Active level for tamper 1
    static constexpr uint32_t TAMPCR_TAMPIE = 0x4; // Tamper interrupt enable
    static constexpr uint32_t TAMPCR_TAMP2E = 0x8; // Tamper 2 detection enable
    static constexpr uint32_t TAMPCR_TAMP2TRG = 0x10; // Active level for tamper 2
    static constexpr uint32_t TAMPCR_TAMP3E = 0x20; // Tamper 3 detection enable
    static constexpr uint32_t TAMPCR_TAMP3TRG = 0x40; // Active level for tamper 3
    static constexpr uint32_t TAMPCR_TAMPTS = 0x80; // Activate timestamp on tamper detection event
    typedef bit_field_t<8, 0x7> TAMPCR_TAMPFREQ; // Tamper sampling frequency
    typedef bit_field_t<11, 0x3> TAMPCR_TAMPFLT; // Tamper filter count
    typedef bit_field_t<13, 0x3> TAMPCR_TAMPPRCH; // Tamper precharge duration
    static constexpr uint32_t TAMPCR_TAMPPUDIS = 0x8000; // TAMPER pull-up disable
    static constexpr uint32_t TAMPCR_TAMP1IE = 0x10000; // Tamper 1 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1NOERASE = 0x20000; // Tamper 1 no erase
    static constexpr uint32_t TAMPCR_TAMP1MF = 0x40000; // Tamper 1 mask flag
    static constexpr uint32_t TAMPCR_TAMP2IE = 0x80000; // Tamper 2 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP2NOERASE = 0x100000; // Tamper 2 no erase
    static constexpr uint32_t TAMPCR_TAMP2MF = 0x200000; // Tamper 2 mask flag
    static constexpr uint32_t TAMPCR_TAMP3IE = 0x400000; // Tamper 3 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP3NOERASE = 0x800000; // Tamper 3 no erase
    static constexpr uint32_t TAMPCR_TAMP3MF = 0x1000000; // Tamper 3 mask flag

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR_RTC_ALARM_TYPE = 0x1; // RTC_ALARM on PC13 output type
    static constexpr uint32_t OR_RTC_OUT_RMP = 0x2; // RTC_OUT remap

    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // BKP

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // BKP

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // BKP

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // BKP

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // BKP

    static constexpr uint32_t BKP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP5R_BKP; // BKP

    static constexpr uint32_t BKP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP6R_BKP; // BKP

    static constexpr uint32_t BKP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP7R_BKP; // BKP

    static constexpr uint32_t BKP8R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP8R_BKP; // BKP

    static constexpr uint32_t BKP9R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP9R_BKP; // BKP

    static constexpr uint32_t BKP10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP10R_BKP; // BKP

    static constexpr uint32_t BKP11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP11R_BKP; // BKP

    static constexpr uint32_t BKP12R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP12R_BKP; // BKP

    static constexpr uint32_t BKP13R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP13R_BKP; // BKP

    static constexpr uint32_t BKP14R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP14R_BKP; // BKP

    static constexpr uint32_t BKP15R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP15R_BKP; // BKP

    static constexpr uint32_t BKP16R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP16R_BKP; // BKP

    static constexpr uint32_t BKP17R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP17R_BKP; // BKP

    static constexpr uint32_t BKP18R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP18R_BKP; // BKP

    static constexpr uint32_t BKP19R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP19R_BKP; // BKP

    static constexpr uint32_t BKP20R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP20R_BKP; // BKP

    static constexpr uint32_t BKP21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP21R_BKP; // BKP

    static constexpr uint32_t BKP22R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP22R_BKP; // BKP

    static constexpr uint32_t BKP23R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP23R_BKP; // BKP

    static constexpr uint32_t BKP24R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP24R_BKP; // BKP

    static constexpr uint32_t BKP25R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP25R_BKP; // BKP

    static constexpr uint32_t BKP26R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP26R_BKP; // BKP

    static constexpr uint32_t BKP27R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP27R_BKP; // BKP

    static constexpr uint32_t BKP28R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP28R_BKP; // BKP

    static constexpr uint32_t BKP29R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP29R_BKP; // BKP

    static constexpr uint32_t BKP30R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP30R_BKP; // BKP

    static constexpr uint32_t BKP31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP31R_BKP; // BKP
};

template<>
struct peripheral_t<STM32F722, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f722_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f722_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f722_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f722_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f722_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f745_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;

template<int INST> struct rtc_traits {};

template<> struct rtc_traits<0>
{
    using rtc = rtc_t;
    static constexpr signal_t REFIN = RTC_REFIN;
};
