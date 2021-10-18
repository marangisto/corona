#pragma once

////
//
//      STM32U5 LPUART peripherals
//
///

// LPUART1: Universal synchronous asynchronous receiver transmitter

struct stm32u5xx_lpuart1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR; // Interrupt and status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register
    volatile uint32_t PRESC; // prescaler register
    volatile uint32_t AUTOCR; // Autonomous mode control register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFFIE
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFEIE
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFOEN
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // DEAT
    typedef bit_field_t<16, 0x1f> CR1_DEDT; // DEDT
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_M0 = 0x1000; // Word length
    static constexpr uint32_t CR1_WAKE = 0x800; // Receiver wakeup method
    static constexpr uint32_t CR1_PCE = 0x400; // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200; // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100; // PE interrupt enable
    static constexpr uint32_t CR1_TXFNFIE = 0x80; // TXFIFO not full interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXFNEIE = 0x20; // RXFNEIE
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8; // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4; // Receiver enable
    static constexpr uint32_t CR1_UESM = 0x2; // USART enable in Stop mode
    static constexpr uint32_t CR1_UE = 0x1; // USART enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> CR2_ADD; // Address of the LPUART node
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_DATAINV = 0x40000; // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFTCFG
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFTIE
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // RXFTCFG
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // TXFTIE
    static constexpr uint32_t CR3_DEP = 0x8000; // Driver enable polarity selection
    static constexpr uint32_t CR3_DEM = 0x4000; // Driver enable mode
    static constexpr uint32_t CR3_DDRE = 0x2000; // DMA Disable on Reception Error
    static constexpr uint32_t CR3_OVRDIS = 0x1000; // Overrun Disable
    static constexpr uint32_t CR3_CTSIE = 0x400; // CTS interrupt enable
    static constexpr uint32_t CR3_CTSE = 0x200; // CTS enable
    static constexpr uint32_t CR3_RTSE = 0x100; // RTS enable
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40; // DMA enable receiver
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> BRR_BRR; // BRR


    static constexpr uint32_t RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RQR_TXFRQ = 0x10; // TXFRQ
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request

    static constexpr uint32_t ISR_RESET_VALUE = 0x8000c0; // Reset value
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFT
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFT
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFF
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFE
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_TXFNF = 0x80; // TXFNF
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_RXFNE = 0x20; // RXFNE
    static constexpr uint32_t ISR_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_NE = 0x4; // NE
    static constexpr uint32_t ISR_FE = 0x2; // FE
    static constexpr uint32_t ISR_PE = 0x1; // PE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag
    static constexpr uint32_t ICR_NECF = 0x4; // Noise detected clear flag
    static constexpr uint32_t ICR_FECF = 0x2; // Framing error clear flag
    static constexpr uint32_t ICR_PECF = 0x1; // Parity error clear flag

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RDR_RDR; // Receive data value

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> TDR_TDR; // Transmit data value

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // PRESCALER

    static constexpr uint32_t AUTOCR_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<0, 0xffff> AUTOCR_TDN; // TDN
    static constexpr uint32_t AUTOCR_TRIGPOL = 0x10000; // TRIGPOL
    static constexpr uint32_t AUTOCR_TRIGEN = 0x20000; // TRIGEN
    static constexpr uint32_t AUTOCR_IDLEDIS = 0x40000; // IDLEDIS
    typedef bit_field_t<19, 0xf> AUTOCR_TRIGSEL; // TRIGSEL
    static constexpr uint32_t AUTOCR_TECLREN = 0x80000000; // TECLREN
};

template<>
struct peripheral_t<STM32U5xx, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32u5xx_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPUART1>
{
    static constexpr periph_t P = SEC_LPUART1;
    using T = stm32u5xx_lpuart1_t;
    static T& V;
};

using lpuart1_t = peripheral_t<svd, LPUART1>;
using sec_lpuart1_t = peripheral_t<svd, SEC_LPUART1>;

template<int INST> struct lpuart_traits {};

template<> struct lpuart_traits<1>
{
    using lpuart = lpuart1_t;
    static constexpr signal_t CTS = LPUART1_CTS;
    static constexpr signal_t DE = LPUART1_DE;
    static constexpr signal_t RTS = LPUART1_RTS;
    static constexpr signal_t RX = LPUART1_RX;
    static constexpr signal_t TX = LPUART1_TX;
};
