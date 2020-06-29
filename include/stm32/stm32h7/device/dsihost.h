#pragma once

////
//
//      STM32H7 DSIHOST peripherals
//
///

// DSIHOST: DSIHOST

struct stm32h745_cm4_dsihost_t
{
    volatile uint32_t DSI_VR; // DSI Host version register
    volatile uint32_t DSI_CR; // DSI Host control register
    volatile uint32_t DSI_CCR; // DSI Host clock control register
    volatile uint32_t DSI_LVCIDR; // DSI Host LTDC VCID register
    volatile uint32_t DSI_LCOLCR; // DSI Host LTDC color coding register
    volatile uint32_t DSI_LPCR; // DSI Host LTDC polarity configuration register
    volatile uint32_t DSI_LPMCR; // DSI Host low-power mode configuration register
    reserved_t<0x4> _0x1c;
    volatile uint32_t DSI_PCR; // DSI Host protocol configuration register
    volatile uint32_t DSI_GVCIDR; // DSI Host generic VCID register
    volatile uint32_t DSI_MCR; // DSI Host mode configuration register
    volatile uint32_t DSI_VMCR; // DSI Host video mode configuration register
    volatile uint32_t DSI_VPCR; // DSI Host video packet configuration register
    volatile uint32_t DSI_VCCR; // DSI Host video chunks configuration register
    volatile uint32_t DSI_VNPCR; // DSI Host video null packet configuration register
    volatile uint32_t DSI_VHSACR; // DSI Host video HSA configuration register
    volatile uint32_t DSI_VHBPCR; // DSI Host video HBP configuration register
    volatile uint32_t DSI_VLCR; // DSI Host video line configuration register
    volatile uint32_t DSI_VVSACR; // DSI Host video VSA configuration register
    volatile uint32_t DSI_VVBPCR; // DSI Host video VBP configuration register
    volatile uint32_t DSI_VVFPCR; // DSI Host video VFP configuration register
    volatile uint32_t DSI_VVACR; // DSI Host video VA configuration register
    volatile uint32_t DSI_LCCR; // DSI Host LTDC command configuration register
    volatile uint32_t DSI_CMCR; // DSI Host command mode configuration register
    volatile uint32_t DSI_GHCR; // DSI Host generic header configuration register
    volatile uint32_t DSI_GPDR; // DSI Host generic payload data register
    volatile uint32_t DSI_GPSR; // DSI Host generic packet status register
    volatile uint32_t DSI_TCCR0; // DSI Host timeout counter configuration register 0
    volatile uint32_t DSI_TCCR1; // DSI Host timeout counter configuration register 1
    volatile uint32_t DSI_TCCR2; // DSI Host timeout counter configuration register 2
    volatile uint32_t DSI_TCCR3; // DSI Host timeout counter configuration register 3
    volatile uint32_t DSI_TCCR4; // DSI Host timeout counter configuration register 4
    volatile uint32_t DSI_TCCR5; // DSI Host timeout counter configuration register 5
    reserved_t<0x1> _0x90;
    volatile uint32_t DSI_CLCR; // DSI Host clock lane configuration register
    volatile uint32_t DSI_CLTCR; // DSI Host clock lane timer configuration register
    volatile uint32_t DSI_DLTCR; // DSI Host data lane timer configuration register
    volatile uint32_t DSI_PCTLR; // DSI Host PHY control register
    volatile uint32_t DSI_PCONFR; // DSI Host PHY configuration register
    volatile uint32_t DSI_PUCR; // DSI Host PHY ULPS control register
    volatile uint32_t DSI_PTTCR; // DSI Host PHY TX triggers configuration register
    volatile uint32_t DSI_PSR; // DSI Host PHY status register
    reserved_t<0x2> _0xb4;
    volatile uint32_t DSI_ISR0; // DSI Host interrupt and status register 0
    volatile uint32_t DSI_ISR1; // DSI Host interrupt and status register 1
    volatile uint32_t DSI_IER0; // DSI Host interrupt enable register 0
    volatile uint32_t DSI_IER1; // DSI Host interrupt enable register 1
    reserved_t<0x3> _0xcc;
    volatile uint32_t DSI_FIR0; // DSI Host force interrupt register 0
    volatile uint32_t DSI_FIR1; // DSI Host force interrupt register 1
    reserved_t<0x8> _0xe0;
    volatile uint32_t DSI_VSCR; // DSI Host video shadow control register
    reserved_t<0x2> _0x104;
    volatile uint32_t DSI_LCVCIDR; // DSI Host LTDC current VCID register
    volatile uint32_t DSI_LCCCR; // DSI Host LTDC current color coding register
    reserved_t<0x1> _0x114;
    volatile uint32_t DSI_LPMCCR; // DSI Host low-power mode current configuration register
    reserved_t<0x7> _0x11c;
    volatile uint32_t DSI_VMCCR; // DSI Host video mode current configuration register
    volatile uint32_t DSI_VPCCR; // DSI Host video packet current configuration register
    volatile uint32_t DSI_VCCCR; // DSI Host video chunks current configuration register
    volatile uint32_t DSI_VNPCCR; // DSI Host video null packet current configuration register
    volatile uint32_t DSI_VHSACCR; // DSI Host video HSA current configuration register
    volatile uint32_t DSI_VHBPCCR; // DSI Host video HBP current configuration register
    volatile uint32_t DSI_VLCCR; // DSI Host video line current configuration register
    volatile uint32_t DSI_VVSACCR; // DSI Host video VSA current configuration register
    volatile uint32_t DSI_VVBPCCR; // DSI Host video VBP current configuration register
    volatile uint32_t DSI_VVFPCCR; // DSI Host video VFP current configuration register
    volatile uint32_t DSI_VVACCR; // DSI Host video VA current configuration register
    reserved_t<0xa7> _0x164;
    volatile uint32_t DSI_WCFGR; // DSI wrapper configuration register
    volatile uint32_t DSI_WCR; // DSI wrapper control register
    volatile uint32_t DSI_WIER; // DSI wrapper interrupt enable register
    volatile uint32_t DSI_WISR; // DSI wrapper interrupt and status register
    volatile uint32_t DSI_WIFCR; // DSI wrapper interrupt flag clear register
    reserved_t<0x1> _0x414;
    volatile uint32_t DSI_WPCR0; // DSI wrapper PHY configuration register 0
    volatile uint32_t DSI_WPCR1; // This register shall be programmed only when DSI is stopped (CR. DSIEN=0 and CR.EN = 0).
    volatile uint32_t DSI_WPCR2; // DSI wrapper PHY configuration register 2
    volatile uint32_t DSI_WPCR3; // DSI wrapper PHY configuration register 3
    volatile uint32_t DSI_WPCR4; // DSI wrapper PHY configuration register 4
    reserved_t<0x1> _0x42c;
    volatile uint32_t DSI_WRPCR; // DSI wrapper regulator and PLL control register

    static constexpr uint32_t DSI_VR_RESET_VALUE = 0x3133302a; // Reset value
    typedef bit_field_t<0, 0xffffffff> DSI_VR_VERSION; // VERSION

    static constexpr uint32_t DSI_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_CR_EN = 0x1; // EN

    static constexpr uint32_t DSI_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_CCR_TXECKDIV; // TXECKDIV
    typedef bit_field_t<8, 0xff> DSI_CCR_TOCKDIV; // TOCKDIV

    static constexpr uint32_t DSI_LVCIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_LVCIDR_VCID; // VCID

    static constexpr uint32_t DSI_LCOLCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DSI_LCOLCR_COLC; // COLC
    static constexpr uint32_t DSI_LCOLCR_LPE = 0x100; // LPE

    static constexpr uint32_t DSI_LPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_LPCR_DEP = 0x1; // DEP
    static constexpr uint32_t DSI_LPCR_VSP = 0x2; // VSP
    static constexpr uint32_t DSI_LPCR_HSP = 0x4; // HSP

    static constexpr uint32_t DSI_LPMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_LPMCR_VLPSIZE; // VLPSIZE
    typedef bit_field_t<16, 0xff> DSI_LPMCR_LPSIZE; // LPSIZE


    static constexpr uint32_t DSI_PCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_PCR_ETTXE = 0x1; // ETTXE
    static constexpr uint32_t DSI_PCR_ETRXE = 0x2; // ETRXE
    static constexpr uint32_t DSI_PCR_BTAE = 0x4; // BTAE
    static constexpr uint32_t DSI_PCR_ECCRXE = 0x8; // ECCRXE
    static constexpr uint32_t DSI_PCR_CRCRXE = 0x10; // CRCRXE

    static constexpr uint32_t DSI_GVCIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_GVCIDR_VCID; // VCID

    static constexpr uint32_t DSI_MCR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t DSI_MCR_CMDM = 0x1; // CMDM

    static constexpr uint32_t DSI_VMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_VMCR_VMT; // VMT
    static constexpr uint32_t DSI_VMCR_LPVSAE = 0x100; // LPVSAE
    static constexpr uint32_t DSI_VMCR_LPVBPE = 0x200; // LPVBPE
    static constexpr uint32_t DSI_VMCR_LPVFPE = 0x400; // LPVFPE
    static constexpr uint32_t DSI_VMCR_LPVAE = 0x800; // LPVAE
    static constexpr uint32_t DSI_VMCR_LPHBPE = 0x1000; // LPHBPE
    static constexpr uint32_t DSI_VMCR_LPHFPE = 0x2000; // LPHFPE
    static constexpr uint32_t DSI_VMCR_FBTAAE = 0x4000; // FBTAAE
    static constexpr uint32_t DSI_VMCR_LPCE = 0x8000; // LPCE
    static constexpr uint32_t DSI_VMCR_PGE = 0x10000; // PGE
    static constexpr uint32_t DSI_VMCR_PGM = 0x100000; // PGM
    static constexpr uint32_t DSI_VMCR_PGO = 0x1000000; // PGO

    static constexpr uint32_t DSI_VPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DSI_VPCR_VPSIZE; // VPSIZE

    static constexpr uint32_t DSI_VCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> DSI_VCCR_NUMC; // NUMC

    static constexpr uint32_t DSI_VNPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> DSI_VNPCR_NPSIZE; // NPSIZE

    static constexpr uint32_t DSI_VHSACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DSI_VHSACR_HSA; // HSA

    static constexpr uint32_t DSI_VHBPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DSI_VHBPCR_HBP; // HBP

    static constexpr uint32_t DSI_VLCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> DSI_VLCR_HLINE; // HLINE

    static constexpr uint32_t DSI_VVSACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVSACR_VSA; // VSA

    static constexpr uint32_t DSI_VVBPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVBPCR_VBP; // VBP

    static constexpr uint32_t DSI_VVFPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVFPCR_VFP; // VFP

    static constexpr uint32_t DSI_VVACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DSI_VVACR_VA; // VA

    static constexpr uint32_t DSI_LCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_LCCR_CMDSIZE; // CMDSIZE

    static constexpr uint32_t DSI_CMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_CMCR_TEARE = 0x1; // TEARE
    static constexpr uint32_t DSI_CMCR_ARE = 0x2; // ARE
    static constexpr uint32_t DSI_CMCR_GSW0TX = 0x100; // GSW0TX
    static constexpr uint32_t DSI_CMCR_GSW1TX = 0x200; // GSW1TX
    static constexpr uint32_t DSI_CMCR_GSW2TX = 0x400; // GSW2TX
    static constexpr uint32_t DSI_CMCR_GSR0TX = 0x800; // GSR0TX
    static constexpr uint32_t DSI_CMCR_GSR1TX = 0x1000; // GSR1TX
    static constexpr uint32_t DSI_CMCR_GSR2TX = 0x2000; // GSR2TX
    static constexpr uint32_t DSI_CMCR_GLWTX = 0x4000; // GLWTX
    static constexpr uint32_t DSI_CMCR_DSW0TX = 0x10000; // DSW0TX
    static constexpr uint32_t DSI_CMCR_DSW1TX = 0x20000; // DSW1TX
    static constexpr uint32_t DSI_CMCR_DSR0TX = 0x40000; // DSR0TX
    static constexpr uint32_t DSI_CMCR_DLWTX = 0x80000; // DLWTX
    static constexpr uint32_t DSI_CMCR_MRDPS = 0x1000000; // MRDPS

    static constexpr uint32_t DSI_GHCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> DSI_GHCR_DT; // DT
    typedef bit_field_t<6, 0x3> DSI_GHCR_VCID; // VCID
    typedef bit_field_t<8, 0xff> DSI_GHCR_WCLSB; // WCLSB
    typedef bit_field_t<16, 0xff> DSI_GHCR_WCMSB; // WCMSB

    static constexpr uint32_t DSI_GPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_GPDR_DATA1; // DATA1
    typedef bit_field_t<8, 0xff> DSI_GPDR_DATA2; // DATA2
    typedef bit_field_t<16, 0xff> DSI_GPDR_DATA3; // DATA3
    typedef bit_field_t<24, 0xff> DSI_GPDR_DATA4; // DATA4

    static constexpr uint32_t DSI_GPSR_RESET_VALUE = 0x15; // Reset value
    static constexpr uint32_t DSI_GPSR_CMDFE = 0x1; // CMDFE
    static constexpr uint32_t DSI_GPSR_CMDFF = 0x2; // CMDFF
    static constexpr uint32_t DSI_GPSR_PWRFE = 0x4; // PWRFE
    static constexpr uint32_t DSI_GPSR_PWRFF = 0x8; // PWRFF
    static constexpr uint32_t DSI_GPSR_PRDFE = 0x10; // PRDFE
    static constexpr uint32_t DSI_GPSR_PRDFF = 0x20; // PRDFF
    static constexpr uint32_t DSI_GPSR_RCB = 0x40; // RCB

    static constexpr uint32_t DSI_TCCR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR0_LPRX_TOCNT; // LPRX_TOCNT
    typedef bit_field_t<16, 0xffff> DSI_TCCR0_HSTX_TOCNT; // HSTX_TOCNT

    static constexpr uint32_t DSI_TCCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR1_HSRD_TOCNT; // HSRD_TOCNT

    static constexpr uint32_t DSI_TCCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR2_LPRD_TOCNT; // LPRD_TOCNT

    static constexpr uint32_t DSI_TCCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR3_HSWR_TOCNT; // HSWR_TOCNT
    static constexpr uint32_t DSI_TCCR3_PM = 0x1000000; // PM

    static constexpr uint32_t DSI_TCCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR4_LPWR_TOCNT; // LPWR_TOCNT

    static constexpr uint32_t DSI_TCCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DSI_TCCR5_BTA_TOCNT; // BTA_TOCNT


    static constexpr uint32_t DSI_CLCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_CLCR_DPCC = 0x1; // DPCC
    static constexpr uint32_t DSI_CLCR_ACR = 0x2; // ACR

    static constexpr uint32_t DSI_CLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_CLTCR_LP2HS_TIME; // LP2HS_TIME
    typedef bit_field_t<16, 0x3ff> DSI_CLTCR_HS2LP_TIME; // HS2LP_TIME

    static constexpr uint32_t DSI_DLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> DSI_DLTCR_MRD_TIME; // Maximum read time
    typedef bit_field_t<16, 0xff> DSI_DLTCR_LP2HS_TIME; // LP2HS_TIME
    typedef bit_field_t<24, 0xff> DSI_DLTCR_HS2LP_TIME; // HS2LP_TIME

    static constexpr uint32_t DSI_PCTLR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_PCTLR_DEN = 0x2; // DEN
    static constexpr uint32_t DSI_PCTLR_CKE = 0x4; // CKE

    static constexpr uint32_t DSI_PCONFR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0x3> DSI_PCONFR_NL; // NL
    typedef bit_field_t<8, 0xff> DSI_PCONFR_SW_TIME; // SW_TIME

    static constexpr uint32_t DSI_PUCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_PUCR_URCL = 0x1; // URCL
    static constexpr uint32_t DSI_PUCR_UECL = 0x2; // UECL
    static constexpr uint32_t DSI_PUCR_URDL = 0x4; // URDL
    static constexpr uint32_t DSI_PUCR_UEDL = 0x8; // UEDL

    static constexpr uint32_t DSI_PTTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DSI_PTTCR_TX_TRIG; // TX_TRIG

    static constexpr uint32_t DSI_PSR_RESET_VALUE = 0x1528; // Reset value
    static constexpr uint32_t DSI_PSR_PD = 0x2; // PD
    static constexpr uint32_t DSI_PSR_PSSC = 0x4; // PSSC
    static constexpr uint32_t DSI_PSR_UANC = 0x8; // UANC
    static constexpr uint32_t DSI_PSR_PSS0 = 0x10; // PSS0
    static constexpr uint32_t DSI_PSR_UAN0 = 0x20; // UAN0
    static constexpr uint32_t DSI_PSR_RUE0 = 0x40; // RUE0
    static constexpr uint32_t DSI_PSR_PSS1 = 0x80; // PSS1
    static constexpr uint32_t DSI_PSR_UAN1 = 0x100; // UAN1


    static constexpr uint32_t DSI_ISR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_ISR0_AE0 = 0x1; // AE0
    static constexpr uint32_t DSI_ISR0_AE1 = 0x2; // AE1
    static constexpr uint32_t DSI_ISR0_AE2 = 0x4; // AE2
    static constexpr uint32_t DSI_ISR0_AE3 = 0x8; // AE3
    static constexpr uint32_t DSI_ISR0_AE4 = 0x10; // AE4
    static constexpr uint32_t DSI_ISR0_AE5 = 0x20; // AE5
    static constexpr uint32_t DSI_ISR0_AE6 = 0x40; // AE6
    static constexpr uint32_t DSI_ISR0_AE7 = 0x80; // AE7
    static constexpr uint32_t DSI_ISR0_AE8 = 0x100; // AE8
    static constexpr uint32_t DSI_ISR0_AE9 = 0x200; // AE9
    static constexpr uint32_t DSI_ISR0_AE10 = 0x400; // AE10
    static constexpr uint32_t DSI_ISR0_AE11 = 0x800; // AE11
    static constexpr uint32_t DSI_ISR0_AE12 = 0x1000; // AE12
    static constexpr uint32_t DSI_ISR0_AE13 = 0x2000; // AE13
    static constexpr uint32_t DSI_ISR0_AE14 = 0x4000; // AE14
    static constexpr uint32_t DSI_ISR0_AE15 = 0x8000; // AE15
    static constexpr uint32_t DSI_ISR0_PE0 = 0x10000; // PE0
    static constexpr uint32_t DSI_ISR0_PE1 = 0x20000; // PE1
    static constexpr uint32_t DSI_ISR0_PE2 = 0x40000; // PE2
    static constexpr uint32_t DSI_ISR0_PE3 = 0x80000; // PE3
    static constexpr uint32_t DSI_ISR0_PE4 = 0x100000; // PE4

    static constexpr uint32_t DSI_ISR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_ISR1_TOHSTX = 0x1; // TOHSTX
    static constexpr uint32_t DSI_ISR1_TOLPRX = 0x2; // TOLPRX
    static constexpr uint32_t DSI_ISR1_ECCSE = 0x4; // ECCSE
    static constexpr uint32_t DSI_ISR1_ECCME = 0x8; // ECCME
    static constexpr uint32_t DSI_ISR1_CRCE = 0x10; // CRCE
    static constexpr uint32_t DSI_ISR1_PSE = 0x20; // PSE
    static constexpr uint32_t DSI_ISR1_EOTPE = 0x40; // EOTPE
    static constexpr uint32_t DSI_ISR1_LPWRE = 0x80; // LPWRE
    static constexpr uint32_t DSI_ISR1_GCWRE = 0x100; // GCWRE
    static constexpr uint32_t DSI_ISR1_GPWRE = 0x200; // GPWRE
    static constexpr uint32_t DSI_ISR1_GPTXE = 0x400; // GPTXE
    static constexpr uint32_t DSI_ISR1_GPRDE = 0x800; // GPRDE
    static constexpr uint32_t DSI_ISR1_GPRXE = 0x1000; // GPRXE

    static constexpr uint32_t DSI_IER0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_IER0_AE0IE = 0x1; // AE0IE
    static constexpr uint32_t DSI_IER0_AE1IE = 0x2; // AE1IE
    static constexpr uint32_t DSI_IER0_AE2IE = 0x4; // AE2IE
    static constexpr uint32_t DSI_IER0_AE3IE = 0x8; // AE3IE
    static constexpr uint32_t DSI_IER0_AE4IE = 0x10; // AE4IE
    static constexpr uint32_t DSI_IER0_AE5IE = 0x20; // AE5IE
    static constexpr uint32_t DSI_IER0_AE6IE = 0x40; // AE6IE
    static constexpr uint32_t DSI_IER0_AE7IE = 0x80; // AE7IE
    static constexpr uint32_t DSI_IER0_AE8IE = 0x100; // AE8IE
    static constexpr uint32_t DSI_IER0_AE9IE = 0x200; // AE9IE
    static constexpr uint32_t DSI_IER0_AE10IE = 0x400; // AE10IE
    static constexpr uint32_t DSI_IER0_AE11IE = 0x800; // AE11IE
    static constexpr uint32_t DSI_IER0_AE12IE = 0x1000; // AE12IE
    static constexpr uint32_t DSI_IER0_AE13IE = 0x2000; // AE13IE
    static constexpr uint32_t DSI_IER0_AE14IE = 0x4000; // AE14IE
    static constexpr uint32_t DSI_IER0_AE15IE = 0x8000; // AE15IE
    static constexpr uint32_t DSI_IER0_PE0IE = 0x10000; // PE0IE
    static constexpr uint32_t DSI_IER0_PE1IE = 0x20000; // PE1IE
    static constexpr uint32_t DSI_IER0_PE2IE = 0x40000; // PE2IE
    static constexpr uint32_t DSI_IER0_PE3IE = 0x80000; // PE3IE
    static constexpr uint32_t DSI_IER0_PE4IE = 0x100000; // PE4IE

    static constexpr uint32_t DSI_IER1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_IER1_TOHSTXIE = 0x1; // TOHSTXIE
    static constexpr uint32_t DSI_IER1_TOLPRXIE = 0x2; // TOLPRXIE
    static constexpr uint32_t DSI_IER1_ECCSEIE = 0x4; // ECCSEIE
    static constexpr uint32_t DSI_IER1_ECCMEIE = 0x8; // ECCMEIE
    static constexpr uint32_t DSI_IER1_CRCEIE = 0x10; // CRCEIE
    static constexpr uint32_t DSI_IER1_PSEIE = 0x20; // PSEIE
    static constexpr uint32_t DSI_IER1_EOTPEIE = 0x40; // EOTPEIE
    static constexpr uint32_t DSI_IER1_LPWREIE = 0x80; // LPWREIE
    static constexpr uint32_t DSI_IER1_GCWREIE = 0x100; // GCWREIE
    static constexpr uint32_t DSI_IER1_GPWREIE = 0x200; // GPWREIE
    static constexpr uint32_t DSI_IER1_GPTXEIE = 0x400; // GPTXEIE
    static constexpr uint32_t DSI_IER1_GPRDEIE = 0x800; // GPRDEIE
    static constexpr uint32_t DSI_IER1_GPRXEIE = 0x1000; // GPRXEIE


    static constexpr uint32_t DSI_FIR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_FIR0_FAE0 = 0x1; // FAE0
    static constexpr uint32_t DSI_FIR0_FAE1 = 0x2; // FAE1
    static constexpr uint32_t DSI_FIR0_FAE2 = 0x4; // FAE2
    static constexpr uint32_t DSI_FIR0_FAE3 = 0x8; // FAE3
    static constexpr uint32_t DSI_FIR0_FAE4 = 0x10; // FAE4
    static constexpr uint32_t DSI_FIR0_FAE5 = 0x20; // FAE5
    static constexpr uint32_t DSI_FIR0_FAE6 = 0x40; // FAE6
    static constexpr uint32_t DSI_FIR0_FAE7 = 0x80; // FAE7
    static constexpr uint32_t DSI_FIR0_FAE8 = 0x100; // FAE8
    static constexpr uint32_t DSI_FIR0_FAE9 = 0x200; // FAE9
    static constexpr uint32_t DSI_FIR0_FAE10 = 0x400; // FAE10
    static constexpr uint32_t DSI_FIR0_FAE11 = 0x800; // FAE11
    static constexpr uint32_t DSI_FIR0_FAE12 = 0x1000; // FAE12
    static constexpr uint32_t DSI_FIR0_FAE13 = 0x2000; // FAE13
    static constexpr uint32_t DSI_FIR0_FAE14 = 0x4000; // FAE14
    static constexpr uint32_t DSI_FIR0_FAE15 = 0x8000; // FAE15
    static constexpr uint32_t DSI_FIR0_FPE0 = 0x10000; // FPE0
    static constexpr uint32_t DSI_FIR0_FPE1 = 0x20000; // FPE1
    static constexpr uint32_t DSI_FIR0_FPE2 = 0x40000; // FPE2
    static constexpr uint32_t DSI_FIR0_FPE3 = 0x80000; // FPE3
    static constexpr uint32_t DSI_FIR0_FPE4 = 0x100000; // FPE4

    static constexpr uint32_t DSI_FIR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_FIR1_FTOHSTX = 0x1; // FTOHSTX
    static constexpr uint32_t DSI_FIR1_FTOLPRX = 0x2; // FTOLPRX
    static constexpr uint32_t DSI_FIR1_FECCSE = 0x4; // FECCSE
    static constexpr uint32_t DSI_FIR1_FECCME = 0x8; // FECCME
    static constexpr uint32_t DSI_FIR1_FCRCE = 0x10; // FCRCE
    static constexpr uint32_t DSI_FIR1_FPSE = 0x20; // FPSE
    static constexpr uint32_t DSI_FIR1_FEOTPE = 0x40; // FEOTPE
    static constexpr uint32_t DSI_FIR1_FLPWRE = 0x80; // FLPWRE
    static constexpr uint32_t DSI_FIR1_FGCWRE = 0x100; // FGCWRE
    static constexpr uint32_t DSI_FIR1_FGPWRE = 0x200; // FGPWRE
    static constexpr uint32_t DSI_FIR1_FGPTXE = 0x400; // FGPTXE
    static constexpr uint32_t DSI_FIR1_FGPRDE = 0x800; // FGPRDE
    static constexpr uint32_t DSI_FIR1_FGPRXE = 0x1000; // FGPRXE


    static constexpr uint32_t DSI_VSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_VSCR_EN = 0x1; // EN
    static constexpr uint32_t DSI_VSCR_UR = 0x100; // UR


    static constexpr uint32_t DSI_LCVCIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_LCVCIDR_VCID; // VCID

    static constexpr uint32_t DSI_LCCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DSI_LCCCR_COLC; // COLC
    static constexpr uint32_t DSI_LCCCR_LPE = 0x100; // LPE


    static constexpr uint32_t DSI_LPMCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_LPMCCR_VLPSIZE; // VLPSIZE
    typedef bit_field_t<16, 0xff> DSI_LPMCCR_LPSIZE; // LPSIZE


    static constexpr uint32_t DSI_VMCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_VMCCR_VMT; // VMT
    static constexpr uint32_t DSI_VMCCR_LPVSAE = 0x4; // LPVSAE
    static constexpr uint32_t DSI_VMCCR_LPVBPE = 0x8; // LPVBPE
    static constexpr uint32_t DSI_VMCCR_LPVFPE = 0x10; // LPVFPE
    static constexpr uint32_t DSI_VMCCR_LPVAE = 0x20; // LPVAE
    static constexpr uint32_t DSI_VMCCR_LPHBPE = 0x40; // LPHBPE
    static constexpr uint32_t DSI_VMCCR_LPHFE = 0x80; // LPHFE
    static constexpr uint32_t DSI_VMCCR_FBTAAE = 0x100; // FBTAAE
    static constexpr uint32_t DSI_VMCCR_LPCE = 0x200; // LPCE

    static constexpr uint32_t DSI_VPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DSI_VPCCR_VPSIZE; // VPSIZE

    static constexpr uint32_t DSI_VCCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> DSI_VCCCR_NUMC; // NUMC

    static constexpr uint32_t DSI_VNPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> DSI_VNPCCR_NPSIZE; // NPSIZE

    static constexpr uint32_t DSI_VHSACCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DSI_VHSACCR_HSA; // HSA

    static constexpr uint32_t DSI_VHBPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> DSI_VHBPCCR_HBP; // HBP

    static constexpr uint32_t DSI_VLCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> DSI_VLCCR_HLINE; // HLINE

    static constexpr uint32_t DSI_VVSACCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVSACCR_VSA; // VSA

    static constexpr uint32_t DSI_VVBPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVBPCCR_VBP; // VBP

    static constexpr uint32_t DSI_VVFPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DSI_VVFPCCR_VFP; // VFP

    static constexpr uint32_t DSI_VVACCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DSI_VVACCR_VA; // VA


    static constexpr uint32_t DSI_WCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WCFGR_DSIM = 0x1; // DSIM
    typedef bit_field_t<1, 0x7> DSI_WCFGR_COLMUX; // COLMUX
    static constexpr uint32_t DSI_WCFGR_TESRC = 0x10; // TESRC
    static constexpr uint32_t DSI_WCFGR_TEPOL = 0x20; // TEPOL
    static constexpr uint32_t DSI_WCFGR_AR = 0x40; // AR
    static constexpr uint32_t DSI_WCFGR_VSPOL = 0x80; // VSPOL

    static constexpr uint32_t DSI_WCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WCR_COLM = 0x1; // COLM
    static constexpr uint32_t DSI_WCR_SHTDN = 0x2; // SHTDN
    static constexpr uint32_t DSI_WCR_LTDCEN = 0x4; // LTDCEN
    static constexpr uint32_t DSI_WCR_DSIEN = 0x8; // DSIEN

    static constexpr uint32_t DSI_WIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WIER_TEIE = 0x1; // TEIE
    static constexpr uint32_t DSI_WIER_ERIE = 0x2; // ERIE
    static constexpr uint32_t DSI_WIER_PLLLIE = 0x200; // PLLLIE
    static constexpr uint32_t DSI_WIER_PLLUIE = 0x400; // PLLUIE
    static constexpr uint32_t DSI_WIER_RRIE = 0x2000; // RRIE

    static constexpr uint32_t DSI_WISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WISR_TEIF = 0x1; // TEIF
    static constexpr uint32_t DSI_WISR_ERIF = 0x2; // ERIF
    static constexpr uint32_t DSI_WISR_BUSY = 0x4; // BUSY
    static constexpr uint32_t DSI_WISR_PLLLS = 0x100; // PLLLS
    static constexpr uint32_t DSI_WISR_PLLLIF = 0x200; // PLLLIF
    static constexpr uint32_t DSI_WISR_PLLUIF = 0x400; // PLLUIF
    static constexpr uint32_t DSI_WISR_RRS = 0x1000; // RRS
    static constexpr uint32_t DSI_WISR_RRIF = 0x2000; // RRIF

    static constexpr uint32_t DSI_WIFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WIFCR_CTEIF = 0x1; // CTEIF
    static constexpr uint32_t DSI_WIFCR_CERIF = 0x2; // CERIF
    static constexpr uint32_t DSI_WIFCR_CPLLLIF = 0x200; // CPLLLIF
    static constexpr uint32_t DSI_WIFCR_CPLLUIF = 0x400; // CPLLUIF
    static constexpr uint32_t DSI_WIFCR_CRRIF = 0x2000; // CRRIF


    static constexpr uint32_t DSI_WPCR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> DSI_WPCR0_UIX4; // UIX4
    static constexpr uint32_t DSI_WPCR0_SWCL = 0x40; // SWCL
    static constexpr uint32_t DSI_WPCR0_SWDL0 = 0x80; // SWDL0
    static constexpr uint32_t DSI_WPCR0_SWDL1 = 0x100; // SWDL1
    static constexpr uint32_t DSI_WPCR0_HSICL = 0x200; // HSICL
    static constexpr uint32_t DSI_WPCR0_HSIDL0 = 0x400; // HSIDL0
    static constexpr uint32_t DSI_WPCR0_HSIDL1 = 0x800; // HSIDL1
    static constexpr uint32_t DSI_WPCR0_FTXSMCL = 0x1000; // FTXSMCL
    static constexpr uint32_t DSI_WPCR0_FTXSMDL = 0x2000; // FTXSMDL
    static constexpr uint32_t DSI_WPCR0_CDOFFDL = 0x4000; // CDOFFDL
    static constexpr uint32_t DSI_WPCR0_TDDL = 0x10000; // TDDL
    static constexpr uint32_t DSI_WPCR0_PDEN = 0x40000; // Pull-down enable
    static constexpr uint32_t DSI_WPCR0_TCLKPREPEN = 0x80000; // Custom time for tCLK-PREPARE enable
    static constexpr uint32_t DSI_WPCR0_TCLKZEROEN = 0x100000; // Custom time for tCLK-ZERO enable
    static constexpr uint32_t DSI_WPCR0_THSPREPEN = 0x200000; // Custom time for tHS-PREPARE enable
    static constexpr uint32_t DSI_WPCR0_THSTRAILEN = 0x400000; // Custom time for tHS-TRAIL enable
    static constexpr uint32_t DSI_WPCR0_THSZEROEN = 0x800000; // Custom time for tHS-ZERO enable
    static constexpr uint32_t DSI_WPCR0_TLPXDEN = 0x1000000; // Custom time for tLPX for data lanes enable
    static constexpr uint32_t DSI_WPCR0_THSEXITEN = 0x2000000; // Custom time for tHS-EXIT enable
    static constexpr uint32_t DSI_WPCR0_TLPXCEN = 0x4000000; // Custom time for tLPX for clock lane enable
    static constexpr uint32_t DSI_WPCR0_TCLKPOSTEN = 0x8000000; // Custom time for tCLK-POST enable

    static constexpr uint32_t DSI_WPCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DSI_WPCR1_HSTXDCL; // High-speed transmission delay on clock lane
    typedef bit_field_t<2, 0x3> DSI_WPCR1_HSTXDDL; // High-speed transmission delay on data lanes
    typedef bit_field_t<6, 0x3> DSI_WPCR1_LPSRCCL; // Low-power transmission slew-rate compensation on clock lane
    typedef bit_field_t<8, 0x3> DSI_WPCR1_LPSRCDL; // Low-power transmission slew-rate compensation on data lanes
    static constexpr uint32_t DSI_WPCR1_SDDC = 0x1000; // SDD control
    typedef bit_field_t<16, 0x3> DSI_WPCR1_HSTXSRCCL; // High-speed transmission slew-rate control on clock lane
    typedef bit_field_t<18, 0x3> DSI_WPCR1_HSTXSRCDL; // High-speed transmission slew-rate control on data lanes
    static constexpr uint32_t DSI_WPCR1_FLPRXLPM = 0x400000; // Forces LP receiver in low-power mode
    typedef bit_field_t<25, 0x3> DSI_WPCR1_LPRXFT; // Low-power RX low-pass filtering tuning

    static constexpr uint32_t DSI_WPCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_WPCR2_TCLKPREP; // TCLKPREP
    typedef bit_field_t<8, 0xff> DSI_WPCR2_TCLKZERO; // TCLKZERO
    typedef bit_field_t<16, 0xff> DSI_WPCR2_THSPREP; // THSPREP
    typedef bit_field_t<24, 0xff> DSI_WPCR2_THSTRAIL; // THSTRAIL

    static constexpr uint32_t DSI_WPCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_WPCR3_THSZERO; // THSZERO
    typedef bit_field_t<8, 0xff> DSI_WPCR3_TLPXD; // TLPXD
    typedef bit_field_t<16, 0xff> DSI_WPCR3_THSEXIT; // THSEXIT
    typedef bit_field_t<24, 0xff> DSI_WPCR3_TLPXC; // TLPXC

    static constexpr uint32_t DSI_WPCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DSI_WPCR4_TCLKPOST; // TCLKPOST


    static constexpr uint32_t DSI_WRPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSI_WRPCR_PLLEN = 0x1; // PLLEN
    typedef bit_field_t<2, 0x7f> DSI_WRPCR_NDIV; // NDIV
    typedef bit_field_t<11, 0xf> DSI_WRPCR_IDF; // IDF
    typedef bit_field_t<16, 0x3> DSI_WRPCR_ODF; // ODF
    static constexpr uint32_t DSI_WRPCR_REGEN = 0x1000000; // REGEN
};

template<>
struct peripheral_t<STM32H745_CM4, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DSIHOST>
{
    using T = stm32h745_cm4_dsihost_t;
    static T& V;
};

using dsihost_t = peripheral_t<svd, DSIHOST>;

template<int INST> struct dsihost_traits {};

template<> struct dsihost_traits<0>
{
    using dsihost = dsihost_t;
    static constexpr signal_t TE = DSIHOST_TE;
};
