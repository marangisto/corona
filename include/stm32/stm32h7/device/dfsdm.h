#pragma once

////
//
//      STM32H7 DFSDM peripherals
//
////

////
//
//      Digital filter for sigma delta modulators
//
////

struct stm32h742x_dfsdm_t
{
    volatile uint32_t CH0CFGR1;          // [read-write] channel configuration y register
    volatile uint32_t CH0CFGR2;          // [read-write] channel configuration y register
    volatile uint32_t CH0AWSCDR;         // [read-write] analog watchdog and short-circuit detector register
    volatile uint32_t CH0WDATR;          // [read-write] channel watchdog filter data register
    volatile uint32_t CH0DATINR;         // [read-write] channel data input register
    volatile uint32_t CH0DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0x20;
    volatile uint32_t CH1CFGR1;          // [read-write] CH1CFGR1
    volatile uint32_t CH1CFGR2;          // [read-write] CH1CFGR2
    volatile uint32_t CH1AWSCDR;         // [read-write] CH1AWSCDR
    volatile uint32_t CH1WDATR;          // [read-write] CH1WDATR
    volatile uint32_t CH1DATINR;         // [read-write] CH1DATINR
    volatile uint32_t CH1DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0x40;
    volatile uint32_t CH2CFGR1;          // [read-write] CH2CFGR1
    volatile uint32_t CH2CFGR2;          // [read-write] CH2CFGR2
    volatile uint32_t CH2AWSCDR;         // [read-write] CH2AWSCDR
    volatile uint32_t CH2WDATR;          // [read-write] CH2WDATR
    volatile uint32_t CH2DATINR;         // [read-write] CH2DATINR
    volatile uint32_t CH2DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0x60;
    volatile uint32_t CH3CFGR1;          // [read-write] CH3CFGR1
    volatile uint32_t CH3CFGR2;          // [read-write] CH3CFGR2
    volatile uint32_t CH3AWSCDR;         // [read-write] CH3AWSCDR
    volatile uint32_t CH3WDATR;          // [read-write] CH3WDATR
    volatile uint32_t CH3DATINR;         // [read-write] CH3DATINR
    volatile uint32_t CH3DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0x80;
    volatile uint32_t CH4CFGR1;          // [read-write] CH4CFGR1
    volatile uint32_t CH4CFGR2;          // [read-write] CH4CFGR2
    volatile uint32_t CH4AWSCDR;         // [read-write] CH4AWSCDR
    volatile uint32_t CH4WDATR;          // [read-write] CH4WDATR
    volatile uint32_t CH4DATINR;         // [read-write] CH4DATINR
    volatile uint32_t CH4DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0xa0;
    volatile uint32_t CH5CFGR1;          // [read-write] CH5CFGR1
    volatile uint32_t CH5CFGR2;          // [read-write] CH5CFGR2
    volatile uint32_t CH5AWSCDR;         // [read-write] CH5AWSCDR
    volatile uint32_t CH5WDATR;          // [read-write] CH5WDATR
    volatile uint32_t CH5DATINR;         // [read-write] CH5DATINR
    volatile uint32_t CH5DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0xc0;
    volatile uint32_t CH6CFGR1;          // [read-write] CH6CFGR1
    volatile uint32_t CH6CFGR2;          // [read-write] CH6CFGR2
    volatile uint32_t CH6AWSCDR;         // [read-write] CH6AWSCDR
    volatile uint32_t CH6WDATR;          // [read-write] CH6WDATR
    volatile uint32_t CH6DATINR;         // [read-write] CH6DATINR
    volatile uint32_t CH6DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0xe0;
    volatile uint32_t CH7CFGR1;          // [read-write] CH7CFGR1
    volatile uint32_t CH7CFGR2;          // [read-write] CH7CFGR2
    volatile uint32_t CH7AWSCDR;         // [read-write] CH7AWSCDR
    volatile uint32_t CH7WDATR;          // [read-write] CH7WDATR
    volatile uint32_t CH7DATINR;         // [read-write] CH7DATINR
    volatile uint32_t CH7DLYR;           // [read-write] channel y delay register
    reserved_t<0x2> _0x100;
    volatile uint32_t DFSDM_FLT0CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM_FLT0CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM_FLT0ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM_FLT0ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM_FLT0JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM_FLT0FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM_FLT0JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM_FLT0RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM_FLT0AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT0AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT0AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM_FLT0AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT0EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM_FLT0EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM_FLT0CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x180;
    volatile uint32_t DFSDM_FLT1CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM_FLT1CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM_FLT1ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM_FLT1ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM_FLT1CHGR;    // [read-write] injected channel group selection register
    volatile uint32_t DFSDM_FLT1FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM_FLT1JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM_FLT1RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM_FLT1AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT1AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT1AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM_FLT1AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT1EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM_FLT1EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM_FLT1CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x200;
    volatile uint32_t DFSDM_FLT2CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM_FLT2CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM_FLT2ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM_FLT2ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM_FLT2JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM_FLT2FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM_FLT2JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM_FLT2RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM_FLT2AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT2AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT2AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM_FLT2AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT2EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM_FLT2EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM_FLT2CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x11> _0x280;
    volatile uint32_t DFSDM_FLT3CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM_FLT3CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM_FLT3ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM_FLT3ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM_FLT3JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM_FLT3FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM_FLT3JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM_FLT3RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM_FLT3AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT3AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT3AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM_FLT3AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT3EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM_FLT3EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM_FLT3CNVTIMR; // [read-only] conversion timer register

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

    static constexpr uint32_t CH0DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH0DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH1CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH1CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH1CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH1CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH1CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH1CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH1DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH1DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH2CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH2CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH2CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH2CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH2CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH2CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH2DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH2DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH3CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH3CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH3CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH3CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH3CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH3CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH3DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH3DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH4CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH4CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH4CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH4CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH4CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH4CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH4DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH4DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH5CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH5CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH5CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH5CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH5CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH5CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH5DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH5DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH6CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH6CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH6CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH6CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH6CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH6CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH6DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH6DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CH7CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CH7CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH7CFGR1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CH7CFGR1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CH7CFGR1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CH7CFGR1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

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

    static constexpr uint32_t CH7DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CH7DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_FLT0CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT0CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT0CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT0CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT0CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT0CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT0CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT0CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT0CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT0CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT0CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT0CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM_FLT0CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT0CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT0ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT0ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT0ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT0ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM_FLT0ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT0ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT0ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT0ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT0JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT0RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM_FLT0RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT0EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT0CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT1CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT1CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT1CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT1CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT1CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT1CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT1CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT1CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT1CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT1CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT1CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM_FLT1CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT1CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT1ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT1ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT1ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT1ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM_FLT1ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT1ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT1ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT1ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT1CHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT1RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM_FLT1RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT1EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT1CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT2CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT2CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT2CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT2CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT2CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT2CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT2CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT2CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT2CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT2CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT2CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM_FLT2CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT2CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT2ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT2ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT2ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT2ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM_FLT2ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT2ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT2ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT2ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT2JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT2RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM_FLT2RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT2EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT2CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT3CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT3CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT3CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT3CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT3CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT3CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT3CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT3CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT3CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT3CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT3CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM_FLT3CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT3CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT3ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT3ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT3ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT3ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM_FLT3ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT3ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT3ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_FLT3ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT3JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT3RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM_FLT3RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT3EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT3CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();
};


////
//
//      Digital filter for sigma delta modulators
//
////

struct stm32h743_dfsdm_t
{
    volatile uint32_t DFSDM_CHCFG0R1;  // [read-write] DFSDM channel configuration 0 register 1
    volatile uint32_t DFSDM_CHCFG1R1;  // [read-write] DFSDM channel configuration 1 register 1
    volatile uint32_t DFSDM_CHCFG2R1;  // [read-write] DFSDM channel configuration 2 register 1
    volatile uint32_t DFSDM_CHCFG3R1;  // [read-write] DFSDM channel configuration 3 register 1
    volatile uint32_t DFSDM_CHCFG4R1;  // [read-write] DFSDM channel configuration 4 register 1
    volatile uint32_t DFSDM_CHCFG5R1;  // [read-write] DFSDM channel configuration 5 register 1
    volatile uint32_t DFSDM_CHCFG6R1;  // [read-write] DFSDM channel configuration 6 register 1
    volatile uint32_t DFSDM_CHCFG7R1;  // [read-write] DFSDM channel configuration 7 register 1
    volatile uint32_t DFSDM_CHCFG0R2;  // [read-write] DFSDM channel configuration 0 register 2
    volatile uint32_t DFSDM_CHCFG1R2;  // [read-write] DFSDM channel configuration 1 register 2
    volatile uint32_t DFSDM_CHCFG2R2;  // [read-write] DFSDM channel configuration 2 register 2
    volatile uint32_t DFSDM_CHCFG3R2;  // [read-write] DFSDM channel configuration 3 register 2
    volatile uint32_t DFSDM_CHCFG4R2;  // [read-write] DFSDM channel configuration 4 register 2
    volatile uint32_t DFSDM_CHCFG5R2;  // [read-write] DFSDM channel configuration 5 register 2
    volatile uint32_t DFSDM_CHCFG6R2;  // [read-write] DFSDM channel configuration 6 register 2
    volatile uint32_t DFSDM_CHCFG7R2;  // [read-write] DFSDM channel configuration 7 register 2
    volatile uint32_t DFSDM_AWSCD0R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD1R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD2R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD3R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD4R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD5R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD6R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD7R;   // [read-write] DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT0R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT1R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT2R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT3R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT4R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT5R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT6R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT7R;  // [read-only] DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN0R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN1R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN2R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN3R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN4R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN5R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN6R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN7R; // [read-write] DFSDM channel data input register
    volatile uint32_t DFSDM0_CR1;      // [read-write] DFSDM control register 1
    volatile uint32_t DFSDM1_CR1;      // [read-write] DFSDM control register 1
    volatile uint32_t DFSDM2_CR1;      // [read-write] DFSDM control register 1
    volatile uint32_t DFSDM3_CR1;      // [read-write] DFSDM control register 1
    volatile uint32_t DFSDM0_CR2;      // [read-write] DFSDM control register 2
    volatile uint32_t DFSDM1_CR2;      // [read-write] DFSDM control register 2
    volatile uint32_t DFSDM2_CR2;      // [read-write] DFSDM control register 2
    volatile uint32_t DFSDM3_CR2;      // [read-write] DFSDM control register 2
    volatile uint32_t DFSDM0_ISR;      // [read-only] DFSDM interrupt and status register
    volatile uint32_t DFSDM1_ISR;      // [read-only] DFSDM interrupt and status register
    volatile uint32_t DFSDM2_ISR;      // [read-only] DFSDM interrupt and status register
    volatile uint32_t DFSDM3_ISR;      // [read-only] DFSDM interrupt and status register
    volatile uint32_t DFSDM0_ICR;      // [read-write] DFSDM interrupt flag clear register
    volatile uint32_t DFSDM1_ICR;      // [read-write] DFSDM interrupt flag clear register
    volatile uint32_t DFSDM2_ICR;      // [read-write] DFSDM interrupt flag clear register
    volatile uint32_t DFSDM3_ICR;      // [read-write] DFSDM interrupt flag clear register
    volatile uint32_t DFSDM0_JCHGR;    // [read-write] DFSDM injected channel group selection register
    volatile uint32_t DFSDM1_JCHGR;    // [read-write] DFSDM injected channel group selection register
    volatile uint32_t DFSDM2_JCHGR;    // [read-write] DFSDM injected channel group selection register
    volatile uint32_t DFSDM3_JCHGR;    // [read-write] DFSDM injected channel group selection register
    volatile uint32_t DFSDM0_FCR;      // [read-write] DFSDM filter control register
    volatile uint32_t DFSDM1_FCR;      // [read-write] DFSDM filter control register
    volatile uint32_t DFSDM2_FCR;      // [read-write] DFSDM filter control register
    volatile uint32_t DFSDM3_FCR;      // [read-write] DFSDM filter control register
    volatile uint32_t DFSDM0_JDATAR;   // [read-only] DFSDM data register for injected group
    volatile uint32_t DFSDM1_JDATAR;   // [read-only] DFSDM data register for injected group
    volatile uint32_t DFSDM2_JDATAR;   // [read-only] DFSDM data register for injected group
    volatile uint32_t DFSDM3_JDATAR;   // [read-only] DFSDM data register for injected group
    volatile uint32_t DFSDM0_RDATAR;   // [read-only] DFSDM data register for the regular channel
    volatile uint32_t DFSDM1_RDATAR;   // [read-only] DFSDM data register for the regular channel
    volatile uint32_t DFSDM2_RDATAR;   // [read-only] DFSDM data register for the regular channel
    volatile uint32_t DFSDM3_RDATAR;   // [read-only] DFSDM data register for the regular channel
    volatile uint32_t DFSDM0_AWHTR;    // [read-write] DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM1_AWHTR;    // [read-write] DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM2_AWHTR;    // [read-write] DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM3_AWHTR;    // [read-write] DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM0_AWLTR;    // [read-write] DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM1_AWLTR;    // [read-write] DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM2_AWLTR;    // [read-write] DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM3_AWLTR;    // [read-write] DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM0_AWSR;     // [read-only] DFSDM analog watchdog status register
    volatile uint32_t DFSDM1_AWSR;     // [read-only] DFSDM analog watchdog status register
    volatile uint32_t DFSDM2_AWSR;     // [read-only] DFSDM analog watchdog status register
    volatile uint32_t DFSDM3_AWSR;     // [read-only] DFSDM analog watchdog status register
    volatile uint32_t DFSDM0_AWCFR;    // [read-write] DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM1_AWCFR;    // [read-write] DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM2_AWCFR;    // [read-write] DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM3_AWCFR;    // [read-write] DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM0_EXMAX;    // [read-only] DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM1_EXMAX;    // [read-only] DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM2_EXMAX;    // [read-only] DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM3_EXMAX;    // [read-only] DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM0_EXMIN;    // [read-only] DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM1_EXMIN;    // [read-only] DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM2_EXMIN;    // [read-only] DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM3_EXMIN;    // [read-only] DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM0_CNVTIMR;  // [read-only] DFSDM conversion timer register
    volatile uint32_t DFSDM1_CNVTIMR;  // [read-only] DFSDM conversion timer register
    volatile uint32_t DFSDM2_CNVTIMR;  // [read-only] DFSDM conversion timer register
    volatile uint32_t DFSDM3_CNVTIMR;  // [read-only] DFSDM conversion timer register

    static constexpr uint32_t DFSDM_CHCFG0R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R1_SITP =                 // Serial interface type for channel 0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R1_SPICKSEL =             // SPI clock select for channel 0
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG0R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 0
    static constexpr uint32_t DFSDM_CHCFG0R1_CKABEN = 0x40;         // Clock absence detector enable on channel 0
    static constexpr uint32_t DFSDM_CHCFG0R1_CHEN = 0x80;           // Channel 0 enable
    static constexpr uint32_t DFSDM_CHCFG0R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R1_DATMPX =               // Input data multiplexer for channel 0
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG0R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG0R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG1R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R1_SITP =                 // Serial interface type for channel 1
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R1_SPICKSEL =             // SPI clock select for channel 1
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG1R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 1
    static constexpr uint32_t DFSDM_CHCFG1R1_CKABEN = 0x40;         // Clock absence detector enable on channel 1
    static constexpr uint32_t DFSDM_CHCFG1R1_CHEN = 0x80;           // Channel 1 enable
    static constexpr uint32_t DFSDM_CHCFG1R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R1_DATMPX =               // Input data multiplexer for channel 1
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG1R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG1R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG2R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R1_SITP =                 // Serial interface type for channel 2
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R1_SPICKSEL =             // SPI clock select for channel 2
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG2R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 2
    static constexpr uint32_t DFSDM_CHCFG2R1_CKABEN = 0x40;         // Clock absence detector enable on channel 2
    static constexpr uint32_t DFSDM_CHCFG2R1_CHEN = 0x80;           // Channel 2 enable
    static constexpr uint32_t DFSDM_CHCFG2R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R1_DATMPX =               // Input data multiplexer for channel 2
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG2R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG2R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG3R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R1_SITP =                 // Serial interface type for channel 3
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R1_SPICKSEL =             // SPI clock select for channel 3
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG3R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 3
    static constexpr uint32_t DFSDM_CHCFG3R1_CKABEN = 0x40;         // Clock absence detector enable on channel 3
    static constexpr uint32_t DFSDM_CHCFG3R1_CHEN = 0x80;           // Channel 3 enable
    static constexpr uint32_t DFSDM_CHCFG3R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R1_DATMPX =               // Input data multiplexer for channel 3
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG3R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG3R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG4R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R1_SITP =                 // Serial interface type for channel 4
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R1_SPICKSEL =             // SPI clock select for channel 4
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG4R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 4
    static constexpr uint32_t DFSDM_CHCFG4R1_CKABEN = 0x40;         // Clock absence detector enable on channel 4
    static constexpr uint32_t DFSDM_CHCFG4R1_CHEN = 0x80;           // Channel 4 enable
    static constexpr uint32_t DFSDM_CHCFG4R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R1_DATMPX =               // Input data multiplexer for channel 4
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG4R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG4R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG5R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R1_SITP =                 // Serial interface type for channel 5
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R1_SPICKSEL =             // SPI clock select for channel 5
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG5R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 5
    static constexpr uint32_t DFSDM_CHCFG5R1_CKABEN = 0x40;         // Clock absence detector enable on channel 5
    static constexpr uint32_t DFSDM_CHCFG5R1_CHEN = 0x80;           // Channel 5 enable
    static constexpr uint32_t DFSDM_CHCFG5R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R1_DATMPX =               // Input data multiplexer for channel 5
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG5R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG5R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG6R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R1_SITP =                 // Serial interface type for channel 6
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R1_SPICKSEL =             // SPI clock select for channel 6
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG6R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 6
    static constexpr uint32_t DFSDM_CHCFG6R1_CKABEN = 0x40;         // Clock absence detector enable on channel 6
    static constexpr uint32_t DFSDM_CHCFG6R1_CHEN = 0x80;           // Channel 6 enable
    static constexpr uint32_t DFSDM_CHCFG6R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R1_DATMPX =               // Input data multiplexer for channel 6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG6R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG6R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG7R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R1_SITP =                 // Serial interface type for channel 7
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R1_SPICKSEL =             // SPI clock select for channel 7
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG7R1_SCDEN = 0x20;          // Short-circuit detector enable on channel 7
    static constexpr uint32_t DFSDM_CHCFG7R1_CKABEN = 0x40;         // Clock absence detector enable on channel 7
    static constexpr uint32_t DFSDM_CHCFG7R1_CHEN = 0x80;           // Channel 7 enable
    static constexpr uint32_t DFSDM_CHCFG7R1_CHINSEL = 0x100;       // Channel inputs selection
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R1_DATMPX =               // Input data multiplexer for channel 7
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R1_DATPACK =              // Data packing mode in DFSDM_CHDATINyR register
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R1_CKOUTDIV =             // Output serial clock divider
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CHCFG7R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG7R1_DFSDMEN = 0x80000000;  // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG0R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R2_DTRBS =    // Data right bit-shift for channel 0
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG0R2_OFFSET =   // 24-bit calibration offset for channel 0
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG1R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R2_DTRBS =    // Data right bit-shift for channel 1
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG1R2_OFFSET =   // 24-bit calibration offset for channel 1
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG2R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R2_DTRBS =    // Data right bit-shift for channel 2
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG2R2_OFFSET =   // 24-bit calibration offset for channel 2
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG3R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R2_DTRBS =    // Data right bit-shift for channel 3
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG3R2_OFFSET =   // 24-bit calibration offset for channel 3
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG4R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R2_DTRBS =    // Data right bit-shift for channel 4
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG4R2_OFFSET =   // 24-bit calibration offset for channel 4
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG5R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R2_DTRBS =    // Data right bit-shift for channel 5
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG5R2_OFFSET =   // 24-bit calibration offset for channel 5
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG6R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R2_DTRBS =    // Data right bit-shift for channel 6
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG6R2_OFFSET =   // 24-bit calibration offset for channel 6
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CHCFG7R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R2_DTRBS =    // Data right bit-shift for channel 7
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHCFG7R2_OFFSET =   // 24-bit calibration offset for channel 7
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD0R_SCDT =     // short-circuit detector threshold for channel 0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD0R_BKSCD =    // Break signal assignment for short-circuit detector on channel 0
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD0R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 0
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD0R_AWFORD =   // Analog watchdog Sinc filter order on channel 0
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD1R_SCDT =     // short-circuit detector threshold for channel 1
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD1R_BKSCD =    // Break signal assignment for short-circuit detector on channel 1
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD1R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 1
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD1R_AWFORD =   // Analog watchdog Sinc filter order on channel 1
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD2R_SCDT =     // short-circuit detector threshold for channel 2
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD2R_BKSCD =    // Break signal assignment for short-circuit detector on channel 2
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD2R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 2
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD2R_AWFORD =   // Analog watchdog Sinc filter order on channel 2
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD3R_SCDT =     // short-circuit detector threshold for channel 3
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD3R_BKSCD =    // Break signal assignment for short-circuit detector on channel 3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD3R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 3
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD3R_AWFORD =   // Analog watchdog Sinc filter order on channel 3
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD4R_SCDT =     // short-circuit detector threshold for channel 4
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD4R_BKSCD =    // Break signal assignment for short-circuit detector on channel 4
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD4R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 4
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD4R_AWFORD =   // Analog watchdog Sinc filter order on channel 4
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD5R_SCDT =     // short-circuit detector threshold for channel 5
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD5R_BKSCD =    // Break signal assignment for short-circuit detector on channel 5
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD5R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 5
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD5R_AWFORD =   // Analog watchdog Sinc filter order on channel 5
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD6R_SCDT =     // short-circuit detector threshold for channel 6
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD6R_BKSCD =    // Break signal assignment for short-circuit detector on channel 6
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD6R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 6
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD6R_AWFORD =   // Analog watchdog Sinc filter order on channel 6
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_AWSCD7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD7R_SCDT =     // short-circuit detector threshold for channel 7
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD7R_BKSCD =    // Break signal assignment for short-circuit detector on channel 7
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD7R_AWFOSR =   // Analog watchdog filter oversampling ratio (decimation rate) on channel 7
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_AWSCD7R_AWFORD =   // Analog watchdog Sinc filter order on channel 7
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT0R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT1R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT2R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT3R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT4R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT5R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT6R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHWDAT7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHWDAT7R_WDATA =   // Input channel y watchdog data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN0R_INDAT0 =   // Input data for channel 0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN0R_INDAT1 =   // Input data for channel 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN1R_INDAT0 =   // Input data for channel 1
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN1R_INDAT1 =   // Input data for channel 2
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN2R_INDAT0 =   // Input data for channel 2
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN2R_INDAT1 =   // Input data for channel 3
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN3R_INDAT0 =   // Input data for channel 3
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN3R_INDAT1 =   // Input data for channel 4
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN4R_INDAT0 =   // Input data for channel 4
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN4R_INDAT1 =   // Input data for channel 5
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN5R_INDAT0 =   // Input data for channel 5
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN5R_INDAT1 =   // Input data for channel 6
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN6R_INDAT0 =   // Input data for channel 6
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN6R_INDAT1 =   // Input data for channel 7
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CHDATIN7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN7R_INDAT0 =   // Input data for channel 7
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CHDATIN7R_INDAT1 =   // Input data for channel 8
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM0_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM0_CR1_DFEN = 0x1;          // DFSDM enable
    static constexpr uint32_t DFSDM0_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM0_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM0_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM0_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM0_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM0_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM0_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM0_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM1_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM1_CR1_DFEN = 0x1;          // DFSDM enable
    static constexpr uint32_t DFSDM1_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM1_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM1_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM1_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM1_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM1_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM1_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM1_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM2_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM2_CR1_DFEN = 0x1;          // DFSDM enable
    static constexpr uint32_t DFSDM2_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM2_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM2_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM2_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM2_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM2_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM2_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM2_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM3_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM3_CR1_DFEN = 0x1;          // DFSDM enable
    static constexpr uint32_t DFSDM3_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM3_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM3_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM3_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM3_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM3_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM3_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM3_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM0_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM0_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM0_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM0_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM1_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM1_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM1_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM2_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM2_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM2_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM3_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM3_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM3_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM0_ISR_JEOCF = 0x1;   // End of injected conversion flag
    static constexpr uint32_t DFSDM0_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM0_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM0_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_RCIP = 0x4000; // Regular conversion in progress status
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM1_ISR_JEOCF = 0x1;   // End of injected conversion flag
    static constexpr uint32_t DFSDM1_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM1_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM1_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_RCIP = 0x4000; // Regular conversion in progress status
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM2_ISR_JEOCF = 0x1;   // End of injected conversion flag
    static constexpr uint32_t DFSDM2_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM2_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM2_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_RCIP = 0x4000; // Regular conversion in progress status
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM3_ISR_JEOCF = 0x1;   // End of injected conversion flag
    static constexpr uint32_t DFSDM3_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM3_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM3_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_RCIP = 0x4000; // Regular conversion in progress status
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM0_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM1_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM2_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM3_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_JCHGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_JCHGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_JCHGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_JCHGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM1_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM2_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM3_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM0_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM0_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM1_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM2_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM3_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_EXMAX_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_EXMAX_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_EXMAX_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_EXMAX_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_EXMIN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMIN_EXMIN =     // Extremes detector minimum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM1_EXMIN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMIN_EXMIN =     // Extremes detector minimum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM2_EXMIN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMIN_EXMIN =     // Extremes detector minimum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM3_EXMIN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMIN_EXMIN =     // Extremes detector minimum value
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM0_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM1_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM2_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM3_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time
        bit_field_t<4, 0xfffffff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DFSDM>
{
    typedef stm32h742x_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DFSDM>
{
    typedef stm32h743_dfsdm_t T;
    static T& V;
};

using dfsdm_t = peripheral_t<mcu_svd, DFSDM>;

