#pragma once

////
//
//      STM32L5 TAMP peripherals
//
///

// TAMP: Tamper and backup registers

struct stm32l552_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t CR3; // control register 3
    volatile uint32_t FLTCR; // TAMP filter control register
    volatile uint32_t ATCR1; // TAMP active tamper control register 1
    volatile uint32_t ATSEEDR; // TAMP active tamper seed register
    volatile uint32_t ATOR; // TAMP active tamper output register
    volatile uint32_t ATCR2; // TAMP active tamper control register 2
    volatile uint32_t SMCR; // TAMP secure mode register
    volatile uint32_t PRIVCR; // TAMP privilege mode control register
    reserved_t<0x1> _0x28;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    volatile uint32_t SMISR; // TAMP secure masked interrupt status register
    volatile uint32_t SCR; // TAMP status clear register
    volatile uint32_t COUNTR; // TAMP monotonic counter register
    reserved_t<0x3> _0x44;
    volatile uint32_t CFGR; // TAMP configuration register
    reserved_t<0x2b> _0x54;
    volatile uint32_t BKP0R; // TAMP backup register
    volatile uint32_t BKP1R; // TAMP backup register
    volatile uint32_t BKP2R; // TAMP backup register
    volatile uint32_t BKP3R; // TAMP backup register
    volatile uint32_t BKP4R; // TAMP backup register
    volatile uint32_t BKP5R; // TAMP backup register
    volatile uint32_t BKP6R; // TAMP backup register
    volatile uint32_t BKP7R; // TAMP backup register
    volatile uint32_t BKP8R; // TAMP backup register
    volatile uint32_t BKP9R; // TAMP backup register
    volatile uint32_t BKP10R; // TAMP backup register
    volatile uint32_t BKP11R; // TAMP backup register
    volatile uint32_t BKP12R; // TAMP backup register
    volatile uint32_t BKP13R; // TAMP backup register
    volatile uint32_t BKP14R; // TAMP backup register
    volatile uint32_t BKP15R; // TAMP backup register
    volatile uint32_t BKP16R; // TAMP backup register
    volatile uint32_t BKP17R; // TAMP backup register
    volatile uint32_t BKP18R; // TAMP backup register
    volatile uint32_t BKP19R; // TAMP backup register
    volatile uint32_t BKP20R; // TAMP backup register
    volatile uint32_t BKP21R; // TAMP backup register
    volatile uint32_t BKP22R; // TAMP backup register
    volatile uint32_t BKP23R; // TAMP backup register
    volatile uint32_t BKP24R; // TAMP backup register
    volatile uint32_t BKP25R; // TAMP backup register
    volatile uint32_t BKP26R; // TAMP backup register
    volatile uint32_t BKP27R; // TAMP backup register
    volatile uint32_t BKP28R; // TAMP backup register
    volatile uint32_t BKP29R; // TAMP backup register
    volatile uint32_t BKP30R; // TAMP backup register
    volatile uint32_t BKP31R; // TAMP backup register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_TAMP3E = 0x4; // TAMP3E
    static constexpr uint32_t CR1_TAMP4E = 0x8; // TAMP4E
    static constexpr uint32_t CR1_TAMP5E = 0x10; // TAMP5E
    static constexpr uint32_t CR1_TAMP6E = 0x20; // TAMP6E
    static constexpr uint32_t CR1_TAMP7E = 0x40; // TAMP7E
    static constexpr uint32_t CR1_TAMP8E = 0x80; // TAMP8E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000; // ITAMP1E
    static constexpr uint32_t CR1_ITAMP2E = 0x20000; // ITAMP2E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP8E = 0x800000; // ITAMP5E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP3NOER = 0x4; // TAMP3NOER
    static constexpr uint32_t CR2_TAMP4NOER = 0x8; // TAMP4NOER
    static constexpr uint32_t CR2_TAMP5NOER = 0x10; // TAMP5NOER
    static constexpr uint32_t CR2_TAMP6NOER = 0x20; // TAMP6NOER
    static constexpr uint32_t CR2_TAMP7NOER = 0x40; // TAMP7NOER
    static constexpr uint32_t CR2_TAMP8NOER = 0x80; // TAMP8NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP3MSK = 0x40000; // TAMP3MSK
    static constexpr uint32_t CR2_BKERASE = 0x800000; // BKERASE
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG
    static constexpr uint32_t CR2_TAMP3TRG = 0x4000000; // TAMP3TRG
    static constexpr uint32_t CR2_TAMP4TRG = 0x8000000; // TAMP4TRG
    static constexpr uint32_t CR2_TAMP5TRG = 0x10000000; // TAMP5TRG
    static constexpr uint32_t CR2_TAMP6TRG = 0x20000000; // TAMP6TRG
    static constexpr uint32_t CR2_TAMP7TRG = 0x40000000; // TAMP7TRG
    static constexpr uint32_t CR2_TAMP8TRG = 0x80000000; // TAMP8TRG

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_ITAMP1NOER = 0x1; // ITAMP1NOER
    static constexpr uint32_t CR3_ITAMP2NOER = 0x2; // ITAMP2NOER
    static constexpr uint32_t CR3_ITAMP3NOER = 0x4; // ITAMP3NOER
    static constexpr uint32_t CR3_ITAMP5NOER = 0x10; // ITAMP5NOER
    static constexpr uint32_t CR3_ITAMP8NOER = 0x80; // ITAMP8NOER

    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS

    static constexpr uint32_t ATCR1_RESET_VALUE = 0x70000; // Reset value
    static constexpr uint32_t ATCR1_TAMP1AM = 0x1; // TAMP1AM
    static constexpr uint32_t ATCR1_TAMP2AM = 0x2; // TAMP2AM
    static constexpr uint32_t ATCR1_TAMP3AM = 0x4; // TAMP3AM
    static constexpr uint32_t ATCR1_TAMP4AM = 0x8; // TAMP4AM
    static constexpr uint32_t ATCR1_TAMP5AM = 0x10; // TAMP5AM
    static constexpr uint32_t ATCR1_TAMP6AM = 0x20; // TAMP6AM
    static constexpr uint32_t ATCR1_TAMP7AM = 0x40; // TAMP7AM
    static constexpr uint32_t ATCR1_TAMP8AM = 0x80; // TAMP8AM
    typedef bit_field_t<8, 0x3> ATCR1_ATOSEL1; // ATOSEL1
    typedef bit_field_t<10, 0x3> ATCR1_ATOSEL2; // ATOSEL2
    typedef bit_field_t<12, 0x3> ATCR1_ATOSEL3; // ATOSEL3
    typedef bit_field_t<14, 0x3> ATCR1_ATOSEL4; // ATOSEL4
    typedef bit_field_t<16, 0x3> ATCR1_ATCKSEL; // ATCKSEL
    typedef bit_field_t<24, 0x3> ATCR1_ATPER; // ATPER
    static constexpr uint32_t ATCR1_ATOSHARE = 0x40000000; // ATOSHARE
    static constexpr uint32_t ATCR1_FLTEN = 0x80000000; // FLTEN

    static constexpr uint32_t ATSEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ATSEEDR_SEED; // Pseudo-random generator seed value

    static constexpr uint32_t ATOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> ATOR_PRNG; // Pseudo-random generator value
    static constexpr uint32_t ATOR_SEEDF = 0x4000; // Seed running flag
    static constexpr uint32_t ATOR_INITS = 0x8000; // Active tamper initialization status

    static constexpr uint32_t ATCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x7> ATCR2_ATOSEL1; // ATOSEL1
    typedef bit_field_t<11, 0x7> ATCR2_ATOSEL2; // ATOSEL2
    typedef bit_field_t<14, 0x7> ATCR2_ATOSEL3; // ATOSEL3
    typedef bit_field_t<17, 0x7> ATCR2_ATOSEL4; // ATOSEL4
    typedef bit_field_t<20, 0x7> ATCR2_ATOSEL5; // ATOSEL5
    typedef bit_field_t<23, 0x7> ATCR2_ATOSEL6; // ATOSEL6
    typedef bit_field_t<26, 0x7> ATCR2_ATOSEL7; // ATOSEL7
    typedef bit_field_t<29, 0x7> ATCR2_ATOSEL8; // ATOSEL8

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SMCR_BKPRWDPROT; // Backup registers read/write protection offset
    typedef bit_field_t<16, 0xff> SMCR_BKPWDPROT; // Backup registers write protection offset
    static constexpr uint32_t SMCR_TAMPDPROT = 0x80000000; // Tamper protection

    static constexpr uint32_t PRIVCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PRIVCR_BKPRWPRIV = 0x20000000; // Backup registers zone 1 privilege protection
    static constexpr uint32_t PRIVCR_BKPWPRIV = 0x40000000; // Backup registers zone 2 privilege protection
    static constexpr uint32_t PRIVCR_TAMPPRIV = 0x80000000; // Tamper privilege protection


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_TAMP3IE = 0x4; // TAMP3IE
    static constexpr uint32_t IER_TAMP4IE = 0x8; // TAMP4IE
    static constexpr uint32_t IER_TAMP5IE = 0x10; // TAMP5IE
    static constexpr uint32_t IER_TAMP6IE = 0x20; // TAMP6IE
    static constexpr uint32_t IER_TAMP7IE = 0x40; // TAMP7IE
    static constexpr uint32_t IER_TAMP8IE = 0x80; // TAMP8IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000; // ITAMP1IE
    static constexpr uint32_t IER_ITAMP2IE = 0x20000; // ITAMP2IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP8IE = 0x800000; // ITAMP8IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_TAMP3F = 0x4; // TAMP3F
    static constexpr uint32_t SR_TAMP4F = 0x8; // TAMP4F
    static constexpr uint32_t SR_TAMP5F = 0x10; // TAMP5F
    static constexpr uint32_t SR_TAMP6F = 0x20; // TAMP6F
    static constexpr uint32_t SR_TAMP7F = 0x40; // TAMP7F
    static constexpr uint32_t SR_TAMP8F = 0x80; // TAMP8F
    static constexpr uint32_t SR_ITAMP1F = 0x10000; // ITAMP1F
    static constexpr uint32_t SR_ITAMP2F = 0x20000; // ITAMP2F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP8F = 0x800000; // ITAMP8F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_TAMP3MF = 0x4; // TAMP3MF
    static constexpr uint32_t MISR_TAMP4MF = 0x8; // TAMP4MF
    static constexpr uint32_t MISR_TAMP5MF = 0x10; // TAMP5MF
    static constexpr uint32_t MISR_TAMP6MF = 0x20; // TAMP6MF
    static constexpr uint32_t MISR_TAMP7MF = 0x40; // TAMP7MF:
    static constexpr uint32_t MISR_TAMP8MF = 0x80; // TAMP8MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP2MF = 0x20000; // ITAMP2MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t SMISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t SMISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t SMISR_TAMP3MF = 0x4; // TAMP3MF
    static constexpr uint32_t SMISR_TAMP4MF = 0x8; // TAMP4MF
    static constexpr uint32_t SMISR_TAMP5MF = 0x10; // TAMP5MF
    static constexpr uint32_t SMISR_TAMP6MF = 0x20; // TAMP6MF
    static constexpr uint32_t SMISR_TAMP7MF = 0x40; // TAMP7MF:
    static constexpr uint32_t SMISR_TAMP8MF = 0x80; // TAMP8MF
    static constexpr uint32_t SMISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t SMISR_ITAMP2MF = 0x20000; // ITAMP2MF
    static constexpr uint32_t SMISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t SMISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t SMISR_ITAMP8MF = 0x800000; // ITAMP8MF

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CTAMP3F = 0x4; // CTAMP3F
    static constexpr uint32_t SCR_CTAMP4F = 0x8; // CTAMP4F
    static constexpr uint32_t SCR_CTAMP5F = 0x10; // CTAMP5F
    static constexpr uint32_t SCR_CTAMP6F = 0x20; // CTAMP6F
    static constexpr uint32_t SCR_CTAMP7F = 0x40; // CTAMP7F
    static constexpr uint32_t SCR_CTAMP8F = 0x80; // CTAMP8F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000; // CITAMP1F
    static constexpr uint32_t SCR_CITAMP2F = 0x20000; // CITAMP2F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP8F = 0x800000; // CITAMP8F

    static constexpr uint32_t COUNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> COUNTR_COUNT; // COUNT


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_TMONEN = 0x2; // TMONEN
    static constexpr uint32_t CFGR_VMONEN = 0x4; // VMONEN
    static constexpr uint32_t CFGR_WUTMONEN = 0x8; // WUTMONEN


    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // BKP

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // BKP

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // BKP

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // BKP

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // BKP

    static constexpr uint32_t BKP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP5R_BKP; // BKP

    static constexpr uint32_t BKP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP6R_BKP; // BKP

    static constexpr uint32_t BKP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP7R_BKP; // BKP

    static constexpr uint32_t BKP8R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP8R_BKP; // BKP

    static constexpr uint32_t BKP9R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP9R_BKP; // BKP

    static constexpr uint32_t BKP10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP10R_BKP; // BKP

    static constexpr uint32_t BKP11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP11R_BKP; // BKP

    static constexpr uint32_t BKP12R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP12R_BKP; // BKP

    static constexpr uint32_t BKP13R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP13R_BKP; // BKP

    static constexpr uint32_t BKP14R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP14R_BKP; // BKP

    static constexpr uint32_t BKP15R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP15R_BKP; // BKP

    static constexpr uint32_t BKP16R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP16R_BKP; // BKP

    static constexpr uint32_t BKP17R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP17R_BKP; // BKP

    static constexpr uint32_t BKP18R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP18R_BKP; // BKP

    static constexpr uint32_t BKP19R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP19R_BKP; // BKP

    static constexpr uint32_t BKP20R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP20R_BKP; // BKP

    static constexpr uint32_t BKP21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP21R_BKP; // BKP

    static constexpr uint32_t BKP22R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP22R_BKP; // BKP

    static constexpr uint32_t BKP23R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP23R_BKP; // BKP

    static constexpr uint32_t BKP24R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP24R_BKP; // BKP

    static constexpr uint32_t BKP25R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP25R_BKP; // BKP

    static constexpr uint32_t BKP26R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP26R_BKP; // BKP

    static constexpr uint32_t BKP27R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP27R_BKP; // BKP

    static constexpr uint32_t BKP28R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP28R_BKP; // BKP

    static constexpr uint32_t BKP29R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP29R_BKP; // BKP

    static constexpr uint32_t BKP30R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP30R_BKP; // BKP

    static constexpr uint32_t BKP31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP31R_BKP; // BKP
};

template<>
struct peripheral_t<STM32L552, SEC_TAMP>
{
    using T = stm32l552_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, TAMP>
{
    using T = stm32l552_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_TAMP>
{
    using T = stm32l552_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, TAMP>
{
    using T = stm32l552_tamp_t;
    static T& V;
};

using sec_tamp_t = peripheral_t<svd, SEC_TAMP>;
using tamp_t = peripheral_t<svd, TAMP>;

template<int INST> struct tamp_traits {};
