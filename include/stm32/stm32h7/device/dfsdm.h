#pragma once

////
//
//      STM32H7 DFSDM peripherals
//
///

// DFSDM: Digital filter for sigma delta modulators

struct stm32h723_dfsdm_t
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

// DFSDM: Digital filter for sigma delta modulators

struct stm32h743_dfsdm_t
{
    volatile uint32_t DFSDM_CHCFG0R1; // DFSDM channel configuration 0 register 1
    volatile uint32_t DFSDM_CHCFG1R1; // DFSDM channel configuration 1 register 1
    volatile uint32_t DFSDM_CHCFG2R1; // DFSDM channel configuration 2 register 1
    volatile uint32_t DFSDM_CHCFG3R1; // DFSDM channel configuration 3 register 1
    volatile uint32_t DFSDM_CHCFG4R1; // DFSDM channel configuration 4 register 1
    volatile uint32_t DFSDM_CHCFG5R1; // DFSDM channel configuration 5 register 1
    volatile uint32_t DFSDM_CHCFG6R1; // DFSDM channel configuration 6 register 1
    volatile uint32_t DFSDM_CHCFG7R1; // DFSDM channel configuration 7 register 1
    volatile uint32_t DFSDM_CHCFG0R2; // DFSDM channel configuration 0 register 2
    volatile uint32_t DFSDM_CHCFG1R2; // DFSDM channel configuration 1 register 2
    volatile uint32_t DFSDM_CHCFG2R2; // DFSDM channel configuration 2 register 2
    volatile uint32_t DFSDM_CHCFG3R2; // DFSDM channel configuration 3 register 2
    volatile uint32_t DFSDM_CHCFG4R2; // DFSDM channel configuration 4 register 2
    volatile uint32_t DFSDM_CHCFG5R2; // DFSDM channel configuration 5 register 2
    volatile uint32_t DFSDM_CHCFG6R2; // DFSDM channel configuration 6 register 2
    volatile uint32_t DFSDM_CHCFG7R2; // DFSDM channel configuration 7 register 2
    volatile uint32_t DFSDM_AWSCD0R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD1R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD2R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD3R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD4R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD5R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD6R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_AWSCD7R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT0R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT1R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT2R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT3R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT4R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT5R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT6R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHWDAT7R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN0R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN1R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN2R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN3R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN4R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN5R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN6R; // DFSDM channel data input register
    volatile uint32_t DFSDM_CHDATIN7R; // DFSDM channel data input register
    volatile uint32_t DFSDM0_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM1_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM2_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM3_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM0_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM1_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM2_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM3_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM0_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM1_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM2_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM3_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM0_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM1_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM2_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM3_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM0_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM1_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM2_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM3_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM0_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM1_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM2_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM3_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM0_JDATAR; // DFSDM data register for injected group
    volatile uint32_t DFSDM1_JDATAR; // DFSDM data register for injected group
    volatile uint32_t DFSDM2_JDATAR; // DFSDM data register for injected group
    volatile uint32_t DFSDM3_JDATAR; // DFSDM data register for injected group
    volatile uint32_t DFSDM0_RDATAR; // DFSDM data register for the regular channel
    volatile uint32_t DFSDM1_RDATAR; // DFSDM data register for the regular channel
    volatile uint32_t DFSDM2_RDATAR; // DFSDM data register for the regular channel
    volatile uint32_t DFSDM3_RDATAR; // DFSDM data register for the regular channel
    volatile uint32_t DFSDM0_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM1_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM2_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM3_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM0_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM1_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM2_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM3_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM0_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM1_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM2_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM3_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM0_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM1_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM2_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM3_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM0_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM1_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM2_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM3_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM0_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM1_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM2_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM3_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM0_CNVTIMR; // DFSDM conversion timer register
    volatile uint32_t DFSDM1_CNVTIMR; // DFSDM conversion timer register
    volatile uint32_t DFSDM2_CNVTIMR; // DFSDM conversion timer register
    volatile uint32_t DFSDM3_CNVTIMR; // DFSDM conversion timer register

    static constexpr uint32_t DFSDM_CHCFG0R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG0R1_SITP; // Serial interface type for channel 0
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG0R1_SPICKSEL; // SPI clock select for channel 0
    static constexpr uint32_t DFSDM_CHCFG0R1_SCDEN = 0x20; // Short-circuit detector enable on channel 0
    static constexpr uint32_t DFSDM_CHCFG0R1_CKABEN = 0x40; // Clock absence detector enable on channel 0
    static constexpr uint32_t DFSDM_CHCFG0R1_CHEN = 0x80; // Channel 0 enable
    static constexpr uint32_t DFSDM_CHCFG0R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG0R1_DATMPX; // Input data multiplexer for channel 0
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG0R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG0R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG0R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG0R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG1R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG1R1_SITP; // Serial interface type for channel 1
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG1R1_SPICKSEL; // SPI clock select for channel 1
    static constexpr uint32_t DFSDM_CHCFG1R1_SCDEN = 0x20; // Short-circuit detector enable on channel 1
    static constexpr uint32_t DFSDM_CHCFG1R1_CKABEN = 0x40; // Clock absence detector enable on channel 1
    static constexpr uint32_t DFSDM_CHCFG1R1_CHEN = 0x80; // Channel 1 enable
    static constexpr uint32_t DFSDM_CHCFG1R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG1R1_DATMPX; // Input data multiplexer for channel 1
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG1R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG1R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG1R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG1R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG2R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG2R1_SITP; // Serial interface type for channel 2
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG2R1_SPICKSEL; // SPI clock select for channel 2
    static constexpr uint32_t DFSDM_CHCFG2R1_SCDEN = 0x20; // Short-circuit detector enable on channel 2
    static constexpr uint32_t DFSDM_CHCFG2R1_CKABEN = 0x40; // Clock absence detector enable on channel 2
    static constexpr uint32_t DFSDM_CHCFG2R1_CHEN = 0x80; // Channel 2 enable
    static constexpr uint32_t DFSDM_CHCFG2R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG2R1_DATMPX; // Input data multiplexer for channel 2
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG2R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG2R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG2R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG2R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG3R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG3R1_SITP; // Serial interface type for channel 3
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG3R1_SPICKSEL; // SPI clock select for channel 3
    static constexpr uint32_t DFSDM_CHCFG3R1_SCDEN = 0x20; // Short-circuit detector enable on channel 3
    static constexpr uint32_t DFSDM_CHCFG3R1_CKABEN = 0x40; // Clock absence detector enable on channel 3
    static constexpr uint32_t DFSDM_CHCFG3R1_CHEN = 0x80; // Channel 3 enable
    static constexpr uint32_t DFSDM_CHCFG3R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG3R1_DATMPX; // Input data multiplexer for channel 3
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG3R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG3R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG3R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG3R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG4R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG4R1_SITP; // Serial interface type for channel 4
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG4R1_SPICKSEL; // SPI clock select for channel 4
    static constexpr uint32_t DFSDM_CHCFG4R1_SCDEN = 0x20; // Short-circuit detector enable on channel 4
    static constexpr uint32_t DFSDM_CHCFG4R1_CKABEN = 0x40; // Clock absence detector enable on channel 4
    static constexpr uint32_t DFSDM_CHCFG4R1_CHEN = 0x80; // Channel 4 enable
    static constexpr uint32_t DFSDM_CHCFG4R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG4R1_DATMPX; // Input data multiplexer for channel 4
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG4R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG4R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG4R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG4R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG5R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG5R1_SITP; // Serial interface type for channel 5
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG5R1_SPICKSEL; // SPI clock select for channel 5
    static constexpr uint32_t DFSDM_CHCFG5R1_SCDEN = 0x20; // Short-circuit detector enable on channel 5
    static constexpr uint32_t DFSDM_CHCFG5R1_CKABEN = 0x40; // Clock absence detector enable on channel 5
    static constexpr uint32_t DFSDM_CHCFG5R1_CHEN = 0x80; // Channel 5 enable
    static constexpr uint32_t DFSDM_CHCFG5R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG5R1_DATMPX; // Input data multiplexer for channel 5
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG5R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG5R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG5R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG5R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG6R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG6R1_SITP; // Serial interface type for channel 6
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG6R1_SPICKSEL; // SPI clock select for channel 6
    static constexpr uint32_t DFSDM_CHCFG6R1_SCDEN = 0x20; // Short-circuit detector enable on channel 6
    static constexpr uint32_t DFSDM_CHCFG6R1_CKABEN = 0x40; // Clock absence detector enable on channel 6
    static constexpr uint32_t DFSDM_CHCFG6R1_CHEN = 0x80; // Channel 6 enable
    static constexpr uint32_t DFSDM_CHCFG6R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG6R1_DATMPX; // Input data multiplexer for channel 6
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG6R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG6R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG6R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG6R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG7R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CHCFG7R1_SITP; // Serial interface type for channel 7
    typedef bit_field_t<2, 0x3> DFSDM_CHCFG7R1_SPICKSEL; // SPI clock select for channel 7
    static constexpr uint32_t DFSDM_CHCFG7R1_SCDEN = 0x20; // Short-circuit detector enable on channel 7
    static constexpr uint32_t DFSDM_CHCFG7R1_CKABEN = 0x40; // Clock absence detector enable on channel 7
    static constexpr uint32_t DFSDM_CHCFG7R1_CHEN = 0x80; // Channel 7 enable
    static constexpr uint32_t DFSDM_CHCFG7R1_CHINSEL = 0x100; // Channel inputs selection
    typedef bit_field_t<12, 0x3> DFSDM_CHCFG7R1_DATMPX; // Input data multiplexer for channel 7
    typedef bit_field_t<14, 0x3> DFSDM_CHCFG7R1_DATPACK; // Data packing mode in DFSDM_CHDATINyR register
    typedef bit_field_t<16, 0xff> DFSDM_CHCFG7R1_CKOUTDIV; // Output serial clock divider
    static constexpr uint32_t DFSDM_CHCFG7R1_CKOUTSRC = 0x40000000; // Output serial clock source selection
    static constexpr uint32_t DFSDM_CHCFG7R1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface

    static constexpr uint32_t DFSDM_CHCFG0R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG0R2_DTRBS; // Data right bit-shift for channel 0
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG0R2_OFFSET; // 24-bit calibration offset for channel 0

    static constexpr uint32_t DFSDM_CHCFG1R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG1R2_DTRBS; // Data right bit-shift for channel 1
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG1R2_OFFSET; // 24-bit calibration offset for channel 1

    static constexpr uint32_t DFSDM_CHCFG2R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG2R2_DTRBS; // Data right bit-shift for channel 2
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG2R2_OFFSET; // 24-bit calibration offset for channel 2

    static constexpr uint32_t DFSDM_CHCFG3R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG3R2_DTRBS; // Data right bit-shift for channel 3
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG3R2_OFFSET; // 24-bit calibration offset for channel 3

    static constexpr uint32_t DFSDM_CHCFG4R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG4R2_DTRBS; // Data right bit-shift for channel 4
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG4R2_OFFSET; // 24-bit calibration offset for channel 4

    static constexpr uint32_t DFSDM_CHCFG5R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG5R2_DTRBS; // Data right bit-shift for channel 5
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG5R2_OFFSET; // 24-bit calibration offset for channel 5

    static constexpr uint32_t DFSDM_CHCFG6R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG6R2_DTRBS; // Data right bit-shift for channel 6
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG6R2_OFFSET; // 24-bit calibration offset for channel 6

    static constexpr uint32_t DFSDM_CHCFG7R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG7R2_DTRBS; // Data right bit-shift for channel 7
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG7R2_OFFSET; // 24-bit calibration offset for channel 7

    static constexpr uint32_t DFSDM_AWSCD0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD0R_SCDT; // short-circuit detector threshold for channel 0
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD0R_BKSCD; // Break signal assignment for short-circuit detector on channel 0
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD0R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 0
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD0R_AWFORD; // Analog watchdog Sinc filter order on channel 0

    static constexpr uint32_t DFSDM_AWSCD1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD1R_SCDT; // short-circuit detector threshold for channel 1
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD1R_BKSCD; // Break signal assignment for short-circuit detector on channel 1
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD1R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 1
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD1R_AWFORD; // Analog watchdog Sinc filter order on channel 1

    static constexpr uint32_t DFSDM_AWSCD2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD2R_SCDT; // short-circuit detector threshold for channel 2
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD2R_BKSCD; // Break signal assignment for short-circuit detector on channel 2
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD2R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 2
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD2R_AWFORD; // Analog watchdog Sinc filter order on channel 2

    static constexpr uint32_t DFSDM_AWSCD3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD3R_SCDT; // short-circuit detector threshold for channel 3
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD3R_BKSCD; // Break signal assignment for short-circuit detector on channel 3
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD3R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 3
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD3R_AWFORD; // Analog watchdog Sinc filter order on channel 3

    static constexpr uint32_t DFSDM_AWSCD4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD4R_SCDT; // short-circuit detector threshold for channel 4
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD4R_BKSCD; // Break signal assignment for short-circuit detector on channel 4
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD4R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 4
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD4R_AWFORD; // Analog watchdog Sinc filter order on channel 4

    static constexpr uint32_t DFSDM_AWSCD5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD5R_SCDT; // short-circuit detector threshold for channel 5
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD5R_BKSCD; // Break signal assignment for short-circuit detector on channel 5
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD5R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 5
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD5R_AWFORD; // Analog watchdog Sinc filter order on channel 5

    static constexpr uint32_t DFSDM_AWSCD6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD6R_SCDT; // short-circuit detector threshold for channel 6
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD6R_BKSCD; // Break signal assignment for short-circuit detector on channel 6
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD6R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 6
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD6R_AWFORD; // Analog watchdog Sinc filter order on channel 6

    static constexpr uint32_t DFSDM_AWSCD7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD7R_SCDT; // short-circuit detector threshold for channel 7
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD7R_BKSCD; // Break signal assignment for short-circuit detector on channel 7
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD7R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 7
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD7R_AWFORD; // Analog watchdog Sinc filter order on channel 7

    static constexpr uint32_t DFSDM_CHWDAT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT0R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT1R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT2R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT3R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT4R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT5R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT6R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHWDAT7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT7R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN0R_INDAT0; // Input data for channel 0
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN0R_INDAT1; // Input data for channel 1

    static constexpr uint32_t DFSDM_CHDATIN1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN1R_INDAT0; // Input data for channel 1
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN1R_INDAT1; // Input data for channel 2

    static constexpr uint32_t DFSDM_CHDATIN2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN2R_INDAT0; // Input data for channel 2
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN2R_INDAT1; // Input data for channel 3

    static constexpr uint32_t DFSDM_CHDATIN3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN3R_INDAT0; // Input data for channel 3
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN3R_INDAT1; // Input data for channel 4

    static constexpr uint32_t DFSDM_CHDATIN4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN4R_INDAT0; // Input data for channel 4
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN4R_INDAT1; // Input data for channel 5

    static constexpr uint32_t DFSDM_CHDATIN5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN5R_INDAT0; // Input data for channel 5
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN5R_INDAT1; // Input data for channel 6

    static constexpr uint32_t DFSDM_CHDATIN6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN6R_INDAT0; // Input data for channel 6
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN6R_INDAT1; // Input data for channel 7

    static constexpr uint32_t DFSDM_CHDATIN7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN7R_INDAT0; // Input data for channel 7
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN7R_INDAT1; // Input data for channel 8

    static constexpr uint32_t DFSDM0_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_CR1_DFEN = 0x1; // DFSDM enable
    static constexpr uint32_t DFSDM0_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM0_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM0_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM0_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    typedef bit_field_t<8, 0x1f> DFSDM0_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    typedef bit_field_t<13, 0x3> DFSDM0_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    static constexpr uint32_t DFSDM0_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM0_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM0_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    typedef bit_field_t<24, 0x7> DFSDM0_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM0_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM1_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_CR1_DFEN = 0x1; // DFSDM enable
    static constexpr uint32_t DFSDM1_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM1_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM1_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM1_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    typedef bit_field_t<8, 0x1f> DFSDM1_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    typedef bit_field_t<13, 0x3> DFSDM1_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    static constexpr uint32_t DFSDM1_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM1_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM1_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    typedef bit_field_t<24, 0x7> DFSDM1_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM1_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM2_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_CR1_DFEN = 0x1; // DFSDM enable
    static constexpr uint32_t DFSDM2_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM2_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM2_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM2_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    typedef bit_field_t<8, 0x1f> DFSDM2_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    typedef bit_field_t<13, 0x3> DFSDM2_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    static constexpr uint32_t DFSDM2_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM2_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM2_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    typedef bit_field_t<24, 0x7> DFSDM2_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM2_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM3_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_CR1_DFEN = 0x1; // DFSDM enable
    static constexpr uint32_t DFSDM3_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM3_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM3_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM3_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    typedef bit_field_t<8, 0x1f> DFSDM3_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    typedef bit_field_t<13, 0x3> DFSDM3_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    static constexpr uint32_t DFSDM3_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    static constexpr uint32_t DFSDM3_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM3_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    typedef bit_field_t<24, 0x7> DFSDM3_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM3_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select

    static constexpr uint32_t DFSDM0_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM0_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM0_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    typedef bit_field_t<8, 0xff> DFSDM0_CR2_EXCH; // Extremes detector channel selection
    typedef bit_field_t<16, 0xff> DFSDM0_CR2_AWDCH; // Analog watchdog channel selection

    static constexpr uint32_t DFSDM1_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM1_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM1_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    typedef bit_field_t<8, 0xff> DFSDM1_CR2_EXCH; // Extremes detector channel selection
    typedef bit_field_t<16, 0xff> DFSDM1_CR2_AWDCH; // Analog watchdog channel selection

    static constexpr uint32_t DFSDM2_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM2_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM2_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    typedef bit_field_t<8, 0xff> DFSDM2_CR2_EXCH; // Extremes detector channel selection
    typedef bit_field_t<16, 0xff> DFSDM2_CR2_AWDCH; // Analog watchdog channel selection

    static constexpr uint32_t DFSDM3_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM3_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM3_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    typedef bit_field_t<8, 0xff> DFSDM3_CR2_EXCH; // Extremes detector channel selection
    typedef bit_field_t<16, 0xff> DFSDM3_CR2_AWDCH; // Analog watchdog channel selection

    static constexpr uint32_t DFSDM0_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM0_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM0_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM0_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM0_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM0_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM1_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM1_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM1_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM1_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM1_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM1_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM2_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM2_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM2_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM2_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM2_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM2_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM3_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM3_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM3_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM3_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM3_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM3_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM0_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM0_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM0_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM1_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM1_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM1_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM2_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM2_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM2_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM3_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM3_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM3_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM0_JCHGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM1_JCHGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM2_JCHGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM3_JCHGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM0_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM0_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM0_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM1_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM1_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM1_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM2_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM2_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM2_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM3_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM3_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM3_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM0_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM0_JDATAR_JDATA; // Injected group conversion data

    static constexpr uint32_t DFSDM1_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM1_JDATAR_JDATA; // Injected group conversion data

    static constexpr uint32_t DFSDM2_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM2_JDATAR_JDATA; // Injected group conversion data

    static constexpr uint32_t DFSDM3_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM3_JDATAR_JDATA; // Injected group conversion data

    static constexpr uint32_t DFSDM0_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_RDATAR_RDATACH; // Regular channel most recently converted
    static constexpr uint32_t DFSDM0_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<8, 0xffffff> DFSDM0_RDATAR_RDATA; // Regular channel conversion data

    static constexpr uint32_t DFSDM1_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_RDATAR_RDATACH; // Regular channel most recently converted
    static constexpr uint32_t DFSDM1_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<8, 0xffffff> DFSDM1_RDATAR_RDATA; // Regular channel conversion data

    static constexpr uint32_t DFSDM2_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_RDATAR_RDATACH; // Regular channel most recently converted
    static constexpr uint32_t DFSDM2_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<8, 0xffffff> DFSDM2_RDATAR_RDATA; // Regular channel conversion data

    static constexpr uint32_t DFSDM3_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_RDATAR_RDATACH; // Regular channel most recently converted
    static constexpr uint32_t DFSDM3_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<8, 0xffffff> DFSDM3_RDATAR_RDATA; // Regular channel conversion data

    static constexpr uint32_t DFSDM0_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM0_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM1_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM1_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM2_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM2_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM3_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM3_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM0_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM0_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM1_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM1_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM2_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM2_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM3_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM3_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM0_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM0_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM1_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM1_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM2_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM2_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM3_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM3_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM0_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM0_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM1_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM1_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM2_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM2_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM3_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM3_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM0_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM1_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM2_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM3_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM0_EXMIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM1_EXMIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM2_EXMIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM3_EXMIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM0_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM0_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time

    static constexpr uint32_t DFSDM1_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM1_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time

    static constexpr uint32_t DFSDM2_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM2_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time

    static constexpr uint32_t DFSDM3_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM3_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time
};

// DFSDM1: Digital filter for sigma delta modulators

struct stm32h7a3x_dfsdm1_t
{
    volatile uint32_t DFSDM_CH0CFGR1; // DFSDM channel 0 configuration register
    volatile uint32_t DFSDM_CH0CFGR2; // DFSDM channel 0 configuration register
    volatile uint32_t DFSDM_CH0AWSCDR; // DFSDM channel 0 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH0WDATR; // DFSDM channel 0 watchdog filter data register
    volatile uint32_t DFSDM_CH0DATINR; // DFSDM channel 0 data input register
    reserved_t<0x3> _0x14;
    volatile uint32_t DFSDM_CH1CFGR1; // DFSDM channel 1 configuration register
    volatile uint32_t DFSDM_CH1CFGR2; // DFSDM channel 1 configuration register
    volatile uint32_t DFSDM_CH1AWSCDR; // DFSDM channel 1 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH1WDATR; // DFSDM channel 1 watchdog filter data register
    volatile uint32_t DFSDM_CH1DATINR; // DFSDM channel 1 data input register
    reserved_t<0x3> _0x34;
    volatile uint32_t DFSDM_CH2CFGR1; // DFSDM channel 2 configuration register
    volatile uint32_t DFSDM_CH2CFGR2; // DFSDM channel 2 configuration register
    volatile uint32_t DFSDM_CH2AWSCDR; // DFSDM channel 2 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH2WDATR; // DFSDM channel 2 watchdog filter data register
    volatile uint32_t DFSDM_CH2DATINR; // DFSDM channel 2 data input register
    reserved_t<0x3> _0x54;
    volatile uint32_t DFSDM_CH3CFGR1; // DFSDM channel 3 configuration register
    volatile uint32_t DFSDM_CH3CFGR2; // DFSDM channel 3 configuration register
    volatile uint32_t DFSDM_CH3AWSCDR; // DFSDM channel 3 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH3WDATR; // DFSDM channel 3 watchdog filter data register
    volatile uint32_t DFSDM_CH3DATINR; // DFSDM channel 3 data input register
    reserved_t<0x3> _0x74;
    volatile uint32_t DFSDM_CH4CFGR1; // DFSDM channel 4 configuration register
    volatile uint32_t DFSDM_CH4CFGR2; // DFSDM channel 4 configuration register
    volatile uint32_t DFSDM_CH4AWSCDR; // DFSDM channel 4 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH4WDATR; // DFSDM channel 4 watchdog filter data register
    volatile uint32_t DFSDM_CH4DATINR; // DFSDM channel 4 data input register
    reserved_t<0x3> _0x94;
    volatile uint32_t DFSDM_CH5CFGR1; // DFSDM channel 5 configuration register
    volatile uint32_t DFSDM_CH5CFGR2; // DFSDM channel 5 configuration register
    volatile uint32_t DFSDM_CH5AWSCDR; // DFSDM channel 5 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH5WDATR; // DFSDM channel 5 watchdog filter data register
    volatile uint32_t DFSDM_CH5DATINR; // DFSDM channel 5 data input register
    reserved_t<0x3> _0xb4;
    volatile uint32_t DFSDM_CH6CFGR1; // DFSDM channel 6 configuration register
    volatile uint32_t DFSDM_CH6CFGR2; // DFSDM channel 6 configuration register
    volatile uint32_t DFSDM_CH6AWSCDR; // DFSDM channel 6 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH6WDATR; // DFSDM channel 6 watchdog filter data register
    volatile uint32_t DFSDM_CH6DATINR; // DFSDM channel 6 data input register
    reserved_t<0x3> _0xd4;
    volatile uint32_t DFSDM_CH7CFGR1; // DFSDM channel 7 configuration register
    volatile uint32_t DFSDM_CH7CFGR2; // DFSDM channel 7 configuration register
    volatile uint32_t DFSDM_CH7AWSCDR; // DFSDM channel 7 analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CH7WDATR; // DFSDM channel 7 watchdog filter data register
    volatile uint32_t DFSDM_CH7DATINR; // DFSDM channel 7 data input register

    static constexpr uint32_t DFSDM_CH0CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH0CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH0CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH0CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH0CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH0CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH0CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH0CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH0CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH0CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH0CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH0CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH0CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH0CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH0CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH0AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH0AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH0AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH0AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH0AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH0WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH0WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH0DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH0DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH0DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH1CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH1CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH1CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH1CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH1CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH1CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH1CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH1CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH1CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH1CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH1CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH1CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH1CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH1CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH1CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH1AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH1AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH1AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH1AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH1AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH1WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH1WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH1DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH1DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH1DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH2CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH2CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH2CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH2CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH2CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH2CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH2CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH2CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH2CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH2CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH2CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH2CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH2CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH2CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH2CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH2AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH2AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH2AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH2AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH2AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH2WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH2WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH2DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH2DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH2DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH3CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH3CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH3CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH3CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH3CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH3CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH3CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH3CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH3CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH3CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH3CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH3CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH3CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH3CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH3CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH3AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH3AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH3AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH3AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH3AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH3WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH3WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH3DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH3DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH3DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH4CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH4CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH4CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH4CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH4CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH4CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH4CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH4CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH4CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH4CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH4CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH4CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH4CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH4CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH4CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH4AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH4AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH4AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH4AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH4AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH4WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH4WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH4DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH4DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH4DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH5CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH5CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH5CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH5CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH5CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH5CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH5CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH5CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH5CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH5CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH5CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH5CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH5CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH5CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH5CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH5AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH5AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH5AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH5AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH5AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH5WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH5WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH5DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH5DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH5DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH6CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH6CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH6CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH6CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH6CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH6CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH6CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH6CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH6CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH6CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH6CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH6CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH6CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH6CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH6CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH6AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH6AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH6AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH6AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH6AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH6WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH6WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH6DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH6DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH6DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.


    static constexpr uint32_t DFSDM_CH7CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> DFSDM_CH7CFGR1_SITP; // Serial interface type for channel y This value can only be modified when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<2, 0x3> DFSDM_CH7CFGR1_SPICKSEL; // SPI clock select for channel y 2: clock coming from internal CKOUT - sampling point on each second CKOUT falling edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input rising edge). 3: clock coming from internal CKOUT output - sampling point on each second CKOUT rising edge. For connection to external modulator which divides its clock input (from CKOUT) by 2 to generate its output serial communication clock (and this output clock change is active on each clock input falling edge). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    static constexpr uint32_t DFSDM_CH7CFGR1_SCDEN = 0x20; // Short-circuit detector enable on channel y
    static constexpr uint32_t DFSDM_CH7CFGR1_CKABEN = 0x40; // Clock absence detector enable on channel y
    static constexpr uint32_t DFSDM_CH7CFGR1_CHEN = 0x80; // Channel y enable If channel y is enabled, then serial data receiving is started according to the given channel setting.
    static constexpr uint32_t DFSDM_CH7CFGR1_CHINSEL = 0x100; // Channel inputs selection This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<12, 0x3> DFSDM_CH7CFGR1_DATMPX; // Input data multiplexer for channel y 2: Data to channel y are taken from internal DFSDM_CHyDATINR register by direct CPU/DMA write. There can be written one or two 16-bit data samples according DATPACK[1:0] bit field setting. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<14, 0x3> DFSDM_CH7CFGR1_DATPACK; // Data packing mode in DFSDM_CHyDATINR register. first sample in INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y) To empty DFSDM_CHyDATINR register, two samples must be read by the digital filter from channel y (INDAT0[15:0] part is read as first sample and then INDAT1[15:0] part is read as next sample). 2: Dual: input data in DFSDM_CHyDATINR register are stored as two samples: first sample INDAT0[15:0] (assigned to channel y) second sample INDAT1[15:0] (assigned to channel y+1) To empty DFSDM_CHyDATINR register first sample must be read by the digital filter from channel y and second sample must be read by another digital filter from channel y+1. Dual mode is available only on even channel numbers (y = 0, 2, 4, 6), for odd channel numbers (y = 1, 3, 5, 7) DFSDM_CHyDATINR is write protected. If an even channel is set to dual mode then the following odd channel must be set into standard mode (DATPACK[1:0]=0) for correct cooperation with even channel. 3: Reserved This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).
    typedef bit_field_t<16, 0xff> DFSDM_CH7CFGR1_CKOUTDIV; // Output serial clock divider 256 (Divider = CKOUTDIV+1). CKOUTDIV also defines the threshold for a clock absence detection. This value can only be modified when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). If DFSDMEN=0 (in DFSDM_CH0CFGR1 register) then CKOUT signal is set to low state (setting is performed one DFSDM clock cycle after DFSDMEN=0). Note: CKOUTDIV is present only in DFSDM_CH0CFGR1 register (channel y=0) 1- 255: Defines the division of system clock for the serial clock output for CKOUT signal in range 2-
    static constexpr uint32_t DFSDM_CH7CFGR1_CKOUTSRC = 0x40000000; // Output serial clock source selection This value can be modified only when DFSDMEN=0 (in DFSDM_CH0CFGR1 register). Note: CKOUTSRC is present only in DFSDM_CH0CFGR1 register (channel y=0)
    static constexpr uint32_t DFSDM_CH7CFGR1_DFSDMEN = 0x80000000; // Global enable for DFSDM interface If DFSDM interface is enabled, then it is started to operate according to enabled y channels and enabled x filters settings (CHEN bit in DFSDM_CHyCFGR1 and DFEN bit in DFSDM_FLTxCR1). Data cleared by setting DFSDMEN=0: all registers DFSDM_FLTxISR are set to reset state (x = 0..7) all registers DFSDM_FLTxAWSR are set to reset state (x = 0..7) Note: DFSDMEN is present only in DFSDM_CH0CFGR1 register (channel y=0)

    static constexpr uint32_t DFSDM_CH7CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CH7CFGR2_DTRBS; // Data right bit-shift for channel y will be performed to have final results. Bit-shift is performed before offset correction. The data shift is rounding the result to nearest integer value. The sign of shifted result is maintained (to have valid 24-bit signed format of result data). This value can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). 0-31: Defines the shift of the data result coming from the integrator - how many bit shifts to the right
    typedef bit_field_t<8, 0xffffff> DFSDM_CH7CFGR2_OFFSET; // 24-bit calibration offset for channel y For channel y, OFFSET is applied to the results of each conversion from this channel. This value is set by software.

    static constexpr uint32_t DFSDM_CH7AWSCDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_CH7AWSCDR_SCDT; // short-circuit detector threshold for channel y These bits are written by software to define the threshold counter for the short-circuit detector. If this value is reached, then a short-circuit detector event occurs on a given channel.
    typedef bit_field_t<12, 0xf> DFSDM_CH7AWSCDR_BKSCD; // Break signal assignment for short-circuit detector on channel y BKSCD[i] = 0: Break i signal not assigned to short-circuit detector on channel y BKSCD[i] = 1: Break i signal assigned to short-circuit detector on channel y
    typedef bit_field_t<16, 0x1f> DFSDM_CH7AWSCDR_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel y also the decimation ratio of the analog data rate. This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register). Note: If AWFOSR = 0 then the filter has no effect (filter bypass). 0 - 31: Defines the length of the Sinc type filter in the range 1 - 32 (AWFOSR + 1). This number is
    typedef bit_field_t<22, 0x3> DFSDM_CH7AWSCDR_AWFORD; // Analog watchdog Sinc filter order on channel y 2: Sinc2 filter type 3: Sinc3 filter type Sincx filter type transfer function: FastSinc filter type transfer function: This bit can be modified only when CHEN=0 (in DFSDM_CHyCFGR1 register).

    static constexpr uint32_t DFSDM_CH7WDATR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH7WDATR_WDATA; // Input channel y watchdog data Data converted by the analog watchdog filter for input channel y. This data is continuously converted (no trigger) for this channel, with a limited resolution (OSR=1..32/sinc order = 1..3).

    static constexpr uint32_t DFSDM_CH7DATINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CH7DATINR_INDAT0; // Input data for channel y Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) Channel y data sample is stored into INDAT0[15:0]. If DATPACK[1:0]=1 (interleaved mode) First channel y data sample is stored into INDAT0[15:0]. Second channel y data sample is stored into INDAT1[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: Channel y data sample is stored into INDAT0[15:0]. For odd y channels: INDAT0[15:0] is write protected. See for more details. INDAT0[15:0] is in the16-bit signed format.
    typedef bit_field_t<16, 0xffff> DFSDM_CH7DATINR_INDAT1; // Input data for channel y or channel y+1 Input parallel channel data to be processed by the digital filter if DATMPX[1:0]=1 or DATMPX[1:0]=2. Data can be written by CPU/DMA (if DATMPX[1:0]=2) or directly by internal ADC (if DATMPX[1:0]=1). If DATPACK[1:0]=0 (standard mode) INDAT0[15:0] is write protected (not used for input sample). If DATPACK[1:0]=1 (interleaved mode) Second channel y data sample is stored into INDAT1[15:0]. First channel y data sample is stored into INDAT0[15:0]. Both samples are read sequentially by DFSDM_FLTx filter as two channel y data samples. If DATPACK[1:0]=2 (dual mode). For even y channels: sample in INDAT1[15:0] is automatically copied into INDAT0[15:0] of channel (y+1). For odd y channels: INDAT1[15:0] is write protected. See for more details. INDAT0[15:1] is in the16-bit signed format.
};

template<>
struct peripheral_t<STM32H723, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h723_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32h743_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DFSDM2>
{
    static constexpr periph_t P = DFSDM2;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DFSDM2>
{
    static constexpr periph_t P = DFSDM2;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DFSDM2>
{
    static constexpr periph_t P = DFSDM2;
    using T = stm32h7a3x_dfsdm1_t;
    static T& V;
};

using dfsdm_t = peripheral_t<svd, DFSDM>;
using dfsdm1_t = peripheral_t<svd, DFSDM1>;
using dfsdm2_t = peripheral_t<svd, DFSDM2>;

template<int INST> struct dfsdm_traits {};

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
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_DFSDM1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM1RST;
    }
};

template<> struct dfsdm_traits<2>
{
    using dfsdm = dfsdm2_t;
    static constexpr signal_t CKIN0 = DFSDM2_CKIN0;
    static constexpr signal_t CKIN1 = DFSDM2_CKIN1;
    static constexpr signal_t CKOUT = DFSDM2_CKOUT;
    static constexpr signal_t DATIN0 = DFSDM2_DATIN0;
    static constexpr signal_t DATIN1 = DFSDM2_DATIN1;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT0>
{
    static constexpr unsigned ID = 100;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT1>
{
    static constexpr unsigned ID = 101;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT2>
{
    static constexpr unsigned ID = 102;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT3>
{
    static constexpr unsigned ID = 103;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT4>
{
    static constexpr unsigned ID = 104;
};

template<> struct dma_request_t<DFSDM1, DFSDM_FLT5>
{
    static constexpr unsigned ID = 105;
};
