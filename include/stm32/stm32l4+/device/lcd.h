#pragma once

////
//
//      STM32L4+ LCD peripherals
//
///

// LTCD: Liquid crystal display controller

struct stm32l4p5_ltcd_t
{
    reserved_t<0x2> _0x0;
    volatile uint32_t SSCR; // LTDC Synchronization Size Configuration Register
    volatile uint32_t BPCR; // LTDC Back Porch Configuration Register
    volatile uint32_t AWCR; // LTDC Active Width Configuration Register
    volatile uint32_t TWCR; // LTDC Total Width Configuration Register
    volatile uint32_t GCR; // LTDC Global Control Register
    reserved_t<0x2> _0x1c;
    volatile uint32_t SRCR; // LTDC Shadow Reload Configuration Register
    reserved_t<0x1> _0x28;
    volatile uint32_t BCCR; // LTDC Background Color Configuration Register
    reserved_t<0x1> _0x30;
    volatile uint32_t IER; // LTDC Interrupt Enable Register
    volatile uint32_t ISR; // LTDC Interrupt Status Register
    volatile uint32_t ICR; // LTDC Interrupt Clear Register
    volatile uint32_t LIPCR; // LTDC Line Interrupt Position Configuration Register
    volatile uint32_t CPSR; // LTDC Current Position Status Register
    volatile uint32_t CDSR; // LTDC Current Display Status Register
    reserved_t<0xe> _0x4c;
    volatile uint32_t L1CR; // LTDC Layer Control Register
    volatile uint32_t L1WHPCR; // LTDC Layer Window Horizontal Position Configuration Register
    volatile uint32_t L1WVPCR; // LTDC Layer Window Vertical Position Configuration Register
    volatile uint32_t L1CKCR; // LTDC Layer Color Keying Configuration Register
    volatile uint32_t L1PFCR; // LTDC Layer Pixel Format Configuration Register
    volatile uint32_t L1CACR; // LTDC Layer Constant Alpha Configuration Register
    volatile uint32_t L1DCCR; // LTDC Layer Default Color Configuration Register
    volatile uint32_t L1BFCR; // LTDC Layer Blending Factors Configuration Register
    reserved_t<0x2> _0xa4;
    volatile uint32_t L1CFBAR; // LTDC Layer Color Frame Buffer Address Register
    volatile uint32_t L1CFBLR; // LTDC Layer Color Frame Buffer Length Register
    volatile uint32_t L1CFBLNR; // LTDC Layer ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0xb8;
    volatile uint32_t L1CLUTWR; // LTDC Layerx CLUT Write Register
    reserved_t<0xf> _0xc8;
    volatile uint32_t L2CR; // LTDC Layer Control Register
    volatile uint32_t L2WHPCR; // LTDC Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L2WVPCR; // LTDC Layer Window Vertical Position Configuration Register
    volatile uint32_t L2CKCR; // LTDC Layer Color Keying Configuration Register
    volatile uint32_t L2PFCR; // LTDC Layer Pixel Format Configuration Register
    volatile uint32_t L2CACR; // LTDC Layer Constant Alpha Configuration Register
    volatile uint32_t L2DCCR; // LTDC Layer Default Color Configuration Register
    reserved_t<0x1> _0x120;
    volatile uint32_t L2BFCR; // LTDC Layer Blending Factors Configuration Register
    reserved_t<0x1> _0x128;
    volatile uint32_t L2CFBAR; // LTDC Layer Color Frame Buffer Address Register
    volatile uint32_t L2CFBLR; // LTDC Layer Color Frame Buffer Length Register
    volatile uint32_t L2CFBLNR; // LTDC Layer ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0x138;
    volatile uint32_t L2CLUTWR; // LTDC Layerx CLUT Write Register


    static constexpr uint32_t SSCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> SSCR_VSH; // Vertical Synchronization Height (in units of horizontal scan line)
    typedef bit_field_t<16, 0xfff> SSCR_HSW; // Horizontal Synchronization Width (in units of pixel clock period)

    static constexpr uint32_t BPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> BPCR_AVBP; // Accumulated Vertical back porch (in units of horizontal scan line)
    typedef bit_field_t<16, 0xfff> BPCR_AHBP; // Accumulated Horizontal back porch (in units of pixel clock period)

    static constexpr uint32_t AWCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> AWCR_AAH; // Accumulated Active Height (in units of horizontal scan line)
    typedef bit_field_t<16, 0xfff> AWCR_AAW; // Accumulated Active Width (in units of pixel clock period)

    static constexpr uint32_t TWCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> TWCR_TOTALH; // Total Height (in units of horizontal scan line)
    typedef bit_field_t<16, 0xfff> TWCR_TOTALW; // Total Width (in units of pixel clock period)

    static constexpr uint32_t GCR_RESET_VALUE = 0x2220; // Reset value
    static constexpr uint32_t GCR_LTDCEN = 0x1; // LCD-TFT controller enable bit
    typedef bit_field_t<4, 0x7> GCR_DBW; // Dither Blue Width
    typedef bit_field_t<8, 0x7> GCR_DGW; // Dither Green Width
    typedef bit_field_t<12, 0x7> GCR_DRW; // Dither Red Width
    static constexpr uint32_t GCR_DEN = 0x10000; // Dither Enable
    static constexpr uint32_t GCR_PCPOL = 0x10000000; // Pixel Clock Polarity
    static constexpr uint32_t GCR_DEPOL = 0x20000000; // Not Data Enable Polarity
    static constexpr uint32_t GCR_VSPOL = 0x40000000; // Vertical Synchronization Polarity
    static constexpr uint32_t GCR_HSPOL = 0x80000000; // Horizontal Synchronization Polarity


    static constexpr uint32_t SRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SRCR_IMR = 0x1; // Immediate Reload
    static constexpr uint32_t SRCR_VBR = 0x2; // Vertical Blanking Reload


    static constexpr uint32_t BCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BCCR_BCBLUE; // Background Color Blue value
    typedef bit_field_t<8, 0xff> BCCR_BCGREEN; // Background Color Green value
    typedef bit_field_t<16, 0xff> BCCR_BCRED; // Background Color Red value


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_LIE = 0x1; // Line Interrupt Enable
    static constexpr uint32_t IER_FUIE = 0x2; // FIFO Underrun Interrupt Enable
    static constexpr uint32_t IER_TERRIE = 0x4; // Transfer Error Interrupt Enable
    static constexpr uint32_t IER_RRIE = 0x8; // Register Reload interrupt enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_LIF = 0x1; // Line Interrupt flag
    static constexpr uint32_t ISR_FUIF = 0x2; // FIFO Underrun Interrupt flag
    static constexpr uint32_t ISR_TERRIF = 0x4; // Transfer Error interrupt flag
    static constexpr uint32_t ISR_RRIF = 0x8; // Register Reload Interrupt Flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_CLIF = 0x1; // Clears the Line Interrupt Flag
    static constexpr uint32_t ICR_CFUIF = 0x2; // Clears the FIFO Underrun Interrupt flag
    static constexpr uint32_t ICR_CTERRIF = 0x4; // Clears the Transfer Error Interrupt Flag
    static constexpr uint32_t ICR_CRRIF = 0x8; // Clears Register Reload Interrupt Flag

    static constexpr uint32_t LIPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> LIPCR_LIPOS; // Line Interrupt Position

    static constexpr uint32_t CPSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPSR_CYPOS; // Current Y Position
    typedef bit_field_t<16, 0xffff> CPSR_CXPOS; // Current X Position

    static constexpr uint32_t CDSR_RESET_VALUE = 0xf; // Reset value
    static constexpr uint32_t CDSR_VDES = 0x1; // Vertical Data Enable display Status
    static constexpr uint32_t CDSR_HDES = 0x2; // Horizontal Data Enable display Status
    static constexpr uint32_t CDSR_VSYNCS = 0x4; // Vertical Synchronization display Status
    static constexpr uint32_t CDSR_HSYNCS = 0x8; // Horizontal Synchronization display Status


    static constexpr uint32_t L1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t L1CR_LEN = 0x1; // Layer Enable
    static constexpr uint32_t L1CR_COLKEN = 0x2; // Color Keying Enable
    static constexpr uint32_t L1CR_CLUTEN = 0x10; // Color Look-Up Table Enable

    static constexpr uint32_t L1WHPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> L1WHPCR_WHSTPOS; // Window Horizontal Start Position
    typedef bit_field_t<16, 0xfff> L1WHPCR_WHSPPOS; // Window Horizontal Stop Position

    static constexpr uint32_t L1WVPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L1WVPCR_WVSTPOS; // Window Vertical Start Position
    typedef bit_field_t<16, 0x7ff> L1WVPCR_WVSPPOS; // Window Vertical Stop Position

    static constexpr uint32_t L1CKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L1CKCR_CKBLUE; // Color Key Blue value
    typedef bit_field_t<8, 0xff> L1CKCR_CKGREEN; // Color Key Green value
    typedef bit_field_t<16, 0xff> L1CKCR_CKRED; // Color Key Red value

    static constexpr uint32_t L1PFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L1PFCR_PF; // Pixel Format

    static constexpr uint32_t L1CACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L1CACR_CONSTA; // Constant Alpha

    static constexpr uint32_t L1DCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L1DCCR_DCBLUE; // Default Color Blue
    typedef bit_field_t<8, 0xff> L1DCCR_DCGREEN; // Default Color Green
    typedef bit_field_t<16, 0xff> L1DCCR_DCRED; // Default Color Red
    typedef bit_field_t<24, 0xff> L1DCCR_DCALPHA; // Default Color Alpha

    static constexpr uint32_t L1BFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L1BFCR_BF2; // Blending Factor 2
    typedef bit_field_t<8, 0x7> L1BFCR_BF1; // Blending Factor 1


    static constexpr uint32_t L1CFBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> L1CFBAR_CFBADD; // Color Frame Buffer Start Address

    static constexpr uint32_t L1CFBLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> L1CFBLR_CFBLL; // Color Frame Buffer Line Length
    typedef bit_field_t<16, 0x1fff> L1CFBLR_CFBP; // Color Frame Buffer Pitch in bytes

    static constexpr uint32_t L1CFBLNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L1CFBLNR_CFBLNBR; // Frame Buffer Line Number


    static constexpr uint32_t L1CLUTWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L1CLUTWR_BLUE; // Blue value
    typedef bit_field_t<8, 0xff> L1CLUTWR_GREEN; // Green value
    typedef bit_field_t<16, 0xff> L1CLUTWR_RED; // Red value
    typedef bit_field_t<24, 0xff> L1CLUTWR_CLUTADD; // CLUT Address


    static constexpr uint32_t L2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t L2CR_LEN = 0x1; // Layer Enable
    static constexpr uint32_t L2CR_COLKEN = 0x2; // Color Keying Enable
    static constexpr uint32_t L2CR_CLUTEN = 0x10; // Color Look-Up Table Enable

    static constexpr uint32_t L2WHPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> L2WHPCR_WHSTPOS; // Window Horizontal Start Position
    typedef bit_field_t<16, 0xfff> L2WHPCR_WHSPPOS; // Window Horizontal Stop Position

    static constexpr uint32_t L2WVPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L2WVPCR_WVSTPOS; // Window Vertical Start Position
    typedef bit_field_t<16, 0x7ff> L2WVPCR_WVSPPOS; // Window Vertical Stop Position

    static constexpr uint32_t L2CKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L2CKCR_CKBLUE; // Color Key Blue value
    typedef bit_field_t<8, 0xff> L2CKCR_CKGREEN; // Color Key Green value
    typedef bit_field_t<16, 0xff> L2CKCR_CKRED; // Color Key Red value

    static constexpr uint32_t L2PFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L2PFCR_PF; // Pixel Format

    static constexpr uint32_t L2CACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L2CACR_CONSTA; // Constant Alpha

    static constexpr uint32_t L2DCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L2DCCR_DCBLUE; // Default Color Blue
    typedef bit_field_t<8, 0xff> L2DCCR_DCGREEN; // Default Color Green
    typedef bit_field_t<16, 0xff> L2DCCR_DCRED; // Default Color Red
    typedef bit_field_t<24, 0xff> L2DCCR_DCALPHA; // Default Color Alpha


    static constexpr uint32_t L2BFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L2BFCR_BF2; // Blending Factor 2
    typedef bit_field_t<8, 0x7> L2BFCR_BF1; // Blending Factor 1


    static constexpr uint32_t L2CFBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> L2CFBAR_CFBADD; // Color Frame Buffer Start Address

    static constexpr uint32_t L2CFBLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fff> L2CFBLR_CFBLL; // Color Frame Buffer Line Length
    typedef bit_field_t<16, 0x1fff> L2CFBLR_CFBP; // Color Frame Buffer Pitch in bytes

    static constexpr uint32_t L2CFBLNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L2CFBLNR_CFBLNBR; // Frame Buffer Line Number


    static constexpr uint32_t L2CLUTWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L2CLUTWR_BLUE; // Blue value
    typedef bit_field_t<8, 0xff> L2CLUTWR_GREEN; // Green value
    typedef bit_field_t<16, 0xff> L2CLUTWR_RED; // Red value
    typedef bit_field_t<24, 0xff> L2CLUTWR_CLUTADD; // CLUT Address
};

template<>
struct peripheral_t<STM32L4P5, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, LTCD>
{
    using T = stm32l4p5_ltcd_t;
    static T& V;
};

using ltcd_t = peripheral_t<svd, LTCD>;

template<int INST> struct lcd_traits {};
