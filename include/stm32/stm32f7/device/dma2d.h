#pragma once

////
//
//      STM32F7 DMA2D peripherals
//
////

////
//
//      DMA2D controller
//
////

struct stm32f745_dma2d_t
{
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t ISR;     // [read-only] Interrupt Status Register
    volatile uint32_t IFCR;    // [read-write] interrupt flag clear register
    volatile uint32_t FGMAR;   // [read-write] foreground memory address register
    volatile uint32_t FGOR;    // [read-write] foreground offset register
    volatile uint32_t BGMAR;   // [read-write] background memory address register
    volatile uint32_t BGOR;    // [read-write] background offset register
    volatile uint32_t FGPFCCR; // [read-write] foreground PFC control register
    volatile uint32_t FGCOLR;  // [read-write] foreground color register
    volatile uint32_t BGPFCCR; // [read-write] background PFC control register
    volatile uint32_t BGCOLR;  // [read-write] background color register
    volatile uint32_t FGCMAR;  // [read-write] foreground CLUT memory address register
    volatile uint32_t BGCMAR;  // [read-write] background CLUT memory address register
    volatile uint32_t OPFCCR;  // [read-write] output PFC control register
    volatile uint32_t OCOLR;   // [read-write] output color register
    volatile uint32_t OMAR;    // [read-write] output memory address register
    volatile uint32_t OOR;     // [read-write] output offset register
    volatile uint32_t NLR;     // [read-write] number of line register
    volatile uint32_t LWR;     // [read-write] line watermark register
    volatile uint32_t AMTCR;   // [read-write] AHB master timer configuration register
    reserved_t<0xec> _0x400;
    volatile uint32_t FGCLUT;  // [read-write] FGCLUT
    reserved_t<0xff> _0x800;
    volatile uint32_t BGCLUT;  // [read-write] BGCLUT

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_MODE =          // DMA2D mode
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CR_CEIE = 0x2000;  // Configuration Error Interrupt Enable
    static constexpr uint32_t CR_CTCIE = 0x1000; // CLUT transfer complete interrupt enable
    static constexpr uint32_t CR_CAEIE = 0x800;  // CLUT access error interrupt enable
    static constexpr uint32_t CR_TWIE = 0x400;   // Transfer watermark interrupt enable
    static constexpr uint32_t CR_TCIE = 0x200;   // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x100;   // Transfer error interrupt enable
    static constexpr uint32_t CR_ABORT = 0x4;    // Abort
    static constexpr uint32_t CR_SUSP = 0x2;     // Suspend
    static constexpr uint32_t CR_START = 0x1;    // Start

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_CEIF = 0x20;  // Configuration error interrupt flag
    static constexpr uint32_t ISR_CTCIF = 0x10; // CLUT transfer complete interrupt flag
    static constexpr uint32_t ISR_CAEIF = 0x8;  // CLUT access error interrupt flag
    static constexpr uint32_t ISR_TWIF = 0x4;   // Transfer watermark interrupt flag
    static constexpr uint32_t ISR_TCIF = 0x2;   // Transfer complete interrupt flag
    static constexpr uint32_t ISR_TEIF = 0x1;   // Transfer error interrupt flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IFCR_CCEIF = 0x20;  // Clear configuration error interrupt flag
    static constexpr uint32_t IFCR_CCTCIF = 0x10; // Clear CLUT transfer complete interrupt flag
    static constexpr uint32_t IFCR_CAECIF = 0x8;  // Clear CLUT access error interrupt flag
    static constexpr uint32_t IFCR_CTWIF = 0x4;   // Clear transfer watermark interrupt flag
    static constexpr uint32_t IFCR_CTCIF = 0x2;   // Clear transfer complete interrupt flag
    static constexpr uint32_t IFCR_CTEIF = 0x1;   // Clear Transfer error interrupt flag

    static constexpr uint32_t FGMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t FGOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FGOR_LO =   // Line offset
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t BGMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t BGOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BGOR_LO =   // Line offset
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t FGPFCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FGPFCCR_ALPHA =       // Alpha value
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGPFCCR_AM =          // Alpha mode
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGPFCCR_CS =          // CLUT size
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FGPFCCR_START = 0x20; // Start
    static constexpr uint32_t FGPFCCR_CCM = 0x10;   // CLUT color mode
    template<uint32_t X>
    static constexpr uint32_t FGPFCCR_CM =          // Color mode
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FGCOLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FGCOLR_RED =     // Red Value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGCOLR_GREEN =   // Green Value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGCOLR_BLUE =    // Blue Value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t BGPFCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BGPFCCR_ALPHA =       // Alpha value
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGPFCCR_AM =          // Alpha mode
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGPFCCR_CS =          // CLUT size
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t BGPFCCR_START = 0x20; // Start
    static constexpr uint32_t BGPFCCR_CCM = 0x10;   // CLUT Color mode
    template<uint32_t X>
    static constexpr uint32_t BGPFCCR_CM =          // Color mode
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BGCOLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BGCOLR_RED =     // Red Value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGCOLR_GREEN =   // Green Value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGCOLR_BLUE =    // Blue Value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FGCMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t BGCMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPFCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPFCCR_CM =   // Color mode
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t OCOLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OCOLR_APLHA =   // Alpha Channel Value
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OCOLR_RED =     // Red Value
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OCOLR_GREEN =   // Green Value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OCOLR_BLUE =    // Blue Value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t OMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t OOR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OOR_LO =   // Line Offset
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t NLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t NLR_PL =   // Pixel per lines
        bit_field_t<16, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t NLR_NL =   // Number of lines
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LWR_LW =   // Line watermark
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AMTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AMTCR_DT =      // Dead Time
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t AMTCR_EN = 0x1; // Enable

    static constexpr uint32_t FGCLUT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FGCLUT_APLHA =   // APLHA
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGCLUT_RED =     // RED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGCLUT_GREEN =   // GREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FGCLUT_BLUE =    // BLUE
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t BGCLUT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BGCLUT_APLHA =   // APLHA
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGCLUT_RED =     // RED
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGCLUT_GREEN =   // GREEN
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BGCLUT_BLUE =    // BLUE
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F745, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, DMA2D>
{
    typedef stm32f745_dma2d_t T;
    static T& V;
};

using dma2d_t = peripheral_t<mcu_svd, DMA2D>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<2D>
{
    using dma = dma2D_t;
};

