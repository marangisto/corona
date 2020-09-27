#pragma once

////
//
//      STM32F2 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32f215_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t CR; // control register
    volatile uint32_t ISR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CALIBR; // calibration register
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t WPR; // write protection register
    reserved_t<0x2> _0x28;
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    reserved_t<0x2> _0x38;
    volatile uint32_t TAFCR; // tamper and alternate function configuration register
    reserved_t<0x3> _0x44;
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
    static constexpr uint32_t CR_COE = 0x800000; // Calibration output enable
    typedef bit_field_t<21, 0x3> CR_OSEL; // Output selection
    static constexpr uint32_t CR_POL = 0x100000; // Output polarity
    static constexpr uint32_t CR_BKP = 0x40000; // Backup
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_TSIE = 0x8000; // Time-stamp interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_TSE = 0x800; // Time stamp enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_DCE = 0x80; // Coarse digital calibration enable
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_REFCKON = 0x10; // Reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_TSEDGE = 0x8; // Time-stamp event active edge
    typedef bit_field_t<0, 0x7> CR_WCKSEL; // Wakeup clock selection

    static constexpr uint32_t ISR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ISR_TAMP1F = 0x2000; // Tamper detection flag
    static constexpr uint32_t ISR_TSOVF = 0x1000; // Time-stamp overflow flag
    static constexpr uint32_t ISR_TSF = 0x800; // Time-stamp flag
    static constexpr uint32_t ISR_WUTF = 0x400; // Wakeup timer flag
    static constexpr uint32_t ISR_ALRBF = 0x200; // Alarm B flag
    static constexpr uint32_t ISR_ALRAF = 0x100; // Alarm A flag
    static constexpr uint32_t ISR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ISR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ISR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ISR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ISR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ISR_ALRAWF = 0x1; // Alarm A write flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x1fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits

    static constexpr uint32_t CALIBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALIBR_DCS = 0x80; // Digital calibration sign
    typedef bit_field_t<0, 0x1f> CALIBR_DC; // Digital calibration

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


    static constexpr uint32_t TAFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAFCR_ALARMOUTTYPE = 0x40000; // AFO_ALARM output type
    static constexpr uint32_t TAFCR_TSINSEL = 0x20000; // TIMESTAMP mapping
    static constexpr uint32_t TAFCR_TAMP1INSEL = 0x10000; // TAMPER1 mapping
    static constexpr uint32_t TAFCR_TAMPIE = 0x4; // Tamper interrupt enable
    static constexpr uint32_t TAFCR_TAMP1TRG = 0x2; // Active level for tamper 1
    static constexpr uint32_t TAFCR_TAMP1E = 0x1; // Tamper 1 detection enable


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
};

template<>
struct peripheral_t<STM32F215, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f215_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f215_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;

template<int INST> struct rtc_traits {};

template<> struct rtc_traits<0>
{
    using rtc = rtc_t;
    static constexpr signal_t AF1 = RTC_AF1;
    static constexpr signal_t AF2 = RTC_AF2;
    static constexpr signal_t REFIN = RTC_REFIN;
};
