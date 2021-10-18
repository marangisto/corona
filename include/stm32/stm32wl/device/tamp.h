#pragma once

////
//
//      STM32WL TAMP peripherals
//
///

// TAMP: Tamper and backup registers

struct stm32wl5x_cm0p_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t CR3; // TAMP control register 3
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    volatile uint32_t COUNTR; // monotonic counter register
    reserved_t<0x2f> _0x44;
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
    reserved_t<0x6> _0x128;
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

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_TAMP3E = 0x4; // TAMP2E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E
    static constexpr uint32_t CR1_ITAMP8E = 0x800000; // ITAMP8E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP3NOER = 0x4; // TAMP3NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP3MSK = 0x40000; // TAMP3MSK
    static constexpr uint32_t CR2_BKERASE = 0x800000; // Backup registerserase
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG
    static constexpr uint32_t CR2_TAMP3TRG = 0x4000000; // TAMP3TRG

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_ITAMP3NOER = 0x4; // ITAMP3NOER
    static constexpr uint32_t CR3_ITAMP5NOER = 0x10; // ITAMP5NOER
    static constexpr uint32_t CR3_ITAMP6NOER = 0x20; // ITAMP6NOER
    static constexpr uint32_t CR3_ITAMP8NOER = 0x80; // ITAMP8NOER

    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_TAMP3IE = 0x4; // TAMP3IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE
    static constexpr uint32_t IER_ITAMP8IE = 0x800000; // ITAMP8IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_TAMP3F = 0x4; // TAMP3F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F
    static constexpr uint32_t SR_ITAMP8F = 0x800000; // ITAMP8F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_TAMP3MF = 0x4; // TAMP3MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF
    static constexpr uint32_t MISR_ITAMP8MF = 0x800000; // ITAMP8MF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CTAMP3F = 0x4; // CTAMP3F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F
    static constexpr uint32_t SCR_CITAMP8F = 0x800000; // CITAMP8F

    static constexpr uint32_t COUNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> COUNTR_COUNT; // COUNT


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
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32wl5x_cm0p_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32wl5x_cm0p_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32wl5x_cm0p_tamp_t;
    static T& V;
};

using tamp_t = peripheral_t<svd, TAMP>;
