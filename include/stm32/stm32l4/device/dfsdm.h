#pragma once

////
//
//      STM32L4 DFSDM peripherals
//
///

// DFSDM1: Digital filter for sigma delta modulators

struct stm32l476_dfsdm1_t
{
    volatile uint32_t CH0CFGR1; // channel configuration y register
    volatile uint32_t CH0CFGR2; // channel configuration y register
    volatile uint32_t CH0AWSCDR; // analog watchdog and short-circuit detector register
    volatile uint32_t CH0WDATR; // channel watchdog filter data register
    volatile uint32_t CH0DATINR; // channel data input register
    volatile uint32_t CH0DLYR; // channel y delay register
    reserved_t<0x2> _0x18;
    volatile uint32_t CH1CFGR1; // CH1CFGR1
    volatile uint32_t CH1CFGR2; // CH1CFGR2
    volatile uint32_t CH1AWSCDR; // CH1AWSCDR
    volatile uint32_t CH1WDATR; // CH1WDATR
    volatile uint32_t CH1DATINR; // CH1DATINR
    volatile uint32_t CH1DLYR; // channel y delay register
    reserved_t<0x2> _0x38;
    volatile uint32_t CH2CFGR1; // CH2CFGR1
    volatile uint32_t CH2CFGR2; // CH2CFGR2
    volatile uint32_t CH2AWSCDR; // CH2AWSCDR
    volatile uint32_t CH2WDATR; // CH2WDATR
    volatile uint32_t CH2DATINR; // CH2DATINR
    volatile uint32_t CH2DLYR; // channel y delay register
    reserved_t<0x2> _0x58;
    volatile uint32_t CH3CFGR1; // CH3CFGR1
    volatile uint32_t CH3CFGR2; // CH3CFGR2
    volatile uint32_t CH3AWSCDR; // CH3AWSCDR
    volatile uint32_t CH3WDATR; // CH3WDATR
    volatile uint32_t CH3DATINR; // CH3DATINR
    volatile uint32_t CH3DLYR; // channel y delay register
    reserved_t<0x2> _0x78;
    volatile uint32_t CH4CFGR1; // CH4CFGR1
    volatile uint32_t CH4CFGR2; // CH4CFGR2
    volatile uint32_t CH4AWSCDR; // CH4AWSCDR
    volatile uint32_t CH4WDATR; // CH4WDATR
    volatile uint32_t CH4DATINR; // CH4DATINR
    volatile uint32_t CH4DLYR; // channel y delay register
    reserved_t<0x2> _0x98;
    volatile uint32_t CH5CFGR1; // CH5CFGR1
    volatile uint32_t CH5CFGR2; // CH5CFGR2
    volatile uint32_t CH5AWSCDR; // CH5AWSCDR
    volatile uint32_t CH5WDATR; // CH5WDATR
    volatile uint32_t CH5DATINR; // CH5DATINR
    volatile uint32_t CH5DLYR; // channel y delay register
    reserved_t<0x2> _0xb8;
    volatile uint32_t CH6CFGR1; // CH6CFGR1
    volatile uint32_t CH6CFGR2; // CH6CFGR2
    volatile uint32_t CH6AWSCDR; // CH6AWSCDR
    volatile uint32_t CH6WDATR; // CH6WDATR
    volatile uint32_t CH6DATINR; // CH6DATINR
    volatile uint32_t CH6DLYR; // channel y delay register
    reserved_t<0x2> _0xd8;
    volatile uint32_t CH7CFGR1; // CH7CFGR1
    volatile uint32_t CH7CFGR2; // CH7CFGR2
    volatile uint32_t CH7AWSCDR; // CH7AWSCDR
    volatile uint32_t CH7WDATR; // CH7WDATR
    volatile uint32_t CH7DATINR; // CH7DATINR
    volatile uint32_t CH7DLYR; // channel y delay register
    reserved_t<0x2> _0xf8;
    volatile uint32_t DFSDM_FLT0CR1; // control register 1
    volatile uint32_t DFSDM_FLT0CR2; // control register 2
    volatile uint32_t DFSDM_FLT0ISR; // interrupt and status register
    volatile uint32_t DFSDM_FLT0ICR; // interrupt flag clear register
    volatile uint32_t DFSDM_FLT0JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM_FLT0FCR; // filter control register
    volatile uint32_t DFSDM_FLT0JDATAR; // data register for injected group
    volatile uint32_t DFSDM_FLT0RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM_FLT0AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT0AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT0AWSR; // analog watchdog status register
    volatile uint32_t DFSDM_FLT0AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT0EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM_FLT0EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM_FLT0CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x13c;
    volatile uint32_t DFSDM_FLT1CR1; // control register 1
    volatile uint32_t DFSDM_FLT1CR2; // control register 2
    volatile uint32_t DFSDM_FLT1ISR; // interrupt and status register
    volatile uint32_t DFSDM_FLT1ICR; // interrupt flag clear register
    volatile uint32_t DFSDM_FLT1CHGR; // injected channel group selection register
    volatile uint32_t DFSDM_FLT1FCR; // filter control register
    volatile uint32_t DFSDM_FLT1JDATAR; // data register for injected group
    volatile uint32_t DFSDM_FLT1RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM_FLT1AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT1AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT1AWSR; // analog watchdog status register
    volatile uint32_t DFSDM_FLT1AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT1EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM_FLT1EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM_FLT1CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x1bc;
    volatile uint32_t DFSDM_FLT2CR1; // control register 1
    volatile uint32_t DFSDM_FLT2CR2; // control register 2
    volatile uint32_t DFSDM_FLT2ISR; // interrupt and status register
    volatile uint32_t DFSDM_FLT2ICR; // interrupt flag clear register
    volatile uint32_t DFSDM_FLT2JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM_FLT2FCR; // filter control register
    volatile uint32_t DFSDM_FLT2JDATAR; // data register for injected group
    volatile uint32_t DFSDM_FLT2RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM_FLT2AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT2AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT2AWSR; // analog watchdog status register
    volatile uint32_t DFSDM_FLT2AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT2EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM_FLT2EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM_FLT2CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x23c;
    volatile uint32_t DFSDM_FLT3CR1; // control register 1
    volatile uint32_t DFSDM_FLT3CR2; // control register 2
    volatile uint32_t DFSDM_FLT3ISR; // interrupt and status register
    volatile uint32_t DFSDM_FLT3ICR; // interrupt flag clear register
    volatile uint32_t DFSDM_FLT3JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM_FLT3FCR; // filter control register
    volatile uint32_t DFSDM_FLT3JDATAR; // data register for injected group
    volatile uint32_t DFSDM_FLT3RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM_FLT3AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT3AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT3AWSR; // analog watchdog status register
    volatile uint32_t DFSDM_FLT3AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT3EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM_FLT3EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM_FLT3CNVTIMR; // conversion timer register

    static constexpr uint32_t CH0CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CH0CFGR1_DFSDMEN = 0x80000000; // DFSDMEN
    static constexpr uint32_t CH0CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    typedef bit_field_t<16, 0xff> CH0CFGR1_CKOUTDIV; // CKOUTDIV
    typedef bit_field_t<14, 0x3> CH0CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH0CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH0CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH0CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH0CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH0CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH0CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH0CFGR1_SITP; // SITP

    static constexpr uint32_t CH0CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH0CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH0CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH0AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH0AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH0AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH0AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH0AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH0WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH0WDATR_WDATA; // WDATA

    static constexpr uint32_t CH0DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH0DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH0DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH0DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH0DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH1CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH1CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH1CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH1CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH1CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH1CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH1CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH1CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH1CFGR1_SITP; // SITP

    static constexpr uint32_t CH1CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH1CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH1CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH1AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH1AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH1AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH1AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH1AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH1WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH1WDATR_WDATA; // WDATA

    static constexpr uint32_t CH1DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH1DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH1DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH1DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH1DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH2CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH2CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH2CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH2CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH2CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH2CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH2CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH2CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH2CFGR1_SITP; // SITP

    static constexpr uint32_t CH2CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH2CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH2CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH2AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH2AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH2AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH2AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH2AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH2WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH2WDATR_WDATA; // WDATA

    static constexpr uint32_t CH2DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH2DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH2DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH2DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH2DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH3CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH3CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH3CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH3CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH3CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH3CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH3CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH3CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH3CFGR1_SITP; // SITP

    static constexpr uint32_t CH3CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH3CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH3CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH3AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH3AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH3AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH3AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH3AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH3WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH3WDATR_WDATA; // WDATA

    static constexpr uint32_t CH3DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH3DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH3DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH3DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH3DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH4CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH4CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH4CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH4CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH4CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH4CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH4CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH4CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH4CFGR1_SITP; // SITP

    static constexpr uint32_t CH4CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH4CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH4CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH4AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH4AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH4AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH4AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH4AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH4WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH4WDATR_WDATA; // WDATA

    static constexpr uint32_t CH4DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH4DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH4DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH4DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH4DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH5CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH5CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH5CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH5CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH5CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH5CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH5CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH5CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH5CFGR1_SITP; // SITP

    static constexpr uint32_t CH5CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH5CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH5CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH5AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH5AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH5AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH5AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH5AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH5WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH5WDATR_WDATA; // WDATA

    static constexpr uint32_t CH5DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH5DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH5DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH5DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH5DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH6CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH6CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH6CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH6CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH6CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH6CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH6CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH6CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH6CFGR1_SITP; // SITP

    static constexpr uint32_t CH6CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH6CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH6CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH6AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH6AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH6AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH6AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH6AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH6WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH6WDATR_WDATA; // WDATA

    static constexpr uint32_t CH6DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH6DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH6DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH6DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH6DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t CH7CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CH7CFGR1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CH7CFGR1_DATMPX; // DATMPX
    static constexpr uint32_t CH7CFGR1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CH7CFGR1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CH7CFGR1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CH7CFGR1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CH7CFGR1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CH7CFGR1_SITP; // SITP

    static constexpr uint32_t CH7CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CH7CFGR2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CH7CFGR2_DTRBS; // DTRBS

    static constexpr uint32_t CH7AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CH7AWSCDR_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> CH7AWSCDR_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> CH7AWSCDR_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> CH7AWSCDR_SCDT; // SCDT

    static constexpr uint32_t CH7WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CH7WDATR_WDATA; // WDATA

    static constexpr uint32_t CH7DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CH7DATINR_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CH7DATINR_INDAT0; // INDAT0

    static constexpr uint32_t CH7DLYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CH7DLYR_PLSSKP; // PLSSKP


    static constexpr uint32_t DFSDM_FLT0CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM_FLT0CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT0CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM_FLT0CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM_FLT0CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT0CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT0CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT0CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM_FLT0CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM_FLT0CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM_FLT0CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT0CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT0CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT0CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT0CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM_FLT0CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM_FLT0CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM_FLT0CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM_FLT0CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT0CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT0ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT0ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT0ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM_FLT0ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT0ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT0ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM_FLT0ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT0ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT0ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT0ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT0ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM_FLT0ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT0ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT0JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_FLT0JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM_FLT0FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM_FLT0FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM_FLT0FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM_FLT0FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM_FLT0JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM_FLT0JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM_FLT0RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM_FLT0RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM_FLT0RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM_FLT0AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT0AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM_FLT0AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT0AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM_FLT0AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT0AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT0AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT0AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT0AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT0AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT0EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM_FLT0EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM_FLT0EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT0EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM_FLT0EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM_FLT0CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM_FLT0CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM_FLT1CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM_FLT1CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT1CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM_FLT1CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM_FLT1CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT1CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT1CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT1CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM_FLT1CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM_FLT1CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM_FLT1CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT1CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT1CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT1CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT1CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM_FLT1CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM_FLT1CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM_FLT1CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM_FLT1CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT1CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT1ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT1ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT1ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM_FLT1ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT1ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT1ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM_FLT1ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT1ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT1ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT1ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT1ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM_FLT1ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT1ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT1CHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_FLT1CHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM_FLT1FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM_FLT1FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM_FLT1FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM_FLT1FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM_FLT1JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM_FLT1JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM_FLT1RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM_FLT1RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM_FLT1RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM_FLT1AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT1AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM_FLT1AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT1AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM_FLT1AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT1AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT1AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT1AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT1AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT1AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT1EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM_FLT1EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM_FLT1EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT1EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM_FLT1EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM_FLT1CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM_FLT1CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM_FLT2CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM_FLT2CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT2CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM_FLT2CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM_FLT2CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT2CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT2CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT2CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM_FLT2CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM_FLT2CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM_FLT2CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT2CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT2CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT2CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT2CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM_FLT2CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM_FLT2CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM_FLT2CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM_FLT2CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT2CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT2ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT2ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT2ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM_FLT2ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT2ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT2ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM_FLT2ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT2ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT2ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT2ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT2ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM_FLT2ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT2ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT2JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_FLT2JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM_FLT2FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM_FLT2FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM_FLT2FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM_FLT2FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM_FLT2JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM_FLT2JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM_FLT2RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM_FLT2RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM_FLT2RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM_FLT2AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT2AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM_FLT2AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT2AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM_FLT2AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT2AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT2AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT2AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT2AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT2AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT2EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM_FLT2EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM_FLT2EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT2EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM_FLT2EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM_FLT2CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM_FLT2CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM_FLT3CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM_FLT3CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM_FLT3CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM_FLT3CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM_FLT3CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM_FLT3CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM_FLT3CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM_FLT3CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM_FLT3CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM_FLT3CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM_FLT3CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM_FLT3CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM_FLT3CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM_FLT3CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM_FLT3CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM_FLT3CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM_FLT3CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM_FLT3CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM_FLT3CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM_FLT3CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM_FLT3ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT3ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT3ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM_FLT3ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM_FLT3ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM_FLT3ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM_FLT3ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM_FLT3ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM_FLT3ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM_FLT3ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM_FLT3ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM_FLT3ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM_FLT3ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM_FLT3JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_FLT3JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM_FLT3FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM_FLT3FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM_FLT3FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM_FLT3FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM_FLT3JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM_FLT3JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM_FLT3RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM_FLT3RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM_FLT3RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM_FLT3AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT3AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM_FLT3AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM_FLT3AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM_FLT3AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT3AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT3AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT3AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM_FLT3AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM_FLT3AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM_FLT3EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM_FLT3EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM_FLT3EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM_FLT3EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM_FLT3EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM_FLT3CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM_FLT3CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
};

template<>
struct peripheral_t<STM32L476, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32l476_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32l476_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32l476_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32l476_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32l476_dfsdm1_t;
    static T& V;
};

using dfsdm_t = peripheral_t<svd, DFSDM>;
using dfsdm1_t = peripheral_t<svd, DFSDM1>;

template<int INST> struct dfsdm_traits {};

template<> struct dfsdm_traits<0>
{
    using dfsdm = dfsdm_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_DFSDMEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_DFSDMEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_DFSDMSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_DFSDMSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDMRST;
    }
};

template<> struct dfsdm_traits<1>
{
    using dfsdm = dfsdm1_t;
    static constexpr signal_t CKIN0 = DFSDM1_CKIN0;
    static constexpr signal_t CKIN1 = DFSDM1_CKIN1;
    static constexpr signal_t CKIN2 = DFSDM1_CKIN2;
    static constexpr signal_t CKIN3 = DFSDM1_CKIN3;
    static constexpr signal_t CKIN4 = DFSDM1_CKIN4;
    static constexpr signal_t CKIN5 = DFSDM1_CKIN5;
    static constexpr signal_t CKIN6 = DFSDM1_CKIN6;
    static constexpr signal_t CKIN7 = DFSDM1_CKIN7;
    static constexpr signal_t CKOUT = DFSDM1_CKOUT;
    static constexpr signal_t DATIN0 = DFSDM1_DATIN0;
    static constexpr signal_t DATIN1 = DFSDM1_DATIN1;
    static constexpr signal_t DATIN2 = DFSDM1_DATIN2;
    static constexpr signal_t DATIN3 = DFSDM1_DATIN3;
    static constexpr signal_t DATIN4 = DFSDM1_DATIN4;
    static constexpr signal_t DATIN5 = DFSDM1_DATIN5;
    static constexpr signal_t DATIN6 = DFSDM1_DATIN6;
    static constexpr signal_t DATIN7 = DFSDM1_DATIN7;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT0>
{
    static constexpr unsigned ID = 95;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT1>
{
    static constexpr unsigned ID = 96;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT2>
{
    static constexpr unsigned ID = 97;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT3>
{
    static constexpr unsigned ID = 98;
};
