#pragma once

////
//
//      STM32L5 RTC peripherals
//
////

////
//
//      Real-time clock
//
////

struct stm32l552_rtc_t
{
    volatile uint32_t TR;       // [read-write] time register
    volatile uint32_t DR;       // [read-write] date register
    volatile uint32_t SSR;      // [read-only] RTC sub second register
    volatile uint32_t ICSR;     // RTC initialization control and status register
    volatile uint32_t PRER;     // [read-write] prescaler register
    volatile uint32_t WUTR;     // [read-write] wakeup timer register
    volatile uint32_t CR;       // [read-write] RTC control register
    volatile uint32_t PRIVCR;   // [read-write] RTC privilege mode control register
    volatile uint32_t SMCR;     // [read-write] RTC secure mode control register
    volatile uint32_t WPR;      // [write-only] write protection register
    volatile uint32_t CALR;     // [read-write] calibration register
    volatile uint32_t SHIFTR;   // [write-only] shift control register
    volatile uint32_t TSTR;     // [read-only] time stamp time register
    volatile uint32_t TSDR;     // [read-only] time stamp date register
    volatile uint32_t TSSSR;    // [read-only] timestamp sub second register
    reserved_t<0x1> _0x40;
    volatile uint32_t ALRMAR;   // [read-write] alarm A register
    volatile uint32_t ALRMASSR; // [read-write] alarm A sub second register
    volatile uint32_t ALRMBR;   // [read-write] alarm B register
    volatile uint32_t ALRMBSSR; // [read-write] alarm B sub second register
    volatile uint32_t SR;       // [read-only] RTC status register
    volatile uint32_t MISR;     // [read-only] RTC non-secure masked interrupt status register
    volatile uint32_t SMISR;    // [read-only] RTC secure masked interrupt status register
    volatile uint32_t SCR;      // [write-only] RTC status clear register

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

    static constexpr uint32_t SSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SSR_SS =   // SS
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7;
    static constexpr uint32_t ICSR_ALRAWF = 0x1;      // Alarm A write flag
    static constexpr uint32_t ICSR_ALRBWF = 0x2;      // Alarm B write flag
    static constexpr uint32_t ICSR_WUTWF = 0x4;       // Wakeup timer write flag
    static constexpr uint32_t ICSR_SHPF = 0x8;        // Shift operation pending
    static constexpr uint32_t ICSR_INITS = 0x10;      // Initialization status flag
    static constexpr uint32_t ICSR_RSF = 0x20;        // Registers synchronization flag
    static constexpr uint32_t ICSR_INITF = 0x40;      // Initialization flag
    static constexpr uint32_t ICSR_INIT = 0x80;       // Initialization mode
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff;
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_A =   // Asynchronous prescaler factor
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRER_PREDIV_S =   // Synchronous prescaler factor
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t WUTR_WUT =       // Wakeup auto-reload value bits
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WUTR_WUTOCLR =   // WUTOCLR
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_WUCKSEL =                   // WUCKSEL
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CR_TSEDGE = 0x8;               // TSEDGE
    static constexpr uint32_t CR_REFCKON = 0x10;             // REFCKON
    static constexpr uint32_t CR_BYPSHAD = 0x20;             // BYPSHAD
    static constexpr uint32_t CR_FMT = 0x40;                 // FMT
    static constexpr uint32_t CR_ALRAE = 0x100;              // ALRAE
    static constexpr uint32_t CR_ALRBE = 0x200;              // ALRBE
    static constexpr uint32_t CR_WUTE = 0x400;               // WUTE
    static constexpr uint32_t CR_TSE = 0x800;                // TSE
    static constexpr uint32_t CR_ALRAIE = 0x1000;            // ALRAIE
    static constexpr uint32_t CR_ALRBIE = 0x2000;            // ALRBIE
    static constexpr uint32_t CR_WUTIE = 0x4000;             // WUTIE
    static constexpr uint32_t CR_TSIE = 0x8000;              // TSIE
    static constexpr uint32_t CR_ADD1H = 0x10000;            // ADD1H
    static constexpr uint32_t CR_SUB1H = 0x20000;            // SUB1H
    static constexpr uint32_t CR_BKP = 0x40000;              // BKP
    static constexpr uint32_t CR_COSEL = 0x80000;            // COSEL
    static constexpr uint32_t CR_POL = 0x100000;             // POL
    template<uint32_t X>
    static constexpr uint32_t CR_OSEL =                      // OSEL
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t CR_COE = 0x800000;             // COE
    static constexpr uint32_t CR_ITSE = 0x1000000;           // ITSE
    static constexpr uint32_t CR_TAMPTS = 0x2000000;         // TAMPTS
    static constexpr uint32_t CR_TAMPOE = 0x4000000;         // TAMPOE
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000;   // TAMPALRM_PU
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM_TYPE
    static constexpr uint32_t CR_OUT2EN = 0x80000000;        // OUT2EN

    static constexpr uint32_t PRIVCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PRIVCR_PRIV = 0x8000;     // PRIV
    static constexpr uint32_t PRIVCR_INITPRIV = 0x4000; // INITPRIV
    static constexpr uint32_t PRIVCR_CALPRIV = 0x2000;  // CALPRIV
    static constexpr uint32_t PRIVCR_TSPRIV = 0x8;      // TSPRIV
    static constexpr uint32_t PRIVCR_WUTPRIV = 0x4;     // WUTPRIV
    static constexpr uint32_t PRIVCR_ALRBPRIV = 0x2;    // ALRBPRIV
    static constexpr uint32_t PRIVCR_ALRAPRIV = 0x1;    // ALRAPRIV

    static constexpr uint32_t SMCR_RESET_VALUE = 0xe00f;
    static constexpr uint32_t SMCR_DECPROT = 0x8000;   // DECPROT
    static constexpr uint32_t SMCR_INITDPROT = 0x4000; // INITDPROT
    static constexpr uint32_t SMCR_CALDPROT = 0x2000;  // CALDPROT
    static constexpr uint32_t SMCR_TSDPROT = 0x8;      // TSDPROT
    static constexpr uint32_t SMCR_WUTDPROT = 0x4;     // WUTDPROT
    static constexpr uint32_t SMCR_ALRBDPROT = 0x2;    // ALRBDPROT
    static constexpr uint32_t SMCR_ALRADPROT = 0x1;    // ALRADPROT

    static constexpr uint32_t WPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPR_KEY =   // Write protection key
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CALR_RESET_VALUE = 0x0;
    static constexpr uint32_t CALR_CALP = 0x8000;   // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000;  // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    static constexpr uint32_t CALR_LPCAL = 0x1000;  // LPCAL
    template<uint32_t X>
    static constexpr uint32_t CALR_CALM =           // Calibration minus
        bit_field_t<0, 0x1ff>::value<X>();

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

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ALRMASSR_MASKSS =   // Mask the most-significant bits starting at this bit
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMASSR_SS =       // Sub seconds value
        bit_field_t<0, 0x7fff>::value<X>();

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

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ALRMBSSR_MASKSS =   // Mask the most-significant bits starting at this bit
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ALRMBSSR_SS =       // Sub seconds value
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_ALRAF = 0x1;  // ALRAF
    static constexpr uint32_t SR_ALRBF = 0x2;  // ALRBF
    static constexpr uint32_t SR_WUTF = 0x4;   // WUTF
    static constexpr uint32_t SR_TSF = 0x8;    // TSF
    static constexpr uint32_t SR_TSOVF = 0x10; // TSOVF
    static constexpr uint32_t SR_ITSF = 0x20;  // ITSF

    static constexpr uint32_t MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MISR_ALRAMF = 0x1;  // ALRAMF
    static constexpr uint32_t MISR_ALRBMF = 0x2;  // ALRBMF
    static constexpr uint32_t MISR_WUTMF = 0x4;   // WUTMF
    static constexpr uint32_t MISR_TSMF = 0x8;    // TSMF
    static constexpr uint32_t MISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t MISR_ITSMF = 0x20;  // ITSMF

    static constexpr uint32_t SMISR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMISR_ALRAMF = 0x1;  // ALRAMF
    static constexpr uint32_t SMISR_ALRBMF = 0x2;  // ALRBMF
    static constexpr uint32_t SMISR_WUTMF = 0x4;   // WUTMF
    static constexpr uint32_t SMISR_TSMF = 0x8;    // TSMF
    static constexpr uint32_t SMISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t SMISR_ITSMF = 0x20;  // ITSMF

    static constexpr uint32_t SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCR_CALRAF = 0x1;  // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2;  // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4;   // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8;    // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20;  // CITSF
};


template<>
struct peripheral_t<STM32L552, RTC>
{
    typedef stm32l552_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_RTC>
{
    typedef stm32l552_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, RTC>
{
    typedef stm32l552_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_RTC>
{
    typedef stm32l552_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;
using sec_rtc_t = peripheral_t<mcu_svd, SEC_RTC>;

