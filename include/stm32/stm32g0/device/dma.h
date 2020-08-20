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

template<>
struct peripheral_t<STM32G030, DMA1>
{
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMA1>
{
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMA1>
{
    using T = stm32g030_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMA1>
{
    using T = stm32g070_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMA1>
{
    using T = stm32g070_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMA1>
{
    using T = stm32g070_dma_t;
    static T& V;
};

using dma1_t = peripheral_t<svd, DMA1>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<1>
{
    using dma = dma1_t;

    static constexpr int INST = 1;

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
