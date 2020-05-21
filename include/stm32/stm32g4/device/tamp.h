#pragma once

////
//
//      STM32G4 TAMP peripherals
//
////

////
//
//      Tamper and backup registers
//
////

struct stm32g431xx_tamp_t
{
    volatile uint32_t CR1;    // [read-write] control register 1
    volatile uint32_t CR2;    // [read-write] control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t FLTCR;  // [read-write] TAMP filter control register
    reserved_t<0x7> _0x2c;
    volatile uint32_t IER;    // [read-write] TAMP interrupt enable register
    volatile uint32_t SR;     // [read-only] TAMP status register
    volatile uint32_t MISR;   // [read-only] TAMP masked interrupt status register
    reserved_t<0x1> _0x3c;
    volatile uint32_t SCR;    // [read-write] TAMP status clear register
    reserved_t<0x30> _0x100;
    volatile uint32_t BKP0R;  // [read-write] TAMP backup register
    volatile uint32_t BKP1R;  // [read-write] TAMP backup register
    volatile uint32_t BKP2R;  // [read-write] TAMP backup register
    volatile uint32_t BKP3R;  // [read-write] TAMP backup register
    volatile uint32_t BKP4R;  // [read-write] TAMP backup register
    volatile uint32_t BKP5R;  // [read-write] TAMP backup register
    volatile uint32_t BKP6R;  // [read-write] TAMP backup register
    volatile uint32_t BKP7R;  // [read-write] TAMP backup register
    volatile uint32_t BKP8R;  // [read-write] TAMP backup register
    volatile uint32_t BKP9R;  // [read-write] TAMP backup register
    volatile uint32_t BKP10R; // [read-write] TAMP backup register
    volatile uint32_t BKP11R; // [read-write] TAMP backup register
    volatile uint32_t BKP12R; // [read-write] TAMP backup register
    volatile uint32_t BKP13R; // [read-write] TAMP backup register
    volatile uint32_t BKP14R; // [read-write] TAMP backup register
    volatile uint32_t BKP15R; // [read-write] TAMP backup register
    volatile uint32_t BKP16R; // [read-write] TAMP backup register
    volatile uint32_t BKP17R; // [read-write] TAMP backup register
    volatile uint32_t BKP18R; // [read-write] TAMP backup register
    volatile uint32_t BKP19R; // [read-write] TAMP backup register
    volatile uint32_t BKP20R; // [read-write] TAMP backup register
    volatile uint32_t BKP21R; // [read-write] TAMP backup register
    volatile uint32_t BKP22R; // [read-write] TAMP backup register
    volatile uint32_t BKP23R; // [read-write] TAMP backup register
    volatile uint32_t BKP24R; // [read-write] TAMP backup register
    volatile uint32_t BKP25R; // [read-write] TAMP backup register
    volatile uint32_t BKP26R; // [read-write] TAMP backup register
    volatile uint32_t BKP27R; // [read-write] TAMP backup register
    volatile uint32_t BKP28R; // [read-write] TAMP backup register
    volatile uint32_t BKP29R; // [read-write] TAMP backup register
    volatile uint32_t BKP30R; // [read-write] TAMP backup register
    volatile uint32_t BKP31R; // [read-write] TAMP backup register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000;
    static constexpr uint32_t CR1_TAMP1E = 0x1;       // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2;       // TAMP2E
    static constexpr uint32_t CR1_TAMP3E = 0x4;       // TAMP2E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000;  // ITAMP3E
    static constexpr uint32_t CR1_ITAMP4E = 0x80000;  // ITAMP4E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_TAMP1NOER = 0x1;      // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2;      // TAMP2NOER
    static constexpr uint32_t CR2_TAMP3NOER = 0x4;      // TAMP3NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000;   // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000;   // TAMP2MSK
    static constexpr uint32_t CR2_TAMP3MSK = 0x40000;   // TAMP3MSK
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG
    static constexpr uint32_t CR2_TAMP3TRG = 0x4000000; // TAMP3TRG

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

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_TAMP1IE = 0x1;       // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2;       // TAMP2IE
    static constexpr uint32_t IER_TAMP3IE = 0x4;       // TAMP3IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000;  // ITAMP3IE
    static constexpr uint32_t IER_ITAMP4IE = 0x80000;  // ITAMP4IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TAMP1F = 0x1;       // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2;       // TAMP2F
    static constexpr uint32_t SR_TAMP3F = 0x4;       // TAMP3F
    static constexpr uint32_t SR_ITAMP3F = 0x40000;  // ITAMP3F
    static constexpr uint32_t SR_ITAMP4F = 0x80000;  // ITAMP4F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MISR_TAMP1MF = 0x1;       // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2;       // TAMP2MF
    static constexpr uint32_t MISR_TAMP3MF = 0x4;       // TAMP3MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000;  // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000;  // ITAMP4MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF

    static constexpr uint32_t SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCR_CTAMP1F = 0x1;       // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2;       // CTAMP2F
    static constexpr uint32_t SCR_CTAMP3F = 0x4;       // CTAMP3F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000;  // CITAMP3F
    static constexpr uint32_t SCR_CITAMP4F = 0x80000;  // CITAMP4F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F

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
struct peripheral_t<STM32G431xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TAMP>
{
    typedef stm32g431xx_tamp_t T;
    static T& V;
};

using tamp_t = peripheral_t<mcu_svd, TAMP>;

