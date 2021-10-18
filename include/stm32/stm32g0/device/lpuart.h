#pragma once

////
//
//      STM32G0 LPUART peripherals
//
///

// LPUART: Universal synchronous asynchronous receiver transmitter

struct stm32g031_lpuart_t
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
    volatile uint32_t PRESC; // Prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // DEAT0
    typedef bit_field_t<16, 0x1f> CR1_DEDT0; // DEDT0
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
    static constexpr uint32_t RQR_ABRRQ = 0x1; // Auto baud rate request

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0; // Reset value
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFIFO Empty
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

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // Clock prescaler
};

// LPUART: Universal synchronous asynchronous receiver transmitter

struct stm32g070_lpuart_t
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
    volatile uint32_t PRESC; // Prescaler register
    reserved_t<0xef> _0x30;
    volatile uint32_t HWCFGR2; // LPUART Hardware Configuration register 2
    volatile uint32_t HWCFGR1; // LPUART Hardware Configuration register 1
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // DEAT0
    typedef bit_field_t<16, 0x1f> CR1_DEDT0; // DEDT0
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
    static constexpr uint32_t RQR_ABRRQ = 0x1; // Auto baud rate request

    static constexpr uint32_t ISR_RESET_VALUE = 0xc0; // Reset value
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO Full
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFIFO Empty
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

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // Clock prescaler


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x13; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR2_CFG1; // LUART hardware configuration 1
    typedef bit_field_t<4, 0xf> HWCFGR2_CFG2; // LUART hardware configuration 2

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x31100000; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR1_CFG1; // LUART hardware configuration 1
    typedef bit_field_t<4, 0xf> HWCFGR1_CFG2; // LUART hardware configuration 2
    typedef bit_field_t<8, 0xf> HWCFGR1_CFG3; // LUART hardware configuration 1
    typedef bit_field_t<12, 0xf> HWCFGR1_CFG4; // LUART hardware configuration 2
    typedef bit_field_t<16, 0xf> HWCFGR1_CFG5; // LUART hardware configuration 2
    typedef bit_field_t<20, 0xf> HWCFGR1_CFG6; // LUART hardware configuration 2
    typedef bit_field_t<24, 0xf> HWCFGR1_CFG7; // LUART hardware configuration 2
    typedef bit_field_t<28, 0xf> HWCFGR1_CFG8; // LUART hardware configuration 2

    static constexpr uint32_t VERR_RESET_VALUE = 0x23; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x130003; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

// LPUART1: Low-power universal asynchronous receiver transmitter

struct stm32g0b1_lpuart1_t
{
    volatile uint32_t LPUART_CR1_ENABLED; // LPUART control register 1 [alternate]
    volatile uint32_t LPUART_CR2; // LPUART control register 2
    volatile uint32_t LPUART_CR3; // LPUART control register 3
    volatile uint32_t LPUART_BRR; // LPUART baud rate register
    reserved_t<0x2> _0x10;
    volatile uint32_t LPUART_RQR; // LPUART request register
    volatile uint32_t LPUART_ISR_ENABLED; // LPUART interrupt and status register [alternate]
    volatile uint32_t LPUART_ICR; // LPUART interrupt flag clear register
    volatile uint32_t LPUART_RDR; // LPUART receive data register
    volatile uint32_t LPUART_TDR; // LPUART transmit data register
    volatile uint32_t LPUART_PRESC; // LPUART prescaler register

    static constexpr uint32_t LPUART_CR1_ENABLED_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPUART_CR1_ENABLED_CMIE = 0x4000; // Character match interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<21, 0x1f> LPUART_CR1_ENABLED_DEAT; // Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in lpuart_ker_ck clock cycles. For more details, refer . This bitfield can only be written when the LPUART is disabled (UE=0).
    typedef bit_field_t<16, 0x1f> LPUART_CR1_ENABLED_DEDT; // Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal.It is expressed in lpuart_ker_ck clock cycles. For more details, refer control and RS485 Driver Enable. If the LPUART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR1_ENABLED_FIFOEN = 0x20000000; // FIFO mode enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_IDLEIE = 0x10; // IDLE interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_M0 = 0x1000; // Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1) description). This bit can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR1_ENABLED_M1 = 0x10000000; // Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = &#39;00: 1 Start bit, 8 Data bits, n Stop bit M[1:0] = &#39;01: 1 Start bit, 9 Data bits, n Stop bit M[1:0] = &#39;10: 1 Start bit, 7 Data bits, n Stop bit This bit can only be written when the LPUART is disabled (UE=0). Note: In 7-bit data length mode, the Smartcard mode, LIN master mode and Auto baud rate (0x7F and 0x55 frames detection) are not supported.
    static constexpr uint32_t LPUART_CR1_ENABLED_MME = 0x2000; // Mute mode enable This bit activates the Mute mode function of the LPUART. When set, the LPUART can switch between the active and Mute modes, as defined by the WAKE bit. It is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_PCE = 0x400; // Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR1_ENABLED_PEIE = 0x100; // PE interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_PS = 0x200; // Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR1_ENABLED_RE = 0x4; // Receiver enable This bit enables the receiver. It is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_RXFNEIE = 0x20; // RXFIFO not empty interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_TCIE = 0x40; // Transmission complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_TE = 0x8; // Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (0 followed by 1) sends a preamble (idle line) after the current word. In order to generate an idle character, the TE must not be immediately written to 1. In order to ensure the required duration, the software can poll the TEACK bit in the LPUART_ISR register. When TE is set there is a 1 bit-time delay before the transmission starts.
    static constexpr uint32_t LPUART_CR1_ENABLED_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_TXFNFIE = 0x80; // TXFIFO not full interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t LPUART_CR1_ENABLED_UE = 0x1; // LPUART enable When this bit is cleared, the LPUART prescalers and outputs are stopped immediately, and current operations are discarded. The configuration of the LPUART is kept, but all the status flags, in the LPUART_ISR are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be reset before and the software must wait for the TC bit in the LPUART_ISR to be set before resetting the UE bit. The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit.
    static constexpr uint32_t LPUART_CR1_ENABLED_UESM = 0x2; // LPUART enable in Stop mode When this bit is cleared, the LPUART is not able to wake up the MCU from low-power mode. When this bit is set, the LPUART is able to wake up the MCU from low-power mode, provided that the LPUART clock selection is HSI or LSE in the RCC. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode and clear it on exit from low-power mode.
    static constexpr uint32_t LPUART_CR1_ENABLED_WAKE = 0x800; // Receiver wakeup method This bit determines the LPUART wakeup method from Mute mode. It is set or cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0).

    static constexpr uint32_t LPUART_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPUART_CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection This bit is for selection between 4-bit address detection or 7-bit address detection. This bit can only be written when the LPUART is disabled (UE=0) Note: In 7-bit and 9-bit data modes, the address detection is done on 6-bit and 8-bit address (ADD[5:0] and ADD[7:0]) respectively.
    typedef bit_field_t<12, 0x3> LPUART_CR2_STOP; // STOP bits These bits are used for programming the stop bits. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR2_SWAP = 0x8000; // Swap TX/RX pins This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR2_RXINV = 0x10000; // RX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the RX line. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR2_TXINV = 0x20000; // TX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the TX line. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR2_DATAINV = 0x40000; // Binary data inversion This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR2_MSBFIRST = 0x80000; // Most significant bit first This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0).
    typedef bit_field_t<24, 0xff> LPUART_CR2_ADD; // Address of the LPUART node ADD[7:4]: These bits give the address of the LPUART node or a character code to be recognized. They are used to wake up the MCU with 7-bit address mark detection in multiprocessor communication during Mute mode or Stop mode. The MSB of the character sent by the transmitter should be equal to 1. They can also be used for character detection during normal reception, Mute mode inactive (for example, end of block detection in ModBus protocol). In this case, the whole received character (8-bit) is compared to the ADD[7:0] value and CMF flag is set on match. These bits can only be written when reception is disabled (RE = 0) or the LPUART is disabled (UE=0) ADD[3:0]: These bits give the address of the LPUART node or a character code to be recognized. They are used for wakeup with address mark detection in multiprocessor communication during Mute mode or low-power mode. These bits can only be written when reception is disabled (RE = 0) or the LPUART is disabled (UE=0)

    static constexpr uint32_t LPUART_CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPUART_CR3_EIE = 0x1; // Error interrupt enable Error Interrupt Enable Bit is required to enable interrupt generation in case of a framing error, overrun error or noise flag (FE=1 or ORE=1 or NE=1 in the LPUART_ISR register).
    static constexpr uint32_t LPUART_CR3_HDSEL = 0x8; // Half-duplex selection Selection of Single-wire Half-duplex mode This bit can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR3_DMAR = 0x40; // DMA enable receiver This bit is set/reset by software
    static constexpr uint32_t LPUART_CR3_DMAT = 0x80; // DMA enable transmitter This bit is set/reset by software
    static constexpr uint32_t LPUART_CR3_RTSE = 0x100; // RTS enable This bit can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR3_CTSE = 0x200; // CTS enable This bit can only be written when the LPUART is disabled (UE=0)
    static constexpr uint32_t LPUART_CR3_CTSIE = 0x400; // CTS interrupt enable
    static constexpr uint32_t LPUART_CR3_OVRDIS = 0x1000; // Overrun Disable This bit is used to disable the receive overrun detection. the ORE flag is not set and the new received data overwrites the previous content of the LPUART_RDR register. This bit can only be written when the LPUART is disabled (UE=0). Note: This control bit enables checking the communication flow w/o reading the data.
    static constexpr uint32_t LPUART_CR3_DDRE = 0x2000; // DMA Disable on Reception Error This bit can only be written when the LPUART is disabled (UE=0). Note: The reception errors are: parity error, framing error or noise error.
    static constexpr uint32_t LPUART_CR3_DEM = 0x4000; // Driver enable mode This bit enables the user to activate the external transceiver control, through the DE signal. This bit can only be written when the LPUART is disabled (UE=0).
    static constexpr uint32_t LPUART_CR3_DEP = 0x8000; // Driver enable polarity selection This bit can only be written when the LPUART is disabled (UE=0).
    typedef bit_field_t<20, 0x3> LPUART_CR3_WUS; // Wakeup from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wakeup from low-power mode flag). This bitfield can only be written when the LPUART is disabled (UE=0). Note: If the LPUART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t LPUART_CR3_WUFIE = 0x400000; // Wakeup from low-power mode interrupt enable This bit is set and cleared by software. Note: WUFIE must be set before entering in low-power mode. If the LPUART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t LPUART_CR3_TXFTIE = 0x800000; // TXFIFO threshold interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<25, 0x7> LPUART_CR3_RXFTCFG; // Receive FIFO threshold configuration Remaining combinations: Reserved.
    static constexpr uint32_t LPUART_CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<29, 0x7> LPUART_CR3_TXFTCFG; // TXFIFO threshold configuration Remaining combinations: Reserved.

    static constexpr uint32_t LPUART_BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> LPUART_BRR_BRR; // LPUART baud rate


    static constexpr uint32_t LPUART_RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPUART_RQR_SBKRQ = 0x2; // Send break request Writing 1 to this bit sets the SBKF flag and request to send a BREAK on the line, as soon as the transmit machine is available. Note: If the application needs to send the break character following all previously inserted data, including the ones not yet transmitted, the software should wait for the TXE flag assertion before setting the SBKRQ bit.
    static constexpr uint32_t LPUART_RQR_MMRQ = 0x4; // Mute mode request Writing 1 to this bit puts the LPUART in Mute mode and resets the RWU flag.
    static constexpr uint32_t LPUART_RQR_RXFRQ = 0x8; // Receive data flush request Writing 1 to this bit clears the RXNE flag. This enables discarding the received data without reading it, and avoid an overrun condition.
    static constexpr uint32_t LPUART_RQR_TXFRQ = 0x10; // Transmit data flush request This bit is used when FIFO mode is enabled. TXFRQ bit is set to flush the whole FIFO. This sets the flag TXFE (TXFIFO empty, bit 23 in the LPUART_ISR register). Note: In FIFO mode, the TXFNF flag is reset during the flush request until TxFIFO is empty in order to ensure that no data are written in the data register.

    static constexpr uint32_t LPUART_ISR_ENABLED_RESET_VALUE = 0x8000c0; // Reset value
    static constexpr uint32_t LPUART_ISR_ENABLED_BUSY = 0x10000; // Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not).
    static constexpr uint32_t LPUART_ISR_ENABLED_CMF = 0x20000; // Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the LPUART_ICR register. An interrupt is generated if CMIE=1in the LPUART_CR1 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_CTS = 0x400; // CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the nCTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value.
    static constexpr uint32_t LPUART_ISR_ENABLED_CTSIF = 0x200; // CTS interrupt flag This bit is set by hardware when the nCTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the LPUART_ICR register. An interrupt is generated if CTSIE=1 in the LPUART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value.
    static constexpr uint32_t LPUART_ISR_ENABLED_FE = 0x2; // Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the LPUART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE=1 in the LPUART_CR1 register. Note: This error is associated with the character in the LPUART_RDR.
    static constexpr uint32_t LPUART_ISR_ENABLED_IDLE = 0x10; // Idle line detected This bit is set by hardware when an Idle line is detected. An interrupt is generated if IDLEIE=1 in the LPUART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the LPUART_ICR register. Note: The IDLE bit is not set again until the RXFNE bit has been set (i.e. a new idle line occurs). If Mute mode is enabled (MME=1), IDLE is set if the LPUART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set.
    static constexpr uint32_t LPUART_ISR_ENABLED_NE = 0x4; // Start bit noise detection flag This bit is set by hardware when noise is detected on the start bit of a received frame. It is cleared by software, writing 1 to the NECF bit in the LPUART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXFNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. This error is associated with the character in the LPUART_RDR.
    static constexpr uint32_t LPUART_ISR_ENABLED_ORE = 0x8; // Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the LPUART_RDR register while RXFF = 1. It is cleared by a software, writing 1 to the ORECF, in the LPUART_ICR register. An interrupt is generated if RXFNEIE=1 or EIE = 1 in the LPUART_CR1 register. Note: When this bit is set, the LPUART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the LPUART_CR3 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_PE = 0x1; // Parity error This bit is set by hardware when a parity error occurs in receiver mode. It is cleared by software, writing 1 to the PECF in the LPUART_ICR register. An interrupt is generated if PEIE = 1 in the LPUART_CR1 register. Note: This error is associated with the character in the LPUART_RDR.
    static constexpr uint32_t LPUART_ISR_ENABLED_REACK = 0x400000; // Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the LPUART. It can be used to verify that the LPUART is ready for reception before entering low-power mode. Note: If the LPUART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value.
    static constexpr uint32_t LPUART_ISR_ENABLED_RWU = 0x80000; // Receiver wakeup from Mute mode This bit indicates if the LPUART is in Mute mode. It is cleared/set by hardware when a wakeup/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the LPUART_CR1 register. When wakeup on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the LPUART_RQR register. Note: If the LPUART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value.
    static constexpr uint32_t LPUART_ISR_ENABLED_RXFF = 0x1000000; // RXFIFO full This bit is set by hardware when the number of received data corresponds to RXFIFOsize+1 (RXFIFO full + 1 data in the LPUART_RDR register. An interrupt is generated if the RXFFIE bit =1 in the LPUART_CR1 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_RXFNE = 0x20; // RXFIFO not empty RXFNE bit is set by hardware when the RXFIFO is not empty, and so data can be read from the LPUART_RDR register. Every read of the LPUART_RDR frees a location in the RXFIFO. It is cleared when the RXFIFO is empty. The RXFNE flag can also be cleared by writing 1 to the RXFRQ in the LPUART_RQR register. An interrupt is generated if RXFNEIE=1 in the LPUART_CR1 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_RXFT = 0x4000000; // RXFIFO threshold flag This bit is set by hardware when the RXFIFO reaches the threshold programmed in RXFTCFG in LPUART_CR3 register i.e. the Receive FIFO contains RXFTCFG data. An interrupt is generated if the RXFTIE bit =1 (bit 27) in the LPUART_CR3 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_SBKF = 0x40000; // Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the LPUART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission.
    static constexpr uint32_t LPUART_ISR_ENABLED_TC = 0x40; // Transmission complete This bit is set by hardware if the transmission of a frame containing data is complete and if TXFF is set. An interrupt is generated if TCIE=1 in the LPUART_CR1 register. It is cleared by software, writing 1 to the TCCF in the LPUART_ICR register or by a write to the LPUART_TDR register. An interrupt is generated if TCIE=1 in the LPUART_CR1 register. Note: If TE bit is reset and no transmission is on going, the TC bit is set immediately.
    static constexpr uint32_t LPUART_ISR_ENABLED_TEACK = 0x200000; // Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the LPUART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the LPUART_CR1 register, in order to respect the TE=0 minimum period.
    static constexpr uint32_t LPUART_ISR_ENABLED_TXFE = 0x800000; // TXFIFO empty This bit is set by hardware when TXFIFO is empty. When the TXFIFO contains at least one data, this flag is cleared. The TXFE flag can also be set by writing 1 to the bit TXFRQ (bit 4) in the LPUART_RQR register. An interrupt is generated if the TXFEIE bit =1 (bit 30) in the LPUART_CR1 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_TXFNF = 0x80; // TXFIFO not full TXFNF is set by hardware when TXFIFO is not full, and so data can be written in the LPUART_TDR. Every write in the LPUART_TDR places the data in the TXFIFO. This flag remains set until the TXFIFO is full. When the TXFIFO is full, this flag is cleared indicating that data can not be written into the LPUART_TDR. The TXFNF is kept reset during the flush request until TXFIFO is empty. After sending the flush request (by setting TXFRQ bit), the flag TXFNF should be checked prior to writing in TXFIFO (TXFNF and TXFE are set at the same time). An interrupt is generated if the TXFNFIE bit =1 in the LPUART_CR1 register. Note: This bit is used during single buffer transmission.
    static constexpr uint32_t LPUART_ISR_ENABLED_TXFT = 0x8000000; // TXFIFO threshold flag This bit is set by hardware when the TXFIFO reaches the threshold programmed in TXFTCFG in LPUART_CR3 register i.e. the TXFIFO contains TXFTCFG empty locations. An interrupt is generated if the TXFTIE bit =1 (bit 31) in the LPUART_CR3 register.
    static constexpr uint32_t LPUART_ISR_ENABLED_WUF = 0x100000; // Wakeup from low-power mode flag This bit is set by hardware, when a wakeup event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the LPUART_ICR register. An interrupt is generated if WUFIE=1 in the LPUART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. If the LPUART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value

    static constexpr uint32_t LPUART_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPUART_ICR_PECF = 0x1; // Parity error clear flag Writing 1 to this bit clears the PE flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_FECF = 0x2; // Framing error clear flag Writing 1 to this bit clears the FE flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_NECF = 0x4; // Noise detected clear flag Writing 1 to this bit clears the NE flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_ORECF = 0x8; // Overrun error clear flag Writing 1 to this bit clears the ORE flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_IDLECF = 0x10; // Idle line detected clear flag Writing 1 to this bit clears the IDLE flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_TCCF = 0x40; // Transmission complete clear flag Writing 1 to this bit clears the TC flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_CTSCF = 0x200; // CTS clear flag Writing 1 to this bit clears the CTSIF flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_CMCF = 0x20000; // Character match clear flag Writing 1 to this bit clears the CMF flag in the LPUART_ISR register.
    static constexpr uint32_t LPUART_ICR_WUCF = 0x100000; // Wakeup from low-power mode clear flag Writing 1 to this bit clears the WUF flag in the LPUART_ISR register. Note: If the LPUART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to .

    static constexpr uint32_t LPUART_RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> LPUART_RDR_RDR; // Receive data value Contains the received data character. The RDR register provides the parallel interface between the input shift register and the internal bus (see ). When receiving with the parity enabled, the value read in the MSB bit is the received parity bit.

    static constexpr uint32_t LPUART_TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> LPUART_TDR_TDR; // Transmit data value Contains the data character to be transmitted. The TDR register provides the parallel interface between the internal bus and the output shift register (see ). When transmitting with the parity enabled (PCE bit set to 1 in the LPUART_CR1 register), the value written in the MSB (bit 7 or bit 8 depending on the data length) has no effect because it is replaced by the parity. Note: This register must be written only when TXE/TXFNF=1.

    static constexpr uint32_t LPUART_PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> LPUART_PRESC_PRESCALER; // Clock prescaler The LPUART input clock can be divided by a prescaler: Remaining combinations: Reserved. Note: When PRESCALER is programmed with a value different of the allowed ones, programmed prescaler value is 1011 i.e. input clock divided by 256.
};

template<>
struct peripheral_t<STM32G031, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g031_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g031_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g070_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g070_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g070_lpuart_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g0b1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, LPUART2>
{
    static constexpr periph_t P = LPUART2;
    using T = stm32g0b1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, LPUART1>
{
    static constexpr periph_t P = LPUART1;
    using T = stm32g0b1_lpuart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, LPUART2>
{
    static constexpr periph_t P = LPUART2;
    using T = stm32g0b1_lpuart1_t;
    static T& V;
};

using lpuart1_t = peripheral_t<svd, LPUART1>;
using lpuart2_t = peripheral_t<svd, LPUART2>;

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
        RCC::V.APB1ENR |= RCC::T::APB1ENR_LPUART1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART1RST;
    }
};

template<> struct lpuart_traits<2>
{
    using lpuart = lpuart2_t;
    static constexpr signal_t CTS = LPUART2_CTS;
    static constexpr signal_t DE = LPUART2_DE;
    static constexpr signal_t RTS = LPUART2_RTS;
    static constexpr signal_t RX = LPUART2_RX;
    static constexpr signal_t TX = LPUART2_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_LPUART2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_LPUART2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_LPUART2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPUART2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_LPUART2RST;
    }
};

template<> struct dma_request_t<LPUART1, LPUART_RX>
{
    static constexpr unsigned ID = 14;
};

template<> struct dma_request_t<LPUART1, LPUART_TX>
{
    static constexpr unsigned ID = 15;
};

template<> struct dma_request_t<LPUART2, LPUART_RX>
{
    static constexpr unsigned ID = 66;
};

template<> struct dma_request_t<LPUART2, LPUART_TX>
{
    static constexpr unsigned ID = 67;
};
