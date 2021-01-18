#pragma once

////
//
//      STM32H7 SWPMI peripherals
//
///

// SWPMI: Single Wire Protocol Master Interface

struct stm32h723_swpmi_t
{
    volatile uint32_t CR; // SWPMI Configuration/Control register
    volatile uint32_t BRR; // SWPMI Bitrate register
    reserved_t<0x1> _0x8;
    volatile uint32_t ISR; // SWPMI Interrupt and Status register
    volatile uint32_t ICR; // SWPMI Interrupt Flag Clear register
    volatile uint32_t IER; // SWPMI Interrupt Enable register
    volatile uint32_t RFL; // SWPMI Receive Frame Length register
    volatile uint32_t TDR; // SWPMI Transmit data register
    volatile uint32_t RDR; // SWPMI Receive data register
    volatile uint32_t OR; // SWPMI Option register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RXDMA = 0x1; // Reception DMA enable
    static constexpr uint32_t CR_TXDMA = 0x2; // Transmission DMA enable
    static constexpr uint32_t CR_RXMODE = 0x4; // Reception buffering mode
    static constexpr uint32_t CR_TXMODE = 0x8; // Transmission buffering mode
    static constexpr uint32_t CR_LPBK = 0x10; // Loopback mode enable
    static constexpr uint32_t CR_SWPACT = 0x20; // Single wire protocol master interface activate
    static constexpr uint32_t CR_DEACT = 0x400; // Single wire protocol master interface deactivate
    static constexpr uint32_t CR_SWPTEN = 0x800; // Single wire protocol master transceiver enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> BRR_BR; // Bitrate prescaler


    static constexpr uint32_t ISR_RESET_VALUE = 0x2c2; // Reset value
    static constexpr uint32_t ISR_RXBFF = 0x1; // Receive buffer full flag
    static constexpr uint32_t ISR_TXBEF = 0x2; // Transmit buffer empty flag
    static constexpr uint32_t ISR_RXBERF = 0x4; // Receive CRC error flag
    static constexpr uint32_t ISR_RXOVRF = 0x8; // Receive overrun error flag
    static constexpr uint32_t ISR_TXUNRF = 0x10; // Transmit underrun error flag
    static constexpr uint32_t ISR_RXNE = 0x20; // Receive data register not empty
    static constexpr uint32_t ISR_TXE = 0x40; // Transmit data register empty
    static constexpr uint32_t ISR_TCF = 0x80; // Transfer complete flag
    static constexpr uint32_t ISR_SRF = 0x100; // Slave resume flag
    static constexpr uint32_t ISR_SUSP = 0x200; // SUSPEND flag
    static constexpr uint32_t ISR_DEACTF = 0x400; // DEACTIVATED flag
    static constexpr uint32_t ISR_RDYF = 0x800; // transceiver ready flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_CRXBFF = 0x1; // Clear receive buffer full flag
    static constexpr uint32_t ICR_CTXBEF = 0x2; // Clear transmit buffer empty flag
    static constexpr uint32_t ICR_CRXBERF = 0x4; // Clear receive CRC error flag
    static constexpr uint32_t ICR_CRXOVRF = 0x8; // Clear receive overrun error flag
    static constexpr uint32_t ICR_CTXUNRF = 0x10; // Clear transmit underrun error flag
    static constexpr uint32_t ICR_CTCF = 0x80; // Clear transfer complete flag
    static constexpr uint32_t ICR_CSRF = 0x100; // Clear slave resume flag
    static constexpr uint32_t ICR_CRDYF = 0x800; // Clear transceiver ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_RXBFIE = 0x1; // Receive buffer full interrupt enable
    static constexpr uint32_t IER_TXBEIE = 0x2; // Transmit buffer empty interrupt enable
    static constexpr uint32_t IER_RXBERIE = 0x4; // Receive CRC error interrupt enable
    static constexpr uint32_t IER_RXOVRIE = 0x8; // Receive overrun error interrupt enable
    static constexpr uint32_t IER_TXUNRIE = 0x10; // Transmit underrun error interrupt enable
    static constexpr uint32_t IER_RIE = 0x20; // Receive interrupt enable
    static constexpr uint32_t IER_TIE = 0x40; // Transmit interrupt enable
    static constexpr uint32_t IER_TCIE = 0x80; // Transmit complete interrupt enable
    static constexpr uint32_t IER_SRIE = 0x100; // Slave resume interrupt enable
    static constexpr uint32_t IER_RDYIE = 0x800; // Transceiver ready interrupt enable

    static constexpr uint32_t RFL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RFL_RFL; // Receive frame length

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TDR_TD; // Transmit data

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RDR_RD; // received data

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR_SWP_TBYP = 0x1; // SWP transceiver bypass
    static constexpr uint32_t OR_SWP_CLASS = 0x2; // SWP class selection
};

template<>
struct peripheral_t<STM32H723, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SWPMI>
{
    static constexpr periph_t P = SWPMI;
    using T = stm32h723_swpmi_t;
    static T& V;
};

using swpmi_t = peripheral_t<svd, SWPMI>;

template<> struct dma_request_t<SWPMI, SWPMI_RX>
{
    static constexpr unsigned ID = 106;
};

template<> struct dma_request_t<SWPMI, SWPMI_TX>
{
    static constexpr unsigned ID = 107;
};
