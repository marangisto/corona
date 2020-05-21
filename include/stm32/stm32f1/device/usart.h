#pragma once

////
//
//      STM32F1 USART peripherals
//
////

////
//
//      Universal asynchronous receiver transmitter
//
////

struct stm32f100_uart4_t
{
    volatile uint32_t SR;  // Status register
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t BRR; // [read-write] Baud rate register
    volatile uint32_t CR1; // [read-write] Control register 1
    volatile uint32_t CR2; // [read-write] Control register 2
    volatile uint32_t CR3; // [read-write] Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_PE = 0x1;    // Parity error
    static constexpr uint32_t SR_FE = 0x2;    // Framing error
    static constexpr uint32_t SR_NE = 0x4;    // Noise error flag
    static constexpr uint32_t SR_ORE = 0x8;   // Overrun error
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE line detected
    static constexpr uint32_t SR_RXNE = 0x20; // Read data register not empty
    static constexpr uint32_t SR_TC = 0x40;   // Transmission complete
    static constexpr uint32_t SR_TXE = 0x80;  // Transmit data register empty
    static constexpr uint32_t SR_LBD = 0x100; // LIN break detection flag

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // DR
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Fraction =   // DIV_Fraction
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Mantissa =   // DIV_Mantissa
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_SBK = 0x1;     // Send break
    static constexpr uint32_t CR1_RWU = 0x2;     // Receiver wakeup
    static constexpr uint32_t CR1_RE = 0x4;      // Receiver enable
    static constexpr uint32_t CR1_TE = 0x8;      // Transmitter enable
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20; // RXNE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;   // Transmission complete interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;  // TXE interrupt enable
    static constexpr uint32_t CR1_PEIE = 0x100;  // PE interrupt enable
    static constexpr uint32_t CR1_PS = 0x200;    // Parity selection
    static constexpr uint32_t CR1_PCE = 0x400;   // Parity control enable
    static constexpr uint32_t CR1_WAKE = 0x800;  // Wakeup method
    static constexpr uint32_t CR1_M = 0x1000;    // Word length
    static constexpr uint32_t CR1_UE = 0x2000;   // USART enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =           // Address of the USART node
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t CR2_LBDL = 0x20;    // lin break detection length
    static constexpr uint32_t CR2_LBDIE = 0x40;   // LIN break detection interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =          // STOP bits
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_EIE = 0x1;   // Error interrupt enable
    static constexpr uint32_t CR3_IREN = 0x2;  // IrDA mode enable
    static constexpr uint32_t CR3_IRLP = 0x4;  // IrDA low-power
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_DMAR = 0x40; // DMA enable receiver
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter
};


////
//
//      Universal asynchronous receiver transmitter
//
////

struct stm32f100_uart5_t
{
    volatile uint32_t SR;  // Status register
    volatile uint32_t DR;  // [read-write] Data register
    volatile uint32_t BRR; // [read-write] Baud rate register
    volatile uint32_t CR1; // [read-write] Control register 1
    volatile uint32_t CR2; // [read-write] Control register 2
    volatile uint32_t CR3; // [read-write] Control register 3

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_PE = 0x1;    // PE
    static constexpr uint32_t SR_FE = 0x2;    // FE
    static constexpr uint32_t SR_NE = 0x4;    // NE
    static constexpr uint32_t SR_ORE = 0x8;   // ORE
    static constexpr uint32_t SR_IDLE = 0x10; // IDLE
    static constexpr uint32_t SR_RXNE = 0x20; // RXNE
    static constexpr uint32_t SR_TC = 0x40;   // TC
    static constexpr uint32_t SR_TXE = 0x80;  // TXE
    static constexpr uint32_t SR_LBD = 0x100; // LBD

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // DR
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Fraction =   // DIV_Fraction
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BRR_DIV_Mantissa =   // DIV_Mantissa
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_SBK = 0x1;     // SBK
    static constexpr uint32_t CR1_RWU = 0x2;     // RWU
    static constexpr uint32_t CR1_RE = 0x4;      // RE
    static constexpr uint32_t CR1_TE = 0x8;      // TE
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLEIE
    static constexpr uint32_t CR1_RXNEIE = 0x20; // RXNEIE
    static constexpr uint32_t CR1_TCIE = 0x40;   // TCIE
    static constexpr uint32_t CR1_TXEIE = 0x80;  // TXEIE
    static constexpr uint32_t CR1_PEIE = 0x100;  // PEIE
    static constexpr uint32_t CR1_PS = 0x200;    // PS
    static constexpr uint32_t CR1_PCE = 0x400;   // PCE
    static constexpr uint32_t CR1_WAKE = 0x800;  // WAKE
    static constexpr uint32_t CR1_M = 0x1000;    // M
    static constexpr uint32_t CR1_UE = 0x2000;   // UE

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =           // ADD
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t CR2_LBDL = 0x20;    // LBDL
    static constexpr uint32_t CR2_LBDIE = 0x40;   // LBDIE
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =          // STOP
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_LINEN = 0x4000; // LINEN

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CR3_EIE = 0x1;   // Error interrupt enable
    static constexpr uint32_t CR3_IREN = 0x2;  // IrDA mode enable
    static constexpr uint32_t CR3_IRLP = 0x4;  // IrDA low-power
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter
};


////
//
//      Universal synchronous asynchronous receiver transmitter
//
////

struct stm32f100_usart1_t
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
    static constexpr uint32_t SR_NE = 0x4;    // Noise error flag
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
    static constexpr uint32_t CR1_UE = 0x2000;   // USART enable
    static constexpr uint32_t CR1_M = 0x1000;    // Word length
    static constexpr uint32_t CR1_WAKE = 0x800;  // Wakeup method
    static constexpr uint32_t CR1_PCE = 0x400;   // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200;    // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100;  // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;  // TXE interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;   // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20; // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8;      // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4;      // Receiver enable
    static constexpr uint32_t CR1_RWU = 0x2;     // Receiver wakeup
    static constexpr uint32_t CR1_SBK = 0x1;     // Send break

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
    static constexpr uint32_t CR3_CTSIE = 0x400; // CTS interrupt enable
    static constexpr uint32_t CR3_CTSE = 0x200;  // CTS enable
    static constexpr uint32_t CR3_RTSE = 0x100;  // RTS enable
    static constexpr uint32_t CR3_DMAT = 0x80;   // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40;   // DMA enable receiver
    static constexpr uint32_t CR3_SCEN = 0x20;   // Smartcard mode enable
    static constexpr uint32_t CR3_NACK = 0x10;   // Smartcard NACK enable
    static constexpr uint32_t CR3_HDSEL = 0x8;   // Half-duplex selection
    static constexpr uint32_t CR3_IRLP = 0x4;    // IrDA low-power
    static constexpr uint32_t CR3_IREN = 0x2;    // IrDA mode enable
    static constexpr uint32_t CR3_EIE = 0x1;     // Error interrupt enable

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GTPR_GT =    // Guard time value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GTPR_PSC =   // Prescaler value
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F100, USART1>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, USART2>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, USART3>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, USART1>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, USART2>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, USART3>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, USART1>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, USART2>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, USART1>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, USART2>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, USART3>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, USART1>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, USART2>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, USART3>
{
    typedef stm32f100_usart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, UART4>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, UART4>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, UART5>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, UART4>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, UART4>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, UART4>
{
    typedef stm32f100_uart4_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F100, UART5>
{
    typedef stm32f100_uart5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, UART5>
{
    typedef stm32f100_uart5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, UART5>
{
    typedef stm32f100_uart5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, UART5>
{
    typedef stm32f100_uart5_t T;
    static T& V;
};

using uart4_t = peripheral_t<mcu_svd, UART4>;
using uart5_t = peripheral_t<mcu_svd, UART5>;
using usart1_t = peripheral_t<mcu_svd, USART1>;
using usart2_t = peripheral_t<mcu_svd, USART2>;
using usart3_t = peripheral_t<mcu_svd, USART3>;

