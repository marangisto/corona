#pragma once

////
//
//      STM32WL TZSC peripherals
//
///

// TZIC: TrustZone Interrupt Control

struct stm32wl5x_cm0p_tzic_t
{
    volatile uint32_t IER1; // TZIC interrupt enable register 1
    reserved_t<0x3> _0x4;
    volatile uint32_t MISR1; // TZIC status register 1
    reserved_t<0x3> _0x14;
    volatile uint32_t ICR1; // TZIC interrupt status clear register 1

    static constexpr uint32_t IER1_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t IER1_TZICIE = 0x1; // TZICIE
    static constexpr uint32_t IER1_TZSCIE = 0x2; // TZSCIE
    static constexpr uint32_t IER1_AESIE = 0x4; // AESIE
    static constexpr uint32_t IER1_RNGIE = 0x8; // RNGIE
    static constexpr uint32_t IER1_SUBGHZSPIIE = 0x10; // SUBGHZSPIIE
    static constexpr uint32_t IER1_PWRIE = 0x20; // PWRIE
    static constexpr uint32_t IER1_FLASHIFIE = 0x40; // FLASHIFIE
    static constexpr uint32_t IER1_DMA1IE = 0x80; // DMA1IE
    static constexpr uint32_t IER1_DMA2IE = 0x100; // DMA2IE
    static constexpr uint32_t IER1_DMAMUX1IE = 0x200; // DMAMUX1IE
    static constexpr uint32_t IER1_FLASHIE = 0x400; // FLASHIE
    static constexpr uint32_t IER1_SRAM1IE = 0x800; // SRAM1IE
    static constexpr uint32_t IER1_SRAM2IE = 0x1000; // SRAM2IE
    static constexpr uint32_t IER1_PKAIE = 0x2000; // PKAIE


    static constexpr uint32_t MISR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR1_TZICMF = 0x1; // TZICMF
    static constexpr uint32_t MISR1_TZSCMF = 0x2; // TZSCMF
    static constexpr uint32_t MISR1_AESMF = 0x4; // AESMF
    static constexpr uint32_t MISR1_RNGMF = 0x8; // RNGMF
    static constexpr uint32_t MISR1_SUBGHZSPIMF = 0x10; // SUBGHZSPIMF
    static constexpr uint32_t MISR1_PWRMF = 0x20; // PWRMF
    static constexpr uint32_t MISR1_FLASHIFMF = 0x40; // FLASHIFMF
    static constexpr uint32_t MISR1_DMA1MF = 0x80; // DMA1MF
    static constexpr uint32_t MISR1_DMA2MF = 0x100; // DMA2MF
    static constexpr uint32_t MISR1_DMAMUX1MF = 0x200; // DMAMUX1MF
    static constexpr uint32_t MISR1_FLASHMF = 0x400; // FLASHMF
    static constexpr uint32_t MISR1_SRAM1MF = 0x800; // SRAM1MF
    static constexpr uint32_t MISR1_SRAM2MF = 0x1000; // SRAM2MF
    static constexpr uint32_t MISR1_PKAMF = 0x2000; // PKAMF


    static constexpr uint32_t ICR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR1_TZICCF = 0x1; // TZICCF
    static constexpr uint32_t ICR1_TZSCCF = 0x2; // TZSCCF
    static constexpr uint32_t ICR1_AESCF = 0x4; // AESCF
    static constexpr uint32_t ICR1_RNGCF = 0x8; // RNGCF
    static constexpr uint32_t ICR1_SUBGHZSPICF = 0x10; // SUBGHZSPICF
    static constexpr uint32_t ICR1_PWRCF = 0x20; // PWRCF
    static constexpr uint32_t ICR1_FLASHIFCF = 0x40; // FLASHIFCF
    static constexpr uint32_t ICR1_DMA1CF = 0x80; // DMA1CF
    static constexpr uint32_t ICR1_DMA2CF = 0x100; // DMA2CF
    static constexpr uint32_t ICR1_DMAMUX1CF = 0x200; // DMAMUX1CF
    static constexpr uint32_t ICR1_FLASHCF = 0x400; // FLASHCF
    static constexpr uint32_t ICR1_SRAM1CF = 0x800; // SRAM1CF
    static constexpr uint32_t ICR1_SRAM2CF = 0x1000; // SRAM2CF
    static constexpr uint32_t ICR1_PKACF = 0x2000; // PKACF
};

// TZSC: Global TrustZone Controller

struct stm32wl5x_cm0p_tzsc_t
{
    volatile uint32_t TZSC_CR; // TZSC control register
    reserved_t<0x3> _0x4;
    volatile uint32_t TZSC_SECCFGR1; // TZSC security configuration register
    reserved_t<0x3> _0x14;
    volatile uint32_t TZSC_PRIVCFGR1; // TZSC privilege configuration register 1
    reserved_t<0x43> _0x24;
    volatile uint32_t TZSC_MPCWM1_UPWMR; // Unprivileged Water Mark 1 register
    volatile uint32_t TZSC_MPCWM1_UPWWMR; // Unprivileged Writable Water Mark 1 register
    volatile uint32_t TZSC_MPCWM2_UPWMR; // Unprivileged Water Mark 2 register
    reserved_t<0x1> _0x13c;
    volatile uint32_t TZSC_MPCWM3_UPWMR; // Unprivileged Water Mark 3 register

    static constexpr uint32_t TZSC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TZSC_CR_LCK = 0x1; // LCK


    static constexpr uint32_t TZSC_SECCFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TZSC_SECCFGR1_AESSEC = 0x4; // AESSEC
    static constexpr uint32_t TZSC_SECCFGR1_RNGSEC = 0x8; // RNGSEC
    static constexpr uint32_t TZSC_SECCFGR1_PKASEC = 0x2000; // PKASEC


    static constexpr uint32_t TZSC_PRIVCFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TZSC_PRIVCFGR1_AESPRIV = 0x4; // AESPRIV
    static constexpr uint32_t TZSC_PRIVCFGR1_RNGPRIV = 0x8; // RNGPRIV
    static constexpr uint32_t TZSC_PRIVCFGR1_SUBGHZSPIPRIV = 0x10; // SUBGHZSPIPRIV
    static constexpr uint32_t TZSC_PRIVCFGR1_PKAPRIV = 0x2000; // PKAPRIV


    static constexpr uint32_t TZSC_MPCWM1_UPWMR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TZSC_MPCWM1_UPWMR_LGTH; // LGTH

    static constexpr uint32_t TZSC_MPCWM1_UPWWMR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TZSC_MPCWM1_UPWWMR_LGTH; // Define the length of Flash Unprivileged Writable area, in 2

    static constexpr uint32_t TZSC_MPCWM2_UPWMR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TZSC_MPCWM2_UPWMR_LGTH; // LGTH


    static constexpr uint32_t TZSC_MPCWM3_UPWMR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> TZSC_MPCWM3_UPWMR_LGTH; // LGTH
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TZIC>
{
    static constexpr periph_t P = TZIC;
    using T = stm32wl5x_cm0p_tzic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TZIC>
{
    static constexpr periph_t P = TZIC;
    using T = stm32wl5x_cm0p_tzic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TZSC>
{
    static constexpr periph_t P = TZSC;
    using T = stm32wl5x_cm0p_tzsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TZSC>
{
    static constexpr periph_t P = TZSC;
    using T = stm32wl5x_cm0p_tzsc_t;
    static T& V;
};

using tzic_t = peripheral_t<svd, TZIC>;
using tzsc_t = peripheral_t<svd, TZSC>;
