#pragma once

////
//
//      STM32L4+ SWPMI peripherals
//
////

////
//
//      Single Wire Protocol Master Interface
//
////

struct stm32l4p5_swpmi1_t
{
    volatile uint32_t CR;  // [read-write] SWPMI Configuration/Control register
    volatile uint32_t BRR; // [read-write] SWPMI Bitrate register
    reserved_t<0x1> _0xc;
    volatile uint32_t ISR; // [read-only] SWPMI Interrupt and Status register
    volatile uint32_t ICR; // [write-only] SWPMI Interrupt Flag Clear register
    volatile uint32_t IER; // [read-write] SWPMI Interrupt Enable register
    volatile uint32_t RFL; // [read-only] SWPMI Receive Frame Length register
    volatile uint32_t TDR; // [write-only] SWPMI Transmit data register
    volatile uint32_t RDR; // [read-only] SWPMI Receive data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RXDMA = 0x1;   // Reception DMA enable
    static constexpr uint32_t CR_TXDMA = 0x2;   // Transmission DMA enable
    static constexpr uint32_t CR_RXMODE = 0x4;  // Reception buffering mode
    static constexpr uint32_t CR_TXMODE = 0x8;  // Transmission buffering mode
    static constexpr uint32_t CR_LPBK = 0x10;   // Loopback mode enable
    static constexpr uint32_t CR_SWPME = 0x20;  // Single wire protocol master interface enable
    static constexpr uint32_t CR_DEACT = 0x400; // Single wire protocol master interface deactivate

    static constexpr uint32_t BRR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t BRR_BR =   // Bitrate prescaler
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t ISR_RESET_VALUE = 0x2c2;
    static constexpr uint32_t ISR_RXBFF = 0x1;    // Receive buffer full flag
    static constexpr uint32_t ISR_TXBEF = 0x2;    // Transmit buffer empty flag
    static constexpr uint32_t ISR_RXBERF = 0x4;   // Receive CRC error flag
    static constexpr uint32_t ISR_RXOVRF = 0x8;   // Receive overrun error flag
    static constexpr uint32_t ISR_TXUNRF = 0x10;  // Transmit underrun error flag
    static constexpr uint32_t ISR_RXNE = 0x20;    // Receive data register not empty
    static constexpr uint32_t ISR_TXE = 0x40;     // Transmit data register empty
    static constexpr uint32_t ISR_TCF = 0x80;     // Transfer complete flag
    static constexpr uint32_t ISR_SRF = 0x100;    // Slave resume flag
    static constexpr uint32_t ISR_SUSP = 0x200;   // SUSPEND flag
    static constexpr uint32_t ISR_DEACTF = 0x400; // DEACTIVATED flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_CRXBFF = 0x1;   // Clear receive buffer full flag
    static constexpr uint32_t ICR_CTXBEF = 0x2;   // Clear transmit buffer empty flag
    static constexpr uint32_t ICR_CRXBERF = 0x4;  // Clear receive CRC error flag
    static constexpr uint32_t ICR_CRXOVRF = 0x8;  // Clear receive overrun error flag
    static constexpr uint32_t ICR_CTXUNRF = 0x10; // Clear transmit underrun error flag
    static constexpr uint32_t ICR_CTCF = 0x80;    // Clear transfer complete flag
    static constexpr uint32_t ICR_CSRF = 0x100;   // Clear slave resume flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_RXBFIE = 0x1;   // Receive buffer full interrupt enable
    static constexpr uint32_t IER_TXBEIE = 0x2;   // Transmit buffer empty interrupt enable
    static constexpr uint32_t IER_RXBERIE = 0x4;  // Receive CRC error interrupt enable
    static constexpr uint32_t IER_RXOVRIE = 0x8;  // Receive overrun error interrupt enable
    static constexpr uint32_t IER_TXUNRIE = 0x10; // Transmit underrun error interrupt enable
    static constexpr uint32_t IER_RIE = 0x20;     // Receive interrupt enable
    static constexpr uint32_t IER_TIE = 0x40;     // Transmit interrupt enable
    static constexpr uint32_t IER_TCIE = 0x80;    // Transmit complete interrupt enable
    static constexpr uint32_t IER_SRIE = 0x100;   // Slave resume interrupt enable

    static constexpr uint32_t RFL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RFL_RFL =   // Receive frame length
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t TDR_RESET_VALUE = 0x0;

    static constexpr uint32_t RDR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32L4P5, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, SWPMI1>
{
    typedef stm32l4p5_swpmi1_t T;
    static T& V;
};

using swpmi1_t = peripheral_t<mcu_svd, SWPMI1>;

template<int INST> struct swpmi_traits {};

template<> struct swpmi_traits<1>
{
    using swpmi = swpmi1_t;
};

