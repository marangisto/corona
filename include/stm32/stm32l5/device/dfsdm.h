#pragma once

////
//
//      STM32L5 DFSDM peripherals
//
////

////
//
//      Digital filter for sigma delta modulators
//
////

struct stm32l552_dfsdm1_t
{
    volatile uint32_t CH0CFGR1;    // [read-write] channel configuration y register
    volatile uint32_t CH0CFGR2;    // [read-write] channel configuration y register
    volatile uint32_t CH0AWSCDR;   // [read-write] analog watchdog and short-circuit detector register
    volatile uint32_t CH0WDATR;    // [read-write] channel watchdog filter data register
    volatile uint32_t CH0DATINR;   // [read-write] channel data input register
    volatile uint32_t CH0DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0x20;
    volatile uint32_t CH1CFGR1;    // [read-write] CHCFG1R1
    volatile uint32_t CH1CFGR2;    // [read-write] CHCFG1R2
    volatile uint32_t CH1AWSCDR;   // [read-write] AWSCD1R
    volatile uint32_t CH1WDATR;    // [read-write] CHWDAT1R
    volatile uint32_t CH1DATINR;   // [read-write] CHDATIN1R
    volatile uint32_t CH1DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0x40;
    volatile uint32_t CH2CFGR1;    // [read-write] CHCFG2R1
    volatile uint32_t CH2CFGR2;    // [read-write] CHCFG2R2
    volatile uint32_t CH2AWSCDR;   // [read-write] AWSCD2R
    volatile uint32_t CH2WDATR;    // [read-write] CHWDAT2R
    volatile uint32_t CH2DATINR;   // [read-write] CHDATIN2R
    volatile uint32_t CH2DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0x60;
    volatile uint32_t CH3CFGR1;    // [read-write] CHCFG3R1
    volatile uint32_t CH3CFGR2;    // [read-write] CHCFG3R2
    volatile uint32_t CH3AWSCDR;   // [read-write] AWSCD3R
    volatile uint32_t CH3WDATR;    // [read-write] CHWDAT3R
    volatile uint32_t CH3DATINR;   // [read-write] CHDATIN3R
    volatile uint32_t CH3DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0x80;
    volatile uint32_t CH4CFGR1;    // [read-write] CHCFG4R1
    volatile uint32_t CH4CFGR2;    // [read-write] CHCFG4R2
    volatile uint32_t CH4AWSCDR;   // [read-write] AWSCD4R
    volatile uint32_t CH4WDATR;    // [read-write] CHWDAT4R
    volatile uint32_t CH4DATINR;   // [read-write] CHDATIN4R
    volatile uint32_t CH4DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0xa0;
    volatile uint32_t CH5CFGR1;    // [read-write] CHCFG5R1
    volatile uint32_t CH5CFGR2;    // [read-write] CHCFG5R2
    volatile uint32_t CH5AWSCDR;   // [read-write] AWSCD5R
    volatile uint32_t CH5WDATR;    // [read-write] CHWDAT5R
    volatile uint32_t CH5DATINR;   // [read-write] CHDATIN5R
    volatile uint32_t CH5DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0xc0;
    volatile uint32_t CH6CFGR1;    // [read-write] CHCFG6R1
    volatile uint32_t CH6CFGR2;    // [read-write] CH6CFGR2
    volatile uint32_t CH6AWSCDR;   // [read-write] AWSCD6R
    volatile uint32_t CH6WDATR;    // [read-write] CHWDAT6R
    volatile uint32_t CH6DATINR;   // [read-write] CHDATIN6R
    volatile uint32_t CH6DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0xe0;
    volatile uint32_t CH7CFGR1;    // [read-write] CHCFG7R1
    volatile uint32_t CH7CFGR2;    // [read-write] CHCFG7R2
    volatile uint32_t CH7AWSCDR;   // [read-write] AWSCD7R
    volatile uint32_t CH7WDATR;    // [read-write] CHWDAT7R
    volatile uint32_t CH7DATINR;   // [read-write] CHDATIN7R
    volatile uint32_t CH7DLYR;     // [read-write] DFSDM channel y delay register
    reserved_t<0x2> _0x100;
    volatile uint32_t FLT0CR1;     // [read-write] control register 1
    volatile uint32_t FLT0CR2;     // [read-write] control register 2
    volatile uint32_t FLT0ISR;     // [read-only] interrupt and status register
    volatile uint32_t FLT0ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t FLT0JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t FLT0FCR;     // [read-write] filter control register
    volatile uint32_t FLT0JDATAR;  // [read-only] data register for injected group
    volatile uint32_t FLT0RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t FLT0AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t FLT0AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t FLT0AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t FLT0AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t FLT0EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t FLT0EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t FLT0CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x180;
    volatile uint32_t FLT1CR1;     // [read-write] control register 1
    volatile uint32_t FLT1CR2;     // [read-write] control register 2
    volatile uint32_t FLT1ISR;     // [read-only] interrupt and status register
    volatile uint32_t FLT1ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t FLT1JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t FLT1FCR;     // [read-write] filter control register
    volatile uint32_t FLT1JDATAR;  // [read-only] data register for injected group
    volatile uint32_t FLT1RDATAR;  // [read-only] data register for the regular channel
    reserved_t<0x1> _0x1a4;
    volatile uint32_t FLT1AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t FLT1AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t FLT1AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t FLT1EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t FLT1EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t FLT1CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x200;
    volatile uint32_t FLT2CR1;     // [read-write] control register 1
    volatile uint32_t FLT2CR2;     // [read-write] control register 2
    volatile uint32_t FLT2ISR;     // [read-only] interrupt and status register
    volatile uint32_t FLT2ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t FLT2JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t FLT2FCR;     // [read-write] filter control register
    volatile uint32_t FLT2JDATAR;  // [read-only] data register for injected group
    volatile uint32_t FLT2RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t FLT2AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t FLT2AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t FLT2AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t FLT2AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t FLT2EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t FLT2EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t FLT2CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x280;
    volatile uint32_t FLT3CR1;     // [read-write] control register 1
    volatile uint32_t FLT3CR2;     // [read-write] control register 2
    volatile uint32_t FLT3ISR;     // [read-only] interrupt and status register
    volatile uint32_t FLT3ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t FLT3JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t FLT3FCR;     // [read-write] filter control register
    volatile uint32_t FLT3JDATAR;  // [read-only] data register for injected group
    volatile uint32_t FLT3RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t FLT3AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t FLT3AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t FLT3AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t FLT3AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t FLT3EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t FLT3EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t FLT3CNVTIMR; // [read-only] conversion timer register

    static constexpr uint32_t CH0CFGR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CH0CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN
    static constexpr uint32_t CH0CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH0CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH0CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH0CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH0CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CH0CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH0AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH0WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH0DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH0DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH1CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH1CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH1CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH1CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH1CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH1CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH1CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH1CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH1AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH1WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH1DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH2CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH2CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH2CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH2CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH2CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH2CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH2CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH2CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH2AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH2WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH2DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH3CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH3CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH3CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH3CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH3CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH3CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH3CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH3CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH3AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH3WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH3DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH4CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH4CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH4CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH4CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH4CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH4CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH4CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH4CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH4AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH4WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH4DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH5CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH5CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH5CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH5CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH5CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH5CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH5CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH5CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH5AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH5WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH5DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH6CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH6CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH6CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH6CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH6CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH6CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH6CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH6CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH6AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH6WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH6DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH7CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH7CFGR1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CH7CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CH7CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CH7CFGR1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CH7CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t CH7CFGR1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t CH7CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t CH7AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CH7WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CH7DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FLT0CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FLT0CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT0CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t FLT0CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FLT0CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT0CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT0CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT0CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t FLT0CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FLT0CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT0CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT0CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT0CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT0CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t FLT0CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FLT0CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT0CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT0CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t FLT0CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t FLT0CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t FLT0CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT0CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT0ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t FLT0ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT0ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT0ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT0ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t FLT0ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t FLT0ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t FLT0ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t FLT0ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t FLT0ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT0ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT0ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT0JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t FLT0JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT0FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT0JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT0RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t FLT0RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t FLT0RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT0AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT0AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT0AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT0AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT0EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t FLT0EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT0EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t FLT0EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT0EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT0CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT0CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t FLT1CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FLT1CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT1CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t FLT1CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FLT1CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT1CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT1CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT1CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t FLT1CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FLT1CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT1CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT1CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT1CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT1CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t FLT1CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FLT1CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT1CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT1CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t FLT1CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t FLT1CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t FLT1CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT1CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT1ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t FLT1ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT1ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT1ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT1ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t FLT1ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t FLT1ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t FLT1ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t FLT1ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t FLT1ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT1ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT1ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT1JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t FLT1JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT1FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT1JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT1RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t FLT1RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t FLT1RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT1AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT1AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT1AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT1AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT1EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t FLT1EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT1EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t FLT1EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT1EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT1CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT1CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t FLT2CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FLT2CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT2CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t FLT2CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FLT2CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT2CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT2CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT2CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t FLT2CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FLT2CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT2CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT2CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT2CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT2CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t FLT2CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FLT2CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT2CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT2CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t FLT2CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t FLT2CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t FLT2CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT2CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT2ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t FLT2ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT2ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT2ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT2ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t FLT2ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t FLT2ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t FLT2ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t FLT2ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t FLT2ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT2ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT2ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT2JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t FLT2JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT2FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT2JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT2RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t FLT2RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t FLT2RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT2AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT2AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT2AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT2AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT2EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t FLT2EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT2EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t FLT2EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT2EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT2CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT2CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t FLT3CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FLT3CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT3CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t FLT3CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FLT3CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT3CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT3CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT3CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t FLT3CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FLT3CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT3CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT3CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT3CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT3CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t FLT3CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FLT3CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT3CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT3CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t FLT3CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t FLT3CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t FLT3CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT3CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT3ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t FLT3ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT3ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT3ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT3ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t FLT3ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t FLT3ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t FLT3ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t FLT3ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t FLT3ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FLT3ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT3ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT3JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t FLT3JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT3FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT3JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT3RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t FLT3RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t FLT3RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT3AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT3AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FLT3AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT3AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FLT3EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t FLT3EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT3EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t FLT3EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FLT3EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FLT3CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLT3CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t CH0DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0DLYR_PLSSKP =   // Pulses to skip for input data skipping function
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH1DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH2DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH3DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH4DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH5DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5DLYR_PLSSKP =   // read-only
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH6DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH7DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();
};


template<>
struct peripheral_t<STM32L552, DFSDM1>
{
    typedef stm32l552_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_DFSDM1>
{
    typedef stm32l552_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DFSDM1>
{
    typedef stm32l552_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_DFSDM1>
{
    typedef stm32l552_dfsdm1_t T;
    static T& V;
};

using dfsdm1_t = peripheral_t<mcu_svd, DFSDM1>;
using sec_dfsdm1_t = peripheral_t<mcu_svd, SEC_DFSDM1>;

template<int INST> struct dfsdm_traits {};

template<> struct dfsdm_traits<1>
{
    using dfsdm = dfsdm1_t;
    static constexpr alternate_function_t CKIN0 = DFSDM1_CKIN0;
    static constexpr alternate_function_t CKIN1 = DFSDM1_CKIN1;
    static constexpr alternate_function_t CKIN2 = DFSDM1_CKIN2;
    static constexpr alternate_function_t CKIN3 = DFSDM1_CKIN3;
    static constexpr alternate_function_t CKOUT = DFSDM1_CKOUT;
    static constexpr alternate_function_t DATIN0 = DFSDM1_DATIN0;
    static constexpr alternate_function_t DATIN1 = DFSDM1_DATIN1;
    static constexpr alternate_function_t DATIN2 = DFSDM1_DATIN2;
    static constexpr alternate_function_t DATIN3 = DFSDM1_DATIN3;
};

template<int INST> struct sec_dfsdm_traits {};

template<> struct sec_dfsdm_traits<1>
{
    using sec_dfsdm = sec_dfsdm1_t;
};

