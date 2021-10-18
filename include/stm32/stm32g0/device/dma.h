#pragma once

////
//
//      STM32G0 DMA peripherals
//
///

// DMA: DMA controller

struct stm32g030_dma_t
{
    volatile uint32_t ISR; // low interrupt status register
    volatile uint32_t IFCR; // high interrupt status register
    volatile uint32_t CCR1; // DMA channel x configuration register
    volatile uint32_t CNDTR1; // DMA channel x number of data register
    volatile uint32_t CPAR1; // DMA channel x peripheral address register
    volatile uint32_t CMAR1; // DMA channel x memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel x configuration register
    volatile uint32_t CNDTR2; // DMA channel x number of data register
    volatile uint32_t CPAR2; // DMA channel x peripheral address register
    volatile uint32_t CMAR2; // DMA channel x memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel x configuration register
    volatile uint32_t CNDTR3; // DMA channel x configuration register
    volatile uint32_t CPAR3; // DMA channel x peripheral address register
    volatile uint32_t CMAR3; // DMA channel x memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel x configuration register
    volatile uint32_t CNDTR4; // DMA channel x configuration register
    volatile uint32_t CPAR4; // DMA channel x peripheral address register
    volatile uint32_t CMAR4; // DMA channel x memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel x configuration register
    volatile uint32_t CNDTR5; // DMA channel x configuration register
    volatile uint32_t CPAR5; // DMA channel x peripheral address register
    volatile uint32_t CMAR5; // DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF0 = 0x1; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF2 = 0x4; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF3 = 0x8; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF4 = 0x10; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF5 = 0x20; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF6 = 0x40; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF7 = 0x80; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF8 = 0x100; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF9 = 0x200; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF10 = 0x400; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF11 = 0x800; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF12 = 0x1000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF13 = 0x2000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF14 = 0x4000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF15 = 0x8000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF16 = 0x10000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF17 = 0x20000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF18 = 0x40000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF19 = 0x80000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF20 = 0x100000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF21 = 0x200000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF22 = 0x400000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF23 = 0x800000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF24 = 0x1000000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF0 = 0x1; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF2 = 0x4; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF3 = 0x8; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF4 = 0x10; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF5 = 0x20; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF6 = 0x40; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF7 = 0x80; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF8 = 0x100; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF9 = 0x200; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF10 = 0x400; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF11 = 0x800; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF12 = 0x1000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF13 = 0x2000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF14 = 0x4000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF15 = 0x8000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF16 = 0x10000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF17 = 0x20000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF18 = 0x40000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF19 = 0x80000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF20 = 0x100000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF21 = 0x200000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF22 = 0x400000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF23 = 0x800000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF24 = 0x1000000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // Memory address


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel priority level
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // Memory address


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel priority level
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // Memory address


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel priority level
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // Memory address


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // Memory address
};

// DMA: DMA controller

struct stm32g070_dma_t
{
    volatile uint32_t ISR; // low interrupt status register
    volatile uint32_t IFCR; // high interrupt status register
    volatile uint32_t CCR1; // DMA channel x configuration register
    volatile uint32_t CNDTR1; // DMA channel x number of data register
    volatile uint32_t CPAR1; // DMA channel x peripheral address register
    volatile uint32_t CMAR1; // DMA channel x memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel x configuration register
    volatile uint32_t CNDTR2; // DMA channel x number of data register
    volatile uint32_t CPAR2; // DMA channel x peripheral address register
    volatile uint32_t CMAR2; // DMA channel x memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel x configuration register
    volatile uint32_t CNDTR3; // DMA channel x configuration register
    volatile uint32_t CPAR3; // DMA channel x peripheral address register
    volatile uint32_t CMAR3; // DMA channel x memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel x configuration register
    volatile uint32_t CNDTR4; // DMA channel x configuration register
    volatile uint32_t CPAR4; // DMA channel x peripheral address register
    volatile uint32_t CMAR4; // DMA channel x memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel x configuration register
    volatile uint32_t CNDTR5; // DMA channel x configuration register
    volatile uint32_t CPAR5; // DMA channel x peripheral address register
    volatile uint32_t CMAR5; // DMA channel x memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // DMA channel x configuration register
    volatile uint32_t CNDTR6; // DMA channel x configuration register
    volatile uint32_t CPAR6; // DMA channel x peripheral address register
    volatile uint32_t CMAR6; // DMA channel x memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // DMA channel x configuration register
    volatile uint32_t CNDTR7; // DMA channel x configuration register
    volatile uint32_t CPAR7; // DMA channel x peripheral address register
    volatile uint32_t CMAR7; // DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF0 = 0x1; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF2 = 0x4; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF3 = 0x8; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF4 = 0x10; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF5 = 0x20; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF6 = 0x40; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF7 = 0x80; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF8 = 0x100; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF9 = 0x200; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF10 = 0x400; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF11 = 0x800; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF12 = 0x1000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF13 = 0x2000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF14 = 0x4000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF15 = 0x8000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF16 = 0x10000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF17 = 0x20000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF18 = 0x40000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF19 = 0x80000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF20 = 0x100000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF21 = 0x200000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF22 = 0x400000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF23 = 0x800000; // Channel transfer error flag
    static constexpr uint32_t ISR_GIF24 = 0x1000000; // Channel global interrupt flag
    static constexpr uint32_t ISR_TCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t ISR_HTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t ISR_TEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF0 = 0x1; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF2 = 0x4; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF3 = 0x8; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF4 = 0x10; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF5 = 0x20; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF6 = 0x40; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF7 = 0x80; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF8 = 0x100; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF9 = 0x200; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF10 = 0x400; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF11 = 0x800; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF12 = 0x1000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF13 = 0x2000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF14 = 0x4000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF15 = 0x8000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF16 = 0x10000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF17 = 0x20000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF18 = 0x40000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF19 = 0x80000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF20 = 0x100000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF21 = 0x200000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF22 = 0x400000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF23 = 0x800000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF24 = 0x1000000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // Memory address


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel priority level
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // Memory address


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel priority level
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // Memory address


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel priority level
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // Memory address


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // Memory address


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR6_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR6_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR6_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR6_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR6_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR6_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR6_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR6_PL; // Channel priority level
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR6_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // Peripheral address

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR6_MA; // Memory address


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR7_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR7_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR7_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR7_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR7_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR7_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR7_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR7_PL; // Channel priority level
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // Memory address
};

// DMA: DMA controller

struct stm32g071_dma_t
{
    volatile uint32_t ISR; // low interrupt status register
    volatile uint32_t IFCR; // high interrupt status register
    volatile uint32_t CCR1; // DMA channel x configuration register
    volatile uint32_t CNDTR1; // DMA channel x number of data register
    volatile uint32_t CPAR1; // DMA channel x peripheral address register
    volatile uint32_t CMAR1; // DMA channel x memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel x configuration register
    volatile uint32_t CNDTR2; // DMA channel x number of data register
    volatile uint32_t CPAR2; // DMA channel x peripheral address register
    volatile uint32_t CMAR2; // DMA channel x memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel x configuration register
    volatile uint32_t CNDTR3; // DMA channel x configuration register
    volatile uint32_t CPAR3; // DMA channel x peripheral address register
    volatile uint32_t CMAR3; // DMA channel x memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel x configuration register
    volatile uint32_t CNDTR4; // DMA channel x configuration register
    volatile uint32_t CPAR4; // DMA channel x peripheral address register
    volatile uint32_t CMAR4; // DMA channel x memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel x configuration register
    volatile uint32_t CNDTR5; // DMA channel x configuration register
    volatile uint32_t CPAR5; // DMA channel x peripheral address register
    volatile uint32_t CMAR5; // DMA channel x memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // DMA channel x configuration register
    volatile uint32_t CNDTR6; // DMA channel x configuration register
    volatile uint32_t CPAR6; // DMA channel x peripheral address register
    volatile uint32_t CMAR6; // DMA channel x memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // DMA channel x configuration register
    volatile uint32_t CNDTR7; // DMA channel x configuration register
    volatile uint32_t CPAR7; // DMA channel x peripheral address register
    volatile uint32_t CMAR7; // DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF1 = 0x1; // global interrupt flag for channel 1
    static constexpr uint32_t ISR_TCIF1 = 0x2; // transfer complete (TC) flag for channel 1
    static constexpr uint32_t ISR_HTIF1 = 0x4; // half transfer (HT) flag for channel 1
    static constexpr uint32_t ISR_TEIF1 = 0x8; // transfer error (TE) flag for channel 1
    static constexpr uint32_t ISR_GIF2 = 0x10; // global interrupt flag for channel 2
    static constexpr uint32_t ISR_TCIF2 = 0x20; // transfer complete (TC) flag for channel 2
    static constexpr uint32_t ISR_HTIF2 = 0x40; // half transfer (HT) flag for channel 2
    static constexpr uint32_t ISR_TEIF2 = 0x80; // transfer error (TE) flag for channel 2
    static constexpr uint32_t ISR_GIF3 = 0x100; // global interrupt flag for channel 3
    static constexpr uint32_t ISR_TCIF3 = 0x200; // transfer complete (TC) flag for channel 3
    static constexpr uint32_t ISR_HTIF3 = 0x400; // half transfer (HT) flag for channel 3
    static constexpr uint32_t ISR_TEIF3 = 0x800; // transfer error (TE) flag for channel 3
    static constexpr uint32_t ISR_GIF4 = 0x1000; // global interrupt flag for channel 4
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // transfer complete (TC) flag for channel 4
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // half transfer (HT) flag for channel 4
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // transfer error (TE) flag for channel 4
    static constexpr uint32_t ISR_GIF5 = 0x10000; // global interrupt flag for channel 5
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // transfer complete (TC) flag for channel 5
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // half transfer (HT) flag for channel 5
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // transfer error (TE) flag for channel 5
    static constexpr uint32_t ISR_GIF6 = 0x100000; // global interrupt flag for channel 6
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // transfer complete (TC) flag for channel 6
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // half transfer (HT) flag for channel 6
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // transfer error (TE) flag for channel 6
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // global interrupt flag for channel 7
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // transfer complete (TC) flag for channel 7
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // half transfer (HT) flag for channel 7
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // transfer error (TE) flag for channel 7

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF0 = 0x1; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF2 = 0x4; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF3 = 0x8; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF4 = 0x10; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF5 = 0x20; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF6 = 0x40; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF7 = 0x80; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF8 = 0x100; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF9 = 0x200; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF10 = 0x400; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF11 = 0x800; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF12 = 0x1000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF13 = 0x2000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF14 = 0x4000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF15 = 0x8000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF16 = 0x10000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF17 = 0x20000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF18 = 0x40000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF19 = 0x80000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF20 = 0x100000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF21 = 0x200000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF22 = 0x400000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF23 = 0x800000; // Channel transfer error flag
    static constexpr uint32_t IFCR_CGIF24 = 0x1000000; // Channel global interrupt flag
    static constexpr uint32_t IFCR_CTCIF25 = 0x2000000; // Channel transfer complete flag
    static constexpr uint32_t IFCR_CHTIF26 = 0x4000000; // Channel half transfer flag
    static constexpr uint32_t IFCR_CTEIF27 = 0x8000000; // Channel transfer error flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // Memory address


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel priority level
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // Memory address


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel priority level
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // Memory address


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel priority level
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // Memory address


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // Memory address


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR6_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR6_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR6_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR6_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR6_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR6_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR6_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR6_PL; // Channel priority level
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR6_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // Peripheral address

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR6_MA; // Memory address


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR7_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR7_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR7_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR7_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR7_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR7_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR7_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR7_PL; // Channel priority level
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // Memory address
};

// DMA1: Direct memory access controller

struct stm32g0b1_dma1_t
{
    volatile uint32_t DMA_ISR; // DMA interrupt status register
    volatile uint32_t DMA_IFCR; // DMA interrupt flag clear register
    volatile uint32_t DMA_CCR1; // DMA channel 1 configuration register
    volatile uint32_t DMA_CNDTR1; // DMA channel 1 number of data to transfer register
    volatile uint32_t DMA_CPAR1; // DMA channel 1 peripheral address register
    volatile uint32_t DMA_CMAR1; // DMA channel 1 memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t DMA_CCR2; // DMA channel 2 configuration register
    volatile uint32_t DMA_CNDTR2; // DMA channel 2 number of data to transfer register
    volatile uint32_t DMA_CPAR2; // DMA channel 2 peripheral address register
    volatile uint32_t DMA_CMAR2; // DMA channel 2 memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t DMA_CCR3; // DMA channel 3 configuration register
    volatile uint32_t DMA_CNDTR3; // DMA channel 3 number of data to transfer register
    volatile uint32_t DMA_CPAR3; // DMA channel 3 peripheral address register
    volatile uint32_t DMA_CMAR3; // DMA channel 3 memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t DMA_CCR4; // DMA channel 4 configuration register
    volatile uint32_t DMA_CNDTR4; // DMA channel 4 number of data to transfer register
    volatile uint32_t DMA_CPAR4; // DMA channel 4 peripheral address register
    volatile uint32_t DMA_CMAR4; // DMA channel 4 memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t DMA_CCR5; // DMA channel 5 configuration register
    volatile uint32_t DMA_CNDTR5; // DMA channel 5 number of data to transfer register
    volatile uint32_t DMA_CPAR5; // DMA channel 5 peripheral address register
    volatile uint32_t DMA_CMAR5; // DMA channel 5 memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t DMA_CCR6; // DMA channel 6 configuration register
    volatile uint32_t DMA_CNDTR6; // DMA channel 6 number of data to transfer register
    volatile uint32_t DMA_CPAR6; // DMA channel 6 peripheral address register
    volatile uint32_t DMA_CMAR6; // DMA channel 6 memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t DMA_CCR7; // DMA channel 7 configuration register
    volatile uint32_t DMA_CNDTR7; // DMA channel 7 number of data to transfer register
    volatile uint32_t DMA_CPAR7; // DMA channel 7 peripheral address register
    volatile uint32_t DMA_CMAR7; // DMA channel 7 memory address register

    static constexpr uint32_t DMA_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_ISR_GIF1 = 0x1; // global interrupt flag for channel 1
    static constexpr uint32_t DMA_ISR_TCIF1 = 0x2; // transfer complete (TC) flag for channel 1
    static constexpr uint32_t DMA_ISR_HTIF1 = 0x4; // half transfer (HT) flag for channel 1
    static constexpr uint32_t DMA_ISR_TEIF1 = 0x8; // transfer error (TE) flag for channel 1
    static constexpr uint32_t DMA_ISR_GIF2 = 0x10; // global interrupt flag for channel 2
    static constexpr uint32_t DMA_ISR_TCIF2 = 0x20; // transfer complete (TC) flag for channel 2
    static constexpr uint32_t DMA_ISR_HTIF2 = 0x40; // half transfer (HT) flag for channel 2
    static constexpr uint32_t DMA_ISR_TEIF2 = 0x80; // transfer error (TE) flag for channel 2
    static constexpr uint32_t DMA_ISR_GIF3 = 0x100; // global interrupt flag for channel 3
    static constexpr uint32_t DMA_ISR_TCIF3 = 0x200; // transfer complete (TC) flag for channel 3
    static constexpr uint32_t DMA_ISR_HTIF3 = 0x400; // half transfer (HT) flag for channel 3
    static constexpr uint32_t DMA_ISR_TEIF3 = 0x800; // transfer error (TE) flag for channel 3
    static constexpr uint32_t DMA_ISR_GIF4 = 0x1000; // global interrupt flag for channel 4
    static constexpr uint32_t DMA_ISR_TCIF4 = 0x2000; // transfer complete (TC) flag for channel 4
    static constexpr uint32_t DMA_ISR_HTIF4 = 0x4000; // half transfer (HT) flag for channel 4
    static constexpr uint32_t DMA_ISR_TEIF4 = 0x8000; // transfer error (TE) flag for channel 4
    static constexpr uint32_t DMA_ISR_GIF5 = 0x10000; // global interrupt flag for channel 5
    static constexpr uint32_t DMA_ISR_TCIF5 = 0x20000; // transfer complete (TC) flag for channel 5
    static constexpr uint32_t DMA_ISR_HTIF5 = 0x40000; // half transfer (HT) flag for channel 5
    static constexpr uint32_t DMA_ISR_TEIF5 = 0x80000; // transfer error (TE) flag for channel 5
    static constexpr uint32_t DMA_ISR_GIF6 = 0x100000; // global interrupt flag for channel 6
    static constexpr uint32_t DMA_ISR_TCIF6 = 0x200000; // transfer complete (TC) flag for channel 6
    static constexpr uint32_t DMA_ISR_HTIF6 = 0x400000; // half transfer (HT) flag for channel 6
    static constexpr uint32_t DMA_ISR_TEIF6 = 0x800000; // transfer error (TE) flag for channel 6
    static constexpr uint32_t DMA_ISR_GIF7 = 0x1000000; // global interrupt flag for channel 7
    static constexpr uint32_t DMA_ISR_TCIF7 = 0x2000000; // transfer complete (TC) flag for channel 7
    static constexpr uint32_t DMA_ISR_HTIF7 = 0x4000000; // half transfer (HT) flag for channel 7
    static constexpr uint32_t DMA_ISR_TEIF7 = 0x8000000; // transfer error (TE) flag for channel 7

    static constexpr uint32_t DMA_IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_IFCR_CGIF1 = 0x1; // global interrupt flag clear for channel 1
    static constexpr uint32_t DMA_IFCR_CTCIF1 = 0x2; // transfer complete flag clear for channel 1
    static constexpr uint32_t DMA_IFCR_CHTIF1 = 0x4; // half transfer flag clear for channel 1
    static constexpr uint32_t DMA_IFCR_CTEIF1 = 0x8; // transfer error flag clear for channel 1
    static constexpr uint32_t DMA_IFCR_CGIF2 = 0x10; // global interrupt flag clear for channel 2
    static constexpr uint32_t DMA_IFCR_CTCIF2 = 0x20; // transfer complete flag clear for channel 2
    static constexpr uint32_t DMA_IFCR_CHTIF2 = 0x40; // half transfer flag clear for channel 2
    static constexpr uint32_t DMA_IFCR_CTEIF2 = 0x80; // transfer error flag clear for channel 2
    static constexpr uint32_t DMA_IFCR_CGIF3 = 0x100; // global interrupt flag clear for channel 3
    static constexpr uint32_t DMA_IFCR_CTCIF3 = 0x200; // transfer complete flag clear for channel 3
    static constexpr uint32_t DMA_IFCR_CHTIF3 = 0x400; // half transfer flag clear for channel 3
    static constexpr uint32_t DMA_IFCR_CTEIF3 = 0x800; // transfer error flag clear for channel 3
    static constexpr uint32_t DMA_IFCR_CGIF4 = 0x1000; // global interrupt flag clear for channel 4
    static constexpr uint32_t DMA_IFCR_CTCIF4 = 0x2000; // transfer complete flag clear for channel 4
    static constexpr uint32_t DMA_IFCR_CHTIF4 = 0x4000; // half transfer flag clear for channel 4
    static constexpr uint32_t DMA_IFCR_CTEIF4 = 0x8000; // transfer error flag clear for channel 4
    static constexpr uint32_t DMA_IFCR_CGIF5 = 0x10000; // global interrupt flag clear for channel 5
    static constexpr uint32_t DMA_IFCR_CTCIF5 = 0x20000; // transfer complete flag clear for channel 5
    static constexpr uint32_t DMA_IFCR_CHTIF5 = 0x40000; // half transfer flag clear for channel 5
    static constexpr uint32_t DMA_IFCR_CTEIF5 = 0x80000; // transfer error flag clear for channel 5
    static constexpr uint32_t DMA_IFCR_CGIF6 = 0x100000; // global interrupt flag clear for channel 6
    static constexpr uint32_t DMA_IFCR_CTCIF6 = 0x200000; // transfer complete flag clear for channel 6
    static constexpr uint32_t DMA_IFCR_CHTIF6 = 0x400000; // half transfer flag clear for channel 6
    static constexpr uint32_t DMA_IFCR_CTEIF6 = 0x800000; // transfer error flag clear for channel 6
    static constexpr uint32_t DMA_IFCR_CGIF7 = 0x1000000; // global interrupt flag clear for channel 7
    static constexpr uint32_t DMA_IFCR_CTCIF7 = 0x2000000; // transfer complete flag clear for channel 7
    static constexpr uint32_t DMA_IFCR_CHTIF7 = 0x4000000; // half transfer flag clear for channel 7
    static constexpr uint32_t DMA_IFCR_CTEIF7 = 0x8000000; // transfer error flag clear for channel 7

    static constexpr uint32_t DMA_CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR1_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR1_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR1_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR1_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR1_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR1_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR1_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR1_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR1_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR2_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR2_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR2_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR2_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR2_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR2_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR2_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR2_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR2_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR3_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR3_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR3_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR3_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR3_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR3_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR3_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR3_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR3_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR4_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR4_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR4_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR4_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR4_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR4_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR4_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR4_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR4_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR5_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR5_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR5_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR5_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR5_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR5_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR5_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR5_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR5_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR6_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR6_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR6_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR6_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR6_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR6_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR6_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR6_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR6_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).


    static constexpr uint32_t DMA_CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMA_CCR7_EN = 0x1; // channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software.
    static constexpr uint32_t DMA_CCR7_TCIE = 0x2; // transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_HTIE = 0x4; // half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_TEIE = 0x8; // transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_DIR = 0x10; // data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_CIRC = 0x20; // circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_PINC = 0x40; // peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_MINC = 0x80; // memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<8, 0x3> DMA_CCR7_PSIZE; // peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<10, 0x3> DMA_CCR7_MSIZE; // memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    typedef bit_field_t<12, 0x3> DMA_CCR7_PL; // priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).
    static constexpr uint32_t DMA_CCR7_MEM2MEM = 0x4000; // memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMA_CNDTR7_NDT; // number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA &#39;read followed by write transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CPAR7_PA; // peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).

    static constexpr uint32_t DMA_CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMA_CMAR7_MA; // peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1).
};

template<>
struct peripheral_t<STM32G030, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g070_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g070_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g071_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g0b1_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g0b1_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g0b1_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g0b1_dma1_t;
    static T& V;
};

using dma1_t = peripheral_t<svd, DMA1>;
using dma2_t = peripheral_t<svd, DMA2>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<1>
{
    using dma = dma1_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_DMA1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_DMA1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_DMA1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMA1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_DMA1RST;
    }
};

template<> struct dma_traits<2>
{
    using dma = dma2_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_DMA2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_DMA2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_DMA2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_DMA2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_DMA2RST;
    }
};
