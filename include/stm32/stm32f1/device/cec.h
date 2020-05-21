#pragma once

////
//
//      STM32F1 CEC peripherals
//
////

////
//
//      HDMI-CEC controller
//
////

struct stm32f100_cec_t
{
    volatile uint32_t CFGR; // [read-write] configuration register
    volatile uint32_t OAR;  // [read-write] CEC own address register
    volatile uint32_t PRES; // [read-write] Rx Data Register
    volatile uint32_t ESR;  // [read-only] CEC error status register
    volatile uint32_t CSR;  // [read-write] CEC control and status register
    volatile uint32_t TXD;  // [read-write] CEC Tx data register
    volatile uint32_t RXD;  // [read-only] CEC Rx data register

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR_PE = 0x1;   // Peripheral enable
    static constexpr uint32_t CFGR_IE = 0x2;   // Interrupt enable
    static constexpr uint32_t CFGR_BTEM = 0x4; // Bit timing error mode
    static constexpr uint32_t CFGR_BPEM = 0x8; // Bit period error mode

    static constexpr uint32_t OAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OAR_OA =   // Own address
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t PRES_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRES_PRESC =   // CEC Rx Data Register
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t ESR_RESET_VALUE = 0x0;
    static constexpr uint32_t ESR_BTE = 0x1;    // Bit timing error
    static constexpr uint32_t ESR_BPE = 0x2;    // Bit period error
    static constexpr uint32_t ESR_RBTFE = 0x4;  // Rx block transfer finished error
    static constexpr uint32_t ESR_SBE = 0x8;    // Start bit error
    static constexpr uint32_t ESR_ACKE = 0x10;  // Block acknowledge error
    static constexpr uint32_t ESR_LINE = 0x20;  // Line error
    static constexpr uint32_t ESR_TBTFE = 0x40; // Tx block transfer finished error

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_TSOM = 0x1;  // Tx start of message
    static constexpr uint32_t CSR_TEOM = 0x2;  // Tx end of message
    static constexpr uint32_t CSR_TERR = 0x4;  // Tx error
    static constexpr uint32_t CSR_TBTRF = 0x8; // Tx byte transfer request or block transfer finished
    static constexpr uint32_t CSR_RSOM = 0x10; // Rx start of message
    static constexpr uint32_t CSR_REOM = 0x20; // Rx end of message
    static constexpr uint32_t CSR_RERR = 0x40; // Rx error
    static constexpr uint32_t CSR_RBTF = 0x80; // Rx byte/block transfer finished

    static constexpr uint32_t TXD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXD_TXD =   // Tx Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RXD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXD_RXD =   // Rx data
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F100, CEC>
{
    typedef stm32f100_cec_t T;
    static T& V;
};

using cec_t = peripheral_t<mcu_svd, CEC>;

