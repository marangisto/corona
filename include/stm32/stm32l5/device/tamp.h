#pragma once

////
//
//      STM32L5 TAMP peripherals
//
////

////
//
//      Tamper and backup registers
//
////

struct stm32l552_tamp_t
{
    volatile uint32_t CR1;     // [read-write] control register 1
    volatile uint32_t CR2;     // [read-write] control register 2
    volatile uint32_t CR3;     // [read-write] control register 3
    volatile uint32_t FLTCR;   // [read-write] TAMP filter control register
    volatile uint32_t ATCR1;   // [read-write] TAMP active tamper control register 1
    volatile uint32_t ATSEEDR; // [write-only] TAMP active tamper seed register
    volatile uint32_t ATOR;    // [read-only] TAMP active tamper output register
    volatile uint32_t ATCR2;   // [read-write] TAMP active tamper control register 2
    volatile uint32_t SMCR;    // [read-write] TAMP secure mode register
    volatile uint32_t PRIVCR;  // [read-write] TAMP privilege mode control register
    reserved_t<0x1> _0x2c;
    volatile uint32_t IER;     // [read-write] TAMP interrupt enable register
    volatile uint32_t SR;      // [read-only] TAMP status register
    volatile uint32_t MISR;    // [read-only] TAMP masked interrupt status register
    volatile uint32_t SMISR;   // [read-only] TAMP secure masked interrupt status register
    volatile uint32_t SCR;     // [write-only] TAMP status clear register
    volatile uint32_t COUNTR;  // [read-only] TAMP monotonic counter register
    reserved_t<0x3> _0x50;
    volatile uint32_t CFGR;    // [read-write] TAMP configuration register
    reserved_t<0x2b> _0x100;
    volatile uint32_t BKP0R;   // [read-write] TAMP backup register
    volatile uint32_t BKP1R;   // [read-write] TAMP backup register
    volatile uint32_t BKP2R;   // [read-write] TAMP backup register
    volatile uint32_t BKP3R;   // [read-write] TAMP backup register
    volatile uint32_t BKP4R;   // [read-write] TAMP backup register
    volatile uint32_t BKP5R;   // [read-write] TAMP backup register
    volatile uint32_t BKP6R;   // [read-write] TAMP backup register
    volatile uint32_t BKP7R;   // [read-write] TAMP backup register
    volatile uint32_t BKP8R;   // [read-write] TAMP backup register
    volatile uint32_t BKP9R;   // [read-write] TAMP backup register
    volatile uint32_t BKP10R;  // [read-write] TAMP backup register
    volatile uint32_t BKP11R;  // [read-write] TAMP backup register
    volatile uint32_t BKP12R;  // [read-write] TAMP backup register
    volatile uint32_t BKP13R;  // [read-write] TAMP backup register
    volatile uint32_t BKP14R;  // [read-write] TAMP backup register
    volatile uint32_t BKP15R;  // [read-write] TAMP backup register
    volatile uint32_t BKP16R;  // [read-write] TAMP backup register
    volatile uint32_t BKP17R;  // [read-write] TAMP backup register
    volatile uint32_t BKP18R;  // [read-write] TAMP backup register
    volatile uint32_t BKP19R;  // [read-write] TAMP backup register
    volatile uint32_t BKP20R;  // [read-write] TAMP backup register
    volatile uint32_t BKP21R;  // [read-write] TAMP backup register
    volatile uint32_t BKP22R;  // [read-write] TAMP backup register
    volatile uint32_t BKP23R;  // [read-write] TAMP backup register
    volatile uint32_t BKP24R;  // [read-write] TAMP backup register
    volatile uint32_t BKP25R;  // [read-write] TAMP backup register
    volatile uint32_t BKP26R;  // [read-write] TAMP backup register
    volatile uint32_t BKP27R;  // [read-write] TAMP backup register
    volatile uint32_t BKP28R;  // [read-write] TAMP backup register
    volatile uint32_t BKP29R;  // [read-write] TAMP backup register
    volatile uint32_t BKP30R;  // [read-write] TAMP backup register
    volatile uint32_t BKP31R;  // [read-write] TAMP backup register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000;
    static constexpr uint32_t CR1_TAMP1E = 0x1;       // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2;       // TAMP2E
    static constexpr uint32_t CR1_TAMP3E = 0x4;       // TAMP3E
    static constexpr uint32_t CR1_TAMP4E = 0x8;       // TAMP4E
    static constexpr uint32_t CR1_TAMP5E = 0x10;      // TAMP5E
    static constexpr uint32_t CR1_TAMP6E = 0x20;      // TAMP6E
    static constexpr uint32_t CR1_TAMP7E = 0x40;      // TAMP7E
    static constexpr uint32_t CR1_TAMP8E = 0x80;      // TAMP8E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000;  // ITAMP1E
    static constexpr uint32_t CR1_ITAMP2E = 0x20000;  // ITAMP2E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000;  // ITAMP3E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP8E = 0x800000; // ITAMP5E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_TAMP1NOER = 0x1;       // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2;       // TAMP2NOER
    static constexpr uint32_t CR2_TAMP3NOER = 0x4;       // TAMP3NOER
    static constexpr uint32_t CR2_TAMP4NOER = 0x8;       // TAMP4NOER
    static constexpr uint32_t CR2_TAMP5NOER = 0x10;      // TAMP5NOER
    static constexpr uint32_t CR2_TAMP6NOER = 0x20;      // TAMP6NOER
    static constexpr uint32_t CR2_TAMP7NOER = 0x40;      // TAMP7NOER
    static constexpr uint32_t CR2_TAMP8NOER = 0x80;      // TAMP8NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000;    // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000;    // TAMP2MSK
    static constexpr uint32_t CR2_TAMP3MSK = 0x40000;    // TAMP3MSK
    static constexpr uint32_t CR2_BKERASE = 0x800000;    // BKERASE
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000;  // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000;  // TAMP2TRG
    static constexpr uint32_t CR2_TAMP3TRG = 0x4000000;  // TAMP3TRG
    static constexpr uint32_t CR2_TAMP4TRG = 0x8000000;  // TAMP4TRG
    static constexpr uint32_t CR2_TAMP5TRG = 0x10000000; // TAMP5TRG
    static constexpr uint32_t CR2_TAMP6TRG = 0x20000000; // TAMP6TRG
    static constexpr uint32_t CR2_TAMP7TRG = 0x40000000; // TAMP7TRG
    static constexpr uint32_t CR2_TAMP8TRG = 0x80000000; // TAMP8TRG

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_ITAMP1NOER = 0x1;  // ITAMP1NOER
    static constexpr uint32_t CR3_ITAMP2NOER = 0x2;  // ITAMP2NOER
    static constexpr uint32_t CR3_ITAMP3NOER = 0x4;  // ITAMP3NOER
    static constexpr uint32_t CR3_ITAMP5NOER = 0x10; // ITAMP5NOER
    static constexpr uint32_t CR3_ITAMP8NOER = 0x80; // ITAMP8NOER

    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLTCR_TAMPFREQ =        // TAMPFREQ
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLTCR_TAMPFLT =         // TAMPFLT
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLTCR_TAMPPRCH =        // TAMPPRCH
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS

    static constexpr uint32_t ATCR1_RESET_VALUE = 0x70000;
    static constexpr uint32_t ATCR1_TAMP1AM = 0x1;         // TAMP1AM
    static constexpr uint32_t ATCR1_TAMP2AM = 0x2;         // TAMP2AM
    static constexpr uint32_t ATCR1_TAMP3AM = 0x4;         // TAMP3AM
    static constexpr uint32_t ATCR1_TAMP4AM = 0x8;         // TAMP4AM
    static constexpr uint32_t ATCR1_TAMP5AM = 0x10;        // TAMP5AM
    static constexpr uint32_t ATCR1_TAMP6AM = 0x20;        // TAMP6AM
    static constexpr uint32_t ATCR1_TAMP7AM = 0x40;        // TAMP7AM
    static constexpr uint32_t ATCR1_TAMP8AM = 0x80;        // TAMP8AM
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATOSEL1 =              // ATOSEL1
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATOSEL2 =              // ATOSEL2
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATOSEL3 =              // ATOSEL3
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATOSEL4 =              // ATOSEL4
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATCKSEL =              // ATCKSEL
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR1_ATPER =                // ATPER
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t ATCR1_ATOSHARE = 0x40000000; // ATOSHARE
    static constexpr uint32_t ATCR1_FLTEN = 0x80000000;    // FLTEN

    static constexpr uint32_t ATSEEDR_RESET_VALUE = 0x0;

    static constexpr uint32_t ATOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ATOR_PRNG =          // Pseudo-random generator value
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t ATOR_SEEDF = 0x4000; // Seed running flag
    static constexpr uint32_t ATOR_INITS = 0x8000; // Active tamper initialization status

    static constexpr uint32_t ATCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL1 =   // ATOSEL1
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL2 =   // ATOSEL2
        bit_field_t<11, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL3 =   // ATOSEL3
        bit_field_t<14, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL4 =   // ATOSEL4
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL5 =   // ATOSEL5
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL6 =   // ATOSEL6
        bit_field_t<23, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL7 =   // ATOSEL7
        bit_field_t<26, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ATCR2_ATOSEL8 =   // ATOSEL8
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMCR_BKPRWDPROT =            // Backup registers read/write protection offset
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_BKPWDPROT =             // Backup registers write protection offset
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t SMCR_TAMPDPROT = 0x80000000; // Tamper protection

    static constexpr uint32_t PRIVCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PRIVCR_BKPRWPRIV = 0x20000000; // Backup registers zone 1 privilege protection
    static constexpr uint32_t PRIVCR_BKPWPRIV = 0x40000000;  // Backup registers zone 2 privilege protection
    static constexpr uint32_t PRIVCR_TAMPPRIV = 0x80000000;  // Tamper privilege protection

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_TAMP1IE = 0x1;       // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2;       // TAMP2IE
    static constexpr uint32_t IER_TAMP3IE = 0x4;       // TAMP3IE
    static constexpr uint32_t IER_TAMP4IE = 0x8;       // TAMP4IE
    static constexpr uint32_t IER_TAMP5IE = 0x10;      // TAMP5IE
    static constexpr uint32_t IER_TAMP6IE = 0x20;      // TAMP6IE
    static constexpr uint32_t IER_TAMP7IE = 0x40;      // TAMP7IE
    static constexpr uint32_t IER_TAMP8IE = 0x80;      // TAMP8IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000;  // ITAMP1IE
    static constexpr uint32_t IER_ITAMP2IE = 0x20000;  // ITAMP2IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000;  // ITAMP3IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP8IE = 0x800000; // ITAMP8IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TAMP1F = 0x1;       // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2;       // TAMP2F
    static constexpr uint32_t SR_TAMP3F = 0x4;       // TAMP3F
    static constexpr uint32_t SR_TAMP4F = 0x8;       // TAMP4F
    static constexpr uint32_t SR_TAMP5F = 0x10;      // TAMP5F
    static constexpr uint32_t SR_TAMP6F = 0x20;      // TAMP6F
    static constexpr uint32_t SR_TAMP7F = 0x40;      // TAMP7F
    static constexpr uint32_t SR_TAMP8F = 0x80;      // TAMP8F
    static constexpr uint32_t SR_ITAMP1F = 0x10000;  // ITAMP1F
    static constexpr uint32_t SR_ITAMP2F = 0x20000;  // ITAMP2F
    static constexpr uint32_t SR_ITAMP3F = 0x40000;  // ITAMP3F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP8F = 0x800000; // ITAMP8F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MISR_TAMP1MF = 0x1;       // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2;       // TAMP2MF
    static constexpr uint32_t MISR_TAMP3MF = 0x4;       // TAMP3MF
    static constexpr uint32_t MISR_TAMP4MF = 0x8;       // TAMP4MF
    static constexpr uint32_t MISR_TAMP5MF = 0x10;      // TAMP5MF
    static constexpr uint32_t MISR_TAMP6MF = 0x20;      // TAMP6MF
    static constexpr uint32_t MISR_TAMP7MF = 0x40;      // TAMP7MF:
    static constexpr uint32_t MISR_TAMP8MF = 0x80;      // TAMP8MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000;  // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP2MF = 0x20000;  // ITAMP2MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000;  // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t SMISR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMISR_TAMP1MF = 0x1;       // TAMP1MF:
    static constexpr uint32_t SMISR_TAMP2MF = 0x2;       // TAMP2MF
    static constexpr uint32_t SMISR_TAMP3MF = 0x4;       // TAMP3MF
    static constexpr uint32_t SMISR_TAMP4MF = 0x8;       // TAMP4MF
    static constexpr uint32_t SMISR_TAMP5MF = 0x10;      // TAMP5MF
    static constexpr uint32_t SMISR_TAMP6MF = 0x20;      // TAMP6MF
    static constexpr uint32_t SMISR_TAMP7MF = 0x40;      // TAMP7MF:
    static constexpr uint32_t SMISR_TAMP8MF = 0x80;      // TAMP8MF
    static constexpr uint32_t SMISR_ITAMP1MF = 0x10000;  // ITAMP1MF
    static constexpr uint32_t SMISR_ITAMP2MF = 0x20000;  // ITAMP2MF
    static constexpr uint32_t SMISR_ITAMP3MF = 0x40000;  // ITAMP3MF
    static constexpr uint32_t SMISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t SMISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCR_CTAMP1F = 0x1;       // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2;       // CTAMP2F
    static constexpr uint32_t SCR_CTAMP3F = 0x4;       // CTAMP3F
    static constexpr uint32_t SCR_CTAMP4F = 0x8;       // CTAMP4F
    static constexpr uint32_t SCR_CTAMP5F = 0x10;      // CTAMP5F
    static constexpr uint32_t SCR_CTAMP6F = 0x20;      // CTAMP6F
    static constexpr uint32_t SCR_CTAMP7F = 0x40;      // CTAMP7F
    static constexpr uint32_t SCR_CTAMP8F = 0x80;      // CTAMP8F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000;  // CITAMP1F
    static constexpr uint32_t SCR_CITAMP2F = 0x20000;  // CITAMP2F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000;  // CITAMP3F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP8F = 0x800000; // CITAMP8F

    static constexpr uint32_t COUNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR_TMONEN = 0x2;   // TMONEN
    static constexpr uint32_t CFGR_VMONEN = 0x4;   // VMONEN
    static constexpr uint32_t CFGR_WUTMONEN = 0x8; // WUTMONEN

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
struct peripheral_t<STM32L552, TAMP>
{
    typedef stm32l552_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_TAMP>
{
    typedef stm32l552_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, TAMP>
{
    typedef stm32l552_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_TAMP>
{
    typedef stm32l552_tamp_t T;
    static T& V;
};

using sec_tamp_t = peripheral_t<mcu_svd, SEC_TAMP>;
using tamp_t = peripheral_t<mcu_svd, TAMP>;

