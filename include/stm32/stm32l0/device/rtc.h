#pragma once

////
//
//      STM32L0 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32l052_rtc_t
{
    volatile uint32_t TR; // RTC time register
    volatile uint32_t DR; // RTC date register
    volatile uint32_t CR; // RTC control register
    volatile uint32_t ISR; // RTC initialization and status register
    volatile uint32_t PRER; // RTC prescaler register
    volatile uint32_t WUTR; // RTC wakeup timer register
    reserved_t<0x1> _0x18;
    volatile uint32_t ALRMAR; // RTC alarm A register
    volatile uint32_t ALRMBR; // RTC alarm B register
    volatile uint32_t WPR; // write protection register
    volatile uint32_t SSR; // RTC sub second register
    volatile uint32_t SHIFTR; // RTC shift control register
    volatile uint32_t TSTR; // RTC timestamp time register
    volatile uint32_t TSDR; // RTC timestamp date register
    volatile uint32_t TSSSR; // RTC time-stamp sub second register
    volatile uint32_t CALR; // RTC calibration register
    volatile uint32_t TAMPCR; // RTC tamper configuration register
    volatile uint32_t ALRMASSR; // RTC alarm A sub second register
    volatile uint32_t ALRMBSSR; // RTC alarm B sub second register
    volatile uint32_t OR; // option register
    volatile uint32_t BKP0R; // RTC backup registers
    volatile uint32_t BKP1R; // RTC backup registers
    volatile uint32_t BKP2R; // RTC backup registers
    volatile uint32_t BKP3R; // RTC backup registers
    volatile uint32_t BKP4R; // RTC backup registers

    static constexpr uint32_t TR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_BKP = 0x40000; // Backup
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_TSIE = 0x8000; // Time-stamp interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_TSE = 0x800; // timestamp enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_BYPSHAD = 0x20; // Bypass the shadow registers
    static constexpr uint32_t CR_REFCKON = 0x10; // RTC_REFIN reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_TSEDGE = 0x8; // Time-stamp event active edge
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // Wakeup clock selection

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TAMP2F = 0x4000; // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP1F = 0x2000; // RTC_TAMP1 detection flag
    static constexpr uint32_t ISR_TSOVF = 0x1000; // Time-stamp overflow flag
    static constexpr uint32_t ISR_TSF = 0x800; // Time-stamp flag
    static constexpr uint32_t ISR_WUTF = 0x400; // Wakeup timer flag
    static constexpr uint32_t ISR_ALRBF = 0x200; // Alarm B flag
    static constexpr uint32_t ISR_ALRAF = 0x100; // Alarm A flag
    static constexpr uint32_t ISR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ISR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ISR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ISR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ISR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ISR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ISR_ALRAWF = 0x1; // Alarm A write flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0xffff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format.
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format.
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format.
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format.
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format.
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format.
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format.
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format.

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
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format.
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format.
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format.
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format.
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format.
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format.

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
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use a 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

    static constexpr uint32_t TAMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMPCR_TAMP2MF = 0x200000; // Tamper 2 mask flag
    static constexpr uint32_t TAMPCR_TAMP2NOERASE = 0x100000; // Tamper 2 no erase
    static constexpr uint32_t TAMPCR_TAMP2IE = 0x80000; // Tamper 2 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1MF = 0x40000; // Tamper 1 mask flag
    static constexpr uint32_t TAMPCR_TAMP1NOERASE = 0x20000; // Tamper 1 no erase
    static constexpr uint32_t TAMPCR_TAMP1IE = 0x10000; // Tamper 1 interrupt enable
    static constexpr uint32_t TAMPCR_TAMPPUDIS = 0x8000; // RTC_TAMPx pull-up disable
    typedef bit_field_t<13, 0x3> TAMPCR_TAMPPRCH; // RTC_TAMPx precharge duration
    typedef bit_field_t<11, 0x3> TAMPCR_TAMPFLT; // RTC_TAMPx filter count
    typedef bit_field_t<8, 0x7> TAMPCR_TAMPFREQ; // Tamper sampling frequency
    static constexpr uint32_t TAMPCR_TAMPTS = 0x80; // Activate timestamp on tamper detection event
    static constexpr uint32_t TAMPCR_TAMP2_TRG = 0x10; // Active level for RTC_TAMP2 input
    static constexpr uint32_t TAMPCR_TAMP2E = 0x8; // RTC_TAMP2 input detection enable
    static constexpr uint32_t TAMPCR_TAMPIE = 0x4; // Tamper interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1TRG = 0x2; // Active level for RTC_TAMP1 input
    static constexpr uint32_t TAMPCR_TAMP1E = 0x1; // RTC_TAMP1 input detection enable

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR_RTC_OUT_RMP = 0x2; // RTC_ALARM on PC13 output type
    static constexpr uint32_t OR_RTC_ALARM_TYPE = 0x1; // RTC_ALARM on PC13 output type

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
};

template<>
struct peripheral_t<STM32L052, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L053, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L062, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L063, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l052_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;

template<int INST> struct rtc_traits {};

template<> struct rtc_traits<0>
{
    using rtc = rtc_t;
    static constexpr signal_t OUT_ALARM = RTC_OUT_ALARM;
    static constexpr signal_t OUT_CALIB = RTC_OUT_CALIB;
    static constexpr signal_t REFIN = RTC_REFIN;
};
