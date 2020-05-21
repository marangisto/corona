#pragma once

////
//
//      STM32MP1 RTC peripherals
//
////

////
//
//      RTC
//
////

struct stm32mp15xxx_rtc_t
{
    volatile uint32_t RTC_TR;       // [read-write] The RTC_TR is the calendar time shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page1830 and Reading the calendar on page1831. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be write-protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_DR;       // [read-write] The RTC_DR is the calendar date shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page1830 and Reading the calendar on page1831. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be write-protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_SSR;      // [read-only] RTC sub second register
    volatile uint32_t RTC_ICSR;     // This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be globally protected, or each bit of this register can be individually protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_PRER;     // [read-write] This register must be written in initialization mode only. The initialization must be performed in two separate write accesses. Refer to Calendar initialization and configuration on page1830. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be write-protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_WUTR;     // [read-write] This register can be written only when WUTWF is set to 1 in RTC_ICSR. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_CR;       // This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be globally protected, or each bit of this register can be individually protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    reserved_t<0x1> _0x20;
    volatile uint32_t RTC_SMCR;     // [read-write] This register can be written only when the APB access is secure.
    volatile uint32_t RTC_WPR;      // [write-only] RTC write protection register
    volatile uint32_t RTC_CALR;     // [read-write] This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be write-protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_SHIFTR;   // [write-only] This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_TSTR;     // [read-only] The content of this register is valid only when TSF is set to 1 in RTC_SR. It is cleared when TSF bit is reset. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_TSDR;     // [read-only] The content of this register is valid only when TSF is set to 1 in RTC_SR. It is cleared when TSF bit is reset. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_TSSSR;    // [read-only] The content of this register is valid only when TSF is set to 1 in RTC_SR. It is cleared when the TSF bit is reset. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    reserved_t<0x1> _0x40;
    volatile uint32_t RTC_ALRMAR;   // [read-write] This register can be written only when ALRAWF is set to 1 in RTC_ICSR, or in initialization mode. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_ALRMASSR; // [read-write] This register can be written only when ALRAWF is set to 1 in RTC_ICSR, or in initialization mode. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_ALRMBR;   // [read-write] This register can be written only when ALRBWF is set to 1 in RTC_ICSR, or in initialization mode. This register is write protected. The write access procedure is described in RTC register write protection on page1830. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_ALRMBSSR; // [read-write] This register can be written only when ALRBE is reset in RTC_CR register, or in initialization mode. This register is write protected.The write access procedure is described in Section: RTC register write protection. This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_SR;       // [read-only] This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_MISR;     // [read-only] RTC non-secure masked interrupt status register
    volatile uint32_t RTC_SMISR;    // [read-only] This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_SCR;      // [write-only] This register can be protected against non-secure access. Refer to Section50.3.4: RTC secure protection modes.
    volatile uint32_t RTC_CFGR;     // [read-write] RTC configuration register
    reserved_t<0xe3> _0x3f0;
    volatile uint32_t RTC_HWCFGR;   // [read-only] RTC hardware configuration register
    volatile uint32_t RTC_VERR;     // [read-only] RTC version register
    volatile uint32_t RTC_IPIDR;    // [read-only] RTC identification register
    volatile uint32_t RTC_SIDR;     // [read-only] RTC size identification register

    static constexpr uint32_t RTC_TR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_SU =           // SU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_ST =           // ST
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_MNU =          // MNU
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_MNT =          // MNT
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_HU =           // HU
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_HT =           // HT
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_TR_PM = 0x400000; // PM

    static constexpr uint32_t RTC_DR_RESET_VALUE = 0x2101;
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_DU =         // DU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_DT =         // DT
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_MU =         // MU
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t RTC_DR_MT = 0x1000; // MT
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_WDU =        // WDU
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_YU =         // YU
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_YT =         // YT
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t RTC_SSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_SSR_SS =   // SS
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_ICSR_RESET_VALUE = 0x7;
    static constexpr uint32_t RTC_ICSR_ALRAWF = 0x1;      // ALRAWF
    static constexpr uint32_t RTC_ICSR_ALRBWF = 0x2;      // ALRBWF
    static constexpr uint32_t RTC_ICSR_WUTWF = 0x4;       // WUTWF
    static constexpr uint32_t RTC_ICSR_SHPF = 0x8;        // SHPF
    static constexpr uint32_t RTC_ICSR_INITS = 0x10;      // INITS
    static constexpr uint32_t RTC_ICSR_RSF = 0x20;        // RSF
    static constexpr uint32_t RTC_ICSR_INITF = 0x40;      // INITF
    static constexpr uint32_t RTC_ICSR_INIT = 0x80;       // INIT
    static constexpr uint32_t RTC_ICSR_RECALPF = 0x10000; // RECALPF

    static constexpr uint32_t RTC_PRER_RESET_VALUE = 0x7f00ff;
    template<uint32_t X>
    static constexpr uint32_t RTC_PRER_PREDIV_S =   // PREDIV_S
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_PRER_PREDIV_A =   // PREDIV_A
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RTC_WUTR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t RTC_WUTR_WUT =   // WUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_CR_WUCKSEL =                   // WUCKSEL
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RTC_CR_TSEDGE = 0x8;               // TSEDGE
    static constexpr uint32_t RTC_CR_REFCKON = 0x10;             // REFCKON
    static constexpr uint32_t RTC_CR_BYPSHAD = 0x20;             // BYPSHAD
    static constexpr uint32_t RTC_CR_FMT = 0x40;                 // FMT
    static constexpr uint32_t RTC_CR_ALRAE = 0x100;              // ALRAE
    static constexpr uint32_t RTC_CR_ALRBE = 0x200;              // ALRBE
    static constexpr uint32_t RTC_CR_WUTE = 0x400;               // WUTE
    static constexpr uint32_t RTC_CR_TSE = 0x800;                // TSE
    static constexpr uint32_t RTC_CR_ALRAIE = 0x1000;            // ALRAIE
    static constexpr uint32_t RTC_CR_ALRBIE = 0x2000;            // ALRBIE
    static constexpr uint32_t RTC_CR_WUTIE = 0x4000;             // WUTIE
    static constexpr uint32_t RTC_CR_TSIE = 0x8000;              // TSIE
    static constexpr uint32_t RTC_CR_ADD1H = 0x10000;            // ADD1H
    static constexpr uint32_t RTC_CR_SUB1H = 0x20000;            // SUB1H
    static constexpr uint32_t RTC_CR_BKP = 0x40000;              // BKP
    static constexpr uint32_t RTC_CR_COSEL = 0x80000;            // COSEL
    static constexpr uint32_t RTC_CR_POL = 0x100000;             // POL
    template<uint32_t X>
    static constexpr uint32_t RTC_CR_OSEL =                      // OSEL
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t RTC_CR_COE = 0x800000;             // COE
    static constexpr uint32_t RTC_CR_ITSE = 0x1000000;           // ITSE
    static constexpr uint32_t RTC_CR_TAMPTS = 0x2000000;         // TAMPTS
    static constexpr uint32_t RTC_CR_TAMPOE = 0x4000000;         // TAMPOE
    static constexpr uint32_t RTC_CR_TAMPALRM_PU = 0x20000000;   // TAMPALRM_PU
    static constexpr uint32_t RTC_CR_TAMPALRM_TYPE = 0x40000000; // TAMPALRM_TYPE
    static constexpr uint32_t RTC_CR_OUT2EN = 0x80000000;        // OUT2EN

    static constexpr uint32_t RTC_SMCR_RESET_VALUE = 0xe00f;
    static constexpr uint32_t RTC_SMCR_ALRADPROT = 0x1;    // ALRADPROT
    static constexpr uint32_t RTC_SMCR_ALRBDPROT = 0x2;    // ALRBDPROT
    static constexpr uint32_t RTC_SMCR_WUTDPROT = 0x4;     // WUTDPROT
    static constexpr uint32_t RTC_SMCR_TSDPROT = 0x8;      // TSDPROT
    static constexpr uint32_t RTC_SMCR_CALDPROT = 0x2000;  // CALDPROT
    static constexpr uint32_t RTC_SMCR_INITDPROT = 0x4000; // INITDPROT
    static constexpr uint32_t RTC_SMCR_DECPROT = 0x8000;   // DECPROT

    static constexpr uint32_t RTC_WPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_WPR_KEY =   // KEY
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RTC_CALR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_CALR_CALM =           // CALM
        bit_field_t<0, 0x1ff>::value<X>();
    static constexpr uint32_t RTC_CALR_CALW16 = 0x2000; // CALW16
    static constexpr uint32_t RTC_CALR_CALW8 = 0x4000;  // CALW8
    static constexpr uint32_t RTC_CALR_CALP = 0x8000;   // CALP

    static constexpr uint32_t RTC_SHIFTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_SHIFTR_SUBFS =             // SUBFS
        bit_field_t<0, 0x7fff>::value<X>();
    static constexpr uint32_t RTC_SHIFTR_ADD1S = 0x80000000; // ADD1S

    static constexpr uint32_t RTC_TSTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_SU =           // SU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_ST =           // ST
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_MNU =          // MNU
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_MNT =          // MNT
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_HU =           // HU
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_HT =           // HT
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_TSTR_PM = 0x400000; // PM

    static constexpr uint32_t RTC_TSDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_DU =         // DU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_DT =         // DT
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_MU =         // MU
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t RTC_TSDR_MT = 0x1000; // MT
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_WDU =        // WDU
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t RTC_TSSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSSSR_SS =   // SS
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_ALRMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_SU =                // SU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_ST =                // ST
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_MSK1 = 0x80;        // MSK1
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_MNU =               // MNU
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_MNT =               // MNT
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_MSK2 = 0x8000;      // MSK2
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_HU =                // HU
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_HT =                // HT
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_PM = 0x400000;      // PM
    static constexpr uint32_t RTC_ALRMAR_MSK3 = 0x800000;    // MSK3
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_DU =                // DU
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_DT =                // DT
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_WDSEL = 0x40000000; // WDSEL
    static constexpr uint32_t RTC_ALRMAR_MSK4 = 0x80000000;  // MSK4

    static constexpr uint32_t RTC_ALRMASSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMASSR_SS =       // SS
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMASSR_MASKSS =   // MASKSS
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t RTC_ALRMBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_SU =                // SU
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_ST =                // ST
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_MSK1 = 0x80;        // MSK1
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_MNU =               // MNU
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_MNT =               // MNT
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_MSK2 = 0x8000;      // MSK2
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_HU =                // HU
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_HT =                // HT
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_PM = 0x400000;      // PM
    static constexpr uint32_t RTC_ALRMBR_MSK3 = 0x800000;    // MSK3
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_DU =                // DU
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_DT =                // DT
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_WDSEL = 0x40000000; // WDSEL
    static constexpr uint32_t RTC_ALRMBR_MSK4 = 0x80000000;  // MSK4

    static constexpr uint32_t RTC_ALRMBSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBSSR_SS =       // SS
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBSSR_MASKSS =   // MASKSS
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t RTC_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_SR_ALRAF = 0x1;  // ALRAF
    static constexpr uint32_t RTC_SR_ALRBF = 0x2;  // ALRBF
    static constexpr uint32_t RTC_SR_WUTF = 0x4;   // WUTF
    static constexpr uint32_t RTC_SR_TSF = 0x8;    // TSF
    static constexpr uint32_t RTC_SR_TSOVF = 0x10; // TSOVF
    static constexpr uint32_t RTC_SR_ITSF = 0x20;  // ITSF

    static constexpr uint32_t RTC_MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_MISR_ALRAMF = 0x1;  // ALRAMF
    static constexpr uint32_t RTC_MISR_ALRBMF = 0x2;  // ALRBMF
    static constexpr uint32_t RTC_MISR_WUTMF = 0x4;   // WUTMF
    static constexpr uint32_t RTC_MISR_TSMF = 0x8;    // TSMF
    static constexpr uint32_t RTC_MISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t RTC_MISR_ITSMF = 0x20;  // ITSMF

    static constexpr uint32_t RTC_SMISR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_SMISR_ALRAMF = 0x1;  // ALRAMF
    static constexpr uint32_t RTC_SMISR_ALRBMF = 0x2;  // ALRBMF
    static constexpr uint32_t RTC_SMISR_WUTMF = 0x4;   // WUTMF
    static constexpr uint32_t RTC_SMISR_TSMF = 0x8;    // TSMF
    static constexpr uint32_t RTC_SMISR_TSOVMF = 0x10; // TSOVMF
    static constexpr uint32_t RTC_SMISR_ITSMF = 0x20;  // ITSMF

    static constexpr uint32_t RTC_SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_SCR_CALRAF = 0x1;  // CALRAF
    static constexpr uint32_t RTC_SCR_CALRBF = 0x2;  // CALRBF
    static constexpr uint32_t RTC_SCR_CWUTF = 0x4;   // CWUTF
    static constexpr uint32_t RTC_SCR_CTSF = 0x8;    // CTSF
    static constexpr uint32_t RTC_SCR_CTSOVF = 0x10; // CTSOVF
    static constexpr uint32_t RTC_SCR_CITSF = 0x20;  // CITSF

    static constexpr uint32_t RTC_CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_CFGR_OUT2_RMP = 0x1; // OUT2_RMP
    template<uint32_t X>
    static constexpr uint32_t RTC_CFGR_LSCOEN =        // LSCOEN
        bit_field_t<1, 0x3>::value<X>();

    static constexpr uint32_t RTC_HWCFGR_RESET_VALUE = 0x1031111;
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_ALARMB =          // ALARMB
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_WAKEUP =          // WAKEUP
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_SMOOTH_CALIB =    // SMOOTH_CALIB
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_TIMESTAMP =       // TIMESTAMP
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_OPTIONREG_OUT =   // OPTIONREG_OUT
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_HWCFGR_TRUST_ZONE =      // TRUST_ZONE
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t RTC_VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t RTC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t RTC_IPIDR_RESET_VALUE = 0x120033;

    static constexpr uint32_t RTC_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, RTC>
{
    typedef stm32mp15xxx_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;

