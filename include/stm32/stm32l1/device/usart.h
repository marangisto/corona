#pragma once

////
//
//      STM32L1 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32l100_usart1_t
{
    volatile uint32_t SR; // Status register
    volatile uint32_t DR; // Data register
    volatile uint32_t BRR; // Baud rate register
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t GTPR; // Guard time and prescaler register

    static constexpr uint32_t SR_RESET_VALUE = 0xc00000; // Reset value
    static constexpr uint32_t SR_CTS = 0x200; // CTS flag
    static constexpr uint32_t SR_LBD = 0x100; // LIN break detection flag
    static constexpr uint32_t SR_TXE = 0x80; // Transmit data register empty
    static constexpr uint32_t SR_TC = 0x40; // Transmission complete
    static constexpr uint32_t SR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE line detected
    static constexpr uint32_t SR_ORE = 0x8; // Overrun error
    static constexpr uint32_t SR_NF = 0x4; // Noise detected flag
    static constexpr uint32_t SR_FE = 0x2; // Framing error
    static constexpr uint32_t SR_PE = 0x1; // Parity error

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> DR_DR; // Data value

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> BRR_DIV_MANTISSA; // mantissa of USARTDIV
    typedef bit_field_t<0, 0xf> BRR_DIV_FRACTION; // fraction of USARTDIV

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_UE = 0x2000; // USART enable
    static constexpr uint32_t CR1_M = 0x1000; // Word length
    static constexpr uint32_t CR1_WAKE = 0x800; // Wakeup method
    static constexpr uint32_t CR1_PCE = 0x400; // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200; // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100; // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80; // TXE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20; // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8; // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4; // Receiver enable
    static constexpr uint32_t CR1_RWU = 0x2; // Receiver wakeup
    static constexpr uint32_t CR1_SBK = 0x1; // Send break

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_CLKEN = 0x800; // Clock enable
    static constexpr uint32_t CR2_CPOL = 0x400; // Clock polarity
    static constexpr uint32_t CR2_CPHA = 0x200; // Clock phase
    static constexpr uint32_t CR2_LBCL = 0x100; // Last bit clock pulse
    static constexpr uint32_t CR2_LBDIE = 0x40; // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20; // lin break detection length
    typedef bit_field_t<0, 0xf> CR2_ADD; // Address of the USART node

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
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

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> GTPR_GT; // Guard time value
    typedef bit_field_t<0, 0xff> GTPR_PSC; // Prescaler value
};

template<>
struct peripheral_t<STM32L100, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32l100_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32l100_usart1_t;
    static T& V;
};

using usart1_t = peripheral_t<svd, USART1>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;
using usart4_t = peripheral_t<svd, USART4>;
using usart5_t = peripheral_t<svd, USART5>;

template<int INST> struct usart_traits {};

template<> struct usart_traits<1>
{
    using usart = usart1_t;
    static constexpr signal_t CK = USART1_CK;
    static constexpr signal_t CTS = USART1_CTS;
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

template<> struct usart_traits<4>
{
    using usart = usart4_t;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART4EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART4EN;
    }
};

template<> struct usart_traits<5>
{
    using usart = usart5_t;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART5EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART5EN;
    }
};
