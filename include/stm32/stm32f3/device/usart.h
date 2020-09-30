#pragma once

////
//
//      STM32F3 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32f301_usart1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    volatile uint32_t GTPR; // Guard time and prescaler register
    volatile uint32_t RTOR; // Receiver timeout register
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR; // Interrupt &amp; status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_EOBIE = 0x8000000; // End of Block interrupt enable
    static constexpr uint32_t CR1_RTOIE = 0x4000000; // Receiver timeout interrupt enable
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // Driver Enable assertion time
    typedef bit_field_t<16, 0x1f> CR1_DEDT; // Driver Enable deassertion time
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_M = 0x1000; // Word length
    static constexpr uint32_t CR1_WAKE = 0x800; // Receiver wakeup method
    static constexpr uint32_t CR1_PCE = 0x400; // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200; // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100; // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80; // interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20; // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8; // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4; // Receiver enable
    static constexpr uint32_t CR1_UESM = 0x2; // USART enable in Stop mode
    static constexpr uint32_t CR1_UE = 0x1; // USART enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> CR2_ADD4; // Address of the USART node
    typedef bit_field_t<24, 0xf> CR2_ADD0; // Address of the USART node
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

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_WUFIE = 0x400000; // Wakeup from Stop mode interrupt enable
    typedef bit_field_t<20, 0x3> CR3_WUS; // Wakeup from Stop mode interrupt flag selection
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
    static constexpr uint32_t CR3_IRLP = 0x4; // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2; // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> BRR_DIV_MANTISSA; // mantissa of USARTDIV
    typedef bit_field_t<0, 0xf> BRR_DIV_FRACTION; // fraction of USARTDIV

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

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0; // Reset value
    static constexpr uint32_t ISR_REACK = 0x400000; // Receive enable acknowledge flag
    static constexpr uint32_t ISR_TEACK = 0x200000; // Transmit enable acknowledge flag
    static constexpr uint32_t ISR_WUF = 0x100000; // Wakeup from Stop mode flag
    static constexpr uint32_t ISR_RWU = 0x80000; // Receiver wakeup from Mute mode
    static constexpr uint32_t ISR_SBKF = 0x40000; // Send break flag
    static constexpr uint32_t ISR_CMF = 0x20000; // character match flag
    static constexpr uint32_t ISR_BUSY = 0x10000; // Busy flag
    static constexpr uint32_t ISR_ABRF = 0x8000; // Auto baud rate flag
    static constexpr uint32_t ISR_ABRE = 0x4000; // Auto baud rate error
    static constexpr uint32_t ISR_EOBF = 0x1000; // End of block flag
    static constexpr uint32_t ISR_RTOF = 0x800; // Receiver timeout
    static constexpr uint32_t ISR_CTS = 0x400; // CTS flag
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTS interrupt flag
    static constexpr uint32_t ISR_LBDF = 0x100; // LIN break detection flag
    static constexpr uint32_t ISR_TXE = 0x80; // Transmit data register empty
    static constexpr uint32_t ISR_TC = 0x40; // Transmission complete
    static constexpr uint32_t ISR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t ISR_IDLE = 0x10; // Idle line detected
    static constexpr uint32_t ISR_ORE = 0x8; // Overrun error
    static constexpr uint32_t ISR_NF = 0x4; // Noise detected flag
    static constexpr uint32_t ISR_FE = 0x2; // Framing error
    static constexpr uint32_t ISR_PE = 0x1; // Parity error

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_EOBCF = 0x1000; // End of timeout clear flag
    static constexpr uint32_t ICR_RTOCF = 0x800; // Receiver timeout clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
    static constexpr uint32_t ICR_LBDCF = 0x100; // LIN break detection clear flag
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag
    static constexpr uint32_t ICR_NCF = 0x4; // Noise detected clear flag
    static constexpr uint32_t ICR_FECF = 0x2; // Framing error clear flag
    static constexpr uint32_t ICR_PECF = 0x1; // Parity error clear flag

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RDR_RDR; // Receive data value

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> TDR_TDR; // Transmit data value
};

template<>
struct peripheral_t<STM32F301, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F301, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F301, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f301_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f301_usart1_t;
    static T& V;
};

using uart4_t = peripheral_t<svd, UART4>;
using uart5_t = peripheral_t<svd, UART5>;
using usart1_t = peripheral_t<svd, USART1>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;

template<int INST> struct usart_traits {};

template<> struct usart_traits<4>
{
    using usart = uart4_t;
    static constexpr signal_t RX = UART4_RX;
    static constexpr signal_t TX = UART4_TX;

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST;
    }
};

template<> struct usart_traits<5>
{
    using usart = uart5_t;
    static constexpr signal_t RX = UART5_RX;
    static constexpr signal_t TX = UART5_TX;

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST;
    }
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
    static constexpr clock_source_t CS = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_USART1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_USART1RST;
    }
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
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USART2RST;
    }
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
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USART3RST;
    }
};
