#pragma once

////
//
//      STM32G4 DMA peripherals
//
////

////
//
//      DMA controller
//
////

struct stm32g431xx_dma1_t
{
    volatile uint32_t ISR;    // [read-only] interrupt status register
    volatile uint32_t IFCR;   // [write-only] DMA interrupt flag clear register
    volatile uint32_t CCR1;   // [read-write] DMA channel 1 configuration register
    volatile uint32_t CNDTR1; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR1;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR1;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCR2;   // [read-write] DMA channel 2 configuration register
    volatile uint32_t CNDTR2; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR2;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR2;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR3;   // [read-write] DMA channel 3 configuration register
    volatile uint32_t CNDTR3; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR3;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR3;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x44;
    volatile uint32_t CCR4;   // [read-write] DMA channel 3 configuration register
    volatile uint32_t CNDTR4; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR4;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR4;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x58;
    volatile uint32_t CCR5;   // [read-write] DMA channel 4 configuration register
    volatile uint32_t CNDTR5; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR5;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR5;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x6c;
    volatile uint32_t CCR6;   // [read-write] DMA channel 5 configuration register
    volatile uint32_t CNDTR6; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR6;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR6;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x80;
    volatile uint32_t CCR7;   // [read-write] DMA channel 6 configuration register
    volatile uint32_t CNDTR7; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR7;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR7;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x94;
    volatile uint32_t CCR8;   // [read-write] DMA channel 7 configuration register
    volatile uint32_t CNDTR8; // [read-write] channel x number of data to transfer register
    volatile uint32_t CPAR8;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR8;  // [read-write] DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_TEIF8 = 0x80000000; // TEIF8
    static constexpr uint32_t ISR_HTIF8 = 0x40000000; // HTIF8
    static constexpr uint32_t ISR_TCIF8 = 0x20000000; // TCIF8
    static constexpr uint32_t ISR_GIF8 = 0x10000000;  // GIF8
    static constexpr uint32_t ISR_TEIF7 = 0x8000000;  // TEIF7
    static constexpr uint32_t ISR_HTIF7 = 0x4000000;  // HTIF7
    static constexpr uint32_t ISR_TCIF7 = 0x2000000;  // TCIF7
    static constexpr uint32_t ISR_GIF7 = 0x1000000;   // GIF7
    static constexpr uint32_t ISR_TEIF6 = 0x800000;   // TEIF6
    static constexpr uint32_t ISR_HTIF6 = 0x400000;   // HTIF6
    static constexpr uint32_t ISR_TCIF6 = 0x200000;   // TCIF6
    static constexpr uint32_t ISR_GIF6 = 0x100000;    // GIF6
    static constexpr uint32_t ISR_TEIF5 = 0x80000;    // TEIF5
    static constexpr uint32_t ISR_HTIF5 = 0x40000;    // HTIF5
    static constexpr uint32_t ISR_TCIF5 = 0x20000;    // TCIF5
    static constexpr uint32_t ISR_GIF5 = 0x10000;     // GIF5
    static constexpr uint32_t ISR_TEIF4 = 0x8000;     // TEIF4
    static constexpr uint32_t ISR_HTIF4 = 0x4000;     // HTIF4
    static constexpr uint32_t ISR_TCIF4 = 0x2000;     // TCIF4
    static constexpr uint32_t ISR_GIF4 = 0x1000;      // GIF4
    static constexpr uint32_t ISR_TEIF3 = 0x800;      // TEIF3
    static constexpr uint32_t ISR_HTIF3 = 0x400;      // HTIF3
    static constexpr uint32_t ISR_TCIF3 = 0x200;      // TCIF3
    static constexpr uint32_t ISR_GIF3 = 0x100;       // GIF3
    static constexpr uint32_t ISR_TEIF2 = 0x80;       // TEIF2
    static constexpr uint32_t ISR_HTIF2 = 0x40;       // HTIF2
    static constexpr uint32_t ISR_TCIF2 = 0x20;       // TCIF2
    static constexpr uint32_t ISR_GIF2 = 0x10;        // GIF2
    static constexpr uint32_t ISR_TEIF1 = 0x8;        // TEIF1
    static constexpr uint32_t ISR_HTIF1 = 0x4;        // HTIF1
    static constexpr uint32_t ISR_TCIF1 = 0x2;        // TCIF1
    static constexpr uint32_t ISR_GIF1 = 0x1;         // GIF1

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IFCR_TEIF8 = 0x80000000; // TEIF8
    static constexpr uint32_t IFCR_HTIF8 = 0x40000000; // HTIF8
    static constexpr uint32_t IFCR_TCIF8 = 0x20000000; // TCIF8
    static constexpr uint32_t IFCR_GIF8 = 0x10000000;  // GIF8
    static constexpr uint32_t IFCR_TEIF7 = 0x8000000;  // TEIF7
    static constexpr uint32_t IFCR_HTIF7 = 0x4000000;  // HTIF7
    static constexpr uint32_t IFCR_TCIF7 = 0x2000000;  // TCIF7
    static constexpr uint32_t IFCR_GIF7 = 0x1000000;   // GIF7
    static constexpr uint32_t IFCR_TEIF6 = 0x800000;   // TEIF6
    static constexpr uint32_t IFCR_HTIF6 = 0x400000;   // HTIF6
    static constexpr uint32_t IFCR_TCIF6 = 0x200000;   // TCIF6
    static constexpr uint32_t IFCR_GIF6 = 0x100000;    // GIF6
    static constexpr uint32_t IFCR_TEIF5 = 0x80000;    // TEIF5
    static constexpr uint32_t IFCR_HTIF5 = 0x40000;    // HTIF5
    static constexpr uint32_t IFCR_TCIF5 = 0x20000;    // TCIF5
    static constexpr uint32_t IFCR_GIF5 = 0x10000;     // GIF5
    static constexpr uint32_t IFCR_TEIF4 = 0x8000;     // TEIF4
    static constexpr uint32_t IFCR_HTIF4 = 0x4000;     // HTIF4
    static constexpr uint32_t IFCR_TCIF4 = 0x2000;     // TCIF4
    static constexpr uint32_t IFCR_GIF4 = 0x1000;      // GIF4
    static constexpr uint32_t IFCR_TEIF3 = 0x800;      // TEIF3
    static constexpr uint32_t IFCR_HTIF3 = 0x400;      // HTIF3
    static constexpr uint32_t IFCR_TCIF3 = 0x200;      // TCIF3
    static constexpr uint32_t IFCR_GIF3 = 0x100;       // GIF3
    static constexpr uint32_t IFCR_TEIF2 = 0x80;       // TEIF2
    static constexpr uint32_t IFCR_HTIF2 = 0x40;       // HTIF2
    static constexpr uint32_t IFCR_TCIF2 = 0x20;       // TCIF2
    static constexpr uint32_t IFCR_GIF2 = 0x10;        // GIF2
    static constexpr uint32_t IFCR_TEIF1 = 0x8;        // TEIF1
    static constexpr uint32_t IFCR_HTIF1 = 0x4;        // HTIF1
    static constexpr uint32_t IFCR_TCIF1 = 0x2;        // TCIF1
    static constexpr uint32_t IFCR_GIF1 = 0x1;         // GIF1

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR1_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR1_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR1_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR1_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR1_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR1_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR1_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR1_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR2_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR2_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR2_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR2_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR2_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR2_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR2_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR2_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR3_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR3_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR3_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR3_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR3_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR3_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR3_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR3_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR4_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR4_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR4_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR4_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR4_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR4_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR4_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR4_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR5_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR5_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR5_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR5_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR5_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR5_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR5_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR5_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR6_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR6_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR6_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR6_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR6_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR6_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR6_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR6_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR6_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR6_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR6_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR7_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR7_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR7_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR7_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR7_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR7_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR7_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR7_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR7_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR7_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR7_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR7_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CCR8_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR8_EN = 0x1;         // channel enable
    static constexpr uint32_t CCR8_TCIE = 0x2;       // TCIE
    static constexpr uint32_t CCR8_HTIE = 0x4;       // HTIE
    static constexpr uint32_t CCR8_TEIE = 0x8;       // TEIE
    static constexpr uint32_t CCR8_DIR = 0x10;       // DIR
    static constexpr uint32_t CCR8_CIRC = 0x20;      // CIRC
    static constexpr uint32_t CCR8_PINC = 0x40;      // PINC
    static constexpr uint32_t CCR8_MINC = 0x80;      // MINC
    template<uint32_t X>
    static constexpr uint32_t CCR8_PSIZE =           // PSIZE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR8_MSIZE =           // MSIZE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR8_PL =              // PL
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR8_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR1_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR2_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR3_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR4_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR5_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR6_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR7_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR8_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR8_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR8_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32G431xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DMA1>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DMA2>
{
    typedef stm32g431xx_dma1_t T;
    static T& V;
};

using dma1_t = peripheral_t<mcu_svd, DMA1>;
using dma2_t = peripheral_t<mcu_svd, DMA2>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<1>
{
    using dma = dma1_t;
};

template<> struct dma_traits<2>
{
    using dma = dma2_t;
};

