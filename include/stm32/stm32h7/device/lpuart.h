#pragma once

////
//
//      STM32H7 LPUART peripherals
//
////

////
//
//      LPUART1
//
////

struct stm32h742x_lpuart1_t
{
    volatile uint32_t CR1;   // [read-write] Control register 1
    volatile uint32_t CR2;   // [read-write] Control register 2
    volatile uint32_t CR3;   // [read-write] Control register 3
    volatile uint32_t BRR;   // [read-write] Baud rate register
    volatile uint32_t GTPR;  // [read-write] Guard time and prescaler register
    volatile uint32_t RTOR;  // [read-write] Receiver timeout register
    volatile uint32_t RQR;   // [write-only] Request register
    volatile uint32_t ISR;   // [read-only] Interrupt & status register
    volatile uint32_t ICR;   // [write-only] Interrupt flag clear register
    volatile uint32_t RDR;   // [read-only] Receive data register
    volatile uint32_t TDR;   // [read-write] Transmit data register
    volatile uint32_t PRESC; // [read-write] Prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000;     // Word length
    template<uint32_t X>
    static constexpr uint32_t CR1_DEAT =               // Driver Enable assertion time
        bit_field_t<21, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR1_DEDT =               // Driver Enable deassertion time
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t CR1_CMIE = 0x4000;       // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000;        // Mute mode enable
    static constexpr uint32_t CR1_M0 = 0x1000;         // Word length
    static constexpr uint32_t CR1_WAKE = 0x800;        // Receiver wakeup method
    static constexpr uint32_t CR1_PCE = 0x400;         // Parity control enable
    static constexpr uint32_t CR1_PS = 0x200;          // Parity selection
    static constexpr uint32_t CR1_PEIE = 0x100;        // PE interrupt enable
    static constexpr uint32_t CR1_TXEIE = 0x80;        // interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;         // Transmission complete interrupt enable
    static constexpr uint32_t CR1_RXNEIE = 0x20;       // RXNE interrupt enable
    static constexpr uint32_t CR1_IDLEIE = 0x10;       // IDLE interrupt enable
    static constexpr uint32_t CR1_TE = 0x8;            // Transmitter enable
    static constexpr uint32_t CR1_RE = 0x4;            // Receiver enable
    static constexpr uint32_t CR1_UESM = 0x2;          // USART enable in Stop mode
    static constexpr uint32_t CR1_UE = 0x1;            // USART enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR2_ADD =               // Address of the USART node
        bit_field_t<24, 0xff>::value<X>();
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_DATAINV = 0x40000;  // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000;    // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000;    // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000;      // Swap TX/RX pins
    template<uint32_t X>
    static constexpr uint32_t CR2_STOP =              // STOP bits
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CR2_ADDM7 = 0x10;       // 7-bit Address Detection/4-bit Address Detection

    static constexpr uint32_t CR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR3_TXFTCFG =            // TXFIFO threshold configuration
        bit_field_t<29, 0x7>::value<X>();
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR3_RXFTCFG =            // Receive FIFO threshold configuration
        bit_field_t<25, 0x7>::value<X>();
    static constexpr uint32_t CR3_TXFTIE = 0x800000;   // TXFIFO threshold interrupt enable
    static constexpr uint32_t CR3_WUFIE = 0x400000;    // Wakeup from Stop mode interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR3_WUS =                // Wakeup from Stop mode interrupt flag selection
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t CR3_DEP = 0x8000;        // Driver enable polarity selection
    static constexpr uint32_t CR3_DEM = 0x4000;        // Driver enable mode
    static constexpr uint32_t CR3_DDRE = 0x2000;       // DMA Disable on Reception Error
    static constexpr uint32_t CR3_OVRDIS = 0x1000;     // Overrun Disable
    static constexpr uint32_t CR3_CTSIE = 0x400;       // CTS interrupt enable
    static constexpr uint32_t CR3_CTSE = 0x200;        // CTS enable
    static constexpr uint32_t CR3_RTSE = 0x100;        // RTS enable
    static constexpr uint32_t CR3_DMAT = 0x80;         // DMA enable transmitter
    static constexpr uint32_t CR3_DMAR = 0x40;         // DMA enable receiver
    static constexpr uint32_t CR3_HDSEL = 0x8;         // Half-duplex selection
    static constexpr uint32_t CR3_EIE = 0x1;           // Error interrupt enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BRR_BRR =   // BRR
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GTPR_GT =    // Guard time value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GTPR_PSC =   // Prescaler value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RTOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTOR_BLEN =   // Block Length
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTOR_RTO =    // Receiver timeout value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t RQR_RESET_VALUE = 0x0;
    static constexpr uint32_t RQR_TXFRQ = 0x10; // Transmit data flush request
    static constexpr uint32_t RQR_RXFRQ = 0x8;  // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4;   // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2;  // Send break request
    static constexpr uint32_t RQR_ABRRQ = 0x1;  // Auto baud rate request

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0;
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_TXFE = 0x800000;  // TXFIFO Empty
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000;   // WUF
    static constexpr uint32_t ISR_RWU = 0x80000;    // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000;   // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000;    // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000;   // BUSY
    static constexpr uint32_t ISR_CTS = 0x400;      // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200;    // CTSIF
    static constexpr uint32_t ISR_TXE = 0x80;       // TXE
    static constexpr uint32_t ISR_TC = 0x40;        // TC
    static constexpr uint32_t ISR_RXNE = 0x20;      // RXNE
    static constexpr uint32_t ISR_IDLE = 0x10;      // IDLE
    static constexpr uint32_t ISR_ORE = 0x8;        // ORE
    static constexpr uint32_t ISR_NE = 0x4;         // NE
    static constexpr uint32_t ISR_FE = 0x2;         // FE
    static constexpr uint32_t ISR_PE = 0x1;         // PE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
    static constexpr uint32_t ICR_CMCF = 0x20000;  // Character match clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200;   // CTS clear flag
    static constexpr uint32_t ICR_TCCF = 0x40;     // Transmission complete clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10;   // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8;     // Overrun error clear flag
    static constexpr uint32_t ICR_NCF = 0x4;       // Noise detected clear flag
    static constexpr uint32_t ICR_FECF = 0x2;      // Framing error clear flag
    static constexpr uint32_t ICR_PECF = 0x1;      // Parity error clear flag

    static constexpr uint32_t RDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RDR_RDR =   // Receive data value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t TDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TDR_TDR =   // Transmit data value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRESC_PRESCALER =   // Clock prescaler
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, LPUART1>
{
    typedef stm32h742x_lpuart1_t T;
    static T& V;
};

using lpuart1_t = peripheral_t<mcu_svd, LPUART1>;

template<int INST> struct lpuart_traits {};

template<> struct lpuart_traits<1>
{
    using lpuart = lpuart1_t;
    static constexpr alternate_function_t CTS = LPUART1_CTS;
    static constexpr alternate_function_t DE = LPUART1_DE;
    static constexpr alternate_function_t RTS = LPUART1_RTS;
    static constexpr alternate_function_t RX = LPUART1_RX;
    static constexpr alternate_function_t TX = LPUART1_TX;
};

