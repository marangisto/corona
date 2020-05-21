#pragma once

////
//
//      STM32MP1 SAI peripherals
//
////

////
//
//      SAI1 register block
//
////

struct stm32mp15xxx_sai1_t
{
    volatile uint32_t SAI_GCR;    // [read-write] Global configuration register
    volatile uint32_t SAI_ACR1;   // [read-write] Configuration register 1
    volatile uint32_t SAI_ACR2;   // Configuration register 2
    volatile uint32_t SAI_AFRCR;  // This register has no meaning in and SPDIF audio protocol
    volatile uint32_t SAI_ASLOTR; // [read-write] This register has no meaning in and SPDIF audio protocol
    volatile uint32_t SAI_AIM;    // [read-write] Interrupt mask register
    volatile uint32_t SAI_ASR;    // [read-only] Status register
    volatile uint32_t SAI_ACLRFR; // [write-only] Clear flag register
    volatile uint32_t SAI_ADR;    // [read-write] Data register
    volatile uint32_t SAI_BCR1;   // [read-write] Configuration register 1
    volatile uint32_t SAI_BCR2;   // Configuration register 2
    volatile uint32_t SAI_BFRCR;  // This register has no meaning in and SPDIF audio protocol
    volatile uint32_t SAI_BSLOTR; // [read-write] This register has no meaning in and SPDIF audio protocol
    volatile uint32_t SAI_BIM;    // [read-write] Interrupt mask register
    volatile uint32_t SAI_BSR;    // [read-only] Status register
    volatile uint32_t SAI_BCLRFR; // [write-only] Clear flag register
    volatile uint32_t SAI_BDR;    // [read-write] Data register
    volatile uint32_t SAI_PDMCR;  // [read-write] PDM control register
    volatile uint32_t SAI_PDMDLY; // [read-write] PDM delay register
    reserved_t<0xe9> _0x3f0;
    volatile uint32_t SAI_HWCFGR; // [read-only] SAI hardware configuration register
    volatile uint32_t SAI_VERR;   // [read-only] SAI version register
    volatile uint32_t SAI_IPIDR;  // [read-only] SAI identification register
    volatile uint32_t SAI_SIDR;   // [read-only] SAI size identification register

    static constexpr uint32_t SAI_GCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_GCR_SYNCIN =    // SYNCIN
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_GCR_SYNCOUT =   // SYNCOUT
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t SAI_ACR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_MODE =             // MODE
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_PRTCFG =           // PRTCFG
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_DS =               // DS
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t SAI_ACR1_LSBFIRST = 0x100;  // LSBFIRST
    static constexpr uint32_t SAI_ACR1_CKSTR = 0x200;     // CKSTR
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_SYNCEN =           // SYNCEN
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SAI_ACR1_MONO = 0x1000;     // MONO
    static constexpr uint32_t SAI_ACR1_OUTDRIV = 0x2000;  // OUTDRIV
    static constexpr uint32_t SAI_ACR1_SAIEN = 0x10000;   // SAIEN
    static constexpr uint32_t SAI_ACR1_DMAEN = 0x20000;   // DMAEN
    static constexpr uint32_t SAI_ACR1_NODIV = 0x80000;   // NODIV
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR1_MCKDIV =           // MCKDIV
        bit_field_t<20, 0x3f>::value<X>();
    static constexpr uint32_t SAI_ACR1_OSR = 0x4000000;   // OSR
    static constexpr uint32_t SAI_ACR1_MCKEN = 0x8000000; // MCKEN

    static constexpr uint32_t SAI_ACR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_FTH =           // FTH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SAI_ACR2_FFLUSH = 0x8;   // FFLUSH
    static constexpr uint32_t SAI_ACR2_TRIS = 0x10;    // TRIS
    static constexpr uint32_t SAI_ACR2_MUTE = 0x20;    // MUTE
    static constexpr uint32_t SAI_ACR2_MUTEVAL = 0x40; // MUTEVAL
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_MUTECNT =       // MUTECNT
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t SAI_ACR2_CPL = 0x2000;   // CPL
    template<uint32_t X>
    static constexpr uint32_t SAI_ACR2_COMP =          // COMP
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t SAI_AFRCR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t SAI_AFRCR_FRL =            // FRL
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_AFRCR_FSALL =          // FSALL
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t SAI_AFRCR_FSDEF = 0x10000; // FSDEF
    static constexpr uint32_t SAI_AFRCR_FSPOL = 0x20000; // FSPOL
    static constexpr uint32_t SAI_AFRCR_FSOFF = 0x40000; // FSOFF

    static constexpr uint32_t SAI_ASLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_FBOFF =    // FBOFF
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_SLOTSZ =   // SLOTSZ
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_NBSLOT =   // NBSLOT
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_ASLOTR_SLOTEN =   // SLOTEN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SAI_AIM_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_AIM_OVRUDRIE = 0x1;  // OVRUDRIE
    static constexpr uint32_t SAI_AIM_MUTEDETIE = 0x2; // MUTEDETIE
    static constexpr uint32_t SAI_AIM_WCKCFGIE = 0x4;  // WCKCFGIE
    static constexpr uint32_t SAI_AIM_FREQIE = 0x8;    // FREQIE
    static constexpr uint32_t SAI_AIM_CNRDYIE = 0x10;  // CNRDYIE
    static constexpr uint32_t SAI_AIM_AFSDETIE = 0x20; // AFSDETIE
    static constexpr uint32_t SAI_AIM_LFSDETIE = 0x40; // LFSDETIE

    static constexpr uint32_t SAI_ASR_RESET_VALUE = 0x8;
    static constexpr uint32_t SAI_ASR_OVRUDR = 0x1;  // OVRUDR
    static constexpr uint32_t SAI_ASR_MUTEDET = 0x2; // MUTEDET
    static constexpr uint32_t SAI_ASR_WCKCFG = 0x4;  // WCKCFG
    static constexpr uint32_t SAI_ASR_FREQ = 0x8;    // FREQ
    static constexpr uint32_t SAI_ASR_CNRDY = 0x10;  // CNRDY
    static constexpr uint32_t SAI_ASR_AFSDET = 0x20; // AFSDET
    static constexpr uint32_t SAI_ASR_LFSDET = 0x40; // LFSDET
    template<uint32_t X>
    static constexpr uint32_t SAI_ASR_FLVL =         // FLVL
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t SAI_ACLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_ACLRFR_COVRUDR = 0x1;  // COVRUDR
    static constexpr uint32_t SAI_ACLRFR_CMUTEDET = 0x2; // CMUTEDET
    static constexpr uint32_t SAI_ACLRFR_CWCKCFG = 0x4;  // CWCKCFG
    static constexpr uint32_t SAI_ACLRFR_CCNRDY = 0x10;  // CCNRDY
    static constexpr uint32_t SAI_ACLRFR_CAFSDET = 0x20; // CAFSDET
    static constexpr uint32_t SAI_ACLRFR_CLFSDET = 0x40; // CLFSDET

    static constexpr uint32_t SAI_ADR_RESET_VALUE = 0x0;

    static constexpr uint32_t SAI_BCR1_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_MODE =             // MODE
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_PRTCFG =           // PRTCFG
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_DS =               // DS
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t SAI_BCR1_LSBFIRST = 0x100;  // LSBFIRST
    static constexpr uint32_t SAI_BCR1_CKSTR = 0x200;     // CKSTR
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_SYNCEN =           // SYNCEN
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SAI_BCR1_MONO = 0x1000;     // MONO
    static constexpr uint32_t SAI_BCR1_OUTDRIV = 0x2000;  // OUTDRIV
    static constexpr uint32_t SAI_BCR1_SAIEN = 0x10000;   // SAIEN
    static constexpr uint32_t SAI_BCR1_DMAEN = 0x20000;   // DMAEN
    static constexpr uint32_t SAI_BCR1_NODIV = 0x80000;   // NODIV
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR1_MCKDIV =           // MCKDIV
        bit_field_t<20, 0x3f>::value<X>();
    static constexpr uint32_t SAI_BCR1_OSR = 0x4000000;   // OSR
    static constexpr uint32_t SAI_BCR1_MCKEN = 0x8000000; // MCKEN

    static constexpr uint32_t SAI_BCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_FTH =           // FTH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SAI_BCR2_FFLUSH = 0x8;   // FFLUSH
    static constexpr uint32_t SAI_BCR2_TRIS = 0x10;    // TRIS
    static constexpr uint32_t SAI_BCR2_MUTE = 0x20;    // MUTE
    static constexpr uint32_t SAI_BCR2_MUTEVAL = 0x40; // MUTEVAL
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_MUTECNT =       // MUTECNT
        bit_field_t<7, 0x3f>::value<X>();
    static constexpr uint32_t SAI_BCR2_CPL = 0x2000;   // CPL
    template<uint32_t X>
    static constexpr uint32_t SAI_BCR2_COMP =          // COMP
        bit_field_t<14, 0x3>::value<X>();

    static constexpr uint32_t SAI_BFRCR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t SAI_BFRCR_FRL =            // FRL
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BFRCR_FSALL =          // FSALL
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t SAI_BFRCR_FSDEF = 0x10000; // FSDEF
    static constexpr uint32_t SAI_BFRCR_FSPOL = 0x20000; // FSPOL
    static constexpr uint32_t SAI_BFRCR_FSOFF = 0x40000; // FSOFF

    static constexpr uint32_t SAI_BSLOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_FBOFF =    // FBOFF
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_SLOTSZ =   // SLOTSZ
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_NBSLOT =   // NBSLOT
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_BSLOTR_SLOTEN =   // SLOTEN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t SAI_BIM_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_BIM_OVRUDRIE = 0x1;  // OVRUDRIE
    static constexpr uint32_t SAI_BIM_MUTEDETIE = 0x2; // MUTEDETIE
    static constexpr uint32_t SAI_BIM_WCKCFGIE = 0x4;  // WCKCFGIE
    static constexpr uint32_t SAI_BIM_FREQIE = 0x8;    // FREQIE
    static constexpr uint32_t SAI_BIM_CNRDYIE = 0x10;  // CNRDYIE
    static constexpr uint32_t SAI_BIM_AFSDETIE = 0x20; // AFSDETIE
    static constexpr uint32_t SAI_BIM_LFSDETIE = 0x40; // LFSDETIE

    static constexpr uint32_t SAI_BSR_RESET_VALUE = 0x8;
    static constexpr uint32_t SAI_BSR_OVRUDR = 0x1;  // OVRUDR
    static constexpr uint32_t SAI_BSR_MUTEDET = 0x2; // MUTEDET
    static constexpr uint32_t SAI_BSR_WCKCFG = 0x4;  // WCKCFG
    static constexpr uint32_t SAI_BSR_FREQ = 0x8;    // FREQ
    static constexpr uint32_t SAI_BSR_CNRDY = 0x10;  // CNRDY
    static constexpr uint32_t SAI_BSR_AFSDET = 0x20; // AFSDET
    static constexpr uint32_t SAI_BSR_LFSDET = 0x40; // LFSDET
    template<uint32_t X>
    static constexpr uint32_t SAI_BSR_FLVL =         // FLVL
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t SAI_BCLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_BCLRFR_COVRUDR = 0x1;  // COVRUDR
    static constexpr uint32_t SAI_BCLRFR_CMUTEDET = 0x2; // CMUTEDET
    static constexpr uint32_t SAI_BCLRFR_CWCKCFG = 0x4;  // CWCKCFG
    static constexpr uint32_t SAI_BCLRFR_CCNRDY = 0x10;  // CCNRDY
    static constexpr uint32_t SAI_BCLRFR_CAFSDET = 0x20; // CAFSDET
    static constexpr uint32_t SAI_BCLRFR_CLFSDET = 0x40; // CLFSDET

    static constexpr uint32_t SAI_BDR_RESET_VALUE = 0x0;

    static constexpr uint32_t SAI_PDMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SAI_PDMCR_PDMEN = 0x1;   // PDMEN
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMCR_MICNBR =       // MICNBR
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SAI_PDMCR_CKEN1 = 0x100; // CKEN1
    static constexpr uint32_t SAI_PDMCR_CKEN2 = 0x200; // CKEN2
    static constexpr uint32_t SAI_PDMCR_CKEN3 = 0x400; // CKEN3
    static constexpr uint32_t SAI_PDMCR_CKEN4 = 0x800; // CKEN4

    static constexpr uint32_t SAI_PDMDLY_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM1L =   // DLYM1L
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM1R =   // DLYM1R
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM2L =   // DLYM2L
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM2R =   // DLYM2R
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM3L =   // DLYM3L
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM3R =   // DLYM3R
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM4L =   // DLYM4L
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_PDMDLY_DLYM4R =   // DLYM4R
        bit_field_t<28, 0x7>::value<X>();

    static constexpr uint32_t SAI_HWCFGR_RESET_VALUE = 0x108;
    template<uint32_t X>
    static constexpr uint32_t SAI_HWCFGR_FIFO_SIZE =       // FIFO_SIZE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_HWCFGR_SPDIF_PDM =       // SPDIF_PDM
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_HWCFGR_OPTION_REGOUT =   // OPTION_REGOUT
        bit_field_t<12, 0xff>::value<X>();

    static constexpr uint32_t SAI_VERR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t SAI_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SAI_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SAI_IPIDR_RESET_VALUE = 0x130031;

    static constexpr uint32_t SAI_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, SAI1>
{
    typedef stm32mp15xxx_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SAI2>
{
    typedef stm32mp15xxx_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SAI3>
{
    typedef stm32mp15xxx_sai1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SAI4>
{
    typedef stm32mp15xxx_sai1_t T;
    static T& V;
};

using sai1_t = peripheral_t<mcu_svd, SAI1>;
using sai2_t = peripheral_t<mcu_svd, SAI2>;
using sai3_t = peripheral_t<mcu_svd, SAI3>;
using sai4_t = peripheral_t<mcu_svd, SAI4>;

