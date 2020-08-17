#pragma once

////
//
//      STM32F1 CEC peripherals
//
///

// CEC: HDMI-CEC controller

struct stm32f100_cec_t
{
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t OAR; // CEC own address register
    volatile uint32_t PRES; // Rx Data Register
    volatile uint32_t ESR; // CEC error status register
    volatile uint32_t CSR; // CEC control and status register
    volatile uint32_t TXD; // CEC Tx data register
    volatile uint32_t RXD; // CEC Rx data register

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_PE = 0x1; // Peripheral enable
    static constexpr uint32_t CFGR_IE = 0x2; // Interrupt enable
    static constexpr uint32_t CFGR_BTEM = 0x4; // Bit timing error mode
    static constexpr uint32_t CFGR_BPEM = 0x8; // Bit period error mode

    static constexpr uint32_t OAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> OAR_OA; // Own address

    static constexpr uint32_t PRES_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> PRES_PRESC; // CEC Rx Data Register

    static constexpr uint32_t ESR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ESR_BTE = 0x1; // Bit timing error
    static constexpr uint32_t ESR_BPE = 0x2; // Bit period error
    static constexpr uint32_t ESR_RBTFE = 0x4; // Rx block transfer finished error
    static constexpr uint32_t ESR_SBE = 0x8; // Start bit error
    static constexpr uint32_t ESR_ACKE = 0x10; // Block acknowledge error
    static constexpr uint32_t ESR_LINE = 0x20; // Line error
    static constexpr uint32_t ESR_TBTFE = 0x40; // Tx block transfer finished error

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_TSOM = 0x1; // Tx start of message
    static constexpr uint32_t CSR_TEOM = 0x2; // Tx end of message
    static constexpr uint32_t CSR_TERR = 0x4; // Tx error
    static constexpr uint32_t CSR_TBTRF = 0x8; // Tx byte transfer request or block transfer finished
    static constexpr uint32_t CSR_RSOM = 0x10; // Rx start of message
    static constexpr uint32_t CSR_REOM = 0x20; // Rx end of message
    static constexpr uint32_t CSR_RERR = 0x40; // Rx error
    static constexpr uint32_t CSR_RBTF = 0x80; // Rx byte/block transfer finished

    static constexpr uint32_t TXD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXD_TXD; // Tx Data register

    static constexpr uint32_t RXD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXD_RXD; // Rx data
};

template<>
struct peripheral_t<STM32F100, HDMI_CEC>
{
    using T = stm32f100_cec_t;
    static T& V;
};

using hdmi_cec_t = peripheral_t<svd, HDMI_CEC>;
