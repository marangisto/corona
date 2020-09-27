#pragma once

////
//
//      STM32G4 SPI peripherals
//
///

// SPI1: Serial peripheral interface/Inter-IC sound

struct stm32g431xx_spi1_t
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

    static constexpr uint32_t CR2_RESET_VALUE = 0x700; // Reset value
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
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1; // CHLEN
    typedef bit_field_t<1, 0x3> I2SCFGR_DATLEN; // DATLEN
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8; // CKPOL
    typedef bit_field_t<4, 0x3> I2SCFGR_I2SSTD; // I2SSTD
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCMSYNC
    typedef bit_field_t<8, 0x3> I2SCFGR_I2SCFG; // I2SCFG
    static constexpr uint32_t I2SCFGR_I2SE = 0x400; // I2SE
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2SMOD

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<0, 0xff> I2SPR_I2SDIV; // I2SDIV
    static constexpr uint32_t I2SPR_ODD = 0x100; // ODD
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // MCKOE
};

// SPI4: Serial peripheral interface/Inter-IC sound

struct stm32g471xx_spi4_t
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

    static constexpr uint32_t CR1_RESET_VALUE = 0x700; // Reset value
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
    static constexpr uint32_t I2SCFGR_CHLEN = 0x1; // CHLEN
    typedef bit_field_t<1, 0x3> I2SCFGR_DATLEN; // DATLEN
    static constexpr uint32_t I2SCFGR_CKPOL = 0x8; // CKPOL
    typedef bit_field_t<4, 0x3> I2SCFGR_I2SSTD; // I2SSTD
    static constexpr uint32_t I2SCFGR_PCMSYNC = 0x80; // PCMSYNC
    typedef bit_field_t<8, 0x3> I2SCFGR_I2SCFG; // I2SCFG
    static constexpr uint32_t I2SCFGR_I2SE = 0x400; // I2SE
    static constexpr uint32_t I2SCFGR_I2SMOD = 0x800; // I2SMOD

    static constexpr uint32_t I2SPR_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<0, 0xff> I2SPR_I2SDIV; // I2SDIV
    static constexpr uint32_t I2SPR_ODD = 0x100; // ODD
    static constexpr uint32_t I2SPR_MCKOE = 0x200; // MCKOE
};

template<>
struct peripheral_t<STM32G431xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g431xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SPI4>
{
    static constexpr periph_t P = SPI4;
    using T = stm32g471xx_spi4_t;
    static T& V;
};

using spi1_t = peripheral_t<svd, SPI1>;
using spi2_t = peripheral_t<svd, SPI2>;
using spi3_t = peripheral_t<svd, SPI3>;
using spi4_t = peripheral_t<svd, SPI4>;

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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI2RST;
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
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_SPI3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_SPI3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_SPI3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_SPI3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_SPI3RST;
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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SPI4EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_SPI4SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_SPI4SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SPI4RST;
    }
};
