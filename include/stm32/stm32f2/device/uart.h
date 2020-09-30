#pragma once

////
//
//      STM32F2 UART peripherals
//
///

// UART4: Universal synchronous asynchronous receiver transmitter

struct stm32f215_uart4_t
{
    volatile uint32_t SR; // Status register
    volatile uint32_t DR; // Data register
    volatile uint32_t BRR; // Baud rate register
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0xc0; // Reset value
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
    static constexpr uint32_t CR2_LBDIE = 0x40; // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20; // lin break detection length
    typedef bit_field_t<0, 0xf> CR2_ADD; // Address of the USART node

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40; // DMA enable receiver
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4; // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2; // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable
};

// UART5: Universal synchronous asynchronous receiver transmitter

struct stm32f215_uart5_t
{
    volatile uint32_t SR; // Status register
    volatile uint32_t DR; // Data register
    volatile uint32_t BRR; // Baud rate register
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0xc0; // Reset value
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
    static constexpr uint32_t CR2_LBDIE = 0x40; // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20; // lin break detection length
    typedef bit_field_t<0, 0xf> CR2_ADD; // Address of the USART node

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4; // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2; // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable
};

template<>
struct peripheral_t<STM32F215, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f215_uart4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f215_uart4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f215_uart5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f215_uart5_t;
    static T& V;
};

using uart4_t = peripheral_t<svd, UART4>;
using uart5_t = peripheral_t<svd, UART5>;

template<int INST> struct uart_traits {};

template<> struct uart_traits<4>
{
    using uart = uart4_t;
    static constexpr signal_t RX = UART4_RX;
    static constexpr signal_t TX = UART4_TX;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART4EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_UART4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART4RST;
    }
};

template<> struct uart_traits<5>
{
    using uart = uart5_t;
    static constexpr signal_t RX = UART5_RX;
    static constexpr signal_t TX = UART5_TX;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART5EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_UART5EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART5RST;
    }
};
