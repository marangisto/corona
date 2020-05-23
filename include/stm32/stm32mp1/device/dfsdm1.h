#pragma once

////
//
//      STM32MP1 DFSDM1 peripherals
//
////

////
//
//      DFSDM1
//
////

struct stm32mp15xxx_dfsdm1_t
{
    volatile uint32_t DFSDM_CH0CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH0CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH0AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH0WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH0DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH0DLYR;     // [read-write] DFSDM channel 0 delay register
    reserved_t<0x2> _0x20;
    volatile uint32_t DFSDM_CH1CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH1CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH1AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH1WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH1DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH1DLYR;     // [read-write] DFSDM channel 1 delay register
    reserved_t<0x2> _0x40;
    volatile uint32_t DFSDM_CH2CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH2CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH2AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH2WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH2DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH2DLYR;     // [read-write] DFSDM channel 2 delay register
    reserved_t<0x2> _0x60;
    volatile uint32_t DFSDM_CH3CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH3CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH3AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH3WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH3DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH3DLYR;     // [read-write] DFSDM channel 3 delay register
    reserved_t<0x2> _0x80;
    volatile uint32_t DFSDM_CH4CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH4CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH4AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH4WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH4DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH4DLYR;     // [read-write] DFSDM channel 4 delay register
    reserved_t<0x2> _0xa0;
    volatile uint32_t DFSDM_CH5CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH5CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH5AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH5WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH5DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH5DLYR;     // [read-write] DFSDM channel 5 delay register
    reserved_t<0x2> _0xc0;
    volatile uint32_t DFSDM_CH6CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH6CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH6AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH6WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH6DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH6DLYR;     // [read-write] DFSDM channel 6 delay register
    reserved_t<0x2> _0xe0;
    volatile uint32_t DFSDM_CH7CFGR1;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH7CFGR2;    // [read-write] This register specifies the parameters used by channel y.
    volatile uint32_t DFSDM_CH7AWSCDR;   // [read-write] Short-circuit detector and analog watchdog settings for channel y.
    volatile uint32_t DFSDM_CH7WDATR;    // [read-only] This register contains the data resulting from the analog watchdog filter associated to the input channel y.
    volatile uint32_t DFSDM_CH7DATINR;   // [read-write] This register contains 16-bit input data to be processed by DFSDM filter module.
    volatile uint32_t DFSDM_CH7DLYR;     // [read-write] DFSDM channel 7 delay register
    reserved_t<0x2> _0x100;
    volatile uint32_t DFSDM_FLT0CR1;     // [read-write] DFSDM filter 0 control register 1
    volatile uint32_t DFSDM_FLT0CR2;     // [read-write] DFSDM filter 0 control register 2
    volatile uint32_t DFSDM_FLT0ISR;     // [read-only] DFSDM filter 0 interrupt and status register
    volatile uint32_t DFSDM_FLT0ICR;     // [read-write] DFSDM filter 0 interrupt flag clear register
    volatile uint32_t DFSDM_FLT0JCHGR;   // [read-write] DFSDM filter 0 injected channel group selection register
    volatile uint32_t DFSDM_FLT0FCR;     // [read-write] DFSDM filter 0 control register
    volatile uint32_t DFSDM_FLT0JDATAR;  // [read-only] DFSDM filter 0 data register for injected group
    volatile uint32_t DFSDM_FLT0RDATAR;  // [read-only] DFSDM filter 0 data register for the regular channel
    volatile uint32_t DFSDM_FLT0AWHTR;   // [read-write] DFSDM filter 0 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT0AWLTR;   // [read-write] DFSDM filter 0 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT0AWSR;    // [read-only] DFSDM filter 0 analog watchdog status register
    volatile uint32_t DFSDM_FLT0AWCFR;   // [read-write] DFSDM filter 0 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT0EXMAX;   // [read-only] DFSDM filter 0 extremes detector maximum register
    volatile uint32_t DFSDM_FLT0EXMIN;   // DFSDM filter 0 extremes detector minimum register
    volatile uint32_t DFSDM_FLT0CNVTIMR; // [read-only] DFSDM filter 0 conversion timer register
    reserved_t<0x11> _0x180;
    volatile uint32_t DFSDM_FLT1CR1;     // [read-write] DFSDM filter 1 control register 1
    volatile uint32_t DFSDM_FLT1CR2;     // [read-write] DFSDM filter 1 control register 2
    volatile uint32_t DFSDM_FLT1ISR;     // [read-only] DFSDM filter 1 interrupt and status register
    volatile uint32_t DFSDM_FLT1ICR;     // [read-write] DFSDM filter 1 interrupt flag clear register
    volatile uint32_t DFSDM_FLT1JCHGR;   // [read-write] DFSDM filter 1 injected channel group selection register
    volatile uint32_t DFSDM_FLT1FCR;     // [read-write] DFSDM filter 1 control register
    volatile uint32_t DFSDM_FLT1JDATAR;  // [read-only] DFSDM filter 1 data register for injected group
    volatile uint32_t DFSDM_FLT1RDATAR;  // [read-only] DFSDM filter 1 data register for the regular channel
    volatile uint32_t DFSDM_FLT1AWHTR;   // [read-write] DFSDM filter 1 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT1AWLTR;   // [read-write] DFSDM filter 1 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT1AWSR;    // [read-only] DFSDM filter 1 analog watchdog status register
    volatile uint32_t DFSDM_FLT1AWCFR;   // [read-write] DFSDM filter 1 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT1EXMAX;   // [read-only] DFSDM filter 1 extremes detector maximum register
    volatile uint32_t DFSDM_FLT1EXMIN;   // DFSDM filter 1 extremes detector minimum register
    volatile uint32_t DFSDM_FLT1CNVTIMR; // [read-only] DFSDM filter 1 conversion timer register
    reserved_t<0x11> _0x200;
    volatile uint32_t DFSDM_FLT2CR1;     // [read-write] DFSDM filter 2 control register 1
    volatile uint32_t DFSDM_FLT2CR2;     // [read-write] DFSDM filter 2 control register 2
    volatile uint32_t DFSDM_FLT2ISR;     // [read-only] DFSDM filter 2 interrupt and status register
    volatile uint32_t DFSDM_FLT2ICR;     // [read-write] DFSDM filter 2 interrupt flag clear register
    volatile uint32_t DFSDM_FLT2JCHGR;   // [read-write] DFSDM filter 2 injected channel group selection register
    volatile uint32_t DFSDM_FLT2FCR;     // [read-write] DFSDM filter 2 control register
    volatile uint32_t DFSDM_FLT2JDATAR;  // [read-only] DFSDM filter 2 data register for injected group
    volatile uint32_t DFSDM_FLT2RDATAR;  // [read-only] DFSDM filter 2 data register for the regular channel
    volatile uint32_t DFSDM_FLT2AWHTR;   // [read-write] DFSDM filter 2 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT2AWLTR;   // [read-write] DFSDM filter 2 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT2AWSR;    // [read-only] DFSDM filter 2 analog watchdog status register
    volatile uint32_t DFSDM_FLT2AWCFR;   // [read-write] DFSDM filter 2 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT2EXMAX;   // [read-only] DFSDM filter 2 extremes detector maximum register
    volatile uint32_t DFSDM_FLT2EXMIN;   // DFSDM filter 2 extremes detector minimum register
    volatile uint32_t DFSDM_FLT2CNVTIMR; // [read-only] DFSDM filter 2 conversion timer register
    reserved_t<0x11> _0x280;
    volatile uint32_t DFSDM_FLT3CR1;     // [read-write] DFSDM filter 3 control register 1
    volatile uint32_t DFSDM_FLT3CR2;     // [read-write] DFSDM filter 3 control register 2
    volatile uint32_t DFSDM_FLT3ISR;     // [read-only] DFSDM filter 3 interrupt and status register
    volatile uint32_t DFSDM_FLT3ICR;     // [read-write] DFSDM filter 3 interrupt flag clear register
    volatile uint32_t DFSDM_FLT3JCHGR;   // [read-write] DFSDM filter 3 injected channel group selection register
    volatile uint32_t DFSDM_FLT3FCR;     // [read-write] DFSDM filter 3 control register
    volatile uint32_t DFSDM_FLT3JDATAR;  // [read-only] DFSDM filter 3 data register for injected group
    volatile uint32_t DFSDM_FLT3RDATAR;  // [read-only] DFSDM filter 3 data register for the regular channel
    volatile uint32_t DFSDM_FLT3AWHTR;   // [read-write] DFSDM filter 3 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT3AWLTR;   // [read-write] DFSDM filter 3 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT3AWSR;    // [read-only] DFSDM filter 3 analog watchdog status register
    volatile uint32_t DFSDM_FLT3AWCFR;   // [read-write] DFSDM filter 3 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT3EXMAX;   // [read-only] DFSDM filter 3 extremes detector maximum register
    volatile uint32_t DFSDM_FLT3EXMIN;   // DFSDM filter 3 extremes detector minimum register
    volatile uint32_t DFSDM_FLT3CNVTIMR; // [read-only] DFSDM filter 3 conversion timer register
    reserved_t<0x11> _0x300;
    volatile uint32_t DFSDM_FLT4CR1;     // [read-write] DFSDM filter 4 control register 1
    volatile uint32_t DFSDM_FLT4CR2;     // [read-write] DFSDM filter 4 control register 2
    volatile uint32_t DFSDM_FLT4ISR;     // [read-only] DFSDM filter 4 interrupt and status register
    volatile uint32_t DFSDM_FLT4ICR;     // [read-write] DFSDM filter 4 interrupt flag clear register
    volatile uint32_t DFSDM_FLT4JCHGR;   // [read-write] DFSDM filter 4 injected channel group selection register
    volatile uint32_t DFSDM_FLT4FCR;     // [read-write] DFSDM filter 4 control register
    volatile uint32_t DFSDM_FLT4JDATAR;  // [read-only] DFSDM filter 4 data register for injected group
    volatile uint32_t DFSDM_FLT4RDATAR;  // [read-only] DFSDM filter 4 data register for the regular channel
    volatile uint32_t DFSDM_FLT4AWHTR;   // [read-write] DFSDM filter 4 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT4AWLTR;   // [read-write] DFSDM filter 4 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT4AWSR;    // [read-only] DFSDM filter 4 analog watchdog status register
    volatile uint32_t DFSDM_FLT4AWCFR;   // [read-write] DFSDM filter 4 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT4EXMAX;   // [read-only] DFSDM filter 4 extremes detector maximum register
    volatile uint32_t DFSDM_FLT4EXMIN;   // DFSDM filter 4 extremes detector minimum register
    volatile uint32_t DFSDM_FLT4CNVTIMR; // [read-only] DFSDM filter 4 conversion timer register
    reserved_t<0x11> _0x380;
    volatile uint32_t DFSDM_FLT5CR1;     // [read-write] DFSDM filter 5 control register 1
    volatile uint32_t DFSDM_FLT5CR2;     // [read-write] DFSDM filter 5 control register 2
    volatile uint32_t DFSDM_FLT5ISR;     // [read-only] DFSDM filter 5 interrupt and status register
    volatile uint32_t DFSDM_FLT5ICR;     // [read-write] DFSDM filter 5 interrupt flag clear register
    volatile uint32_t DFSDM_FLT5JCHGR;   // [read-write] DFSDM filter 5 injected channel group selection register
    volatile uint32_t DFSDM_FLT5FCR;     // [read-write] DFSDM filter 5 control register
    volatile uint32_t DFSDM_FLT5JDATAR;  // [read-only] DFSDM filter 5 data register for injected group
    volatile uint32_t DFSDM_FLT5RDATAR;  // [read-only] DFSDM filter 5 data register for the regular channel
    volatile uint32_t DFSDM_FLT5AWHTR;   // [read-write] DFSDM filter 5 analog watchdog high threshold register
    volatile uint32_t DFSDM_FLT5AWLTR;   // [read-write] DFSDM filter 5 analog watchdog low threshold register
    volatile uint32_t DFSDM_FLT5AWSR;    // [read-only] DFSDM filter 5 analog watchdog status register
    volatile uint32_t DFSDM_FLT5AWCFR;   // [read-write] DFSDM filter 5 analog watchdog clear flag register
    volatile uint32_t DFSDM_FLT5EXMAX;   // [read-only] DFSDM filter 5 extremes detector maximum register
    volatile uint32_t DFSDM_FLT5EXMIN;   // DFSDM filter 5 extremes detector minimum register
    volatile uint32_t DFSDM_FLT5CNVTIMR; // [read-only] DFSDM filter 5 conversion timer register
    reserved_t<0x10d> _0x7f0;
    volatile uint32_t DFSDM_HWCFGR;      // [read-only] This register specifies the hardware configuration of DFSDM peripheral.
    volatile uint32_t DFSDM_VERR;        // [read-only] This register specifies the version of DFSDM peripheral.
    volatile uint32_t DFSDM_IPIDR;       // [read-only] This register specifies the identification of DFSDM peripheral.
    volatile uint32_t DFSDM_SIDR;        // [read-only] This register specifies the size allocated to DFSDM registers.

    static constexpr uint32_t DFSDM_CH0CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH0CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH0CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH0CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH0CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH0CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH0CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH0CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH0AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH0WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH0DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH0DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH0DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH1CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH1CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH1CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH1CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH1CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH1CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH1CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH1CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH1AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH1WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH1DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH1DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH1DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH2CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH2CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH2CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH2CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH2CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH2CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH2CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH2CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH2AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH2WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH2DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH2DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH2DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH3CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH3CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH3CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH3CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH3CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH3CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH3CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH3CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH3AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH3WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH3DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH3DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH3DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH4CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH4CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH4CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH4CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH4CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH4CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH4CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH4CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH4AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH4WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH4DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH4DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH4DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH5CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH5CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH5CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH5CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH5CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH5CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH5CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH5CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH5AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH5WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH5DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH5DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH5DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH6CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH6CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH6CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH6CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH6CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH6CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH6CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH6CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH6AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH6WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH6DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH6DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH6DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_CH7CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR1_SITP =                 // SITP
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR1_SPICKSEL =             // SPICKSEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_CH7CFGR1_SCDEN = 0x20;          // SCDEN
    static constexpr uint32_t DFSDM_CH7CFGR1_CKABEN = 0x40;         // CKABEN
    static constexpr uint32_t DFSDM_CH7CFGR1_CHEN = 0x80;           // CHEN
    static constexpr uint32_t DFSDM_CH7CFGR1_CHINSEL = 0x100;       // CHINSEL
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR1_DATMPX =               // DATMPX
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR1_DATPACK =              // DATPACK
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR1_CKOUTDIV =             // CKOUTDIV
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t DFSDM_CH7CFGR1_CKOUTSRC = 0x40000000; // CKOUTSRC
    static constexpr uint32_t DFSDM_CH7CFGR1_DFSDMEN = 0x80000000;  // DFSDMEN

    static constexpr uint32_t DFSDM_CH7CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR2_DTRBS =    // DTRBS
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7CFGR2_OFFSET =   // OFFSET
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_CH7AWSCDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7AWSCDR_SCDT =     // SCDT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7AWSCDR_BKSCD =    // BKSCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7AWSCDR_AWFOSR =   // AWFOSR
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7AWSCDR_AWFORD =   // AWFORD
        bit_field_t<22, 0x3>::value<X>();

    static constexpr uint32_t DFSDM_CH7WDATR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7WDATR_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH7DATINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7DATINR_INDAT0 =   // INDAT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7DATINR_INDAT1 =   // INDAT1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DFSDM_CH7DLYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_CH7DLYR_PLSSKP =   // PLSSKP
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t DFSDM_FLT0CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT0CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT0CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT0CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT0CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT0CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT0CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT0CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT0CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT0CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT0CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT0CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT0CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT0CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT0CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT0CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT0CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT0CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT0CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT0CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT0ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT0ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT0ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT0ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT0ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT0ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT0ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT0ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT0ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT0JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT0RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT0CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT0CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT1CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT1CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT1CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT1CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT1CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT1CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT1CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT1CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT1CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT1CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT1CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT1CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT1CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT1CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT1CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT1CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT1CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT1CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT1CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT1ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT1ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT1ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT1ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT1ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT1ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT1ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT1ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT1ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT1JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT1RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT1CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT1CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT2CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT2CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT2CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT2CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT2CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT2CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT2CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT2CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT2CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT2CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT2CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT2CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT2CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT2CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT2CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT2CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT2CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT2CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT2CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT2ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT2ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT2ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT2ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT2ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT2ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT2ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT2ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT2ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT2JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT2RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT2CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT2CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT3CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT3CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT3CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT3CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT3CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT3CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT3CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT3CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT3CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT3CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT3CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT3CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT3CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT3CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT3CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT3CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT3CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT3CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT3CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT3ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT3ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT3ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT3ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT3ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT3ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT3ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT3ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT3ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT3JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT3RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT3CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT3CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT4CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT4CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT4CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT4CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT4CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT4CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT4CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT4CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT4CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT4CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT4CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT4CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT4CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT4CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT4CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT4CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT4CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT4CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT4CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT4ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT4ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT4ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT4ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT4ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT4ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT4ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT4ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT4ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT4JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT4RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT4CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT4CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT5CR1_DFEN = 0x1;          // DFEN
    static constexpr uint32_t DFSDM_FLT5CR1_JSWSTART = 0x2;      // JSWSTART
    static constexpr uint32_t DFSDM_FLT5CR1_JSYNC = 0x8;         // JSYNC
    static constexpr uint32_t DFSDM_FLT5CR1_JSCAN = 0x10;        // JSCAN
    static constexpr uint32_t DFSDM_FLT5CR1_JDMAEN = 0x20;       // JDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CR1_JEXTSEL =            // JEXTSEL
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CR1_JEXTEN =             // JEXTEN
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DFSDM_FLT5CR1_RSWSTART = 0x20000;  // RSWSTART
    static constexpr uint32_t DFSDM_FLT5CR1_RCONT = 0x40000;     // RCONT
    static constexpr uint32_t DFSDM_FLT5CR1_RSYNC = 0x80000;     // RSYNC
    static constexpr uint32_t DFSDM_FLT5CR1_RDMAEN = 0x200000;   // RDMAEN
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CR1_RCH =                // RCH
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT5CR1_FAST = 0x20000000;   // FAST
    static constexpr uint32_t DFSDM_FLT5CR1_AWFSEL = 0x40000000; // AWFSEL

    static constexpr uint32_t DFSDM_FLT5CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT5CR2_JEOCIE = 0x1;  // JEOCIE
    static constexpr uint32_t DFSDM_FLT5CR2_REOCIE = 0x2;  // REOCIE
    static constexpr uint32_t DFSDM_FLT5CR2_JOVRIE = 0x4;  // JOVRIE
    static constexpr uint32_t DFSDM_FLT5CR2_ROVRIE = 0x8;  // ROVRIE
    static constexpr uint32_t DFSDM_FLT5CR2_AWDIE = 0x10;  // AWDIE
    static constexpr uint32_t DFSDM_FLT5CR2_SCDIE = 0x20;  // SCDIE
    static constexpr uint32_t DFSDM_FLT5CR2_CKABIE = 0x40; // CKABIE
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CR2_EXCH =         // EXCH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CR2_AWDCH =        // AWDCH
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5ISR_RESET_VALUE = 0xff0000;
    static constexpr uint32_t DFSDM_FLT5ISR_JEOCF = 0x1;   // JEOCF
    static constexpr uint32_t DFSDM_FLT5ISR_REOCF = 0x2;   // REOCF
    static constexpr uint32_t DFSDM_FLT5ISR_JOVRF = 0x4;   // JOVRF
    static constexpr uint32_t DFSDM_FLT5ISR_ROVRF = 0x8;   // ROVRF
    static constexpr uint32_t DFSDM_FLT5ISR_AWDF = 0x10;   // AWDF
    static constexpr uint32_t DFSDM_FLT5ISR_JCIP = 0x2000; // JCIP
    static constexpr uint32_t DFSDM_FLT5ISR_RCIP = 0x4000; // RCIP
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5ISR_CKABF =        // CKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5ISR_SCDF =         // SCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DFSDM_FLT5ICR_CLRJOVRF = 0x4; // CLRJOVRF
    static constexpr uint32_t DFSDM_FLT5ICR_CLRROVRF = 0x8; // CLRROVRF
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5ICR_CLRCKABF =      // CLRCKABF
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5ICR_CLRSCDF =       // CLRSCDF
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5JCHGR_JCHG =   // JCHG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5FCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5FCR_IOSR =   // IOSR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5FCR_FOSR =   // FOSR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5FCR_FORD =   // FORD
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t DFSDM_FLT5JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5JDATAR_JDATACH =   // JDATACH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5JDATAR_JDATA =     // JDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5RDATAR_RDATACH =     // RDATACH
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DFSDM_FLT5RDATAR_RPEND = 0x10; // RPEND
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5RDATAR_RDATA =       // RDATA
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5AWHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWHTR_BKAWH =   // BKAWH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWHTR_AWHT =    // AWHT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5AWLTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWLTR_BKAWL =   // BKAWL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWLTR_AWLT =    // AWLT
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5AWSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWSR_AWLTF =   // AWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWSR_AWHTF =   // AWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5AWCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWCFR_CLRAWLTF =   // CLRAWLTF
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5AWCFR_CLRAWHTF =   // CLRAWHTF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5EXMAX_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5EXMAX_EXMAXCH =   // EXMAXCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5EXMAX_EXMAX =     // EXMAX
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5EXMIN_RESET_VALUE = 0x7fffff00;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5EXMIN_EXMINCH =   // EXMINCH
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5EXMIN_EXMIN =     // EXMIN
        bit_field_t<8, 0xffffff>::value<X>();

    static constexpr uint32_t DFSDM_FLT5CNVTIMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_FLT5CNVTIMR_CNVCNT =   // CNVCNT
        bit_field_t<4, 0xfffffff>::value<X>();

    static constexpr uint32_t DFSDM_HWCFGR_RESET_VALUE = 0x608;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_HWCFGR_NBT =   // NBT
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_HWCFGR_NBF =   // NBF
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DFSDM_VERR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DFSDM_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DFSDM_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DFSDM_IPIDR_RESET_VALUE = 0x110031;

    static constexpr uint32_t DFSDM_SIDR_RESET_VALUE = 0xa3c5dd02;
};


template<>
struct peripheral_t<STM32MP15xxx, DFSDM1>
{
    typedef stm32mp15xxx_dfsdm1_t T;
    static T& V;
};

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

