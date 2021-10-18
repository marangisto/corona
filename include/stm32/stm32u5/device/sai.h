#pragma once

////
//
//      STM32U5 SAI peripherals
//
///

// SAI1: Serial audio interface

struct stm32u5xx_sai1_t
{
    volatile uint32_t GCR; // Global configuration register
    volatile uint32_t ACR1; // A Configuration register 1
    volatile uint32_t ACR2; // A Configuration register 2
    volatile uint32_t AFRCR; // A frame configuration register
    volatile uint32_t ASLOTR; // A Slot register
    volatile uint32_t AIM; // A Interrupt mask register
    volatile uint32_t ASR; // A Status register
    volatile uint32_t ACLRFR; // A Clear flag register
    volatile uint32_t ADR; // A Data register
    volatile uint32_t BCR1; // B Configuration register 1
    volatile uint32_t BCR2; // B Configuration register 2
    volatile uint32_t BFRCR; // B frame configuration register
    volatile uint32_t BSLOTR; // B Slot register
    volatile uint32_t BIM; // B Interrupt mask register
    volatile uint32_t BSR; // B Status register
    volatile uint32_t BCLRFR; // B Clear flag register
    volatile uint32_t BDR; // B Data register
    volatile uint32_t PDMCR; // PDM control register
    volatile uint32_t PDMDLY; // PDM delay register

    static constexpr uint32_t GCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> GCR_SYNCIN; // Synchronization inputs
    typedef bit_field_t<4, 0x3> GCR_SYNCOUT; // Synchronization outputs

    static constexpr uint32_t ACR1_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t ACR1_MCKEN = 0x8000000; // MCKEN
    static constexpr uint32_t ACR1_OSR = 0x4000000; // OSR
    typedef bit_field_t<20, 0x3f> ACR1_MCKDIV; // Master clock divider
    static constexpr uint32_t ACR1_NODIV = 0x80000; // No divider
    static constexpr uint32_t ACR1_DMAEN = 0x20000; // DMA enable
    static constexpr uint32_t ACR1_SAIAEN = 0x10000; // Audio block A enable
    static constexpr uint32_t ACR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t ACR1_MONO = 0x1000; // Mono mode
    typedef bit_field_t<10, 0x3> ACR1_SYNCEN; // Synchronization enable
    static constexpr uint32_t ACR1_CKSTR = 0x200; // Clock strobing edge
    static constexpr uint32_t ACR1_LSBFIRST = 0x100; // Least significant bit first
    typedef bit_field_t<5, 0x7> ACR1_DS; // Data size
    typedef bit_field_t<2, 0x3> ACR1_PRTCFG; // Protocol configuration
    typedef bit_field_t<0, 0x3> ACR1_MODE; // Audio block mode

    static constexpr uint32_t ACR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> ACR2_COMP; // Companding mode
    static constexpr uint32_t ACR2_CPL = 0x2000; // Complement bit
    typedef bit_field_t<7, 0x3f> ACR2_MUTECN; // Mute counter
    static constexpr uint32_t ACR2_MUTEVAL = 0x40; // Mute value
    static constexpr uint32_t ACR2_MUTE = 0x20; // Mute
    static constexpr uint32_t ACR2_TRIS = 0x10; // Tristate management on data line
    static constexpr uint32_t ACR2_FFLUSH = 0x8; // FIFO flush
    typedef bit_field_t<0, 0x7> ACR2_FTH; // FIFO threshold

    static constexpr uint32_t AFRCR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t AFRCR_FSOFF = 0x40000; // Frame synchronization offset
    static constexpr uint32_t AFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t AFRCR_FSDEF = 0x10000; // Frame synchronization definition
    typedef bit_field_t<8, 0x7f> AFRCR_FSALL; // Frame synchronization active level length
    typedef bit_field_t<0, 0xff> AFRCR_FRL; // Frame length

    static constexpr uint32_t ASLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ASLOTR_SLOTEN; // Slot enable
    typedef bit_field_t<8, 0xf> ASLOTR_NBSLOT; // Number of slots in an audio frame
    typedef bit_field_t<6, 0x3> ASLOTR_SLOTSZ; // Slot size
    typedef bit_field_t<0, 0x1f> ASLOTR_FBOFF; // First bit offset

    static constexpr uint32_t AIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable
    static constexpr uint32_t AIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t AIM_CNRDYIE = 0x10; // Codec not ready interrupt enable
    static constexpr uint32_t AIM_FREQIE = 0x8; // FIFO request interrupt enable
    static constexpr uint32_t AIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable
    static constexpr uint32_t AIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t AIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable

    static constexpr uint32_t ASR_RESET_VALUE = 0x8; // Reset value
    typedef bit_field_t<16, 0x7> ASR_FLVL; // FIFO level threshold
    static constexpr uint32_t ASR_LFSDET = 0x40; // Late frame synchronization detection
    static constexpr uint32_t ASR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t ASR_CNRDY = 0x10; // Codec not ready
    static constexpr uint32_t ASR_FREQ = 0x8; // FIFO request
    static constexpr uint32_t ASR_WCKCFG = 0x4; // Wrong clock configuration flag. This bit is read only
    static constexpr uint32_t ASR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t ASR_OVRUDR = 0x1; // Overrun / underrun

    static constexpr uint32_t ACLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ACLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag
    static constexpr uint32_t ACLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t ACLRFR_CCNRDY = 0x10; // Clear codec not ready flag
    static constexpr uint32_t ACLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag
    static constexpr uint32_t ACLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t ACLRFR_COVRUDR = 0x1; // Clear overrun / underrun

    static constexpr uint32_t ADR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADR_DATA; // Data

    static constexpr uint32_t BCR1_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t BCR1_MCKEN = 0x8000000; // MCKEN
    static constexpr uint32_t BCR1_OSR = 0x4000000; // OSR
    typedef bit_field_t<20, 0x3f> BCR1_MCKDIV; // Master clock divider
    static constexpr uint32_t BCR1_NODIV = 0x80000; // No divider
    static constexpr uint32_t BCR1_DMAEN = 0x20000; // DMA enable
    static constexpr uint32_t BCR1_SAIAEN = 0x10000; // Audio block A enable
    static constexpr uint32_t BCR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t BCR1_MONO = 0x1000; // Mono mode
    typedef bit_field_t<10, 0x3> BCR1_SYNCEN; // Synchronization enable
    static constexpr uint32_t BCR1_CKSTR = 0x200; // Clock strobing edge
    static constexpr uint32_t BCR1_LSBFIRST = 0x100; // Least significant bit first
    typedef bit_field_t<5, 0x7> BCR1_DS; // Data size
    typedef bit_field_t<2, 0x3> BCR1_PRTCFG; // Protocol configuration
    typedef bit_field_t<0, 0x3> BCR1_MODE; // Audio block mode

    static constexpr uint32_t BCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> BCR2_COMP; // Companding mode
    static constexpr uint32_t BCR2_CPL = 0x2000; // Complement bit
    typedef bit_field_t<7, 0x3f> BCR2_MUTECN; // Mute counter
    static constexpr uint32_t BCR2_MUTEVAL = 0x40; // Mute value
    static constexpr uint32_t BCR2_MUTE = 0x20; // Mute
    static constexpr uint32_t BCR2_TRIS = 0x10; // Tristate management on data line
    static constexpr uint32_t BCR2_FFLUSH = 0x8; // FIFO flush
    typedef bit_field_t<0, 0x7> BCR2_FTH; // FIFO threshold

    static constexpr uint32_t BFRCR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t BFRCR_FSOFF = 0x40000; // Frame synchronization offset
    static constexpr uint32_t BFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t BFRCR_FSDEF = 0x10000; // Frame synchronization definition
    typedef bit_field_t<8, 0x7f> BFRCR_FSALL; // Frame synchronization active level length
    typedef bit_field_t<0, 0xff> BFRCR_FRL; // Frame length

    static constexpr uint32_t BSLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> BSLOTR_SLOTEN; // Slot enable
    typedef bit_field_t<8, 0xf> BSLOTR_NBSLOT; // Number of slots in an audio frame
    typedef bit_field_t<6, 0x3> BSLOTR_SLOTSZ; // Slot size
    typedef bit_field_t<0, 0x1f> BSLOTR_FBOFF; // First bit offset

    static constexpr uint32_t BIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable
    static constexpr uint32_t BIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t BIM_CNRDYIE = 0x10; // Codec not ready interrupt enable
    static constexpr uint32_t BIM_FREQIE = 0x8; // FIFO request interrupt enable
    static constexpr uint32_t BIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable
    static constexpr uint32_t BIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t BIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable

    static constexpr uint32_t BSR_RESET_VALUE = 0x8; // Reset value
    typedef bit_field_t<16, 0x7> BSR_FLVL; // FIFO level threshold
    static constexpr uint32_t BSR_LFSDET = 0x40; // Late frame synchronization detection
    static constexpr uint32_t BSR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t BSR_CNRDY = 0x10; // Codec not ready
    static constexpr uint32_t BSR_FREQ = 0x8; // FIFO request
    static constexpr uint32_t BSR_WCKCFG = 0x4; // Wrong clock configuration flag
    static constexpr uint32_t BSR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t BSR_OVRUDR = 0x1; // Overrun / underrun

    static constexpr uint32_t BCLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BCLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag
    static constexpr uint32_t BCLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t BCLRFR_CCNRDY = 0x10; // Clear codec not ready flag
    static constexpr uint32_t BCLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag
    static constexpr uint32_t BCLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t BCLRFR_COVRUDR = 0x1; // Clear overrun / underrun

    static constexpr uint32_t BDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDR_DATA; // Data

    static constexpr uint32_t PDMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDMCR_PDMEN = 0x1; // PDM enable
    typedef bit_field_t<4, 0x3> PDMCR_MICNBR; // MICNBR
    static constexpr uint32_t PDMCR_CKEN1 = 0x100; // Clock enable of bitstream clock number 1
    static constexpr uint32_t PDMCR_CKEN2 = 0x200; // CKEN2
    static constexpr uint32_t PDMCR_CKEN3 = 0x400; // CKEN3
    static constexpr uint32_t PDMCR_CKEN4 = 0x800; // CKEN4

    static constexpr uint32_t PDMDLY_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PDMDLY_DLYM1L; // Delay line adjust for first microphone of pair 1
    typedef bit_field_t<4, 0x7> PDMDLY_DLYM1R; // Delay line adjust for second microphone of pair 1
    typedef bit_field_t<8, 0x7> PDMDLY_DLYM2L; // Delay line for first microphone of pair 2
    typedef bit_field_t<12, 0x7> PDMDLY_DLYM2R; // Delay line for second microphone of pair 2
    typedef bit_field_t<16, 0x7> PDMDLY_DLYM3L; // DLYM3L
    typedef bit_field_t<20, 0x7> PDMDLY_DLYM3R; // DLYM3R
    typedef bit_field_t<24, 0x7> PDMDLY_DLYM4L; // DLYM4L
    typedef bit_field_t<28, 0x7> PDMDLY_DLYM4R; // DLYM4R
};

template<>
struct peripheral_t<STM32U5xx, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32u5xx_sai1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SAI2>
{
    static constexpr periph_t P = SAI2;
    using T = stm32u5xx_sai1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SAI1>
{
    static constexpr periph_t P = SEC_SAI1;
    using T = stm32u5xx_sai1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SAI2>
{
    static constexpr periph_t P = SEC_SAI2;
    using T = stm32u5xx_sai1_t;
    static T& V;
};

using sai1_t = peripheral_t<svd, SAI1>;
using sai2_t = peripheral_t<svd, SAI2>;
using sec_sai1_t = peripheral_t<svd, SEC_SAI1>;
using sec_sai2_t = peripheral_t<svd, SEC_SAI2>;

template<int INST> struct sai_traits {};

template<> struct sai_traits<1>
{
    using sai = sai1_t;
    static constexpr signal_t CK1 = SAI1_CK1;
    static constexpr signal_t CK2 = SAI1_CK2;
    static constexpr signal_t D1 = SAI1_D1;
    static constexpr signal_t D2 = SAI1_D2;
    static constexpr signal_t D3 = SAI1_D3;
    static constexpr signal_t FS_A = SAI1_FS_A;
    static constexpr signal_t FS_B = SAI1_FS_B;
    static constexpr signal_t MCLK_A = SAI1_MCLK_A;
    static constexpr signal_t MCLK_B = SAI1_MCLK_B;
    static constexpr signal_t SCK_A = SAI1_SCK_A;
    static constexpr signal_t SCK_B = SAI1_SCK_B;
    static constexpr signal_t SD_A = SAI1_SD_A;
    static constexpr signal_t SD_B = SAI1_SD_B;
};

template<> struct sai_traits<2>
{
    using sai = sai2_t;
    static constexpr signal_t FS_A = SAI2_FS_A;
    static constexpr signal_t FS_B = SAI2_FS_B;
    static constexpr signal_t MCLK_A = SAI2_MCLK_A;
    static constexpr signal_t MCLK_B = SAI2_MCLK_B;
    static constexpr signal_t SCK_A = SAI2_SCK_A;
    static constexpr signal_t SCK_B = SAI2_SCK_B;
    static constexpr signal_t SD_A = SAI2_SD_A;
    static constexpr signal_t SD_B = SAI2_SD_B;
};
