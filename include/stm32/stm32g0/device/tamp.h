#pragma once

////
//
//      STM32G0 TAMP peripherals
//
///

// TAMP: Tamper and backup registers

struct stm32g030_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    reserved_t<0x30> _0x40;
    volatile uint32_t BKP0R; // TAMP backup register
    volatile uint32_t BKP1R; // TAMP backup register
    volatile uint32_t BKP2R; // TAMP backup register
    volatile uint32_t BKP3R; // TAMP backup register
    volatile uint32_t BKP4R; // TAMP backup register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000; // ITAMP1E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP4E = 0x80000; // ITAMP4E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG


    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000; // ITAMP1IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP4IE = 0x80000; // ITAMP4IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_ITAMP1F = 0x10000; // ITAMP1F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP4F = 0x80000; // ITAMP4F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F
    static constexpr uint32_t SR_ITAMP7F = 0x400000; // ITAMP7F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000; // ITAMP4MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000; // CITAMP1F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP4F = 0x80000; // CITAMP4F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F
    static constexpr uint32_t SCR_CITAMP7F = 0x400000; // CITAMP7F


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
};

// TAMP: Tamper and backup registers

struct stm32g070_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    reserved_t<0x30> _0x40;
    volatile uint32_t BKP0R; // TAMP backup register
    volatile uint32_t BKP1R; // TAMP backup register
    volatile uint32_t BKP2R; // TAMP backup register
    volatile uint32_t BKP3R; // TAMP backup register
    volatile uint32_t BKP4R; // TAMP backup register
    reserved_t<0xb6> _0x114;
    volatile uint32_t HWCFGR2; // TAMP hardware configuration register 2
    volatile uint32_t HWCFGR1; // TAMP hardware configuration register 1
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000; // ITAMP1E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP4E = 0x80000; // ITAMP4E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG


    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000; // ITAMP1IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP4IE = 0x80000; // ITAMP4IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_ITAMP1F = 0x10000; // ITAMP1F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP4F = 0x80000; // ITAMP4F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F
    static constexpr uint32_t SR_ITAMP7F = 0x400000; // ITAMP7F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000; // ITAMP4MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000; // CITAMP1F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP4F = 0x80000; // CITAMP4F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F
    static constexpr uint32_t SCR_CITAMP7F = 0x400000; // CITAMP7F


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


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR2_PTIONREG_OUT; // PTIONREG_OUT
    typedef bit_field_t<8, 0xf> HWCFGR2_TRUST_ZONE; // TRUST_ZONE

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_BACKUP_REGS; // BACKUP_REGS
    typedef bit_field_t<8, 0xf> HWCFGR1_TAMPER; // TAMPER
    typedef bit_field_t<12, 0xf> HWCFGR1_ACTIVE_TAMPER; // ACTIVE_TAMPER
    typedef bit_field_t<16, 0xffff> HWCFGR1_INT_TAMPER; // INT_TAMPER

    static constexpr uint32_t VERR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32G030, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

using tamp_t = peripheral_t<svd, TAMP>;
