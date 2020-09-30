#pragma once

////
//
//      STM32F4 LTDC peripherals
//
///

// LTDC: LCD-TFT Controller

struct stm32f405_ltdc_t
{
    reserved_t<0x2> _0x0;
    volatile uint32_t SSCR; // Synchronization Size Configuration Register
    volatile uint32_t BPCR; // Back Porch Configuration Register
    volatile uint32_t AWCR; // Active Width Configuration Register
    volatile uint32_t TWCR; // Total Width Configuration Register
    volatile uint32_t GCR; // Global Control Register
    reserved_t<0x2> _0x1c;
    volatile uint32_t SRCR; // Shadow Reload Configuration Register
    reserved_t<0x1> _0x28;
    volatile uint32_t BCCR; // Background Color Configuration Register
    reserved_t<0x1> _0x30;
    volatile uint32_t IER; // Interrupt Enable Register
    volatile uint32_t ISR; // Interrupt Status Register
    volatile uint32_t ICR; // Interrupt Clear Register
    volatile uint32_t LIPCR; // Line Interrupt Position Configuration Register
    volatile uint32_t CPSR; // Current Position Status Register
    volatile uint32_t CDSR; // Current Display Status Register
    reserved_t<0xe> _0x4c;
    volatile uint32_t L1CR; // Layerx Control Register
    volatile uint32_t L1WHPCR; // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L1WVPCR; // Layerx Window Vertical Position Configuration Register
    volatile uint32_t L1CKCR; // Layerx Color Keying Configuration Register
    volatile uint32_t L1PFCR; // Layerx Pixel Format Configuration Register
    volatile uint32_t L1CACR; // Layerx Constant Alpha Configuration Register
    volatile uint32_t L1DCCR; // Layerx Default Color Configuration Register
    volatile uint32_t L1BFCR; // Layerx Blending Factors Configuration Register
    reserved_t<0x2> _0xa4;
    volatile uint32_t L1CFBAR; // Layerx Color Frame Buffer Address Register
    volatile uint32_t L1CFBLR; // Layerx Color Frame Buffer Length Register
    volatile uint32_t L1CFBLNR; // Layerx ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0xb8;
    volatile uint32_t L1CLUTWR; // Layerx CLUT Write Register
    reserved_t<0xf> _0xc8;
    volatile uint32_t L2CR; // Layerx Control Register
    volatile uint32_t L2WHPCR; // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L2WVPCR; // Layerx Window Vertical Position Configuration Register
    volatile uint32_t L2CKCR; // Layerx Color Keying Configuration Register
    volatile uint32_t L2PFCR; // Layerx Pixel Format Configuration Register
    volatile uint32_t L2CACR; // Layerx Constant Alpha Configuration Register
    volatile uint32_t L2DCCR; // Layerx Default Color Configuration Register
    volatile uint32_t L2BFCR; // Layerx Blending Factors Configuration Register
    reserved_t<0x2> _0x124;
    volatile uint32_t L2CFBAR; // Layerx Color Frame Buffer Address Register
    volatile uint32_t L2CFBLR; // Layerx Color Frame Buffer Length Register
    volatile uint32_t L2CFBLNR; // Layerx ColorFrame Buffer Line Number Register
    reserved_t<0x3> _0x138;
    volatile uint32_t L2CLUTWR; // Layerx CLUT Write Register


    static constexpr uint32_t SSCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3ff> SSCR_HSW; // Horizontal Synchronization Width (in units of pixel clock period)
    typedef bit_field_t<0, 0x7ff> SSCR_VSH; // Vertical Synchronization Height (in units of horizontal scan line)

    static constexpr uint32_t BPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3ff> BPCR_AHBP; // Accumulated Horizontal back porch (in units of pixel clock period)
    typedef bit_field_t<0, 0x7ff> BPCR_AVBP; // Accumulated Vertical back porch (in units of horizontal scan line)

    static constexpr uint32_t AWCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3ff> AWCR_AAV; // AAV
    typedef bit_field_t<0, 0x7ff> AWCR_AAH; // Accumulated Active Height (in units of horizontal scan line)

    static constexpr uint32_t TWCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3ff> TWCR_TOTALW; // Total Width (in units of pixel clock period)
    typedef bit_field_t<0, 0x7ff> TWCR_TOTALH; // Total Height (in units of horizontal scan line)

    static constexpr uint32_t GCR_RESET_VALUE = 0x2220; // Reset value
    static constexpr uint32_t GCR_HSPOL = 0x80000000; // Horizontal Synchronization Polarity
    static constexpr uint32_t GCR_VSPOL = 0x40000000; // Vertical Synchronization Polarity
    static constexpr uint32_t GCR_DEPOL = 0x20000000; // Data Enable Polarity
    static constexpr uint32_t GCR_PCPOL = 0x10000000; // Pixel Clock Polarity
    static constexpr uint32_t GCR_DEN = 0x10000; // Dither Enable
    typedef bit_field_t<12, 0x7> GCR_DRW; // Dither Red Width
    typedef bit_field_t<8, 0x7> GCR_DGW; // Dither Green Width
    typedef bit_field_t<4, 0x7> GCR_DBW; // Dither Blue Width
    static constexpr uint32_t GCR_LTDCEN = 0x1; // LCD-TFT controller enable bit


    static constexpr uint32_t SRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SRCR_VBR = 0x2; // Vertical Blanking Reload
    static constexpr uint32_t SRCR_IMR = 0x1; // Immediate Reload


    static constexpr uint32_t BCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> BCCR_BC; // Background Color Red value


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_RRIE = 0x8; // Register Reload interrupt enable
    static constexpr uint32_t IER_TERRIE = 0x4; // Transfer Error Interrupt Enable
    static constexpr uint32_t IER_FUIE = 0x2; // FIFO Underrun Interrupt Enable
    static constexpr uint32_t IER_LIE = 0x1; // Line Interrupt Enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_RRIF = 0x8; // Register Reload Interrupt Flag
    static constexpr uint32_t ISR_TERRIF = 0x4; // Transfer Error interrupt flag
    static constexpr uint32_t ISR_FUIF = 0x2; // FIFO Underrun Interrupt flag
    static constexpr uint32_t ISR_LIF = 0x1; // Line Interrupt flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_CRRIF = 0x8; // Clears Register Reload Interrupt Flag
    static constexpr uint32_t ICR_CTERRIF = 0x4; // Clears the Transfer Error Interrupt Flag
    static constexpr uint32_t ICR_CFUIF = 0x2; // Clears the FIFO Underrun Interrupt flag
    static constexpr uint32_t ICR_CLIF = 0x1; // Clears the Line Interrupt Flag

    static constexpr uint32_t LIPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> LIPCR_LIPOS; // Line Interrupt Position

    static constexpr uint32_t CPSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CPSR_CXPOS; // Current X Position
    typedef bit_field_t<0, 0xffff> CPSR_CYPOS; // Current Y Position

    static constexpr uint32_t CDSR_RESET_VALUE = 0xf; // Reset value
    static constexpr uint32_t CDSR_HSYNCS = 0x8; // Horizontal Synchronization display Status
    static constexpr uint32_t CDSR_VSYNCS = 0x4; // Vertical Synchronization display Status
    static constexpr uint32_t CDSR_HDES = 0x2; // Horizontal Data Enable display Status
    static constexpr uint32_t CDSR_VDES = 0x1; // Vertical Data Enable display Status


    static constexpr uint32_t L1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t L1CR_CLUTEN = 0x10; // Color Look-Up Table Enable
    static constexpr uint32_t L1CR_COLKEN = 0x2; // Color Keying Enable
    static constexpr uint32_t L1CR_LEN = 0x1; // Layer Enable

    static constexpr uint32_t L1WHPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xfff> L1WHPCR_WHSPPOS; // Window Horizontal Stop Position
    typedef bit_field_t<0, 0xfff> L1WHPCR_WHSTPOS; // Window Horizontal Start Position

    static constexpr uint32_t L1WVPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> L1WVPCR_WVSPPOS; // Window Vertical Stop Position
    typedef bit_field_t<0, 0x7ff> L1WVPCR_WVSTPOS; // Window Vertical Start Position

    static constexpr uint32_t L1CKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> L1CKCR_CKRED; // Color Key Red value
    typedef bit_field_t<8, 0xff> L1CKCR_CKGREEN; // Color Key Green value
    typedef bit_field_t<0, 0xff> L1CKCR_CKBLUE; // Color Key Blue value

    static constexpr uint32_t L1PFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L1PFCR_PF; // Pixel Format

    static constexpr uint32_t L1CACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L1CACR_CONSTA; // Constant Alpha

    static constexpr uint32_t L1DCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> L1DCCR_DCALPHA; // Default Color Alpha
    typedef bit_field_t<16, 0xff> L1DCCR_DCRED; // Default Color Red
    typedef bit_field_t<8, 0xff> L1DCCR_DCGREEN; // Default Color Green
    typedef bit_field_t<0, 0xff> L1DCCR_DCBLUE; // Default Color Blue

    static constexpr uint32_t L1BFCR_RESET_VALUE = 0x607; // Reset value
    typedef bit_field_t<8, 0x7> L1BFCR_BF1; // Blending Factor 1
    typedef bit_field_t<0, 0x7> L1BFCR_BF2; // Blending Factor 2


    static constexpr uint32_t L1CFBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> L1CFBAR_CFBADD; // Color Frame Buffer Start Address

    static constexpr uint32_t L1CFBLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1fff> L1CFBLR_CFBP; // Color Frame Buffer Pitch in bytes
    typedef bit_field_t<0, 0x1fff> L1CFBLR_CFBLL; // Color Frame Buffer Line Length

    static constexpr uint32_t L1CFBLNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L1CFBLNR_CFBLNBR; // Frame Buffer Line Number


    static constexpr uint32_t L1CLUTWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> L1CLUTWR_CLUTADD; // CLUT Address
    typedef bit_field_t<16, 0xff> L1CLUTWR_RED; // Red value
    typedef bit_field_t<8, 0xff> L1CLUTWR_GREEN; // Green value
    typedef bit_field_t<0, 0xff> L1CLUTWR_BLUE; // Blue value


    static constexpr uint32_t L2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t L2CR_CLUTEN = 0x10; // Color Look-Up Table Enable
    static constexpr uint32_t L2CR_COLKEN = 0x2; // Color Keying Enable
    static constexpr uint32_t L2CR_LEN = 0x1; // Layer Enable

    static constexpr uint32_t L2WHPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xfff> L2WHPCR_WHSPPOS; // Window Horizontal Stop Position
    typedef bit_field_t<0, 0xfff> L2WHPCR_WHSTPOS; // Window Horizontal Start Position

    static constexpr uint32_t L2WVPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> L2WVPCR_WVSPPOS; // Window Vertical Stop Position
    typedef bit_field_t<0, 0x7ff> L2WVPCR_WVSTPOS; // Window Vertical Start Position

    static constexpr uint32_t L2CKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<15, 0x1ff> L2CKCR_CKRED; // Color Key Red value
    typedef bit_field_t<8, 0x7f> L2CKCR_CKGREEN; // Color Key Green value
    typedef bit_field_t<0, 0xff> L2CKCR_CKBLUE; // Color Key Blue value

    static constexpr uint32_t L2PFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> L2PFCR_PF; // Pixel Format

    static constexpr uint32_t L2CACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> L2CACR_CONSTA; // Constant Alpha

    static constexpr uint32_t L2DCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> L2DCCR_DCALPHA; // Default Color Alpha
    typedef bit_field_t<16, 0xff> L2DCCR_DCRED; // Default Color Red
    typedef bit_field_t<8, 0xff> L2DCCR_DCGREEN; // Default Color Green
    typedef bit_field_t<0, 0xff> L2DCCR_DCBLUE; // Default Color Blue

    static constexpr uint32_t L2BFCR_RESET_VALUE = 0x607; // Reset value
    typedef bit_field_t<8, 0x7> L2BFCR_BF1; // Blending Factor 1
    typedef bit_field_t<0, 0x7> L2BFCR_BF2; // Blending Factor 2


    static constexpr uint32_t L2CFBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> L2CFBAR_CFBADD; // Color Frame Buffer Start Address

    static constexpr uint32_t L2CFBLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1fff> L2CFBLR_CFBP; // Color Frame Buffer Pitch in bytes
    typedef bit_field_t<0, 0x1fff> L2CFBLR_CFBLL; // Color Frame Buffer Line Length

    static constexpr uint32_t L2CFBLNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> L2CFBLNR_CFBLNBR; // Frame Buffer Line Number


    static constexpr uint32_t L2CLUTWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> L2CLUTWR_CLUTADD; // CLUT Address
    typedef bit_field_t<16, 0xff> L2CLUTWR_RED; // Red value
    typedef bit_field_t<8, 0xff> L2CLUTWR_GREEN; // Green value
    typedef bit_field_t<0, 0xff> L2CLUTWR_BLUE; // Blue value
};

template<>
struct peripheral_t<STM32F405, LTDC>
{
    static constexpr periph_t P = LTDC;
    using T = stm32f405_ltdc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, LTDC>
{
    static constexpr periph_t P = LTDC;
    using T = stm32f405_ltdc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, LTDC>
{
    static constexpr periph_t P = LTDC;
    using T = stm32f405_ltdc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, LTDC>
{
    static constexpr periph_t P = LTDC;
    using T = stm32f405_ltdc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, LTDC>
{
    static constexpr periph_t P = LTDC;
    using T = stm32f405_ltdc_t;
    static T& V;
};

using ltdc_t = peripheral_t<svd, LTDC>;

template<int INST> struct ltdc_traits {};

template<> struct ltdc_traits<0>
{
    using ltdc = ltdc_t;
    static constexpr signal_t B0 = LTDC_B0;
    static constexpr signal_t B1 = LTDC_B1;
    static constexpr signal_t B2 = LTDC_B2;
    static constexpr signal_t B3 = LTDC_B3;
    static constexpr signal_t B4 = LTDC_B4;
    static constexpr signal_t B5 = LTDC_B5;
    static constexpr signal_t B6 = LTDC_B6;
    static constexpr signal_t B7 = LTDC_B7;
    static constexpr signal_t CLK = LTDC_CLK;
    static constexpr signal_t DE = LTDC_DE;
    static constexpr signal_t G0 = LTDC_G0;
    static constexpr signal_t G1 = LTDC_G1;
    static constexpr signal_t G2 = LTDC_G2;
    static constexpr signal_t G3 = LTDC_G3;
    static constexpr signal_t G4 = LTDC_G4;
    static constexpr signal_t G5 = LTDC_G5;
    static constexpr signal_t G6 = LTDC_G6;
    static constexpr signal_t G7 = LTDC_G7;
    static constexpr signal_t HSYNC = LTDC_HSYNC;
    static constexpr signal_t R0 = LTDC_R0;
    static constexpr signal_t R1 = LTDC_R1;
    static constexpr signal_t R2 = LTDC_R2;
    static constexpr signal_t R3 = LTDC_R3;
    static constexpr signal_t R4 = LTDC_R4;
    static constexpr signal_t R5 = LTDC_R5;
    static constexpr signal_t R6 = LTDC_R6;
    static constexpr signal_t R7 = LTDC_R7;
    static constexpr signal_t VSYNC = LTDC_VSYNC;
    static constexpr clock_source_t CS = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_LTDCEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_LTDCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_LTDCRST;
    }
};
