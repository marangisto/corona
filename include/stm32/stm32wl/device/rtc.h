#pragma once

////
//
//      STM32WL RTC peripherals
//
///

// RTC: Real-time clock

struct stm32wl5x_cm0p_rtc_t
{
    volatile uint32_t TR; // TR
    volatile uint32_t DR; // DR
    volatile uint32_t SSR; // SSR
    volatile uint32_t ICSR; // ICSR
    volatile uint32_t PRER; // PRER
    volatile uint32_t WUTR; // WUTR
    volatile uint32_t CR; // CR
    reserved_t<0x2> _0x1c;
    volatile uint32_t WPR; // write protection register
    volatile uint32_t CALR; // CALR
    volatile uint32_t SHIFTR; // SHIFTR
    volatile uint32_t TSTR; // TSTR
    volatile uint32_t TSDR; // TSDR
    volatile uint32_t TSSSR; // TSSSR
    reserved_t<0x1> _0x3c;
    volatile uint32_t ALRMAR; // ALRMAR
    volatile uint32_t ALRMASSR; // ALRMASSR
    volatile uint32_t ALRMBR; // ALRMBR
    volatile uint32_t ALRMBSSR; // ALRMBSSR
    volatile uint32_t SR; // SR
    volatile uint32_t MISR; // MISR
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // SCR
    reserved_t<0x4> _0x60;
    volatile uint32_t ALRABINR; // RTC alarm A binary mode register
    volatile uint32_t ALRBBINR; // RTC alarm B binary mode register

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

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SSR_SS; // Synchronous binary counter

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag
    typedef bit_field_t<10, 0x7> ICSR_BCDU; // BCD update
    typedef bit_field_t<8, 0x3> ICSR_BIN; // Binary mode
    static constexpr uint32_t ICSR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ICSR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ICSR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ICSR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ICSR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ICSR_WUTWF = 0x4; // Wakeup timer write flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<16, 0xffff> WUTR_WUTOCLR; // Wakeup auto-reload output clear value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_OUT2EN = 0x80000000; // RTC_OUT2 output enable
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM output type
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000; // TAMPALRM pull-up enable
    static constexpr uint32_t CR_TAMPOE = 0x4000000; // Tamper detection output enable on TAMPALRM
    static constexpr uint32_t CR_TAMPTS = 0x2000000; // Activate timestamp on tamper detection event
    static constexpr uint32_t CR_ITSE = 0x1000000; // timestamp on internal event enable
    static constexpr uint32_t CR_COE = 0x800000; // Calibration output enable
    typedef bit_field_t<21, 0x3> CR_OSEL; // Output selection
    static constexpr uint32_t CR_POL = 0x100000; // Output polarity
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_BKP = 0x40000; // Backup
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_TSIE = 0x8000; // Timestamp interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_TSE = 0x800; // timestamp enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_SSRUIE = 0x80; // SSR underflow interrupt enable
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_BYPSHAD = 0x20; // Bypass the shadow registers
    static constexpr uint32_t CR_REFCKON = 0x10; // RTC_REFIN reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_TSEDGE = 0x8; // Timestamp event active edge
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // Wakeup clock selection


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use a 16-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // CALW16
    static constexpr uint32_t CALR_LPCAL = 0x1000; // Calibration low-power mode
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

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
    typedef bit_field_t<0, 0xffffffff> TSSSR_SS; // Sub second value


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
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format.
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format.

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMASSR_SSCLR = 0x80000000; // Clear synchronous counter on alarm (Binary mode only)
    typedef bit_field_t<24, 0x3f> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value

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

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ALRMBSSR_SSCLR = 0x80000000; // Clear synchronous counter on alarm (Binary mode only)
    typedef bit_field_t<24, 0x3f> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_SSRUF = 0x40; // SSR underflow flag
    static constexpr uint32_t SR_ITSF = 0x20; // Internal timestamp flag
    static constexpr uint32_t SR_TSOVF = 0x10; // Timestamp overflow flag
    static constexpr uint32_t SR_TSF = 0x8; // Timestamp flag
    static constexpr uint32_t SR_WUTF = 0x4; // Wakeup timer flag
    static constexpr uint32_t SR_ALRBF = 0x2; // Alarm B flag
    static constexpr uint32_t SR_ALRAF = 0x1; // Alarm A flag

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_SSRUMF = 0x40; // SSR underflow masked flag
    static constexpr uint32_t MISR_ITSMF = 0x20; // Internal timestamp masked flag
    static constexpr uint32_t MISR_TSOVMF = 0x10; // Timestamp overflow masked flag
    static constexpr uint32_t MISR_TSMF = 0x8; // Timestamp masked flag
    static constexpr uint32_t MISR_WUTMF = 0x4; // Wakeup timer masked flag
    static constexpr uint32_t MISR_ALRBMF = 0x2; // Alarm B masked flag
    static constexpr uint32_t MISR_ALRAMF = 0x1; // Alarm A masked flag


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CSSRUF = 0x40; // Clear SSR underflow flag
    static constexpr uint32_t SCR_CITSF = 0x20; // Clear internal timestamp flag
    static constexpr uint32_t SCR_CTSOVF = 0x10; // Clear timestamp overflow flag
    static constexpr uint32_t SCR_CTSF = 0x8; // Clear timestamp flag
    static constexpr uint32_t SCR_CWUTF = 0x4; // Clear wakeup timer flag
    static constexpr uint32_t SCR_CALRBF = 0x2; // Clear alarm B flag
    static constexpr uint32_t SCR_CALRAF = 0x1; // Clear alarm A flag


    static constexpr uint32_t ALRABINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ALRABINR_SS; // Synchronous counter alarm value in Binary mode

    static constexpr uint32_t ALRBBINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ALRBBINR_SS; // Synchronous counter alarm value in Binary mode
};

template<>
struct peripheral_t<STM32WL5x_CM0P, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32wl5x_cm0p_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32wl5x_cm0p_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32wl5x_cm0p_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;

template<int INST> struct rtc_traits {};

template<> struct rtc_traits<0>
{
    using rtc = rtc_t;
    static constexpr signal_t REFIN = RTC_REFIN;
};
