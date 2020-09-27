#pragma once

////
//
//      STM32L5 DMA peripherals
//
///

// DMA1: Direct memory access controller

struct stm32l552_dma1_t
{
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t IFCR; // interrupt flag clear register
    volatile uint32_t CCR1; // channel x configuration register
    volatile uint32_t CNDTR1; // channel x number of data register
    volatile uint32_t CPAR1; // channel x peripheral address register
    volatile uint32_t CM0AR1; // channel x memory address register
    volatile uint32_t CM1AR1; // channel x memory address register
    volatile uint32_t CCR2; // channel x configuration register
    volatile uint32_t CNDTR2; // channel x number of data register
    volatile uint32_t CPAR2; // channel x peripheral address register
    volatile uint32_t CM0AR2; // channel x memory address register
    volatile uint32_t CM1AR2; // channel x memory address register
    volatile uint32_t CCR3; // channel x configuration register
    volatile uint32_t CNDTR3; // channel x number of data register
    volatile uint32_t CPAR3; // channel x peripheral address register
    volatile uint32_t CM0AR3; // channel x memory address register
    volatile uint32_t CM1AR3; // channel x memory address register
    volatile uint32_t CCR4; // channel x configuration register
    volatile uint32_t CNDTR4; // channel x number of data register
    volatile uint32_t CPAR4; // channel x peripheral address register
    volatile uint32_t CM0AR4; // channel x memory address register
    volatile uint32_t CM1AR4; // channel x memory address register
    volatile uint32_t CCR5; // channel x configuration register
    volatile uint32_t CNDTR5; // channel x number of data register
    volatile uint32_t CPAR5; // channel x peripheral address register
    volatile uint32_t CM0AR5; // channel x memory address register
    volatile uint32_t CM1AR5; // channel x memory address register
    volatile uint32_t CCR6; // channel x configuration register
    volatile uint32_t CNDTR6; // channel x number of data register
    volatile uint32_t CPAR6; // channel x peripheral address register
    volatile uint32_t CM0AR6; // channel x memory address register
    volatile uint32_t CM1AR6; // channel x memory address register
    volatile uint32_t CCR7; // channel x configuration register
    volatile uint32_t CNDTR7; // channel x number of data register
    volatile uint32_t CPAR7; // channel x peripheral address register
    volatile uint32_t CM0AR7; // channel x memory address register
    volatile uint32_t CM1AR7; // channel x memory address register
    volatile uint32_t CCR8; // channel x configuration register
    volatile uint32_t CNDTR8; // channel x number of data register
    volatile uint32_t CPAR8; // channel x peripheral address register
    volatile uint32_t CM0AR8; // channel x peripheral address register
    volatile uint32_t CM1AR8; // channel x peripheral address register
    volatile uint32_t CSELR; // channel selection register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF6 = 0x100000; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF5 = 0x10000; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF4 = 0x1000; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF3 = 0x800; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF3 = 0x400; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF3 = 0x200; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF3 = 0x100; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF2 = 0x80; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF2 = 0x40; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF2 = 0x20; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF2 = 0x10; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_TEIF1 = 0x8; // Channel x transfer error flag (x = 1 ..7)
    static constexpr uint32_t ISR_HTIF1 = 0x4; // Channel x half transfer flag (x = 1 ..7)
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel x transfer complete flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF1 = 0x1; // Channel x global interrupt flag (x = 1 ..7)
    static constexpr uint32_t ISR_GIF8 = 0x10000000; // global interrupt flag for channel 8
    static constexpr uint32_t ISR_TCIF8 = 0x20000000; // transfer complete (TC) flag for channel 8
    static constexpr uint32_t ISR_HTIF8 = 0x40000000; // half transfer (HT) flag for channel 8
    static constexpr uint32_t ISR_TEIF8 = 0x80000000; // transfer error (TE) flag for channel 8

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CTEIF7 = 0x8000000; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF7 = 0x4000000; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF7 = 0x2000000; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF7 = 0x1000000; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF6 = 0x800000; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF6 = 0x400000; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF6 = 0x200000; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF6 = 0x100000; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF5 = 0x80000; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF5 = 0x40000; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF5 = 0x20000; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF5 = 0x10000; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF4 = 0x8000; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF4 = 0x4000; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF4 = 0x2000; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF4 = 0x1000; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF3 = 0x800; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF3 = 0x400; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF3 = 0x200; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF3 = 0x100; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF2 = 0x80; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF2 = 0x40; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF2 = 0x20; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF2 = 0x10; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTEIF1 = 0x8; // Channel x transfer error clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CHTIF1 = 0x4; // Channel x half transfer clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel x transfer complete clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF1 = 0x1; // Channel x global interrupt clear (x = 1 ..7)
    static constexpr uint32_t IFCR_CGIF8 = 0x10000000; // global interrupt flag clear for channel 8
    static constexpr uint32_t IFCR_CTCIF8 = 0x20000000; // transfer complete flag clear for channel 8
    static constexpr uint32_t IFCR_CHTIF8 = 0x40000000; // half transfer flag clear for channel 8
    static constexpr uint32_t IFCR_CTEIF8 = 0x80000000; // transfer error flag clear for channel 8

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR1_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CCR1_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CCR1_SECM = 0x20000; // secure mode
    static constexpr uint32_t CCR1_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CCR1_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CCR1_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR1_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address

    static constexpr uint32_t CM0AR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR1_MA; // Memory address

    static constexpr uint32_t CM1AR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CM1AR1_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CM1AR1_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CM1AR1_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CM1AR1_PSIZE; // Peripheral size
    static constexpr uint32_t CM1AR1_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CM1AR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CM1AR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CM1AR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CM1AR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CM1AR1_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CM1AR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CM1AR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CM1AR1_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CM1AR1_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CM1AR1_SECM = 0x20000; // secure mode
    static constexpr uint32_t CM1AR1_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CM1AR1_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CM1AR1_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CCR2_NDT; // Number of data to transfer

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CNDTR2_PA; // Peripheral address

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_MA; // Memory address

    static constexpr uint32_t CM0AR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CM0AR2_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CM0AR2_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CM0AR2_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CM0AR2_PSIZE; // Peripheral size
    static constexpr uint32_t CM0AR2_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CM0AR2_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CM0AR2_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CM0AR2_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CM0AR2_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CM0AR2_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CM0AR2_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CM0AR2_EN = 0x1; // Channel enable
    static constexpr uint32_t CM0AR2_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CM0AR2_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CM0AR2_SECM = 0x20000; // secure mode
    static constexpr uint32_t CM0AR2_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CM0AR2_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CM0AR2_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CM1AR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CM1AR2_NDT; // Number of data to transfer

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR3_PA; // Peripheral address

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CNDTR3_MA; // Memory address

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPAR3_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CPAR3_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CPAR3_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CPAR3_PSIZE; // Peripheral size
    static constexpr uint32_t CPAR3_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CPAR3_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CPAR3_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CPAR3_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CPAR3_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CPAR3_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CPAR3_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CPAR3_EN = 0x1; // Channel enable
    static constexpr uint32_t CPAR3_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CPAR3_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CPAR3_SECM = 0x20000; // secure mode
    static constexpr uint32_t CPAR3_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CPAR3_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CPAR3_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CM0AR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CM0AR3_NDT; // Number of data to transfer

    static constexpr uint32_t CM1AR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM1AR3_PA; // Peripheral address

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR4_MA; // Memory address

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNDTR4_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CNDTR4_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CNDTR4_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CNDTR4_PSIZE; // Peripheral size
    static constexpr uint32_t CNDTR4_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CNDTR4_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CNDTR4_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CNDTR4_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CNDTR4_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CNDTR4_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CNDTR4_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CNDTR4_EN = 0x1; // Channel enable
    static constexpr uint32_t CNDTR4_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CNDTR4_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CNDTR4_SECM = 0x20000; // secure mode
    static constexpr uint32_t CNDTR4_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CNDTR4_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CNDTR4_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CPAR4_NDT; // Number of data to transfer

    static constexpr uint32_t CM0AR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR4_PA; // Peripheral address

    static constexpr uint32_t CM1AR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM1AR4_MA; // Memory address

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR5_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CCR5_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CCR5_SECM = 0x20000; // secure mode
    static constexpr uint32_t CCR5_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CCR5_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CCR5_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR5_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address

    static constexpr uint32_t CM0AR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR5_MA; // Memory address

    static constexpr uint32_t CM1AR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CM1AR5_MEM2MEM = 0x4000; // Memory to memory mode
    typedef bit_field_t<12, 0x3> CM1AR5_PL; // Channel priority level
    typedef bit_field_t<10, 0x3> CM1AR5_MSIZE; // Memory size
    typedef bit_field_t<8, 0x3> CM1AR5_PSIZE; // Peripheral size
    static constexpr uint32_t CM1AR5_MINC = 0x80; // Memory increment mode
    static constexpr uint32_t CM1AR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CM1AR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CM1AR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CM1AR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CM1AR5_HTIE = 0x4; // Half transfer interrupt enable
    static constexpr uint32_t CM1AR5_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CM1AR5_EN = 0x1; // Channel enable
    static constexpr uint32_t CM1AR5_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CM1AR5_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CM1AR5_SECM = 0x20000; // secure mode
    static constexpr uint32_t CM1AR5_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CM1AR5_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CM1AR5_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CCR6_NDT; // Number of data to transfer

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CNDTR6_PA; // Peripheral address

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_MA; // Memory address

    static constexpr uint32_t CM0AR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> CM0AR6_C7S; // DMA channel 7 selection
    typedef bit_field_t<20, 0xf> CM0AR6_C6S; // DMA channel 6 selection
    typedef bit_field_t<16, 0xf> CM0AR6_C5S; // DMA channel 5 selection
    typedef bit_field_t<12, 0xf> CM0AR6_C4S; // DMA channel 4 selection
    typedef bit_field_t<8, 0xf> CM0AR6_C3S; // DMA channel 3 selection
    typedef bit_field_t<4, 0xf> CM0AR6_C2S; // DMA channel 2 selection
    typedef bit_field_t<0, 0xf> CM0AR6_C1S; // DMA channel 1 selection

    static constexpr uint32_t CM1AR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM1AR6_MA; // peripheral address

    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR7_MA; // peripheral address

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CNDTR7_MA; // peripheral address

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_MA; // peripheral address

    static constexpr uint32_t CM0AR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR7_MA; // peripheral address

    static constexpr uint32_t CM1AR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM1AR7_MA; // peripheral address

    static constexpr uint32_t CCR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR8_MA; // peripheral address

    static constexpr uint32_t CNDTR8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNDTR8_EN = 0x1; // channel enable
    static constexpr uint32_t CNDTR8_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CNDTR8_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CNDTR8_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CNDTR8_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CNDTR8_CIRC = 0x20; // circular mode
    static constexpr uint32_t CNDTR8_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CNDTR8_MINC = 0x80; // memory increment mode
    typedef bit_field_t<8, 0x3> CNDTR8_PSIZE; // peripheral size
    typedef bit_field_t<10, 0x3> CNDTR8_MSIZE; // memory size
    typedef bit_field_t<12, 0x3> CNDTR8_PL; // priority level
    static constexpr uint32_t CNDTR8_MEM2MEM = 0x4000; // memory-to-memory mode
    static constexpr uint32_t CNDTR8_DBM = 0x8000; // double-buffer mode
    static constexpr uint32_t CNDTR8_CT = 0x10000; // current target memory of DMA transfer in double-buffer mode
    static constexpr uint32_t CNDTR8_SECM = 0x20000; // secure mode
    static constexpr uint32_t CNDTR8_SSEC = 0x40000; // security of the DMA transfer from the source
    static constexpr uint32_t CNDTR8_DSEC = 0x80000; // security of the DMA transfer to the destination
    static constexpr uint32_t CNDTR8_PRIV = 0x100000; // privileged mode

    static constexpr uint32_t CPAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CPAR8_NDT; // number of data to transfer

    static constexpr uint32_t CM0AR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR8_PA; // peripheral address

    static constexpr uint32_t CM1AR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM1AR8_MA; // peripheral address

    static constexpr uint32_t CSELR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSELR_MA; // peripheral address
};

template<>
struct peripheral_t<STM32L552, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_DMA1>
{
    static constexpr periph_t P = SEC_DMA1;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_DMA2>
{
    static constexpr periph_t P = SEC_DMA2;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_DMA1>
{
    static constexpr periph_t P = SEC_DMA1;
    using T = stm32l552_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_DMA2>
{
    static constexpr periph_t P = SEC_DMA2;
    using T = stm32l552_dma1_t;
    static T& V;
};

using dma1_t = peripheral_t<svd, DMA1>;
using dma2_t = peripheral_t<svd, DMA2>;
using sec_dma1_t = peripheral_t<svd, SEC_DMA1>;
using sec_dma2_t = peripheral_t<svd, SEC_DMA2>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<1>
{
    using dma = dma1_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_DMA1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA1RST;
    }
};

template<> struct dma_traits<2>
{
    using dma = dma2_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_DMA2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMA2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMA2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMA2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMA2RST;
    }
};
