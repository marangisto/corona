#pragma once

////
//
//      STM32F4 DFSDM peripherals
//
///

// DFSDM: Digital filter for sigma delta modulators

struct stm32f412_dfsdm_t
{
    volatile uint32_t CHCFG0R1; // channel configuration y register
    volatile uint32_t CHCFG0R2; // channel configuration y register
    volatile uint32_t AWSCD0R; // analog watchdog and short-circuit detector register
    volatile uint32_t CHWDAT0R; // channel watchdog filter data register
    volatile uint32_t CHDATIN0R; // channel data input register
    reserved_t<0x3> _0x14;
    volatile uint32_t CHCFG1R1; // CHCFG1R1
    volatile uint32_t CHCFG1R2; // CHCFG1R2
    volatile uint32_t AWSCD1R; // AWSCD1R
    volatile uint32_t CHWDAT1R; // CHWDAT1R
    volatile uint32_t CHDATIN1R; // CHDATIN1R
    reserved_t<0x3> _0x34;
    volatile uint32_t CHCFG2R1; // CHCFG2R1
    volatile uint32_t CHCFG2R2; // CHCFG2R2
    volatile uint32_t AWSCD2R; // AWSCD2R
    volatile uint32_t CHWDAT2R; // CHWDAT2R
    volatile uint32_t CHDATIN2R; // CHDATIN2R
    reserved_t<0x3> _0x54;
    volatile uint32_t CHCFG3R1; // CHCFG3R1
    volatile uint32_t CHCFG3R2; // CHCFG3R2
    volatile uint32_t AWSCD3R; // AWSCD3R
    volatile uint32_t CHWDAT3R; // CHWDAT3R
    volatile uint32_t CHDATIN3R; // CHDATIN3R
    reserved_t<0x3> _0x74;
    volatile uint32_t CHCFG4R1; // CHCFG4R1
    volatile uint32_t CHCFG4R2; // CHCFG4R2
    volatile uint32_t AWSCD4R; // AWSCD4R
    volatile uint32_t CHWDAT4R; // CHWDAT4R
    volatile uint32_t CHDATIN4R; // CHDATIN4R
    reserved_t<0x3> _0x94;
    volatile uint32_t CHCFG5R1; // CHCFG5R1
    volatile uint32_t CHCFG5R2; // CHCFG5R2
    volatile uint32_t AWSCD5R; // AWSCD5R
    volatile uint32_t CHWDAT5R; // CHWDAT5R
    volatile uint32_t CHDATIN5R; // CHDATIN5R
    reserved_t<0x3> _0xb4;
    volatile uint32_t CHCFG6R1; // CHCFG6R1
    volatile uint32_t CHCFG6R2; // CHCFG6R2
    volatile uint32_t AWSCD6R; // AWSCD6R
    volatile uint32_t CHWDAT6R; // CHWDAT6R
    volatile uint32_t CHDATIN6R; // CHDATIN6R
    reserved_t<0x3> _0xd4;
    volatile uint32_t CHCFG7R1; // CHCFG7R1
    volatile uint32_t CHCFG7R2; // CHCFG7R2
    volatile uint32_t AWSCD7R; // AWSCD7R
    volatile uint32_t CHWDAT7R; // CHWDAT7R
    volatile uint32_t CHDATIN7R; // CHDATIN7R
    reserved_t<0x3> _0xf4;
    volatile uint32_t DFSDM0_CR1; // control register 1
    volatile uint32_t DFSDM0_CR2; // control register 2
    volatile uint32_t DFSDM0_ISR; // interrupt and status register
    volatile uint32_t DFSDM0_ICR; // interrupt flag clear register
    volatile uint32_t DFSDM0_JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM0_FCR; // filter control register
    volatile uint32_t DFSDM0_JDATAR; // data register for injected group
    volatile uint32_t DFSDM0_RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM0_AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM0_AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM0_AWSR; // analog watchdog status register
    volatile uint32_t DFSDM0_AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM0_EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM0_EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM0_CNVTIMR; // conversion timer register
    reserved_t<0x31> _0x13c;
    volatile uint32_t DFSDM1_CR1; // control register 1
    volatile uint32_t DFSDM1_CR2; // control register 2
    volatile uint32_t DFSDM1_ISR; // interrupt and status register
    volatile uint32_t DFSDM1_ICR; // interrupt flag clear register
    volatile uint32_t DFSDM1_JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM1_FCR; // filter control register
    volatile uint32_t DFSDM1_JDATAR; // data register for injected group
    volatile uint32_t DFSDM1_RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM1_AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM1_AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM1_AWSR; // analog watchdog status register
    volatile uint32_t DFSDM1_AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM1_EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM1_EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM1_CNVTIMR; // conversion timer register
    reserved_t<0x31> _0x23c;
    volatile uint32_t DFSDM2_CR1; // control register 1
    volatile uint32_t DFSDM2_CR2; // control register 2
    volatile uint32_t DFSDM2_ISR; // interrupt and status register
    volatile uint32_t DFSDM2_ICR; // interrupt flag clear register
    volatile uint32_t DFSDM2_JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM2_FCR; // filter control register
    volatile uint32_t DFSDM2_JDATAR; // data register for injected group
    volatile uint32_t DFSDM2_RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM2_AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM2_AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM2_AWSR; // analog watchdog status register
    volatile uint32_t DFSDM2_AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM2_EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM2_EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM2_CNVTIMR; // conversion timer register
    reserved_t<0x31> _0x33c;
    volatile uint32_t DFSDM3_CR1; // control register 1
    volatile uint32_t DFSDM3_CR2; // control register 2
    volatile uint32_t DFSDM3_ISR; // interrupt and status register
    volatile uint32_t DFSDM3_ICR; // interrupt flag clear register
    volatile uint32_t DFSDM3_JCHGR; // injected channel group selection register
    volatile uint32_t DFSDM3_FCR; // filter control register
    volatile uint32_t DFSDM3_JDATAR; // data register for injected group
    volatile uint32_t DFSDM3_RDATAR; // data register for the regular channel
    volatile uint32_t DFSDM3_AWHTR; // analog watchdog high threshold register
    volatile uint32_t DFSDM3_AWLTR; // analog watchdog low threshold register
    volatile uint32_t DFSDM3_AWSR; // analog watchdog status register
    volatile uint32_t DFSDM3_AWCFR; // analog watchdog clear flag register
    volatile uint32_t DFSDM3_EXMAX; // Extremes detector maximum register
    volatile uint32_t DFSDM3_EXMIN; // Extremes detector minimum register
    volatile uint32_t DFSDM3_CNVTIMR; // conversion timer register

    static constexpr uint32_t CHCFG0R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CHCFG0R1_DFSDMEN = 0x80000000; // DFSDMEN
    static constexpr uint32_t CHCFG0R1_CKOUTSRC = 0x40000000; // CKOUTSRC
    typedef bit_field_t<16, 0xff> CHCFG0R1_CKOUTDIV; // CKOUTDIV
    typedef bit_field_t<14, 0x3> CHCFG0R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG0R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG0R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG0R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG0R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG0R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG0R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG0R1_SITP; // SITP

    static constexpr uint32_t CHCFG0R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG0R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG0R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD0R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD0R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD0R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD0R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT0R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN0R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN0R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG1R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG1R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG1R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG1R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG1R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG1R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG1R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG1R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG1R1_SITP; // SITP

    static constexpr uint32_t CHCFG1R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG1R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG1R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD1R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD1R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD1R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD1R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT1R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN1R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN1R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG2R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG2R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG2R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG2R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG2R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG2R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG2R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG2R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG2R1_SITP; // SITP

    static constexpr uint32_t CHCFG2R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG2R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG2R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD2R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD2R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD2R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD2R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT2R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN2R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN2R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG3R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG3R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG3R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG3R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG3R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG3R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG3R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG3R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG3R1_SITP; // SITP

    static constexpr uint32_t CHCFG3R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG3R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG3R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD3R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD3R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD3R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD3R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT3R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN3R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN3R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG4R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG4R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG4R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG4R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG4R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG4R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG4R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG4R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG4R1_SITP; // SITP

    static constexpr uint32_t CHCFG4R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG4R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG4R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD4R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD4R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD4R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD4R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT4R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN4R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN4R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG5R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG5R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG5R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG5R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG5R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG5R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG5R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG5R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG5R1_SITP; // SITP

    static constexpr uint32_t CHCFG5R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG5R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG5R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD5R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD5R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD5R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD5R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT5R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN5R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN5R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG6R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG6R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG6R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG6R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG6R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG6R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG6R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG6R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG6R1_SITP; // SITP

    static constexpr uint32_t CHCFG6R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG6R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG6R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD6R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD6R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD6R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD6R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT6R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN6R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN6R_INDAT0; // INDAT0


    static constexpr uint32_t CHCFG7R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x3> CHCFG7R1_DATPACK; // DATPACK
    typedef bit_field_t<12, 0x3> CHCFG7R1_DATMPX; // DATMPX
    static constexpr uint32_t CHCFG7R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG7R1_CHEN = 0x80; // CHEN
    static constexpr uint32_t CHCFG7R1_CKABEN = 0x40; // CKABEN
    static constexpr uint32_t CHCFG7R1_SCDEN = 0x20; // SCDEN
    typedef bit_field_t<2, 0x3> CHCFG7R1_SPICKSEL; // SPICKSEL
    typedef bit_field_t<0, 0x3> CHCFG7R1_SITP; // SITP

    static constexpr uint32_t CHCFG7R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> CHCFG7R2_OFFSET; // OFFSET
    typedef bit_field_t<3, 0x1f> CHCFG7R2_DTRBS; // DTRBS

    static constexpr uint32_t AWSCD7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> AWSCD7R_AWFORD; // AWFORD
    typedef bit_field_t<16, 0x1f> AWSCD7R_AWFOSR; // AWFOSR
    typedef bit_field_t<12, 0xf> AWSCD7R_BKSCD; // BKSCD
    typedef bit_field_t<0, 0xff> AWSCD7R_SCDT; // SCDT

    static constexpr uint32_t CHWDAT7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CHWDAT7R_WDATA; // WDATA

    static constexpr uint32_t CHDATIN7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CHDATIN7R_INDAT1; // INDAT1
    typedef bit_field_t<0, 0xffff> CHDATIN7R_INDAT0; // INDAT0


    static constexpr uint32_t DFSDM0_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM0_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM0_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM0_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM0_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM0_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM0_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM0_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM0_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM0_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM0_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM0_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM0_CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM0_CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM0_CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM0_CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM0_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM0_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM0_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM0_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM0_ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM0_ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM0_ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM0_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM0_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM0_ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM0_ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM0_ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM0_ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM0_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM0_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM0_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM0_FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM0_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM0_FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM0_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM0_JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM0_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM0_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM0_RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM0_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM0_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM0_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM0_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM0_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM0_AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM0_AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM0_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM0_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM0_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM0_EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM0_EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM0_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM0_EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM0_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM0_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM1_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM1_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM1_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM1_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM1_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM1_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM1_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM1_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM1_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM1_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM1_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM1_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM1_CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM1_CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM1_CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM1_CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM1_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM1_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM1_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM1_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM1_ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM1_ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM1_ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM1_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM1_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM1_ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM1_ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM1_ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM1_ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM1_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM1_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM1_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM1_FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM1_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM1_FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM1_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM1_JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM1_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM1_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM1_RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM1_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM1_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM1_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM1_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM1_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM1_AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM1_AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM1_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM1_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM1_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM1_EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM1_EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM1_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM1_EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM1_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM1_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM2_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM2_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM2_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM2_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM2_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM2_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM2_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM2_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM2_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM2_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM2_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM2_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM2_CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM2_CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM2_CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM2_CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM2_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM2_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM2_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM2_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM2_ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM2_ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM2_ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM2_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM2_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM2_ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM2_ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM2_ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM2_ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM2_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM2_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM2_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM2_FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM2_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM2_FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM2_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM2_JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM2_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM2_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM2_RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM2_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM2_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM2_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM2_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM2_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM2_AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM2_AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM2_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM2_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM2_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM2_EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM2_EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM2_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM2_EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM2_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM2_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t DFSDM3_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM3_CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> DFSDM3_CR1_RCH; // Regular channel selection
    static constexpr uint32_t DFSDM3_CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM3_CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM3_CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> DFSDM3_CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> DFSDM3_CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t DFSDM3_CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM3_CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM3_CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM3_CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM3_CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t DFSDM3_CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> DFSDM3_CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> DFSDM3_CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t DFSDM3_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM3_CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM3_CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM3_CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM3_ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM3_ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM3_ISR_CKABF; // Clock absence flag
    static constexpr uint32_t DFSDM3_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM3_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM3_ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t DFSDM3_ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DFSDM3_ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> DFSDM3_ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t DFSDM3_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM3_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM3_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> DFSDM3_FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> DFSDM3_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> DFSDM3_FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t DFSDM3_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> DFSDM3_JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t DFSDM3_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t DFSDM3_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> DFSDM3_RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t DFSDM3_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> DFSDM3_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t DFSDM3_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> DFSDM3_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t DFSDM3_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM3_AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM3_AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t DFSDM3_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> DFSDM3_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> DFSDM3_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t DFSDM3_EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> DFSDM3_EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t DFSDM3_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> DFSDM3_EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t DFSDM3_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM3_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
};

// DFSDM2: Digital filter for sigma delta modulators

struct stm32f413_dfsdm2_t
{
    volatile uint32_t CH0CFGR1; // channel configuration y register
    volatile uint32_t CH0CFGR2; // channel configuration y register
    volatile uint32_t CH0AWSCDR; // analog watchdog and short-circuit detector register
    volatile uint32_t CH0WDATR; // channel watchdog filter data register
    volatile uint32_t CH0DATINR; // channel data input register
    reserved_t<0x3> _0x14;
    volatile uint32_t CH1CFGR1; // CHCFG1R1
    volatile uint32_t CH1CFGR2; // CHCFG1R2
    volatile uint32_t CH1AWSCDR; // AWSCD1R
    volatile uint32_t CH1WDATR; // CHWDAT1R
    volatile uint32_t CH1DATINR; // CHDATIN1R
    reserved_t<0x3> _0x34;
    volatile uint32_t CH2CFGR1; // CHCFG2R1
    volatile uint32_t CH2CFGR2; // CHCFG2R2
    volatile uint32_t CH2AWSCDR; // AWSCD2R
    volatile uint32_t CH2WDATR; // CHWDAT2R
    volatile uint32_t CH2DATINR; // CHDATIN2R
    reserved_t<0x3> _0x54;
    volatile uint32_t CH3CFGR1; // CHCFG3R1
    volatile uint32_t CH3CFGR2; // CHCFG3R2
    volatile uint32_t CH3AWSCDR; // AWSCD3R
    volatile uint32_t CH3WDATR; // CHWDAT3R
    volatile uint32_t CH3DATINR; // CHDATIN3R
    reserved_t<0x3> _0x74;
    volatile uint32_t CH4CFGR1; // CHCFG4R1
    volatile uint32_t CH4CFGR2; // CHCFG4R2
    volatile uint32_t CH4AWSCDR; // AWSCD4R
    volatile uint32_t CH4WDATR; // CHWDAT4R
    volatile uint32_t CH4DATINR; // CHDATIN4R
    reserved_t<0x3> _0x94;
    volatile uint32_t CH5CFGR1; // CHCFG5R1
    volatile uint32_t CH5CFGR2; // CHCFG5R2
    volatile uint32_t CH5AWSCDR; // AWSCD5R
    volatile uint32_t CH5WDATR; // CHWDAT5R
    volatile uint32_t CH5DATINR; // CHDATIN5R
    reserved_t<0x3> _0xb4;
    volatile uint32_t CH6CFGR1; // CHCFG6R1
    volatile uint32_t CH6CFGR2; // CHCFG6R2
    volatile uint32_t CH6AWSCDR; // AWSCD6R
    volatile uint32_t CH6WDATR; // CHWDAT6R
    volatile uint32_t CH6DATINR; // CHDATIN6R
    reserved_t<0x3> _0xd4;
    volatile uint32_t CH7CFGR1; // CHCFG7R1
    volatile uint32_t CH7CFGR2; // CHCFG7R2
    volatile uint32_t CH7AWSCDR; // AWSCD7R
    volatile uint32_t CH7WDATR; // CHWDAT7R
    volatile uint32_t CH7DATINR; // CHDATIN7R
    reserved_t<0x3> _0xf4;
    volatile uint32_t FLT0CR1; // control register 1
    volatile uint32_t FLT0CR2; // control register 2
    volatile uint32_t FLT0ISR; // interrupt and status register
    volatile uint32_t FLT0ICR; // interrupt flag clear register
    volatile uint32_t FLT0JCHGR; // injected channel group selection register
    volatile uint32_t FLT0FCR; // filter control register
    volatile uint32_t FLT0JDATAR; // data register for injected group
    volatile uint32_t FLT0RDATAR; // data register for the regular channel
    volatile uint32_t FLT0AWHTR; // analog watchdog high threshold register
    volatile uint32_t FLT0AWLTR; // analog watchdog low threshold register
    volatile uint32_t FLT0AWSR; // analog watchdog status register
    volatile uint32_t FLT0AWCFR; // analog watchdog clear flag register
    volatile uint32_t FLT0EXMAX; // Extremes detector maximum register
    volatile uint32_t FLT0EXMIN; // Extremes detector minimum register
    volatile uint32_t FLT0CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x13c;
    volatile uint32_t FLT1CR1; // control register 1
    volatile uint32_t FLT1CR2; // control register 2
    volatile uint32_t FLT1ISR; // interrupt and status register
    volatile uint32_t FLT1ICR; // interrupt flag clear register
    volatile uint32_t FLT1JCHGR; // injected channel group selection register
    volatile uint32_t FLT1FCR; // filter control register
    volatile uint32_t FLT1JDATAR; // data register for injected group
    volatile uint32_t FLT1RDATAR; // data register for the regular channel
    volatile uint32_t FLT1AWHTR; // analog watchdog high threshold register
    volatile uint32_t FLT1AWLTR; // analog watchdog low threshold register
    volatile uint32_t FLT1AWSR; // analog watchdog status register
    volatile uint32_t FLT1AWCFR; // analog watchdog clear flag register
    volatile uint32_t FLT1EXMAX; // Extremes detector maximum register
    volatile uint32_t FLT1EXMIN; // Extremes detector minimum register
    volatile uint32_t FLT1CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x1bc;
    volatile uint32_t FLT2CR1; // control register 1
    volatile uint32_t FLT2CR2; // control register 2
    volatile uint32_t FLT2ISR; // interrupt and status register
    volatile uint32_t FLT2ICR; // interrupt flag clear register
    volatile uint32_t FLT2JCHGR; // injected channel group selection register
    volatile uint32_t FLT2FCR; // filter control register
    volatile uint32_t FLT2JDATAR; // data register for injected group
    volatile uint32_t FLT2RDATAR; // data register for the regular channel
    volatile uint32_t FLT2AWHTR; // analog watchdog high threshold register
    volatile uint32_t FLT2AWLTR; // analog watchdog low threshold register
    volatile uint32_t FLT2AWSR; // analog watchdog status register
    volatile uint32_t FLT2AWCFR; // analog watchdog clear flag register
    volatile uint32_t FLT2EXMAX; // Extremes detector maximum register
    volatile uint32_t FLT2EXMIN; // Extremes detector minimum register
    volatile uint32_t FLT2CNVTIMR; // conversion timer register
    reserved_t<0x11> _0x23c;
    volatile uint32_t FLT3CR1; // control register 1
    volatile uint32_t FLT3CR2; // control register 2
    volatile uint32_t FLT3ISR; // interrupt and status register
    volatile uint32_t FLT3ICR; // interrupt flag clear register
    volatile uint32_t FLT3JCHGR; // injected channel group selection register
    volatile uint32_t FLT3FCR; // filter control register
    volatile uint32_t FLT3JDATAR; // data register for injected group
    volatile uint32_t FLT3RDATAR; // data register for the regular channel
    volatile uint32_t FLT3AWHTR; // analog watchdog high threshold register
    volatile uint32_t FLT3AWLTR; // analog watchdog low threshold register
    volatile uint32_t FLT3AWSR; // analog watchdog status register
    volatile uint32_t FLT3AWCFR; // analog watchdog clear flag register
    volatile uint32_t FLT3EXMAX; // Extremes detector maximum register
    volatile uint32_t FLT3EXMIN; // Extremes detector minimum register
    volatile uint32_t FLT3CNVTIMR; // conversion timer register

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


    static constexpr uint32_t FLT0CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLT0CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT0CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> FLT0CR1_RCH; // Regular channel selection
    static constexpr uint32_t FLT0CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT0CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT0CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT0CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> FLT0CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> FLT0CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t FLT0CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT0CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT0CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT0CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT0CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t FLT0CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> FLT0CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> FLT0CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t FLT0CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT0CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT0CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t FLT0CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t FLT0CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t FLT0CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT0CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT0ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> FLT0ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT0ISR_CKABF; // Clock absence flag
    static constexpr uint32_t FLT0ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT0ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT0ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t FLT0ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t FLT0ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t FLT0ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t FLT0ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t FLT0ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FLT0ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT0ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t FLT0ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT0ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT0JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> FLT0JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t FLT0FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> FLT0FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> FLT0FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> FLT0FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t FLT0JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> FLT0JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t FLT0RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t FLT0RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> FLT0RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t FLT0AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> FLT0AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t FLT0AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> FLT0AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t FLT0AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT0AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT0AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t FLT0AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT0AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT0AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t FLT0EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> FLT0EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t FLT0EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT0EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> FLT0EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t FLT0CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> FLT0CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t FLT1CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLT1CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT1CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> FLT1CR1_RCH; // Regular channel selection
    static constexpr uint32_t FLT1CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT1CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT1CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT1CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> FLT1CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> FLT1CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t FLT1CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT1CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT1CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT1CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT1CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t FLT1CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> FLT1CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> FLT1CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t FLT1CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT1CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT1CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t FLT1CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t FLT1CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t FLT1CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT1CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT1ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> FLT1ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT1ISR_CKABF; // Clock absence flag
    static constexpr uint32_t FLT1ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT1ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT1ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t FLT1ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t FLT1ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t FLT1ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t FLT1ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t FLT1ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FLT1ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT1ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t FLT1ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT1ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT1JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> FLT1JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t FLT1FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> FLT1FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> FLT1FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> FLT1FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t FLT1JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> FLT1JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t FLT1RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t FLT1RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> FLT1RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t FLT1AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> FLT1AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t FLT1AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> FLT1AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t FLT1AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT1AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT1AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t FLT1AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT1AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT1AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t FLT1EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> FLT1EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t FLT1EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT1EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> FLT1EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t FLT1CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> FLT1CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t FLT2CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLT2CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT2CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> FLT2CR1_RCH; // Regular channel selection
    static constexpr uint32_t FLT2CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT2CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT2CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT2CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> FLT2CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> FLT2CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t FLT2CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT2CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT2CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT2CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT2CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t FLT2CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> FLT2CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> FLT2CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t FLT2CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT2CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT2CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t FLT2CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t FLT2CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t FLT2CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT2CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT2ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> FLT2ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT2ISR_CKABF; // Clock absence flag
    static constexpr uint32_t FLT2ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT2ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT2ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t FLT2ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t FLT2ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t FLT2ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t FLT2ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t FLT2ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FLT2ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT2ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t FLT2ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT2ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT2JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> FLT2JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t FLT2FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> FLT2FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> FLT2FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> FLT2FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t FLT2JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> FLT2JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t FLT2RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t FLT2RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> FLT2RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t FLT2AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> FLT2AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t FLT2AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> FLT2AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t FLT2AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT2AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT2AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t FLT2AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT2AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT2AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t FLT2EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> FLT2EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t FLT2EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT2EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> FLT2EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t FLT2CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> FLT2CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN


    static constexpr uint32_t FLT3CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLT3CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t FLT3CR1_FAST = 0x20000000; // Fast conversion mode selection for regular conversions
    typedef bit_field_t<24, 0x7> FLT3CR1_RCH; // Regular channel selection
    static constexpr uint32_t FLT3CR1_RDMAEN = 0x200000; // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t FLT3CR1_RSYNC = 0x80000; // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t FLT3CR1_RCONT = 0x40000; // Continuous mode selection for regular conversions
    static constexpr uint32_t FLT3CR1_RSWSTART = 0x20000; // Software start of a conversion on the regular channel
    typedef bit_field_t<13, 0x3> FLT3CR1_JEXTEN; // Trigger enable and trigger edge selection for injected conversions
    typedef bit_field_t<8, 0x7> FLT3CR1_JEXTSEL; // Trigger signal selection for launching injected conversions
    static constexpr uint32_t FLT3CR1_JDMAEN = 0x20; // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t FLT3CR1_JSCAN = 0x10; // Scanning conversion mode for injected conversions
    static constexpr uint32_t FLT3CR1_JSYNC = 0x8; // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t FLT3CR1_JSWSTART = 0x2; // Start a conversion of the injected group of channels
    static constexpr uint32_t FLT3CR1_DFEN = 0x1; // DFSDM enable

    static constexpr uint32_t FLT3CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> FLT3CR2_AWDCH; // Analog watchdog channel selection
    typedef bit_field_t<8, 0xff> FLT3CR2_EXCH; // Extremes detector channel selection
    static constexpr uint32_t FLT3CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t FLT3CR2_SCDIE = 0x20; // Short-circuit detector interrupt enable
    static constexpr uint32_t FLT3CR2_AWDIE = 0x10; // Analog watchdog interrupt enable
    static constexpr uint32_t FLT3CR2_ROVRIE = 0x8; // Regular data overrun interrupt enable
    static constexpr uint32_t FLT3CR2_JOVRIE = 0x4; // Injected data overrun interrupt enable
    static constexpr uint32_t FLT3CR2_REOCIE = 0x2; // Regular end of conversion interrupt enable
    static constexpr uint32_t FLT3CR2_JEOCIE = 0x1; // Injected end of conversion interrupt enable

    static constexpr uint32_t FLT3ISR_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<24, 0xff> FLT3ISR_SCDF; // short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT3ISR_CKABF; // Clock absence flag
    static constexpr uint32_t FLT3ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t FLT3ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t FLT3ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t FLT3ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t FLT3ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t FLT3ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t FLT3ISR_JEOCF = 0x1; // End of injected conversion flag

    static constexpr uint32_t FLT3ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FLT3ICR_CLRSCDF; // Clear the short-circuit detector flag
    typedef bit_field_t<16, 0xff> FLT3ICR_CLRCKABF; // Clear the clock absence flag
    static constexpr uint32_t FLT3ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t FLT3ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t FLT3JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> FLT3JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t FLT3FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x7> FLT3FCR_FORD; // Sinc filter order
    typedef bit_field_t<16, 0x3ff> FLT3FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<0, 0xff> FLT3FCR_IOSR; // Integrator oversampling ratio (averaging length)

    static constexpr uint32_t FLT3JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3JDATAR_JDATA; // Injected group conversion data
    typedef bit_field_t<0, 0x7> FLT3JDATAR_JDATACH; // Injected channel most recently converted

    static constexpr uint32_t FLT3RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3RDATAR_RDATA; // Regular channel conversion data
    static constexpr uint32_t FLT3RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<0, 0x7> FLT3RDATAR_RDATACH; // Regular channel most recently converted

    static constexpr uint32_t FLT3AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3AWHTR_AWHT; // Analog watchdog high threshold
    typedef bit_field_t<0, 0xf> FLT3AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event

    static constexpr uint32_t FLT3AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3AWLTR_AWLT; // Analog watchdog low threshold
    typedef bit_field_t<0, 0xf> FLT3AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event

    static constexpr uint32_t FLT3AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT3AWSR_AWHTF; // Analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT3AWSR_AWLTF; // Analog watchdog low threshold flag

    static constexpr uint32_t FLT3AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> FLT3AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag
    typedef bit_field_t<0, 0xff> FLT3AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag

    static constexpr uint32_t FLT3EXMAX_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3EXMAX_EXMAX; // Extremes detector maximum value
    typedef bit_field_t<0, 0x7> FLT3EXMAX_EXMAXCH; // Extremes detector maximum data channel

    static constexpr uint32_t FLT3EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<8, 0xffffff> FLT3EXMIN_EXMIN; // EXMIN
    typedef bit_field_t<0, 0x7> FLT3EXMIN_EXMINCH; // Extremes detector minimum data channel

    static constexpr uint32_t FLT3CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> FLT3CNVTIMR_CNVCNT; // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
};

template<>
struct peripheral_t<STM32F412, DFSDM>
{
    static constexpr periph_t P = DFSDM;
    using T = stm32f412_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, DFSDM1>
{
    static constexpr periph_t P = DFSDM1;
    using T = stm32f413_dfsdm2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, DFSDM2>
{
    static constexpr periph_t P = DFSDM2;
    using T = stm32f413_dfsdm2_t;
    static T& V;
};

using dfsdm_t = peripheral_t<svd, DFSDM>;
using dfsdm1_t = peripheral_t<svd, DFSDM1>;
using dfsdm2_t = peripheral_t<svd, DFSDM2>;

template<int INST> struct dfsdm_traits {};

template<> struct dfsdm_traits<0>
{
    using dfsdm = dfsdm_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_DFSDMEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDMRST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct dfsdm_traits<1>
{
    using dfsdm = dfsdm1_t;
    static constexpr signal_t CKIN0 = DFSDM1_CKIN0;
    static constexpr signal_t CKIN1 = DFSDM1_CKIN1;
    static constexpr signal_t CKIN2 = DFSDM1_CKIN2;
    static constexpr signal_t CKIN3 = DFSDM1_CKIN3;
    static constexpr signal_t CKOUT = DFSDM1_CKOUT;
    static constexpr signal_t DATIN0 = DFSDM1_DATIN0;
    static constexpr signal_t DATIN1 = DFSDM1_DATIN1;
    static constexpr signal_t DATIN2 = DFSDM1_DATIN2;
    static constexpr signal_t DATIN3 = DFSDM1_DATIN3;
};

template<> struct dfsdm_traits<2>
{
    using dfsdm = dfsdm2_t;
    static constexpr signal_t CKIN0 = DFSDM2_CKIN0;
    static constexpr signal_t CKIN1 = DFSDM2_CKIN1;
    static constexpr signal_t CKIN2 = DFSDM2_CKIN2;
    static constexpr signal_t CKIN3 = DFSDM2_CKIN3;
    static constexpr signal_t CKIN4 = DFSDM2_CKIN4;
    static constexpr signal_t CKIN5 = DFSDM2_CKIN5;
    static constexpr signal_t CKIN6 = DFSDM2_CKIN6;
    static constexpr signal_t CKIN7 = DFSDM2_CKIN7;
    static constexpr signal_t CKOUT = DFSDM2_CKOUT;
    static constexpr signal_t DATIN0 = DFSDM2_DATIN0;
    static constexpr signal_t DATIN1 = DFSDM2_DATIN1;
    static constexpr signal_t DATIN2 = DFSDM2_DATIN2;
    static constexpr signal_t DATIN3 = DFSDM2_DATIN3;
    static constexpr signal_t DATIN4 = DFSDM2_DATIN4;
    static constexpr signal_t DATIN5 = DFSDM2_DATIN5;
    static constexpr signal_t DATIN6 = DFSDM2_DATIN6;
    static constexpr signal_t DATIN7 = DFSDM2_DATIN7;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_DFSDM2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_DFSDM2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DFSDM2RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
