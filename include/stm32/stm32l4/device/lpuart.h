#pragma once

////
//
//      STM32L4 LPUART peripherals
//
///

// LPUART1: Universal synchronous asynchronous receiver transmitter

struct stm32l412_lpuart1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR; // Interrupt &amp; status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_DEAT4 = 0x2000000; // Driver Enable assertion time
    static constexpr uint32_t CR1_DEAT3 = 0x1000000; // DEAT3
    static constexpr uint32_t CR1_DEAT2 = 0x800000; // DEAT2
    static constexpr uint32_t CR1_DEAT1 = 0x400000; // DEAT1
    static constexpr uint32_t CR1_DEAT0 = 0x200000; // DEAT0
    static constexpr uint32_t CR1_DEDT4 = 0x100000; // Driver Enable de-assertion time
    static constexpr uint32_t CR1_DEDT3 = 0x80000; // DEDT3
    static constexpr uint32_t CR1_DEDT2 = 0x40000; // DEDT2
    static constexpr uint32_t CR1_DEDT1 = 0x20000; // DEDT1
    static constexpr uint32_t CR1_DEDT0 = 0x10000; // DEDT0
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_M0 = 0x1000; // Word length
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
    typedef bit_field_t<28, 0xf> CR2_ADD4_7; // Address of the USART node
    typedef bit_field_t<24, 0xf> CR2_ADD0_3; // Address of the USART node
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_TAINV = 0x40000; // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR3_UCESM = 0x800000; // UCESM

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> BRR_BRR; // BRR


    static constexpr uint32_t RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0; // Reset value
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000; // WUF
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_TXE = 0x80; // TXE
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_RXNE = 0x20; // RXNE
    static constexpr uint32_t ISR_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_NF = 0x4; // NF
    static constexpr uint32_t ISR_FE = 0x2; // FE
    static constexpr uint32_t ISR_PE = 0x1; // PE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
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

// LPUART1: Universal synchronous asynchronous receiver transmitter

struct stm32l476_lpuart1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR; // Interrupt &amp; status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_DEAT4 = 0x2000000; // Driver Enable assertion time
    static constexpr uint32_t CR1_DEAT3 = 0x1000000; // DEAT3
    static constexpr uint32_t CR1_DEAT2 = 0x800000; // DEAT2
    static constexpr uint32_t CR1_DEAT1 = 0x400000; // DEAT1
    static constexpr uint32_t CR1_DEAT0 = 0x200000; // DEAT0
    static constexpr uint32_t CR1_DEDT4 = 0x100000; // Driver Enable de-assertion time
    static constexpr uint32_t CR1_DEDT3 = 0x80000; // DEDT3
    static constexpr uint32_t CR1_DEDT2 = 0x40000; // DEDT2
    static constexpr uint32_t CR1_DEDT1 = 0x20000; // DEDT1
    static constexpr uint32_t CR1_DEDT0 = 0x10000; // DEDT0
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_M0 = 0x1000; // Word length
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
    typedef bit_field_t<28, 0xf> CR2_ADD4_7; // Address of the USART node
    typedef bit_field_t<24, 0xf> CR2_ADD0_3; // Address of the USART node
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_TAINV = 0x40000; // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_CLKEN = 0x800; // Clock enable
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR3_UCESM_ = 0x800000; // LPUART Clock Enable in Stop mode

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> BRR_BRR; // BRR


    static constexpr uint32_t RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request

    static constexpr uint32_t ISR_RESET_VALUE = 0x20000c0; // Reset value
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000; // WUF
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_TXE = 0x80; // TXE
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_RXNE = 0x20; // RXNE
    static constexpr uint32_t ISR_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_NF = 0x4; // NF
    static constexpr uint32_t ISR_FE = 0x2; // FE
    static constexpr uint32_t ISR_PE = 0x1; // PE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
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

// LPUART1: Universal synchronous asynchronous receiver transmitter

struct stm32l4x1_lpuart1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t CR3; // Control register 3
    volatile uint32_t BRR; // Baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t RQR; // Request register
    volatile uint32_t ISR; // Interrupt &amp; status register
    volatile uint32_t ICR; // Interrupt flag clear register
    volatile uint32_t RDR; // Receive data register
    volatile uint32_t TDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_DEAT4 = 0x2000000; // Driver Enable assertion time
    static constexpr uint32_t CR1_DEAT3 = 0x1000000; // DEAT3
    static constexpr uint32_t CR1_DEAT2 = 0x800000; // DEAT2
    static constexpr uint32_t CR1_DEAT1 = 0x400000; // DEAT1
    static constexpr uint32_t CR1_DEAT0 = 0x200000; // DEAT0
    static constexpr uint32_t CR1_DEDT4 = 0x100000; // Driver Enable de-assertion time
    static constexpr uint32_t CR1_DEDT3 = 0x80000; // DEDT3
    static constexpr uint32_t CR1_DEDT2 = 0x40000; // DEDT2
    static constexpr uint32_t CR1_DEDT1 = 0x20000; // DEDT1
    static constexpr uint32_t CR1_DEDT0 = 0x10000; // DEDT0
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable
    static constexpr uint32_t CR1_M0 = 0x1000; // Word length
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
    typedef bit_field_t<28, 0xf> CR2_ADD4_7; // Address of the USART node
    typedef bit_field_t<24, 0xf> CR2_ADD0_3; // Address of the USART node
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_TAINV = 0x40000; // Binary data inversion
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins
    typedef bit_field_t<12, 0x3> CR2_STOP; // STOP bits
    static constexpr uint32_t CR2_CLKEN = 0x800; // Clock enable
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0; // Reset value
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000; // WUF
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_TXE = 0x80; // TXE
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_RXNE = 0x20; // RXNE
    static constexpr uint32_t ISR_IDLE = 0x10; // IDLE
    static constexpr uint32_t ISR_ORE = 0x8; // ORE
    static constexpr uint32_t ISR_NF = 0x4; // NF
    static constexpr uint32_t ISR_FE = 0x2; // FE
    static constexpr uint32_t ISR_PE = 0x1; // PE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from Stop mode clear flag
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
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
struct peripheral_t<STM32L412, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l412_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l476_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l476_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l4x1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l4x1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l4x1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l4x1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32l4x1_lpuart1_t;
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
