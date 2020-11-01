#pragma once

////
//
//      STM32G4 DMA peripherals
//
///

// DMA1: DMA controller

struct stm32g431xx_dma1_t
{
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t IFCR; // DMA interrupt flag clear register
    volatile uint32_t CCR1; // DMA channel 1 configuration register
    volatile uint32_t CNDTR1; // channel x number of data to transfer register
    volatile uint32_t CPAR1; // DMA channel x peripheral address register
    volatile uint32_t CMAR1; // DMA channel x memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel 2 configuration register
    volatile uint32_t CNDTR2; // channel x number of data to transfer register
    volatile uint32_t CPAR2; // DMA channel x peripheral address register
    volatile uint32_t CMAR2; // DMA channel x memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel 3 configuration register
    volatile uint32_t CNDTR3; // channel x number of data to transfer register
    volatile uint32_t CPAR3; // DMA channel x peripheral address register
    volatile uint32_t CMAR3; // DMA channel x memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel 3 configuration register
    volatile uint32_t CNDTR4; // channel x number of data to transfer register
    volatile uint32_t CPAR4; // DMA channel x peripheral address register
    volatile uint32_t CMAR4; // DMA channel x memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel 4 configuration register
    volatile uint32_t CNDTR5; // channel x number of data to transfer register
    volatile uint32_t CPAR5; // DMA channel x peripheral address register
    volatile uint32_t CMAR5; // DMA channel x memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // DMA channel 5 configuration register
    volatile uint32_t CNDTR6; // channel x number of data to transfer register
    volatile uint32_t CPAR6; // DMA channel x peripheral address register
    volatile uint32_t CMAR6; // DMA channel x memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // DMA channel 6 configuration register
    volatile uint32_t CNDTR7; // channel x number of data to transfer register
    volatile uint32_t CPAR7; // DMA channel x peripheral address register
    volatile uint32_t CMAR7; // DMA channel x memory address register
    reserved_t<0x1> _0x90;
    volatile uint32_t CCR8; // DMA channel 7 configuration register
    volatile uint32_t CNDTR8; // channel x number of data to transfer register
    volatile uint32_t CPAR8; // DMA channel x peripheral address register
    volatile uint32_t CMAR8; // DMA channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TEIF8 = 0x80000000; // TEIF8
    static constexpr uint32_t ISR_HTIF8 = 0x40000000; // HTIF8
    static constexpr uint32_t ISR_TCIF8 = 0x20000000; // TCIF8
    static constexpr uint32_t ISR_GIF8 = 0x10000000; // GIF8
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // TEIF7
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // HTIF7
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // TCIF7
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // GIF7
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // TEIF6
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // HTIF6
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // TCIF6
    static constexpr uint32_t ISR_GIF6 = 0x100000; // GIF6
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // TEIF5
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // HTIF5
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // TCIF5
    static constexpr uint32_t ISR_GIF5 = 0x10000; // GIF5
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // TEIF4
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // HTIF4
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // TCIF4
    static constexpr uint32_t ISR_GIF4 = 0x1000; // GIF4
    static constexpr uint32_t ISR_TEIF3 = 0x800; // TEIF3
    static constexpr uint32_t ISR_HTIF3 = 0x400; // HTIF3
    static constexpr uint32_t ISR_TCIF3 = 0x200; // TCIF3
    static constexpr uint32_t ISR_GIF3 = 0x100; // GIF3
    static constexpr uint32_t ISR_TEIF2 = 0x80; // TEIF2
    static constexpr uint32_t ISR_HTIF2 = 0x40; // HTIF2
    static constexpr uint32_t ISR_TCIF2 = 0x20; // TCIF2
    static constexpr uint32_t ISR_GIF2 = 0x10; // GIF2
    static constexpr uint32_t ISR_TEIF1 = 0x8; // TEIF1
    static constexpr uint32_t ISR_HTIF1 = 0x4; // HTIF1
    static constexpr uint32_t ISR_TCIF1 = 0x2; // TCIF1
    static constexpr uint32_t ISR_GIF1 = 0x1; // GIF1

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_TEIF8 = 0x80000000; // TEIF8
    static constexpr uint32_t IFCR_HTIF8 = 0x40000000; // HTIF8
    static constexpr uint32_t IFCR_TCIF8 = 0x20000000; // TCIF8
    static constexpr uint32_t IFCR_GIF8 = 0x10000000; // GIF8
    static constexpr uint32_t IFCR_TEIF7 = 0x8000000; // TEIF7
    static constexpr uint32_t IFCR_HTIF7 = 0x4000000; // HTIF7
    static constexpr uint32_t IFCR_TCIF7 = 0x2000000; // TCIF7
    static constexpr uint32_t IFCR_GIF7 = 0x1000000; // GIF7
    static constexpr uint32_t IFCR_TEIF6 = 0x800000; // TEIF6
    static constexpr uint32_t IFCR_HTIF6 = 0x400000; // HTIF6
    static constexpr uint32_t IFCR_TCIF6 = 0x200000; // TCIF6
    static constexpr uint32_t IFCR_GIF6 = 0x100000; // GIF6
    static constexpr uint32_t IFCR_TEIF5 = 0x80000; // TEIF5
    static constexpr uint32_t IFCR_HTIF5 = 0x40000; // HTIF5
    static constexpr uint32_t IFCR_TCIF5 = 0x20000; // TCIF5
    static constexpr uint32_t IFCR_GIF5 = 0x10000; // GIF5
    static constexpr uint32_t IFCR_TEIF4 = 0x8000; // TEIF4
    static constexpr uint32_t IFCR_HTIF4 = 0x4000; // HTIF4
    static constexpr uint32_t IFCR_TCIF4 = 0x2000; // TCIF4
    static constexpr uint32_t IFCR_GIF4 = 0x1000; // GIF4
    static constexpr uint32_t IFCR_TEIF3 = 0x800; // TEIF3
    static constexpr uint32_t IFCR_HTIF3 = 0x400; // HTIF3
    static constexpr uint32_t IFCR_TCIF3 = 0x200; // TCIF3
    static constexpr uint32_t IFCR_GIF3 = 0x100; // GIF3
    static constexpr uint32_t IFCR_TEIF2 = 0x80; // TEIF2
    static constexpr uint32_t IFCR_HTIF2 = 0x40; // HTIF2
    static constexpr uint32_t IFCR_TCIF2 = 0x20; // TCIF2
    static constexpr uint32_t IFCR_GIF2 = 0x10; // GIF2
    static constexpr uint32_t IFCR_TEIF1 = 0x8; // TEIF1
    static constexpr uint32_t IFCR_HTIF1 = 0x4; // HTIF1
    static constexpr uint32_t IFCR_TCIF1 = 0x2; // TCIF1
    static constexpr uint32_t IFCR_GIF1 = 0x1; // GIF1

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR1_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR1_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR1_DIR = 0x10; // DIR
    static constexpr uint32_t CCR1_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR1_PINC = 0x40; // PINC
    static constexpr uint32_t CCR1_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR1_PL; // PL
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR1_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // Peripheral address

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_EN = 0x1; // channel enable
    static constexpr uint32_t CCR2_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR2_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR2_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR2_DIR = 0x10; // DIR
    static constexpr uint32_t CCR2_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR2_PINC = 0x40; // PINC
    static constexpr uint32_t CCR2_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR2_PL; // PL
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR2_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // Peripheral address

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_EN = 0x1; // channel enable
    static constexpr uint32_t CCR3_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR3_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR3_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR3_DIR = 0x10; // DIR
    static constexpr uint32_t CCR3_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR3_PINC = 0x40; // PINC
    static constexpr uint32_t CCR3_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR3_PL; // PL
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR3_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // Peripheral address

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_EN = 0x1; // channel enable
    static constexpr uint32_t CCR4_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR4_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR4_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR4_DIR = 0x10; // DIR
    static constexpr uint32_t CCR4_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR4_PINC = 0x40; // PINC
    static constexpr uint32_t CCR4_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR4_PL; // PL
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR4_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // Peripheral address

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_EN = 0x1; // channel enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR5_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR5_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR5_DIR = 0x10; // DIR
    static constexpr uint32_t CCR5_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR5_PINC = 0x40; // PINC
    static constexpr uint32_t CCR5_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR5_PL; // PL
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR5_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // Peripheral address

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_EN = 0x1; // channel enable
    static constexpr uint32_t CCR6_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR6_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR6_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR6_DIR = 0x10; // DIR
    static constexpr uint32_t CCR6_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR6_PINC = 0x40; // PINC
    static constexpr uint32_t CCR6_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR6_PL; // PL
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR6_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // Peripheral address

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR6_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_EN = 0x1; // channel enable
    static constexpr uint32_t CCR7_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR7_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR7_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR7_DIR = 0x10; // DIR
    static constexpr uint32_t CCR7_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR7_PINC = 0x40; // PINC
    static constexpr uint32_t CCR7_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR7_PL; // PL
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // Memory 1 address (used in case of Double buffer mode)


    static constexpr uint32_t CCR8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR8_EN = 0x1; // channel enable
    static constexpr uint32_t CCR8_TCIE = 0x2; // TCIE
    static constexpr uint32_t CCR8_HTIE = 0x4; // HTIE
    static constexpr uint32_t CCR8_TEIE = 0x8; // TEIE
    static constexpr uint32_t CCR8_DIR = 0x10; // DIR
    static constexpr uint32_t CCR8_CIRC = 0x20; // CIRC
    static constexpr uint32_t CCR8_PINC = 0x40; // PINC
    static constexpr uint32_t CCR8_MINC = 0x80; // MINC
    typedef bit_field_t<8, 0x3> CCR8_PSIZE; // PSIZE
    typedef bit_field_t<10, 0x3> CCR8_MSIZE; // MSIZE
    typedef bit_field_t<12, 0x3> CCR8_PL; // PL
    static constexpr uint32_t CCR8_MEM2MEM = 0x4000; // MEM2MEM

    static constexpr uint32_t CNDTR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR8_NDT; // Number of data items to transfer

    static constexpr uint32_t CPAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR8_PA; // Peripheral address

    static constexpr uint32_t CMAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR8_MA; // Memory 1 address (used in case of Double buffer mode)
};

template<>
struct peripheral_t<STM32G431xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G491xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G491xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G4A1xx, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G4A1xx, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32g431xx_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32g431xx_dma1_t;
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
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

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
