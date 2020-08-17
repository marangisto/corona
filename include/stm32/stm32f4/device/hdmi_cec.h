#pragma once

////
//
//      STM32F4 HDMI_CEC peripherals
//
///

// HDMI_CEC: HDMI-CEC controller

struct stm32f446_hdmi_cec_t
{
    volatile uint32_t CEC_CR; // CEC control register
    volatile uint32_t CEC_CFGR; // CEC configuration register
    volatile uint32_t CEC_TXDR; // CEC Tx data register
    volatile uint32_t CEC_RXDR; // CEC Rx Data Register
    volatile uint32_t CEC_ISR; // CEC Interrupt and Status Register
    volatile uint32_t CEC_IER; // CEC interrupt enable register

    static constexpr uint32_t CEC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_CR_TXEOM = 0x4; // Tx End Of Message
    static constexpr uint32_t CEC_CR_TXSOM = 0x2; // Tx Start Of Message
    static constexpr uint32_t CEC_CR_CECEN = 0x1; // CEC Enable

    static constexpr uint32_t CEC_CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_CFGR_LSTN = 0x80000000; // Listen mode
    typedef bit_field_t<16, 0x7fff> CEC_CFGR_OAR; // Own addresses configuration
    static constexpr uint32_t CEC_CFGR_SFTOP = 0x100; // SFT Option Bit
    static constexpr uint32_t CEC_CFGR_BRDNOGEN = 0x80; // Avoid Error-Bit Generation in Broadcast
    static constexpr uint32_t CEC_CFGR_LBPEGEN = 0x40; // Generate Error-Bit on Long Bit Period Error
    static constexpr uint32_t CEC_CFGR_BREGEN = 0x20; // Generate Error-Bit on Bit Rising Error
    static constexpr uint32_t CEC_CFGR_BRESTP = 0x10; // Rx-Stop on Bit Rising Error
    static constexpr uint32_t CEC_CFGR_RXTOL = 0x8; // Rx-Tolerance
    typedef bit_field_t<0, 0x7> CEC_CFGR_SFT; // Signal Free Time

    static constexpr uint32_t CEC_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_TXDR_TXD; // Tx Data register

    static constexpr uint32_t CEC_RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_RXDR_RXD; // Rx Data register

    static constexpr uint32_t CEC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_ISR_TXACKE = 0x1000; // Tx-Missing Acknowledge Error
    static constexpr uint32_t CEC_ISR_TXERR = 0x800; // Tx-Error
    static constexpr uint32_t CEC_ISR_TXUDR = 0x400; // Tx-Buffer Underrun
    static constexpr uint32_t CEC_ISR_TXEND = 0x200; // End of Transmission
    static constexpr uint32_t CEC_ISR_TXBR = 0x100; // Tx-Byte Request
    static constexpr uint32_t CEC_ISR_ARBLST = 0x80; // Arbitration Lost
    static constexpr uint32_t CEC_ISR_RXACKE = 0x40; // Rx-Missing Acknowledge
    static constexpr uint32_t CEC_ISR_LBPE = 0x20; // Rx-Long Bit Period Error
    static constexpr uint32_t CEC_ISR_SBPE = 0x10; // Rx-Short Bit Period Error
    static constexpr uint32_t CEC_ISR_BRE = 0x8; // Rx-Bit Rising Error
    static constexpr uint32_t CEC_ISR_RXOVR = 0x4; // Rx-Overrun
    static constexpr uint32_t CEC_ISR_RXEND = 0x2; // End Of Reception
    static constexpr uint32_t CEC_ISR_RXBR = 0x1; // Rx-Byte Received

    static constexpr uint32_t CEC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_IER_TXACKIE = 0x1000; // Tx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t CEC_IER_TXERRIE = 0x800; // Tx-Error Interrupt Enable
    static constexpr uint32_t CEC_IER_TXUDRIE = 0x400; // Tx-Underrun Interrupt Enable
    static constexpr uint32_t CEC_IER_TXENDIE = 0x200; // Tx-End Of Message Interrupt Enable
    static constexpr uint32_t CEC_IER_TXBRIE = 0x100; // Tx-Byte Request Interrupt Enable
    static constexpr uint32_t CEC_IER_ARBLSTIE = 0x80; // Arbitration Lost Interrupt Enable
    static constexpr uint32_t CEC_IER_RXACKIE = 0x40; // Rx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t CEC_IER_LBPEIE = 0x20; // Long Bit Period Error Interrupt Enable
    static constexpr uint32_t CEC_IER_SBPEIE = 0x10; // Short Bit Period Error Interrupt Enable
    static constexpr uint32_t CEC_IER_BREIE = 0x8; // Bit Rising Error Interrupt Enable
    static constexpr uint32_t CEC_IER_RXOVRIE = 0x4; // Rx-Buffer Overrun Interrupt Enable
    static constexpr uint32_t CEC_IER_RXENDIE = 0x2; // End Of Reception Interrupt Enable
    static constexpr uint32_t CEC_IER_RXBRIE = 0x1; // Rx-Byte Received Interrupt Enable
};

template<>
struct peripheral_t<STM32F446, HDMI_CEC>
{
    using T = stm32f446_hdmi_cec_t;
    static T& V;
};

using hdmi_cec_t = peripheral_t<svd, HDMI_CEC>;
