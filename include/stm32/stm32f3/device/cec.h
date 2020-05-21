#pragma once

////
//
//      STM32F3 CEC peripherals
//
////

////
//
//      HDMI-CEC controller
//
////

struct stm32f373_cec_t
{
    volatile uint32_t CR;   // [read-write] control register
    volatile uint32_t CFGR; // [read-write] configuration register
    volatile uint32_t TXDR; // [write-only] Tx data register
    volatile uint32_t RXDR; // [read-only] Rx Data Register
    volatile uint32_t ISR;  // [read-write] Interrupt and Status Register
    volatile uint32_t IER;  // [read-write] interrupt enable register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_TXEOM = 0x4; // Tx End Of Message
    static constexpr uint32_t CR_TXSOM = 0x2; // Tx start of message
    static constexpr uint32_t CR_CECEN = 0x1; // CEC Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR_LBPEGEN = 0x800; // Generate Error-Bit on Long Bit Period Error
    static constexpr uint32_t CFGR_BREGEN = 0x400;  // Generate error-bit on bit rising error
    static constexpr uint32_t CFGR_BRESTP = 0x200;  // Rx-stop on bit rising error
    static constexpr uint32_t CFGR_RXTOL = 0x100;   // Rx-Tolerance
    template<uint32_t X>
    static constexpr uint32_t CFGR_SFT =            // Signal Free Time
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CFGR_LSTN = 0x10;     // Listen mode
    template<uint32_t X>
    static constexpr uint32_t CFGR_OAR =            // Own Address
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXDR_TXD =   // Tx Data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXDR_RXDR =   // CEC Rx Data Register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_TXACKE = 0x1000; // Tx-Missing acknowledge error
    static constexpr uint32_t ISR_TXERR = 0x800;   // Tx-Error
    static constexpr uint32_t ISR_TXUDR = 0x400;   // Tx-Buffer Underrun
    static constexpr uint32_t ISR_TXEND = 0x200;   // End of Transmission
    static constexpr uint32_t ISR_TXBR = 0x100;    // Tx-Byte Request
    static constexpr uint32_t ISR_ARBLST = 0x80;   // Arbitration Lost
    static constexpr uint32_t ISR_RXACKE = 0x40;   // Rx-Missing Acknowledge
    static constexpr uint32_t ISR_LBPE = 0x20;     // Rx-Long Bit Period Error
    static constexpr uint32_t ISR_SBPE = 0x10;     // Rx-Short Bit period error
    static constexpr uint32_t ISR_BRE = 0x8;       // Rx-Bit rising error
    static constexpr uint32_t ISR_RXOVR = 0x4;     // Rx-Overrun
    static constexpr uint32_t ISR_RXEND = 0x2;     // End Of Reception
    static constexpr uint32_t ISR_RXBR = 0x1;      // Rx-Byte Received

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_TXACKIE = 0x1000; // Tx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t IER_TXERRIE = 0x800;  // Tx-Error Interrupt Enable
    static constexpr uint32_t IER_TXUDRIE = 0x400;  // Tx-Underrun interrupt enable
    static constexpr uint32_t IER_TXENDIE = 0x200;  // Tx-End of message interrupt enable
    static constexpr uint32_t IER_TXBRIE = 0x100;   // Tx-Byte Request Interrupt Enable
    static constexpr uint32_t IER_ARBLSTIE = 0x80;  // Arbitration Lost Interrupt Enable
    static constexpr uint32_t IER_RXACKIE = 0x40;   // Rx-Missing Acknowledge Error Interrupt Enable
    static constexpr uint32_t IER_LBPEIE = 0x20;    // Long Bit Period Error Interrupt Enable
    static constexpr uint32_t IER_SBPEIE = 0x10;    // Short Bit Period Error Interrupt Enable
    static constexpr uint32_t IER_BREIE = 0x8;      // Bit Rising Error Interrupt Enable
    static constexpr uint32_t IER_RXOVRIE = 0x4;    // Rx-Buffer Overrun Interrupt Enable
    static constexpr uint32_t IER_RXENDIE = 0x2;    // End Of Reception Interrupt Enable
    static constexpr uint32_t IER_RXBRIE = 0x1;     // Rx-Byte Received Interrupt Enable
};


template<>
struct peripheral_t<STM32F373, CEC>
{
    typedef stm32f373_cec_t T;
    static T& V;
};

using cec_t = peripheral_t<mcu_svd, CEC>;

