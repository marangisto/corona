#pragma once

////
//
//      STM32H7 AC peripherals
//
////

////
//
//      Access control
//
////

struct stm32h742x_ac_t
{
    volatile uint32_t ITCMCR; // [read-write] Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t DTCMCR; // [read-write] Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t AHBPCR; // [read-write] AHBP Control register
    volatile uint32_t CACR;   // [read-write] Auxiliary Cache Control register
    volatile uint32_t AHBSCR; // [read-write] AHB Slave Control register
    reserved_t<0x1> _0x18;
    volatile uint32_t ABFSR;  // [read-write] Auxiliary Bus Fault Status register

    static constexpr uint32_t ITCMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ITCMCR_EN = 0x1;    // EN
    static constexpr uint32_t ITCMCR_RMW = 0x2;   // RMW
    static constexpr uint32_t ITCMCR_RETEN = 0x4; // RETEN
    template<uint32_t X>
    static constexpr uint32_t ITCMCR_SZ =         // SZ
        bit_field_t<3, 0xf>::value<X>();

    static constexpr uint32_t DTCMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTCMCR_EN = 0x1;    // EN
    static constexpr uint32_t DTCMCR_RMW = 0x2;   // RMW
    static constexpr uint32_t DTCMCR_RETEN = 0x4; // RETEN
    template<uint32_t X>
    static constexpr uint32_t DTCMCR_SZ =         // SZ
        bit_field_t<3, 0xf>::value<X>();

    static constexpr uint32_t AHBPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHBPCR_EN = 0x1; // EN
    template<uint32_t X>
    static constexpr uint32_t AHBPCR_SZ =      // SZ
        bit_field_t<1, 0x7>::value<X>();

    static constexpr uint32_t CACR_RESET_VALUE = 0x0;
    static constexpr uint32_t CACR_SIWT = 0x1;    // SIWT
    static constexpr uint32_t CACR_ECCEN = 0x2;   // ECCEN
    static constexpr uint32_t CACR_FORCEWT = 0x4; // FORCEWT

    static constexpr uint32_t AHBSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AHBSCR_CTL =         // CTL
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AHBSCR_TPRI =        // TPRI
        bit_field_t<2, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AHBSCR_INITCOUNT =   // INITCOUNT
        bit_field_t<11, 0x1f>::value<X>();

    static constexpr uint32_t ABFSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ABFSR_ITCM = 0x1;  // ITCM
    static constexpr uint32_t ABFSR_DTCM = 0x2;  // DTCM
    static constexpr uint32_t ABFSR_AHBP = 0x4;  // AHBP
    static constexpr uint32_t ABFSR_AXIM = 0x8;  // AXIM
    static constexpr uint32_t ABFSR_EPPB = 0x10; // EPPB
    template<uint32_t X>
    static constexpr uint32_t ABFSR_AXIMTYPE =   // AXIMTYPE
        bit_field_t<8, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, AC>
{
    typedef stm32h742x_ac_t T;
    static T& V;
};

using ac_t = peripheral_t<mcu_svd, AC>;

