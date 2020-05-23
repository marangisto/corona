#pragma once

////
//
//      STM32MP1 SPI1 peripherals
//
////

////
//
//      SPI1
//
////

struct stm32mp15xxx_spi1_t
{
    volatile uint32_t SPI2S_CR1;      // SPI/I2S control register 1
    volatile uint32_t SPI_CR2;        // [read-write] SPI control register 2
    volatile uint32_t SPI_CFG1;       // [read-write] Content of this register is write protected when SPI is enabled
    volatile uint32_t SPI_CFG2;       // [read-write] The content of this register is write protected when SPI is enabled or IOLOCK bit is set at SPI2S_CR1 register.
    volatile uint32_t SPI2S_IER;      // [read-write] SPI/I2S interrupt enable register
    volatile uint32_t SPI2S_SR;       // [read-only] SPI/I2S status register
    volatile uint32_t SPI2S_IFCR;     // [write-only] SPI/I2S interrupt/status flags clear register
    reserved_t<0x1> _0x20;
    volatile uint32_t SPI2S_TXDR;     // [write-only] SPI/I2S transmit data register
    reserved_t<0x3> _0x30;
    volatile uint32_t SPI2S_RXDR;     // [read-only] SPI/I2S receive data register
    reserved_t<0x3> _0x40;
    volatile uint32_t SPI_CRCPOLY;    // [read-write] SPI polynomial register
    volatile uint32_t SPI_TXCRC;      // [read-only] SPI transmitter CRC register
    volatile uint32_t SPI_RXCRC;      // [read-only] SPI receiver CRC register
    volatile uint32_t SPI_UDRDR;      // [read-write] SPI underrun data register
    volatile uint32_t SPI_I2SCFGR;    // [read-write] All documented bits in this register must be configured when the I2S is disabled (SPE = 0).These bits are not used in SPI mode except for I2SMOD which needs to be set to 0 in SPI mode.
    reserved_t<0xe7> _0x3f0;
    volatile uint32_t SPI_I2S_HWCFGR; // [read-only] SPI/I2S hardware configuration register
    volatile uint32_t SPI_VERR;       // [read-only] SPI/I2S version register
    volatile uint32_t SPI_IPIDR;      // [read-only] SPI/I2S identification register
    volatile uint32_t SPI_SIDR;       // [read-only] SPI/I2S size identification register

    static constexpr uint32_t SPI2S_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t SPI2S_CR1_SPE = 0x1;         // SPE
    static constexpr uint32_t SPI2S_CR1_MASRX = 0x100;     // MASRX
    static constexpr uint32_t SPI2S_CR1_CSTART = 0x200;    // CSTART
    static constexpr uint32_t SPI2S_CR1_CSUSP = 0x400;     // CSUSP
    static constexpr uint32_t SPI2S_CR1_HDDIR = 0x800;     // HDDIR
    static constexpr uint32_t SPI2S_CR1_SSI = 0x1000;      // SSI
    static constexpr uint32_t SPI2S_CR1_CRC33_17 = 0x2000; // CRC33_17
    static constexpr uint32_t SPI2S_CR1_RCRCINI = 0x4000;  // RCRCINI
    static constexpr uint32_t SPI2S_CR1_TCRCINI = 0x8000;  // TCRCINI
    static constexpr uint32_t SPI2S_CR1_IOLOCK = 0x10000;  // IOLOCK

    static constexpr uint32_t SPI2S_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t SPI2S_IER_RXPIE = 0x1;     // RXPIE
    static constexpr uint32_t SPI2S_IER_TXPIE = 0x2;     // TXPIE
    static constexpr uint32_t SPI2S_IER_DXPIE = 0x4;     // DXPIE
    static constexpr uint32_t SPI2S_IER_EOTIE = 0x8;     // EOTIE
    static constexpr uint32_t SPI2S_IER_TXTFIE = 0x10;   // TXTFIE
    static constexpr uint32_t SPI2S_IER_UDRIE = 0x20;    // UDRIE
    static constexpr uint32_t SPI2S_IER_OVRIE = 0x40;    // OVRIE
    static constexpr uint32_t SPI2S_IER_CRCEIE = 0x80;   // CRCEIE
    static constexpr uint32_t SPI2S_IER_TIFREIE = 0x100; // TIFREIE
    static constexpr uint32_t SPI2S_IER_MODFIE = 0x200;  // MODFIE
    static constexpr uint32_t SPI2S_IER_TSERFIE = 0x400; // TSERFIE

    static constexpr uint32_t SPI2S_SR_RESET_VALUE = 0x1002;
    static constexpr uint32_t SPI2S_SR_RXP = 0x1;      // RXP
    static constexpr uint32_t SPI2S_SR_TXP = 0x2;      // TXP
    static constexpr uint32_t SPI2S_SR_DXP = 0x4;      // DXP
    static constexpr uint32_t SPI2S_SR_EOT = 0x8;      // EOT
    static constexpr uint32_t SPI2S_SR_TXTF = 0x10;    // TXTF
    static constexpr uint32_t SPI2S_SR_UDR = 0x20;     // UDR
    static constexpr uint32_t SPI2S_SR_OVR = 0x40;     // OVR
    static constexpr uint32_t SPI2S_SR_CRCE = 0x80;    // CRCE
    static constexpr uint32_t SPI2S_SR_TIFRE = 0x100;  // TIFRE
    static constexpr uint32_t SPI2S_SR_MODF = 0x200;   // MODF
    static constexpr uint32_t SPI2S_SR_TSERF = 0x400;  // TSERF
    static constexpr uint32_t SPI2S_SR_SUSP = 0x800;   // SUSP
    static constexpr uint32_t SPI2S_SR_TXC = 0x1000;   // TXC
    template<uint32_t X>
    static constexpr uint32_t SPI2S_SR_RXPLVL =        // RXPLVL
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t SPI2S_SR_RXWNE = 0x8000; // RXWNE
    template<uint32_t X>
    static constexpr uint32_t SPI2S_SR_CTSIZE =        // CTSIZE
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SPI2S_IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SPI2S_IFCR_EOTC = 0x8;     // EOTC
    static constexpr uint32_t SPI2S_IFCR_TXTFC = 0x10;   // TXTFC
    static constexpr uint32_t SPI2S_IFCR_UDRC = 0x20;    // UDRC
    static constexpr uint32_t SPI2S_IFCR_OVRC = 0x40;    // OVRC
    static constexpr uint32_t SPI2S_IFCR_CRCEC = 0x80;   // CRCEC
    static constexpr uint32_t SPI2S_IFCR_TIFREC = 0x100; // TIFREC
    static constexpr uint32_t SPI2S_IFCR_MODFC = 0x200;  // MODFC
    static constexpr uint32_t SPI2S_IFCR_TSERFC = 0x400; // TSERFC
    static constexpr uint32_t SPI2S_IFCR_SUSPC = 0x800;  // SUSPC

    static constexpr uint32_t SPI2S_TXDR_RESET_VALUE = 0x0;

    static constexpr uint32_t SPI2S_RXDR_RESET_VALUE = 0x0;

    static constexpr uint32_t SPI_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPI_CR2_TSIZE =   // TSIZE
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CR2_TSER =    // TSER
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SPI_CFG1_RESET_VALUE = 0x70007;
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_DSIZE =           // DSIZE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_FTHLV =           // FTHLV
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_UDRCFG =          // UDRCFG
        bit_field_t<9, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_UDRDET =          // UDRDET
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t SPI_CFG1_RXDMAEN = 0x4000; // RXDMAEN
    static constexpr uint32_t SPI_CFG1_TXDMAEN = 0x8000; // TXDMAEN
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_CRCSIZE =         // CRCSIZE
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t SPI_CFG1_CRCEN = 0x400000; // CRCEN
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG1_MBR =             // MBR
        bit_field_t<28, 0x7>::value<X>();

    static constexpr uint32_t SPI_CFG2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG2_MSSI =               // MSSI
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG2_MIDI =               // MIDI
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t SPI_CFG2_IOSWP = 0x8000;      // IOSWP
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG2_COMM =               // COMM
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_CFG2_SP =                 // SP
        bit_field_t<19, 0x7>::value<X>();
    static constexpr uint32_t SPI_CFG2_MASTER = 0x400000;   // MASTER
    static constexpr uint32_t SPI_CFG2_LSBFRST = 0x800000;  // LSBFRST
    static constexpr uint32_t SPI_CFG2_CPHA = 0x1000000;    // CPHA
    static constexpr uint32_t SPI_CFG2_CPOL = 0x2000000;    // CPOL
    static constexpr uint32_t SPI_CFG2_SSM = 0x4000000;     // SSM
    static constexpr uint32_t SPI_CFG2_SSIOP = 0x10000000;  // SSIOP
    static constexpr uint32_t SPI_CFG2_SSOE = 0x20000000;   // SSOE
    static constexpr uint32_t SPI_CFG2_SSOM = 0x40000000;   // SSOM
    static constexpr uint32_t SPI_CFG2_AFCNTR = 0x80000000; // AFCNTR

    static constexpr uint32_t SPI_CRCPOLY_RESET_VALUE = 0x107;

    static constexpr uint32_t SPI_TXCRC_RESET_VALUE = 0x0;

    static constexpr uint32_t SPI_RXCRC_RESET_VALUE = 0x0;

    static constexpr uint32_t SPI_UDRDR_RESET_VALUE = 0x0;

    static constexpr uint32_t SPI_I2SCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t SPI_I2SCFGR_I2SMOD = 0x1;      // I2SMOD
    template<uint32_t X>
    static constexpr uint32_t SPI_I2SCFGR_I2SCFG =           // I2SCFG
        bit_field_t<1, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_I2SCFGR_I2SSTD =           // I2SSTD
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SPI_I2SCFGR_PCMSYNC = 0x80;    // PCMSYNC
    template<uint32_t X>
    static constexpr uint32_t SPI_I2SCFGR_DATLEN =           // DATLEN
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t SPI_I2SCFGR_CHLEN = 0x400;     // CHLEN
    static constexpr uint32_t SPI_I2SCFGR_CKPOL = 0x800;     // CKPOL
    static constexpr uint32_t SPI_I2SCFGR_FIXCH = 0x1000;    // FIXCH
    static constexpr uint32_t SPI_I2SCFGR_WSINV = 0x2000;    // WSINV
    static constexpr uint32_t SPI_I2SCFGR_DATFMT = 0x4000;   // DATFMT
    template<uint32_t X>
    static constexpr uint32_t SPI_I2SCFGR_I2SDIV =           // I2SDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t SPI_I2SCFGR_ODD = 0x1000000;   // ODD
    static constexpr uint32_t SPI_I2SCFGR_MCKOE = 0x2000000; // MCKOE

    static constexpr uint32_t SPI_I2S_HWCFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPI_I2S_HWCFGR_TXFCFG =   // TXFCFG
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_I2S_HWCFGR_RXFCFG =   // RXFCFG
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_I2S_HWCFGR_CRCCFG =   // CRCCFG
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_I2S_HWCFGR_I2SCFG =   // I2SCFG
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_I2S_HWCFGR_DSCFG =    // DSCFG
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t SPI_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t SPI_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPI_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SPI_IPIDR_RESET_VALUE = 0x130022;

    static constexpr uint32_t SPI_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, SPI1>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SPI2>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SPI3>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SPI4>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SPI5>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SPI6>
{
    typedef stm32mp15xxx_spi1_t T;
    static T& V;
};

using spi1_t = peripheral_t<mcu_svd, SPI1>;
using spi2_t = peripheral_t<mcu_svd, SPI2>;
using spi3_t = peripheral_t<mcu_svd, SPI3>;
using spi4_t = peripheral_t<mcu_svd, SPI4>;
using spi5_t = peripheral_t<mcu_svd, SPI5>;
using spi6_t = peripheral_t<mcu_svd, SPI6>;

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

template<> struct spi_traits<3>
{
    using spi = spi3_t;
    static constexpr alternate_function_t MISO = SPI3_MISO;
    static constexpr alternate_function_t MOSI = SPI3_MOSI;
    static constexpr alternate_function_t NSS = SPI3_NSS;
    static constexpr alternate_function_t SCK = SPI3_SCK;
};

template<> struct spi_traits<4>
{
    using spi = spi4_t;
    static constexpr alternate_function_t MISO = SPI4_MISO;
    static constexpr alternate_function_t MOSI = SPI4_MOSI;
    static constexpr alternate_function_t NSS = SPI4_NSS;
    static constexpr alternate_function_t SCK = SPI4_SCK;
};

template<> struct spi_traits<5>
{
    using spi = spi5_t;
    static constexpr alternate_function_t MISO = SPI5_MISO;
    static constexpr alternate_function_t MOSI = SPI5_MOSI;
    static constexpr alternate_function_t NSS = SPI5_NSS;
    static constexpr alternate_function_t SCK = SPI5_SCK;
};

template<> struct spi_traits<6>
{
    using spi = spi6_t;
    static constexpr alternate_function_t MISO = SPI6_MISO;
    static constexpr alternate_function_t MOSI = SPI6_MOSI;
    static constexpr alternate_function_t NSS = SPI6_NSS;
    static constexpr alternate_function_t SCK = SPI6_SCK;
};

