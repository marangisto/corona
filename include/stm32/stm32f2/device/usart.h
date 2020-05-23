#pragma once

////
//
//      STM32F2 USART peripherals
//
////

////
//
//      Universal synchronous asynchronous receiver transmitter
//
////

struct stm32f215_uart4_t
{
    volatile uint32_t SR;  // Status register
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t BRR; // [read-write] Baud rate register
    volatile uint32_t CR1; // [read-write] Control register 1
    volatile uint32_t CR2; // [read-write] Control register 2
    volatile uint32_t CR3; // [read-write] Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0xc0;
    static constexpr uint32_t SR_LBD = 0x100; // LIN break detection flag
    static constexpr uint32_t SR_TXE = 0x80;  // Transmit data register empty
    static constexpr uint32_t SR_TC = 0x40;   // Transmission complete
    static constexpr uint32_t SR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE line detected
    static constexpr uint32_t SR_ORE = 0x8;   // Overrun error
    static constexpr uint32_t SR_NF = 0x4;    // Noise detected flag
    static constexpr uint32_t SR_FE = 0x2;    // Framing error
    static constexpr uint32_t SR_PE = 0x1;    // Parity error

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // Data value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Mantissa =   // mantissa of USARTDIV
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Fraction =   // fraction of USARTDIV
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_UE = 0x2000;    // USART enable
    static constexpr uint32_t CR1_M = 0x1000;     // Word length
    static constexpr uint32_t CR1_WAKE = 0x800;   // Wakeup method
    static constexpr uint32_t CR1_PCE = 0x400;    // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200;     // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100;   // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;   // TXE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;    // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20;  // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10;  // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8;       // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4;       // Receiver enable
    static constexpr uint32_t CR1_RWU = 0x2;      // Receiver wakeup
    static constexpr uint32_t CR1_SBK = 0x1;      // Send break

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =          // STOP bits
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_LBDIE = 0x40;   // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20;    // lin break detection length
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =           // Address of the USART node
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_DMAT = 0x80;    // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40;    // DMA enable receiver
    static constexpr uint32_t CR3_HDSEL = 0x8;    // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4;     // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2;     // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1;      // Error interrupt enable
};


////
//
//      Universal synchronous asynchronous receiver transmitter
//
////

struct stm32f215_uart5_t
{
    volatile uint32_t SR;  // Status register
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t BRR; // [read-write] Baud rate register
    volatile uint32_t CR1; // [read-write] Control register 1
    volatile uint32_t CR2; // [read-write] Control register 2
    volatile uint32_t CR3; // [read-write] Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0xc0;
    static constexpr uint32_t SR_LBD = 0x100; // LIN break detection flag
    static constexpr uint32_t SR_TXE = 0x80;  // Transmit data register empty
    static constexpr uint32_t SR_TC = 0x40;   // Transmission complete
    static constexpr uint32_t SR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE line detected
    static constexpr uint32_t SR_ORE = 0x8;   // Overrun error
    static constexpr uint32_t SR_NF = 0x4;    // Noise detected flag
    static constexpr uint32_t SR_FE = 0x2;    // Framing error
    static constexpr uint32_t SR_PE = 0x1;    // Parity error

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // Data value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Mantissa =   // mantissa of USARTDIV
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Fraction =   // fraction of USARTDIV
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_UE = 0x2000;    // USART enable
    static constexpr uint32_t CR1_M = 0x1000;     // Word length
    static constexpr uint32_t CR1_WAKE = 0x800;   // Wakeup method
    static constexpr uint32_t CR1_PCE = 0x400;    // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200;     // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100;   // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;   // TXE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;    // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20;  // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10;  // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8;       // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4;       // Receiver enable
    static constexpr uint32_t CR1_RWU = 0x2;      // Receiver wakeup
    static constexpr uint32_t CR1_SBK = 0x1;      // Send break

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =          // STOP bits
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_LBDIE = 0x40;   // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20;    // lin break detection length
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =           // Address of the USART node
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_HDSEL = 0x8;    // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4;     // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2;     // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1;      // Error interrupt enable
};


////
//
//      Universal synchronous asynchronous receiver transmitter
//
////

struct stm32f215_usart6_t
{
    volatile uint32_t SR;   // Status register
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t BRR;  // [read-write] Baud rate register
    volatile uint32_t CR1;  // [read-write] Control register 1
    volatile uint32_t CR2;  // [read-write] Control register 2
    volatile uint32_t CR3;  // [read-write] Control register 3
    volatile uint32_t GTPR; // [read-write] Guard time and prescaler register

    static constexpr uint32_t SR_RESET_VALUE = 0xc0;
    static constexpr uint32_t SR_CTS = 0x200; // CTS flag
    static constexpr uint32_t SR_LBD = 0x100; // LIN break detection flag
    static constexpr uint32_t SR_TXE = 0x80;  // Transmit data register empty
    static constexpr uint32_t SR_TC = 0x40;   // Transmission complete
    static constexpr uint32_t SR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE line detected
    static constexpr uint32_t SR_ORE = 0x8;   // Overrun error
    static constexpr uint32_t SR_NF = 0x4;    // Noise detected flag
    static constexpr uint32_t SR_FE = 0x2;    // Framing error
    static constexpr uint32_t SR_PE = 0x1;    // Parity error

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // Data value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Mantissa =   // mantissa of USARTDIV
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Fraction =   // fraction of USARTDIV
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
    static constexpr uint32_t CR1_UE = 0x2000;    // USART enable
    static constexpr uint32_t CR1_M = 0x1000;     // Word length
    static constexpr uint32_t CR1_WAKE = 0x800;   // Wakeup method
    static constexpr uint32_t CR1_PCE = 0x400;    // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200;     // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100;   // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;   // TXE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;    // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20;  // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10;  // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8;       // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4;       // Receiver enable
    static constexpr uint32_t CR1_RWU = 0x2;      // Receiver wakeup
    static constexpr uint32_t CR1_SBK = 0x1;      // Send break

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =          // STOP bits
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_CLKEN = 0x800;  // Clock enable
    static constexpr uint32_t CR2_CPOL = 0x400;   // Clock polarity
    static constexpr uint32_t CR2_CPHA = 0x200;   // Clock phase
    static constexpr uint32_t CR2_LBCL = 0x100;   // Last bit clock pulse
    static constexpr uint32_t CR2_LBDIE = 0x40;   // LIN break detection interrupt enable
    static constexpr uint32_t CR2_LBDL = 0x20;    // lin break detection length
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =           // Address of the USART node
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable
    static constexpr uint32_t CR3_CTSIE = 0x400;  // CTS interrupt enable
    static constexpr uint32_t CR3_CTSE = 0x200;   // CTS enable
    static constexpr uint32_t CR3_RTSE = 0x100;   // RTS enable
    static constexpr uint32_t CR3_DMAT = 0x80;    // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40;    // DMA enable receiver
    static constexpr uint32_t CR3_SCEN = 0x20;    // Smartcard mode enable
    static constexpr uint32_t CR3_NACK = 0x10;    // Smartcard NACK enable
    static constexpr uint32_t CR3_HDSEL = 0x8;    // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4;     // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2;     // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1;      // Error interrupt enable

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GTPR_GT =    // Guard time value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GTPR_PSC =   // Prescaler value
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F215, USART6>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, USART1>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, USART2>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, USART3>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, USART6>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, USART1>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, USART2>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, USART3>
{
    typedef stm32f215_usart6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, UART4>
{
    typedef stm32f215_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, UART4>
{
    typedef stm32f215_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, UART5>
{
    typedef stm32f215_uart5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, UART5>
{
    typedef stm32f215_uart5_t T;
    static T& V;
};

using uart4_t = peripheral_t<mcu_svd, UART4>;
using uart5_t = peripheral_t<mcu_svd, UART5>;
using usart1_t = peripheral_t<mcu_svd, USART1>;
using usart2_t = peripheral_t<mcu_svd, USART2>;
using usart3_t = peripheral_t<mcu_svd, USART3>;
using usart6_t = peripheral_t<mcu_svd, USART6>;

template<int INST> struct uart_traits {};

template<> struct uart_traits<4>
{
    using uart = uart4_t;
    static constexpr alternate_function_t RX = UART4_RX;
    static constexpr alternate_function_t TX = UART4_TX;
};

template<> struct uart_traits<5>
{
    using uart = uart5_t;
    static constexpr alternate_function_t RX = UART5_RX;
    static constexpr alternate_function_t TX = UART5_TX;
};

template<int INST> struct usart_traits {};

template<> struct usart_traits<1>
{
    using usart = usart1_t;
    static constexpr alternate_function_t CK = USART1_CK;
    static constexpr alternate_function_t CTS = USART1_CTS;
    static constexpr alternate_function_t RTS = USART1_RTS;
    static constexpr alternate_function_t RX = USART1_RX;
    static constexpr alternate_function_t TX = USART1_TX;
};

template<> struct usart_traits<2>
{
    using usart = usart2_t;
    static constexpr alternate_function_t CK = USART2_CK;
    static constexpr alternate_function_t CTS = USART2_CTS;
    static constexpr alternate_function_t RTS = USART2_RTS;
    static constexpr alternate_function_t RX = USART2_RX;
    static constexpr alternate_function_t TX = USART2_TX;
};

template<> struct usart_traits<3>
{
    using usart = usart3_t;
    static constexpr alternate_function_t CK = USART3_CK;
    static constexpr alternate_function_t CTS = USART3_CTS;
    static constexpr alternate_function_t RTS = USART3_RTS;
    static constexpr alternate_function_t RX = USART3_RX;
    static constexpr alternate_function_t TX = USART3_TX;
};

template<> struct usart_traits<6>
{
    using usart = usart6_t;
    static constexpr alternate_function_t CK = USART6_CK;
    static constexpr alternate_function_t CTS = USART6_CTS;
    static constexpr alternate_function_t RTS = USART6_RTS;
    static constexpr alternate_function_t RX = USART6_RX;
    static constexpr alternate_function_t TX = USART6_TX;
};

