#pragma once

////
//
//      STM32F4 SAI1 peripherals
//
////

////
//
//      Serial audio interface
//
////

struct stm32f405_sai1_t
{
    volatile uint32_t SAI_ACR1;   // [read-write] SAI AConfiguration register 1
    volatile uint32_t SAI_ACR2;   // [read-write] SAI AConfiguration register 2
    volatile uint32_t SAI_AFRCR;  // SAI AFrame configuration register
    volatile uint32_t SAI_ASLOTR; // [read-write] SAI ASlot register
    volatile uint32_t SAI_AIM;    // [read-write] SAI AInterrupt mask register2
    volatile uint32_t SAI_ASR;    // [read-only] SAI AStatus register
    volatile uint32_t SAI_ACLRFR; // [read-write] SAI AClear flag register
    volatile uint32_t SAI_ADR;    // [read-write] SAI AData register
    volatile uint32_t SAI_BCR1;   // [read-write] SAI BConfiguration register 1
    volatile uint32_t SAI_BCR2;   // [read-write] SAI BConfiguration register 2
    volatile uint32_t SAI_BFRCR;  // SAI BFrame configuration register
    volatile uint32_t SAI_BSLOTR; // [read-write] SAI BSlot register
    volatile uint32_t SAI_BIM;    // [read-write] SAI BInterrupt mask register2
    volatile uint32_t SAI_BSR;    // [read-only] SAI BStatus register
    volatile uint32_t SAI_BCLRFR; // [read-write] SAI BClear flag register
    volatile uint32_t SAI_BDR;    // [read-write] SAI BData register

    static constexpr uint32_t SAI_ACR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_MCKDIV =          // Master clock divider
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_MODE =            // Audio block mode
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_PRTCFG =          // Protocol configuration
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_DS =              // Data size
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t SAI_ACR1_LSBFIRST = 0x100; // Least significant bit first
    static constexpr uint32_t SAI_ACR1_CKSTR = 0x200;    // Clock strobing edge
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_SYNCEN =          // Synchronization enable
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SAI_ACR1_MONO = 0x1000;    // Mono mode
    static constexpr uint32_t SAI_ACR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t SAI_ACR1_SAIAEN = 0x10000; // Audio block enable
    static constexpr uint32_t SAI_ACR1_DMAEN = 0x20000;  // DMA enable
    static constexpr uint32_t SAI_ACR1_NODIV = 0x80000;  // No divider

    static constexpr uint32_t SAI_BCR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_MODE =            // Audio block mode
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_PRTCFG =          // Protocol configuration
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_DS =              // Data size
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t SAI_BCR1_LSBFIRST = 0x100; // Least significant bit first
    static constexpr uint32_t SAI_BCR1_CKSTR = 0x200;    // Clock strobing edge
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_SYNCEN =          // Synchronization enable
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SAI_BCR1_MONO = 0x1000;    // Mono mode
    static constexpr uint32_t SAI_BCR1_OUTDRIV = 0x2000; // Output drive
    static constexpr uint32_t SAI_BCR1_SAIBEN = 0x10000; // Audio block enable
    static constexpr uint32_t SAI_BCR1_DMAEN = 0x20000;  // DMA enable
    static constexpr uint32_t SAI_BCR1_NODIV = 0x80000;  // No divider
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_MCKDIV =          // Master clock divider
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t SAI_ACR2_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_FTH =           // FIFO threshold
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SAI_ACR2_FFLUSH = 0x8;   // FIFO flush
    static constexpr uint32_t SAI_ACR2_TRIS = 0x10;    // Tristate management on data line
    static constexpr uint32_t SAI_ACR2_MUTE = 0x20;    // Mute
    static constexpr uint32_t SAI_ACR2_MUTEVAL = 0x40; // Mute value
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_MUTECNT =       // Mute counter
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t SAI_ACR2_CPL = 0x2000;   // Complement bit
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_COMP =          // Companding mode
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t SAI_BCR2_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_FTH =           // FIFO threshold
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SAI_BCR2_FFLUSH = 0x8;   // FIFO flush
    static constexpr uint32_t SAI_BCR2_TRIS = 0x10;    // Tristate management on data line
    static constexpr uint32_t SAI_BCR2_MUTE = 0x20;    // Mute
    static constexpr uint32_t SAI_BCR2_MUTEVAL = 0x40; // Mute value
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_MUTECNT =       // Mute counter
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t SAI_BCR2_CPL = 0x2000;   // Complement bit
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_COMP =          // Companding mode
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t SAI_AFRCR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t SAI_AFRCR_FRL =            // Frame length
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_AFRCR_FSALL =          // Frame synchronization active level length
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t SAI_AFRCR_FSDEF = 0x10000; // Frame synchronization definition
    static constexpr uint32_t SAI_AFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t SAI_AFRCR_FSOFF = 0x40000; // Frame synchronization offset

    static constexpr uint32_t SAI_BFRCR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t SAI_BFRCR_FRL =            // Frame length
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BFRCR_FSALL =          // Frame synchronization active level length
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t SAI_BFRCR_FSDEF = 0x10000; // Frame synchronization definition
    static constexpr uint32_t SAI_BFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t SAI_BFRCR_FSOFF = 0x40000; // Frame synchronization offset

    static constexpr uint32_t SAI_ASLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_FBOFF =    // First bit offset
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_SLOTSZ =   // Slot size
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_NBSLOT =   // Number of slots in an audio frame
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_SLOTEN =   // Slot enable
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SAI_BSLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_FBOFF =    // First bit offset
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_SLOTSZ =   // Slot size
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_NBSLOT =   // Number of slots in an audio frame
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_SLOTEN =   // Slot enable
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SAI_AIM_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_AIM_OVRUDRIE = 0x1;  // Overrun/underrun interrupt enable
    static constexpr uint32_t SAI_AIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t SAI_AIM_WCKCFGIE = 0x4;  // Wrong clock configuration interrupt enable
    static constexpr uint32_t SAI_AIM_FREQIE = 0x8;    // FIFO request interrupt enable
    static constexpr uint32_t SAI_AIM_CNRDYIE = 0x10;  // Codec not ready interrupt enable
    static constexpr uint32_t SAI_AIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t SAI_AIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable

    static constexpr uint32_t SAI_BIM_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_BIM_OVRUDRIE = 0x1;  // Overrun/underrun interrupt enable
    static constexpr uint32_t SAI_BIM_MUTEDETIE = 0x2; // Mute detection interrupt enable
    static constexpr uint32_t SAI_BIM_WCKCFGIE = 0x4;  // Wrong clock configuration interrupt enable
    static constexpr uint32_t SAI_BIM_FREQIE = 0x8;    // FIFO request interrupt enable
    static constexpr uint32_t SAI_BIM_CNRDYIE = 0x10;  // Codec not ready interrupt enable
    static constexpr uint32_t SAI_BIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t SAI_BIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable

    static constexpr uint32_t SAI_ASR_RESET_VALUE = 0x8;
    static constexpr uint32_t SAI_ASR_OVRUDR = 0x1;  // Overrun / underrun
    static constexpr uint32_t SAI_ASR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t SAI_ASR_WCKCFG = 0x4;  // Wrong clock configuration flag
    static constexpr uint32_t SAI_ASR_FREQ = 0x8;    // FIFO request
    static constexpr uint32_t SAI_ASR_CNRDY = 0x10;  // Codec not ready
    static constexpr uint32_t SAI_ASR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t SAI_ASR_LFSDET = 0x40; // Late frame synchronization detection
    template<uint32_t X>
    static constexpr uint32_t SAI_ASR_FLTH =         // FIFO level threshold
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t SAI_BSR_RESET_VALUE = 0x8;
    static constexpr uint32_t SAI_BSR_OVRUDR = 0x1;  // Overrun / underrun
    static constexpr uint32_t SAI_BSR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t SAI_BSR_WCKCFG = 0x4;  // Wrong clock configuration flag
    static constexpr uint32_t SAI_BSR_FREQ = 0x8;    // FIFO request
    static constexpr uint32_t SAI_BSR_CNRDY = 0x10;  // Codec not ready
    static constexpr uint32_t SAI_BSR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t SAI_BSR_LFSDET = 0x40; // Late frame synchronization detection
    template<uint32_t X>
    static constexpr uint32_t SAI_BSR_FLTH =         // FIFO level threshold
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t SAI_ACLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_ACLRFR_COVRUDR = 0x1;  // Clear overrun / underrun
    static constexpr uint32_t SAI_ACLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t SAI_ACLRFR_CWCKCFG = 0x4;  // Clear wrong clock configuration flag
    static constexpr uint32_t SAI_ACLRFR_CCNRDY = 0x10;  // Clear codec not ready flag
    static constexpr uint32_t SAI_ACLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t SAI_ACLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag

    static constexpr uint32_t SAI_BCLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_BCLRFR_COVRUDR = 0x1;  // Clear overrun / underrun
    static constexpr uint32_t SAI_BCLRFR_CMUTEDET = 0x2; // Mute detection flag
    static constexpr uint32_t SAI_BCLRFR_CWCKCFG = 0x4;  // Clear wrong clock configuration flag
    static constexpr uint32_t SAI_BCLRFR_CCNRDY = 0x10;  // Clear codec not ready flag
    static constexpr uint32_t SAI_BCLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t SAI_BCLRFR_CLFSDET = 0x40; // Clear late frame synchronization detection flag

    static constexpr uint32_t SAI_ADR_RESET_VALUE = 0x0;

    static constexpr uint32_t SAI_BDR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F405, SAI1>
{
    typedef stm32f405_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, SAI1>
{
    typedef stm32f405_sai1_t T;
    static T& V;
};

using sai1_t = peripheral_t<mcu_svd, SAI1>;
