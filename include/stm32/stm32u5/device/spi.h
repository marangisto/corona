#pragma once

////
//
//      STM32U5 SPI peripherals
//
///

// SPI1: Serial peripheral interface

struct stm32u5xx_spi1_t
{
    reserved_t<0x2> _0x0;
    volatile uint32_t SPI_CFG1; // SPI configuration register 1
    volatile uint32_t SPI_CFG2; // SPI configuration register 2
    reserved_t<0xc> _0x10;
    volatile uint32_t SPI_CRCPOLY; // SPI polynomial register
    reserved_t<0x2> _0x44;
    volatile uint32_t SPI_UDRDR; // SPI underrun data register


    static constexpr uint32_t SPI_CFG1_RESET_VALUE = 0x70007; // Reset value
    typedef bit_field_t<0, 0x1f> SPI_CFG1_DSIZE; // number of bits in at single SPI data frame ..... Note: Maximum data size can be limited up to 16-bits at some instances. At instances with limited set of features, DSIZE2:0] bits are reserved and must be kept at reset state. DSIZE[4:3] bits then control next settings of data size: 00xxx: 8-bits 01xxx: 16-bits 10xxx: 24-bits 11xxx: 32-bits.
    typedef bit_field_t<5, 0xf> SPI_CFG1_FTHLV; // FIFO threshold level Defines number of data frames at single data packet. Size of the packet should not exceed 1/2 of FIFO space. SPI interface is more efficient if configured packet sizes are aligned with data register access parallelism: If SPI data register is accessed as a 16-bit register and DSIZE 8 bit, better to select FTHLV=2, 4, 6. If SPI data register is accessed as a 32-bit register and DSIZE&gt; 8 bit, better to select FTHLV=2, 4, 6, while if DSIZE 8bit, better to select FTHLV=4, 8, 12. Note: FTHLV[3:2] bits are reserved at instances with limited set of features
    static constexpr uint32_t SPI_CFG1_UDRCFG = 0x200; // behavior of slave transmitter at underrun condition For more details see underrun condition.
    static constexpr uint32_t SPI_CFG1_RXDMAEN = 0x4000; // Rx DMA stream enable
    static constexpr uint32_t SPI_CFG1_TXDMAEN = 0x8000; // Tx DMA stream enable
    typedef bit_field_t<16, 0x1f> SPI_CFG1_CRCSIZE; // length of CRC frame to be transacted and compared Most significant bits are taken into account from polynomial calculation when CRC result is transacted or compared. The length of the polynomial is not affected by this setting. ..... The value must be set equal or multiply of data size (DSIZE[4:0]). Its maximum size corresponds to DSIZE maximum at the instance. Note: The most significant bit at CRCSIZE bit field is reserved at the peripheral instances where data size is limited to 16-bit.
    static constexpr uint32_t SPI_CFG1_CRCEN = 0x400000; // hardware CRC computation enable
    typedef bit_field_t<28, 0x7> SPI_CFG1_MBR; // master baud rate prescaler setting Note: MBR setting is considered at slave working at TI mode, too (see mode).
    static constexpr uint32_t SPI_CFG1_BPASS = 0x80000000; // bypass of the prescaler at master baud rate clock generator

    static constexpr uint32_t SPI_CFG2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> SPI_CFG2_MSSI; // Master SS Idleness Specifies an extra delay, expressed in number of SPI clock cycle periods, inserted additionally between active edge of SS opening a session and the beginning of the first data frame of the session in Master mode when SSOE is enabled. ... Note: This feature is not supported in TI mode. To include the delay, the SPI must be disabled and re-enabled between sessions.
    typedef bit_field_t<4, 0xf> SPI_CFG2_MIDI; // master Inter-Data Idleness Specifies minimum time delay (expressed in SPI clock cycles periods) inserted between two consecutive data frames in Master mode. ... Note: This feature is not supported in TI mode.
    static constexpr uint32_t SPI_CFG2_RDIOM = 0x2000; // RDY signal input/output management Note: When DSIZE at the SPI_CFG1 register is configured shorter than 8-bit, the RDIOM bit has to be kept at zero.
    static constexpr uint32_t SPI_CFG2_RDIOP = 0x4000; // RDY signal input/output polarity
    static constexpr uint32_t SPI_CFG2_IOSWP = 0x8000; // swap functionality of MISO and MOSI pins When this bit is set, the function of MISO and MOSI pins alternate functions are inverted. Original MISO pin becomes MOSI and original MOSI pin becomes MISO.
    typedef bit_field_t<17, 0x3> SPI_CFG2_COMM; // SPI Communication Mode
    typedef bit_field_t<19, 0x7> SPI_CFG2_SP; // serial protocol others: reserved, must not be used
    static constexpr uint32_t SPI_CFG2_MASTER = 0x400000; // SPI Master
    static constexpr uint32_t SPI_CFG2_LSBFRST = 0x800000; // data frame format
    static constexpr uint32_t SPI_CFG2_CPHA = 0x1000000; // clock phase
    static constexpr uint32_t SPI_CFG2_CPOL = 0x2000000; // clock polarity
    static constexpr uint32_t SPI_CFG2_SSM = 0x4000000; // software management of SS signal input When master uses hardware SS output (SSM=0 and SSOE=1) the SS signal input is forced to not active state internally to prevent master mode fault error.
    static constexpr uint32_t SPI_CFG2_SSIOP = 0x10000000; // SS input/output polarity
    static constexpr uint32_t SPI_CFG2_SSOE = 0x20000000; // SS output enable This bit is taken into account in Master mode only
    static constexpr uint32_t SPI_CFG2_SSOM = 0x40000000; // SS output management in Master mode This bit is taken into account in Master mode when SSOE is enabled. It allows the SS output to be configured between two consecutive data transfers.
    static constexpr uint32_t SPI_CFG2_AFCNTR = 0x80000000; // alternate function GPIOs control This bit is taken into account when SPE=0 only When SPI has to be disabled temporary for a specific configuration reason (e.g. CRC reset, CPHA or HDDIR change) setting this bit prevents any glitches on the associated outputs configured at alternate function mode by keeping them forced at state corresponding the current SPI configuration.


    static constexpr uint32_t SPI_CRCPOLY_RESET_VALUE = 0x107; // Reset value
    typedef bit_field_t<0, 0xffffffff> SPI_CRCPOLY_CRCPOLY; // CRC polynomial register This register contains the polynomial for the CRC calculation. The default 9-bit polynomial setting 0x107 corresponds to default 8-bit setting of DSIZE. It is compatible with setting 0x07 used at some other ST products with fixed length of the polynomial string where the most significant bit of the string is always kept hidden. Length of the polynomial is given by the most significant bit of the value stored at this register. It has to be set greater than DSIZE. CRC33_17 bit has to be set additionally with CRCPOLY register when DSIZE is configured to maximum 32-bit or 16-bit size and CRC is enabled (to keep polynomial length grater than data size). Note: CRCPOLY[31:16] bits are reserved at instances with data size limited to 16-bit. There is no constrain when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored.


    static constexpr uint32_t SPI_UDRDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SPI_UDRDR_UDRDR; // data at slave underrun condition The register is taken into account in Slave mode and at underrun condition only. The number of bits considered depends on DSIZE bit settings of the SPI_CFG1 register. Underrun condition handling depends on setting UDRCFG bit at SPI_CFG1 register. Note: UDRDR[31-16] bits are reserved at the peripheral instances with data size limited to 16-bit. There is no constraint when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored.
};

template<>
struct peripheral_t<STM32U5xx, SEC_SPI1>
{
    static constexpr periph_t P = SEC_SPI1;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SPI2>
{
    static constexpr periph_t P = SEC_SPI2;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SPI3>
{
    static constexpr periph_t P = SEC_SPI3;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SPI1>
{
    static constexpr periph_t P = SPI1;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SPI2>
{
    static constexpr periph_t P = SPI2;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SPI3>
{
    static constexpr periph_t P = SPI3;
    using T = stm32u5xx_spi1_t;
    static T& V;
};

using sec_spi1_t = peripheral_t<svd, SEC_SPI1>;
using sec_spi2_t = peripheral_t<svd, SEC_SPI2>;
using sec_spi3_t = peripheral_t<svd, SEC_SPI3>;
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
    static constexpr signal_t RDY = SPI1_RDY;
    static constexpr signal_t SCK = SPI1_SCK;
};

template<> struct spi_traits<2>
{
    using spi = spi2_t;
    static constexpr signal_t MISO = SPI2_MISO;
    static constexpr signal_t MOSI = SPI2_MOSI;
    static constexpr signal_t NSS = SPI2_NSS;
    static constexpr signal_t RDY = SPI2_RDY;
    static constexpr signal_t SCK = SPI2_SCK;
};

template<> struct spi_traits<3>
{
    using spi = spi3_t;
    static constexpr signal_t MISO = SPI3_MISO;
    static constexpr signal_t MOSI = SPI3_MOSI;
    static constexpr signal_t NSS = SPI3_NSS;
    static constexpr signal_t RDY = SPI3_RDY;
    static constexpr signal_t SCK = SPI3_SCK;
};
