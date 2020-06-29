#pragma once

////
//
//      STM32F7 AC peripherals
//
///

// AC: Access control

struct stm32f722_ac_t
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
struct peripheral_t<STM32F722, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, AC>
{
    using T = stm32f722_ac_t;
    static T& V;
};

using ac_t = peripheral_t<svd, AC>;

template<int INST> struct ac_traits {};
