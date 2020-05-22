#pragma once

////
//
//      STM32L0 RTC peripherals
//
////

////
//
//      Real-time clock
//
////

struct stm32l0x0_rtc_t
{
    volatile uint32_t TR;       // [read-write] RTC time register
    volatile uint32_t DR;       // [read-write] RTC date register
    volatile uint32_t CR;       // RTC control register
    volatile uint32_t ISR;      // RTC initialization and status register
    volatile uint32_t PRER;     // [read-write] RTC prescaler register
    volatile uint32_t WUTR;     // [read-write] RTC wakeup timer register
    reserved_t<0x1> _0x1c;
    volatile uint32_t ALRMAR;   // [read-write] RTC alarm A register
    volatile uint32_t ALRMBR;   // [read-write] RTC alarm B register
    volatile uint32_t WPR;      // [write-only] write protection register
    volatile uint32_t SSR;      // [read-only] RTC sub second register
    volatile uint32_t SHIFTR;   // [write-only] RTC shift control register
    volatile uint32_t TSTR;     // [read-only] RTC timestamp time register
    volatile uint32_t TSDR;     // [read-only] RTC timestamp date register
    volatile uint32_t TSSSR;    // [read-only] RTC time-stamp sub second register
    volatile uint32_t CALR;     // [read-write] RTC calibration register
    volatile uint32_t TAMPCR;   // [read-write] RTC tamper configuration register
    volatile uint32_t ALRMASSR; // [read-write] RTC alarm A sub second register
    volatile uint32_t ALRMBSSR; // [read-write] RTC alarm B sub second register
    volatile uint32_t OR;       // [read-write] option register
    volatile uint32_t BKP0R;    // [read-write] RTC backup registers
    volatile uint32_t BKP1R;    // [read-write] RTC backup registers
    volatile uint32_t BKP2R;    // [read-write] RTC backup registers
    volatile uint32_t BKP3R;    // [read-write] RTC backup registers
    volatile uint32_t BKP4R;    // [read-write] RTC backup registers

    static constexpr uint32_t TR_RESET_VALUE = 0x0;
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t TR_HT =           // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR_HU =           // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR_MNT =          // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR_MNU =          // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR_ST =           // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR_SU =           // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_YT =         // Year tens in BCD format
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_YU =         // Year units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_WDU =        // Week day units
        bit_field_t<13, 0x7>::value<X>();
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    template<uint32_t X>
    static constexpr uint32_t DR_MU =         // Month units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_DT =         // Date tens in BCD format
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_DU =         // Date units in BCD format
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_COE = 0x800000;  // Calibration output enable
    template<uint32_t X>
    static constexpr uint32_t CR_OSEL =           // Output selection
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t CR_POL = 0x100000;  // Output polarity
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_BKP = 0x40000;   // Backup
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_TSIE = 0x8000;   // Time-stamp interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000;  // Wakeup timer interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_TSE = 0x800;     // timestamp enable
    static constexpr uint32_t CR_WUTE = 0x400;    // Wakeup timer enable
    static constexpr uint32_t CR_ALRBE = 0x200;   // Alarm B enable
    static constexpr uint32_t CR_ALRAE = 0x100;   // Alarm A enable
    static constexpr uint32_t CR_FMT = 0x40;      // Hour format
    static constexpr uint32_t CR_BYPSHAD = 0x20;  // Bypass the shadow registers
    static constexpr uint32_t CR_REFCKON = 0x10;  // RTC_REFIN reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_TSEDGE = 0x8;    // Time-stamp event active edge
    template<uint32_t X>
    static constexpr uint32_t CR_WUCKSEL =        // Wakeup clock selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_TAMP2F = 0x4000; // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP1F = 0x2000; // RTC_TAMP1 detection flag
    static constexpr uint32_t ISR_TSOVF = 0x1000;  // Time-stamp overflow flag
    static constexpr uint32_t ISR_TSF = 0x800;     // Time-stamp flag
    static constexpr uint32_t ISR_WUTF = 0x400;    // Wakeup timer flag
    static constexpr uint32_t ISR_ALRBF = 0x200;   // Alarm B flag
    static constexpr uint32_t ISR_ALRAF = 0x100;   // Alarm A flag
    static constexpr uint32_t ISR_INIT = 0x80;     // Initialization mode
    static constexpr uint32_t ISR_INITF = 0x40;    // Initialization flag
    static constexpr uint32_t ISR_RSF = 0x20;      // Registers synchronization flag
    static constexpr uint32_t ISR_INITS = 0x10;    // Initialization status flag
    static constexpr uint32_t ISR_SHPF = 0x8;      // Shift operation pending
    static constexpr uint32_t ISR_WUTWF = 0x4;     // Wakeup timer write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2;    // Alarm B write flag
    static constexpr uint32_t ISR_ALRAWF = 0x1;    // Alarm A write flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_A =   // Asynchronous prescaler factor
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_S =   // Synchronous prescaler factor
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WUTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WUTR_WUT =   // Wakeup auto-reload value bits
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0;
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000;  // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DT =                // Date tens in BCD format.
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DU =                // Date units or day in BCD format.
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000;    // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000;      // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HT =                // Hour tens in BCD format.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HU =                // Hour units in BCD format.
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000;      // Alarm A minutes mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNT =               // Minute tens in BCD format.
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNU =               // Minute units in BCD format.
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK1 = 0x80;        // Alarm A seconds mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_ST =                // Second tens in BCD format.
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_SU =                // Second units in BCD format.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0;
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000;  // Alarm B date mask
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_DT =                // Date tens in BCD format
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_DU =                // Date units or day in BCD format
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000;    // Alarm B hours mask
    static constexpr uint32_t ALRMBR_PM = 0x400000;      // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_HT =                // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_HU =                // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000;      // Alarm B minutes mask
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_MNT =               // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_MNU =               // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t ALRMBR_MSK1 = 0x80;        // Alarm B seconds mask
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_ST =                // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBR_SU =                // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t WPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPR_KEY =   // Write protection key
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SSR_SS =   // Sub second value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second
    template<uint32_t X>
    static constexpr uint32_t SHIFTR_SUBFS =             // Subtract a fraction of a second
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t TSTR_HT =           // Hour tens in BCD format.
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_HU =           // Hour units in BCD format.
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNT =          // Minute tens in BCD format.
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNU =          // Minute units in BCD format.
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_ST =           // Second tens in BCD format.
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_SU =           // Second units in BCD format.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TSDR_WDU =        // Week day units
        bit_field_t<13, 0x7>::value<X>();
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    template<uint32_t X>
    static constexpr uint32_t TSDR_MU =         // Month units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSDR_DT =         // Date tens in BCD format
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSDR_DU =         // Date units in BCD format
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TSSSR_SS =   // Sub second value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CALR_RESET_VALUE = 0x0;
    static constexpr uint32_t CALR_CALP = 0x8000;   // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000;  // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    template<uint32_t X>
    static constexpr uint32_t CALR_CALM =           // Calibration minus
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t TAMPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMPCR_TAMP2MF = 0x200000;      // Tamper 2 mask flag
    static constexpr uint32_t TAMPCR_TAMP2NOERASE = 0x100000; // Tamper 2 no erase
    static constexpr uint32_t TAMPCR_TAMP2IE = 0x80000;       // Tamper 2 interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1MF = 0x40000;       // Tamper 1 mask flag
    static constexpr uint32_t TAMPCR_TAMP1NOERASE = 0x20000;  // Tamper 1 no erase
    static constexpr uint32_t TAMPCR_TAMP1IE = 0x10000;       // Tamper 1 interrupt enable
    static constexpr uint32_t TAMPCR_TAMPPUDIS = 0x8000;      // RTC_TAMPx pull-up disable
    template<uint32_t X>
    static constexpr uint32_t TAMPCR_TAMPPRCH =               // RTC_TAMPx precharge duration
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMPCR_TAMPFLT =                // RTC_TAMPx filter count
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMPCR_TAMPFREQ =               // Tamper sampling frequency
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t TAMPCR_TAMPTS = 0x80;           // Activate timestamp on tamper detection event
    static constexpr uint32_t TAMPCR_TAMP2_TRG = 0x10;        // Active level for RTC_TAMP2 input
    static constexpr uint32_t TAMPCR_TAMP2E = 0x8;            // RTC_TAMP2 input detection enable
    static constexpr uint32_t TAMPCR_TAMPIE = 0x4;            // Tamper interrupt enable
    static constexpr uint32_t TAMPCR_TAMP1TRG = 0x2;          // Active level for RTC_TAMP1 input
    static constexpr uint32_t TAMPCR_TAMP1E = 0x1;            // RTC_TAMP1 input detection enable

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ALRMASSR_MASKSS =   // Mask the most-significant bits starting at this bit
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMASSR_SS =       // Sub seconds value
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ALRMBSSR_MASKSS =   // Mask the most-significant bits starting at this bit
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBSSR_SS =       // Sub seconds value
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t OR_RESET_VALUE = 0x0;
    static constexpr uint32_t OR_RTC_OUT_RMP = 0x2;    // RTC_ALARM on PC13 output type
    static constexpr uint32_t OR_RTC_ALARM_TYPE = 0x1; // RTC_ALARM on PC13 output type

    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32L0x0, RTC>
{
    typedef stm32l0x0_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, RTC>
{
    typedef stm32l0x0_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, RTC>
{
    typedef stm32l0x0_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, RTC>
{
    typedef stm32l0x0_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;
