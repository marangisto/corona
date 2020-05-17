#pragma once

////
//
//      STM32G0 DMA peripherals
//
////

////
//
//      DMA controller
//
////

struct stm32g030_dma_t
{
    volatile uint32_t ISR;    // [read-only] low interrupt status register
    volatile uint32_t IFCR;   // [read-only] high interrupt status register
    volatile uint32_t CCR1;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR1; // [read-write] DMA channel x number of data register
    volatile uint32_t CPAR1;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR1;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCR2;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR2; // [read-write] DMA channel x number of data register
    volatile uint32_t CPAR2;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR2;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR3;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR3; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR3;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR3;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x44;
    volatile uint32_t CCR4;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR4; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR4;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR4;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x58;
    volatile uint32_t CCR5;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR5; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR5;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR5;  // [read-write] DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_GIF0 = 0x1;         // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF1 = 0x2;        // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF2 = 0x4;        // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF3 = 0x8;        // Channel transfer error flag
    static constexpr uint32_t ISR_GIF4 = 0x10;        // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF5 = 0x20;       // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF6 = 0x40;       // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF7 = 0x80;       // Channel transfer error flag
    static constexpr uint32_t ISR_GIF8 = 0x100;       // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF9 = 0x200;      // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF10 = 0x400;     // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF11 = 0x800;     // Channel transfer error flag
    static constexpr uint32_t ISR_GIF12 = 0x1000;     // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF13 = 0x2000;    // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF14 = 0x4000;    // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF15 = 0x8000;    // Channel transfer error flag
    static constexpr uint32_t ISR_GIF16 = 0x10000;    // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF17 = 0x20000;   // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF18 = 0x40000;   // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF19 = 0x80000;   // Channel transfer error flag
    static constexpr uint32_t ISR_GIF20 = 0x100000;   // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF21 = 0x200000;  // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF22 = 0x400000;  // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF23 = 0x800000;  // Channel transfer error flag
    static constexpr uint32_t ISR_GIF24 = 0x1000000;  // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IFCR_CGIF0 = 0x1;         // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF1 = 0x2;        // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF2 = 0x4;        // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF3 = 0x8;        // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF4 = 0x10;        // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF5 = 0x20;       // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF6 = 0x40;       // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF7 = 0x80;       // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF8 = 0x100;       // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF9 = 0x200;      // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF10 = 0x400;     // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF11 = 0x800;     // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF12 = 0x1000;     // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF13 = 0x2000;    // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF14 = 0x4000;    // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF15 = 0x8000;    // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF16 = 0x10000;    // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF17 = 0x20000;   // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF18 = 0x40000;   // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF19 = 0x80000;   // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF20 = 0x100000;   // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF21 = 0x200000;  // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF22 = 0x400000;  // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF23 = 0x800000;  // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF24 = 0x1000000;  // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR1_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR1_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR2_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR2_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR3_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR3_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR4_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR4_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR5_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR5_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR1_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR2_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR3_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR4_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR5_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0;
};


////
//
//      DMA controller
//
////

struct stm32g070_dma_t
{
    volatile uint32_t ISR;    // [read-only] low interrupt status register
    volatile uint32_t IFCR;   // [read-only] high interrupt status register
    volatile uint32_t CCR1;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR1; // [read-write] DMA channel x number of data register
    volatile uint32_t CPAR1;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR1;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCR2;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR2; // [read-write] DMA channel x number of data register
    volatile uint32_t CPAR2;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR2;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR3;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR3; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR3;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR3;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x44;
    volatile uint32_t CCR4;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR4; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR4;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR4;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x58;
    volatile uint32_t CCR5;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR5; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR5;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR5;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x6c;
    volatile uint32_t CCR6;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR6; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR6;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR6;  // [read-write] DMA channel x memory address register
    reserved_t<0x1> _0x80;
    volatile uint32_t CCR7;   // [read-write] DMA channel x configuration register
    volatile uint32_t CNDTR7; // [read-write] DMA channel x configuration register
    volatile uint32_t CPAR7;  // [read-write] DMA channel x peripheral address register
    volatile uint32_t CMAR7;  // [read-write] DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_GIF0 = 0x1;         // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF1 = 0x2;        // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF2 = 0x4;        // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF3 = 0x8;        // Channel transfer error flag
    static constexpr uint32_t ISR_GIF4 = 0x10;        // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF5 = 0x20;       // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF6 = 0x40;       // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF7 = 0x80;       // Channel transfer error flag
    static constexpr uint32_t ISR_GIF8 = 0x100;       // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF9 = 0x200;      // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF10 = 0x400;     // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF11 = 0x800;     // Channel transfer error flag
    static constexpr uint32_t ISR_GIF12 = 0x1000;     // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF13 = 0x2000;    // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF14 = 0x4000;    // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF15 = 0x8000;    // Channel transfer error flag
    static constexpr uint32_t ISR_GIF16 = 0x10000;    // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF17 = 0x20000;   // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF18 = 0x40000;   // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF19 = 0x80000;   // Channel transfer error flag
    static constexpr uint32_t ISR_GIF20 = 0x100000;   // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF21 = 0x200000;  // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF22 = 0x400000;  // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF23 = 0x800000;  // Channel transfer error flag
    static constexpr uint32_t ISR_GIF24 = 0x1000000;  // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IFCR_CGIF0 = 0x1;         // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF1 = 0x2;        // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF2 = 0x4;        // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF3 = 0x8;        // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF4 = 0x10;        // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF5 = 0x20;       // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF6 = 0x40;       // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF7 = 0x80;       // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF8 = 0x100;       // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF9 = 0x200;      // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF10 = 0x400;     // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF11 = 0x800;     // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF12 = 0x1000;     // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF13 = 0x2000;    // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF14 = 0x4000;    // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF15 = 0x8000;    // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF16 = 0x10000;    // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF17 = 0x20000;   // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF18 = 0x40000;   // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF19 = 0x80000;   // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF20 = 0x100000;   // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF21 = 0x200000;  // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF22 = 0x400000;  // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF23 = 0x800000;  // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF24 = 0x1000000;  // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR1_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR1_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR2_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR2_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR3_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR3_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR4_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR4_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR5_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR5_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR5_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR6_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR6_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR6_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR6_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR6_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR6_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR6_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR6_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR6_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR6_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR6_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CCR7_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR7_EN = 0x1;         // Channel enable
    static constexpr uint32_t CCR7_TCIE = 0x2;       // Transfer complete interrupt enable
    static constexpr uint32_t CCR7_HTIE = 0x4;       // Half transfer interrupt enable
    static constexpr uint32_t CCR7_TEIE = 0x8;       // Transfer error interrupt enable
    static constexpr uint32_t CCR7_DIR = 0x10;       // Data transfer direction
    static constexpr uint32_t CCR7_CIRC = 0x20;      // Circular mode
    static constexpr uint32_t CCR7_PINC = 0x40;      // Peripheral increment mode
    static constexpr uint32_t CCR7_MINC = 0x80;      // Memory increment mode
    template<uint32_t X>
    static constexpr uint32_t CCR7_PSIZE =           // Peripheral size
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR7_MSIZE =           // Memory size
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR7_PL =              // Channel priority level
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR1_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR2_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR3_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR4_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR5_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR6_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNDTR7_NDT =   // Number of data to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0;

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0;

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32G030, DMA>
{
    typedef stm32g030_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMA>
{
    typedef stm32g030_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMA>
{
    typedef stm32g030_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMA>
{
    typedef stm32g070_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMA>
{
    typedef stm32g070_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMA>
{
    typedef stm32g070_dma_t T;
    static T& V;
};

using dma_t = peripheral_t<mcu_svd, DMA>;

