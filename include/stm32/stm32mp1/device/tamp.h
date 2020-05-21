#pragma once

////
//
//      STM32MP1 TAMP peripherals
//
////

////
//
//      TAMP
//
////

struct stm32mp15xxx_tamp_t
{
    volatile uint32_t TAMP_CR1;     // [read-write] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_CR2;     // [read-write] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    reserved_t<0x1> _0xc;
    volatile uint32_t TAMP_FLTCR;   // [read-write] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_ATCR1;   // [read-write] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_ATSEEDR; // [write-only] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_ATOR;    // [read-only] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    reserved_t<0x1> _0x20;
    volatile uint32_t TAMP_SMCR;    // [read-write] This register can be written only when the APB access is secure.
    reserved_t<0x2> _0x2c;
    volatile uint32_t TAMP_IER;     // [read-write] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_SR;      // [read-only] This register can be protected against non-secure access. Refer to Section51.3.3: TAMP secure protection modes.
    volatile uint32_t TAMP_MISR;    // [read-only] TAMP non-secure masked interrupt status register
    volatile uint32_t TAMP_SMISR;   // [read-only] TAMP secure masked interrupt status register
    volatile uint32_t TAMP_SCR;     // [write-only] TAMP status clear register
    volatile uint32_t TAMP_COUNTR;  // [read-only] TAMP monotonic counter register
    reserved_t<0x3> _0x50;
    volatile uint32_t TAMP_CFGR;    // [read-write] TAMP configuration register
    reserved_t<0x2b> _0x100;
    volatile uint32_t TAMP_BKP0R;   // [read-write] TAMP backup 0 register
    volatile uint32_t TAMP_BKP1R;   // [read-write] TAMP backup 1 register
    volatile uint32_t TAMP_BKP2R;   // [read-write] TAMP backup 2 register
    volatile uint32_t TAMP_BKP3R;   // [read-write] TAMP backup 3 register
    volatile uint32_t TAMP_BKP4R;   // [read-write] TAMP backup 4 register
    volatile uint32_t TAMP_BKP5R;   // [read-write] TAMP backup 5 register
    volatile uint32_t TAMP_BKP6R;   // [read-write] TAMP backup 6 register
    volatile uint32_t TAMP_BKP7R;   // [read-write] TAMP backup 7 register
    volatile uint32_t TAMP_BKP8R;   // [read-write] TAMP backup 8 register
    volatile uint32_t TAMP_BKP9R;   // [read-write] TAMP backup 9 register
    volatile uint32_t TAMP_BKP10R;  // [read-write] TAMP backup 10 register
    volatile uint32_t TAMP_BKP11R;  // [read-write] TAMP backup 11 register
    volatile uint32_t TAMP_BKP12R;  // [read-write] TAMP backup 12 register
    volatile uint32_t TAMP_BKP13R;  // [read-write] TAMP backup 13 register
    volatile uint32_t TAMP_BKP14R;  // [read-write] TAMP backup 14 register
    volatile uint32_t TAMP_BKP15R;  // [read-write] TAMP backup 15 register
    volatile uint32_t TAMP_BKP16R;  // [read-write] TAMP backup 16 register
    volatile uint32_t TAMP_BKP17R;  // [read-write] TAMP backup 17 register
    volatile uint32_t TAMP_BKP18R;  // [read-write] TAMP backup 18 register
    volatile uint32_t TAMP_BKP19R;  // [read-write] TAMP backup 19 register
    volatile uint32_t TAMP_BKP20R;  // [read-write] TAMP backup 20 register
    volatile uint32_t TAMP_BKP21R;  // [read-write] TAMP backup 21 register
    volatile uint32_t TAMP_BKP22R;  // [read-write] TAMP backup 22 register
    volatile uint32_t TAMP_BKP23R;  // [read-write] TAMP backup 23 register
    volatile uint32_t TAMP_BKP24R;  // [read-write] TAMP backup 24 register
    volatile uint32_t TAMP_BKP25R;  // [read-write] TAMP backup 25 register
    volatile uint32_t TAMP_BKP26R;  // [read-write] TAMP backup 26 register
    volatile uint32_t TAMP_BKP27R;  // [read-write] TAMP backup 27 register
    volatile uint32_t TAMP_BKP28R;  // [read-write] TAMP backup 28 register
    volatile uint32_t TAMP_BKP29R;  // [read-write] TAMP backup 29 register
    volatile uint32_t TAMP_BKP30R;  // [read-write] TAMP backup 30 register
    volatile uint32_t TAMP_BKP31R;  // [read-write] TAMP backup 31 register
    reserved_t<0x9b> _0x3ec;
    volatile uint32_t TAMP_HWCFGR2; // [read-only] TAMP hardware configuration register 2
    volatile uint32_t TAMP_HWCFGR1; // [read-only] TAMP hardware configuration register 1
    volatile uint32_t TAMP_VERR;    // [read-only] TAMP version register
    volatile uint32_t TAMP_IPIDR;   // [read-only] TAMP identification register
    volatile uint32_t TAMP_SIDR;    // [read-only] TAMP size identification register

    static constexpr uint32_t TAMP_CR1_RESET_VALUE = 0xffff0000;
    static constexpr uint32_t TAMP_CR1_TAMP1E = 0x1;       // TAMP1E
    static constexpr uint32_t TAMP_CR1_TAMP2E = 0x2;       // TAMP2E
    static constexpr uint32_t TAMP_CR1_TAMP3E = 0x4;       // TAMP3E
    static constexpr uint32_t TAMP_CR1_ITAMP1E = 0x10000;  // ITAMP1E
    static constexpr uint32_t TAMP_CR1_ITAMP2E = 0x20000;  // ITAMP2E
    static constexpr uint32_t TAMP_CR1_ITAMP3E = 0x40000;  // ITAMP3E
    static constexpr uint32_t TAMP_CR1_ITAMP4E = 0x80000;  // ITAMP4E
    static constexpr uint32_t TAMP_CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t TAMP_CR1_ITAMP8E = 0x800000; // ITAMP8E

    static constexpr uint32_t TAMP_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_CR2_TAMP1NOER = 0x1;      // TAMP1NOER
    static constexpr uint32_t TAMP_CR2_TAMP2NOER = 0x2;      // TAMP2NOER
    static constexpr uint32_t TAMP_CR2_TAMP3NOER = 0x4;      // TAMP3NOER
    static constexpr uint32_t TAMP_CR2_TAMP1MSK = 0x10000;   // TAMP1MSK
    static constexpr uint32_t TAMP_CR2_TAMP2MSK = 0x20000;   // TAMP2MSK
    static constexpr uint32_t TAMP_CR2_TAMP3MSK = 0x40000;   // TAMP3MSK
    static constexpr uint32_t TAMP_CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t TAMP_CR2_TAMP2TRG = 0x2000000; // TAMP2TRG
    static constexpr uint32_t TAMP_CR2_TAMP3TRG = 0x4000000; // TAMP3TRG

    static constexpr uint32_t TAMP_FLTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TAMP_FLTCR_TAMPFREQ =        // TAMPFREQ
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_FLTCR_TAMPFLT =         // TAMPFLT
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_FLTCR_TAMPPRCH =        // TAMPPRCH
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t TAMP_FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS

    static constexpr uint32_t TAMP_ATCR1_RESET_VALUE = 0x70000;
    static constexpr uint32_t TAMP_ATCR1_TAMP1AM = 0x1;         // TAMP1AM
    static constexpr uint32_t TAMP_ATCR1_TAMP2AM = 0x2;         // TAMP2AM
    static constexpr uint32_t TAMP_ATCR1_TAMP3AM = 0x4;         // TAMP3AM
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATCR1_ATOSEL1 =              // ATOSEL1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATCR1_ATOSEL2 =              // ATOSEL2
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATCR1_ATOSEL3 =              // ATOSEL3
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATCR1_ATCKSEL =              // ATCKSEL
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATCR1_ATPER =                // ATPER
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t TAMP_ATCR1_ATOSHARE = 0x40000000; // ATOSHARE
    static constexpr uint32_t TAMP_ATCR1_FLTEN = 0x80000000;    // FLTEN

    static constexpr uint32_t TAMP_ATSEEDR_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_ATOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TAMP_ATOR_PRNG =          // PRNG
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t TAMP_ATOR_SEEDF = 0x4000; // SEEDF
    static constexpr uint32_t TAMP_ATOR_INITS = 0x8000; // INITS

    static constexpr uint32_t TAMP_SMCR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t TAMP_SMCR_BKPRWDPROT =            // BKPRWDPROT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_SMCR_BKPWDPROT =             // BKPWDPROT
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t TAMP_SMCR_TAMPDPROT = 0x80000000; // TAMPDPROT

    static constexpr uint32_t TAMP_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_IER_TAMP1IE = 0x1;       // TAMP1IE
    static constexpr uint32_t TAMP_IER_TAMP2IE = 0x2;       // TAMP2IE
    static constexpr uint32_t TAMP_IER_TAMP3IE = 0x4;       // TAMP3IE
    static constexpr uint32_t TAMP_IER_ITAMP1IE = 0x10000;  // ITAMP1IE
    static constexpr uint32_t TAMP_IER_ITAMP2IE = 0x20000;  // ITAMP2IE
    static constexpr uint32_t TAMP_IER_ITAMP3IE = 0x40000;  // ITAMP3IE
    static constexpr uint32_t TAMP_IER_ITAMP4IE = 0x80000;  // ITAMP4IE
    static constexpr uint32_t TAMP_IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t TAMP_IER_ITAMP8IE = 0x800000; // ITAMP8IE

    static constexpr uint32_t TAMP_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_SR_TAMP1F = 0x1;       // TAMP1F
    static constexpr uint32_t TAMP_SR_TAMP2F = 0x2;       // TAMP2F
    static constexpr uint32_t TAMP_SR_TAMP3F = 0x4;       // TAMP3F
    static constexpr uint32_t TAMP_SR_ITAMP1F = 0x10000;  // ITAMP1F
    static constexpr uint32_t TAMP_SR_ITAMP2F = 0x20000;  // ITAMP2F
    static constexpr uint32_t TAMP_SR_ITAMP3F = 0x40000;  // ITAMP3F
    static constexpr uint32_t TAMP_SR_ITAMP4F = 0x80000;  // ITAMP4F
    static constexpr uint32_t TAMP_SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t TAMP_SR_ITAMP8F = 0x800000; // ITAMP8F

    static constexpr uint32_t TAMP_MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_MISR_TAMP1MF = 0x1;       // TAMP1MF
    static constexpr uint32_t TAMP_MISR_TAMP2MF = 0x2;       // TAMP2MF
    static constexpr uint32_t TAMP_MISR_TAMP3MF = 0x4;       // TAMP3MF
    static constexpr uint32_t TAMP_MISR_ITAMP1MF = 0x10000;  // ITAMP1MF
    static constexpr uint32_t TAMP_MISR_ITAMP2MF = 0x20000;  // ITAMP2MF
    static constexpr uint32_t TAMP_MISR_ITAMP3MF = 0x40000;  // ITAMP3MF
    static constexpr uint32_t TAMP_MISR_ITAMP4MF = 0x80000;  // ITAMP4MF
    static constexpr uint32_t TAMP_MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t TAMP_MISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t TAMP_SMISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_SMISR_TAMP1MF = 0x1;       // TAMP1MF
    static constexpr uint32_t TAMP_SMISR_TAMP2MF = 0x2;       // TAMP2MF
    static constexpr uint32_t TAMP_SMISR_TAMP3MF = 0x4;       // TAMP3MF
    static constexpr uint32_t TAMP_SMISR_ITAMP1MF = 0x10000;  // ITAMP1MF
    static constexpr uint32_t TAMP_SMISR_ITAMP2MF = 0x20000;  // ITAMP2MF
    static constexpr uint32_t TAMP_SMISR_ITAMP3MF = 0x40000;  // ITAMP3MF
    static constexpr uint32_t TAMP_SMISR_ITAMP4MF = 0x80000;  // ITAMP4MF
    static constexpr uint32_t TAMP_SMISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t TAMP_SMISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t TAMP_SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_SCR_CTAMP1F = 0x1;       // CTAMP1F
    static constexpr uint32_t TAMP_SCR_CTAMP2F = 0x2;       // CTAMP2F
    static constexpr uint32_t TAMP_SCR_CTAMP3F = 0x4;       // CTAMP3F
    static constexpr uint32_t TAMP_SCR_CITAMP1F = 0x10000;  // CITAMP1F
    static constexpr uint32_t TAMP_SCR_CITAMP2F = 0x20000;  // CITAMP2F
    static constexpr uint32_t TAMP_SCR_CITAMP3F = 0x40000;  // CITAMP3F
    static constexpr uint32_t TAMP_SCR_CITAMP4F = 0x80000;  // CITAMP4F
    static constexpr uint32_t TAMP_SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t TAMP_SCR_CITAMP8F = 0x800000; // CITAMP8F

    static constexpr uint32_t TAMP_COUNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t TAMP_CFGR_OUT3_RMP = 0x1; // OUT3_RMP

    static constexpr uint32_t TAMP_BKP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP8R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP9R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP10R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP11R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP12R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP13R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP14R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP15R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP16R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP17R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP18R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP19R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP20R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP21R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP22R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP23R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP24R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP25R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP26R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP27R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP28R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP29R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP30R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_BKP31R_RESET_VALUE = 0x0;

    static constexpr uint32_t TAMP_HWCFGR2_RESET_VALUE = 0x101;
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR2_OPTIONREG_OUT =   // OPTIONREG_OUT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR2_TRUST_ZONE =      // TRUST_ZONE
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t TAMP_HWCFGR1_RESET_VALUE = 0x9d1320;
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR1_BACKUP_REGS =     // BACKUP_REGS
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR1_TAMPER =          // TAMPER
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR1_ACTIVE_TAMPER =   // ACTIVE_TAMPER
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_HWCFGR1_INT_TAMPER =      // INT_TAMPER
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TAMP_VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t TAMP_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TAMP_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t TAMP_IPIDR_RESET_VALUE = 0x121033;

    static constexpr uint32_t TAMP_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, TAMP>
{
    typedef stm32mp15xxx_tamp_t T;
    static T& V;
};

using tamp_t = peripheral_t<mcu_svd, TAMP>;

