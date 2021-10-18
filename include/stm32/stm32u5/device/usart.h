#pragma once

////
//
//      STM32U5 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32u5xx_usart1_t
{
    volatile uint32_t CR1_ENABLED; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    volatile uint32_t GTPR; // Guard time and prescaler register
    volatile uint32_t RTOR; // Receiver timeout register
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR_ENABLED; // Interrupt &amp; status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register
    volatile uint32_t PRESC; // PRESC
    volatile uint32_t AUTOCR; // AUTOCR

    static constexpr uint32_t CR1_ENABLED_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_ENABLED_CMIE = 0x4000; // Character match interrupt enable
    typedef bit_field_t<21, 0x1f> CR1_ENABLED_DEAT; // DEAT
    typedef bit_field_t<16, 0x1f> CR1_ENABLED_DEDT; // DEDT
    static constexpr uint32_t CR1_ENABLED_EOBIE = 0x8000000; // End of Block interruptenable
    static constexpr uint32_t CR1_ENABLED_FIFOEN = 0x20000000; // FIFOEN
    static constexpr uint32_t CR1_ENABLED_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_ENABLED_M0 = 0x1000; // Word length
    static constexpr uint32_t CR1_ENABLED_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_ENABLED_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_ENABLED_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_ENABLED_PCE = 0x400; // Parity control enable
    static constexpr uint32_t CR1_ENABLED_PEIE = 0x100; // PE interrupt enable
    static constexpr uint32_t CR1_ENABLED_PS = 0x200; // Parity selection
    static constexpr uint32_t CR1_ENABLED_RE = 0x4; // Receiver enable
    static constexpr uint32_t CR1_ENABLED_RTOIE = 0x4000000; // Receiver timeout interrupt
    static constexpr uint32_t CR1_ENABLED_RXFFIE = 0x80000000; // RXFFIE
    static constexpr uint32_t CR1_ENABLED_RXFNEIE = 0x20; // RXFIFO not empty interrupt enable
    static constexpr uint32_t CR1_ENABLED_TCIE = 0x40; // Transmission complete interrupt enable
    static constexpr uint32_t CR1_ENABLED_TE = 0x8; // Transmitter enable
    static constexpr uint32_t CR1_ENABLED_TXFEIE = 0x40000000; // TXFEIE
    static constexpr uint32_t CR1_ENABLED_TXFNFIE = 0x80; // TXFIFO not full interrupt enable
    static constexpr uint32_t CR1_ENABLED_UE = 0x1; // USART enable
    static constexpr uint32_t CR1_ENABLED_UESM = 0x2; // USART enable in Stop mode
    static constexpr uint32_t CR1_ENABLED_WAKE = 0x800; // Receiver wakeup method

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> CR2_ADD; // Address of the USART node
    static constexpr uint32_t CR2_RTOEN = 0x800000; // Receiver timeout enable
    typedef bit_field_t<21, 0x3> CR2_ABRMOD; // Auto baud rate mode
    static constexpr uint32_t CR2_ABREN = 0x100000; // Auto baud rate enable
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_DATAINV = 0x40000; // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_CLKEN = 0x800; // Clock enable
    static constexpr uint32_t CR2_CPOL = 0x400; // Clock polarity
    static constexpr uint32_t CR2_CPHA = 0x200; // Clock phase
    static constexpr uint32_t CR2_LBCL = 0x100; // Last bit clock pulse
    static constexpr uint32_t CR2_LBDIE = 0x40; // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20; // LIN break detection length
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection
    static constexpr uint32_t CR2_SLVEN = 0x1; // SLVEN
    static constexpr uint32_t CR2_DIS_NSS = 0x8; // DIS_NSS

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<17, 0x7> CR3_SCARCNT; // Smartcard auto-retry count
    static constexpr uint32_t CR3_DEP = 0x8000; // Driver enable polarity selection
    static constexpr uint32_t CR3_DEM = 0x4000; // Driver enable mode
    static constexpr uint32_t CR3_DDRE = 0x2000; // DMA Disable on Reception Error
    static constexpr uint32_t CR3_OVRDIS = 0x1000; // Overrun Disable
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_CTSIE = 0x400; // CTS interrupt enable
    static constexpr uint32_t CR3_CTSE = 0x200; // CTS enable
    static constexpr uint32_t CR3_RTSE = 0x100; // RTS enable
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40; // DMA enable receiver
    static constexpr uint32_t CR3_SCEN = 0x20; // Smartcard mode enable
    static constexpr uint32_t CR3_NACK = 0x10; // Smartcard NACK enable
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4; // Ir low-power
    static constexpr uint32_t CR3_IREN = 0x2; // Ir mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // TXFTIE
    static constexpr uint32_t CR3_TCBGTIE = 0x1000000; // TCBGTIE
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // RXFTCFG
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFTIE
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFTCFG

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BRR_BRR; // BRR

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> GTPR_GT; // Guard time value
    typedef bit_field_t<0, 0xff> GTPR_PSC; // Prescaler value

    static constexpr uint32_t RTOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> RTOR_BLEN; // Block Length
    typedef bit_field_t<0, 0xffffff> RTOR_RTO; // Receiver timeout value

    static constexpr uint32_t RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RQR_TXFRQ = 0x10; // Transmit data flush request
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request
    static constexpr uint32_t RQR_ABRRQ = 0x1; // Auto baud rate request

    static constexpr uint32_t ISR_ENABLED_RESET_VALUE = 0x28000c0; // Reset value
    static constexpr uint32_t ISR_ENABLED_ABRE = 0x4000; // ABRE
    static constexpr uint32_t ISR_ENABLED_ABRF = 0x8000; // ABRF
    static constexpr uint32_t ISR_ENABLED_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_ENABLED_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_ENABLED_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_ENABLED_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_ENABLED_EOBF = 0x1000; // EOBF
    static constexpr uint32_t ISR_ENABLED_FE = 0x2; // FE
    static constexpr uint32_t ISR_ENABLED_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ENABLED_LBDF = 0x100; // LBDF
    static constexpr uint32_t ISR_ENABLED_NE = 0x4; // NE
    static constexpr uint32_t ISR_ENABLED_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_ENABLED_PE = 0x1; // PE
    static constexpr uint32_t ISR_ENABLED_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_ENABLED_RTOF = 0x800; // RTOF
    static constexpr uint32_t ISR_ENABLED_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_ENABLED_RXFF = 0x1000000; // RXFF
    static constexpr uint32_t ISR_ENABLED_RXFNE = 0x20; // RXFNE
    static constexpr uint32_t ISR_ENABLED_RXFT = 0x4000000; // RXFT
    static constexpr uint32_t ISR_ENABLED_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_ENABLED_TC = 0x40; // TC
    static constexpr uint32_t ISR_ENABLED_TCBGT = 0x2000000; // TCBGT
    static constexpr uint32_t ISR_ENABLED_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_ENABLED_TXFE = 0x800000; // TXFE
    static constexpr uint32_t ISR_ENABLED_TXFNF = 0x80; // TXFNF
    static constexpr uint32_t ISR_ENABLED_TXFT = 0x8000000; // TXFT
    static constexpr uint32_t ISR_ENABLED_UDR = 0x2000; // UDR

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_EOBCF = 0x1000; // End of block clear flag
    static constexpr uint32_t ICR_RTOCF = 0x800; // Receiver timeout clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
    static constexpr uint32_t ICR_LBDCF = 0x100; // LIN break detection clear flag
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag
    static constexpr uint32_t ICR_NECF = 0x4; // Noise detected clear flag
    static constexpr uint32_t ICR_FECF = 0x2; // Framing error clear flag
    static constexpr uint32_t ICR_PECF = 0x1; // Parity error clear flag
    static constexpr uint32_t ICR_TXFECF = 0x20; // TXFECF
    static constexpr uint32_t ICR_TCBGTCF = 0x80; // TCBGTCF
    static constexpr uint32_t ICR_UDRCF = 0x2000; // UDRCF

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RDR_RDR; // Receive data value

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> TDR_TDR; // Transmit data value

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // PRESCALER

    static constexpr uint32_t AUTOCR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t AUTOCR_TECLREN = 0x80000000; // TECLREN
    static constexpr uint32_t AUTOCR_IDLEDIS = 0x40000; // IDLEDIS
    typedef bit_field_t<19, 0xf> AUTOCR_TRIGSEL; // TRIGSEL
    static constexpr uint32_t AUTOCR_TRIGEN = 0x20000; // TRIGEN
    static constexpr uint32_t AUTOCR_TRIGPOL = 0x10000; // TRIPOL
    typedef bit_field_t<0, 0xffff> AUTOCR_TDN; // TDN
};

template<>
struct peripheral_t<STM32U5xx, SEC_UART4>
{
    static constexpr periph_t P = SEC_UART4;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_UART5>
{
    static constexpr periph_t P = SEC_UART5;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_USART1>
{
    static constexpr periph_t P = SEC_USART1;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_USART2>
{
    static constexpr periph_t P = SEC_USART2;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_USART3>
{
    static constexpr periph_t P = SEC_USART3;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32u5xx_usart1_t;
    static T& V;
};

using sec_uart4_t = peripheral_t<svd, SEC_UART4>;
using sec_uart5_t = peripheral_t<svd, SEC_UART5>;
using sec_usart1_t = peripheral_t<svd, SEC_USART1>;
using sec_usart2_t = peripheral_t<svd, SEC_USART2>;
using sec_usart3_t = peripheral_t<svd, SEC_USART3>;
using uart4_t = peripheral_t<svd, UART4>;
using uart5_t = peripheral_t<svd, UART5>;
using usart1_t = peripheral_t<svd, USART1>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;

template<int INST> struct usart_traits {};

template<> struct usart_traits<4>
{
    using usart = uart4_t;
    static constexpr signal_t CTS = UART4_CTS;
    static constexpr signal_t DE = UART4_DE;
    static constexpr signal_t RTS = UART4_RTS;
    static constexpr signal_t RX = UART4_RX;
    static constexpr signal_t TX = UART4_TX;
};

template<> struct usart_traits<5>
{
    using usart = uart5_t;
    static constexpr signal_t CTS = UART5_CTS;
    static constexpr signal_t DE = UART5_DE;
    static constexpr signal_t RTS = UART5_RTS;
    static constexpr signal_t RX = UART5_RX;
    static constexpr signal_t TX = UART5_TX;
};

template<> struct usart_traits<1>
{
    using usart = usart1_t;
    static constexpr signal_t CK = USART1_CK;
    static constexpr signal_t CTS = USART1_CTS;
    static constexpr signal_t DE = USART1_DE;
    static constexpr signal_t RTS = USART1_RTS;
    static constexpr signal_t RX = USART1_RX;
    static constexpr signal_t TX = USART1_TX;
};

template<> struct usart_traits<2>
{
    using usart = usart2_t;
    static constexpr signal_t CK = USART2_CK;
    static constexpr signal_t CTS = USART2_CTS;
    static constexpr signal_t DE = USART2_DE;
    static constexpr signal_t RTS = USART2_RTS;
    static constexpr signal_t RX = USART2_RX;
    static constexpr signal_t TX = USART2_TX;
};

template<> struct usart_traits<3>
{
    using usart = usart3_t;
    static constexpr signal_t CK = USART3_CK;
    static constexpr signal_t CTS = USART3_CTS;
    static constexpr signal_t DE = USART3_DE;
    static constexpr signal_t RTS = USART3_RTS;
    static constexpr signal_t RX = USART3_RX;
    static constexpr signal_t TX = USART3_TX;
};
