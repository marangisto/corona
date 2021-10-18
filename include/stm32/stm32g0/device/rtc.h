#pragma once

////
//
//      STM32G0 RTC peripherals
//
///

// RTC: Real-time clock

struct stm32g030_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t ICSR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CR; // control register
    reserved_t<0x2> _0x1c;
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
    volatile uint32_t SR; // status register
    volatile uint32_t MISR; // masked interrupt status register
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // status clear register

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
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

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


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
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


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2; // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4; // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8; // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20; // CITSF
};

// RTC: Real-time clock

struct stm32g070_rtc_t
{
    volatile uint32_t TR; // time register
    volatile uint32_t DR; // date register
    volatile uint32_t SSR; // sub second register
    volatile uint32_t ICSR; // initialization and status register
    volatile uint32_t PRER; // prescaler register
    volatile uint32_t WUTR; // wakeup timer register
    volatile uint32_t CR; // control register
    reserved_t<0x2> _0x1c;
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
    volatile uint32_t SR; // status register
    volatile uint32_t MISR; // masked interrupt status register
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // status clear register
    reserved_t<0xe4> _0x60;
    volatile uint32_t HWCFGR; // hardware configuration register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

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
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value

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


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5 ppm
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period
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


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // CALRAF
    static constexpr uint32_t SCR_CALRBF = 0x2; // CALRBF
    static constexpr uint32_t SCR_CWUTF = 0x4; // CWUTF
    static constexpr uint32_t SCR_CTSF = 0x8; // CTSF
    static constexpr uint32_t SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t SCR_CITSF = 0x20; // CITSF


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR_ALARMB; // ALARMB
    typedef bit_field_t<4, 0xf> HWCFGR_WAKEUP; // WAKEUP
    typedef bit_field_t<8, 0xf> HWCFGR_SMOOTH_CALIB; // SMOOTH_CALIB
    typedef bit_field_t<12, 0xf> HWCFGR_TIMESTAMP; // TIMESTAMP
    typedef bit_field_t<16, 0xff> HWCFGR_OPTIONREG_OUT; // OPTIONREG_OUT
    typedef bit_field_t<24, 0xf> HWCFGR_TRUST_ZONE; // TRUST_ZONE

    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x120033; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

// RTC: Real-time clock

struct stm32g0b1_rtc_t
{
    volatile uint32_t TR; // RTC time register
    volatile uint32_t DR; // RTC date register
    volatile uint32_t SSR; // RTC sub second register
    volatile uint32_t ICSR; // RTC initialization control and status register
    volatile uint32_t PRER; // RTC prescaler register
    volatile uint32_t WUTR; // RTC wakeup timer register
    volatile uint32_t CR; // RTC control register
    reserved_t<0x2> _0x1c;
    volatile uint32_t WPR; // RTC write protection register
    volatile uint32_t CALR; // RTC calibration register
    volatile uint32_t SHIFTR; // RTC shift control register
    volatile uint32_t TSTR; // RTC timestamp time register
    volatile uint32_t TSDR; // RTC timestamp date register
    volatile uint32_t TSSSR; // RTC timestamp sub second register
    reserved_t<0x1> _0x3c;
    volatile uint32_t ALRMAR; // RTC alarm A register
    volatile uint32_t ALRMASSR; // RTC alarm A sub second register
    volatile uint32_t ALRMBR; // RTC alarm B register
    volatile uint32_t ALRMBSSR; // RTC alarm B sub second register
    volatile uint32_t SR; // RTC status register
    volatile uint32_t MISR; // RTC masked interrupt status register
    reserved_t<0x1> _0x58;
    volatile uint32_t SCR; // RTC status clear register

    static constexpr uint32_t TR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xf> TR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> TR_ST; // Second tens in BCD format
    typedef bit_field_t<8, 0xf> TR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> TR_MNT; // Minute tens in BCD format
    typedef bit_field_t<16, 0xf> TR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> TR_HT; // Hour tens in BCD format
    static constexpr uint32_t TR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t DR_RESET_VALUE = 0x2101; // Reset value
    typedef bit_field_t<0, 0xf> DR_DU; // Date units in BCD format
    typedef bit_field_t<4, 0x3> DR_DT; // Date tens in BCD format
    typedef bit_field_t<8, 0xf> DR_MU; // Month units in BCD format
    static constexpr uint32_t DR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<13, 0x7> DR_WDU; // Week day units ...
    typedef bit_field_t<16, 0xf> DR_YU; // Year units in BCD format
    typedef bit_field_t<20, 0xf> DR_YT; // Year tens in BCD format

    static constexpr uint32_t SSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SSR_SS; // Sub second value SS[15:0] is the value in the synchronous prescaler counter. The fraction of a second is given by the formula below: Second fraction = (PREDIV_S - SS) / (PREDIV_S + 1) Note: SS can be larger than PREDIV_S only after a shift operation. In that case, the correct time/date is one second less than as indicated by RTC_TR/RTC_DR.

    static constexpr uint32_t ICSR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t ICSR_ALRAWF = 0x1; // Alarm A write flag This bit is set by hardware when alarm A values can be changed, after the ALRAE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode.
    static constexpr uint32_t ICSR_ALRBWF = 0x2; // Alarm B write flag This bit is set by hardware when alarm B values can be changed, after the ALRBE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode.
    static constexpr uint32_t ICSR_WUTWF = 0x4; // Wakeup timer write flag This bit is set by hardware when WUT value can be changed, after the WUTE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode.
    static constexpr uint32_t ICSR_SHPF = 0x8; // Shift operation pending This flag is set by hardware as soon as a shift operation is initiated by a write to the RTC_SHIFTR register. It is cleared by hardware when the corresponding shift operation has been executed. Writing to the SHPF bit has no effect.
    static constexpr uint32_t ICSR_INITS = 0x10; // Initialization status flag This bit is set by hardware when the calendar year field is different from 0 (RTC domain reset state).
    static constexpr uint32_t ICSR_RSF = 0x20; // Registers synchronization flag This bit is set by hardware each time the calendar registers are copied into the shadow registers (RTC_SSRx, RTC_TRx and RTC_DRx). This bit is cleared by hardware in initialization mode, while a shift operation is pending (SHPF = 1), or when in bypass shadow register mode (BYPSHAD = 1). This bit can also be cleared by software. It is cleared either by software or by hardware in initialization mode.
    static constexpr uint32_t ICSR_INITF = 0x40; // Initialization flag When this bit is set to 1, the RTC is in initialization state, and the time, date and prescaler registers can be updated.
    static constexpr uint32_t ICSR_INIT = 0x80; // Initialization mode
    static constexpr uint32_t ICSR_RECALPF = 0x10000; // Recalibration pending Flag The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0. Refer to .

    static constexpr uint32_t PRER_RESET_VALUE = 0x7f00ff; // Reset value
    typedef bit_field_t<0, 0x7fff> PRER_PREDIV_S; // Synchronous prescaler factor This is the synchronous division factor: ck_spre frequency = ck_apre frequency/(PREDIV_S+1)
    typedef bit_field_t<16, 0x7f> PRER_PREDIV_A; // Asynchronous prescaler factor This is the asynchronous division factor: ck_apre frequency = RTCCLK frequency/(PREDIV_A+1)

    static constexpr uint32_t WUTR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> WUTR_WUT; // Wakeup auto-reload value bits When the wakeup timer is enabled (WUTE set to 1), the WUTF flag is set every (WUT[15:0]+1) ck_wut cycles. The ck_wut period is selected through WUCKSEL[2:0] bits of the RTC_CR register. When WUCKSEL[2] = 1, the wakeup timer becomes 17-bits and WUCKSEL[1] effectively becomes WUT[16] the most-significant bit to be reloaded into the timer. The first assertion of WUTF occurs between WUT and (WUT + 1) ck_wut cycles after WUTE is set. Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] = 011 (RTCCLK/2) is forbidden.

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CR_WUCKSEL; // ck_wut wakeup clock selection 10x: ck_spre (usually 1Hz) clock is selected 11x: ck_spre (usually 1Hz) clock is selected and 216is added to the WUT counter value
    static constexpr uint32_t CR_TSEDGE = 0x8; // Timestamp event active edge TSE must be reset when TSEDGE is changed to avoid unwanted TSF setting.
    static constexpr uint32_t CR_REFCKON = 0x10; // RTC_REFIN reference clock detection enable (50 or 60Hz) Note: PREDIV_S must be 0x00FF.
    static constexpr uint32_t CR_BYPSHAD = 0x20; // Bypass the shadow registers Note: If the frequency of the APB1 clock is less than seven times the frequency of RTCCLK, BYPSHAD must be set to 1.
    static constexpr uint32_t CR_FMT = 0x40; // Hour format
    static constexpr uint32_t CR_ALRAE = 0x100; // Alarm A enable
    static constexpr uint32_t CR_ALRBE = 0x200; // Alarm B enable
    static constexpr uint32_t CR_WUTE = 0x400; // Wakeup timer enable Note: When the wakeup timer is disabled, wait for WUTWF=1 before enabling it again.
    static constexpr uint32_t CR_TSE = 0x800; // timestamp enable
    static constexpr uint32_t CR_ALRAIE = 0x1000; // Alarm A interrupt enable
    static constexpr uint32_t CR_ALRBIE = 0x2000; // Alarm B interrupt enable
    static constexpr uint32_t CR_WUTIE = 0x4000; // Wakeup timer interrupt enable
    static constexpr uint32_t CR_TSIE = 0x8000; // Timestamp interrupt enable
    static constexpr uint32_t CR_ADD1H = 0x10000; // Add 1 hour (summer time change) When this bit is set outside initialization mode, 1 hour is added to the calendar time. This bit is always read as 0.
    static constexpr uint32_t CR_SUB1H = 0x20000; // Subtract 1 hour (winter time change) When this bit is set outside initialization mode, 1 hour is subtracted to the calendar time if the current hour is not 0. This bit is always read as 0. Setting this bit has no effect when current hour is 0.
    static constexpr uint32_t CR_BKP = 0x40000; // Backup This bit can be written by the user to memorize whether the daylight saving time change has been performed or not.
    static constexpr uint32_t CR_COSEL = 0x80000; // Calibration output selection When COE = 1, this bit selects which signal is output on CALIB. These frequencies are valid for RTCCLK at 32.768kHz and prescalers at their default values (PREDIV_A = 127 and PREDIV_S = 255). Refer to .
    static constexpr uint32_t CR_POL = 0x100000; // Output polarity This bit is used to configure the polarity of TAMPALRM output.
    typedef bit_field_t<21, 0x3> CR_OSEL; // Output selection These bits are used to select the flag to be routed to TAMPALRM output.
    static constexpr uint32_t CR_COE = 0x800000; // Calibration output enable This bit enables the CALIB output
    static constexpr uint32_t CR_ITSE = 0x1000000; // timestamp on internal event enable
    static constexpr uint32_t CR_TAMPTS = 0x2000000; // Activate timestamp on tamper detection event TAMPTS is valid even if TSE = 0 in the RTC_CR register. Timestamp flag is set after the tamper flags, therefore if TAMPTS and TSIE are set, it is recommended to disable the tamper interrupts in order to avoid servicing 2 interrupts.
    static constexpr uint32_t CR_TAMPOE = 0x4000000; // Tamper detection output enable on TAMPALRM
    static constexpr uint32_t CR_TAMPALRM_PU = 0x20000000; // TAMPALRM pull-up enable
    static constexpr uint32_t CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM output type
    static constexpr uint32_t CR_OUT2EN = 0x80000000; // RTC_OUT2 output enable Setting this bit allows to remap the RTC outputs on RTC_OUT2 as follows: OUT2EN = 0: RTC output 2 disable If OSEL 00 or TAMPOE = 1: TAMPALRM is output on RTC_OUT1 If OSEL = 00 and TAMPOE = 0 and COE = 1: CALIB is output on RTC_OUT1 OUT2EN = 1: RTC output 2 enable If (OSEL 00 or TAMPOE = 1) and COE = 0: TAMPALRM is output on RTC_OUT2 If OSEL = 00 and TAMPOE = 0 and COE = 1: CALIB is output on RTC_OUT2 If (OSEL 00 or TAMPOE = 1) and COE = 1: CALIB is output on RTC_OUT2 and TAMPALRM is output on RTC_OUT1.


    static constexpr uint32_t WPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> WPR_KEY; // Write protection key This byte is written by software. Reading this byte always returns 0x00. Refer to for a description of how to unlock RTC register write protection.

    static constexpr uint32_t CALR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> CALR_CALM; // Calibration minus The frequency of the calendar is reduced by masking CALM out of 220 RTCCLK pulses (32 seconds if the input frequency is 32768Hz). This decreases the frequency of the calendar with a resolution of 0.9537ppm. To increase the frequency of the calendar, this feature should be used in conjunction with CALP. See .
    static constexpr uint32_t CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period When CALW16 is set to 1, the 16-second calibration cycle period is selected. This bit must not be set to 1 if CALW8 = 1. Note: CALM[0] is stuck at 0 when CALW16 = 1. Refer to calibration.
    static constexpr uint32_t CALR_CALW8 = 0x4000; // Use an 8-second calibration cycle period When CALW8 is set to 1, the 8-second calibration cycle period is selected. Note: CALM[1:0] are stuck at 00 when CALW8 = 1. Refer to digital calibration.
    static constexpr uint32_t CALR_CALP = 0x8000; // Increase frequency of RTC by 488.5ppm This feature is intended to be used in conjunction with CALM, which lowers the frequency of the calendar with a fine resolution. if the input frequency is 32768Hz, the number of RTCCLK pulses added during a 32-second window is calculated as follows: (512 CALP) - CALM. Refer to .

    static constexpr uint32_t SHIFTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> SHIFTR_SUBFS; // Subtract a fraction of a second These bits are write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF = 1, in RTC_ICSR). The value which is written to SUBFS is added to the synchronous prescaler counter. Since this counter counts down, this operation effectively subtracts from (delays) the clock by: Delay (seconds) = SUBFS / (PREDIV_S + 1) A fraction of a second can effectively be added to the clock (advancing the clock) when the ADD1S function is used in conjunction with SUBFS, effectively advancing the clock by: Advance (seconds) = (1 - (SUBFS / (PREDIV_S + 1))). Note: Writing to SUBFS causes RSF to be cleared. Software can then wait until RSF = 1 to be sure that the shadow registers have been updated with the shifted time.
    static constexpr uint32_t SHIFTR_ADD1S = 0x80000000; // Add one second This bit is write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF = 1, in RTC_ICSR). This function is intended to be used with SUBFS (see description below) in order to effectively add a fraction of a second to the clock in an atomic operation.

    static constexpr uint32_t TSTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSTR_SU; // Second units in BCD format.
    typedef bit_field_t<4, 0x7> TSTR_ST; // Second tens in BCD format.
    typedef bit_field_t<8, 0xf> TSTR_MNU; // Minute units in BCD format.
    typedef bit_field_t<12, 0x7> TSTR_MNT; // Minute tens in BCD format.
    typedef bit_field_t<16, 0xf> TSTR_HU; // Hour units in BCD format.
    typedef bit_field_t<20, 0x3> TSTR_HT; // Hour tens in BCD format.
    static constexpr uint32_t TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t TSDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TSDR_DU; // Date units in BCD format
    typedef bit_field_t<4, 0x3> TSDR_DT; // Date tens in BCD format
    typedef bit_field_t<8, 0xf> TSDR_MU; // Month units in BCD format
    static constexpr uint32_t TSDR_MT = 0x1000; // Month tens in BCD format
    typedef bit_field_t<13, 0x7> TSDR_WDU; // Week day units

    static constexpr uint32_t TSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TSSSR_SS; // Sub second value SS[15:0] is the value of the synchronous prescaler counter when the timestamp event occurred.


    static constexpr uint32_t ALRMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ALRMAR_SU; // Second units in BCD format.
    typedef bit_field_t<4, 0x7> ALRMAR_ST; // Second tens in BCD format.
    static constexpr uint32_t ALRMAR_MSK1 = 0x80; // Alarm A seconds mask
    typedef bit_field_t<8, 0xf> ALRMAR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> ALRMAR_MNT; // Minute tens in BCD format
    static constexpr uint32_t ALRMAR_MSK2 = 0x8000; // Alarm A minutes mask
    typedef bit_field_t<16, 0xf> ALRMAR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> ALRMAR_HT; // Hour tens in BCD format
    static constexpr uint32_t ALRMAR_PM = 0x400000; // AM/PM notation
    static constexpr uint32_t ALRMAR_MSK3 = 0x800000; // Alarm A hours mask
    typedef bit_field_t<24, 0xf> ALRMAR_DU; // Date units or day in BCD format
    typedef bit_field_t<28, 0x3> ALRMAR_DT; // Date tens in BCD format
    static constexpr uint32_t ALRMAR_WDSEL = 0x40000000; // Week day selection
    static constexpr uint32_t ALRMAR_MSK4 = 0x80000000; // Alarm A date mask

    static constexpr uint32_t ALRMASSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> ALRMASSR_SS; // Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if alarm A is to be activated. Only bits 0 up MASKSS-1 are compared.
    typedef bit_field_t<24, 0xf> ALRMASSR_MASKSS; // Mask the most-significant bits starting at this bit 2: SS[14:2] are don&#39;t care in alarm A comparison. Only SS[1:0] are compared. 3: SS[14:3] are don&#39;t care in alarm A comparison. Only SS[2:0] are compared. ... 12: SS[14:12] are don&#39;t care in alarm A comparison. SS[11:0] are compared. 13: SS[14:13] are don&#39;t care in alarm A comparison. SS[12:0] are compared. 14: SS[14] is don&#39;t care in alarm A comparison. SS[13:0] are compared. 15: All 15 SS bits are compared and must match to activate alarm. The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation. Note: The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.

    static constexpr uint32_t ALRMBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ALRMBR_SU; // Second units in BCD format
    typedef bit_field_t<4, 0x7> ALRMBR_ST; // Second tens in BCD format
    static constexpr uint32_t ALRMBR_MSK1 = 0x80; // Alarm B seconds mask
    typedef bit_field_t<8, 0xf> ALRMBR_MNU; // Minute units in BCD format
    typedef bit_field_t<12, 0x7> ALRMBR_MNT; // Minute tens in BCD format
    static constexpr uint32_t ALRMBR_MSK2 = 0x8000; // Alarm B minutes mask
    typedef bit_field_t<16, 0xf> ALRMBR_HU; // Hour units in BCD format
    typedef bit_field_t<20, 0x3> ALRMBR_HT; // Hour tens in BCD format
    static constexpr uint32_t ALRMBR_PM = 0x400000; // AM/PM notation
    static constexpr uint32_t ALRMBR_MSK3 = 0x800000; // Alarm B hours mask
    typedef bit_field_t<24, 0xf> ALRMBR_DU; // Date units or day in BCD format
    typedef bit_field_t<28, 0x3> ALRMBR_DT; // Date tens in BCD format
    static constexpr uint32_t ALRMBR_WDSEL = 0x40000000; // Week day selection
    static constexpr uint32_t ALRMBR_MSK4 = 0x80000000; // Alarm B date mask

    static constexpr uint32_t ALRMBSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> ALRMBSSR_SS; // Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if alarm B is to be activated. Only bits 0 up to MASKSS-1 are compared.
    typedef bit_field_t<24, 0xf> ALRMBSSR_MASKSS; // Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ALRAF = 0x1; // Alarm A flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the alarm A register (RTC_ALRMAR).
    static constexpr uint32_t SR_ALRBF = 0x2; // Alarm B flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the alarm B register (RTC_ALRMBR).
    static constexpr uint32_t SR_WUTF = 0x4; // Wakeup timer flag This flag is set by hardware when the wakeup auto-reload counter reaches 0. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again.
    static constexpr uint32_t SR_TSF = 0x8; // Timestamp flag This flag is set by hardware when a timestamp event occurs. If ITSF flag is set, TSF must be cleared together with ITSF.
    static constexpr uint32_t SR_TSOVF = 0x10; // Timestamp overflow flag This flag is set by hardware when a timestamp event occurs while TSF is already set. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared.
    static constexpr uint32_t SR_ITSF = 0x20; // Internal timestamp flag This flag is set by hardware when a timestamp on the internal event occurs.

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_ALRAMF = 0x1; // Alarm A masked flag This flag is set by hardware when the alarm A interrupt occurs.
    static constexpr uint32_t MISR_ALRBMF = 0x2; // Alarm B masked flag This flag is set by hardware when the alarm B interrupt occurs.
    static constexpr uint32_t MISR_WUTMF = 0x4; // Wakeup timer masked flag This flag is set by hardware when the wakeup timer interrupt occurs. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again.
    static constexpr uint32_t MISR_TSMF = 0x8; // Timestamp masked flag This flag is set by hardware when a timestamp interrupt occurs. If ITSF flag is set, TSF must be cleared together with ITSF.
    static constexpr uint32_t MISR_TSOVMF = 0x10; // Timestamp overflow masked flag This flag is set by hardware when a timestamp interrupt occurs while TSMF is already set. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared.
    static constexpr uint32_t MISR_ITSMF = 0x20; // Internal timestamp masked flag This flag is set by hardware when a timestamp on the internal event occurs and timestampinterrupt is raised.


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CALRAF = 0x1; // Clear alarm A flag Writing 1 in this bit clears the ALRBF bit in the RTC_SR register.
    static constexpr uint32_t SCR_CALRBF = 0x2; // Clear alarm B flag Writing 1 in this bit clears the ALRBF bit in the RTC_SR register.
    static constexpr uint32_t SCR_CWUTF = 0x4; // Clear wakeup timer flag Writing 1 in this bit clears the WUTF bit in the RTC_SR register.
    static constexpr uint32_t SCR_CTSF = 0x8; // Clear timestamp flag Writing 1 in this bit clears the TSOVF bit in the RTC_SR register. If ITSF flag is set, TSF must be cleared together with ITSF by setting CRSF and CITSF.
    static constexpr uint32_t SCR_CTSOVF = 0x10; // Clear timestamp overflow flag Writing 1 in this bit clears the TSOVF bit in the RTC_SR register. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared.
    static constexpr uint32_t SCR_CITSF = 0x20; // Clear internal timestamp flag Writing 1 in this bit clears the ITSF bit in the RTC_SR register.
};

template<>
struct peripheral_t<STM32G030, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g030_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g070_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g0b1_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32g0b1_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;
