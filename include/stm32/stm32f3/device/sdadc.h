#pragma once

////
//
//      STM32F3 SDADC peripherals
//
////

////
//
//      Sigma-delta analog-to-digital converter
//
////

struct stm32f373_sdadc1_t
{
    volatile uint32_t CR1;      // [read-write] control register 1
    volatile uint32_t CR2;      // [read-write] control register 2
    volatile uint32_t ISR;      // [read-only] interrupt and status register
    volatile uint32_t CLRISR;   // [read-write] interrupt and status clear register
    reserved_t<0x1> _0x14;
    volatile uint32_t JCHGR;    // [read-write] injected channel group selection register
    reserved_t<0x2> _0x20;
    volatile uint32_t CONF0R;   // [read-write] configuration 0 register
    volatile uint32_t CONF1R;   // [read-write] configuration 1 register
    volatile uint32_t CONF2R;   // [read-write] configuration 2 register
    reserved_t<0x5> _0x40;
    volatile uint32_t CONFCHR1; // [read-write] channel configuration register 1
    volatile uint32_t CONFCHR2; // [read-write] channel configuration register 2
    reserved_t<0x6> _0x60;
    volatile uint32_t JDATAR;   // [read-only] data register for injected group
    volatile uint32_t RDATAR;   // [read-only] data register for the regular channel
    reserved_t<0x2> _0x70;
    volatile uint32_t JDATA12R; // [read-only] SDADC1 and SDADC2 injected data register
    volatile uint32_t RDATA12R; // [read-only] SDADC1 and SDADC2 regular data register
    volatile uint32_t JDATA13R; // [read-only] SDADC1 and SDADC3 injected data register
    volatile uint32_t RDATA13R; // [read-only] SDADC1 and SDADC3 regular data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_EOCALIE = 0x1;     // End of calibration interrupt enable
    static constexpr uint32_t CR1_JEOCIE = 0x2;      // Injected end of conversion interrupt enable
    static constexpr uint32_t CR1_JOVRIE = 0x4;      // Injected data overrun interrupt enable
    static constexpr uint32_t CR1_REOCIE = 0x8;      // Regular end of conversion interrupt enable
    static constexpr uint32_t CR1_ROVRIE = 0x10;     // Regular data overrun interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR1_REFV =             // Reference voltage selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_SLOWCK = 0x400;    // Slow clock mode enable
    static constexpr uint32_t CR1_SBI = 0x800;       // Enter Standby mode when idle
    static constexpr uint32_t CR1_PDI = 0x1000;      // Enter power down mode when idle
    static constexpr uint32_t CR1_JSYNC = 0x4000;    // Launch a injected conversion synchronously with SDADC1
    static constexpr uint32_t CR1_RSYNC = 0x8000;    // Launch regular conversion synchronously with SDADC1
    static constexpr uint32_t CR1_JDMAEN = 0x10000;  // DMA channel enabled to read data for the injected channel group
    static constexpr uint32_t CR1_RDMAEN = 0x20000;  // DMA channel enabled to read data for the regular channel
    static constexpr uint32_t CR1_INIT = 0x80000000; // Initialization mode request

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_FAST = 0x1000000;    // Fast conversion mode selection
    static constexpr uint32_t CR2_RSWSTART = 0x800000; // Software start of a conversion on the regular channel
    static constexpr uint32_t CR2_RCONT = 0x400000;    // Continuous mode selection for regular conversions
    template<uint32_t X>
    static constexpr uint32_t CR2_RCH =                // Regular channel selection
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t CR2_JSWSTART = 0x8000;   // Start a conversion of the injected group of channels
    template<uint32_t X>
    static constexpr uint32_t CR2_JEXTEN =             // Trigger enable and trigger edge selection for injected conversions
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_JEXTSEL =            // Trigger signal selection for launching injected conversions
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR2_JDS = 0x40;          // Delay start of injected conversions.
    static constexpr uint32_t CR2_JCONT = 0x20;        // Continuous mode selection for injected conversions
    static constexpr uint32_t CR2_STARTCALIB = 0x10;   // Start calibration
    template<uint32_t X>
    static constexpr uint32_t CR2_CALIBCNT =           // Number of calibration sequences to be performed (number of valid configurations)
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t CR2_ADON = 0x1;          // SDADC enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_INITRDY = 0x80000000; // Initialization mode is ready
    static constexpr uint32_t ISR_STABIP = 0x8000;      // Stabilization in progress status
    static constexpr uint32_t ISR_RCIP = 0x4000;        // Regular conversion in progress status
    static constexpr uint32_t ISR_JCIP = 0x2000;        // Injected conversion in progress status
    static constexpr uint32_t ISR_CALIBIP = 0x1000;     // Calibration in progress status
    static constexpr uint32_t ISR_ROVRF = 0x10;         // Regular conversion overrun flag
    static constexpr uint32_t ISR_REOCF = 0x8;          // End of regular conversion flag
    static constexpr uint32_t ISR_JOVRF = 0x4;          // Injected conversion overrun flag
    static constexpr uint32_t ISR_JEOCF = 0x2;          // End of injected conversion flag
    static constexpr uint32_t ISR_EOCALF = 0x1;         // End of calibration flag

    static constexpr uint32_t CLRISR_RESET_VALUE = 0x0;
    static constexpr uint32_t CLRISR_CLRROVRF = 0x10; // Clear the regular conversion overrun flag
    static constexpr uint32_t CLRISR_CLRJOVRF = 0x4;  // Clear the injected conversion overrun flag
    static constexpr uint32_t CLRISR_CLREOCALF = 0x1; // Clear the end of calibration flag

    static constexpr uint32_t JCHGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t JCHGR_JCHG =   // Injected channel group selection
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t CONF0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CONF0R_COMMON0 =   // Common mode for configuration 0
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF0R_SE0 =       // Single-ended mode for configuration 0
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF0R_GAIN0 =     // Gain setting for configuration 0
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF0R_OFFSET0 =   // Twelve-bit calibration offset for configuration 0
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t CONF1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CONF1R_COMMON1 =   // Common mode for configuration 1
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF1R_SE1 =       // Single-ended mode for configuration 1
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF1R_GAIN1 =     // Gain setting for configuration 1
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF1R_OFFSET1 =   // Twelve-bit calibration offset for configuration 1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t CONF2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CONF2R_COMMON2 =   // Common mode for configuration 2
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF2R_SE2 =       // Single-ended mode for configuration 2
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF2R_GAIN2 =     // Gain setting for configuration 2
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONF2R_OFFSET2 =   // Twelve-bit calibration offset for configuration 2
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t CONFCHR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH7 =   // CONFCH7
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH6 =   // CONFCH6
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH5 =   // CONFCH5
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH4 =   // CONFCH4
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH3 =   // CONFCH3
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH2 =   // CONFCH2
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH1 =   // CONFCH1
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CONFCHR1_CONFCH0 =   // CONFCH0
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CONFCHR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CONFCHR2_CONFCH8 =   // Channel 8 configuration
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t JDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDATAR_JDATACH =   // Injected channel most recently converted
        bit_field_t<25, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JDATAR_JDATA =     // Injected group conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RDATAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RDATAR_RDATA =   // Regular channel conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDATA12R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDATA12R_JDATA2 =   // Injected group conversion data for SDADC2
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JDATA12R_JDATA1 =   // Injected group conversion data for SDADC1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RDATA12R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RDATA12R_RDATA2 =   // Regular conversion data for SDADC2
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RDATA12R_RDATA1 =   // Regular conversion data for SDADC1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDATA13R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDATA13R_JDATA3 =   // Injected group conversion data for SDADC3
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JDATA13R_JDATA1 =   // Injected group conversion data for SDADC1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RDATA13R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RDATA13R_RDATA3 =   // Regular conversion data for SDADC3
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RDATA13R_RDATA1 =   // Regular conversion data for SDADC1
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F373, SDADC1>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, SDADC2>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, SDADC3>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, SDADC1>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, SDADC2>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, SDADC3>
{
    typedef stm32f373_sdadc1_t T;
    static T& V;
};

using sdadc1_t = peripheral_t<mcu_svd, SDADC1>;
using sdadc2_t = peripheral_t<mcu_svd, SDADC2>;
using sdadc3_t = peripheral_t<mcu_svd, SDADC3>;

template<int INST> struct sdadc_traits {};

template<> struct sdadc_traits<1>
{
    using sdadc = sdadc1_t;
};

template<> struct sdadc_traits<2>
{
    using sdadc = sdadc2_t;
};

template<> struct sdadc_traits<3>
{
    using sdadc = sdadc3_t;
};

