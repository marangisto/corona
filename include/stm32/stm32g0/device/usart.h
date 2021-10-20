#pragma once

////
//
//      STM32G0 USART peripherals
//
///

// USART1: Universal synchronous asynchronous receiver transmitter

struct stm32g030_usart1_t
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
    volatile uint32_t PRESC; // Prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length
    static constexpr uint32_t CR1_EOBIE = 0x8000000; // End of Block interrupt enable
    static constexpr uint32_t CR1_RTOIE = 0x4000000; // Receiver timeout interrupt enable
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // DEAT
    typedef bit_field_t<16, 0x1f> CR1_DEDT; // DEDT
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
    typedef bit_field_t<21, 0x3> CR2_ABRMOD; // Auto baud rate mode
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
    static constexpr uint32_t CR2_DIS_NSS = 0x8; // When the DSI_NSS bit is set, the NSS pin input will be ignored
    static constexpr uint32_t CR2_SLVEN = 0x1; // Synchronous Slave mode enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFIFO threshold configuration
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // Receive FIFO threshold configuration
    static constexpr uint32_t CR3_TCBGTIE = 0x1000000; // Tr Complete before guard time, interrupt enable
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // threshold interrupt enable
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
    typedef bit_field_t<4, 0xfff> BRR_BRR_4_15; // BRR_4_15
    typedef bit_field_t<0, 0xf> BRR_BRR_0_3; // BRR_0_3

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
    static constexpr uint32_t ICR_TCBGTCF = 0x80; // Transmission complete before Guard time clear flag
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

struct stm32g050_usart1_t
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
    volatile uint32_t PRESC; // Prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CMIE = 0x4000; // Character match interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<21, 0x1f> CR1_DEAT; // Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<16, 0x1f> CR1_DEDT; // Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). If the USART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR1_EOBIE = 0x8000000; // End of Block interrupt enable This bit is set and cleared by software. Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR1_FIFOEN = 0x20000000; // FIFO mode enable This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). Note: FIFO mode can be used on standard UART communication, in SPI master/slave mode and in Smartcard modes only. It must not be enabled in IrDA and LIN modes.
    static constexpr uint32_t CR1_IDLEIE = 0x10; // IDLE interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_M0 = 0x1000; // Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1)description). This bit can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR1_M1 = 0x10000000; // Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = &#39;00: 1 start bit, 8 Data bits, n Stop bit M[1:0] = &#39;01: 1 start bit, 9 Data bits, n Stop bit M[1:0] = &#39;10: 1 start bit, 7 Data bits, n Stop bit This bit can only be written when the USART is disabled (UE=0). Note: In 7-bits data length mode, the Smartcard mode, LIN master mode and Auto baud rate (0x7F and 0x55 frames detection) are not supported.
    static constexpr uint32_t CR1_MME = 0x2000; // Mute mode enable This bit enables the USART Mute mode function. When set, the USART can switch between active and Mute mode, as defined by the WAKE bit. It is set and cleared by software.
    static constexpr uint32_t CR1_OVER8 = 0x8000; // Oversampling mode This bit can only be written when the USART is disabled (UE=0). Note: In LIN, IrDA and Smartcard modes, this bit must be kept cleared.
    static constexpr uint32_t CR1_PCE = 0x400; // Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and the parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR1_PEIE = 0x100; // PE interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_PS = 0x200; // Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR1_RE = 0x4; // Receiver enable This bit enables the receiver. It is set and cleared by software.
    static constexpr uint32_t CR1_RTOIE = 0x4000000; // Receiver timeout interrupt enable This bit is set and cleared by software. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. .
    static constexpr uint32_t CR1_RXFFIE = 0x80000000; // RXFIFO Full interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_RXFNEIE = 0x20; // RXFIFO not empty interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_RXNEIE = 0x20; // Receive data register not empty This bit is set and cleared by software.
    static constexpr uint32_t CR1_TCIE = 0x40; // Transmission complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_TE = 0x8; // Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (&#39;0 followed by &#39;1) sends a preamble (idle line) after the current word, except in Smartcard mode. In order to generate an idle character, the TE must not be immediately written to &#39;1. To ensure the required duration, the software can poll the TEACK bit in the USART_ISR register. In Smartcard mode, when TE is set, there is a 1 bit-time delay before the transmission starts.
    static constexpr uint32_t CR1_TXEIE = 0x80; // Transmit data register empty This bit is set and cleared by software.
    static constexpr uint32_t CR1_TXFEIE = 0x40000000; // TXFIFO empty interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_TXFNFIE = 0x80; // TXFIFO not full interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR1_UE = 0x1; // USART enable When this bit is cleared, the USART prescalers and outputs are stopped immediately, and all current operations are discarded. The USART configuration is kept, but all the USART_ISR status flags are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be previously reset and the software must wait for the TC bit in the USART_ISR to be set before resetting the UE bit. The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit. In Smartcard mode, (SCEN = 1), the SCLK is always available when CLKEN = 1, regardless of the UE bit value.
    static constexpr uint32_t CR1_UESM = 0x2; // USART enable in low-power mode When this bit is cleared, the USART cannot wake up the MCU from low-power mode. When this bit is set, the USART can wake up the MCU from low-power mode. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode and clear it when exit from low-power mode. If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR1_WAKE = 0x800; // Receiver wakeup method This bit determines the USART wakeup method from Mute mode. It is set or cleared by software. This bitfield can only be written when the USART is disabled (UE=0).

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SLVEN = 0x1; // Synchronous Slave mode enable When the SLVEN bit is set, the synchronous slave mode is enabled. Note: When SPI slave mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_DIS_NSS = 0x8; // When the DIS_NSS bit is set, the NSS pin input is ignored. Note: When SPI slave mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_ADDM7 = 0x10; // 7-bit Address Detection/4-bit Address Detection This bit is for selection between 4-bit address detection or 7-bit address detection. This bit can only be written when the USART is disabled (UE=0) Note: In 7-bit and 9-bit data modes, the address detection is done on 6-bit and 8-bit address (ADD[5:0] and ADD[7:0]) respectively.
    static constexpr uint32_t CR2_LBDL = 0x20; // LIN break detection length This bit is for selection between 11 bit or 10 bit break detection. This bit can only be written when the USART is disabled (UE=0). Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_LBDIE = 0x40; // LIN break detection interrupt enable Break interrupt mask (break detection using break delimiter). Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_LBCL = 0x100; // Last bit clock pulse This bit is used to select whether the clock pulse associated with the last data bit transmitted (MSB) has to be output on the SCLK pin in synchronous mode. The last bit is the 7th or 8th or 9th data bit transmitted depending on the 7 or 8 or 9 bit format selected by the M bit in the USART_CR1 register. This bit can only be written when the USART is disabled (UE=0). Note: If synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_CPHA = 0x200; // Clock phase This bit is used to select the phase of the clock output on the SCLK pin in synchronous mode. It works in conjunction with the CPOL bit to produce the desired clock/data relationship (see and ) This bit can only be written when the USART is disabled (UE=0). Note: If synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_CPOL = 0x400; // Clock polarity This bit enables the user to select the polarity of the clock output on the SCLK pin in synchronous mode. It works in conjunction with the CPHA bit to produce the desired clock/data relationship This bit can only be written when the USART is disabled (UE=0). Note: If synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_CLKEN = 0x800; // Clock enable This bit enables the user to enable the SCLK pin. This bit can only be written when the USART is disabled (UE=0). Note: If neither synchronous mode nor Smartcard mode is supported, this bit is reserved and must be kept at reset value. Refer to . In Smartcard mode, in order to provide correctly the SCLK clock to the smartcard, the steps below must be respected: UE = 0 SCEN = 1 GTPR configuration CLKEN= 1 UE = 1
    typedef bit_field_t<12, 0x3> CR2_STOP; // stop bits These bits are used for programming the stop bits. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_LINEN = 0x4000; // LIN mode enable This bit is set and cleared by software. The LIN mode enables the capability to send LIN synchronous breaks (13 low bits) using the SBKRQ bit in the USART_CR1 register, and to detect LIN Sync breaks. This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support LIN mode, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_SWAP = 0x8000; // Swap TX/RX pins This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_RXINV = 0x10000; // RX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the RX line. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_TXINV = 0x20000; // TX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the TX line. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_DATAINV = 0x40000; // Binary data inversion This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_MSBFIRST = 0x80000; // Most significant bit first This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR2_ABREN = 0x100000; // Auto baud rate enable This bit is set and cleared by software. Note: If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<21, 0x3> CR2_ABRMOD; // Auto baud rate mode These bits are set and cleared by software. This bitfield can only be written when ABREN = 0 or the USART is disabled (UE=0). Note: If DATAINV=1 and/or MSBFIRST=1 the patterns must be the same on the line, for example 0xAA for MSBFIRST) If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR2_RTOEN = 0x800000; // Receiver timeout enable This bit is set and cleared by software. When this feature is enabled, the RTOF flag in the USART_ISR register is set if the RX line is idle (no reception) for the duration programmed in the RTOR (receiver timeout register). Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<24, 0xff> CR2_ADD; // Address of the USART node ADD[7:4]: These bits give the address of the USART node or a character code to be recognized. They are used to wake up the MCU with 7-bit address mark detection in multiprocessor communication during Mute mode or low-power mode. The MSB of the character sent by the transmitter should be equal to 1. They can also be used for character detection during normal reception, Mute mode inactive (for example, end of block detection in ModBus protocol). In this case, the whole received character (8-bit) is compared to the ADD[7:0] value and CMF flag is set on match. These bits can only be written when reception is disabled (RE = 0) or the USART is disabled (UE=0). ADD[3:0]: These bits give the address of the USART node or a character code to be recognized. They are used for wakeup with address mark detection, in multiprocessor communication during Mute mode or low-power mode. These bits can only be written when reception is disabled (RE = 0) or the USART is disabled (UE=0).

    static constexpr uint32_t CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR3_EIE = 0x1; // Error interrupt enable Error Interrupt Enable Bit is required to enable interrupt generation in case of a framing error, overrun error noise flag or SPI slave underrun error (FE=1 or ORE=1 or NE=1 or UDR = 1 in the USART_ISR register).
    static constexpr uint32_t CR3_IREN = 0x2; // IrDA mode enable This bit is set and cleared by software. This bit can only be written when the USART is disabled (UE=0). Note: If IrDA mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_IRLP = 0x4; // IrDA low-power This bit is used for selecting between normal and low-power IrDA modes This bit can only be written when the USART is disabled (UE=0). Note: If IrDA mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_HDSEL = 0x8; // Half-duplex selection Selection of Single-wire Half-duplex mode This bit can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR3_NACK = 0x10; // Smartcard NACK enable This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_SCEN = 0x20; // Smartcard mode enable This bit is used for enabling Smartcard mode. This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_DMAR = 0x40; // DMA enable receiver This bit is set/reset by software
    static constexpr uint32_t CR3_DMAT = 0x80; // DMA enable transmitter This bit is set/reset by software
    static constexpr uint32_t CR3_RTSE = 0x100; // RTS enable This bit can only be written when the USART is disabled (UE=0). Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_CTSE = 0x200; // CTS enable This bit can only be written when the USART is disabled (UE=0) Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_CTSIE = 0x400; // CTS interrupt enable Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t CR3_ONEBIT = 0x800; // One sample bit method enable This bit enables the user to select the sample method. When the one sample bit method is selected the noise detection flag (NE) is disabled. This bit can only be written when the USART is disabled (UE=0).
    static constexpr uint32_t CR3_OVRDIS = 0x1000; // Overrun Disable This bit is used to disable the receive overrun detection. the ORE flag is not set and the new received data overwrites the previous content of the USART_RDR register. When FIFO mode is enabled, the RXFIFO is bypassed and data is written directly in USART_RDR register. Even when FIFO management is enabled, the RXNE flag is to be used. This bit can only be written when the USART is disabled (UE=0). Note: This control bit enables checking the communication flow w/o reading the data
    static constexpr uint32_t CR3_DDRE = 0x2000; // DMA Disable on Reception Error This bit can only be written when the USART is disabled (UE=0). Note: The reception errors are: parity error, framing error or noise error.
    static constexpr uint32_t CR3_DEM = 0x4000; // Driver enable mode This bit enables the user to activate the external transceiver control, through the DE signal. This bit can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. .
    static constexpr uint32_t CR3_DEP = 0x8000; // Driver enable polarity selection This bit can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<17, 0x7> CR3_SCARCNT; // Smartcard auto-retry count This bitfield specifies the number of retries for transmission and reception in Smartcard mode. In transmission mode, it specifies the number of automatic retransmission retries, before generating a transmission error (FE bit set). In reception mode, it specifies the number or erroneous reception trials, before generating a reception error (RXNE/RXFNE and PE bits set). This bitfield must be programmed only when the USART is disabled (UE=0). When the USART is enabled (UE=1), this bitfield may only be written to 0x0, in order to stop retransmission. Note: If Smartcard mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<20, 0x3> CR3_WUS; // Wakeup from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wakeup from low-power mode flag). This bitfield can only be written when the USART is disabled (UE=0). If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to page835.
    static constexpr uint32_t CR3_WUFIE = 0x400000; // Wakeup from low-power mode interrupt enable This bit is set and cleared by software. Note: WUFIE must be set before entering in low-power mode. If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to page835.
    static constexpr uint32_t CR3_TXFTIE = 0x800000; // TXFIFO threshold interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CR3_TCBGTIE = 0x1000000; // Transmission Complete before guard time, interrupt enable This bit is set and cleared by software. Note: If the USART does not support the Smartcard mode, this bit is reserved and must be kept at reset value. Refer to .
    typedef bit_field_t<25, 0x7> CR3_RXFTCFG; // Receive FIFO threshold configuration Remaining combinations: Reserved
    static constexpr uint32_t CR3_RXFTIE = 0x10000000; // RXFIFO threshold interrupt enable This bit is set and cleared by software.
    typedef bit_field_t<29, 0x7> CR3_TXFTCFG; // TXFIFO threshold configuration Remaining combinations: Reserved

    static constexpr uint32_t BRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BRR_BRR; // USART baud rate

    static constexpr uint32_t GTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> GTPR_PSC; // Prescaler value In IrDA low-power and normal IrDA mode: PSC[7:0] = IrDA Normal and Low-Power baud rate PSC[7:0] is used to program the prescaler for dividing the USART source clock to achieve the low-power frequency: the source clock is divided by the value given in the register (8 significant bits): In Smartcard mode: PSC[4:0]=Prescaler value PSC[4:0] is used to program the prescaler for dividing the USART source clock to provide the Smartcard clock. The value given in the register (5 significant bits) is multiplied by 2 to give the division factor of the source clock frequency: ... 00100000: Divides the source clock by 32 (IrDA mode) ... 11111111: Divides the source clock by 255 (IrDA mode) This bitfield can only be written when the USART is disabled (UE=0). Note: Bits [7:5] must be kept cleared if Smartcard mode is used. This bitfield is reserved and forced by hardware to &#39;0 when the Smartcard and IrDA modes are not supported. Refer to .
    typedef bit_field_t<8, 0xff> GTPR_GT; // Guard time value This bitfield is used to program the Guard time value in terms of number of baud clock periods. This is used in Smartcard mode. The Transmission Complete flag is set after this guard time value. This bitfield can only be written when the USART is disabled (UE=0). Note: If Smartcard mode is not supported, this bit is reserved and must be kept at reset value. Refer to .

    static constexpr uint32_t RTOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> RTOR_RTO; // Receiver timeout value
    typedef bit_field_t<24, 0xff> RTOR_BLEN; // Block Length

    static constexpr uint32_t RQR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RQR_ABRRQ = 0x1; // Auto baud rate request Writing 1 to this bit resets the ABRF flag in the USART_ISR and requests an automatic baud rate measurement on the next received data frame. Note: If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t RQR_SBKRQ = 0x2; // Send break request Writing 1 to this bit sets the SBKF flag and request to send a BREAK on the line, as soon as the transmit machine is available. Note: When the application needs to send the break character following all previously inserted data, including the ones not yet transmitted, the software should wait for the TXE flag assertion before setting the SBKRQ bit.
    static constexpr uint32_t RQR_MMRQ = 0x4; // Mute mode request Writing 1 to this bit puts the USART in Mute mode and resets the RWU flag.
    static constexpr uint32_t RQR_RXFRQ = 0x8; // Receive data flush request Writing 1 to this bit empties the entire receive FIFO i.e. clears the bit RXFNE. This enables to discard the received data without reading them, and avoid an overrun condition.
    static constexpr uint32_t RQR_TXFRQ = 0x10; // Transmit data flush request When FIFO mode is disabled, writing &#39;1 to this bit sets the TXE flag. This enables to discard the transmit data. This bit must be used only in Smartcard mode, when data have not been sent due to errors (NACK) and the FE flag is active in the USART_ISR register. If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. When FIFO is enabled, TXFRQ bit is set to flush the whole FIFO. This sets the TXFE flag (Transmit FIFO empty, bit 23 in the USART_ISR register). Flushing the Transmit FIFO is supported in both UART and Smartcard modes. Note: In FIFO mode, the TXFNF flag is reset during the flush request until TxFIFO is empty in order to ensure that no data are written in the data register.

    static constexpr uint32_t ISR_RESET_VALUE = 0x8000c0; // Reset value
    static constexpr uint32_t ISR_ABRE = 0x4000; // Auto baud rate error This bit is set by hardware if the baud rate measurement failed (baud rate out of range or character comparison failed) It is cleared by software, by writing 1 to the ABRRQ bit in the USART_CR3 register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value.
    static constexpr uint32_t ISR_ABRF = 0x8000; // Auto baud rate flag This bit is set by hardware when the automatic baud rate has been set (RXFNE is also set, generating an interrupt if RXFNEIE = 1) or when the auto baud rate operation was completed without success (ABRE=1) (ABRE, RXFNE and FE are also set in this case) It is cleared by software, in order to request a new auto baud rate detection, by writing 1 to the ABRRQ in the USART_RQR register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value.
    static constexpr uint32_t ISR_BUSY = 0x10000; // Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not).
    static constexpr uint32_t ISR_CMF = 0x20000; // Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the USART_ICR register. An interrupt is generated if CMIE=1in the USART_CR1 register.
    static constexpr uint32_t ISR_CTS = 0x400; // CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the nCTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value.
    static constexpr uint32_t ISR_CTSIF = 0x200; // CTS interrupt flag This bit is set by hardware when the nCTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the USART_ICR register. An interrupt is generated if CTSIE=1 in the USART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value.
    static constexpr uint32_t ISR_EOBF = 0x1000; // End of block flag This bit is set by hardware when a complete block has been received (for example T=1 Smartcard mode). The detection is done when the number of received bytes (from the start of the block, including the prologue) is equal or greater than BLEN + 4. An interrupt is generated if the EOBIE=1 in the USART_CR2 register. It is cleared by software, writing 1 to the EOBCF in the USART_ICR register. Note: If Smartcard mode is not supported, this bit is reserved and kept at reset value. Refer to .
    static constexpr uint32_t ISR_FE = 0x2; // Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the USART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE=1 in the USART_CR1 register. Note: This error is associated with the character in the USART_RDR.
    static constexpr uint32_t ISR_IDLE = 0x10; // Idle line detected This bit is set by hardware when an Idle Line is detected. An interrupt is generated if IDLEIE=1 in the USART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the USART_ICR register. Note: The IDLE bit is not set again until the RXFNE bit has been set (i.e. a new idle line occurs). If Mute mode is enabled (MME=1), IDLE is set if the USART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set.
    static constexpr uint32_t ISR_LBDF = 0x100; // LIN break detection flag This bit is set by hardware when the LIN break is detected. It is cleared by software, by writing 1 to the LBDCF in the USART_ICR. An interrupt is generated if LBDIE = 1 in the USART_CR2 register. Note: If the USART does not support LIN mode, this bit is reserved and kept at reset value. Refer to .
    static constexpr uint32_t ISR_NE = 0x4; // Noise detection flag This bit is set by hardware when noise is detected on a received frame. It is cleared by software, writing 1 to the NECF bit in the USART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXFNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. When the line is noise-free, the NE flag can be disabled by programming the ONEBIT bit to 1 to increase the USART tolerance to deviations (Refer to Tolerance of the USART receiver to clock deviation on page861). This error is associated with the character in the USART_RDR.
    static constexpr uint32_t ISR_ORE = 0x8; // Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the USART_RDR register while RXFF = 1. It is cleared by a software, writing 1 to the ORECF, in the USART_ICR register. An interrupt is generated if RXFNEIE=1 or EIE = 1 in the USART_CR1 register. Note: When this bit is set, the USART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the USART_CR3 register.
    static constexpr uint32_t ISR_PE = 0x1; // Parity error This bit is set by hardware when a parity error occurs in receiver mode. It is cleared by software, writing 1 to the PECF in the USART_ICR register. An interrupt is generated if PEIE = 1 in the USART_CR1 register. Note: This error is associated with the character in the USART_RDR.
    static constexpr uint32_t ISR_REACK = 0x400000; // Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the USART. It can be used to verify that the USART is ready for reception before entering low-power mode. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to .
    static constexpr uint32_t ISR_RTOF = 0x800; // Receiver timeout This bit is set by hardware when the timeout value, programmed in the RTOR register has lapsed, without any communication. It is cleared by software, writing 1 to the RTOCF bit in the USART_ICR register. An interrupt is generated if RTOIE=1 in the USART_CR2 register. In Smartcard mode, the timeout corresponds to the CWT or BWT timings. Note: If a time equal to the value programmed in RTOR register separates 2 characters, RTOF is not set. If this time exceeds this value + 2 sample times (2/16 or 2/8, depending on the oversampling method), RTOF flag is set. The counter counts even if RE = 0 but RTOF is set only when RE = 1. If the timeout has already elapsed when RE is set, then RTOF is set. If the USART does not support the Receiver timeout feature, this bit is reserved and kept at reset value.
    static constexpr uint32_t ISR_RWU = 0x80000; // Receiver wakeup from Mute mode This bit indicates if the USART is in Mute mode. It is cleared/set by hardware when a wakeup/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the USART_CR1 register. When wakeup on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the USART_RQR register. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to .
    static constexpr uint32_t ISR_RXFF = 0x1000000; // RXFIFO full This bit is set by hardware when the number of received data corresponds to RXFIFOsize+1 (RXFIFO full + 1 data in the USART_RDR register. An interrupt is generated if the RXFFIE bit =1 in the USART_CR1 register.
    static constexpr uint32_t ISR_RXFNE = 0x20; // RXFIFO not empty RXFNE bit is set by hardware when the RXFIFO is not empty, meaning that data can be read from the USART_RDR register. Every read operation from the USART_RDR frees a location in the RXFIFO. RXFNE is cleared when the RXFIFO is empty. The RXFNE flag can also be cleared by writing 1 to the RXFRQ in the USART_RQR register. An interrupt is generated if RXFNEIE=1 in the USART_CR1 register.
    static constexpr uint32_t ISR_RXFT = 0x4000000; // RXFIFO threshold flag This bit is set by hardware when the threshold programmed in RXFTCFG in USART_CR3 register is reached. This means that there are (RXFTCFG - 1) data in the Receive FIFO and one data in the USART_RDR register. An interrupt is generated if the RXFTIE bit =1 (bit 27) in the USART_CR3 register. Note: When the RXFTCFG threshold is configured to &#39;101, RXFT flag is set if 16 data are available i.e. 15 data in the RXFIFO and 1 data in the USART_RDR. Consequently, the 17th received data does not cause an overrun error. The overrun error occurs after receiving the 18th data.
    static constexpr uint32_t ISR_RXNE = 0x20; // Read data register not empty RXNE bit is set by hardware when the content of the USART_RDR shift register has been transferred to the USART_RDR register. It is cleared by reading from the USART_RDR register. The RXNE flag can also be cleared by writing 1 to the RXFRQ in the USART_RQR register. An interrupt is generated if RXNEIE=1 in the USART_CR1 register.
    static constexpr uint32_t ISR_SBKF = 0x40000; // Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the USART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission.
    static constexpr uint32_t ISR_TC = 0x40; // Transmission complete This bit indicates that the last data written in the USART_TDR has been transmitted out of the shift register. It is set by hardware when the transmission of a frame containing data is complete and when TXFE is set. An interrupt is generated if TCIE=1 in the USART_CR1 register. TC bit is is cleared by software, by writing 1 to the TCCF in the USART_ICR register or by a write to the USART_TDR register. Note: If TE bit is reset and no transmission is on going, the TC bit is immediately set.
    static constexpr uint32_t ISR_TCBGT = 0x2000000; // Transmission complete before guard time flag This bit is set when the last data written in the USART_TDR has been transmitted correctly out of the shift register. It is set by hardware in Smartcard mode, if the transmission of a frame containing data is complete and if the smartcard did not send back any NACK. An interrupt is generated if TCBGTIE=1 in the USART_CR3 register. This bit is cleared by software, by writing 1 to the TCBGTCF in the USART_ICR register or by a write to the USART_TDR register. Note: If the USART does not support the Smartcard mode, this bit is reserved and kept at reset value. If the USART supports the Smartcard mode and the Smartcard mode is enabled, the TCBGT reset value is &#39;1. Refer to on page835.
    static constexpr uint32_t ISR_TEACK = 0x200000; // Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the USART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the USART_CR1 register, in order to respect the TE=0 minimum period.
    static constexpr uint32_t ISR_TXE = 0x80; // Transmit data register empty TXE is set by hardware when the content of the USART_TDR register has been transferred into the shift register. It is cleared by writing to the USART_TDR register. The TXE flag can also be set by writing 1 to the TXFRQ in the USART_RQR register, in order to discard the data (only in Smartcard T=0 mode, in case of transmission failure). An interrupt is generated if the TXEIE bit =1 in the USART_CR1 register.
    static constexpr uint32_t ISR_TXFE = 0x800000; // TXFIFO empty This bit is set by hardware when TXFIFO is empty. When the TXFIFO contains at least one data, this flag is cleared. The TXFE flag can also be set by writing 1 to the bit TXFRQ (bit 4) in the USART_RQR register. An interrupt is generated if the TXFEIE bit =1 (bit 30) in the USART_CR1 register.
    static constexpr uint32_t ISR_TXFNF = 0x80; // TXFIFO not full TXFNF is set by hardware when TXFIFO is not full meaning that data can be written in the USART_TDR. Every write operation to the USART_TDR places the data in the TXFIFO. This flag remains set until the TXFIFO is full. When the TXFIFO is full, this flag is cleared indicating that data can not be written into the USART_TDR. An interrupt is generated if the TXFNFIE bit =1 in the USART_CR1 register. Note: The TXFNF is kept reset during the flush request until TXFIFO is empty. After sending the flush request (by setting TXFRQ bit), the flag TXFNF should be checked prior to writing in TXFIFO (TXFNF and TXFE are set at the same time). This bit is used during single buffer transmission.
    static constexpr uint32_t ISR_TXFT = 0x8000000; // TXFIFO threshold flag This bit is set by hardware when the TXFIFO reaches the threshold programmed in TXFTCFG of USART_CR3 register i.e. the TXFIFO contains TXFTCFG empty locations. An interrupt is generated if the TXFTIE bit =1 (bit 31) in the USART_CR3 register.
    static constexpr uint32_t ISR_UDR = 0x2000; // SPI slave underrun error flag In slave transmission mode, this flag is set when the first clock pulse for data transmission appears while the software has not yet loaded any value into USART_TDR. This flag is reset by setting UDRCF bit in the USART_ICR register. Note: If the USART does not support the SPI slave mode, this bit is reserved and kept at reset value. Refer to .
    static constexpr uint32_t ISR_WUF = 0x100000; // Wakeup from low-power mode flag This bit is set by hardware, when a wakeup event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the USART_ICR register. An interrupt is generated if WUFIE=1 in the USART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to .

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_PECF = 0x1; // Parity error clear flag Writing 1 to this bit clears the PE flag in the USART_ISR register.
    static constexpr uint32_t ICR_FECF = 0x2; // Framing error clear flag Writing 1 to this bit clears the FE flag in the USART_ISR register.
    static constexpr uint32_t ICR_NECF = 0x4; // Noise detected clear flag Writing 1 to this bit clears the NE flag in the USART_ISR register.
    static constexpr uint32_t ICR_ORECF = 0x8; // Overrun error clear flag Writing 1 to this bit clears the ORE flag in the USART_ISR register.
    static constexpr uint32_t ICR_IDLECF = 0x10; // Idle line detected clear flag Writing 1 to this bit clears the IDLE flag in the USART_ISR register.
    static constexpr uint32_t ICR_TXFECF = 0x20; // TXFIFO empty clear flag Writing 1 to this bit clears the TXFE flag in the USART_ISR register.
    static constexpr uint32_t ICR_TCCF = 0x40; // Transmission complete clear flag Writing 1 to this bit clears the TC flag in the USART_ISR register.
    static constexpr uint32_t ICR_TCBGTCF = 0x80; // Transmission complete before Guard time clear flag Writing 1 to this bit clears the TCBGT flag in the USART_ISR register.
    static constexpr uint32_t ICR_LBDCF = 0x100; // LIN break detection clear flag Writing 1 to this bit clears the LBDF flag in the USART_ISR register. Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t ICR_CTSCF = 0x200; // CTS clear flag Writing 1 to this bit clears the CTSIF flag in the USART_ISR register. Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t ICR_RTOCF = 0x800; // Receiver timeout clear flag Writing 1 to this bit clears the RTOF flag in the USART_ISR register. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Refer to page835.
    static constexpr uint32_t ICR_EOBCF = 0x1000; // End of block clear flag Writing 1 to this bit clears the EOBF flag in the USART_ISR register. Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to .
    static constexpr uint32_t ICR_UDRCF = 0x2000; // SPI slave underrun clear flag Writing 1 to this bit clears the UDRF flag in the USART_ISR register. Note: If the USART does not support SPI slave mode, this bit is reserved and must be kept at reset value. Refer to
    static constexpr uint32_t ICR_CMCF = 0x20000; // Character match clear flag Writing 1 to this bit clears the CMF flag in the USART_ISR register.
    static constexpr uint32_t ICR_WUCF = 0x100000; // Wakeup from low-power mode clear flag Writing 1 to this bit clears the WUF flag in the USART_ISR register. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to page835.

    static constexpr uint32_t RDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> RDR_RDR; // Receive data value

    static constexpr uint32_t TDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> TDR_TDR; // Transmit data value

    static constexpr uint32_t PRESC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRESC_PRESCALER; // Clock prescaler The USART input clock can be divided by a prescaler factor: Remaining combinations: Reserved Note: When PRESCALER is programmed with a value different of the allowed ones, programmed prescaler value is 1011 i.e. input clock divided by 256.
};

template<>
struct peripheral_t<STM32G030, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g030_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART1>
{
    static constexpr periph_t P = USART1;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART2>
{
    static constexpr periph_t P = USART2;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART3>
{
    static constexpr periph_t P = USART3;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART4>
{
    static constexpr periph_t P = USART4;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART5>
{
    static constexpr periph_t P = USART5;
    using T = stm32g050_usart1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, USART6>
{
    static constexpr periph_t P = USART6;
    using T = stm32g050_usart1_t;
    static T& V;
};

using usart1_t = peripheral_t<svd, USART1>;
using usart2_t = peripheral_t<svd, USART2>;
using usart3_t = peripheral_t<svd, USART3>;
using usart4_t = peripheral_t<svd, USART4>;
using usart5_t = peripheral_t<svd, USART5>;
using usart6_t = peripheral_t<svd, USART6>;

template<int INST> struct usart_traits {};

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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_USART1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_USART1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_USART1SMEN;
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
    static constexpr signal_t DE = USART2_DE;
    static constexpr signal_t NSS = USART2_NSS;
    static constexpr signal_t RTS = USART2_RTS;
    static constexpr signal_t RX = USART2_RX;
    static constexpr signal_t TX = USART2_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

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
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_USART2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART2SMEN;
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
    static constexpr signal_t DE = USART3_DE;
    static constexpr signal_t NSS = USART3_NSS;
    static constexpr signal_t RTS = USART3_RTS;
    static constexpr signal_t RX = USART3_RX;
    static constexpr signal_t TX = USART3_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

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
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_USART3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART3SMEN;
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
    static constexpr signal_t CK = USART4_CK;
    static constexpr signal_t CTS = USART4_CTS;
    static constexpr signal_t DE = USART4_DE;
    static constexpr signal_t NSS = USART4_NSS;
    static constexpr signal_t RTS = USART4_RTS;
    static constexpr signal_t RX = USART4_RX;
    static constexpr signal_t TX = USART4_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

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

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_USART4SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART4SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USART4RST;
    }
};

template<> struct usart_traits<5>
{
    using usart = usart5_t;
    static constexpr signal_t CK = USART5_CK;
    static constexpr signal_t CTS = USART5_CTS;
    static constexpr signal_t DE = USART5_DE;
    static constexpr signal_t NSS = USART5_NSS;
    static constexpr signal_t RTS = USART5_RTS;
    static constexpr signal_t RX = USART5_RX;
    static constexpr signal_t TX = USART5_TX;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

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

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_USART5SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART5SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USART5RST;
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
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USART6EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USART6EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_USART6SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_USART6SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USART6RST;
    }
};

template<> struct dma_request_t<USART1, USART_RX>
{
    static constexpr unsigned ID = 52;
};

template<> struct dma_request_t<USART1, USART_TX>
{
    static constexpr unsigned ID = 53;
};

template<> struct dma_request_t<USART2, USART_RX>
{
    static constexpr unsigned ID = 54;
};

template<> struct dma_request_t<USART2, USART_TX>
{
    static constexpr unsigned ID = 55;
};

template<> struct dma_request_t<USART3, USART_RX>
{
    static constexpr unsigned ID = 56;
};

template<> struct dma_request_t<USART3, USART_TX>
{
    static constexpr unsigned ID = 57;
};

template<> struct dma_request_t<USART4, USART_RX>
{
    static constexpr unsigned ID = 58;
};

template<> struct dma_request_t<USART4, USART_TX>
{
    static constexpr unsigned ID = 59;
};

template<> struct dma_request_t<USART5, USART_RX>
{
    static constexpr unsigned ID = 76;
};

template<> struct dma_request_t<USART5, USART_TX>
{
    static constexpr unsigned ID = 77;
};

template<> struct dma_request_t<USART6, USART_RX>
{
    static constexpr unsigned ID = 78;
};

template<> struct dma_request_t<USART6, USART_TX>
{
    static constexpr unsigned ID = 79;
};
