#pragma once

////
//
//      STM32H7 SPI peripherals
//
///

// SPI1: Serial peripheral interface

struct stm32h742x_spi1_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t CFG1; // configuration register 1
    volatile uint32_t CFG2; // configuration register 2
    volatile uint32_t IER; // Interrupt Enable Register
    volatile uint32_t SR; // Status Register
    volatile uint32_t IFCR; // Interrupt/Status Flags Clear Register
    reserved_t<0x1> _0x1c;
    volatile uint32_t TXDR; // Transmit Data Register
    reserved_t<0x3> _0x24;
    volatile uint32_t RXDR; // Receive Data Register
    reserved_t<0x3> _0x34;
    volatile uint32_t CRCPOLY; // Polynomial Register
    volatile uint32_t TXCRC; // Transmitter CRC Register
    volatile uint32_t RXCRC; // Receiver CRC Register
    volatile uint32_t UDRDR; // Underrun Data Register
    volatile uint32_t CGFR; // configuration register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_IOLOCK = 0x10000; // Locking the AF configuration of associated IOs
    static constexpr uint32_t CR1_TCRCI = 0x8000; // CRC calculation initialization pattern control for transmitter
    static constexpr uint32_t CR1_RCRCI = 0x4000; // CRC calculation initialization pattern control for receiver
    static constexpr uint32_t CR1_CRC33_17 = 0x2000; // 32-bit CRC polynomial configuration
    static constexpr uint32_t CR1_SSI = 0x1000; // Internal SS signal input level
    static constexpr uint32_t CR1_HDDIR = 0x800; // Rx/Tx direction at Half-duplex mode
    static constexpr uint32_t CR1_CSUSP = 0x400; // Master SUSPend request
    static constexpr uint32_t CR1_CSTART = 0x200; // Master transfer start
    static constexpr uint32_t CR1_MASRX = 0x100; // Master automatic SUSP in Receive mode
    static constexpr uint32_t CR1_SPE = 0x1; // Serial Peripheral Enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CR2_TSER; // Number of data transfer extension to be reload into TSIZE just when a previous
    typedef bit_field_t<0, 0xffff> CR2_TSIZE; // Number of data at current transfer

    static constexpr uint32_t CFG1_RESET_VALUE = 0x70007; // Reset value
    typedef bit_field_t<28, 0x7> CFG1_MBR; // Master baud rate
    static constexpr uint32_t CFG1_CRCEN = 0x400000; // Hardware CRC computation enable
    typedef bit_field_t<16, 0x1f> CFG1_CRCSIZE; // Length of CRC frame to be transacted and compared
    static constexpr uint32_t CFG1_TXDMAEN = 0x8000; // Tx DMA stream enable
    static constexpr uint32_t CFG1_RXDMAEN = 0x4000; // Rx DMA stream enable
    typedef bit_field_t<11, 0x3> CFG1_UDRDET; // Detection of underrun condition at slave transmitter
    typedef bit_field_t<9, 0x3> CFG1_UDRCFG; // Behavior of slave transmitter at underrun condition
    typedef bit_field_t<5, 0xf> CFG1_FTHVL; // threshold level
    typedef bit_field_t<0, 0x1f> CFG1_DSIZE; // Number of bits in at single SPI data frame

    static constexpr uint32_t CFG2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFG2_AFCNTR = 0x80000000; // Alternate function GPIOs control
    static constexpr uint32_t CFG2_SSOM = 0x40000000; // SS output management in master mode
    static constexpr uint32_t CFG2_SSOE = 0x20000000; // SS output enable
    static constexpr uint32_t CFG2_SSIOP = 0x10000000; // SS input/output polarity
    static constexpr uint32_t CFG2_SSM = 0x4000000; // Software management of SS signal input
    static constexpr uint32_t CFG2_CPOL = 0x2000000; // Clock polarity
    static constexpr uint32_t CFG2_CPHA = 0x1000000; // Clock phase
    static constexpr uint32_t CFG2_LSBFRST = 0x800000; // Data frame format
    static constexpr uint32_t CFG2_MASTER = 0x400000; // SPI Master
    typedef bit_field_t<19, 0x7> CFG2_SP; // Serial Protocol
    typedef bit_field_t<17, 0x3> CFG2_COMM; // SPI Communication Mode
    static constexpr uint32_t CFG2_IOSWP = 0x8000; // Swap functionality of MISO and MOSI pins
    typedef bit_field_t<4, 0xf> CFG2_MIDI; // Master Inter-Data Idleness
    typedef bit_field_t<0, 0xf> CFG2_MSSI; // Master SS Idleness

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TSERFIE = 0x400; // Additional number of transactions reload interrupt enable
    static constexpr uint32_t IER_MODFIE = 0x200; // Mode Fault interrupt enable
    static constexpr uint32_t IER_TIFREIE = 0x100; // TIFRE interrupt enable
    static constexpr uint32_t IER_CRCEIE = 0x80; // CRC Interrupt enable
    static constexpr uint32_t IER_OVRIE = 0x40; // OVR interrupt enable
    static constexpr uint32_t IER_UDRIE = 0x20; // UDR interrupt enable
    static constexpr uint32_t IER_TXTFIE = 0x10; // TXTFIE interrupt enable
    static constexpr uint32_t IER_EOTIE = 0x8; // EOT, SUSP and TXC interrupt enable
    static constexpr uint32_t IER_DPXPIE = 0x4; // DXP interrupt enabled
    static constexpr uint32_t IER_TXPIE = 0x2; // TXP interrupt enable
    static constexpr uint32_t IER_RXPIE = 0x1; // RXP Interrupt Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x1002; // Reset value
    typedef bit_field_t<16, 0xffff> SR_CTSIZE; // Number of data frames remaining in current TSIZE session
    static constexpr uint32_t SR_RXWNE = 0x8000; // RxFIFO Word Not Empty
    typedef bit_field_t<13, 0x3> SR_RXPLVL; // RxFIFO Packing LeVeL
    static constexpr uint32_t SR_TXC = 0x1000; // TxFIFO transmission complete
    static constexpr uint32_t SR_SUSP = 0x800; // SUSPend
    static constexpr uint32_t SR_TSERF = 0x400; // Additional number of SPI data to be transacted was reload
    static constexpr uint32_t SR_MODF = 0x200; // Mode Fault
    static constexpr uint32_t SR_TIFRE = 0x100; // TI frame format error
    static constexpr uint32_t SR_CRCE = 0x80; // CRC Error
    static constexpr uint32_t SR_OVR = 0x40; // Overrun
    static constexpr uint32_t SR_UDR = 0x20; // Underrun at slave transmission mode
    static constexpr uint32_t SR_TXTF = 0x10; // Transmission Transfer Filled
    static constexpr uint32_t SR_EOT = 0x8; // End Of Transfer
    static constexpr uint32_t SR_DXP = 0x4; // Duplex Packet
    static constexpr uint32_t SR_TXP = 0x2; // Tx-Packet space available
    static constexpr uint32_t SR_RXP = 0x1; // Rx-Packet available

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_SUSPC = 0x800; // SUSPend flag clear
    static constexpr uint32_t IFCR_TSERFC = 0x400; // TSERFC flag clear
    static constexpr uint32_t IFCR_MODFC = 0x200; // Mode Fault flag clear
    static constexpr uint32_t IFCR_TIFREC = 0x100; // TI frame format error flag clear
    static constexpr uint32_t IFCR_CRCEC = 0x80; // CRC Error flag clear
    static constexpr uint32_t IFCR_OVRC = 0x40; // Overrun flag clear
    static constexpr uint32_t IFCR_UDRC = 0x20; // Underrun flag clear
    static constexpr uint32_t IFCR_TXTFC = 0x10; // Transmission Transfer Filled flag clear
    static constexpr uint32_t IFCR_EOTC = 0x8; // End Of Transfer flag clear


    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXDR_TXDR; // Transmit data register


    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RXDR_RXDR; // Receive data register


    static constexpr uint32_t CRCPOLY_RESET_VALUE = 0x107; // Reset value
    typedef bit_field_t<0, 0xffffffff> CRCPOLY_CRCPOLY; // CRC polynomial register

    static constexpr uint32_t TXCRC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TXCRC_TXCRC; // CRC register for transmitter

    static constexpr uint32_t RXCRC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RXCRC_RXCRC; // CRC register for receiver

    static constexpr uint32_t UDRDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> UDRDR_UDRDR; // Data at slave underrun condition

    static constexpr uint32_t CGFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CGFR_MCKOE = 0x2000000; // Master clock output enable
    static constexpr uint32_t CGFR_ODD = 0x1000000; // Odd factor for the prescaler
    typedef bit_field_t<16, 0xff> CGFR_I2SDIV; // I2S linear prescaler
    static constexpr uint32_t CGFR_DATFMT = 0x4000; // Data format
    static constexpr uint32_t CGFR_WSINV = 0x2000; // Fixed channel length in SLAVE
    static constexpr uint32_t CGFR_FIXCH = 0x1000; // Word select inversion
    static constexpr uint32_t CGFR_CKPOL = 0x800; // Serial audio clock polarity
    static constexpr uint32_t CGFR_CHLEN = 0x400; // Channel length (number of bits per audio channel)
    typedef bit_field_t<8, 0x3> CGFR_DATLEN; // Data length to be transferred
    static constexpr uint32_t CGFR_PCMSYNC = 0x80; // PCM frame synchronization
    typedef bit_field_t<4, 0x3> CGFR_I2SSTD; // I2S standard selection
    typedef bit_field_t<1, 0x7> CGFR_I2SCFG; // I2S configuration mode
    static constexpr uint32_t CGFR_I2SMOD = 0x1; // I2S mode selection
};

template<>
struct peripheral_t<STM32H742x, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI5>
{
    static constexpr periph_t P = SPI5;
    using T = stm32h742x_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, SPI6>
{
    static constexpr periph_t P = SPI6;
    using T = stm32h742x_spi1_t;
    static T& V;
};

using spi1_t = peripheral_t<svd, SPI1>;
using spi2_t = peripheral_t<svd, SPI2>;
using spi3_t = peripheral_t<svd, SPI3>;
using spi4_t = peripheral_t<svd, SPI4>;
using spi5_t = peripheral_t<svd, SPI5>;
using spi6_t = peripheral_t<svd, SPI6>;

template<int INST> struct spi_traits {};

template<> struct spi_traits<1>
{
    using spi = spi1_t;
    static constexpr signal_t MISO = SPI1_MISO;
    static constexpr signal_t MOSI = SPI1_MOSI;
    static constexpr signal_t NSS = SPI1_NSS;
    static constexpr signal_t SCK = SPI1_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SPI1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SPI1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SPI1RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct spi_traits<2>
{
    using spi = spi2_t;
    static constexpr signal_t MISO = SPI2_MISO;
    static constexpr signal_t MOSI = SPI2_MOSI;
    static constexpr signal_t NSS = SPI2_NSS;
    static constexpr signal_t SCK = SPI2_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_SPI2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_SPI2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_SPI2RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct spi_traits<3>
{
    using spi = spi3_t;
    static constexpr signal_t MISO = SPI3_MISO;
    static constexpr signal_t MOSI = SPI3_MOSI;
    static constexpr signal_t NSS = SPI3_NSS;
    static constexpr signal_t SCK = SPI3_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1LENR |= RCC::T::APB1LENR_SPI3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_SPI3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_SPI3RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct spi_traits<4>
{
    using spi = spi4_t;
    static constexpr signal_t MISO = SPI4_MISO;
    static constexpr signal_t MOSI = SPI4_MOSI;
    static constexpr signal_t NSS = SPI4_NSS;
    static constexpr signal_t SCK = SPI4_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SPI4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct spi_traits<5>
{
    using spi = spi5_t;
    static constexpr signal_t MISO = SPI5_MISO;
    static constexpr signal_t MOSI = SPI5_MOSI;
    static constexpr signal_t NSS = SPI5_NSS;
    static constexpr signal_t SCK = SPI5_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SPI5EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SPI5EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SPI5RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct spi_traits<6>
{
    using spi = spi6_t;
    static constexpr signal_t MISO = SPI6_MISO;
    static constexpr signal_t MOSI = SPI6_MOSI;
    static constexpr signal_t NSS = SPI6_NSS;
    static constexpr signal_t SCK = SPI6_SCK;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB4ENR |= RCC::T::APB4ENR_SPI6EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB4ENR &= ~RCC::T::APB4ENR_SPI6EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB4RSTR |= RCC::T::APB4RSTR_SPI6RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
