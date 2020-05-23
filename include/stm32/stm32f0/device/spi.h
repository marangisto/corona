#pragma once

////
//
//      STM32F0 SPI peripherals
//
////

////
//
//      Serial peripheral interface
//
////

struct stm32f0x0_spi1_t
{
    volatile uint32_t CR1;     // [read-write] control register 1
    volatile uint32_t CR2;     // [read-write] control register 2
    volatile uint32_t SR;      // status register
    volatile uint32_t DR;      // [read-write] data register
    volatile uint32_t CRCPR;   // [read-write] CRC polynomial register
    volatile uint32_t RXCRCR;  // [read-only] RX CRC register
    volatile uint32_t TXCRCR;  // [read-only] TX CRC register
    volatile uint32_t I2SCFGR; // [read-write] I2S configuration register
    volatile uint32_t I2SPR;   // [read-write] I2S prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_BIDIMODE = 0x8000; // Bidirectional data mode enable
    static constexpr uint32_t CR1_BIDIOE = 0x4000;   // Output enable in bidirectional mode
    static constexpr uint32_t CR1_CRCEN = 0x2000;    // Hardware CRC calculation enable
    static constexpr uint32_t CR1_CRCNEXT = 0x1000;  // CRC transfer next
    static constexpr uint32_t CR1_DFF = 0x800;       // Data frame format
    static constexpr uint32_t CR1_RXONLY = 0x400;    // Receive only
    static constexpr uint32_t CR1_SSM = 0x200;       // Software slave management
    static constexpr uint32_t CR1_SSI = 0x100;       // Internal slave select
    static constexpr uint32_t CR1_LSBFIRST = 0x80;   // Frame format
    static constexpr uint32_t CR1_SPE = 0x40;        // SPI enable
    template<uint32_t X>
    static constexpr uint32_t CR1_BR =               // Baud rate control
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t CR1_MSTR = 0x4;        // Master selection
    static constexpr uint32_t CR1_CPOL = 0x2;        // Clock polarity
    static constexpr uint32_t CR1_CPHA = 0x1;        // Clock phase

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_RXDMAEN = 0x1;    // Rx buffer DMA enable
    static constexpr uint32_t CR2_TXDMAEN = 0x2;    // Tx buffer DMA enable
    static constexpr uint32_t CR2_SSOE = 0x4;       // SS output enable
    static constexpr uint32_t CR2_NSSP = 0x8;       // NSS pulse management
    static constexpr uint32_t CR2_FRF = 0x10;       // Frame format
    static constexpr uint32_t CR2_ERRIE = 0x20;     // Error interrupt enable
    static constexpr uint32_t CR2_RXNEIE = 0x40;    // RX buffer not empty interrupt enable
    static constexpr uint32_t CR2_TXEIE = 0x80;     // Tx buffer empty interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR2_DS =              // Data size
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR2_FRXTH = 0x1000;   // FIFO reception threshold
    static constexpr uint32_t CR2_LDMA_RX = 0x2000; // Last DMA transfer for reception
    static constexpr uint32_t CR2_LDMA_TX = 0x4000; // Last DMA transfer for transmission

    static constexpr uint32_t SR_RESET_VALUE = 0x2;
    static constexpr uint32_t SR_RXNE = 0x1;     // Receive buffer not empty
    static constexpr uint32_t SR_TXE = 0x2;      // Transmit buffer empty
    static constexpr uint32_t SR_CHSIDE = 0x4;   // Channel side
    static constexpr uint32_t SR_UDR = 0x8;      // Underrun flag
    static constexpr uint32_t SR_CRCERR = 0x10;  // CRC error flag
    static constexpr uint32_t SR_MODF = 0x20;    // Mode fault
    static constexpr uint32_t SR_OVR = 0x40;     // Overrun flag
    static constexpr uint32_t SR_BSY = 0x80;     // Busy flag
    static constexpr uint32_t SR_TIFRFE = 0x100; // TI frame format error
    template<uint32_t X>
    static constexpr uint32_t SR_FRLVL =         // FIFO reception level
        bit_field_t<9, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SR_FTLVL =         // FIFO transmission level
        bit_field_t<11, 0x3>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // Data register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CRCPR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t CRCPR_CRCPOLY =   // CRC polynomial register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RXCRCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXCRCR_RxCRC =   // Rx CRC register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TXCRCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXCRCR_TxCRC =   // Tx CRC register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t I2SCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2S mode selection
    static constexpr uint32_t I2SCFGR_I2SE = 0x400;   // I2S Enable
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_I2SCFG =        // I2S configuration mode
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCM frame synchronization
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_I2SSTD =        // I2S standard selection
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8;    // Steady state clock polarity
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_DATLEN =        // Data length to be transferred
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1;    // Channel length (number of bits per audio channel)

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x10;
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // Master clock output enable
    static constexpr uint32_t I2SPR_ODD = 0x100;   // Odd factor for the prescaler
    template<uint32_t X>
    static constexpr uint32_t I2SPR_I2SDIV =       // I2S Linear prescaler
        bit_field_t<0, 0xff>::value<X>();
};


////
//
//      Serial peripheral interface
//
////

struct stm32f0x1_spi1_t
{
    volatile uint32_t CR1;     // [read-write] control register 1
    volatile uint32_t CR2;     // [read-write] control register 2
    volatile uint32_t SR;      // status register
    volatile uint32_t DR;      // [read-write] data register
    volatile uint32_t CRCPR;   // [read-write] CRC polynomial register
    volatile uint32_t RXCRCR;  // [read-only] RX CRC register
    volatile uint32_t TXCRCR;  // [read-only] TX CRC register
    volatile uint32_t I2SCFGR; // [read-write] I2S configuration register
    volatile uint32_t I2SPR;   // [read-write] I2S prescaler register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_BIDIMODE = 0x8000; // Bidirectional data mode enable
    static constexpr uint32_t CR1_BIDIOE = 0x4000;   // Output enable in bidirectional mode
    static constexpr uint32_t CR1_CRCEN = 0x2000;    // Hardware CRC calculation enable
    static constexpr uint32_t CR1_CRCNEXT = 0x1000;  // CRC transfer next
    static constexpr uint32_t CR1_DFF = 0x800;       // Data frame format
    static constexpr uint32_t CR1_RXONLY = 0x400;    // Receive only
    static constexpr uint32_t CR1_SSM = 0x200;       // Software slave management
    static constexpr uint32_t CR1_SSI = 0x100;       // Internal slave select
    static constexpr uint32_t CR1_LSBFIRST = 0x80;   // Frame format
    static constexpr uint32_t CR1_SPE = 0x40;        // SPI enable
    template<uint32_t X>
    static constexpr uint32_t CR1_BR =               // Baud rate control
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t CR1_MSTR = 0x4;        // Master selection
    static constexpr uint32_t CR1_CPOL = 0x2;        // Clock polarity
    static constexpr uint32_t CR1_CPHA = 0x1;        // Clock phase

    static constexpr uint32_t CR2_RESET_VALUE = 0x700;
    static constexpr uint32_t CR2_RXDMAEN = 0x1;    // Rx buffer DMA enable
    static constexpr uint32_t CR2_TXDMAEN = 0x2;    // Tx buffer DMA enable
    static constexpr uint32_t CR2_SSOE = 0x4;       // SS output enable
    static constexpr uint32_t CR2_NSSP = 0x8;       // NSS pulse management
    static constexpr uint32_t CR2_FRF = 0x10;       // Frame format
    static constexpr uint32_t CR2_ERRIE = 0x20;     // Error interrupt enable
    static constexpr uint32_t CR2_RXNEIE = 0x40;    // RX buffer not empty interrupt enable
    static constexpr uint32_t CR2_TXEIE = 0x80;     // Tx buffer empty interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR2_DS =              // Data size
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR2_FRXTH = 0x1000;   // FIFO reception threshold
    static constexpr uint32_t CR2_LDMA_RX = 0x2000; // Last DMA transfer for reception
    static constexpr uint32_t CR2_LDMA_TX = 0x4000; // Last DMA transfer for transmission

    static constexpr uint32_t SR_RESET_VALUE = 0x2;
    static constexpr uint32_t SR_RXNE = 0x1;     // Receive buffer not empty
    static constexpr uint32_t SR_TXE = 0x2;      // Transmit buffer empty
    static constexpr uint32_t SR_CHSIDE = 0x4;   // Channel side
    static constexpr uint32_t SR_UDR = 0x8;      // Underrun flag
    static constexpr uint32_t SR_CRCERR = 0x10;  // CRC error flag
    static constexpr uint32_t SR_MODF = 0x20;    // Mode fault
    static constexpr uint32_t SR_OVR = 0x40;     // Overrun flag
    static constexpr uint32_t SR_BSY = 0x80;     // Busy flag
    static constexpr uint32_t SR_TIFRFE = 0x100; // TI frame format error
    template<uint32_t X>
    static constexpr uint32_t SR_FRLVL =         // FIFO reception level
        bit_field_t<9, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SR_FTLVL =         // FIFO transmission level
        bit_field_t<11, 0x3>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // Data register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CRCPR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t CRCPR_CRCPOLY =   // CRC polynomial register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RXCRCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXCRCR_RxCRC =   // Rx CRC register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TXCRCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXCRCR_TxCRC =   // Tx CRC register
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t I2SCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2S mode selection
    static constexpr uint32_t I2SCFGR_I2SE = 0x400;   // I2S Enable
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_I2SCFG =        // I2S configuration mode
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCM frame synchronization
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_I2SSTD =        // I2S standard selection
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8;    // Steady state clock polarity
    template<uint32_t X>
    static constexpr uint32_t I2SCFGR_DATLEN =        // Data length to be transferred
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1;    // Channel length (number of bits per audio channel)

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x2;
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // Master clock output enable
    static constexpr uint32_t I2SPR_ODD = 0x100;   // Odd factor for the prescaler
    template<uint32_t X>
    static constexpr uint32_t I2SPR_I2SDIV =       // I2S Linear prescaler
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F0x0, SPI1>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, SPI2>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, SPI1>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, SPI2>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, SPI1>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, SPI2>
{
    typedef stm32f0x0_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, SPI1>
{
    typedef stm32f0x1_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, SPI2>
{
    typedef stm32f0x1_spi1_t T;
    static T& V;
};

using spi1_t = peripheral_t<mcu_svd, SPI1>;
using spi2_t = peripheral_t<mcu_svd, SPI2>;

template<int INST> struct spi_traits {};

template<> struct spi_traits<1>
{
    using spi = spi1_t;
    static constexpr alternate_function_t MISO = SPI1_MISO;
    static constexpr alternate_function_t MOSI = SPI1_MOSI;
    static constexpr alternate_function_t NSS = SPI1_NSS;
    static constexpr alternate_function_t SCK = SPI1_SCK;
};

template<> struct spi_traits<2>
{
    using spi = spi2_t;
    static constexpr alternate_function_t MISO = SPI2_MISO;
    static constexpr alternate_function_t MOSI = SPI2_MOSI;
    static constexpr alternate_function_t NSS = SPI2_NSS;
    static constexpr alternate_function_t SCK = SPI2_SCK;
};

