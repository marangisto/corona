#pragma once

////
//
//      STM32MP1 HDMI_CEC peripherals
//
////

////
//
//      HDMI_CEC
//
////

struct stm32mp15xxx_hdmi_cec_t
{
    volatile uint32_t CEC_CR;   // [read-write] CEC control register
    volatile uint32_t CEC_CFGR; // [read-write] This register is used to configure the HDMI-CEC controller. It is mandatory to write CEC_CFGR only when CECEN=0.
    volatile uint32_t CEC_TXDR; // [read-write] CEC Tx data register
    volatile uint32_t CEC_RXDR; // [read-only] CEC Rx data register
    volatile uint32_t CEC_ISR;  // [read-write] CEC Interrupt and Status Register
    volatile uint32_t CEC_IER;  // [read-write] CEC interrupt enable register

    static constexpr uint32_t CEC_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CEC_CR_CECEN = 0x1; // CECEN
    static constexpr uint32_t CEC_CR_TXSOM = 0x2; // TXSOM
    static constexpr uint32_t CEC_CR_TXEOM = 0x4; // TXEOM

    static constexpr uint32_t CEC_CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CEC_CFGR_SFT =              // SFT
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CEC_CFGR_RXTOL = 0x8;       // RXTOL
    static constexpr uint32_t CEC_CFGR_BRESTP = 0x10;     // BRESTP
    static constexpr uint32_t CEC_CFGR_BREGEN = 0x20;     // BREGEN
    static constexpr uint32_t CEC_CFGR_LBPEGEN = 0x40;    // LBPEGEN
    static constexpr uint32_t CEC_CFGR_BRDNOGEN = 0x80;   // BRDNOGEN
    static constexpr uint32_t CEC_CFGR_SFTOP = 0x100;     // SFTOP
    template<uint32_t X>
    static constexpr uint32_t CEC_CFGR_OAR =              // OAR
        bit_field_t<16, 0x7fff>::value<X>();
    static constexpr uint32_t CEC_CFGR_LSTN = 0x80000000; // LSTN

    static constexpr uint32_t CEC_TXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CEC_TXDR_TXD =   // TXD
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CEC_RXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CEC_RXDR_RXD =   // RXD
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CEC_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t CEC_ISR_RXBR = 0x1;      // RXBR
    static constexpr uint32_t CEC_ISR_RXEND = 0x2;     // RXEND
    static constexpr uint32_t CEC_ISR_RXOVR = 0x4;     // RXOVR
    static constexpr uint32_t CEC_ISR_BRE = 0x8;       // BRE
    static constexpr uint32_t CEC_ISR_SBPE = 0x10;     // SBPE
    static constexpr uint32_t CEC_ISR_LBPE = 0x20;     // LBPE
    static constexpr uint32_t CEC_ISR_RXACKE = 0x40;   // RXACKE
    static constexpr uint32_t CEC_ISR_ARBLST = 0x80;   // ARBLST
    static constexpr uint32_t CEC_ISR_TXBR = 0x100;    // TXBR
    static constexpr uint32_t CEC_ISR_TXEND = 0x200;   // TXEND
    static constexpr uint32_t CEC_ISR_TXUDR = 0x400;   // TXUDR
    static constexpr uint32_t CEC_ISR_TXERR = 0x800;   // TXERR
    static constexpr uint32_t CEC_ISR_TXACKE = 0x1000; // TXACKE

    static constexpr uint32_t CEC_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t CEC_IER_RXBRIE = 0x1;     // RXBRIE
    static constexpr uint32_t CEC_IER_RXENDIE = 0x2;    // RXENDIE
    static constexpr uint32_t CEC_IER_RXOVRIE = 0x4;    // RXOVRIE
    static constexpr uint32_t CEC_IER_BREIE = 0x8;      // BREIE
    static constexpr uint32_t CEC_IER_SBPEIE = 0x10;    // SBPEIE
    static constexpr uint32_t CEC_IER_LBPEIE = 0x20;    // LBPEIE
    static constexpr uint32_t CEC_IER_RXACKIE = 0x40;   // RXACKIE
    static constexpr uint32_t CEC_IER_ARBLSTIE = 0x80;  // ARBLSTIE
    static constexpr uint32_t CEC_IER_TXBRIE = 0x100;   // TXBRIE
    static constexpr uint32_t CEC_IER_TXENDIE = 0x200;  // TXENDIE
    static constexpr uint32_t CEC_IER_TXUDRIE = 0x400;  // TXUDRIE
    static constexpr uint32_t CEC_IER_TXERRIE = 0x800;  // TXERRIE
    static constexpr uint32_t CEC_IER_TXACKIE = 0x1000; // TXACKIE
};


template<>
struct peripheral_t<STM32MP15xxx, HDMI_CEC>
{
    typedef stm32mp15xxx_hdmi_cec_t T;
    static T& V;
};

using hdmi_cec_t = peripheral_t<mcu_svd, HDMI_CEC>;

