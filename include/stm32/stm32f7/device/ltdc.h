#pragma once

////
//
//      STM32F7 LTDC peripherals
//
////

////
//
//      LCD-TFT Controller
//
////

struct stm32f745_ltdc_t
{
    volatile uint32_t SSCR;     // [read-write] Synchronization Size Configuration Register
    volatile uint32_t BPCR;     // [read-write] Back Porch Configuration Register
    volatile uint32_t AWCR;     // [read-write] Active Width Configuration Register
    volatile uint32_t TWCR;     // [read-write] Total Width Configuration Register
    volatile uint32_t GCR;      // Global Control Register
    reserved_t<0x2> _0x24;
    volatile uint32_t SRCR;     // [read-write] Shadow Reload Configuration Register
    reserved_t<0x1> _0x2c;
    volatile uint32_t BCCR;     // [read-write] Background Color Configuration Register
    reserved_t<0x1> _0x34;
    volatile uint32_t IER;      // [read-write] Interrupt Enable Register
    volatile uint32_t ISR;      // [read-only] Interrupt Status Register
    volatile uint32_t ICR;      // [write-only] Interrupt Clear Register
    volatile uint32_t LIPCR;    // [read-write] Line Interrupt Position Configuration Register
    volatile uint32_t CPSR;     // [read-only] Current Position Status Register
    volatile uint32_t CDSR;     // [read-only] Current Display Status Register
    reserved_t<0xe> _0x84;
    volatile uint32_t L1CR;     // [read-write] Layerx Control Register
    volatile uint32_t L1WHPCR;  // [read-write] Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L1WVPCR;  // [read-write] Layerx Window Vertical Position Configuration Register
    volatile uint32_t L1CKCR;   // [read-write] Layerx Color Keying Configuration Register
    volatile uint32_t L1PFCR;   // [read-write] Layerx Pixel Format Configuration Register
    volatile uint32_t L1CACR;   // [read-write] Layerx Constant Alpha Configuration Register
    volatile uint32_t L1DCCR;   // [read-write] Layerx Default Color Configuration Register
    volatile uint32_t L1BFCR;   // [read-write] Layerx Blending Factors Configuration Register
    reserved_t<0x2> _0xac;
    volatile uint32_t L1CFBAR;  // [read-write] Layerx Color Frame Buffer Address Register
    volatile uint32_t L1CFBLR;  // [read-write] Layerx Color Frame Buffer Length Register
    volatile uint32_t L1CFBLNR; // [read-write] Layerx ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0xc4;
    volatile uint32_t L1CLUTWR; // [write-only] Layerx CLUT Write Register
    reserved_t<0xf> _0x104;
    volatile uint32_t L2CR;     // [read-write] Layerx Control Register
    volatile uint32_t L2WHPCR;  // [read-write] Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L2WVPCR;  // [read-write] Layerx Window Vertical Position Configuration Register
    volatile uint32_t L2CKCR;   // [read-write] Layerx Color Keying Configuration Register
    volatile uint32_t L2PFCR;   // [read-write] Layerx Pixel Format Configuration Register
    volatile uint32_t L2CACR;   // [read-write] Layerx Constant Alpha Configuration Register
    volatile uint32_t L2DCCR;   // [read-write] Layerx Default Color Configuration Register
    volatile uint32_t L2BFCR;   // [read-write] Layerx Blending Factors Configuration Register
    reserved_t<0x2> _0x12c;
    volatile uint32_t L2CFBAR;  // [read-write] Layerx Color Frame Buffer Address Register
    volatile uint32_t L2CFBLR;  // [read-write] Layerx Color Frame Buffer Length Register
    volatile uint32_t L2CFBLNR; // [read-write] Layerx ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0x144;
    volatile uint32_t L2CLUTWR; // [write-only] Layerx CLUT Write Register

    static constexpr uint32_t SSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SSCR_HSW =   // Horizontal Synchronization Width (in units of pixel clock period)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SSCR_VSH =   // Vertical Synchronization Height (in units of horizontal scan line)
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t BPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BPCR_AHBP =   // Accumulated Horizontal back porch (in units of pixel clock period)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BPCR_AVBP =   // Accumulated Vertical back porch (in units of horizontal scan line)
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t AWCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWCR_AAV =   // AAV
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWCR_AAH =   // Accumulated Active Height (in units of horizontal scan line)
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t TWCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TWCR_TOTALW =   // Total Width (in units of pixel clock period)
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TWCR_TOTALH =   // Total Height (in units of horizontal scan line)
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t GCR_RESET_VALUE = 0x2220;
    static constexpr uint32_t GCR_HSPOL = 0x80000000; // Horizontal Synchronization Polarity
    static constexpr uint32_t GCR_VSPOL = 0x40000000; // Vertical Synchronization Polarity
    static constexpr uint32_t GCR_DEPOL = 0x20000000; // Data Enable Polarity
    static constexpr uint32_t GCR_PCPOL = 0x10000000; // Pixel Clock Polarity
    static constexpr uint32_t GCR_DEN = 0x10000;      // Dither Enable
    template<uint32_t X>
    static constexpr uint32_t GCR_DRW =               // Dither Red Width
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GCR_DGW =               // Dither Green Width
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GCR_DBW =               // Dither Blue Width
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t GCR_LTDCEN = 0x1;       // LCD-TFT controller enable bit

    static constexpr uint32_t SRCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SRCR_VBR = 0x2; // Vertical Blanking Reload
    static constexpr uint32_t SRCR_IMR = 0x1; // Immediate Reload

    static constexpr uint32_t BCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BCCR_BC =   // Background Color Red value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_RRIE = 0x8;   // Register Reload interrupt enable
    static constexpr uint32_t IER_TERRIE = 0x4; // Transfer Error Interrupt Enable
    static constexpr uint32_t IER_FUIE = 0x2;   // FIFO Underrun Interrupt Enable
    static constexpr uint32_t IER_LIE = 0x1;    // Line Interrupt Enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_RRIF = 0x8;   // Register Reload Interrupt Flag
    static constexpr uint32_t ISR_TERRIF = 0x4; // Transfer Error interrupt flag
    static constexpr uint32_t ISR_FUIF = 0x2;   // FIFO Underrun Interrupt flag
    static constexpr uint32_t ISR_LIF = 0x1;    // Line Interrupt flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_CRRIF = 0x8;   // Clears Register Reload Interrupt Flag
    static constexpr uint32_t ICR_CTERRIF = 0x4; // Clears the Transfer Error Interrupt Flag
    static constexpr uint32_t ICR_CFUIF = 0x2;   // Clears the FIFO Underrun Interrupt flag
    static constexpr uint32_t ICR_CLIF = 0x1;    // Clears the Line Interrupt Flag

    static constexpr uint32_t LIPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LIPCR_LIPOS =   // Line Interrupt Position
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t CPSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPSR_CXPOS =   // Current X Position
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CPSR_CYPOS =   // Current Y Position
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CDSR_RESET_VALUE = 0xf;
    static constexpr uint32_t CDSR_HSYNCS = 0x8; // Horizontal Synchronization display Status
    static constexpr uint32_t CDSR_VSYNCS = 0x4; // Vertical Synchronization display Status
    static constexpr uint32_t CDSR_HDES = 0x2;   // Horizontal Data Enable display Status
    static constexpr uint32_t CDSR_VDES = 0x1;   // Vertical Data Enable display Status

    static constexpr uint32_t L1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t L1CR_CLUTEN = 0x10; // Color Look-Up Table Enable
    static constexpr uint32_t L1CR_COLKEN = 0x2;  // Color Keying Enable
    static constexpr uint32_t L1CR_LEN = 0x1;     // Layer Enable

    static constexpr uint32_t L1WHPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1WHPCR_WHSPPOS =   // Window Horizontal Stop Position
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1WHPCR_WHSTPOS =   // Window Horizontal Start Position
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t L1WVPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1WVPCR_WVSPPOS =   // Window Vertical Stop Position
        bit_field_t<16, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1WVPCR_WVSTPOS =   // Window Vertical Start Position
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t L1CKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1CKCR_CKRED =     // Color Key Red value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CKCR_CKGREEN =   // Color Key Green value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CKCR_CKBLUE =    // Color Key Blue value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L1PFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1PFCR_PF =   // Pixel Format
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t L1CACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1CACR_CONSTA =   // Constant Alpha
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L1DCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1DCCR_DCALPHA =   // Default Color Alpha
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1DCCR_DCRED =     // Default Color Red
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1DCCR_DCGREEN =   // Default Color Green
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1DCCR_DCBLUE =    // Default Color Blue
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L1BFCR_RESET_VALUE = 0x607;
    template<uint32_t X>
    static constexpr uint32_t L1BFCR_BF1 =   // Blending Factor 1
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1BFCR_BF2 =   // Blending Factor 2
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t L1CFBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t L1CFBLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1CFBLR_CFBP =    // Color Frame Buffer Pitch in bytes
        bit_field_t<16, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CFBLR_CFBLL =   // Color Frame Buffer Line Length
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t L1CFBLNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1CFBLNR_CFBLNBR =   // Frame Buffer Line Number
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t L1CLUTWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L1CLUTWR_CLUTADD =   // CLUT Address
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CLUTWR_RED =       // Red value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CLUTWR_GREEN =     // Green value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L1CLUTWR_BLUE =      // Blue value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t L2CR_CLUTEN = 0x10; // Color Look-Up Table Enable
    static constexpr uint32_t L2CR_COLKEN = 0x2;  // Color Keying Enable
    static constexpr uint32_t L2CR_LEN = 0x1;     // Layer Enable

    static constexpr uint32_t L2WHPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2WHPCR_WHSPPOS =   // Window Horizontal Stop Position
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2WHPCR_WHSTPOS =   // Window Horizontal Start Position
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t L2WVPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2WVPCR_WVSPPOS =   // Window Vertical Stop Position
        bit_field_t<16, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2WVPCR_WVSTPOS =   // Window Vertical Start Position
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t L2CKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2CKCR_CKRED =     // Color Key Red value
        bit_field_t<15, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CKCR_CKGREEN =   // Color Key Green value
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CKCR_CKBLUE =    // Color Key Blue value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L2PFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2PFCR_PF =   // Pixel Format
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t L2CACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2CACR_CONSTA =   // Constant Alpha
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L2DCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2DCCR_DCALPHA =   // Default Color Alpha
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2DCCR_DCRED =     // Default Color Red
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2DCCR_DCGREEN =   // Default Color Green
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2DCCR_DCBLUE =    // Default Color Blue
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t L2BFCR_RESET_VALUE = 0x607;
    template<uint32_t X>
    static constexpr uint32_t L2BFCR_BF1 =   // Blending Factor 1
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2BFCR_BF2 =   // Blending Factor 2
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t L2CFBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t L2CFBLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2CFBLR_CFBP =    // Color Frame Buffer Pitch in bytes
        bit_field_t<16, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CFBLR_CFBLL =   // Color Frame Buffer Line Length
        bit_field_t<0, 0x1fff>::value<X>();

    static constexpr uint32_t L2CFBLNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2CFBLNR_CFBLNBR =   // Frame Buffer Line Number
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t L2CLUTWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t L2CLUTWR_CLUTADD =   // CLUT Address
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CLUTWR_RED =       // Red value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CLUTWR_GREEN =     // Green value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t L2CLUTWR_BLUE =      // Blue value
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F745, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, LTCD>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, LTCD>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, LTDC>
{
    typedef stm32f745_ltdc_t T;
    static T& V;
};

using ltcd_t = peripheral_t<mcu_svd, LTCD>;
using ltdc_t = peripheral_t<mcu_svd, LTDC>;

