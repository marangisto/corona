#pragma once

////
//
//      STM32H7 BDMA peripherals
//
///

// BDMA: BDMA

struct stm32h742x_bdma_t
{
    volatile uint32_t ISR; // DMA interrupt status register
    volatile uint32_t IFCR; // DMA interrupt flag clear register
    volatile uint32_t CCR1; // DMA channel x configuration register
    volatile uint32_t CNDTR1; // DMA channel x number of data register
    volatile uint32_t CPAR1; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR1; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel x configuration register
    volatile uint32_t CNDTR2; // DMA channel x number of data register
    volatile uint32_t CPAR2; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR2; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel x configuration register
    volatile uint32_t CNDTR3; // DMA channel x number of data register
    volatile uint32_t CPAR3; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR3; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel x configuration register
    volatile uint32_t CNDTR4; // DMA channel x number of data register
    volatile uint32_t CPAR4; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR4; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel x configuration register
    volatile uint32_t CNDTR5; // DMA channel x number of data register
    volatile uint32_t CPAR5; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR5; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // DMA channel x configuration register
    volatile uint32_t CNDTR6; // DMA channel x number of data register
    volatile uint32_t CPAR6; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR6; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // DMA channel x configuration register
    volatile uint32_t CNDTR7; // DMA channel x number of data register
    volatile uint32_t CPAR7; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR7; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x90;
    volatile uint32_t CCR8; // DMA channel x configuration register
    volatile uint32_t CNDTR8; // DMA channel x number of data register
    volatile uint32_t CPAR8; // This register must not be written when the channel is enabled.
    volatile uint32_t CMAR8; // This register must not be written when the channel is enabled.

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF1 = 0x1; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF1 = 0x4; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF1 = 0x8; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF2 = 0x10; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF2 = 0x20; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF2 = 0x40; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF2 = 0x80; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF3 = 0x100; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF3 = 0x200; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF3 = 0x400; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF3 = 0x800; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF4 = 0x1000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF5 = 0x10000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF6 = 0x100000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF8 = 0x10000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF8 = 0x20000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF8 = 0x40000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF8 = 0x80000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF1 = 0x1; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF1 = 0x4; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF1 = 0x8; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF2 = 0x10; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF2 = 0x20; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF2 = 0x40; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF2 = 0x80; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF3 = 0x100; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF3 = 0x200; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF3 = 0x400; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF3 = 0x800; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF4 = 0x1000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF4 = 0x2000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF4 = 0x4000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF4 = 0x8000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF5 = 0x10000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF5 = 0x20000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF5 = 0x40000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF5 = 0x80000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF6 = 0x100000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF6 = 0x200000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF6 = 0x400000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF6 = 0x800000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF7 = 0x1000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF7 = 0x2000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF7 = 0x4000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF7 = 0x8000000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF8 = 0x10000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF8 = 0x20000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF8 = 0x40000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF8 = 0x80000000; // Channel x transfer error clear This bit is set and cleared by software.

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR6_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR6_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR6_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR6_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR6_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR6_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR7_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR7_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR7_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR7_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR8_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR8_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR8_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR8_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR8_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR8_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR8_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR8_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR8_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR8_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR8_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR8_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR8_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR8_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CMAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR8_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
};

// BDMA: BDMA

struct stm32h750x_bdma_t
{
    volatile uint32_t BDMA_ISR; // DMA interrupt status register
    volatile uint32_t BDMA_IFCR; // DMA interrupt flag clear register
    volatile uint32_t BDMA_CCR1; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR1; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR1; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR1; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x18;
    volatile uint32_t BDMA_CCR2; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR2; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR2; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR2; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x2c;
    volatile uint32_t BDMA_CCR3; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR3; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR3; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR3; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x40;
    volatile uint32_t BDMA_CCR4; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR4; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR4; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR4; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x54;
    volatile uint32_t BDMA_CCR5; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR5; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR5; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR5; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x68;
    volatile uint32_t BDMA_CCR6; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR6; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR6; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR6; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x7c;
    volatile uint32_t BDMA_CCR7; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR7; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR7; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR7; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x90;
    volatile uint32_t BDMA_CCR8; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR8; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR8; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CMAR8; // This register must not be written when the channel is enabled.

    static constexpr uint32_t BDMA_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_ISR_GIF1 = 0x1; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF1 = 0x2; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF1 = 0x4; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF1 = 0x8; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF2 = 0x10; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF2 = 0x20; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF2 = 0x40; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF2 = 0x80; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF3 = 0x100; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF3 = 0x200; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF3 = 0x400; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF3 = 0x800; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF4 = 0x1000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF4 = 0x2000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF4 = 0x4000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF4 = 0x8000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF5 = 0x10000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF5 = 0x20000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF5 = 0x40000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF5 = 0x80000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF6 = 0x100000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF6 = 0x200000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF6 = 0x400000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF6 = 0x800000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF7 = 0x1000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF7 = 0x2000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF7 = 0x4000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF7 = 0x8000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF8 = 0x10000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF8 = 0x20000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF8 = 0x40000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF8 = 0x80000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.

    static constexpr uint32_t BDMA_IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_IFCR_CGIF1 = 0x1; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF1 = 0x2; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF1 = 0x4; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF1 = 0x8; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF2 = 0x10; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF2 = 0x20; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF2 = 0x40; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF2 = 0x80; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF3 = 0x100; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF3 = 0x200; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF3 = 0x400; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF3 = 0x800; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF4 = 0x1000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF4 = 0x2000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF4 = 0x4000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF4 = 0x8000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF5 = 0x10000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF5 = 0x20000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF5 = 0x40000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF5 = 0x80000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF6 = 0x100000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF6 = 0x200000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF6 = 0x400000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF6 = 0x800000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF7 = 0x1000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF7 = 0x2000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF7 = 0x4000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF7 = 0x8000000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF8 = 0x10000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF8 = 0x20000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF8 = 0x40000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF8 = 0x80000000; // Channel x transfer error clear This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR1_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR1_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR1_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR1_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR1_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR1_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR1_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR2_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR2_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR2_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR2_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR2_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR2_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR2_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR3_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR3_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR3_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR3_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR3_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR3_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR3_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR4_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR4_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR4_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR4_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR4_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR4_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR4_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR5_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR5_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR5_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR5_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR5_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR5_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR5_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR6_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR6_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR6_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR6_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR6_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR6_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR6_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR7_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR7_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR7_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR7_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR7_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR7_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR7_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR8_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR8_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR8_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR8_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR8_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR8_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR8_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CMAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CMAR8_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
};

// BDMA1: BDMA1

struct stm32h7a3x_bdma1_t
{
    volatile uint32_t ISR; // DMA interrupt status register
    volatile uint32_t IFCR; // DMA interrupt flag clear register
    volatile uint32_t CCR0; // DMA channel x configuration register
    volatile uint32_t CNDTR0; // DMA channel x number of data register
    volatile uint32_t CPAR0; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR0; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR1; // DMA channel x configuration register
    volatile uint32_t CNDTR1; // DMA channel x number of data register
    volatile uint32_t CPAR1; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR1; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR2; // DMA channel x configuration register
    volatile uint32_t CNDTR2; // DMA channel x number of data register
    volatile uint32_t CPAR2; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR2; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR3; // DMA channel x configuration register
    volatile uint32_t CNDTR3; // DMA channel x number of data register
    volatile uint32_t CPAR3; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR3; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR4; // DMA channel x configuration register
    volatile uint32_t CNDTR4; // DMA channel x number of data register
    volatile uint32_t CPAR4; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR4; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR5; // DMA channel x configuration register
    volatile uint32_t CNDTR5; // DMA channel x number of data register
    volatile uint32_t CPAR5; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR5; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR6; // DMA channel x configuration register
    volatile uint32_t CNDTR6; // DMA channel x number of data register
    volatile uint32_t CPAR6; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR6; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x90;
    volatile uint32_t CCR7; // DMA channel x configuration register
    volatile uint32_t CNDTR7; // DMA channel x number of data register
    volatile uint32_t CPAR7; // This register must not be written when the channel is enabled.
    volatile uint32_t CM0AR7; // This register must not be written when the channel is enabled.

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF1 = 0x1; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF1 = 0x4; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF1 = 0x8; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF2 = 0x10; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF2 = 0x20; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF2 = 0x40; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF2 = 0x80; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF3 = 0x100; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF3 = 0x200; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF3 = 0x400; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF3 = 0x800; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF4 = 0x1000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF5 = 0x10000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF6 = 0x100000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_GIF8 = 0x10000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TCIF8 = 0x20000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_HTIF8 = 0x40000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t ISR_TEIF8 = 0x80000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF1 = 0x1; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF1 = 0x4; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF1 = 0x8; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF2 = 0x10; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF2 = 0x20; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF2 = 0x40; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF2 = 0x80; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF3 = 0x100; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF3 = 0x200; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF3 = 0x400; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF3 = 0x800; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF4 = 0x1000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF4 = 0x2000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF4 = 0x4000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF4 = 0x8000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF5 = 0x10000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF5 = 0x20000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF5 = 0x40000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF5 = 0x80000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF6 = 0x100000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF6 = 0x200000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF6 = 0x400000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF6 = 0x800000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF7 = 0x1000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF7 = 0x2000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF7 = 0x4000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF7 = 0x8000000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CGIF8 = 0x10000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTCIF8 = 0x20000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CHTIF8 = 0x40000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t IFCR_CTEIF8 = 0x80000000; // Channel x transfer error clear This bit is set and cleared by software.

    static constexpr uint32_t CCR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR0_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR0_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR0_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR0_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR0_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR0_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR0_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR0_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR0_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR0_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR0_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR0_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR0_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR0_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR0_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR1_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR2_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR3_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR4_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR5_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR6_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR6_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR6_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR6_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR6_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR6_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR6_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t CCR7_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t CCR7_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t CCR7_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t CCR7_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> CCR7_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t CM0AR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CM0AR7_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
};

// BDMA2: BDMA

struct stm32h7b0x_bdma2_t
{
    volatile uint32_t BDMA_ISR; // DMA interrupt status register
    volatile uint32_t BDMA_IFCR; // DMA interrupt flag clear register
    volatile uint32_t BDMA_CCR0; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR0; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR0; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR0; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x18;
    volatile uint32_t BDMA_CCR1; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR1; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR1; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR1; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x2c;
    volatile uint32_t BDMA_CCR2; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR2; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR2; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR2; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x40;
    volatile uint32_t BDMA_CCR3; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR3; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR3; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR3; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x54;
    volatile uint32_t BDMA_CCR4; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR4; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR4; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR4; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x68;
    volatile uint32_t BDMA_CCR5; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR5; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR5; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR5; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x7c;
    volatile uint32_t BDMA_CCR6; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR6; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR6; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR6; // This register must not be written when the channel is enabled.
    reserved_t<0x1> _0x90;
    volatile uint32_t BDMA_CCR7; // DMA channel x configuration register
    volatile uint32_t BDMA_CNDTR7; // DMA channel x number of data register
    volatile uint32_t BDMA_CPAR7; // This register must not be written when the channel is enabled.
    volatile uint32_t BDMA_CM0AR7; // This register must not be written when the channel is enabled.

    static constexpr uint32_t BDMA_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_ISR_GIF1 = 0x1; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF1 = 0x2; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF1 = 0x4; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF1 = 0x8; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF2 = 0x10; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF2 = 0x20; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF2 = 0x40; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF2 = 0x80; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF3 = 0x100; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF3 = 0x200; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF3 = 0x400; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF3 = 0x800; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF4 = 0x1000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF4 = 0x2000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF4 = 0x4000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF4 = 0x8000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF5 = 0x10000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF5 = 0x20000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF5 = 0x40000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF5 = 0x80000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF6 = 0x100000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF6 = 0x200000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF6 = 0x400000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF6 = 0x800000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF7 = 0x1000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF7 = 0x2000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF7 = 0x4000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF7 = 0x8000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_GIF8 = 0x10000000; // Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TCIF8 = 0x20000000; // Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_HTIF8 = 0x40000000; // Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.
    static constexpr uint32_t BDMA_ISR_TEIF8 = 0x80000000; // Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register.

    static constexpr uint32_t BDMA_IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_IFCR_CGIF1 = 0x1; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF1 = 0x2; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF1 = 0x4; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF1 = 0x8; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF2 = 0x10; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF2 = 0x20; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF2 = 0x40; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF2 = 0x80; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF3 = 0x100; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF3 = 0x200; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF3 = 0x400; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF3 = 0x800; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF4 = 0x1000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF4 = 0x2000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF4 = 0x4000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF4 = 0x8000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF5 = 0x10000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF5 = 0x20000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF5 = 0x40000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF5 = 0x80000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF6 = 0x100000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF6 = 0x200000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF6 = 0x400000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF6 = 0x800000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF7 = 0x1000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF7 = 0x2000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF7 = 0x4000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF7 = 0x8000000; // Channel x transfer error clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CGIF8 = 0x10000000; // Channel x global interrupt clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTCIF8 = 0x20000000; // Channel x transfer complete clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CHTIF8 = 0x40000000; // Channel x half transfer clear This bit is set and cleared by software.
    static constexpr uint32_t BDMA_IFCR_CTEIF8 = 0x80000000; // Channel x transfer error clear This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CCR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR0_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR0_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR0_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR0_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR0_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR0_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR0_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR0_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR1_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR1_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR1_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR1_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR1_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR1_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR1_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR1_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR2_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR2_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR2_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR2_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR2_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR2_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR2_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR2_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR3_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR3_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR3_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR3_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR3_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR3_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR3_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR3_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR4_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR4_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR4_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR4_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR4_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR4_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR4_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR4_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR5_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR5_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR5_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR5_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR5_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR5_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR5_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR5_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR6_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR6_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR6_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR6_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR6_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR6_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR6_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR6_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.


    static constexpr uint32_t BDMA_CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMA_CCR7_EN = 0x1; // Channel enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_TCIE = 0x2; // Transfer complete interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_HTIE = 0x4; // Half transfer interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_TEIE = 0x8; // Transfer error interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_DIR = 0x10; // Data transfer direction This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_CIRC = 0x20; // Circular mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_PINC = 0x40; // Peripheral increment mode This bit is set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_MINC = 0x80; // Memory increment mode This bit is set and cleared by software.
    typedef bit_field_t<8, 0x3> BDMA_CCR7_PSIZE; // Peripheral size These bits are set and cleared by software.
    typedef bit_field_t<10, 0x3> BDMA_CCR7_MSIZE; // Memory size These bits are set and cleared by software.
    typedef bit_field_t<12, 0x3> BDMA_CCR7_PL; // Channel priority level These bits are set and cleared by software.
    static constexpr uint32_t BDMA_CCR7_MEM2MEM = 0x4000; // Memory to memory mode This bit is set and cleared by software.

    static constexpr uint32_t BDMA_CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BDMA_CNDTR7_NDT; // Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.

    static constexpr uint32_t BDMA_CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CPAR7_PA; // Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.

    static constexpr uint32_t BDMA_CM0AR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMA_CM0AR7_MA; // Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
};

template<>
struct peripheral_t<STM32H742x, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, BDMA>
{
    using T = stm32h742x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, BDMA>
{
    using T = stm32h750x_bdma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, BDMA1>
{
    using T = stm32h7a3x_bdma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, BDMA2>
{
    using T = stm32h7a3x_bdma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, BDMA1>
{
    using T = stm32h7b0x_bdma2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, BDMA2>
{
    using T = stm32h7b0x_bdma2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, BDMA1>
{
    using T = stm32h7b0x_bdma2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, BDMA2>
{
    using T = stm32h7b0x_bdma2_t;
    static T& V;
};

using bdma_t = peripheral_t<svd, BDMA>;
using bdma1_t = peripheral_t<svd, BDMA1>;
using bdma2_t = peripheral_t<svd, BDMA2>;

template<int INST> struct bdma_traits {};

template<> struct bdma_traits<0>
{
    using bdma = bdma_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_BDMAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_BDMAEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_BDMARST;
    }
};
