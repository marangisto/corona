#pragma once

////
//
//      STM32WL DMA peripherals
//
///

// DMA1: Direct memory access controller

struct stm32wl5x_cm0p_dma1_t
{
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t IFCR; // interrupt flag clear register
    volatile uint32_t CCR1; // channel x configuration register
    volatile uint32_t CNDTR1; // channel x number of data to transfer register
    volatile uint32_t CPAR1; // channel x peripheral address register
    volatile uint32_t CMAR1; // channel x memory address register
    reserved_t<0x1> _0x18;
    volatile uint32_t CCR2; // channel x configuration register
    volatile uint32_t CNDTR2; // channel x number of data to transfer register
    volatile uint32_t CPAR2; // channel x peripheral address register
    volatile uint32_t CMAR2; // channel x memory address register
    reserved_t<0x1> _0x2c;
    volatile uint32_t CCR3; // channel x configuration register
    volatile uint32_t CNDTR3; // channel x number of data to transfer register
    volatile uint32_t CPAR3; // channel x peripheral address register
    volatile uint32_t CMAR3; // channel x memory address register
    reserved_t<0x1> _0x40;
    volatile uint32_t CCR4; // channel x configuration register
    volatile uint32_t CNDTR4; // channel x number of data to transfer register
    volatile uint32_t CPAR4; // channel x peripheral address register
    volatile uint32_t CMAR4; // channel x memory address register
    reserved_t<0x1> _0x54;
    volatile uint32_t CCR5; // channel x configuration register
    volatile uint32_t CNDTR5; // channel x number of data to transfer register
    volatile uint32_t CPAR5; // channel x peripheral address register
    volatile uint32_t CMAR5; // channel x memory address register
    reserved_t<0x1> _0x68;
    volatile uint32_t CCR6; // channel x configuration register
    volatile uint32_t CNDTR6; // channel x number of data to transfer register
    volatile uint32_t CPAR6; // channel x peripheral address register
    volatile uint32_t CMAR6; // channel x memory address register
    reserved_t<0x1> _0x7c;
    volatile uint32_t CCR7; // channel x configuration register
    volatile uint32_t CNDTR7; // channel x number of data to transfer register
    volatile uint32_t CPAR7; // channel x peripheral address register
    volatile uint32_t CMAR7; // channel x memory address register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_TEIF7 = 0x8000000; // transfer error (TE) flag for channel 7
    static constexpr uint32_t ISR_HTIF7 = 0x4000000; // half transfer (HT) flag for channel 7
    static constexpr uint32_t ISR_TCIF7 = 0x2000000; // transfer complete (TC) flag for channel 7
    static constexpr uint32_t ISR_GIF7 = 0x1000000; // global interrupt flag for channel 7
    static constexpr uint32_t ISR_TEIF6 = 0x800000; // transfer error (TE) flag for channel 6
    static constexpr uint32_t ISR_HTIF6 = 0x400000; // half transfer (HT) flag for channel 6
    static constexpr uint32_t ISR_TCIF6 = 0x200000; // transfer complete (TC) flag for channel 6
    static constexpr uint32_t ISR_GIF6 = 0x100000; // global interrupt flag for channel 6
    static constexpr uint32_t ISR_TEIF5 = 0x80000; // transfer error (TE) flag for channel 5
    static constexpr uint32_t ISR_HTIF5 = 0x40000; // half transfer (HT) flag for channel 5
    static constexpr uint32_t ISR_TCIF5 = 0x20000; // transfer complete (TC) flag for channel 5
    static constexpr uint32_t ISR_GIF5 = 0x10000; // global interrupt flag for channel 5
    static constexpr uint32_t ISR_TEIF4 = 0x8000; // transfer error (TE) flag for channel 4
    static constexpr uint32_t ISR_HTIF4 = 0x4000; // half transfer (HT) flag for channel 4
    static constexpr uint32_t ISR_TCIF4 = 0x2000; // transfer complete (TC) flag for channel 4
    static constexpr uint32_t ISR_GIF4 = 0x1000; // global interrupt flag for channel 4
    static constexpr uint32_t ISR_TEIF3 = 0x800; // transfer error (TE) flag for channel 3
    static constexpr uint32_t ISR_HTIF3 = 0x400; // half transfer (HT) flag for channel 3
    static constexpr uint32_t ISR_TCIF3 = 0x200; // transfer complete (TC) flag for channel 3
    static constexpr uint32_t ISR_GIF3 = 0x100; // global interrupt flag for channel 3
    static constexpr uint32_t ISR_TEIF2 = 0x80; // transfer error (TE) flag for channel 2
    static constexpr uint32_t ISR_HTIF2 = 0x40; // half transfer (HT) flag for channel 2
    static constexpr uint32_t ISR_TCIF2 = 0x20; // transfer complete (TC) flag for channel 2
    static constexpr uint32_t ISR_GIF2 = 0x10; // global interrupt flag for channel 2
    static constexpr uint32_t ISR_TEIF1 = 0x8; // transfer error (TE) flag for channel 1
    static constexpr uint32_t ISR_HTIF1 = 0x4; // half transfer (HT) flag for channel 1
    static constexpr uint32_t ISR_TCIF1 = 0x2; // transfer complete (TC) flag for channel 1
    static constexpr uint32_t ISR_GIF1 = 0x1; // global interrupt flag for channel 1

    static constexpr uint32_t IFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IFCR_TEIF7 = 0x8000000; // transfer error flag clear for channel 7
    static constexpr uint32_t IFCR_HTIF7 = 0x4000000; // half transfer flag clear for channel 7
    static constexpr uint32_t IFCR_TCIF7 = 0x2000000; // transfer complete flag clear for channel 7
    static constexpr uint32_t IFCR_GIF7 = 0x1000000; // global interrupt flag clear for channel 7
    static constexpr uint32_t IFCR_TEIF6 = 0x800000; // transfer error flag clear for channel 6
    static constexpr uint32_t IFCR_HTIF6 = 0x400000; // half transfer flag clear for channel 6
    static constexpr uint32_t IFCR_TCIF6 = 0x200000; // transfer complete flag clear for channel 6
    static constexpr uint32_t IFCR_GIF6 = 0x100000; // global interrupt flag clear for channel 6
    static constexpr uint32_t IFCR_TEIF5 = 0x80000; // transfer error flag clear for channel 5
    static constexpr uint32_t IFCR_HTIF5 = 0x40000; // half transfer flag clear for channel 5
    static constexpr uint32_t IFCR_TCIF5 = 0x20000; // transfer complete flag clear for channel 5
    static constexpr uint32_t IFCR_GIF5 = 0x10000; // global interrupt flag clear for channel 5
    static constexpr uint32_t IFCR_TEIF4 = 0x8000; // transfer error flag clear for channel 4
    static constexpr uint32_t IFCR_HTIF4 = 0x4000; // half transfer flag clear for channel 4
    static constexpr uint32_t IFCR_TCIF4 = 0x2000; // transfer complete flag clear for channel 4
    static constexpr uint32_t IFCR_GIF4 = 0x1000; // global interrupt flag clear for channel 4
    static constexpr uint32_t IFCR_TEIF3 = 0x800; // transfer error flag clear for channel 3
    static constexpr uint32_t IFCR_HTIF3 = 0x400; // half transfer flag clear for channel 3
    static constexpr uint32_t IFCR_TCIF3 = 0x200; // transfer complete flag clear for channel 3
    static constexpr uint32_t IFCR_GIF3 = 0x100; // global interrupt flag clear for channel 3
    static constexpr uint32_t IFCR_TEIF2 = 0x80; // transfer error flag clear for channel 2
    static constexpr uint32_t IFCR_HTIF2 = 0x40; // half transfer flag clear for channel 2
    static constexpr uint32_t IFCR_TCIF2 = 0x20; // transfer complete flag clear for channel 2
    static constexpr uint32_t IFCR_GIF2 = 0x10; // global interrupt flag clear for channel 2
    static constexpr uint32_t IFCR_TEIF1 = 0x8; // transfer error flag clear for channel 1
    static constexpr uint32_t IFCR_HTIF1 = 0x4; // half transfer flag clear for channel 1
    static constexpr uint32_t IFCR_TCIF1 = 0x2; // transfer complete flag clear for channel 1
    static constexpr uint32_t IFCR_GIF1 = 0x1; // global interrupt flag clear for channel 1

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR1_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR1_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR1_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR1_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR1_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR1_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR1_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR1_PSIZE; // peripheral size
    static constexpr uint32_t CCR1_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR1_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR1_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR1_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR1_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR1_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR1_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR1_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR1_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR1_PA; // peripheral address

    static constexpr uint32_t CMAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR1_MA; // peripheral address


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR2_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR2_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR2_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR2_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR2_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR2_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR2_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR2_PSIZE; // peripheral size
    static constexpr uint32_t CCR2_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR2_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR2_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR2_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR2_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR2_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR2_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR2_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR2_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR2_PA; // peripheral address

    static constexpr uint32_t CMAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR2_MA; // peripheral address


    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR3_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR3_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR3_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR3_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR3_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR3_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR3_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR3_PSIZE; // peripheral size
    static constexpr uint32_t CCR3_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR3_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR3_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR3_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR3_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR3_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR3_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR3_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR3_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR3_PA; // peripheral address

    static constexpr uint32_t CMAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR3_MA; // peripheral address


    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR4_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR4_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR4_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR4_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR4_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR4_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR4_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR4_PSIZE; // peripheral size
    static constexpr uint32_t CCR4_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR4_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR4_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR4_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR4_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR4_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR4_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR4_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR4_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR4_PA; // peripheral address

    static constexpr uint32_t CMAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR4_MA; // peripheral address


    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR5_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR5_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR5_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR5_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR5_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR5_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR5_PSIZE; // peripheral size
    static constexpr uint32_t CCR5_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR5_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR5_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR5_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR5_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR5_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR5_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR5_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR5_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR5_PA; // peripheral address

    static constexpr uint32_t CMAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR5_MA; // peripheral address


    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR6_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR6_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR6_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR6_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR6_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR6_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR6_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR6_PSIZE; // peripheral size
    static constexpr uint32_t CCR6_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR6_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR6_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR6_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR6_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR6_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR6_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR6_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR6_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR6_PA; // peripheral address

    static constexpr uint32_t CMAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR6_MA; // peripheral address


    static constexpr uint32_t CCR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR7_PRIV = 0x100000; // rivileged mode
    static constexpr uint32_t CCR7_DSEC = 0x80000; // ecurity of the DMA transfer to the destination
    static constexpr uint32_t CCR7_SSEC = 0x40000; // ecurity of the DMA transfer from the source
    static constexpr uint32_t CCR7_SECM = 0x20000; // ecure mode
    static constexpr uint32_t CCR7_MEM2MEM = 0x4000; // memory-to-memory mode
    typedef bit_field_t<12, 0x3> CCR7_PL; // priority level
    typedef bit_field_t<10, 0x3> CCR7_MSIZE; // memory size
    typedef bit_field_t<8, 0x3> CCR7_PSIZE; // peripheral size
    static constexpr uint32_t CCR7_MINC = 0x80; // memory increment mode
    static constexpr uint32_t CCR7_PINC = 0x40; // peripheral increment mode
    static constexpr uint32_t CCR7_CIRC = 0x20; // circular mode
    static constexpr uint32_t CCR7_DIR = 0x10; // data transfer direction
    static constexpr uint32_t CCR7_TEIE = 0x8; // transfer error interrupt enable
    static constexpr uint32_t CCR7_HTIE = 0x4; // half transfer interrupt enable
    static constexpr uint32_t CCR7_TCIE = 0x2; // transfer complete interrupt enable
    static constexpr uint32_t CCR7_EN = 0x1; // channel enable

    static constexpr uint32_t CNDTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffff> CNDTR7_NDT; // number of data to transfer (0 to 218 - 1)

    static constexpr uint32_t CPAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CPAR7_PA; // peripheral address

    static constexpr uint32_t CMAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CMAR7_MA; // peripheral address
};

template<>
struct peripheral_t<STM32WL5x_CM0P, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32wl5x_cm0p_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32wl5x_cm0p_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32wl5x_cm0p_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32wl5x_cm0p_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, DMA1>
{
    static constexpr periph_t P = DMA1;
    using T = stm32wl5x_cm0p_dma1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, DMA2>
{
    static constexpr periph_t P = DMA2;
    using T = stm32wl5x_cm0p_dma1_t;
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
