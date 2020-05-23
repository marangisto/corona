#pragma once

////
//
//      STM32L4+ SAI peripherals
//
////

////
//
//      Serial audio interface
//
////

struct stm32l4p5_sai1_t
{
    volatile uint32_t ACR1;   // [read-write] AConfiguration register 1
    volatile uint32_t ACR2;   // [read-write] AConfiguration register 2
    volatile uint32_t AFRCR;  // [read-write] AFRCR
    volatile uint32_t ASLOTR; // [read-write] ASlot register
    volatile uint32_t AIM;    // [read-write] AInterrupt mask register2
    volatile uint32_t ASR;    // [read-write] AStatus register
    volatile uint32_t ACLRFR; // [read-write] AClear flag register
    volatile uint32_t ADR;    // [read-write] AData register
    volatile uint32_t BCR1;   // [read-write] BConfiguration register 1
    volatile uint32_t BCR2;   // [read-write] BConfiguration register 2
    volatile uint32_t BFRCR;  // [read-write] BFRCR
    volatile uint32_t BSLOTR; // [read-write] BSlot register
    volatile uint32_t BIM;    // [read-write] BInterrupt mask register2
    volatile uint32_t BSR;    // [read-only] BStatus register
    volatile uint32_t BCLRFR; // [write-only] BClear flag register
    volatile uint32_t BDR;    // [read-write] BData register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t BCR1_MCJDIV =          // Master clock divider
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t BCR1_NODIV = 0x80000;  // No divider
    static constexpr uint32_t BCR1_DMAEN = 0x20000;  // DMA enable
    static constexpr uint32_t BCR1_SAIBEN = 0x10000; // Audio block B enable
    static constexpr uint32_t BCR1_OutDri = 0x2000;  // Output drive
    static constexpr uint32_t BCR1_MONO = 0x1000;    // Mono mode
    template<uint32_t X>
    static constexpr uint32_t BCR1_SYNCEN =          // Synchronization enable
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t BCR1_CKSTR = 0x200;    // Clock strobing edge
    static constexpr uint32_t BCR1_LSBFIRST = 0x100; // Least significant bit first
    template<uint32_t X>
    static constexpr uint32_t BCR1_DS =              // Data size
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR1_PRTCFG =          // Protocol configuration
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR1_MODE =            // Audio block mode
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t BCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BCR2_COMP =          // Companding mode
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t BCR2_CPL = 0x2000;   // Complement bit
    template<uint32_t X>
    static constexpr uint32_t BCR2_MUTECN =        // Mute counter
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t BCR2_MUTEVAL = 0x40; // Mute value
    static constexpr uint32_t BCR2_MUTE = 0x20;    // Mute
    static constexpr uint32_t BCR2_TRIS = 0x10;    // Tristate management on data line
    static constexpr uint32_t BCR2_FFLUS = 0x8;    // FIFO flush
    template<uint32_t X>
    static constexpr uint32_t BCR2_FTH =           // FIFO threshold
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t BFRCR_RESET_VALUE = 0x7;
    static constexpr uint32_t BFRCR_FSOFF = 0x40000; // Frame synchronization offset
    static constexpr uint32_t BFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t BFRCR_FSDEF = 0x10000; // Frame synchronization definition
    template<uint32_t X>
    static constexpr uint32_t BFRCR_FSALL =          // Frame synchronization active level length
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BFRCR_FRL =            // Frame length
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t BSLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BSLOTR_SLOTEN =   // Slot enable
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSLOTR_NBSLOT =   // Number of slots in an audio frame
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSLOTR_SLOTSZ =   // Slot size
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSLOTR_FBOFF =    // First bit offset
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t BIM_RESET_VALUE = 0x0;
    static constexpr uint32_t BIM_LFSDETIE = 0x40; // Late frame synchronization detection interrupt enable
    static constexpr uint32_t BIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t BIM_CNRDYIE = 0x10;  // Codec not ready interrupt enable
    static constexpr uint32_t BIM_FREQIE = 0x8;    // FIFO request interrupt enable
    static constexpr uint32_t BIM_WCKCFG = 0x4;    // Wrong clock configuration interrupt enable
    static constexpr uint32_t BIM_MUTEDET = 0x2;   // Mute detection interrupt enable
    static constexpr uint32_t BIM_OVRUDRIE = 0x1;  // Overrun/underrun interrupt enable

    static constexpr uint32_t BSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BSR_FLVL =         // FIFO level threshold
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BSR_LFSDET = 0x40; // Late frame synchronization detection
    static constexpr uint32_t BSR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t BSR_CNRDY = 0x10;  // Codec not ready
    static constexpr uint32_t BSR_FREQ = 0x8;    // FIFO request
    static constexpr uint32_t BSR_WCKCFG = 0x4;  // Wrong clock configuration flag
    static constexpr uint32_t BSR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t BSR_OVRUDR = 0x1;  // Overrun / underrun

    static constexpr uint32_t BCLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t BCLRFR_LFSDET = 0x40;  // Clear late frame synchronization detection flag
    static constexpr uint32_t BCLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t BCLRFR_CNRDY = 0x10;   // Clear codec not ready flag
    static constexpr uint32_t BCLRFR_WCKCFG = 0x4;   // Clear wrong clock configuration flag
    static constexpr uint32_t BCLRFR_MUTEDET = 0x2;  // Mute detection flag
    static constexpr uint32_t BCLRFR_OVRUDR = 0x1;   // Clear overrun / underrun

    static constexpr uint32_t BDR_RESET_VALUE = 0x0;

    static constexpr uint32_t ACR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t ACR1_MCJDIV =          // Master clock divider
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t ACR1_NODIV = 0x80000;  // No divider
    static constexpr uint32_t ACR1_DMAEN = 0x20000;  // DMA enable
    static constexpr uint32_t ACR1_SAIAEN = 0x10000; // Audio block A enable
    static constexpr uint32_t ACR1_OutDri = 0x2000;  // Output drive
    static constexpr uint32_t ACR1_MONO = 0x1000;    // Mono mode
    template<uint32_t X>
    static constexpr uint32_t ACR1_SYNCEN =          // Synchronization enable
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t ACR1_CKSTR = 0x200;    // Clock strobing edge
    static constexpr uint32_t ACR1_LSBFIRST = 0x100; // Least significant bit first
    template<uint32_t X>
    static constexpr uint32_t ACR1_DS =              // Data size
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR1_PRTCFG =          // Protocol configuration
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR1_MODE =            // Audio block mode
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t ACR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR2_COMP =          // Companding mode
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t ACR2_CPL = 0x2000;   // Complement bit
    template<uint32_t X>
    static constexpr uint32_t ACR2_MUTECN =        // Mute counter
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t ACR2_MUTEVAL = 0x40; // Mute value
    static constexpr uint32_t ACR2_MUTE = 0x20;    // Mute
    static constexpr uint32_t ACR2_TRIS = 0x10;    // Tristate management on data line
    static constexpr uint32_t ACR2_FFLUS = 0x8;    // FIFO flush
    template<uint32_t X>
    static constexpr uint32_t ACR2_FTH =           // FIFO threshold
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t AFRCR_RESET_VALUE = 0x7;
    static constexpr uint32_t AFRCR_FSOFF = 0x40000; // Frame synchronization offset
    static constexpr uint32_t AFRCR_FSPOL = 0x20000; // Frame synchronization polarity
    static constexpr uint32_t AFRCR_FSDEF = 0x10000; // Frame synchronization definition
    template<uint32_t X>
    static constexpr uint32_t AFRCR_FSALL =          // Frame synchronization active level length
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AFRCR_FRL =            // Frame length
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ASLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ASLOTR_SLOTEN =   // Slot enable
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ASLOTR_NBSLOT =   // Number of slots in an audio frame
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ASLOTR_SLOTSZ =   // Slot size
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ASLOTR_FBOFF =    // First bit offset
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t AIM_RESET_VALUE = 0x0;
    static constexpr uint32_t AIM_LFSDET = 0x40;   // Late frame synchronization detection interrupt enable
    static constexpr uint32_t AIM_AFSDETIE = 0x20; // Anticipated frame synchronization detection interrupt enable
    static constexpr uint32_t AIM_CNRDYIE = 0x10;  // Codec not ready interrupt enable
    static constexpr uint32_t AIM_FREQIE = 0x8;    // FIFO request interrupt enable
    static constexpr uint32_t AIM_WCKCFG = 0x4;    // Wrong clock configuration interrupt enable
    static constexpr uint32_t AIM_MUTEDET = 0x2;   // Mute detection interrupt enable
    static constexpr uint32_t AIM_OVRUDRIE = 0x1;  // Overrun/underrun interrupt enable

    static constexpr uint32_t ASR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ASR_FLVL =         // FIFO level threshold
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t ASR_LFSDET = 0x40; // Late frame synchronization detection
    static constexpr uint32_t ASR_AFSDET = 0x20; // Anticipated frame synchronization detection
    static constexpr uint32_t ASR_CNRDY = 0x10;  // Codec not ready
    static constexpr uint32_t ASR_FREQ = 0x8;    // FIFO request
    static constexpr uint32_t ASR_WCKCFG = 0x4;  // Wrong clock configuration flag. This bit is read only
    static constexpr uint32_t ASR_MUTEDET = 0x2; // Mute detection
    static constexpr uint32_t ASR_OVRUDR = 0x1;  // Overrun / underrun

    static constexpr uint32_t ACLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t ACLRFR_LFSDET = 0x40;  // Clear late frame synchronization detection flag
    static constexpr uint32_t ACLRFR_CAFSDET = 0x20; // Clear anticipated frame synchronization detection flag
    static constexpr uint32_t ACLRFR_CNRDY = 0x10;   // Clear codec not ready flag
    static constexpr uint32_t ACLRFR_WCKCFG = 0x4;   // Clear wrong clock configuration flag
    static constexpr uint32_t ACLRFR_MUTEDET = 0x2;  // Mute detection flag
    static constexpr uint32_t ACLRFR_OVRUDR = 0x1;   // Clear overrun / underrun

    static constexpr uint32_t ADR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32L4P5, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4P5, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, SAI1>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, SAI2>
{
    typedef stm32l4p5_sai1_t T;
    static T& V;
};

using sai1_t = peripheral_t<mcu_svd, SAI1>;
using sai2_t = peripheral_t<mcu_svd, SAI2>;

template<int INST> struct sai_traits {};

template<> struct sai_traits<1>
{
    using sai = sai1_t;
    static constexpr alternate_function_t CK1 = SAI1_CK1;
    static constexpr alternate_function_t CK2 = SAI1_CK2;
    static constexpr alternate_function_t D1 = SAI1_D1;
    static constexpr alternate_function_t D2 = SAI1_D2;
    static constexpr alternate_function_t D3 = SAI1_D3;
    static constexpr alternate_function_t EXTCLK = SAI1_EXTCLK;
    static constexpr alternate_function_t FS_A = SAI1_FS_A;
    static constexpr alternate_function_t FS_B = SAI1_FS_B;
    static constexpr alternate_function_t MCLK_A = SAI1_MCLK_A;
    static constexpr alternate_function_t MCLK_B = SAI1_MCLK_B;
    static constexpr alternate_function_t SCK_A = SAI1_SCK_A;
    static constexpr alternate_function_t SCK_B = SAI1_SCK_B;
    static constexpr alternate_function_t SD_A = SAI1_SD_A;
    static constexpr alternate_function_t SD_B = SAI1_SD_B;
};

template<> struct sai_traits<2>
{
    using sai = sai2_t;
    static constexpr alternate_function_t EXTCLK = SAI2_EXTCLK;
    static constexpr alternate_function_t FS_A = SAI2_FS_A;
    static constexpr alternate_function_t FS_B = SAI2_FS_B;
    static constexpr alternate_function_t MCLK_A = SAI2_MCLK_A;
    static constexpr alternate_function_t MCLK_B = SAI2_MCLK_B;
    static constexpr alternate_function_t SCK_A = SAI2_SCK_A;
    static constexpr alternate_function_t SCK_B = SAI2_SCK_B;
    static constexpr alternate_function_t SD_A = SAI2_SD_A;
    static constexpr alternate_function_t SD_B = SAI2_SD_B;
};

