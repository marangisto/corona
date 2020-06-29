#pragma once

////
//
//      STM32F7 DFSDM peripherals
//
///

// DFSDM: Digital filter for sigma delta modulators

struct stm32f767_dfsdm_t
{
    volatile uint32_t DFSDM_CHCFG0R1; // DFSDM channel configuration 0 register 1
    volatile uint32_t DFSDM_CHCFG0R2; // DFSDM channel configuration 0 register 2
    volatile uint32_t DFSDM_AWSCD0R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT0R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN0R; // DFSDM channel data input register
    reserved_t<0x3> _0x14;
    volatile uint32_t DFSDM_CHCFG1R1; // DFSDM channel configuration 1 register 1
    volatile uint32_t DFSDM_CHCFG1R2; // DFSDM channel configuration 1 register 2
    volatile uint32_t DFSDM_AWSCD1R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT1R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN1R; // DFSDM channel data input register
    reserved_t<0x3> _0x34;
    volatile uint32_t DFSDM_CHCFG2R1; // DFSDM channel configuration 2 register 1
    volatile uint32_t DFSDM_CHCFG2R2; // DFSDM channel configuration 2 register 2
    volatile uint32_t DFSDM_AWSCD2R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT2R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN2R; // DFSDM channel data input register
    reserved_t<0x3> _0x54;
    volatile uint32_t DFSDM_CHCFG3R1; // DFSDM channel configuration 3 register 1
    volatile uint32_t DFSDM_CHCFG3R2; // DFSDM channel configuration 3 register 2
    volatile uint32_t DFSDM_AWSCD3R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT3R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN3R; // DFSDM channel data input register
    reserved_t<0x3> _0x74;
    volatile uint32_t DFSDM_CHCFG4R1; // DFSDM channel configuration 4 register 1
    volatile uint32_t DFSDM_CHCFG4R2; // DFSDM channel configuration 4 register 2
    volatile uint32_t DFSDM_AWSCD4R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT4R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN4R; // DFSDM channel data input register
    reserved_t<0x3> _0x94;
    volatile uint32_t DFSDM_CHCFG5R1; // DFSDM channel configuration 5 register 1
    volatile uint32_t DFSDM_CHCFG5R2; // DFSDM channel configuration 5 register 2
    volatile uint32_t DFSDM_AWSCD5R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT5R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN5R; // DFSDM channel data input register
    reserved_t<0x3> _0xb4;
    volatile uint32_t DFSDM_CHCFG6R1; // DFSDM channel configuration 6 register 1
    volatile uint32_t DFSDM_CHCFG6R2; // DFSDM channel configuration 6 register 2
    volatile uint32_t DFSDM_AWSCD6R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT6R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN6R; // DFSDM channel data input register
    reserved_t<0x3> _0xd4;
    volatile uint32_t DFSDM_CHCFG7R1; // DFSDM channel configuration 7 register 1
    volatile uint32_t DFSDM_CHCFG7R2; // DFSDM channel configuration 7 register 2
    volatile uint32_t DFSDM_AWSCD7R; // DFSDM analog watchdog and short-circuit detector register
    volatile uint32_t DFSDM_CHWDAT7R; // DFSDM channel watchdog filter data register
    volatile uint32_t DFSDM_CHDATIN7R; // DFSDM channel data input register
    reserved_t<0x3> _0xf4;
    volatile uint32_t DFSDM0_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM0_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM0_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM0_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM0_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM0_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM0_JDATAR; // DFSDM data register for injected group
    volatile uint32_t DFSDM0_RDATAR; // DFSDM data register for the regular channel
    volatile uint32_t DFSDM0_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM0_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM0_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM0_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM0_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM0_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM0_CNVTIMR; // DFSDM conversion timer register
    reserved_t<0x11> _0x13c;
    volatile uint32_t DFSDM1_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM1_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM1_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM1_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM1_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM1_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM1_JDATAR; // DFSDM data register for injected group
    reserved_t<0x1> _0x19c;
    volatile uint32_t DFSDM1_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM1_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM1_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM1_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM1_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM1_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM1_CNVTIMR; // DFSDM conversion timer register
    reserved_t<0x11> _0x1bc;
    volatile uint32_t DFSDM2_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM2_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM2_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM2_ICR; // DFSDM interrupt flag clear register
    volatile uint32_t DFSDM2_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM2_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM2_JDATAR; // DFSDM data register for injected group
    reserved_t<0x1> _0x21c;
    volatile uint32_t DFSDM2_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM2_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM2_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM2_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM2_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM2_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM2_CNVTIMR; // DFSDM conversion timer register
    reserved_t<0x19> _0x23c;
    volatile uint32_t DFSDM3_AWHTR; // DFSDM analog watchdog high threshold register
    volatile uint32_t DFSDM3_AWLTR; // DFSDM analog watchdog low threshold register
    volatile uint32_t DFSDM3_AWSR; // DFSDM analog watchdog status register
    volatile uint32_t DFSDM3_AWCFR; // DFSDM analog watchdog clear flag register
    volatile uint32_t DFSDM3_EXMAX; // DFSDM Extremes detector maximum register
    volatile uint32_t DFSDM3_EXMIN; // DFSDM Extremes detector minimum register
    volatile uint32_t DFSDM3_CNVTIMR; // DFSDM conversion timer register
    reserved_t<0x15> _0x2bc;
    volatile uint32_t DFSDM3_JCHGR; // DFSDM injected channel group selection register
    volatile uint32_t DFSDM3_FCR; // DFSDM filter control register
    volatile uint32_t DFSDM3_JDATAR; // DFSDM data register for injected group
    reserved_t<0x19> _0x31c;
    volatile uint32_t DFSDM3_CR1; // DFSDM control register 1
    volatile uint32_t DFSDM3_CR2; // DFSDM control register 2
    volatile uint32_t DFSDM3_ISR; // DFSDM interrupt and status register
    volatile uint32_t DFSDM3_ICR; // DFSDM interrupt flag clear register

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

    static constexpr uint32_t DFSDM_CHCFG0R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG0R2_DTRBS; // Data right bit-shift for channel 0
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG0R2_OFFSET; // 24-bit calibration offset for channel 0

    static constexpr uint32_t DFSDM_AWSCD0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD0R_SCDT; // short-circuit detector threshold for channel 0
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD0R_BKSCD; // Break signal assignment for short-circuit detector on channel 0
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD0R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 0
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD0R_AWFORD; // Analog watchdog Sinc filter order on channel 0

    static constexpr uint32_t DFSDM_CHWDAT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT0R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN0R_INDAT0; // Input data for channel 0
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN0R_INDAT1; // Input data for channel 1


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

    static constexpr uint32_t DFSDM_CHCFG1R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG1R2_DTRBS; // Data right bit-shift for channel 1
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG1R2_OFFSET; // 24-bit calibration offset for channel 1

    static constexpr uint32_t DFSDM_AWSCD1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD1R_SCDT; // short-circuit detector threshold for channel 1
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD1R_BKSCD; // Break signal assignment for short-circuit detector on channel 1
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD1R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 1
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD1R_AWFORD; // Analog watchdog Sinc filter order on channel 1

    static constexpr uint32_t DFSDM_CHWDAT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT1R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN1R_INDAT0; // Input data for channel 1
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN1R_INDAT1; // Input data for channel 2


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

    static constexpr uint32_t DFSDM_CHCFG2R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG2R2_DTRBS; // Data right bit-shift for channel 2
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG2R2_OFFSET; // 24-bit calibration offset for channel 2

    static constexpr uint32_t DFSDM_AWSCD2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD2R_SCDT; // short-circuit detector threshold for channel 2
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD2R_BKSCD; // Break signal assignment for short-circuit detector on channel 2
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD2R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 2
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD2R_AWFORD; // Analog watchdog Sinc filter order on channel 2

    static constexpr uint32_t DFSDM_CHWDAT2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT2R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN2R_INDAT0; // Input data for channel 2
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN2R_INDAT1; // Input data for channel 3


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

    static constexpr uint32_t DFSDM_CHCFG3R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG3R2_DTRBS; // Data right bit-shift for channel 3
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG3R2_OFFSET; // 24-bit calibration offset for channel 3

    static constexpr uint32_t DFSDM_AWSCD3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD3R_SCDT; // short-circuit detector threshold for channel 3
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD3R_BKSCD; // Break signal assignment for short-circuit detector on channel 3
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD3R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 3
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD3R_AWFORD; // Analog watchdog Sinc filter order on channel 3

    static constexpr uint32_t DFSDM_CHWDAT3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT3R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN3R_INDAT0; // Input data for channel 3
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN3R_INDAT1; // Input data for channel 4


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

    static constexpr uint32_t DFSDM_CHCFG4R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG4R2_DTRBS; // Data right bit-shift for channel 4
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG4R2_OFFSET; // 24-bit calibration offset for channel 4

    static constexpr uint32_t DFSDM_AWSCD4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD4R_SCDT; // short-circuit detector threshold for channel 4
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD4R_BKSCD; // Break signal assignment for short-circuit detector on channel 4
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD4R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 4
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD4R_AWFORD; // Analog watchdog Sinc filter order on channel 4

    static constexpr uint32_t DFSDM_CHWDAT4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT4R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN4R_INDAT0; // Input data for channel 4
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN4R_INDAT1; // Input data for channel 5


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

    static constexpr uint32_t DFSDM_CHCFG5R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG5R2_DTRBS; // Data right bit-shift for channel 5
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG5R2_OFFSET; // 24-bit calibration offset for channel 5

    static constexpr uint32_t DFSDM_AWSCD5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD5R_SCDT; // short-circuit detector threshold for channel 5
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD5R_BKSCD; // Break signal assignment for short-circuit detector on channel 5
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD5R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 5
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD5R_AWFORD; // Analog watchdog Sinc filter order on channel 5

    static constexpr uint32_t DFSDM_CHWDAT5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT5R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN5R_INDAT0; // Input data for channel 5
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN5R_INDAT1; // Input data for channel 6


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

    static constexpr uint32_t DFSDM_CHCFG6R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG6R2_DTRBS; // Data right bit-shift for channel 6
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG6R2_OFFSET; // 24-bit calibration offset for channel 6

    static constexpr uint32_t DFSDM_AWSCD6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD6R_SCDT; // short-circuit detector threshold for channel 6
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD6R_BKSCD; // Break signal assignment for short-circuit detector on channel 6
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD6R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 6
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD6R_AWFORD; // Analog watchdog Sinc filter order on channel 6

    static constexpr uint32_t DFSDM_CHWDAT6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT6R_WDATA; // Input channel y watchdog data

    static constexpr uint32_t DFSDM_CHDATIN6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHDATIN6R_INDAT0; // Input data for channel 6
    typedef bit_field_t<16, 0xffff> DFSDM_CHDATIN6R_INDAT1; // Input data for channel 7


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

    static constexpr uint32_t DFSDM_CHCFG7R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1f> DFSDM_CHCFG7R2_DTRBS; // Data right bit-shift for channel 7
    typedef bit_field_t<8, 0xffffff> DFSDM_CHCFG7R2_OFFSET; // 24-bit calibration offset for channel 7

    static constexpr uint32_t DFSDM_AWSCD7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM_AWSCD7R_SCDT; // short-circuit detector threshold for channel 7
    typedef bit_field_t<12, 0xf> DFSDM_AWSCD7R_BKSCD; // Break signal assignment for short-circuit detector on channel 7
    typedef bit_field_t<16, 0x1f> DFSDM_AWSCD7R_AWFOSR; // Analog watchdog filter oversampling ratio (decimation rate) on channel 7
    typedef bit_field_t<22, 0x3> DFSDM_AWSCD7R_AWFORD; // Analog watchdog Sinc filter order on channel 7

    static constexpr uint32_t DFSDM_CHWDAT7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DFSDM_CHWDAT7R_WDATA; // Input channel y watchdog data

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

    static constexpr uint32_t DFSDM0_ISR_RESET_VALUE = 0xff0000; // Reset value
    static constexpr uint32_t DFSDM0_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM0_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM0_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM0_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM0_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM0_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM0_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM0_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM0_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM0_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM0_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM0_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM0_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM0_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM0_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM0_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM0_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM0_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM0_JDATAR_JDATA; // Injected group conversion data

    static constexpr uint32_t DFSDM0_RDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_RDATAR_RDATACH; // Regular channel most recently converted
    static constexpr uint32_t DFSDM0_RDATAR_RPEND = 0x10; // Regular channel pending data
    typedef bit_field_t<8, 0xffffff> DFSDM0_RDATAR_RDATA; // Regular channel conversion data

    static constexpr uint32_t DFSDM0_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM0_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM0_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM0_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM0_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM0_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM0_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM0_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM0_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM0_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM0_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM0_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM0_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM0_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM0_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM0_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time


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

    static constexpr uint32_t DFSDM1_ISR_RESET_VALUE = 0xff0000; // Reset value
    static constexpr uint32_t DFSDM1_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM1_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM1_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM1_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM1_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM1_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM1_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM1_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM1_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM1_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM1_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM1_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM1_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM1_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM1_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM1_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM1_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM1_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM1_JDATAR_JDATA; // Injected group conversion data


    static constexpr uint32_t DFSDM1_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM1_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM1_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM1_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM1_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM1_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM1_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM1_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM1_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM1_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM1_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM1_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM1_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM1_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM1_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM1_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time


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

    static constexpr uint32_t DFSDM2_ISR_RESET_VALUE = 0xff0000; // Reset value
    static constexpr uint32_t DFSDM2_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM2_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM2_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM2_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM2_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM2_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM2_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM2_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM2_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM2_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM2_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM2_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM2_ICR_CLRSCDF; // Clear the short-circuit detector flag

    static constexpr uint32_t DFSDM2_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM2_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM2_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM2_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM2_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM2_JDATAR_JDATA; // Injected group conversion data


    static constexpr uint32_t DFSDM2_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM2_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM2_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM2_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM2_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM2_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM2_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM2_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM2_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM2_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM2_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM2_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM2_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM2_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM2_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM2_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time


    static constexpr uint32_t DFSDM3_AWHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM3_AWHTR_BKAWH; // Break signal assignment to analog watchdog high threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWHTR_AWHT; // Analog watchdog high threshold

    static constexpr uint32_t DFSDM3_AWLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DFSDM3_AWLTR_BKAWL; // Break signal assignment to analog watchdog low threshold event
    typedef bit_field_t<8, 0xffffff> DFSDM3_AWLTR_AWLT; // Analog watchdog low threshold

    static constexpr uint32_t DFSDM3_AWSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_AWSR_AWLTF; // Analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM3_AWSR_AWHTF; // Analog watchdog high threshold flag

    static constexpr uint32_t DFSDM3_AWCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_AWCFR_CLRAWLTF; // Clear the analog watchdog low threshold flag
    typedef bit_field_t<8, 0xff> DFSDM3_AWCFR_CLRAWHTF; // Clear the analog watchdog high threshold flag

    static constexpr uint32_t DFSDM3_EXMAX_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_EXMAX_EXMAXCH; // Extremes detector maximum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMAX_EXMAX; // Extremes detector maximum value

    static constexpr uint32_t DFSDM3_EXMIN_RESET_VALUE = 0x7fffff00; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_EXMIN_EXMINCH; // Extremes detector minimum data channel
    typedef bit_field_t<8, 0xffffff> DFSDM3_EXMIN_EXMIN; // Extremes detector minimum value

    static constexpr uint32_t DFSDM3_CNVTIMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0xfffffff> DFSDM3_CNVTIMR_CNVCNT; // 28-bit timer counting conversion time


    static constexpr uint32_t DFSDM3_JCHGR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_JCHGR_JCHG; // Injected channel group selection

    static constexpr uint32_t DFSDM3_FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DFSDM3_FCR_IOSR; // Integrator oversampling ratio (averaging length)
    typedef bit_field_t<16, 0x3ff> DFSDM3_FCR_FOSR; // Sinc filter oversampling ratio (decimation rate)
    typedef bit_field_t<29, 0x7> DFSDM3_FCR_FORD; // Sinc filter order

    static constexpr uint32_t DFSDM3_JDATAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> DFSDM3_JDATAR_JDATACH; // Injected channel most recently converted
    typedef bit_field_t<8, 0xffffff> DFSDM3_JDATAR_JDATA; // Injected group conversion data


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

    static constexpr uint32_t DFSDM3_ISR_RESET_VALUE = 0xff0000; // Reset value
    static constexpr uint32_t DFSDM3_ISR_JEOCF = 0x1; // End of injected conversion flag
    static constexpr uint32_t DFSDM3_ISR_REOCF = 0x2; // End of regular conversion flag
    static constexpr uint32_t DFSDM3_ISR_JOVRF = 0x4; // Injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_ROVRF = 0x8; // Regular conversion overrun flag
    static constexpr uint32_t DFSDM3_ISR_AWDF = 0x10; // Analog watchdog
    static constexpr uint32_t DFSDM3_ISR_JCIP = 0x2000; // Injected conversion in progress status
    static constexpr uint32_t DFSDM3_ISR_RCIP = 0x4000; // Regular conversion in progress status
    typedef bit_field_t<16, 0xff> DFSDM3_ISR_CKABF; // Clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM3_ISR_SCDF; // short-circuit detector flag

    static constexpr uint32_t DFSDM3_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DFSDM3_ICR_CLRJOVRF = 0x4; // Clear the injected conversion overrun flag
    static constexpr uint32_t DFSDM3_ICR_CLRROVRF = 0x8; // Clear the regular conversion overrun flag
    typedef bit_field_t<16, 0xff> DFSDM3_ICR_CLRCKABF; // Clear the clock absence flag
    typedef bit_field_t<24, 0xff> DFSDM3_ICR_CLRSCDF; // Clear the short-circuit detector flag
};

// DFSDM: Digital filter for sigma delta modulators

struct stm32f768_dfsdm_t
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

template<>
struct peripheral_t<STM32F767, DFSDM>
{
    using T = stm32f767_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DFSDM>
{
    using T = stm32f767_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, DFSDM>
{
    using T = stm32f768_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, DFSDM>
{
    using T = stm32f768_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, DFSDM>
{
    using T = stm32f768_dfsdm_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, DFSDM>
{
    using T = stm32f768_dfsdm_t;
    static T& V;
};

using dfsdm_t = peripheral_t<svd, DFSDM>;

template<int INST> struct dfsdm_traits {};
