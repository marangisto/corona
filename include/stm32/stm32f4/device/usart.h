#pragma once

////
//
//      STM32F4 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32f401_usart1_t
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
struct peripheral_t<STM32F401, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART10>
{
    static constexpr periph_t P = UART10;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, UART9>
{
    static constexpr periph_t P = UART9;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32f401_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32f401_usart1_t;
    static T& V;
};

using uart10_t = peripheral_t<svd, UART10>;
using uart4_t = peripheral_t<svd, UART4>;
using uart5_t = peripheral_t<svd, UART5>;
using uart7_t = peripheral_t<svd, UART7>;
using uart8_t = peripheral_t<svd, UART8>;
using uart9_t = peripheral_t<svd, UART9>;
using usart1_t = peripheral_t<svd, USART1>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;
using usart6_t = peripheral_t<svd, USART6>;

template<int INST> struct usart_traits {};

template<> struct usart_traits<10>
{
    using usart = uart10_t;
    static constexpr signal_t RX = UART10_RX;
    static constexpr signal_t TX = UART10_TX;
};

template<> struct usart_traits<4>
{
    using usart = uart4_t;
    static constexpr signal_t CTS = UART4_CTS;
    static constexpr signal_t RTS = UART4_RTS;
    static constexpr signal_t RX = UART4_RX;
    static constexpr signal_t TX = UART4_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct usart_traits<5>
{
    using usart = uart5_t;
    static constexpr signal_t CTS = UART5_CTS;
    static constexpr signal_t RTS = UART5_RTS;
    static constexpr signal_t RX = UART5_RX;
    static constexpr signal_t TX = UART5_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART5EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct usart_traits<7>
{
    using usart = uart7_t;
    static constexpr signal_t RX = UART7_RX;
    static constexpr signal_t TX = UART7_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART7EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_UART7EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART7RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct usart_traits<8>
{
    using usart = uart8_t;
    static constexpr signal_t RX = UART8_RX;
    static constexpr signal_t TX = UART8_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_UART8EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_UART8EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_UART8RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct usart_traits<9>
{
    using usart = uart9_t;
    static constexpr signal_t RX = UART9_RX;
    static constexpr signal_t TX = UART9_TX;
};

template<> struct usart_traits<1>
{
    using usart = usart1_t;
    static constexpr signal_t CK = USART1_CK;
    static constexpr signal_t CTS = USART1_CTS;
    static constexpr signal_t RTS = USART1_RTS;
    static constexpr signal_t RX = USART1_RX;
    static constexpr signal_t TX = USART1_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_USART1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART2EN;
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct usart_traits<6>
{
    using usart = usart6_t;
    static constexpr signal_t CK = USART6_CK;
    static constexpr signal_t CTS = USART6_CTS;
    static constexpr signal_t RTS = USART6_RTS;
    static constexpr signal_t RX = USART6_RX;
    static constexpr signal_t TX = USART6_TX;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_USART6EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_USART6EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_USART6RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
