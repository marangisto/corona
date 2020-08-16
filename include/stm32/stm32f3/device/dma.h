#pragma once

////
//
//      STM32F3 DMA peripherals
//
///

// DMA1: DMA controller 1

struct stm32f301_dma1_t
{
    volatile uint32_t ISR; // DMA interrupt status register (DMA_ISR)
    volatile uint32_t IFCR; // DMA interrupt flag clear register (DMA_IFCR)
    volatile uint32_t CCR1; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR1; // DMA channel 1 number of data register
    volatile uint32_t CPAR1; // DMA channel 1 peripheral address register
    volatile uint32_t CMAR1; // DMA channel 1 memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR2; // DMA channel 2 number of data register
    volatile uint32_t CPAR2; // DMA channel 2 peripheral address register
    volatile uint32_t CMAR2; // DMA channel 2 memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR3; // DMA channel 3 number of data register
    volatile uint32_t CPAR3; // DMA channel 3 peripheral address register
    volatile uint32_t CMAR3; // DMA channel 3 memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR4; // DMA channel 4 number of data register
    volatile uint32_t CPAR4; // DMA channel 4 peripheral address register
    volatile uint32_t CMAR4; // DMA channel 4 memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR5; // DMA channel 5 number of data register
    volatile uint32_t CPAR5; // DMA channel 5 peripheral address register
    volatile uint32_t CMAR5; // DMA channel 5 memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR6; // DMA channel 6 number of data register
    volatile uint32_t CPAR6; // DMA channel 6 peripheral address register
    volatile uint32_t CMAR6; // DMA channel 6 memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // DMA channel configuration register (DMA_CCR)
    volatile uint32_t CNDTR7; // DMA channel 7 number of data register
    volatile uint32_t CPAR7; // DMA channel 7 peripheral address register
    volatile uint32_t CMAR7; // DMA channel 7 memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_GIF1 = 0x1; // Channel 1 Global interrupt flag
    static constexpr uint32_t ISR_TCIF1 = 0x2; // Channel 1 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF1 = 0x4; // Channel 1 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF1 = 0x8; // Channel 1 Transfer Error flag
    static constexpr uint32_t ISR_GIF2 = 0x10; // Channel 2 Global interrupt flag
    static constexpr uint32_t ISR_TCIF2 = 0x20; // Channel 2 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF2 = 0x40; // Channel 2 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF2 = 0x80; // Channel 2 Transfer Error flag
    static constexpr uint32_t ISR_GIF3 = 0x100; // Channel 3 Global interrupt flag
    static constexpr uint32_t ISR_TCIF3 = 0x200; // Channel 3 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF3 = 0x400; // Channel 3 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF3 = 0x800; // Channel 3 Transfer Error flag
    static constexpr uint32_t ISR_GIF4 = 0x1000; // Channel 4 Global interrupt flag
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // Channel 4 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // Channel 4 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // Channel 4 Transfer Error flag
    static constexpr uint32_t ISR_GIF5 = 0x10000; // Channel 5 Global interrupt flag
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // Channel 5 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // Channel 5 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // Channel 5 Transfer Error flag
    static constexpr uint32_t ISR_GIF6 = 0x100000; // Channel 6 Global interrupt flag
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // Channel 6 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // Channel 6 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // Channel 6 Transfer Error flag
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // Channel 7 Global interrupt flag
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // Channel 7 Transfer Complete flag
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // Channel 7 Half Transfer Complete flag
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // Channel 7 Transfer Error flag

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_CGIF1 = 0x1; // Channel 1 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF1 = 0x2; // Channel 1 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF1 = 0x4; // Channel 1 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF1 = 0x8; // Channel 1 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF2 = 0x10; // Channel 2 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF2 = 0x20; // Channel 2 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF2 = 0x40; // Channel 2 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF2 = 0x80; // Channel 2 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF3 = 0x100; // Channel 3 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF3 = 0x200; // Channel 3 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF3 = 0x400; // Channel 3 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF3 = 0x800; // Channel 3 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF4 = 0x1000; // Channel 4 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF4 = 0x2000; // Channel 4 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF4 = 0x4000; // Channel 4 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF4 = 0x8000; // Channel 4 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF5 = 0x10000; // Channel 5 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF5 = 0x20000; // Channel 5 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF5 = 0x40000; // Channel 5 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF5 = 0x80000; // Channel 5 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF6 = 0x100000; // Channel 6 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF6 = 0x200000; // Channel 6 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF6 = 0x400000; // Channel 6 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF6 = 0x800000; // Channel 6 Transfer Error clear
    static constexpr uint32_t IFCR_CGIF7 = 0x1000000; // Channel 7 Global interrupt clear
    static constexpr uint32_t IFCR_CTCIF7 = 0x2000000; // Channel 7 Transfer Complete clear
    static constexpr uint32_t IFCR_CHTIF7 = 0x4000000; // Channel 7 Half Transfer clear
    static constexpr uint32_t IFCR_CTEIF7 = 0x8000000; // Channel 7 Transfer Error clear

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_EN = 0x1; // Channel enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // Transfer complete interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR1_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR1_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR1_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR1_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR1_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR1_PL; // Channel Priority level
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
    static constexpr uint32_t CCR2_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR2_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR2_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR2_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR2_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR2_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR2_PL; // Channel Priority level
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
    static constexpr uint32_t CCR3_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR3_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR3_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR3_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR3_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR3_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR3_PL; // Channel Priority level
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
    static constexpr uint32_t CCR4_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR4_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR4_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR4_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR4_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR4_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR4_PL; // Channel Priority level
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
    static constexpr uint32_t CCR5_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR5_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR5_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR5_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR5_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR5_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR5_PL; // Channel Priority level
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
    static constexpr uint32_t CCR6_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR6_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR6_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR6_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR6_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR6_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR6_PL; // Channel Priority level
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
    static constexpr uint32_t CCR7_HTIE = 0x4; // Half Transfer interrupt enable
    static constexpr uint32_t CCR7_TEIE = 0x8; // Transfer error interrupt enable
    static constexpr uint32_t CCR7_DIR = 0x10; // Data transfer direction
    static constexpr uint32_t CCR7_CIRC = 0x20; // Circular mode
    static constexpr uint32_t CCR7_PINC = 0x40; // Peripheral increment mode
    static constexpr uint32_t CCR7_MINC = 0x80; // Memory increment mode
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // Peripheral size
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // Memory size
    typedef bit_field_t<12, 0x3> CCR7_PL; // Channel Priority level
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // Memory to memory mode

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNDTR7_NDT; // Number of data to transfer

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // Peripheral address

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // Memory address
};

template<>
struct peripheral_t<STM32F301, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, DMA2>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, DMA2>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, DMA2>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, DMA1>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, DMA2>
{
    using T = stm32f301_dma1_t;
    static T& V;
};

using dma1_t = peripheral_t<svd, DMA1>;
using dma2_t = peripheral_t<svd, DMA2>;

template<int INST> struct dma_traits {};

template<> struct dma_traits<1>
{
    using dma = dma1_t;

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
};

template<> struct dma_traits<2>
{
    using dma = dma2_t;

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
};
