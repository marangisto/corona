#pragma once

////
//
//      STM32U5 ADF peripherals
//
///

// ADF1: ADF1

struct stm32u5xx_adf1_t
{
    volatile uint32_t ADF_GCR; // ADF Global Control Register
    volatile uint32_t ADF_CKGCR; // ADF clock generator control register
    reserved_t<0x1e> _0x8;
    volatile uint32_t ADF_SITF0CR; // ADF serial interface control register 0
    volatile uint32_t ADF_BSMX0CR; // ADF bitstream matrix control register 0
    volatile uint32_t ADF_DFLT0CR; // ADF digital filter control register 0
    volatile uint32_t ADF_DFLT0CICR; // ADF digital filer configuration register 0
    volatile uint32_t ADF_DFLT0RSFR; // ADF reshape filter configuration register 0
    reserved_t<0x4> _0x94;
    volatile uint32_t ADF_DLY0CR; // ADF delay control register 0
    reserved_t<0x1> _0xa8;
    volatile uint32_t ADF_DFLT0IER; // ADF DFLT0 interrupt enable register
    volatile uint32_t ADF_DFLT0ISR; // ADF DFLT0 interrupt status register 0
    reserved_t<0x1> _0xb4;
    volatile uint32_t ADF_SADCR; // ADF SAD control register
    volatile uint32_t ADF_SADCFGR; // ADF SAD configuration register
    volatile uint32_t ADF_SADSDLVR; // ADF SAD sound level register
    volatile uint32_t ADF_SADANLVR; // ADF SAD ambient noise level register
    reserved_t<0xa> _0xc8;
    volatile uint32_t ADF_DFLT0DR; // ADF digital filter data register 0

    static constexpr uint32_t ADF_GCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_GCR_TRGO = 0x1; // Trigger output control Set by software and reset by

    static constexpr uint32_t ADF_CKGCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_CKGCR_CKGACTIVE = 0x80000000; // Clock generator active flag
    typedef bit_field_t<24, 0x7f> ADF_CKGCR_PROCDIV; // Divider to control the serial interface clock
    typedef bit_field_t<16, 0xf> ADF_CKGCR_CCKDIV; // Divider to control the ADF_CCK clock
    typedef bit_field_t<12, 0xf> ADF_CKGCR_TRGSRC; // Digital filter trigger signal selection
    static constexpr uint32_t ADF_CKGCR_TRGSENS = 0x100; // CKGEN trigger sensitivity selection
    static constexpr uint32_t ADF_CKGCR_CCK1DIR = 0x40; // ADF_CCK1 direction
    static constexpr uint32_t ADF_CKGCR_CCK0DIR = 0x20; // ADF_CCK0 direction
    static constexpr uint32_t ADF_CKGCR_CKGMOD = 0x10; // Clock generator mode
    static constexpr uint32_t ADF_CKGCR_CCK1EN = 0x4; // ADF_CCK1 clock enable
    static constexpr uint32_t ADF_CKGCR_CCK0EN = 0x2; // ADF_CCK0 clock enable
    static constexpr uint32_t ADF_CKGCR_CKGDEN = 0x1; // CKGEN dividers enable


    static constexpr uint32_t ADF_SITF0CR_RESET_VALUE = 0x1f00; // Reset value
    static constexpr uint32_t ADF_SITF0CR_SITFACTIVE = 0x80000000; // SITFACTIVE
    typedef bit_field_t<8, 0x1f> ADF_SITF0CR_STH; // STH
    typedef bit_field_t<4, 0x3> ADF_SITF0CR_SITFMOD; // SITFMOD
    typedef bit_field_t<1, 0x3> ADF_SITF0CR_SCKSRC; // SCKSRC
    static constexpr uint32_t ADF_SITF0CR_SITFEN = 0x1; // SITFEN

    static constexpr uint32_t ADF_BSMX0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_BSMX0CR_BSMXACTIVE = 0x80000000; // BSMX active flag
    typedef bit_field_t<0, 0x1f> ADF_BSMX0CR_BSSEL; // Bitstream selection

    static constexpr uint32_t ADF_DFLT0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_DFLT0CR_DFLTACTIVE = 0x80000000; // DFLT0 active flag
    static constexpr uint32_t ADF_DFLT0CR_DFLTRUN = 0x40000000; // DFLT0 run status flag
    typedef bit_field_t<20, 0xff> ADF_DFLT0CR_NBDIS; // Number of samples to be discarded
    typedef bit_field_t<12, 0xf> ADF_DFLT0CR_TRGSRC; // DFLT0 trigger signal selection
    typedef bit_field_t<4, 0x7> ADF_DFLT0CR_ACQMOD; // DFLT0 trigger mode
    static constexpr uint32_t ADF_DFLT0CR_FTH = 0x4; // RXFIFO threshold selection
    static constexpr uint32_t ADF_DFLT0CR_DMAEN = 0x2; // DMA requests enable
    static constexpr uint32_t ADF_DFLT0CR_DFLTEN = 0x1; // DFLT0 enable

    static constexpr uint32_t ADF_DFLT0CICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3f> ADF_DFLT0CICR_SCALE; // Scaling factor selection
    typedef bit_field_t<8, 0x1ff> ADF_DFLT0CICR_MCICD; // CIC decimation ratio selection
    typedef bit_field_t<4, 0x7> ADF_DFLT0CICR_CICMOD; // Select the CIC order
    typedef bit_field_t<0, 0x3> ADF_DFLT0CICR_DATSRC; // Source data for the digital filter

    static constexpr uint32_t ADF_DFLT0RSFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> ADF_DFLT0RSFR_HPFC; // High-pass filter cut-off frequency
    static constexpr uint32_t ADF_DFLT0RSFR_HPFBYP = 0x80; // High-pass filter bypass
    static constexpr uint32_t ADF_DFLT0RSFR_RSFLTD = 0x10; // Reshaper filter decimation ratio
    static constexpr uint32_t ADF_DFLT0RSFR_RSFLTBYP = 0x1; // Reshaper filter bypass


    static constexpr uint32_t ADF_DLY0CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_DLY0CR_SKPBF = 0x80000000; // Skip busy flag
    typedef bit_field_t<0, 0x7f> ADF_DLY0CR_SKPDLY; // Delay to apply to a bitstream


    static constexpr uint32_t ADF_DFLT0IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_DFLT0IER_SDLVLIE = 0x2000; // SAD sound-level value ready enable
    static constexpr uint32_t ADF_DFLT0IER_SDDETIE = 0x1000; // Sound activity detection interrupt enable
    static constexpr uint32_t ADF_DFLT0IER_RFOVRIE = 0x800; // Reshape filter overrun interrupt enable
    static constexpr uint32_t ADF_DFLT0IER_CKABIE = 0x400; // Clock absence detection interrupt enable
    static constexpr uint32_t ADF_DFLT0IER_SATIE = 0x200; // Saturation detection interrupt enable
    static constexpr uint32_t ADF_DFLT0IER_DOVRIE = 0x2; // Data overflow interrupt enable
    static constexpr uint32_t ADF_DFLT0IER_FTHIE = 0x1; // RXFIFO threshold interrupt enable

    static constexpr uint32_t ADF_DFLT0ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_DFLT0ISR_SDLVLF = 0x2000; // Sound level value ready flag
    static constexpr uint32_t ADF_DFLT0ISR_SDDETF = 0x1000; // Sound activity detection flag
    static constexpr uint32_t ADF_DFLT0ISR_RFOVRF = 0x800; // Reshape filter overrun detection flag
    static constexpr uint32_t ADF_DFLT0ISR_CKABF = 0x400; // Clock absence detection flag
    static constexpr uint32_t ADF_DFLT0ISR_SATF = 0x200; // Saturation detection flag
    static constexpr uint32_t ADF_DFLT0ISR_RXNEF = 0x8; // RXFIFO not empty flag
    static constexpr uint32_t ADF_DFLT0ISR_DOVRF = 0x2; // Data overflow flag
    static constexpr uint32_t ADF_DFLT0ISR_FTHF = 0x1; // RXFIFO threshold flag


    static constexpr uint32_t ADF_SADCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADF_SADCR_SADACTIVE = 0x80000000; // SAD Active flag
    typedef bit_field_t<12, 0x3> ADF_SADCR_SADMOD; // SAD working mode
    typedef bit_field_t<8, 0x7> ADF_SADCR_FRSIZE; // Frame size
    static constexpr uint32_t ADF_SADCR_HYSTEN = 0x80; // Hysteresis enable
    typedef bit_field_t<4, 0x3> ADF_SADCR_SADST; // SAD state
    static constexpr uint32_t ADF_SADCR_DETCFG = 0x8; // Sound trigger event configuration
    typedef bit_field_t<1, 0x3> ADF_SADCR_DATCAP; // Data capture mode
    static constexpr uint32_t ADF_SADCR_SADEN = 0x1; // Sound activity detector enable

    static constexpr uint32_t ADF_SADCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1fff> ADF_SADCFGR_ANMIN; // ANMIN
    typedef bit_field_t<12, 0x7> ADF_SADCFGR_HGOVR; // Hangover time window
    typedef bit_field_t<8, 0x7> ADF_SADCFGR_LFRNB; // LFRNB
    typedef bit_field_t<4, 0x7> ADF_SADCFGR_ANSLP; // ANSLP
    typedef bit_field_t<0, 0xf> ADF_SADCFGR_SNTHR; // SNTHR

    static constexpr uint32_t ADF_SADSDLVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> ADF_SADSDLVR_SDLVL; // SDLVL

    static constexpr uint32_t ADF_SADANLVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fff> ADF_SADANLVR_ANLVL; // ANLVL


    static constexpr uint32_t ADF_DFLT0DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> ADF_DFLT0DR_DR; // DR
};

template<>
struct peripheral_t<STM32U5xx, ADF1>
{
    static constexpr periph_t P = ADF1;
    using T = stm32u5xx_adf1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_ADF1>
{
    static constexpr periph_t P = SEC_ADF1;
    using T = stm32u5xx_adf1_t;
    static T& V;
};

using adf1_t = peripheral_t<svd, ADF1>;
using sec_adf1_t = peripheral_t<svd, SEC_ADF1>;

template<int INST> struct adf_traits {};

template<> struct adf_traits<1>
{
    using adf = adf1_t;
    static constexpr signal_t CCK0 = ADF1_CCK0;
    static constexpr signal_t CCK1 = ADF1_CCK1;
    static constexpr signal_t SDI0 = ADF1_SDI0;
};
