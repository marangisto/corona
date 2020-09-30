#pragma once

////
//
//      STM32H7 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32h742x_usart1_t
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
    volatile uint32_t PRESC; // USART prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_EOBIE = 0x8000000; // End of Block interrupt enable
    static constexpr uint32_t CR1_RTOIE = 0x4000000; // Receiver timeout interrupt enable
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
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
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
    static constexpr uint32_t CR2_RTOEN = 0x800000; // Receiver timeout enable
    static constexpr uint32_t CR2_ABRMOD1 = 0x400000; // Auto baud rate mode
    static constexpr uint32_t CR2_ABRMOD0 = 0x200000; // ABRMOD0
    static constexpr uint32_t CR2_ABREN = 0x100000; // Auto baud rate enable
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_TAINV = 0x40000; // Binary data inversion
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
    static constexpr uint32_t CR2_DIS_NSS = 0x8; // When the DSI_NSS bit is set, the NSS pin input is ignored
    static constexpr uint32_t CR2_SLVEN = 0x1; // Synchronous Slave mode enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFIFO threshold configuration
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // Receive FIFO threshold configuration
    static constexpr uint32_t CR3_TCBGTIE = 0x1000000; // Transmission Complete before guard time, interrupt enable
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // TXFIFO threshold interrupt enable
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
    static constexpr uint32_t CR3_IRLP = 0x4; // Ir low-power
    static constexpr uint32_t CR3_IREN = 0x2; // Ir mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> BRR_BRR_4_15; // DIV_Mantissa
    typedef bit_field_t<0, 0xf> BRR_BRR_0_3; // DIV_Fraction

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
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_TCBGT = 0x2000000; // Transmission complete before guard time flag
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFIFO Empty
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000; // WUF
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_ABRF = 0x8000; // ABRF
    static constexpr uint32_t ISR_ABRE = 0x4000; // ABRE
    static constexpr uint32_t ISR_UDR = 0x2000; // SPI slave underrun error flag
    static constexpr uint32_t ISR_EOBF = 0x1000; // EOBF
    static constexpr uint32_t ISR_RTOF = 0x800; // RTOF
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_LBDF = 0x100; // LBDF
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
    static constexpr uint32_t ICR_UDRCF = 0x2000; // SPI slave underrun clear flag
    static constexpr uint32_t ICR_EOBCF = 0x1000; // End of block clear flag
    static constexpr uint32_t ICR_RTOCF = 0x800; // Receiver timeout clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
    static constexpr uint32_t ICR_LBDCF = 0x100; // LIN break detection clear flag
    static constexpr uint32_t ICR_TCBGTC = 0x80; // Transmission complete before Guard time clear flag
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag
    static constexpr uint32_t ICR_TXFECF = 0x20; // TXFIFO empty clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag
    static constexpr uint32_t ICR_NCF = 0x4; // Noise detected clear flag
    static constexpr uint32_t ICR_FECF = 0x2; // Framing error clear flag
    static constexpr uint32_t ICR_PECF = 0x1; // Parity error clear flag

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RDR_RDR; // Receive data value

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> TDR_TDR; // Transmit data value

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // Clock prescaler
};

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32h7a3x_usart1_t
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
    volatile uint32_t PRESC; // USART prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_EOBIE = 0x8000000; // End of Block interrupt enable
    static constexpr uint32_t CR1_RTOIE = 0x4000000; // Receiver timeout interrupt enable
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
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode
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
    static constexpr uint32_t CR2_RTOEN = 0x800000; // Receiver timeout enable
    static constexpr uint32_t CR2_ABRMOD1 = 0x400000; // Auto baud rate mode
    static constexpr uint32_t CR2_ABRMOD0 = 0x200000; // ABRMOD0
    static constexpr uint32_t CR2_ABREN = 0x100000; // Auto baud rate enable
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first
    static constexpr uint32_t CR2_TAINV = 0x40000; // Binary data inversion
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
    static constexpr uint32_t CR2_DIS_NSS = 0x8; // When the DSI_NSS bit is set, the NSS pin input is ignored
    static constexpr uint32_t CR2_SLVEN = 0x1; // Synchronous Slave mode enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFIFO threshold configuration
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // Receive FIFO threshold configuration
    static constexpr uint32_t CR3_TCBGTIE = 0x1000000; // Transmission Complete before guard time, interrupt enable
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // TXFIFO threshold interrupt enable
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
    static constexpr uint32_t CR3_IRLP = 0x4; // Ir low-power
    static constexpr uint32_t CR3_IREN = 0x2; // Ir mode enable
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfff> BRR_BRR_4_15; // DIV_Mantissa
    typedef bit_field_t<0, 0xf> BRR_BRR_0_3; // DIV_Fraction

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

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_TCBGT = 0x2000000; // Transmission complete before guard time flag
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFIFO Empty
    static constexpr uint32_t ISR_REACK = 0x400000; // REACK
    static constexpr uint32_t ISR_TEACK = 0x200000; // TEACK
    static constexpr uint32_t ISR_WUF = 0x100000; // WUF
    static constexpr uint32_t ISR_RWU = 0x80000; // RWU
    static constexpr uint32_t ISR_SBKF = 0x40000; // SBKF
    static constexpr uint32_t ISR_CMF = 0x20000; // CMF
    static constexpr uint32_t ISR_BUSY = 0x10000; // BUSY
    static constexpr uint32_t ISR_ABRF = 0x8000; // ABRF
    static constexpr uint32_t ISR_ABRE = 0x4000; // ABRE
    static constexpr uint32_t ISR_UDR = 0x2000; // SPI slave underrun error flag
    static constexpr uint32_t ISR_EOBF = 0x1000; // EOBF
    static constexpr uint32_t ISR_RTOF = 0x800; // RTOF
    static constexpr uint32_t ISR_CTS = 0x400; // CTS
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTSIF
    static constexpr uint32_t ISR_LBDF = 0x100; // LBDF
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
    static constexpr uint32_t ICR_UDRCF = 0x2000; // SPI slave underrun clear flag
    static constexpr uint32_t ICR_EOBCF = 0x1000; // End of block clear flag
    static constexpr uint32_t ICR_RTOCF = 0x800; // Receiver timeout clear flag
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag
    static constexpr uint32_t ICR_LBDCF = 0x100; // LIN break detection clear flag
    static constexpr uint32_t ICR_TCBGTC = 0x80; // Transmission complete before Guard time clear flag
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag
    static constexpr uint32_t ICR_TXFECF = 0x20; // TXFIFO empty clear flag
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag
    static constexpr uint32_t ICR_NCF = 0x4; // Noise detected clear flag
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
struct peripheral_t<STM32H742x, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h742x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART10>
{
    static constexpr periph_t P = USART10;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, USART9>
{
    static constexpr periph_t P = USART9;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART10>
{
    static constexpr periph_t P = USART10;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, USART9>
{
    static constexpr periph_t P = USART9;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, UART4>
{
    static constexpr periph_t P = UART4;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, UART5>
{
    static constexpr periph_t P = UART5;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, UART7>
{
    static constexpr periph_t P = UART7;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, UART8>
{
    static constexpr periph_t P = UART8;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART10>
{
    static constexpr periph_t P = USART10;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, USART9>
{
    static constexpr periph_t P = USART9;
    using T = stm32h7a3x_usart1_t;
    static T& V;
};

using uart4_t = peripheral_t<svd, UART4>;
using uart5_t = peripheral_t<svd, UART5>;
using uart7_t = peripheral_t<svd, UART7>;
using uart8_t = peripheral_t<svd, UART8>;
using usart1_t = peripheral_t<svd, USART1>;
using usart10_t = peripheral_t<svd, USART10>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;
using usart6_t = peripheral_t<svd, USART6>;
using usart9_t = peripheral_t<svd, USART9>;

template<int INST> struct usart_traits {};

template<> struct usart_traits<4>
{
    using usart = uart4_t;
    static constexpr signal_t CTS = UART4_CTS;
    static constexpr signal_t DE = UART4_DE;
    static constexpr signal_t RTS = UART4_RTS;
    static constexpr signal_t RX = UART4_RX;
    static constexpr signal_t TX = UART4_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_UART4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_UART4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_UART4RST;
    }
};

template<> struct usart_traits<5>
{
    using usart = uart5_t;
    static constexpr signal_t CTS = UART5_CTS;
    static constexpr signal_t DE = UART5_DE;
    static constexpr signal_t RTS = UART5_RTS;
    static constexpr signal_t RX = UART5_RX;
    static constexpr signal_t TX = UART5_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_UART5EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_UART5EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_UART5RST;
    }
};

template<> struct usart_traits<7>
{
    using usart = uart7_t;
    static constexpr signal_t CTS = UART7_CTS;
    static constexpr signal_t DE = UART7_DE;
    static constexpr signal_t RTS = UART7_RTS;
    static constexpr signal_t RX = UART7_RX;
    static constexpr signal_t TX = UART7_TX;
};

template<> struct usart_traits<8>
{
    using usart = uart8_t;
    static constexpr signal_t CTS = UART8_CTS;
    static constexpr signal_t DE = UART8_DE;
    static constexpr signal_t RTS = UART8_RTS;
    static constexpr signal_t RX = UART8_RX;
    static constexpr signal_t TX = UART8_TX;
};

template<> struct usart_traits<1>
{
    using usart = usart1_t;
    static constexpr signal_t CK = USART1_CK;
    static constexpr signal_t CTS = USART1_CTS;
    static constexpr signal_t DE = USART1_DE;
    static constexpr signal_t NSS = USART1_NSS;
    static constexpr signal_t RTS = USART1_RTS;
    static constexpr signal_t RX = USART1_RX;
    static constexpr signal_t TX = USART1_TX;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

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
    }
};

template<> struct usart_traits<10>
{
    using usart = usart10_t;
    static constexpr signal_t CK = USART10_CK;
    static constexpr signal_t CTS = USART10_CTS;
    static constexpr signal_t DE = USART10_DE;
    static constexpr signal_t NSS = USART10_NSS;
    static constexpr signal_t RTS = USART10_RTS;
    static constexpr signal_t RX = USART10_RX;
    static constexpr signal_t TX = USART10_TX;
};

template<> struct usart_traits<2>
{
    using usart = usart2_t;
    static constexpr signal_t CK = USART2_CK;
    static constexpr signal_t CTS = USART2_CTS;
    static constexpr signal_t DE = USART2_DE;
    static constexpr signal_t NSS = USART2_NSS;
    static constexpr signal_t RTS = USART2_RTS;
    static constexpr signal_t RX = USART2_RX;
    static constexpr signal_t TX = USART2_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_USART2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_USART2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_USART2RST;
    }
};

template<> struct usart_traits<3>
{
    using usart = usart3_t;
    static constexpr signal_t CK = USART3_CK;
    static constexpr signal_t CTS = USART3_CTS;
    static constexpr signal_t DE = USART3_DE;
    static constexpr signal_t NSS = USART3_NSS;
    static constexpr signal_t RTS = USART3_RTS;
    static constexpr signal_t RX = USART3_RX;
    static constexpr signal_t TX = USART3_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_USART3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_USART3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_USART3RST;
    }
};

template<> struct usart_traits<6>
{
    using usart = usart6_t;
    static constexpr signal_t CK = USART6_CK;
    static constexpr signal_t CTS = USART6_CTS;
    static constexpr signal_t DE = USART6_DE;
    static constexpr signal_t NSS = USART6_NSS;
    static constexpr signal_t RTS = USART6_RTS;
    static constexpr signal_t RX = USART6_RX;
    static constexpr signal_t TX = USART6_TX;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

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
    }
};
