#pragma once

////
//
//      STM32H7 AC peripherals
//
///

// AC: Access control

struct stm32h723_ac_t
{
    volatile uint32_t ITCMCR; // Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t DTCMCR; // Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t AHBPCR; // AHBP Control register
    volatile uint32_t CACR; // Auxiliary Cache Control register
    volatile uint32_t AHBSCR; // AHB Slave Control register
    reserved_t<0x1> _0x14;
    volatile uint32_t ABFSR; // Auxiliary Bus Fault Status register

    static constexpr uint32_t ITCMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITCMCR_EN = 0x1; // EN
    static constexpr uint32_t ITCMCR_RMW = 0x2; // RMW
    static constexpr uint32_t ITCMCR_RETEN = 0x4; // RETEN
    typedef bit_field_t<3, 0xf> ITCMCR_SZ; // SZ

    static constexpr uint32_t DTCMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTCMCR_EN = 0x1; // EN
    static constexpr uint32_t DTCMCR_RMW = 0x2; // RMW
    static constexpr uint32_t DTCMCR_RETEN = 0x4; // RETEN
    typedef bit_field_t<3, 0xf> DTCMCR_SZ; // SZ

    static constexpr uint32_t AHBPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBPCR_EN = 0x1; // EN
    typedef bit_field_t<1, 0x7> AHBPCR_SZ; // SZ

    static constexpr uint32_t CACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CACR_SIWT = 0x1; // SIWT
    static constexpr uint32_t CACR_ECCEN = 0x2; // ECCEN
    static constexpr uint32_t CACR_FORCEWT = 0x4; // FORCEWT

    static constexpr uint32_t AHBSCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> AHBSCR_CTL; // CTL
    typedef bit_field_t<2, 0x1ff> AHBSCR_TPRI; // TPRI
    typedef bit_field_t<11, 0x1f> AHBSCR_INITCOUNT; // INITCOUNT


    static constexpr uint32_t ABFSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ABFSR_ITCM = 0x1; // ITCM
    static constexpr uint32_t ABFSR_DTCM = 0x2; // DTCM
    static constexpr uint32_t ABFSR_AHBP = 0x4; // AHBP
    static constexpr uint32_t ABFSR_AXIM = 0x8; // AXIM
    static constexpr uint32_t ABFSR_EPPB = 0x10; // EPPB
    typedef bit_field_t<8, 0x3> ABFSR_AXIMTYPE; // AXIMTYPE
};

template<>
struct peripheral_t<STM32H723, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, AC>
{
    static constexpr periph_t P = AC;
    using T = stm32h723_ac_t;
    static T& V;
};

using ac_t = peripheral_t<svd, AC>;
