#pragma once

////
//
//      STM32F7 CEC peripherals
//
///

// CEC: HDMI-CEC controller

struct stm32f745_cec_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t TXDR; // Tx data register
    volatile uint32_t RXDR; // Rx Data Register
    volatile uint32_t ISR; // Interrupt and Status Register
    volatile uint32_t IER; // interrupt enable register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_TXEOM = 0x4; // Tx End Of Message
    static constexpr uint32_t CR_TXSOM = 0x2; // Tx start of message
    static constexpr uint32_t CR_CECEN = 0x1; // CEC Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CFGR_SFT; // Signal Free Time
    static constexpr uint32_t CFGR_RXTOL = 0x8; // Rx-Tolerance
    static constexpr uint32_t CFGR_BRESTP = 0x10; // Rx-stop on bit rising error
    static constexpr uint32_t CFGR_BREGEN = 0x20; // Generate error-bit on bit rising error
    static constexpr uint32_t CFGR_LBPEGEN = 0x40; // Generate Error-Bit on Long Bit Period Error
    static constexpr uint32_t CFGR_BRDNOGEN = 0x80; // Avoid Error-Bit Generation in Broadcast
    static constexpr uint32_t CFGR_SFTOP = 0x100; // SFT Option Bit
    typedef bit_field_t<16, 0x7fff> CFGR_OAR; // Own addresses configuration
    static constexpr uint32_t CFGR_LSTN = 0x80000000; // Listen mode

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXD; // Tx Data register

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDR; // CEC Rx Data Register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TXACKE = 0x1000; // Tx-Missing acknowledge error
    static constexpr uint32_t ISR_TXERR = 0x800; // Tx-Error
    static constexpr uint32_t ISR_TXUDR = 0x400; // Tx-Buffer Underrun
    static constexpr uint32_t ISR_TXEND = 0x200; // End of Transmission
    static constexpr uint32_t ISR_TXBR = 0x100; // Tx-Byte Request
    static constexpr uint32_t ISR_ARBLST = 0x80; // Arbitration Lost
    static constexpr uint32_t ISR_RXACKE = 0x40; // Rx-Missing Acknowledge
    static constexpr uint32_t ISR_LBPE = 0x20; // Rx-Long Bit Period Error
    static constexpr uint32_t ISR_SBPE = 0x10; // Rx-Short Bit period error
    static constexpr uint32_t ISR_BRE = 0x8; // Rx-Bit rising error
    static constexpr uint32_t ISR_RXOVR = 0x4; // Rx-Overrun
    static constexpr uint32_t ISR_RXEND = 0x2; // End Of Reception
    static constexpr uint32_t ISR_RXBR = 0x1; // Rx-Byte Received

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TXACKIE = 0x1000; // Tx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t IER_TXERRIE = 0x800; // Tx-Error Interrupt Enable
    static constexpr uint32_t IER_TXUDRIE = 0x400; // Tx-Underrun interrupt enable
    static constexpr uint32_t IER_TXENDIE = 0x200; // Tx-End of message interrupt enable
    static constexpr uint32_t IER_TXBRIE = 0x100; // Tx-Byte Request Interrupt Enable
    static constexpr uint32_t IER_ARBLSTIE = 0x80; // Arbitration Lost Interrupt Enable
    static constexpr uint32_t IER_RXACKIE = 0x40; // Rx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t IER_LBPEIE = 0x20; // Long Bit Period Error Interrupt Enable
    static constexpr uint32_t IER_SBPEIE = 0x10; // Short Bit Period Error Interrupt Enable
    static constexpr uint32_t IER_BREIE = 0x8; // Bit Rising Error Interrupt Enable
    static constexpr uint32_t IER_RXOVRIE = 0x4; // Rx-Buffer Overrun Interrupt Enable
    static constexpr uint32_t IER_RXENDIE = 0x2; // End Of Reception Interrupt Enable
    static constexpr uint32_t IER_RXBRIE = 0x1; // Rx-Byte Received Interrupt Enable
};

template<>
struct peripheral_t<STM32F745, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32f745_cec_t;
    static T& V;
};

using hdmi_cec_t = peripheral_t<svd, HDMI_CEC>;
