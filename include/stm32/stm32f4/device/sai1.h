#pragma once

////
//
//      STM32F4 SAI1 peripherals
//
///

// SAI1: Serial audio interface

struct stm32f405_sai1_t
{
    reserved_t<0x1> _0x0;
    volatile uint32_t SAI_ACR1; // SAI AConfiguration register 1
    volatile uint32_t SAI_ACR2; // SAI AConfiguration register 2
    volatile uint32_t SAI_AFRCR; // SAI AFrame configuration register
    volatile uint32_t SAI_ASLOTR; // SAI ASlot register
    volatile uint32_t SAI_AIM; // SAI AInterrupt mask register2
    volatile uint32_t SAI_ASR; // SAI AStatus register
    volatile uint32_t SAI_ACLRFR; // SAI AClear flag register
    volatile uint32_t SAI_ADR; // SAI AData register
    volatile uint32_t SAI_BCR1; // SAI BConfiguration register 1
    volatile uint32_t SAI_BCR2; // SAI BConfiguration register 2
    volatile uint32_t SAI_BFRCR; // SAI BFrame configuration register
    volatile uint32_t SAI_BSLOTR; // SAI BSlot register
    volatile uint32_t SAI_BIM; // SAI BInterrupt mask register2
    volatile uint32_t SAI_BSR; // SAI BStatus register
    volatile uint32_t SAI_BCLRFR; // SAI BClear flag register
    volatile uint32_t SAI_BDR; // SAI BData register


    static constexpr uint32_t SAI_ACR1_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<20, 0xf> SAI_ACR1_MCKDIV; // Master clock divider
    typedef bit_field_t<0, 0x3> SAI_ACR1_MODE; // Audio block mode
    typedef bit_field_t<2, 0x3> SAI_ACR1_PRTCFG; // Protocol configuration
    typedef bit_field_t<5, 0x7> SAI_ACR1_DS; // Data size
    static constexpr uint32_t SAI_ACR1_LSBFIRST = 0x100; // Least significant bit first
    static constexpr uint32_t SAI_ACR1_CKSTR = 0x200; // Clock strobing edge
    typedef bit_field_t<10, 0x3> SAI_ACR1_SYNCEN; // Synchronization enable
    static constexpr uint32_t SAI_ACR1_MONO = 0x1000; // Mono mode
    static constexpr uint32_t SAI_ACR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t SAI_ACR1_SAIAEN = 0x10000; // Audio block enable
    static constexpr uint32_t SAI_ACR1_DMAEN = 0x20000; // DMA enable
    static constexpr uint32_t SAI_ACR1_NODIV = 0x80000; // No divider

    static constexpr uint32_t SAI_ACR2_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<0, 0x7> SAI_ACR2_FTH; // FIFO threshold
    static constexpr uint32_t SAI_ACR2_FFLUSH = 0x8; // FIFO flush
    static constexpr uint32_t SAI_ACR2_TRIS = 0x10; // Tristate management on data line
    static constexpr uint32_t SAI_ACR2_MUTE = 0x20; // Mute
    static constexpr uint32_t SAI_ACR2_MUTEVAL = 0x40; // Mute value
    typedef bit_field_t<7, 0x3f> SAI_ACR2_MUTECNT; // Mute counter
    static constexpr uint32_t SAI_ACR2_CPL = 0x2000; // Complement bit
    typedef bit_field_t<14, 0x3> SAI_ACR2_COMP; // Companding mode

    static constexpr uint32_t SAI_AFRCR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xff> SAI_AFRCR_FRL; // Frame length
    typedef bit_field_t<8, 0x7f> SAI_AFRCR_FSALL; // Frame synchronization active level length
    static constexpr uint32_t SAI_AFRCR_FSDEF = 0x10000; // Frame synchronization definition
    static constexpr uint32_t SAI_AFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t SAI_AFRCR_FSOFF = 0x40000; // Frame synchronization offset

    static constexpr uint32_t SAI_ASLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> SAI_ASLOTR_FBOFF; // First bit offset
    typedef bit_field_t<6, 0x3> SAI_ASLOTR_SLOTSZ; // Slot size
    typedef bit_field_t<8, 0xf> SAI_ASLOTR_NBSLOT; // Number of slots in an audio frame
    typedef bit_field_t<16, 0xffff> SAI_ASLOTR_SLOTEN; // Slot enable

    static constexpr uint32_t SAI_AIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_AIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable
    static constexpr uint32_t SAI_AIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t SAI_AIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable
    static constexpr uint32_t SAI_AIM_FREQIE = 0x8; // FIFO request interrupt enable
    static constexpr uint32_t SAI_AIM_CNRDYIE = 0x10; // Codec not ready interrupt enable
    static constexpr uint32_t SAI_AIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t SAI_AIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable

    static constexpr uint32_t SAI_ASR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t SAI_ASR_OVRUDR = 0x1; // Overrun / underrun
    static constexpr uint32_t SAI_ASR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t SAI_ASR_WCKCFG = 0x4; // Wrong clock configuration flag
    static constexpr uint32_t SAI_ASR_FREQ = 0x8; // FIFO request
    static constexpr uint32_t SAI_ASR_CNRDY = 0x10; // Codec not ready
    static constexpr uint32_t SAI_ASR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t SAI_ASR_LFSDET = 0x40; // Late frame synchronization detection
    typedef bit_field_t<16, 0x7> SAI_ASR_FLTH; // FIFO level threshold

    static constexpr uint32_t SAI_ACLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_ACLRFR_COVRUDR = 0x1; // Clear overrun / underrun
    static constexpr uint32_t SAI_ACLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t SAI_ACLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag
    static constexpr uint32_t SAI_ACLRFR_CCNRDY = 0x10; // Clear codec not ready flag
    static constexpr uint32_t SAI_ACLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t SAI_ACLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag

    static constexpr uint32_t SAI_ADR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SAI_ADR_DATA; // Data

    static constexpr uint32_t SAI_BCR1_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<0, 0x3> SAI_BCR1_MODE; // Audio block mode
    typedef bit_field_t<2, 0x3> SAI_BCR1_PRTCFG; // Protocol configuration
    typedef bit_field_t<5, 0x7> SAI_BCR1_DS; // Data size
    static constexpr uint32_t SAI_BCR1_LSBFIRST = 0x100; // Least significant bit first
    static constexpr uint32_t SAI_BCR1_CKSTR = 0x200; // Clock strobing edge
    typedef bit_field_t<10, 0x3> SAI_BCR1_SYNCEN; // Synchronization enable
    static constexpr uint32_t SAI_BCR1_MONO = 0x1000; // Mono mode
    static constexpr uint32_t SAI_BCR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t SAI_BCR1_SAIBEN = 0x10000; // Audio block enable
    static constexpr uint32_t SAI_BCR1_DMAEN = 0x20000; // DMA enable
    static constexpr uint32_t SAI_BCR1_NODIV = 0x80000; // No divider
    typedef bit_field_t<20, 0xf> SAI_BCR1_MCKDIV; // Master clock divider

    static constexpr uint32_t SAI_BCR2_RESET_VALUE = 0x40; // Reset value
    typedef bit_field_t<0, 0x7> SAI_BCR2_FTH; // FIFO threshold
    static constexpr uint32_t SAI_BCR2_FFLUSH = 0x8; // FIFO flush
    static constexpr uint32_t SAI_BCR2_TRIS = 0x10; // Tristate management on data line
    static constexpr uint32_t SAI_BCR2_MUTE = 0x20; // Mute
    static constexpr uint32_t SAI_BCR2_MUTEVAL = 0x40; // Mute value
    typedef bit_field_t<7, 0x3f> SAI_BCR2_MUTECNT; // Mute counter
    static constexpr uint32_t SAI_BCR2_CPL = 0x2000; // Complement bit
    typedef bit_field_t<14, 0x3> SAI_BCR2_COMP; // Companding mode

    static constexpr uint32_t SAI_BFRCR_RESET_VALUE = 0x7; // Reset value
    typedef bit_field_t<0, 0xff> SAI_BFRCR_FRL; // Frame length
    typedef bit_field_t<8, 0x7f> SAI_BFRCR_FSALL; // Frame synchronization active level length
    static constexpr uint32_t SAI_BFRCR_FSDEF = 0x10000; // Frame synchronization definition
    static constexpr uint32_t SAI_BFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t SAI_BFRCR_FSOFF = 0x40000; // Frame synchronization offset

    static constexpr uint32_t SAI_BSLOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> SAI_BSLOTR_FBOFF; // First bit offset
    typedef bit_field_t<6, 0x3> SAI_BSLOTR_SLOTSZ; // Slot size
    typedef bit_field_t<8, 0xf> SAI_BSLOTR_NBSLOT; // Number of slots in an audio frame
    typedef bit_field_t<16, 0xffff> SAI_BSLOTR_SLOTEN; // Slot enable

    static constexpr uint32_t SAI_BIM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_BIM_OVRUDRIE = 0x1; // Overrun/underrun interrupt enable
    static constexpr uint32_t SAI_BIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t SAI_BIM_WCKCFGIE = 0x4; // Wrong clock configuration interrupt enable
    static constexpr uint32_t SAI_BIM_FREQIE = 0x8; // FIFO request interrupt enable
    static constexpr uint32_t SAI_BIM_CNRDYIE = 0x10; // Codec not ready interrupt enable
    static constexpr uint32_t SAI_BIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t SAI_BIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable

    static constexpr uint32_t SAI_BSR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t SAI_BSR_OVRUDR = 0x1; // Overrun / underrun
    static constexpr uint32_t SAI_BSR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t SAI_BSR_WCKCFG = 0x4; // Wrong clock configuration flag
    static constexpr uint32_t SAI_BSR_FREQ = 0x8; // FIFO request
    static constexpr uint32_t SAI_BSR_CNRDY = 0x10; // Codec not ready
    static constexpr uint32_t SAI_BSR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t SAI_BSR_LFSDET = 0x40; // Late frame synchronization detection
    typedef bit_field_t<16, 0x7> SAI_BSR_FLTH; // FIFO level threshold

    static constexpr uint32_t SAI_BCLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SAI_BCLRFR_COVRUDR = 0x1; // Clear overrun / underrun
    static constexpr uint32_t SAI_BCLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t SAI_BCLRFR_CWCKCFG = 0x4; // Clear wrong clock configuration flag
    static constexpr uint32_t SAI_BCLRFR_CCNRDY = 0x10; // Clear codec not ready flag
    static constexpr uint32_t SAI_BCLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t SAI_BCLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag

    static constexpr uint32_t SAI_BDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SAI_BDR_DATA; // Data
};

template<>
struct peripheral_t<STM32F405, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32f405_sai1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, SAI1>
{
    static constexpr periph_t P = SAI1;
    using T = stm32f405_sai1_t;
    static T& V;
};

using sai1_t = peripheral_t<svd, SAI1>;

template<int INST> struct sai1_traits {};

template<> struct sai1_traits<1>
{
    using sai1 = sai1_t;
    static constexpr signal_t FS_A = SAI1_FS_A;
    static constexpr signal_t FS_B = SAI1_FS_B;
    static constexpr signal_t MCLK_A = SAI1_MCLK_A;
    static constexpr signal_t MCLK_B = SAI1_MCLK_B;
    static constexpr signal_t SCK_A = SAI1_SCK_A;
    static constexpr signal_t SCK_B = SAI1_SCK_B;
    static constexpr signal_t SD_A = SAI1_SD_A;
    static constexpr signal_t SD_B = SAI1_SD_B;
    static constexpr clock_source_t CS = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SAI1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SAI1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SAI1RST;
    }
};
