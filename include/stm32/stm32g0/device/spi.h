#pragma once

////
//
//      STM32G0 SPI peripherals
//
///

// SPI1: Serial peripheral interface/Inter-IC sound

struct stm32g030_spi1_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register
    volatile uint32_t CRCPR; // CRC polynomial register
    volatile uint32_t RXCRCR; // RX CRC register
    volatile uint32_t TXCRCR; // TX CRC register
    volatile uint32_t I2SCFGR; // configuration register
    volatile uint32_t I2SPR; // prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_BIDIMODE = 0x8000; // Bidirectional data mode enable
    static constexpr uint32_t CR1_BIDIOE = 0x4000; // Output enable in bidirectional mode
    static constexpr uint32_t CR1_CRCEN = 0x2000; // Hardware CRC calculation enable
    static constexpr uint32_t CR1_CRCNEXT = 0x1000; // CRC transfer next
    static constexpr uint32_t CR1_DFF = 0x800; // Data frame format
    static constexpr uint32_t CR1_RXONLY = 0x400; // Receive only
    static constexpr uint32_t CR1_SSM = 0x200; // Software slave management
    static constexpr uint32_t CR1_SSI = 0x100; // Internal slave select
    static constexpr uint32_t CR1_LSBFIRST = 0x80; // Frame format
    static constexpr uint32_t CR1_SPE = 0x40; // SPI enable
    typedef bit_field_t<3, 0x7> CR1_BR; // Baud rate control
    static constexpr uint32_t CR1_MSTR = 0x4; // Master selection
    static constexpr uint32_t CR1_CPOL = 0x2; // Clock polarity
    static constexpr uint32_t CR1_CPHA = 0x1; // Clock phase

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_RXDMAEN = 0x1; // Rx buffer DMA enable
    static constexpr uint32_t CR2_TXDMAEN = 0x2; // Tx buffer DMA enable
    static constexpr uint32_t CR2_SSOE = 0x4; // SS output enable
    static constexpr uint32_t CR2_NSSP = 0x8; // NSS pulse management
    static constexpr uint32_t CR2_FRF = 0x10; // Frame format
    static constexpr uint32_t CR2_ERRIE = 0x20; // Error interrupt enable
    static constexpr uint32_t CR2_RXNEIE = 0x40; // RX buffer not empty interrupt enable
    static constexpr uint32_t CR2_TXEIE = 0x80; // Tx buffer empty interrupt enable
    typedef bit_field_t<8, 0xf> CR2_DS; // Data size
    static constexpr uint32_t CR2_FRXTH = 0x1000; // FIFO reception threshold
    static constexpr uint32_t CR2_LDMA_RX = 0x2000; // Last DMA transfer for reception
    static constexpr uint32_t CR2_LDMA_TX = 0x4000; // Last DMA transfer for transmission

    static constexpr uint32_t SR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t SR_RXNE = 0x1; // Receive buffer not empty
    static constexpr uint32_t SR_TXE = 0x2; // Transmit buffer empty
    static constexpr uint32_t SR_CHSIDE = 0x4; // Channel side
    static constexpr uint32_t SR_UDR = 0x8; // Underrun flag
    static constexpr uint32_t SR_CRCERR = 0x10; // CRC error flag
    static constexpr uint32_t SR_MODF = 0x20; // Mode fault
    static constexpr uint32_t SR_OVR = 0x40; // Overrun flag
    static constexpr uint32_t SR_BSY = 0x80; // Busy flag
    static constexpr uint32_t SR_TIFRFE = 0x100; // TI frame format error
    typedef bit_field_t<9, 0x3> SR_FRLVL; // FIFO reception level
    typedef bit_field_t<11, 0x3> SR_FTLVL; // FIFO transmission level

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DR; // Data register

    static constexpr uint32_t CRCPR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xffff> CRCPR_CRCPOLY; // CRC polynomial register

    static constexpr uint32_t RXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RXCRCR_RXCRC; // Rx CRC register

    static constexpr uint32_t TXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TXCRCR_TXCRC; // Tx CRC register

    static constexpr uint32_t I2SCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1; // Channel length (number of bits per audio channel)
    typedef bit_field_t<1, 0x3> I2SCFGR_DATLEN; // Data length to be transferred
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8; // Inactive state clock polarity
    typedef bit_field_t<4, 0x3> I2SCFGR_I2SSTD; // standard selection
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCM frame synchronization
    typedef bit_field_t<8, 0x3> I2SCFGR_I2SCFG; // I2S configuration mode
    static constexpr uint32_t I2SCFGR_SE2 = 0x400; // I2S enable
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2S mode selection

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2SPR_I2SDIV; // linear prescaler
    static constexpr uint32_t I2SPR_ODD = 0x100; // Odd factor for the prescaler
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // Master clock output enable
};

// SPI1: Serial peripheral interface/Inter-IC sound

struct stm32g070_spi1_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register
    volatile uint32_t CRCPR; // CRC polynomial register
    volatile uint32_t RXCRCR; // RX CRC register
    volatile uint32_t TXCRCR; // TX CRC register
    volatile uint32_t I2SCFGR; // configuration register
    volatile uint32_t I2SPR; // prescaler register
    reserved_t<0xf3> _0x24;
    volatile uint32_t HWCFGR; // hardware configuration register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_BIDIMODE = 0x8000; // Bidirectional data mode enable
    static constexpr uint32_t CR1_BIDIOE = 0x4000; // Output enable in bidirectional mode
    static constexpr uint32_t CR1_CRCEN = 0x2000; // Hardware CRC calculation enable
    static constexpr uint32_t CR1_CRCNEXT = 0x1000; // CRC transfer next
    static constexpr uint32_t CR1_DFF = 0x800; // Data frame format
    static constexpr uint32_t CR1_RXONLY = 0x400; // Receive only
    static constexpr uint32_t CR1_SSM = 0x200; // Software slave management
    static constexpr uint32_t CR1_SSI = 0x100; // Internal slave select
    static constexpr uint32_t CR1_LSBFIRST = 0x80; // Frame format
    static constexpr uint32_t CR1_SPE = 0x40; // SPI enable
    typedef bit_field_t<3, 0x7> CR1_BR; // Baud rate control
    static constexpr uint32_t CR1_MSTR = 0x4; // Master selection
    static constexpr uint32_t CR1_CPOL = 0x2; // Clock polarity
    static constexpr uint32_t CR1_CPHA = 0x1; // Clock phase

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_RXDMAEN = 0x1; // Rx buffer DMA enable
    static constexpr uint32_t CR2_TXDMAEN = 0x2; // Tx buffer DMA enable
    static constexpr uint32_t CR2_SSOE = 0x4; // SS output enable
    static constexpr uint32_t CR2_NSSP = 0x8; // NSS pulse management
    static constexpr uint32_t CR2_FRF = 0x10; // Frame format
    static constexpr uint32_t CR2_ERRIE = 0x20; // Error interrupt enable
    static constexpr uint32_t CR2_RXNEIE = 0x40; // RX buffer not empty interrupt enable
    static constexpr uint32_t CR2_TXEIE = 0x80; // Tx buffer empty interrupt enable
    typedef bit_field_t<8, 0xf> CR2_DS; // Data size
    static constexpr uint32_t CR2_FRXTH = 0x1000; // FIFO reception threshold
    static constexpr uint32_t CR2_LDMA_RX = 0x2000; // Last DMA transfer for reception
    static constexpr uint32_t CR2_LDMA_TX = 0x4000; // Last DMA transfer for transmission

    static constexpr uint32_t SR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t SR_RXNE = 0x1; // Receive buffer not empty
    static constexpr uint32_t SR_TXE = 0x2; // Transmit buffer empty
    static constexpr uint32_t SR_CHSIDE = 0x4; // Channel side
    static constexpr uint32_t SR_UDR = 0x8; // Underrun flag
    static constexpr uint32_t SR_CRCERR = 0x10; // CRC error flag
    static constexpr uint32_t SR_MODF = 0x20; // Mode fault
    static constexpr uint32_t SR_OVR = 0x40; // Overrun flag
    static constexpr uint32_t SR_BSY = 0x80; // Busy flag
    static constexpr uint32_t SR_TIFRFE = 0x100; // TI frame format error
    typedef bit_field_t<9, 0x3> SR_FRLVL; // FIFO reception level
    typedef bit_field_t<11, 0x3> SR_FTLVL; // FIFO transmission level

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_DR; // Data register

    static constexpr uint32_t CRCPR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xffff> CRCPR_CRCPOLY; // CRC polynomial register

    static constexpr uint32_t RXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RXCRCR_RXCRC; // Rx CRC register

    static constexpr uint32_t TXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TXCRCR_TXCRC; // Tx CRC register

    static constexpr uint32_t I2SCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1; // Channel length (number of bits per audio channel)
    typedef bit_field_t<1, 0x3> I2SCFGR_DATLEN; // Data length to be transferred
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8; // Inactive state clock polarity
    typedef bit_field_t<4, 0x3> I2SCFGR_I2SSTD; // standard selection
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCM frame synchronization
    typedef bit_field_t<8, 0x3> I2SCFGR_I2SCFG; // I2S configuration mode
    static constexpr uint32_t I2SCFGR_SE2 = 0x400; // I2S enable
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2S mode selection

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2SPR_I2SDIV; // linear prescaler
    static constexpr uint32_t I2SPR_ODD = 0x100; // Odd factor for the prescaler
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // Master clock output enable


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR_CRCCFG; // CRC capable at SPI mode
    typedef bit_field_t<4, 0xf> HWCFGR_I2SCFG; // I2S mode implementation
    typedef bit_field_t<8, 0xf> HWCFGR_I2SCKCFG; // I2S master clock generator at I2S mode
    typedef bit_field_t<12, 0xf> HWCFGR_DSCFG; // SPI data size configuration
    typedef bit_field_t<16, 0xf> HWCFGR_NSSCFG; // NSS pulse feature enhancement at SPI master

    static constexpr uint32_t VERR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

// SPI1: Serial peripheral interface

struct stm32g0b1_spi1_t
{
    volatile uint16_t SPI_CR1; // SPI control register 1
    reserved_t<0x0> _0x2;
    volatile uint16_t SPI_CR2; // SPI control register 2
    reserved_t<0x0> _0x6;
    volatile uint16_t SPI_SR; // SPI status register
    reserved_t<0x0> _0xa;
    volatile uint16_t SPI_DR; // SPI data register
    reserved_t<0x0> _0xe;
    volatile uint16_t SPI_CRCPR; // SPI CRC polynomial register
    reserved_t<0x0> _0x12;
    volatile uint16_t SPI_RXCRCR; // SPI Rx CRC register
    reserved_t<0x0> _0x16;
    volatile uint16_t SPI_TXCRCR; // SPI Tx CRC register
    reserved_t<0x0> _0x1a;
    volatile uint16_t SPI_I2SCFGR; // SPI_I2S configuration register
    reserved_t<0x0> _0x1e;
    volatile uint16_t SPI_I2SPR; // SPI_I2S prescaler register

    static constexpr uint32_t SPI_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SPI_CR1_CPHA = 0x1; // Clock phase Note: This bit should not be changed when communication is ongoing. This bit is not used in I2S mode and SPI TI mode except the case when CRC is applied at TI mode.
    static constexpr uint32_t SPI_CR1_CPOL = 0x2; // Clock polarity Note: This bit should not be changed when communication is ongoing. This bit is not used in I2S mode and SPI TI mode except the case when CRC is applied at TI mode.
    static constexpr uint32_t SPI_CR1_MSTR = 0x4; // Master selection Note: This bit should not be changed when communication is ongoing. This bit is not used in I2S mode.
    typedef bit_field_t<3, 0x7> SPI_CR1_BR; // Baud rate control Note: These bits should not be changed when communication is ongoing. These bits are not used in I2S mode.
    static constexpr uint32_t SPI_CR1_SPE = 0x40; // SPI enable Note: When disabling the SPI, follow the procedure described in SPI on page1021. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_LSBFIRST = 0x80; // Frame format Note: 1. This bit should not be changed when communication is ongoing. 2. This bit is not used in I2S mode and SPI TI mode.
    static constexpr uint32_t SPI_CR1_SSI = 0x100; // Internal slave select This bit has an effect only when the SSM bit is set. The value of this bit is forced onto the NSS pin and the I/O value of the NSS pin is ignored. Note: This bit is not used in I2S mode and SPI TI mode.
    static constexpr uint32_t SPI_CR1_SSM = 0x200; // Software slave management When the SSM bit is set, the NSS pin input is replaced with the value from the SSI bit. Note: This bit is not used in I2S mode and SPI TI mode.
    static constexpr uint32_t SPI_CR1_RXONLY = 0x400; // Receive only mode enabled. This bit enables simplex communication using a single unidirectional line to receive data exclusively. Keep BIDIMODE bit clear when receive only mode is active.This bit is also useful in a multislave system in which this particular slave is not accessed, the output from the accessed slave is not corrupted. Note: This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_CRCL = 0x800; // CRC length This bit is set and cleared by software to select the CRC length. Note: This bit should be written only when SPI is disabled (SPE = &#39;0) for correct operation. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_CRCNEXT = 0x1000; // Transmit CRC next Note: This bit has to be written as soon as the last data is written in the SPI_DR register. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_CRCEN = 0x2000; // Hardware CRC calculation enable Note: This bit should be written only when SPI is disabled (SPE = &#39;0) for correct operation. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_BIDIOE = 0x4000; // Output enable in bidirectional mode This bit combined with the BIDIMODE bit selects the direction of transfer in bidirectional mode. Note: In master mode, the MOSI pin is used and in slave mode, the MISO pin is used. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR1_BIDIMODE = 0x8000; // Bidirectional data mode enable. This bit enables half-duplex communication using common single bidirectional data line. Keep RXONLY bit clear when bidirectional mode is active. Note: This bit is not used in I2S mode.


    static constexpr uint32_t SPI_CR2_RESET_VALUE = 0x700; // Reset value
    static constexpr uint32_t SPI_CR2_RXDMAEN = 0x1; // Rx buffer DMA enable When this bit is set, a DMA request is generated whenever the RXNE flag is set.
    static constexpr uint32_t SPI_CR2_TXDMAEN = 0x2; // Tx buffer DMA enable When this bit is set, a DMA request is generated whenever the TXE flag is set.
    static constexpr uint32_t SPI_CR2_SSOE = 0x4; // SS output enable Note: This bit is not used in I2S mode and SPI TI mode.
    static constexpr uint32_t SPI_CR2_NSSP = 0x8; // NSS pulse management This bit is used in master mode only. it allows the SPI to generate an NSS pulse between two consecutive data when doing continuous transfers. In the case of a single data transfer, it forces the NSS pin high level after the transfer. It has no meaning if CPHA = 1, or FRF = 1. Note: 1. This bit must be written only when the SPI is disabled (SPE=0). 2. This bit is not used in I2S mode and SPI TI mode.
    static constexpr uint32_t SPI_CR2_FRF = 0x10; // Frame format 1 SPI TI mode Note: This bit must be written only when the SPI is disabled (SPE=0). This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR2_ERRIE = 0x20; // Error interrupt enable This bit controls the generation of an interrupt when an error condition occurs (CRCERR, OVR, MODF in SPI mode, FRE at TI mode and UDR, OVR, and FRE in I2S mode).
    static constexpr uint32_t SPI_CR2_RXNEIE = 0x40; // RX buffer not empty interrupt enable
    static constexpr uint32_t SPI_CR2_TXEIE = 0x80; // Tx buffer empty interrupt enable
    typedef bit_field_t<8, 0xf> SPI_CR2_DS; // Data size These bits configure the data length for SPI transfers. If software attempts to write one of the Not used values, they are forced to the value 0111 (8-bit) Note: These bits are not used in I2S mode.
    static constexpr uint32_t SPI_CR2_FRXTH = 0x1000; // FIFO reception threshold This bit is used to set the threshold of the RXFIFO that triggers an RXNE event Note: This bit is not used in I2S mode.
    static constexpr uint32_t SPI_CR2_LDMA_RX = 0x2000; // Last DMA transfer for reception This bit is used in data packing mode, to define if the total number of data to receive by DMA is odd or even. It has significance only if the RXDMAEN bit in the SPI_CR2 register is set and if packing mode is used (data length =&lt; 8-bit and write access to SPI_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPI_CR1 register). Note: Refer to if the CRCEN bit is set. This bit is not used in IS mode.
    static constexpr uint32_t SPI_CR2_LDMA_TX = 0x4000; // Last DMA transfer for transmission This bit is used in data packing mode, to define if the total number of data to transmit by DMA is odd or even. It has significance only if the TXDMAEN bit in the SPI_CR2 register is set and if packing mode is used (data length =&lt; 8-bit and write access to SPI_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPI_CR1 register). Note: Refer to if the CRCEN bit is set. This bit is not used in IS mode.


    static constexpr uint32_t SPI_SR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t SPI_SR_RXNE = 0x1; // Receive buffer not empty
    static constexpr uint32_t SPI_SR_TXE = 0x2; // Transmit buffer empty
    static constexpr uint32_t SPI_SR_CHSIDE = 0x4; // Channel side Note: This bit is not used in SPI mode. It has no significance in PCM mode.
    static constexpr uint32_t SPI_SR_UDR = 0x8; // Underrun flag This flag is set by hardware and reset by a software sequence. Refer to page1057 for the software sequence. Note: This bit is not used in SPI mode.
    static constexpr uint32_t SPI_SR_CRCERR = 0x10; // CRC error flag Note: This flag is set by hardware and cleared by software writing 0. This bit is not used in I2S mode.
    static constexpr uint32_t SPI_SR_MODF = 0x20; // Mode fault This flag is set by hardware and reset by a software sequence. Refer to (MODF) on page1031 for the software sequence. Note: This bit is not used in I2S mode.
    static constexpr uint32_t SPI_SR_OVR = 0x40; // Overrun flag This flag is set by hardware and reset by a software sequence. Refer to page1057 for the software sequence.
    static constexpr uint32_t SPI_SR_BSY = 0x80; // Busy flag This flag is set and cleared by hardware. Note: The BSY flag must be used with caution: refer to and .
    static constexpr uint32_t SPI_SR_FRE = 0x100; // Frame format error This flag is used for SPI in TI slave mode and I2S slave mode. Refer to error flags and . This flag is set by hardware and reset when SPI_SR is read by software.
    typedef bit_field_t<9, 0x3> SPI_SR_FRLVL; // FIFO reception level These bits are set and cleared by hardware. Note: These bits are not used in IS mode and in SPI receive-only mode while CRC calculation is enabled.
    typedef bit_field_t<11, 0x3> SPI_SR_FTLVL; // FIFO transmission level These bits are set and cleared by hardware. Note: This bit is not used in I2S mode.


    static constexpr uint32_t SPI_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SPI_DR_DR; // Data register Data received or to be transmitted The data register serves as an interface between the Rx and Tx FIFOs. When the data register is read, RxFIFO is accessed while the write to data register accesses TxFIFO (See ). Note: Data is always right-aligned. Unused bits are ignored when writing to the register, and read as zero when the register is read. The Rx threshold setting must always correspond with the read access currently used.


    static constexpr uint32_t SPI_CRCPR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xffff> SPI_CRCPR_CRCPOLY; // CRC polynomial register This register contains the polynomial for the CRC calculation. The CRC polynomial (0x0007) is the reset value of this register. Another polynomial can be configured as required.


    static constexpr uint32_t SPI_RXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SPI_RXCRCR_RXCRC; // Rx CRC register When CRC calculation is enabled, the RXCRC[15:0] bits contain the computed CRC value of the subsequently received bytes. This register is reset when the CRCEN bit in SPI_CR1 register is written to 1. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPR register. Only the 8 LSB bits are considered when the CRC frame format is set to be 8-bit length (CRCL bit in the SPI_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit CRC frame format is selected (CRCL bit in the SPI_CR1 register is set). CRC calculation is done based on any CRC16 standard. Note: A read to this register when the BSY Flag is set could return an incorrect value. These bits are not used in I2S mode.


    static constexpr uint32_t SPI_TXCRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> SPI_TXCRCR_TXCRC; // Tx CRC register When CRC calculation is enabled, the TXCRC[7:0] bits contain the computed CRC value of the subsequently transmitted bytes. This register is reset when the CRCEN bit of SPI_CR1 is written to 1. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPR register. Only the 8 LSB bits are considered when the CRC frame format is set to be 8-bit length (CRCL bit in the SPI_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit CRC frame format is selected (CRCL bit in the SPI_CR1 register is set). CRC calculation is done based on any CRC16 standard. Note: A read to this register when the BSY flag is set could return an incorrect value. These bits are not used in I2S mode.


    static constexpr uint32_t SPI_I2SCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SPI_I2SCFGR_CHLEN = 0x1; // Channel length (number of bits per audio channel) The bit write operation has a meaning only if DATLEN = 00 otherwise the channel length is fixed to 32-bit by hardware whatever the value filled in. Note: For correct operation, this bit should be configured when the I2S is disabled. It is not used in SPI mode.
    typedef bit_field_t<1, 0x3> SPI_I2SCFGR_DATLEN; // Data length to be transferred Note: For correct operation, these bits should be configured when the I2S is disabled. They are not used in SPI mode.
    static constexpr uint32_t SPI_I2SCFGR_CKPOL = 0x8; // Inactive state clock polarity Note: For correct operation, this bit should be configured when the I2S is disabled. It is not used in SPI mode. The bit CKPOL does not affect the CK edge sensitivity used to receive or transmit the SD and WS signals.
    typedef bit_field_t<4, 0x3> SPI_I2SCFGR_I2SSTD; // I2S standard selection For more details on I2S standards, refer to Note: For correct operation, these bits should be configured when the I2S is disabled. They are not used in SPI mode.
    static constexpr uint32_t SPI_I2SCFGR_PCMSYNC = 0x80; // PCM frame synchronization Note: This bit has a meaning only if I2SSTD = 11 (PCM standard is used). It is not used in SPI mode.
    typedef bit_field_t<8, 0x3> SPI_I2SCFGR_I2SCFG; // I2S configuration mode Note: These bits should be configured when the I2S is disabled. They are not used in SPI mode.
    static constexpr uint32_t SPI_I2SCFGR_I2SE = 0x400; // I2S enable Note: This bit is not used in SPI mode.
    static constexpr uint32_t SPI_I2SCFGR_I2SMOD = 0x800; // I2S mode selection Note: This bit should be configured when the SPI is disabled.
    static constexpr uint32_t SPI_I2SCFGR_ASTRTEN = 0x1000; // Asynchronous start enable. When the I2S is enabled in slave mode, the hardware starts the transfer when the I2S clock is received and an appropriate transition is detected on the WS signal. When the I2S is enabled in slave mode, the hardware starts the transfer when the I2S clock is received and the appropriate level is detected on the WS signal. Note: The appropriate transition is a falling edge on WS signal when I2S Philips Standard is used, or a rising edge for other standards. The appropriate level is a low level on WS signal when I2S Philips Standard is used, or a high level for other standards. Please refer to for additional information.


    static constexpr uint32_t SPI_I2SPR_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<0, 0xff> SPI_I2SPR_I2SDIV; // I2S linear prescaler I2SDIV [7:0] = 0 or I2SDIV [7:0] = 1 are forbidden values. Refer to . Note: These bits should be configured when the I2S is disabled. They are used only when the I2S is in master mode. They are not used in SPI mode.
    static constexpr uint32_t SPI_I2SPR_ODD = 0x100; // Odd factor for the prescaler Refer to . Note: This bit should be configured when the I2S is disabled. It is used only when the I2S is in master mode. It is not used in SPI mode.
    static constexpr uint32_t SPI_I2SPR_MCKOE = 0x200; // Master clock output enable Note: This bit should be configured when the I2S is disabled. It is used only when the I2S is in master mode. It is not used in SPI mode.
};

template<>
struct peripheral_t<STM32G030, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g030_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g070_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g0b1_spi1_t;
    static T& V;
};

using spi1_t = peripheral_t<svd, SPI1>;
using spi2_t = peripheral_t<svd, SPI2>;
using spi3_t = peripheral_t<svd, SPI3>;

template<int INST> struct spi_traits {};

template<> struct spi_traits<1>
{
    using spi = spi1_t;
    static constexpr signal_t MISO = SPI1_MISO;
    static constexpr signal_t MOSI = SPI1_MOSI;
    static constexpr signal_t NSS = SPI1_NSS;
    static constexpr signal_t SCK = SPI1_SCK;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_SPI1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST;
    }
};

template<> struct spi_traits<2>
{
    using spi = spi2_t;
    static constexpr signal_t MISO = SPI2_MISO;
    static constexpr signal_t MOSI = SPI2_MOSI;
    static constexpr signal_t NSS = SPI2_NSS;
    static constexpr signal_t SCK = SPI2_SCK;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_SPI2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_SPI2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_SPI2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_SPI2RST;
    }
};

template<> struct spi_traits<3>
{
    using spi = spi3_t;
    static constexpr signal_t MISO = SPI3_MISO;
    static constexpr signal_t MOSI = SPI3_MOSI;
    static constexpr signal_t NSS = SPI3_NSS;
    static constexpr signal_t SCK = SPI3_SCK;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_SPI3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_SPI3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_SPI3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_SPI3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_SPI3RST;
    }
};

template<> struct dma_request_t<SPI1, SPI_RX>
{
    static constexpr unsigned ID = 16;
};

template<> struct dma_request_t<SPI1, SPI_TX>
{
    static constexpr unsigned ID = 17;
};

template<> struct dma_request_t<SPI2, SPI_RX>
{
    static constexpr unsigned ID = 18;
};

template<> struct dma_request_t<SPI2, SPI_TX>
{
    static constexpr unsigned ID = 19;
};

template<> struct dma_request_t<SPI3, SPI_RX>
{
    static constexpr unsigned ID = 68;
};

template<> struct dma_request_t<SPI3, SPI_TX>
{
    static constexpr unsigned ID = 69;
};
