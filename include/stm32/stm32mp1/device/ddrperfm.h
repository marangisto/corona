#pragma once

////
//
//      STM32MP1 DDRPERFM peripherals
//
////

////
//
//      DDRPERFM
//
////

struct stm32mp15xxx_ddrperfm_t
{
    volatile uint32_t DDRPERFM_CTL;    // [write-only] Write-only register. A read request returns all zeros.
    volatile uint32_t DDRPERFM_CFG;    // [read-write] DDRPERFM configurationl register
    volatile uint32_t DDRPERFM_STATUS; // [read-only] DDRPERFM status register
    volatile uint32_t DDRPERFM_CCR;    // [write-only] Write-only register. A read request returns all zeros
    volatile uint32_t DDRPERFM_IER;    // [read-write] DDRPERFM interrupt enable register
    volatile uint32_t DDRPERFM_ISR;    // [read-only] DDRPERFM interrupt status register
    volatile uint32_t DDRPERFM_ICR;    // [write-only] Write-only register. A read request returns all zeros
    reserved_t<0x1> _0x20;
    volatile uint32_t DDRPERFM_TCNT;   // [read-only] DDRPERFM time counter register
    reserved_t<0xf> _0x60;
    volatile uint32_t DDRPERFM_CNT0;   // [read-only] DDRPERFM event counter 0 register
    reserved_t<0x1> _0x68;
    volatile uint32_t DDRPERFM_CNT1;   // [read-only] DDRPERFM event counter 1 register
    reserved_t<0x1> _0x70;
    volatile uint32_t DDRPERFM_CNT2;   // [read-only] DDRPERFM event counter 2 register
    reserved_t<0x1> _0x78;
    volatile uint32_t DDRPERFM_CNT3;   // [read-only] DDRPERFM event counter 3 register
    reserved_t<0xdd> _0x3f0;
    volatile uint32_t DDRPERFM_HWCFG;  // [read-only] DDRPERFM hardware configuration register
    volatile uint32_t DDRPERFM_VER;    // [read-only] DDRPERFM version register
    volatile uint32_t DDRPERFM_ID;     // [read-only] DDRPERFM ID register
    volatile uint32_t DDRPERFM_SID;    // [read-only] DDRPERFM magic ID register

    static constexpr uint32_t DDRPERFM_CTL_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPERFM_CTL_START = 0x1; // START
    static constexpr uint32_t DDRPERFM_CTL_STOP = 0x2;  // STOP

    static constexpr uint32_t DDRPERFM_CFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_CFG_EN =    // EN
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_CFG_SEL =   // SEL
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t DDRPERFM_STATUS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_STATUS_COVF =             // COVF
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t DDRPERFM_STATUS_BUSY = 0x10000;    // BUSY
    static constexpr uint32_t DDRPERFM_STATUS_TOVF = 0x80000000; // TOVF

    static constexpr uint32_t DDRPERFM_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_CCR_CCLR =             // CCLR
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t DDRPERFM_CCR_TCLR = 0x80000000; // TCLR

    static constexpr uint32_t DDRPERFM_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPERFM_IER_OVFIE = 0x1; // OVFIE

    static constexpr uint32_t DDRPERFM_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPERFM_ISR_OVFF = 0x1; // OVFF

    static constexpr uint32_t DDRPERFM_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPERFM_ICR_OVF = 0x1; // OVF

    static constexpr uint32_t DDRPERFM_TCNT_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPERFM_CNT0_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPERFM_CNT1_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPERFM_CNT2_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPERFM_CNT3_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPERFM_HWCFG_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_HWCFG_NCNT =   // NCNT
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DDRPERFM_VER_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_VER_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPERFM_VER_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DDRPERFM_ID_RESET_VALUE = 0x140061;

    static constexpr uint32_t DDRPERFM_SID_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, DDRPERFM>
{
    typedef stm32mp15xxx_ddrperfm_t T;
    static T& V;
};

using ddrperfm_t = peripheral_t<mcu_svd, DDRPERFM>;

