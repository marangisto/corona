#pragma once

////
//
//      STM32H7 DMA peripherals
//
////

////
//
//      DMA controller
//
////

struct stm32h742x_dma1_t
{
    volatile uint32_t LISR;   // [read-only] low interrupt status register
    volatile uint32_t HISR;   // [read-only] high interrupt status register
    volatile uint32_t LIFCR;  // [read-write] low interrupt flag clear register
    volatile uint32_t HIFCR;  // [read-write] high interrupt flag clear register
    volatile uint32_t S0CR;   // [read-write] stream x configuration register
    volatile uint32_t S0NDTR; // [read-write] stream x number of data register
    volatile uint32_t S0PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S0M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S0M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S0FCR;  // stream x FIFO control register
    volatile uint32_t S1CR;   // [read-write] stream x configuration register
    volatile uint32_t S1NDTR; // [read-write] stream x number of data register
    volatile uint32_t S1PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S1M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S1M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S1FCR;  // stream x FIFO control register
    volatile uint32_t S2CR;   // [read-write] stream x configuration register
    volatile uint32_t S2NDTR; // [read-write] stream x number of data register
    volatile uint32_t S2PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S2M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S2M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S2FCR;  // stream x FIFO control register
    volatile uint32_t S3CR;   // [read-write] stream x configuration register
    volatile uint32_t S3NDTR; // [read-write] stream x number of data register
    volatile uint32_t S3PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S3M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S3M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S3FCR;  // stream x FIFO control register
    volatile uint32_t S4CR;   // [read-write] stream x configuration register
    volatile uint32_t S4NDTR; // [read-write] stream x number of data register
    volatile uint32_t S4PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S4M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S4M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S4FCR;  // stream x FIFO control register
    volatile uint32_t S5CR;   // [read-write] stream x configuration register
    volatile uint32_t S5NDTR; // [read-write] stream x number of data register
    volatile uint32_t S5PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S5M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S5M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S5FCR;  // stream x FIFO control register
    volatile uint32_t S6CR;   // [read-write] stream x configuration register
    volatile uint32_t S6NDTR; // [read-write] stream x number of data register
    volatile uint32_t S6PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S6M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S6M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S6FCR;  // stream x FIFO control register
    volatile uint32_t S7CR;   // [read-write] stream x configuration register
    volatile uint32_t S7NDTR; // [read-write] stream x number of data register
    volatile uint32_t S7PAR;  // [read-write] stream x peripheral address register
    volatile uint32_t S7M0AR; // [read-write] stream x memory 0 address register
    volatile uint32_t S7M1AR; // [read-write] stream x memory 1 address register
    volatile uint32_t S7FCR;  // stream x FIFO control register

    static constexpr uint32_t LISR_RESET_VALUE = 0x0;
    static constexpr uint32_t LISR_TCIF3 = 0x8000000;  // Stream x transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LISR_HTIF3 = 0x4000000;  // Stream x half transfer interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TEIF3 = 0x2000000;  // Stream x transfer error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_DMEIF3 = 0x1000000; // Stream x direct mode error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_FEIF3 = 0x400000;   // Stream x FIFO error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TCIF2 = 0x200000;   // Stream x transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LISR_HTIF2 = 0x100000;   // Stream x half transfer interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TEIF2 = 0x80000;    // Stream x transfer error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_DMEIF2 = 0x40000;   // Stream x direct mode error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_FEIF2 = 0x10000;    // Stream x FIFO error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TCIF1 = 0x800;      // Stream x transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LISR_HTIF1 = 0x400;      // Stream x half transfer interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TEIF1 = 0x200;      // Stream x transfer error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_DMEIF1 = 0x100;     // Stream x direct mode error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_FEIF1 = 0x40;       // Stream x FIFO error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TCIF0 = 0x20;       // Stream x transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LISR_HTIF0 = 0x10;       // Stream x half transfer interrupt flag (x=3..0)
    static constexpr uint32_t LISR_TEIF0 = 0x8;        // Stream x transfer error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_DMEIF0 = 0x4;       // Stream x direct mode error interrupt flag (x=3..0)
    static constexpr uint32_t LISR_FEIF0 = 0x1;        // Stream x FIFO error interrupt flag (x=3..0)

    static constexpr uint32_t HISR_RESET_VALUE = 0x0;
    static constexpr uint32_t HISR_TCIF7 = 0x8000000;  // Stream x transfer complete interrupt flag (x=7..4)
    static constexpr uint32_t HISR_HTIF7 = 0x4000000;  // Stream x half transfer interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TEIF7 = 0x2000000;  // Stream x transfer error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_DMEIF7 = 0x1000000; // Stream x direct mode error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_FEIF7 = 0x400000;   // Stream x FIFO error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TCIF6 = 0x200000;   // Stream x transfer complete interrupt flag (x=7..4)
    static constexpr uint32_t HISR_HTIF6 = 0x100000;   // Stream x half transfer interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TEIF6 = 0x80000;    // Stream x transfer error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_DMEIF6 = 0x40000;   // Stream x direct mode error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_FEIF6 = 0x10000;    // Stream x FIFO error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TCIF5 = 0x800;      // Stream x transfer complete interrupt flag (x=7..4)
    static constexpr uint32_t HISR_HTIF5 = 0x400;      // Stream x half transfer interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TEIF5 = 0x200;      // Stream x transfer error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_DMEIF5 = 0x100;     // Stream x direct mode error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_FEIF5 = 0x40;       // Stream x FIFO error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TCIF4 = 0x20;       // Stream x transfer complete interrupt flag (x=7..4)
    static constexpr uint32_t HISR_HTIF4 = 0x10;       // Stream x half transfer interrupt flag (x=7..4)
    static constexpr uint32_t HISR_TEIF4 = 0x8;        // Stream x transfer error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_DMEIF4 = 0x4;       // Stream x direct mode error interrupt flag (x=7..4)
    static constexpr uint32_t HISR_FEIF4 = 0x1;        // Stream x FIFO error interrupt flag (x=7..4)

    static constexpr uint32_t LIFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t LIFCR_CTCIF3 = 0x8000000;  // Stream x clear transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CHTIF3 = 0x4000000;  // Stream x clear half transfer interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTEIF3 = 0x2000000;  // Stream x clear transfer error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CDMEIF3 = 0x1000000; // Stream x clear direct mode error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CFEIF3 = 0x400000;   // Stream x clear FIFO error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTCIF2 = 0x200000;   // Stream x clear transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CHTIF2 = 0x100000;   // Stream x clear half transfer interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTEIF2 = 0x80000;    // Stream x clear transfer error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CDMEIF2 = 0x40000;   // Stream x clear direct mode error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CFEIF2 = 0x10000;    // Stream x clear FIFO error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTCIF1 = 0x800;      // Stream x clear transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CHTIF1 = 0x400;      // Stream x clear half transfer interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTEIF1 = 0x200;      // Stream x clear transfer error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CDMEIF1 = 0x100;     // Stream x clear direct mode error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CFEIF1 = 0x40;       // Stream x clear FIFO error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTCIF0 = 0x20;       // Stream x clear transfer complete interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CHTIF0 = 0x10;       // Stream x clear half transfer interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CTEIF0 = 0x8;        // Stream x clear transfer error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CDMEIF0 = 0x4;       // Stream x clear direct mode error interrupt flag (x = 3..0)
    static constexpr uint32_t LIFCR_CFEIF0 = 0x1;        // Stream x clear FIFO error interrupt flag (x = 3..0)

    static constexpr uint32_t HIFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t HIFCR_CTCIF7 = 0x8000000;  // Stream x clear transfer complete interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CHTIF7 = 0x4000000;  // Stream x clear half transfer interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTEIF7 = 0x2000000;  // Stream x clear transfer error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CDMEIF7 = 0x1000000; // Stream x clear direct mode error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CFEIF7 = 0x400000;   // Stream x clear FIFO error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTCIF6 = 0x200000;   // Stream x clear transfer complete interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CHTIF6 = 0x100000;   // Stream x clear half transfer interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTEIF6 = 0x80000;    // Stream x clear transfer error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CDMEIF6 = 0x40000;   // Stream x clear direct mode error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CFEIF6 = 0x10000;    // Stream x clear FIFO error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTCIF5 = 0x800;      // Stream x clear transfer complete interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CHTIF5 = 0x400;      // Stream x clear half transfer interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTEIF5 = 0x200;      // Stream x clear transfer error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CDMEIF5 = 0x100;     // Stream x clear direct mode error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CFEIF5 = 0x40;       // Stream x clear FIFO error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTCIF4 = 0x20;       // Stream x clear transfer complete interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CHTIF4 = 0x10;       // Stream x clear half transfer interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CTEIF4 = 0x8;        // Stream x clear transfer error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CDMEIF4 = 0x4;       // Stream x clear direct mode error interrupt flag (x = 7..4)
    static constexpr uint32_t HIFCR_CFEIF4 = 0x1;        // Stream x clear FIFO error interrupt flag (x = 7..4)

    static constexpr uint32_t S0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S0CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S0CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S0CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S0CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S0CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S0CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S0CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S0CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S0CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S0CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S0CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S0CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S0CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S0CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S0CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S0CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S0CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S0CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S0NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S0NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S0PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S0M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S0M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S0FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S0FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S0FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S0FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S0FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S1CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S1CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S1CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S1CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S1CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S1CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S1CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S1CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S1CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S1CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S1CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S1CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S1CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S1CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S1CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S1CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S1CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S1CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S1CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S1NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S1NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S1PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S1M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S1M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S1FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S1FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S1FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S1FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S1FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S2CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S2CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S2CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S2CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S2CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S2CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S2CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S2CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S2CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S2CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S2CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S2CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S2CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S2CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S2CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S2CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S2CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S2CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S2CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S2NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S2NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S2PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S2M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S2M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S2FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S2FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S2FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S2FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S2FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S3CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S3CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S3CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S3CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S3CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S3CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S3CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S3CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S3CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S3CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S3CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S3CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S3CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S3CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S3CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S3CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S3CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S3CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S3CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S3NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S3NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S3PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S3M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S3M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S3FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S3FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S3FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S3FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S3FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S4CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S4CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S4CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S4CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S4CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S4CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S4CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S4CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S4CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S4CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S4CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S4CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S4CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S4CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S4CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S4CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S4CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S4CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S4CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S4NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S4NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S4PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S4M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S4M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S4FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S4FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S4FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S4FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S4FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S5CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S5CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S5CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S5CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S5CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S5CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S5CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S5CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S5CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S5CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S5CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S5CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S5CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S5CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S5CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S5CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S5CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S5CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S5CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S5NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S5NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S5PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S5M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S5M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S5FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S5FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S5FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S5FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S5FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S6CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S6CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S6CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S6CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S6CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S6CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S6CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S6CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S6CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S6CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S6CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S6CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S6CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S6CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S6CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S6CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S6CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S6CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S6CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S6NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S6NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S6PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S6M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S6M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S6FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S6FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S6FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S6FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S6FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t S7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S7CR_MBURST =         // Memory burst transfer configuration
        bit_field_t<23, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S7CR_PBURST =         // Peripheral burst transfer configuration
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t S7CR_ACK = 0x100000;  // ACK
    static constexpr uint32_t S7CR_CT = 0x80000;    // Current target (only in double buffer mode)
    static constexpr uint32_t S7CR_DBM = 0x40000;   // Double buffer mode
    template<uint32_t X>
    static constexpr uint32_t S7CR_PL =             // Priority level
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t S7CR_PINCOS = 0x8000; // Peripheral increment offset size
    template<uint32_t X>
    static constexpr uint32_t S7CR_MSIZE =          // Memory data size
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t S7CR_PSIZE =          // Peripheral data size
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t S7CR_MINC = 0x400;    // Memory increment mode
    static constexpr uint32_t S7CR_PINC = 0x200;    // Peripheral increment mode
    static constexpr uint32_t S7CR_CIRC = 0x100;    // Circular mode
    template<uint32_t X>
    static constexpr uint32_t S7CR_DIR =            // Data transfer direction
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t S7CR_PFCTRL = 0x20;   // Peripheral flow controller
    static constexpr uint32_t S7CR_TCIE = 0x10;     // Transfer complete interrupt enable
    static constexpr uint32_t S7CR_HTIE = 0x8;      // Half transfer interrupt enable
    static constexpr uint32_t S7CR_TEIE = 0x4;      // Transfer error interrupt enable
    static constexpr uint32_t S7CR_DMEIE = 0x2;     // Direct mode error interrupt enable
    static constexpr uint32_t S7CR_EN = 0x1;        // Stream enable / flag stream ready when read low

    static constexpr uint32_t S7NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t S7NDTR_NDT =   // Number of data items to transfer
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t S7PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t S7M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S7M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t S7FCR_RESET_VALUE = 0x21;
    static constexpr uint32_t S7FCR_FEIE = 0x80; // FIFO error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t S7FCR_FS =         // FIFO status
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t S7FCR_DMDIS = 0x4; // Direct mode disable
    template<uint32_t X>
    static constexpr uint32_t S7FCR_FTH =        // FIFO threshold selection
        bit_field_t<0, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DMA2>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DMA1>
{
    typedef stm32h742x_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DMA2>
{
    typedef stm32h742x_dma1_t T;
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

