#pragma once

////
//
//      STM32L4 DFSDM peripherals
//
////

////
//
//      Digital filter for sigma delta modulators
//
////

struct stm32l4x5_dfsdm_t
{
    volatile uint32_t CHCFG0R1;       // [read-write] channel configuration y register
    volatile uint32_t CHCFG0R2;       // [read-write] channel configuration y register
    volatile uint32_t AWSCD0R;        // [read-write] analog watchdog and short-circuit detector register
    volatile uint32_t CHWDAT0R;       // [read-write] channel watchdog filter data register
    volatile uint32_t CHDATIN0R;      // [read-write] channel data input register
    reserved_t<0x3> _0x20;
    volatile uint32_t CHCFG1R1;       // [read-write] CHCFG1R1
    volatile uint32_t CHCFG1R2;       // [read-write] CHCFG1R2
    volatile uint32_t AWSCD1R;        // [read-write] AWSCD1R
    volatile uint32_t CHWDAT1R;       // [read-write] CHWDAT1R
    volatile uint32_t CHDATIN1R;      // [read-write] CHDATIN1R
    reserved_t<0x3> _0x40;
    volatile uint32_t CHCFG2R1;       // [read-write] CHCFG2R1
    volatile uint32_t CHCFG2R2;       // [read-write] CHCFG2R2
    volatile uint32_t AWSCD2R;        // [read-write] AWSCD2R
    volatile uint32_t CHWDAT2R;       // [read-write] CHWDAT2R
    volatile uint32_t CHDATIN2R;      // [read-write] CHDATIN2R
    reserved_t<0x3> _0x60;
    volatile uint32_t CHCFG3R1;       // [read-write] CHCFG3R1
    volatile uint32_t CHCFG3R2;       // [read-write] CHCFG3R2
    volatile uint32_t AWSCD3R;        // [read-write] AWSCD3R
    volatile uint32_t CHWDAT3R;       // [read-write] CHWDAT3R
    volatile uint32_t CHDATIN3R;      // [read-write] CHDATIN3R
    reserved_t<0x3> _0x80;
    volatile uint32_t CHCFG4R1;       // [read-write] CHCFG4R1
    volatile uint32_t CHCFG4R2;       // [read-write] CHCFG4R2
    volatile uint32_t AWSCD4R;        // [read-write] AWSCD4R
    volatile uint32_t CHWDAT4R;       // [read-write] CHWDAT4R
    volatile uint32_t CHDATIN4R;      // [read-write] CHDATIN4R
    reserved_t<0x3> _0xa0;
    volatile uint32_t CHCFG5R1;       // [read-write] CHCFG5R1
    volatile uint32_t CHCFG5R2;       // [read-write] CHCFG5R2
    volatile uint32_t AWSCD5R;        // [read-write] AWSCD5R
    volatile uint32_t CHWDAT5R;       // [read-write] CHWDAT5R
    volatile uint32_t CHDATIN5R;      // [read-write] CHDATIN5R
    reserved_t<0x3> _0xc0;
    volatile uint32_t CHCFG6R1;       // [read-write] CHCFG6R1
    volatile uint32_t CHCFG6R2;       // [read-write] CHCFG6R2
    volatile uint32_t AWSCD6R;        // [read-write] AWSCD6R
    volatile uint32_t CHWDAT6R;       // [read-write] CHWDAT6R
    volatile uint32_t CHDATIN6R;      // [read-write] CHDATIN6R
    reserved_t<0x3> _0xe0;
    volatile uint32_t CHCFG7R1;       // [read-write] CHCFG7R1
    volatile uint32_t CHCFG7R2;       // [read-write] CHCFG7R2
    volatile uint32_t AWSCD7R;        // [read-write] AWSCD7R
    volatile uint32_t CHWDAT7R;       // [read-write] CHWDAT7R
    volatile uint32_t CHDATIN7R;      // [read-write] CHDATIN7R
    reserved_t<0x3> _0x100;
    volatile uint32_t DFSDM0_CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM0_CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM0_ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM0_ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM0_JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM0_FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM0_JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM0_RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM0_AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM0_AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM0_AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM0_AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM0_EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM0_EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM0_CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x31> _0x200;
    volatile uint32_t DFSDM1_CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM1_CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM1_ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM1_ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM1_JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM1_FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM1_JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM1_RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM1_AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM1_AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM1_AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM1_AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM1_EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM1_EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM1_CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x31> _0x300;
    volatile uint32_t DFSDM2_CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM2_CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM2_ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM2_ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM2_JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM2_FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM2_JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM2_RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM2_AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM2_AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM2_AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM2_AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM2_EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM2_EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM2_CNVTIMR; // [read-only] conversion timer register
    reserved_t<0x31> _0x400;
    volatile uint32_t DFSDM3_CR1;     // [read-write] control register 1
    volatile uint32_t DFSDM3_CR2;     // [read-write] control register 2
    volatile uint32_t DFSDM3_ISR;     // [read-only] interrupt and status register
    volatile uint32_t DFSDM3_ICR;     // [read-write] interrupt flag clear register
    volatile uint32_t DFSDM3_JCHGR;   // [read-write] injected channel group selection register
    volatile uint32_t DFSDM3_FCR;     // [read-write] filter control register
    volatile uint32_t DFSDM3_JDATAR;  // [read-only] data register for injected group
    volatile uint32_t DFSDM3_RDATAR;  // [read-only] data register for the regular channel
    volatile uint32_t DFSDM3_AWHTR;   // [read-write] analog watchdog high threshold register
    volatile uint32_t DFSDM3_AWLTR;   // [read-write] analog watchdog low threshold register
    volatile uint32_t DFSDM3_AWSR;    // [read-only] analog watchdog status register
    volatile uint32_t DFSDM3_AWCFR;   // [read-write] analog watchdog clear flag register
    volatile uint32_t DFSDM3_EXMAX;   // [read-only] Extremes detector maximum register
    volatile uint32_t DFSDM3_EXMIN;   // [read-only] Extremes detector minimum register
    volatile uint32_t DFSDM3_CNVTIMR; // [read-only] conversion timer register

    static constexpr uint32_t CHCFG0R1_RESET_VALUE = 0x0;
    static constexpr uint32_t CHCFG0R1_DFSDMEN = 0x80000000;  // DFSDMEN
    static constexpr uint32_t CHCFG0R1_CKOUTSRC = 0x40000000; // CKOUTSRC
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG0R1_CHINSEL = 0x100;       // CHINSEL
    static constexpr uint32_t CHCFG0R1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t CHCFG0R1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t CHCFG0R1_SCDEN = 0x20;          // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG0R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG0R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD0R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD0R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD0R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD0R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT0R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN0R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN0R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG1R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG1R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG1R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG1R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG1R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG1R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG1R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD1R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD1R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD1R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD1R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT1R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN1R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN1R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG2R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG2R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG2R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG2R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG2R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG2R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG2R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD2R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD2R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD2R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD2R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT2R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN2R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN2R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG3R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG3R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG3R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG3R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG3R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG3R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG3R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD3R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD3R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD3R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD3R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT3R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN3R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN3R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG4R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG4R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG4R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG4R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG4R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG4R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG4R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD4R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD4R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD4R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD4R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT4R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN4R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN4R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG5R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG5R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG5R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG5R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG5R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG5R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG5R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD5R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD5R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD5R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD5R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT5R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN5R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN5R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG6R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG6R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG6R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG6R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG6R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG6R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG6R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD6R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD6R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD6R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD6R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT6R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN6R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN6R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHCFG7R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R1_DATPACK =        // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R1_DATMPX =         // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CHCFG7R1_CHINSEL = 0x100; // CHINSEL
    static constexpr uint32_t CHCFG7R1_CHEN = 0x80;     // CHEN
    static constexpr uint32_t CHCFG7R1_CKABEN = 0x40;   // CKABEN
    static constexpr uint32_t CHCFG7R1_SCDEN = 0x20;    // SCDEN
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R1_SPICKSEL =       // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R1_SITP =           // SITP
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CHCFG7R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHCFG7R2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t AWSCD7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWSCD7R_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD7R_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD7R_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWSCD7R_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CHWDAT7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHWDAT7R_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CHDATIN7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHDATIN7R_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHDATIN7R_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM0_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM0_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM0_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM0_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM0_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM0_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM0_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM0_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM0_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM0_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM0_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM0_CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM0_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM0_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM0_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM0_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM0_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM0_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM0_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM0_ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM0_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM0_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM0_ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM0_ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM0_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM0_JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM0_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM0_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM0_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM0_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM0_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM0_EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM0_EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM0_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM0_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM1_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM1_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM1_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM1_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM1_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM1_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM1_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM1_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM1_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM1_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM1_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM1_CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM1_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM1_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM1_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM1_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM1_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM1_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM1_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM1_ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM1_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM1_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM1_ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM1_ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM1_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM1_JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM1_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM1_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM1_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM1_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM1_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM1_EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM1_EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM1_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM1_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM2_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM2_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM2_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM2_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM2_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM2_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM2_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM2_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM2_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM2_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM2_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM2_CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM2_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM2_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM2_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM2_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM2_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM2_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM2_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM2_ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM2_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM2_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM2_ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM2_ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM2_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM2_JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM2_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM2_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM2_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM2_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM2_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM2_EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM2_EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM2_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM2_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM3_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM3_CR1_AWFSEL = 0x40000000; // Analog watchdog fast mode select
    static constexpr uint32_t DFSDM3_CR1_FAST = 0x20000000;   // Fast conversion mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_RCH =                // Regular channel selection
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM3_CR1_RDMAEN = 0x200000;   // DMA channel enabled to read data for the regular conversion
    static constexpr uint32_t DFSDM3_CR1_RSYNC = 0x80000;     // Launch regular conversion synchronously with DFSDM0
    static constexpr uint32_t DFSDM3_CR1_RCONT = 0x40000;     // Continuous mode selection for regular conversions
    static constexpr uint32_t DFSDM3_CR1_RSWSTART = 0x20000;  // Software start of a conversion on the regular channel
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR1_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DFSDM3_CR1_JDMAEN = 0x20;       // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t DFSDM3_CR1_JSCAN = 0x10;        // Scanning conversion mode for injected conversions
    static constexpr uint32_t DFSDM3_CR1_JSYNC = 0x8;         // Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger
    static constexpr uint32_t DFSDM3_CR1_JSWSTART = 0x2;      // Start a conversion of the injected group of channels
    static constexpr uint32_t DFSDM3_CR1_DFEN = 0x1;          // DFSDM enable

    static constexpr uint32_t DFSDM3_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR2_AWDCH =        // Analog watchdog channel selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CR2_EXCH =         // Extremes detector channel selection
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t DFSDM3_CR2_CKABIE = 0x40; // Clock absence interrupt enable
    static constexpr uint32_t DFSDM3_CR2_SCDIE = 0x20;  // Short-circuit detector interrupt enable
    static constexpr uint32_t DFSDM3_CR2_AWDIE = 0x10;  // Analog watchdog interrupt enable
    static constexpr uint32_t DFSDM3_CR2_ROVRIE = 0x8;  // Regular data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JOVRIE = 0x4;  // Injected data overrun interrupt enable
    static constexpr uint32_t DFSDM3_CR2_REOCIE = 0x2;  // Regular end of conversion interrupt enable
    static constexpr uint32_t DFSDM3_CR2_JEOCIE = 0x1;  // Injected end of conversion interrupt enable

    static constexpr uint32_t DFSDM3_ISR_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ISR_SCDF =         // short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ISR_CKABF =        // Clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM3_ISR_RCIP = 0x4000; // Regular conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_AWDF = 0x10;   // Analog watchdog
    static constexpr uint32_t DFSDM3_ISR_ROVRF = 0x8;   // Regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_JOVRF = 0x4;   // Injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_REOCF = 0x2;   // End of regular conversion flag
    static constexpr uint32_t DFSDM3_ISR_JEOCF = 0x1;   // End of injected conversion flag

    static constexpr uint32_t DFSDM3_ICR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ICR_CLRSCDF =       // Clear the short-circuit detector flag
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_ICR_CLRCKABF =      // Clear the clock absence flag
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM3_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag

    static constexpr uint32_t DFSDM3_JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_FORD =   // Sinc filter order
        bit_field_t<29, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_FOSR =   // Sinc filter oversampling ratio (decimation rate)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_FCR_IOSR =   // Integrator oversampling ratio (averaging length)
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM3_RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_RDATAR_RDATA =       // Regular channel conversion data
        bit_field_t<8, 0xffffff>::value<X>();
    static constexpr uint32_t DFSDM3_RDATAR_RPEND = 0x10; // Regular channel pending data
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_RDATAR_RDATACH =     // Regular channel most recently converted
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM3_AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWHTR_AWHT =    // Analog watchdog high threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWHTR_BKAWH =   // Break signal assignment to analog watchdog high threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM3_AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWLTR_AWLT =    // Analog watchdog low threshold
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWLTR_BKAWL =   // Break signal assignment to analog watchdog low threshold event
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DFSDM3_AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWSR_AWHTF =   // Analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWSR_AWLTF =   // Analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWCFR_CLRAWHTF =   // Clear the analog watchdog high threshold flag
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_AWCFR_CLRAWLTF =   // Clear the analog watchdog low threshold flag
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM3_EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMAX_EXMAX =     // Extremes detector maximum value
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMAX_EXMAXCH =   // Extremes detector maximum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM3_EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_EXMIN_EXMINCH =   // Extremes detector minimum data channel
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DFSDM3_CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM3_CNVTIMR_CNVCNT =   // 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
        bit_field_t<4, 0xfffffff>::value<X>();
};


////
//
//      Digital filter for sigma delta modulators
//
////

struct stm32l476_dfsdm1_t
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


template<>
struct peripheral_t<STM32L476, DFSDM1>
{
    typedef stm32l476_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, DFSDM1>
{
    typedef stm32l476_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, DFSDM>
{
    typedef stm32l476_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, DFSDM>
{
    typedef stm32l476_dfsdm1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, DFSDM>
{
    typedef stm32l4x5_dfsdm_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, DFSDM1>
{
    typedef stm32l4x5_dfsdm_t T;
    static T& V;
};

using dfsdm_t = peripheral_t<mcu_svd, DFSDM>;
using dfsdm1_t = peripheral_t<mcu_svd, DFSDM1>;

template<int INST> struct dfsdm_traits {};

template<> struct dfsdm_traits<1>
{
    using dfsdm = dfsdm1_t;
    static constexpr alternate_function_t CKIN0 = DFSDM1_CKIN0;
    static constexpr alternate_function_t CKIN1 = DFSDM1_CKIN1;
    static constexpr alternate_function_t CKIN2 = DFSDM1_CKIN2;
    static constexpr alternate_function_t CKIN3 = DFSDM1_CKIN3;
    static constexpr alternate_function_t CKIN4 = DFSDM1_CKIN4;
    static constexpr alternate_function_t CKIN5 = DFSDM1_CKIN5;
    static constexpr alternate_function_t CKIN6 = DFSDM1_CKIN6;
    static constexpr alternate_function_t CKIN7 = DFSDM1_CKIN7;
    static constexpr alternate_function_t CKOUT = DFSDM1_CKOUT;
    static constexpr alternate_function_t DATIN0 = DFSDM1_DATIN0;
    static constexpr alternate_function_t DATIN1 = DFSDM1_DATIN1;
    static constexpr alternate_function_t DATIN2 = DFSDM1_DATIN2;
    static constexpr alternate_function_t DATIN3 = DFSDM1_DATIN3;
    static constexpr alternate_function_t DATIN4 = DFSDM1_DATIN4;
    static constexpr alternate_function_t DATIN5 = DFSDM1_DATIN5;
    static constexpr alternate_function_t DATIN6 = DFSDM1_DATIN6;
    static constexpr alternate_function_t DATIN7 = DFSDM1_DATIN7;
};

