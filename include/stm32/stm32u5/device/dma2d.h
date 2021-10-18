#pragma once

////
//
//      STM32U5 DMA2D peripherals
//
///

// DMA2D: DMA2D controller

struct stm32u5xx_dma2d_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t ISR; // Interrupt Status Register
    volatile uint32_t IFCR; // interrupt flag clear register
    volatile uint32_t FGMAR; // foreground memory address register
    volatile uint32_t FGOR; // foreground offset register
    volatile uint32_t BGMAR; // background memory address register
    volatile uint32_t BGOR; // background offset register
    volatile uint32_t FGPFCCR; // foreground PFC control register
    volatile uint32_t FGCOLR; // foreground color register
    volatile uint32_t BGPFCCR; // background PFC control register
    volatile uint32_t BGCOLR; // background color register
    volatile uint32_t FGCMAR; // foreground CLUT memory address register
    volatile uint32_t BGCMAR; // background CLUT memory address register
    volatile uint32_t OPFCCR; // output PFC control register
    volatile uint32_t OCOLR_RGB888; // output color register
    volatile uint32_t OMAR; // output memory address register
    volatile uint32_t OOR; // output offset register
    volatile uint32_t NLR; // number of line register
    volatile uint32_t LWR; // line watermark register
    volatile uint32_t AMTCR; // AHB master timer configuration register
    reserved_t<0xec> _0x50;
    volatile uint32_t FGCLUT; // FGCLUT
    reserved_t<0xff> _0x404;
    volatile uint32_t BGCLUT; // BGCLUT

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3> CR_MODE; // DMA2D mode
    static constexpr uint32_t CR_CEIE = 0x2000; // Configuration Error Interrupt Enable
    static constexpr uint32_t CR_CTCIE = 0x1000; // CLUT transfer complete interrupt enable
    static constexpr uint32_t CR_CAEIE = 0x800; // CLUT access error interrupt enable
    static constexpr uint32_t CR_TWIE = 0x400; // Transfer watermark interrupt enable
    static constexpr uint32_t CR_TCIE = 0x200; // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x100; // Transfer error interrupt enable
    static constexpr uint32_t CR_LOM = 0x40; // Line Offset Mode
    static constexpr uint32_t CR_ABORT = 0x4; // Abort
    static constexpr uint32_t CR_SUSP = 0x2; // Suspend
    static constexpr uint32_t CR_START = 0x1; // Start

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_CEIF = 0x20; // Configuration error interrupt flag
    static constexpr uint32_t ISR_CTCIF = 0x10; // CLUT transfer complete interrupt flag
    static constexpr uint32_t ISR_CAEIF = 0x8; // CLUT access error interrupt flag
    static constexpr uint32_t ISR_TWIF = 0x4; // Transfer watermark interrupt flag
    static constexpr uint32_t ISR_TCIF = 0x2; // Transfer complete interrupt flag
    static constexpr uint32_t ISR_TEIF = 0x1; // Transfer error interrupt flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CCEIF = 0x20; // Clear configuration error interrupt flag
    static constexpr uint32_t IFCR_CCTCIF = 0x10; // Clear CLUT transfer complete interrupt flag
    static constexpr uint32_t IFCR_CAECIF = 0x8; // Clear CLUT access error interrupt flag
    static constexpr uint32_t IFCR_CTWIF = 0x4; // Clear transfer watermark interrupt flag
    static constexpr uint32_t IFCR_CTCIF = 0x2; // Clear transfer complete interrupt flag
    static constexpr uint32_t IFCR_CTEIF = 0x1; // Clear Transfer error interrupt flag

    static constexpr uint32_t FGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FGMAR_MA; // Memory address

    static constexpr uint32_t FGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FGOR_LO; // Line offset

    static constexpr uint32_t BGMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGMAR_MA; // Memory address

    static constexpr uint32_t BGOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BGOR_LO; // Line offset

    static constexpr uint32_t FGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FGPFCCR_ALPHA; // Alpha value
    static constexpr uint32_t FGPFCCR_RBS = 0x200000; // Red Blue Swap
    static constexpr uint32_t FGPFCCR_AI = 0x100000; // Alpha Inverted
    typedef bit_field_t<16, 0x3> FGPFCCR_AM; // Alpha mode
    typedef bit_field_t<8, 0xff> FGPFCCR_CS; // CLUT size
    static constexpr uint32_t FGPFCCR_START = 0x20; // Start
    static constexpr uint32_t FGPFCCR_CCM = 0x10; // CLUT color mode
    typedef bit_field_t<0, 0xf> FGPFCCR_CM; // Color mode

    static constexpr uint32_t FGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> FGCOLR_RED; // Red Value
    typedef bit_field_t<8, 0xff> FGCOLR_GREEN; // Green Value
    typedef bit_field_t<0, 0xff> FGCOLR_BLUE; // Blue Value

    static constexpr uint32_t BGPFCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> BGPFCCR_ALPHA; // Alpha value
    static constexpr uint32_t BGPFCCR_RBS = 0x200000; // Red Blue Swap
    static constexpr uint32_t BGPFCCR_AI = 0x100000; // Alpha Inverted
    typedef bit_field_t<16, 0x3> BGPFCCR_AM; // Alpha mode
    typedef bit_field_t<8, 0xff> BGPFCCR_CS; // CLUT size
    static constexpr uint32_t BGPFCCR_START = 0x20; // Start
    static constexpr uint32_t BGPFCCR_CCM = 0x10; // CLUT Color mode
    typedef bit_field_t<0, 0xf> BGPFCCR_CM; // Color mode

    static constexpr uint32_t BGCOLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> BGCOLR_RED; // Red Value
    typedef bit_field_t<8, 0xff> BGCOLR_GREEN; // Green Value
    typedef bit_field_t<0, 0xff> BGCOLR_BLUE; // Blue Value

    static constexpr uint32_t FGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FGCMAR_MA; // Memory Address

    static constexpr uint32_t BGCMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BGCMAR_MA; // Memory address

    static constexpr uint32_t OPFCCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPFCCR_RBS = 0x200000; // Red Blue Swap
    static constexpr uint32_t OPFCCR_AI = 0x100000; // Alpha Inverted
    static constexpr uint32_t OPFCCR_SB = 0x200; // Swap Bytes
    typedef bit_field_t<0, 0x7> OPFCCR_CM; // Color mode

    static constexpr uint32_t OCOLR_RGB888_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OCOLR_RGB888_A = 0x8000; // Alpha channel value in ARGB1555 mode
    typedef bit_field_t<12, 0xf> OCOLR_RGB888_ALPHA; // Alpha channel value in ARGB4444
    typedef bit_field_t<24, 0xff> OCOLR_RGB888_APLHA; // Alpha Channel Value
    typedef bit_field_t<0, 0xff> OCOLR_RGB888_BLUE; // Blue Value
    typedef bit_field_t<8, 0xff> OCOLR_RGB888_GREEN; // Green Value
    typedef bit_field_t<16, 0xff> OCOLR_RGB888_RED; // Red Value

    static constexpr uint32_t OMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OMAR_MA; // Memory Address

    static constexpr uint32_t OOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OOR_LO; // Line Offset

    static constexpr uint32_t NLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3fff> NLR_PL; // Pixel per lines
    typedef bit_field_t<0, 0xffff> NLR_NL; // Number of lines

    static constexpr uint32_t LWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LWR_LW; // Line watermark

    static constexpr uint32_t AMTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> AMTCR_DT; // Dead Time
    static constexpr uint32_t AMTCR_EN = 0x1; // Enable


    static constexpr uint32_t FGCLUT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> FGCLUT_APLHA; // APLHA
    typedef bit_field_t<16, 0xff> FGCLUT_RED; // RED
    typedef bit_field_t<8, 0xff> FGCLUT_GREEN; // GREEN
    typedef bit_field_t<0, 0xff> FGCLUT_BLUE; // BLUE


    static constexpr uint32_t BGCLUT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> BGCLUT_APLHA; // APLHA
    typedef bit_field_t<16, 0xff> BGCLUT_RED; // RED
    typedef bit_field_t<8, 0xff> BGCLUT_GREEN; // GREEN
    typedef bit_field_t<0, 0xff> BGCLUT_BLUE; // BLUE
};

template<>
struct peripheral_t<STM32U5xx, DMA2D>
{
    static constexpr periph_t P = DMA2D;
    using T = stm32u5xx_dma2d_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DMA2D>
{
    static constexpr periph_t P = SEC_DMA2D;
    using T = stm32u5xx_dma2d_t;
    static T& V;
};

using dma2d_t = peripheral_t<svd, DMA2D>;
using sec_dma2d_t = peripheral_t<svd, SEC_DMA2D>;
