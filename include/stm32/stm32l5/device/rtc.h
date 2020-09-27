#pragma once

////
//
//      STM32L5 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32l552_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t SSR; // RTC sub second register
    volatile uint32_t ICSR; // RTC initialization control and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CR; // RTC control register
    volatile uint32_t PRIVCR; // RTC privilege mode control register
    volatile uint32_t SMCR; // RTC secure mode control register
    volatile uint32_t WPR; // write protection register
    volatile uint32_t CALR; // calibration register
    volatile uint32_t SHIFTR; // shift control register
    volatile uint32_t TSTR; // time stamp time register
    volatile uint32_t TSDR; // time stamp date register
    volatile uint32_t TSSSR; // timestamp sub second register
    reserved_t<0x1> _0x3c;
    volatile uint32_t ALRMAR; // alarm A register
    volatile uint32_t ALRMASSR; // alarm A sub second register
    volatile uint32_t ALRMBR; // alarm B register
    volatile uint32_t ALRMBSSR; // alarm B sub second register
    volatile uint32_t SR; // RTC status register
    volatile uint32_t MISR; // RTC non-secure masked interrupt status register
    volatile uint32_t SMISR; // RTC secure masked interrupt status register
    volatile uint32_t SCR; // RTC status clear register

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
    typedef bit_field_t<0, 0xffff> SSR_SS; // SS

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ICSR_ALRAWF = 0x1; // Alarm A write flag
    static constexpr uint32_t ICSR_ALRBWF = 0x2; // Alarm B write flag
    static constexpr uint32_t ICSR_WUTWF = 0x4; // Wakeup timer write flag
    static constexpr uint32_t ICSR_SHPF = 0x8; // Shift operation pending
    static constexpr uint32_t ICSR_INITS = 0x10; // Initialization status flag
    static constexpr uint32_t ICSR_RSF = 0x20; // Registers synchronization flag
    static constexpr uint32_t ICSR_INITF = 0x40; // Initialization flag
    static constexpr uint32_t ICSR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits
    typedef bit_field_t<16, 0xffff> WUTR_WUTOCLR; // WUTOCLR

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // WUCKSEL
    static constexpr uint32_t CR_TSEDGE = 0x8; // TSEDGE
    static constexpr uint32_t CR_REFCKON = 0x10; // REFCKON
    static constexpr uint32_t CR_BYPSHAD = 0x20; // BYPSHAD
    static constexpr uint32_t CR_FMT = 0x40; // FMT
    static constexpr uint32_t CR_ALRAE = 0x100; // ALRAE
    static constexpr uint32_t CR_ALRBE = 0x200; // ALRBE
    static constexpr uint32_t CR_WUTE = 0x400; // WUTE
    static constexpr uint32_t CR_TSE = 0x800; // TSE
    static constexpr uint32_t CR_ALRAIE = 0x1000; // ALRAIE
    static constexpr uint32_t CR_ALRBIE = 0x2000; // ALRBIE
    static constexpr uint32_t CR_WUTIE = 0x4000; // WUTIE
    static constexpr uint32_t CR_TSIE = 0x8000; // TSIE
    static constexpr uint32_t CR_ADD1H = 0x10000; // ADD1H
    static constexpr uint32_t CR_SUB1H = 0x20000; // SUB1H
    static constexpr uint32_t CR_BKP = 0x40000; // BKP
    static constexpr uint32_t CR_COSEL = 0x80000; // COSEL
    static constexpr uint32_t CR_POL = 0x100000; // POL
    typedef bit_field_t<21, 0x3> CR_OSEL; // OSEL
    static constexpr uint32_t CR_COE = 0x800000; // COE
    static constexpr uint32_t CR_ITSE = 0x1000000; // ITSE
    static constexpr uint32_t CR_TAMPTS = 0x2000000; // TAMPTS
    static constexpr uint32_t CR_TAMPOE = 0x4000000; // TAMPOE
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000; // TAMPALRM_PU
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM_TYPE
    static constexpr uint32_t CR_OUT2EN = 0x80000000; // OUT2EN

    static constexpr uint32_t PRIVCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PRIVCR_PRIV = 0x8000; // PRIV
    static constexpr uint32_t PRIVCR_INITPRIV = 0x4000; // INITPRIV
    static constexpr uint32_t PRIVCR_CALPRIV = 0x2000; // CALPRIV
    static constexpr uint32_t PRIVCR_TSPRIV = 0x8; // TSPRIV
    static constexpr uint32_t PRIVCR_WUTPRIV = 0x4; // WUTPRIV
    static constexpr uint32_t PRIVCR_ALRBPRIV = 0x2; // ALRBPRIV
    static constexpr uint32_t PRIVCR_ALRAPRIV = 0x1; // ALRAPRIV

    static constexpr uint32_t SMCR_RESET_VALUE = 0xe00f; // Reset value
    static constexpr uint32_t SMCR_DECPROT = 0x8000; // DECPROT
    static constexpr uint32_t SMCR_INITDPROT = 0x4000; // INITDPROT
    static constexpr uint32_t SMCR_CALDPROT = 0x2000; // CALDPROT
    static constexpr uint32_t SMCR_TSDPROT = 0x8; // TSDPROT
    static constexpr uint32_t SMCR_WUTDPROT = 0x4; // WUTDPROT
    static constexpr uint32_t SMCR_ALRBDPROT = 0x2; // ALRBDPROT
    static constexpr uint32_t SMCR_ALRADPROT = 0x1; // ALRADPROT

    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
    static constexpr uint32_t CALR_LPCAL = 0x1000; // LPCAL
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus

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

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit
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
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ALRAF = 0x1; // ALRAF
    static constexpr uint32_t SR_ALRBF = 0x2; // ALRBF
    static constexpr uint32_t SR_WUTF = 0x4; // WUTF
    static constexpr uint32_t SR_TSF = 0x8; // TSF
    static constexpr uint32_t SR_TSOVF = 0x10; // TSOVF
    static constexpr uint32_t SR_ITSF = 0x20; // ITSF

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_ALRAMF = 0x1; // ALRAMF
    static constexpr uint32_t MISR_ALRBMF = 0x2; // ALRBMF
    static constexpr uint32_t MISR_WUTMF = 0x4; // WUTMF
    static constexpr uint32_t MISR_TSMF = 0x8; // TSMF
    static constexpr uint32_t MISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t MISR_ITSMF = 0x20; // ITSMF

    static constexpr uint32_t SMISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMISR_ALRAMF = 0x1; // ALRAMF
    static constexpr uint32_t SMISR_ALRBMF = 0x2; // ALRBMF
    static constexpr uint32_t SMISR_WUTMF = 0x4; // WUTMF
    static constexpr uint32_t SMISR_TSMF = 0x8; // TSMF
    static constexpr uint32_t SMISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t SMISR_ITSMF = 0x20; // ITSMF

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2; // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4; // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8; // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20; // CITSF
};

template<>
struct peripheral_t<STM32L552, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l552_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_RTC>
{
    static constexpr periph_t P = SEC_RTC;
    using T = stm32l552_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32l552_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_RTC>
{
    static constexpr periph_t P = SEC_RTC;
    using T = stm32l552_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;
using sec_rtc_t = peripheral_t<svd, SEC_RTC>;

template<int INST> struct rtc_traits {};

template<> struct rtc_traits<0>
{
    using rtc = rtc_t;
    static constexpr signal_t REFIN = RTC_REFIN;
};
