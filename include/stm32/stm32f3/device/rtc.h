#pragma once

////
//
//      STM32F3 RTC peripherals
//
////

////
//
//      Real-time clock
//
////

struct stm32f301_rtc_t
{
    volatile uint32_t TR;       // [read-write] time register
    volatile uint32_t DR;       // [read-write] date register
    volatile uint32_t CR;       // [read-write] control register
    volatile uint32_t ISR;      // initialization and status register
    volatile uint32_t PRER;     // [read-write] prescaler register
    volatile uint32_t WUTR;     // [read-write] wakeup timer register
    reserved_t<0x1> _0x1c;
    volatile uint32_t ALRMAR;   // [read-write] alarm A register
    volatile uint32_t ALRMBR;   // [read-write] alarm B register
    volatile uint32_t WPR;      // [write-only] write protection register
    volatile uint32_t SSR;      // [read-only] sub second register
    volatile uint32_t SHIFTR;   // [write-only] shift control register
    volatile uint32_t TSTR;     // [read-only] time stamp time register
    volatile uint32_t TSDR;     // [read-only] time stamp date register
    volatile uint32_t TSSSR;    // [read-only] timestamp sub second register
    volatile uint32_t CALR;     // [read-write] calibration register
    volatile uint32_t TAFCR;    // [read-write] tamper and alternate function configuration register
    volatile uint32_t ALRMASSR; // [read-write] alarm A sub second register
    volatile uint32_t ALRMBSSR; // [read-write] alarm B sub second register
    reserved_t<0x1> _0x50;
    volatile uint32_t BKP0R;    // [read-write] backup register
    volatile uint32_t BKP1R;    // [read-write] backup register
    volatile uint32_t BKP2R;    // [read-write] backup register
    volatile uint32_t BKP3R;    // [read-write] backup register
    volatile uint32_t BKP4R;    // [read-write] backup register
    volatile uint32_t BKP5R;    // [read-write] backup register
    volatile uint32_t BKP6R;    // [read-write] backup register
    volatile uint32_t BKP7R;    // [read-write] backup register
    volatile uint32_t BKP8R;    // [read-write] backup register
    volatile uint32_t BKP9R;    // [read-write] backup register
    volatile uint32_t BKP10R;   // [read-write] backup register
    volatile uint32_t BKP11R;   // [read-write] backup register
    volatile uint32_t BKP12R;   // [read-write] backup register
    volatile uint32_t BKP13R;   // [read-write] backup register
    volatile uint32_t BKP14R;   // [read-write] backup register
    volatile uint32_t BKP15R;   // [read-write] backup register
    volatile uint32_t BKP16R;   // [read-write] backup register
    volatile uint32_t BKP17R;   // [read-write] backup register
    volatile uint32_t BKP18R;   // [read-write] backup register
    volatile uint32_t BKP19R;   // [read-write] backup register
    volatile uint32_t BKP20R;   // [read-write] backup register
    volatile uint32_t BKP21R;   // [read-write] backup register
    volatile uint32_t BKP22R;   // [read-write] backup register
    volatile uint32_t BKP23R;   // [read-write] backup register
    volatile uint32_t BKP24R;   // [read-write] backup register
    volatile uint32_t BKP25R;   // [read-write] backup register
    volatile uint32_t BKP26R;   // [read-write] backup register
    volatile uint32_t BKP27R;   // [read-write] backup register
    volatile uint32_t BKP28R;   // [read-write] backup register
    volatile uint32_t BKP29R;   // [read-write] backup register
    volatile uint32_t BKP30R;   // [read-write] backup register
    volatile uint32_t BKP31R;   // [read-write] backup register

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

    static constexpr uint32_t DR_RESET_VALUE = 0x2101;
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
    template<uint32_t X>
    static constexpr uint32_t CR_WCKSEL =         // Wakeup clock selection
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CR_TSEDGE = 0x8;    // Time-stamp event active edge
    static constexpr uint32_t CR_REFCKON = 0x10;  // Reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_BYPSHAD = 0x20;  // Bypass the shadow registers
    static constexpr uint32_t CR_FMT = 0x40;      // Hour format
    static constexpr uint32_t CR_ALRAE = 0x100;   // Alarm A enable
    static constexpr uint32_t CR_ALRBE = 0x200;   // Alarm B enable
    static constexpr uint32_t CR_WUTE = 0x400;    // Wakeup timer enable
    static constexpr uint32_t CR_TSE = 0x800;     // Time stamp enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000;  // Wakeup timer interrupt enable
    static constexpr uint32_t CR_TSIE = 0x8000;   // Time-stamp interrupt enable
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_BKP = 0x40000;   // Backup
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_POL = 0x100000;  // Output polarity
    template<uint32_t X>
    static constexpr uint32_t CR_OSEL =           // Output selection
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t CR_COE = 0x800000;  // Calibration output enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x7;
    static constexpr uint32_t ISR_TAMP1F = 0x2000;   // Tamper detection flag
    static constexpr uint32_t ISR_TSOVF = 0x1000;    // Time-stamp overflow flag
    static constexpr uint32_t ISR_TSF = 0x800;       // Time-stamp flag
    static constexpr uint32_t ISR_WUTF = 0x400;      // Wakeup timer flag
    static constexpr uint32_t ISR_ALRBF = 0x200;     // Alarm B flag
    static constexpr uint32_t ISR_ALRAF = 0x100;     // Alarm A flag
    static constexpr uint32_t ISR_INIT = 0x80;       // Initialization mode
    static constexpr uint32_t ISR_INITF = 0x40;      // Initialization flag
    static constexpr uint32_t ISR_RSF = 0x20;        // Registers synchronization flag
    static constexpr uint32_t ISR_INITS = 0x10;      // Initialization status flag
    static constexpr uint32_t ISR_WUTWF = 0x4;       // Wakeup timer write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2;      // Alarm B write flag
    static constexpr uint32_t ISR_ALRAWF = 0x1;      // Alarm A write flag
    static constexpr uint32_t ISR_SHPF = 0x8;        // Shift operation pending
    static constexpr uint32_t ISR_TAMP2F = 0x4000;   // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP3F = 0x8000;   // RTC_TAMP3 detection flag
    static constexpr uint32_t ISR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff;
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_A =   // Asynchronous prescaler factor
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_S =   // Synchronous prescaler factor
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t WUTR_WUT =   // Wakeup auto-reload value bits
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0;
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000;  // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DT =                // Date tens in BCD format
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DU =                // Date units or day in BCD format
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000;    // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000;      // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HT =                // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HU =                // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000;      // Alarm A minutes mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNT =               // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNU =               // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK1 = 0x80;        // Alarm A seconds mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_ST =                // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_SU =                // Second units in BCD format
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
    template<uint32_t X>
    static constexpr uint32_t TSTR_SU =           // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_ST =           // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNU =          // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNT =          // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_HU =           // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_HT =           // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

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

    static constexpr uint32_t TAFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAFCR_TAMP1E = 0x1;         // Tamper 1 detection enable
    static constexpr uint32_t TAFCR_TAMP1TRG = 0x2;       // Active level for tamper 1
    static constexpr uint32_t TAFCR_TAMPIE = 0x4;         // Tamper interrupt enable
    static constexpr uint32_t TAFCR_TAMP2E = 0x8;         // Tamper 2 detection enable
    static constexpr uint32_t TAFCR_TAMP2TRG = 0x10;      // Active level for tamper 2
    static constexpr uint32_t TAFCR_TAMPTS = 0x80;        // Activate timestamp on tamper detection event
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPFREQ =            // Tamper sampling frequency
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPFLT =             // Tamper filter count
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPPRCH =            // Tamper precharge duration
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t TAFCR_TAMPPUDIS = 0x8000;   // TAMPER pull-up disable
    static constexpr uint32_t TAFCR_PC13VALUE = 0x40000;  // PC13 value
    static constexpr uint32_t TAFCR_PC13MODE = 0x80000;   // PC13 mode
    static constexpr uint32_t TAFCR_PC14VALUE = 0x100000; // PC14 value
    static constexpr uint32_t TAFCR_PC14MODE = 0x200000;  // PC 14 mode
    static constexpr uint32_t TAFCR_PC15VALUE = 0x400000; // PC15 value
    static constexpr uint32_t TAFCR_PC15MODE = 0x800000;  // PC15 mode

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

    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP8R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP9R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP10R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP11R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP12R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP13R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP14R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP15R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP16R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP17R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP18R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP19R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP20R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP21R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP22R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP23R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP24R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP25R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP26R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP27R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP28R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP29R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP30R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP31R_RESET_VALUE = 0x0;
};


////
//
//      Real-time clock
//
////

struct stm32f302_rtc_t
{
    volatile uint32_t TR;       // [read-write] time register
    volatile uint32_t DR;       // [read-write] date register
    volatile uint32_t CR;       // [read-write] control register
    volatile uint32_t ISR;      // initialization and status register
    volatile uint32_t PRER;     // [read-write] prescaler register
    volatile uint32_t WUTR;     // [read-write] wakeup timer register
    reserved_t<0x1> _0x1c;
    volatile uint32_t ALRMAR;   // [read-write] alarm A register
    volatile uint32_t ALRMBR;   // [read-write] alarm B register
    volatile uint32_t WPR;      // [write-only] write protection register
    volatile uint32_t SSR;      // [read-only] sub second register
    volatile uint32_t SHIFTR;   // [write-only] shift control register
    volatile uint32_t TSTR;     // [read-only] time stamp time register
    volatile uint32_t TSDR;     // [read-only] time stamp date register
    volatile uint32_t TSSSR;    // [read-only] timestamp sub second register
    volatile uint32_t CALR;     // [read-write] calibration register
    volatile uint32_t TAFCR;    // [read-write] tamper and alternate function configuration register
    volatile uint32_t ALRMASSR; // [read-write] alarm A sub second register
    volatile uint32_t ALRMBSSR; // [read-write] alarm B sub second register
    reserved_t<0x1> _0x50;
    volatile uint32_t BKP0R;    // [read-write] backup register
    volatile uint32_t BKP1R;    // [read-write] backup register
    volatile uint32_t BKP2R;    // [read-write] backup register
    volatile uint32_t BKP3R;    // [read-write] backup register
    volatile uint32_t BKP4R;    // [read-write] backup register
    volatile uint32_t BKP5R;    // [read-write] backup register
    volatile uint32_t BKP6R;    // [read-write] backup register
    volatile uint32_t BKP7R;    // [read-write] backup register
    volatile uint32_t BKP8R;    // [read-write] backup register
    volatile uint32_t BKP9R;    // [read-write] backup register
    volatile uint32_t BKP10R;   // [read-write] backup register
    volatile uint32_t BKP11R;   // [read-write] backup register
    volatile uint32_t BKP12R;   // [read-write] backup register
    volatile uint32_t BKP13R;   // [read-write] backup register
    volatile uint32_t BKP14R;   // [read-write] backup register
    volatile uint32_t BKP15R;   // [read-write] backup register
    volatile uint32_t BKP16R;   // [read-write] backup register
    volatile uint32_t BKP17R;   // [read-write] backup register
    volatile uint32_t BKP18R;   // [read-write] backup register
    volatile uint32_t BKP19R;   // [read-write] backup register
    volatile uint32_t BKP20R;   // [read-write] backup register
    volatile uint32_t BKP21R;   // [read-write] backup register
    volatile uint32_t BKP22R;   // [read-write] backup register
    volatile uint32_t BKP23R;   // [read-write] backup register
    volatile uint32_t BKP24R;   // [read-write] backup register
    volatile uint32_t BKP25R;   // [read-write] backup register
    volatile uint32_t BKP26R;   // [read-write] backup register
    volatile uint32_t BKP27R;   // [read-write] backup register
    volatile uint32_t BKP28R;   // [read-write] backup register
    volatile uint32_t BKP29R;   // [read-write] backup register
    volatile uint32_t BKP30R;   // [read-write] backup register
    volatile uint32_t BKP31R;   // [read-write] backup register

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

    static constexpr uint32_t DR_RESET_VALUE = 0x2101;
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
    template<uint32_t X>
    static constexpr uint32_t CR_WCKSEL =         // Wakeup clock selection
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CR_TSEDGE = 0x8;    // Time-stamp event active edge
    static constexpr uint32_t CR_REFCKON = 0x10;  // Reference clock detection enable (50 or 60 Hz)
    static constexpr uint32_t CR_BYPSHAD = 0x20;  // Bypass the shadow registers
    static constexpr uint32_t CR_FMT = 0x40;      // Hour format
    static constexpr uint32_t CR_ALRAE = 0x100;   // Alarm A enable
    static constexpr uint32_t CR_ALRBE = 0x200;   // Alarm B enable
    static constexpr uint32_t CR_WUTE = 0x400;    // Wakeup timer enable
    static constexpr uint32_t CR_TSE = 0x800;     // Time stamp enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000;  // Wakeup timer interrupt enable
    static constexpr uint32_t CR_TSIE = 0x8000;   // Time-stamp interrupt enable
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change)
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change)
    static constexpr uint32_t CR_BKP = 0x40000;   // Backup
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection
    static constexpr uint32_t CR_POL = 0x100000;  // Output polarity
    template<uint32_t X>
    static constexpr uint32_t CR_OSEL =           // Output selection
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t CR_COE = 0x800000;  // Calibration output enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x7;
    static constexpr uint32_t ISR_ALRAWF = 0x1;      // Alarm A write flag
    static constexpr uint32_t ISR_ALRBWF = 0x2;      // Alarm B write flag
    static constexpr uint32_t ISR_WUTWF = 0x4;       // Wakeup timer write flag
    static constexpr uint32_t ISR_SHPF = 0x8;        // Shift operation pending
    static constexpr uint32_t ISR_INITS = 0x10;      // Initialization status flag
    static constexpr uint32_t ISR_RSF = 0x20;        // Registers synchronization flag
    static constexpr uint32_t ISR_INITF = 0x40;      // Initialization flag
    static constexpr uint32_t ISR_INIT = 0x80;       // Initialization mode
    static constexpr uint32_t ISR_ALRAF = 0x100;     // Alarm A flag
    static constexpr uint32_t ISR_ALRBF = 0x200;     // Alarm B flag
    static constexpr uint32_t ISR_WUTF = 0x400;      // Wakeup timer flag
    static constexpr uint32_t ISR_TSF = 0x800;       // Time-stamp flag
    static constexpr uint32_t ISR_TSOVF = 0x1000;    // Time-stamp overflow flag
    static constexpr uint32_t ISR_TAMP1F = 0x2000;   // Tamper detection flag
    static constexpr uint32_t ISR_TAMP2F = 0x4000;   // RTC_TAMP2 detection flag
    static constexpr uint32_t ISR_TAMP3F = 0x8000;   // RTC_TAMP3 detection flag
    static constexpr uint32_t ISR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff;
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_A =   // Asynchronous prescaler factor
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_S =   // Synchronous prescaler factor
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t WUTR_WUT =   // Wakeup auto-reload value bits
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0;
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000;  // Alarm A date mask
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DT =                // Date tens in BCD format
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_DU =                // Date units or day in BCD format
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000;    // Alarm A hours mask
    static constexpr uint32_t ALRMAR_PM = 0x400000;      // AM/PM notation
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HT =                // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_HU =                // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000;      // Alarm A minutes mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNT =               // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_MNU =               // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t ALRMAR_MSK1 = 0x80;        // Alarm A seconds mask
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_ST =                // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMAR_SU =                // Second units in BCD format
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
    template<uint32_t X>
    static constexpr uint32_t TSTR_SU =           // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_ST =           // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNU =          // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_MNT =          // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_HU =           // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TSTR_HT =           // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

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

    static constexpr uint32_t TAFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAFCR_TAMP1E = 0x1;         // Tamper 1 detection enable
    static constexpr uint32_t TAFCR_TAMP1TRG = 0x2;       // Active level for tamper 1
    static constexpr uint32_t TAFCR_TAMPIE = 0x4;         // Tamper interrupt enable
    static constexpr uint32_t TAFCR_TAMP2E = 0x8;         // Tamper 2 detection enable
    static constexpr uint32_t TAFCR_TAMP2TRG = 0x10;      // Active level for tamper 2
    static constexpr uint32_t TAFCR_TAMP3E = 0x20;        // Tamper 3 detection enable
    static constexpr uint32_t TAFCR_TAMP3TRG = 0x40;      // Active level for tamper 3
    static constexpr uint32_t TAFCR_TAMPTS = 0x80;        // Activate timestamp on tamper detection event
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPFREQ =            // Tamper sampling frequency
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPFLT =             // Tamper filter count
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAFCR_TAMPPRCH =            // Tamper precharge duration
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t TAFCR_TAMPPUDIS = 0x8000;   // TAMPER pull-up disable
    static constexpr uint32_t TAFCR_PC13VALUE = 0x40000;  // PC13 value
    static constexpr uint32_t TAFCR_PC13MODE = 0x80000;   // PC13 mode
    static constexpr uint32_t TAFCR_PC14VALUE = 0x100000; // PC14 value
    static constexpr uint32_t TAFCR_PC14MODE = 0x200000;  // PC 14 mode
    static constexpr uint32_t TAFCR_PC15VALUE = 0x400000; // PC15 value
    static constexpr uint32_t TAFCR_PC15MODE = 0x800000;  // PC15 mode

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

    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP8R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP9R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP10R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP11R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP12R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP13R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP14R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP15R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP16R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP17R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP18R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP19R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP20R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP21R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP22R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP23R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP24R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP25R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP26R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP27R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP28R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP29R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP30R_RESET_VALUE = 0x0;

    static constexpr uint32_t BKP31R_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F301, RTC>
{
    typedef stm32f301_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, RTC>
{
    typedef stm32f301_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, RTC>
{
    typedef stm32f301_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, RTC>
{
    typedef stm32f302_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, RTC>
{
    typedef stm32f302_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, RTC>
{
    typedef stm32f302_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;

