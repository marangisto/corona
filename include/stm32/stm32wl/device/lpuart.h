#pragma once

////
//
//      STM32WL LPUART peripherals
//
///

// LPUART: Universal synchronous asynchronous receiver transmitter

struct stm32wl5x_cm0p_lpuart_t
{
    volatile uint32_t CR1_ENABLED; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR_ENABLED; // Interrupt and status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register
    volatile uint32_t PRESC; // Prescaler register

    static constexpr uint32_t CR1_ENABLED_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_ENABLED_CMIE = 0x4000; // Character match interrupt enable
    typedef bit_field_t<21, 0x1f> CR1_ENABLED_DEAT; // DEAT
    typedef bit_field_t<16, 0x1f> CR1_ENABLED_DEDT; // DEDT
    static constexpr uint32_t CR1_ENABLED_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_ENABLED_IDLEIE = 0x10; // IDLE interrupt enable
    static constexpr uint32_t CR1_ENABLED_M0 = 0x1000; // Word length
    static constexpr uint32_t CR1_ENABLED_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_ENABLED_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_ENABLED_PCE = 0x400; // Parity control enable
    static constexpr uint32_t CR1_ENABLED_PEIE = 0x100; // PE interrupt enable
    static constexpr uint32_t CR1_ENABLED_PS = 0x200; // Parity selection
    static constexpr uint32_t CR1_ENABLED_RE = 0x4; // Receiver enable
    static constexpr uint32_t CR1_ENABLED_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_ENABLED_RXFNEIE = 0x20; // RXFIFO not empty interrupt enable
    static constexpr uint32_t CR1_ENABLED_RXNEIE = 0x20; // RXNE interrupt enable
    static constexpr uint32_t CR1_ENABLED_TCIE = 0x40; // Transmission complete interrupt enable
    static constexpr uint32_t CR1_ENABLED_TE = 0x8; // Transmitter enable
    static constexpr uint32_t CR1_ENABLED_TXEIE = 0x80; // Transmit data register empty
    static constexpr uint32_t CR1_ENABLED_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_ENABLED_TXFNFIE = 0x80; // interrupt enable
    static constexpr uint32_t CR1_ENABLED_UE = 0x1; // USART enable
    static constexpr uint32_t CR1_ENABLED_UESM = 0x2; // USART enable in Stop mode
    static constexpr uint32_t CR1_ENABLED_WAKE = 0x800; // Receiver wakeup method

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
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFIFO threshold configuration
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // Receive FIFO threshold configuration
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // threshold interrupt enable
    static constexpr uint32_t CR3_WUFIE = 0x400000; // Wakeup from Stop mode interrupt enable
    typedef bit_field_t<20, 0x3> CR3_WUS; // Wakeup from Stop mode interrupt flag selection
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
    static constexpr uint32_t RQR_TXFRQ = 0x10; // Transmit data flush request
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request

    static constexpr uint32_t ISR_ENABLED_RESET_VALUE = 0x8000c0; // Reset value
    static constexpr uint32_t ISR_ENABLED_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_ENABLED_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_ENABLED_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_ENABLED_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_ENABLED_FE = 0x2; // FE
    static constexpr uint32_t ISR_ENABLED_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ENABLED_NE = 0x4; // NE
    static constexpr uint32_t ISR_ENABLED_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_ENABLED_PE = 0x1; // PE
    static constexpr uint32_t ISR_ENABLED_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_ENABLED_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_ENABLED_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_ENABLED_RXFNE = 0x20; // RXFNE
    static constexpr uint32_t ISR_ENABLED_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_ENABLED_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_ENABLED_TC = 0x40; // TC
    static constexpr uint32_t ISR_ENABLED_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_ENABLED_TXE = 0x80; // TXE
    static constexpr uint32_t ISR_ENABLED_TXFE = 0x800000; // TXFIFO Empty
    static constexpr uint32_t ISR_ENABLED_TXFNF = 0x80; // TXFNF
    static constexpr uint32_t ISR_ENABLED_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_ENABLED_WUF = 0x100000; // WUF

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
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
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // Clock prescaler
};

template<>
struct peripheral_t<STM32WL5x_CM0P, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32wl5x_cm0p_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32wl5x_cm0p_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32wl5x_cm0p_lpuart_t;
    static T& V;
};

using lpuart1_t = peripheral_t<svd, LPUART1>;

template<int INST> struct lpuart_traits {};

template<> struct lpuart_traits<1>
{
    using lpuart = lpuart1_t;
    static constexpr signal_t CTS = LPUART1_CTS;
    static constexpr signal_t DE = LPUART1_DE;
    static constexpr signal_t RTS = LPUART1_RTS;
    static constexpr signal_t RX = LPUART1_RX;
    static constexpr signal_t TX = LPUART1_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_LPUART1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPUART1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPUART1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPUART1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPUART1RST;
    }
};

template<> struct dma_request_t<LPUART1, LPUART_RX>
{
    static constexpr unsigned ID = 24;
};

template<> struct dma_request_t<LPUART1, LPUART_TX>
{
    static constexpr unsigned ID = 25;
};
