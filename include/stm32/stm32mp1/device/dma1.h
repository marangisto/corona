#pragma once

////
//
//      STM32MP1 DMA1 peripherals
//
////

////
//
//      DMA1
//
////

struct stm32mp15xxx_dma1_t
{
    volatile uint32_t DMA_LISR;    // [read-only] DMA low interrupt status register
    volatile uint32_t DMA_HISR;    // [read-only] DMA high interrupt status register
    volatile uint32_t DMA_LIFCR;   // [write-only] DMA low interrupt flag clear register
    volatile uint32_t DMA_HIFCR;   // [write-only] DMA high interrupt flag clear register
    volatile uint32_t DMA_S0CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S0NDTR;  // [read-write] DMA stream 0 number of data register
    volatile uint32_t DMA_S0PAR;   // [read-write] DMA stream 0 peripheral address register
    volatile uint32_t DMA_S0M0AR;  // [read-write] DMA stream 0 memory 0 address register
    volatile uint32_t DMA_S0M1AR;  // [read-write] DMA stream 0 memory 1 address register
    volatile uint32_t DMA_S0FCR;   // DMA stream 0 FIFO control register
    volatile uint32_t DMA_S1CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S1NDTR;  // [read-write] DMA stream 1 number of data register
    volatile uint32_t DMA_S1PAR;   // [read-write] DMA stream 1 peripheral address register
    volatile uint32_t DMA_S1M0AR;  // [read-write] DMA stream 1 memory 0 address register
    volatile uint32_t DMA_S1M1AR;  // [read-write] DMA stream 1 memory 1 address register
    volatile uint32_t DMA_S1FCR;   // DMA stream 1 FIFO control register
    volatile uint32_t DMA_S2CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S2NDTR;  // [read-write] DMA stream 2 number of data register
    volatile uint32_t DMA_S2PAR;   // [read-write] DMA stream 2 peripheral address register
    volatile uint32_t DMA_S2M0AR;  // [read-write] DMA stream 2 memory 0 address register
    volatile uint32_t DMA_S2M1AR;  // [read-write] DMA stream 2 memory 1 address register
    volatile uint32_t DMA_S2FCR;   // DMA stream 2 FIFO control register
    volatile uint32_t DMA_S3CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S3NDTR;  // [read-write] DMA stream 3 number of data register
    volatile uint32_t DMA_S3PAR;   // [read-write] DMA stream 3 peripheral address register
    volatile uint32_t DMA_S3M0AR;  // [read-write] DMA stream 3 memory 0 address register
    volatile uint32_t DMA_S3M1AR;  // [read-write] DMA stream 3 memory 1 address register
    volatile uint32_t DMA_S3FCR;   // DMA stream 3 FIFO control register
    volatile uint32_t DMA_S4CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S4NDTR;  // [read-write] DMA stream 4 number of data register
    volatile uint32_t DMA_S4PAR;   // [read-write] DMA stream 4 peripheral address register
    volatile uint32_t DMA_S4M0AR;  // [read-write] DMA stream 4 memory 0 address register
    volatile uint32_t DMA_S4M1AR;  // [read-write] DMA stream 4 memory 1 address register
    volatile uint32_t DMA_S4FCR;   // DMA stream 4 FIFO control register
    volatile uint32_t DMA_S5CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S5NDTR;  // [read-write] DMA stream 5 number of data register
    volatile uint32_t DMA_S5PAR;   // [read-write] DMA stream 5 peripheral address register
    volatile uint32_t DMA_S5M0AR;  // [read-write] DMA stream 5 memory 0 address register
    volatile uint32_t DMA_S5M1AR;  // [read-write] DMA stream 5 memory 1 address register
    volatile uint32_t DMA_S5FCR;   // DMA stream 5 FIFO control register
    volatile uint32_t DMA_S6CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S6NDTR;  // [read-write] DMA stream 6 number of data register
    volatile uint32_t DMA_S6PAR;   // [read-write] DMA stream 6 peripheral address register
    volatile uint32_t DMA_S6M0AR;  // [read-write] DMA stream 6 memory 0 address register
    volatile uint32_t DMA_S6M1AR;  // [read-write] DMA stream 6 memory 1 address register
    volatile uint32_t DMA_S6FCR;   // DMA stream 6 FIFO control register
    volatile uint32_t DMA_S7CR;    // [read-write] This register is used to configure the concerned stream.
    volatile uint32_t DMA_S7NDTR;  // [read-write] DMA stream 7 number of data register
    volatile uint32_t DMA_S7PAR;   // [read-write] DMA stream 7 peripheral address register
    volatile uint32_t DMA_S7M0AR;  // [read-write] DMA stream 7 memory 0 address register
    volatile uint32_t DMA_S7M1AR;  // [read-write] DMA stream 7 memory 1 address register
    volatile uint32_t DMA_S7FCR;   // DMA stream 7 FIFO control register
    reserved_t<0xc7> _0x3ec;
    volatile uint32_t DMA_HWCFGR2; // [read-only] DMA hardware configuration 2register
    volatile uint32_t DMA_HWCFGR1; // [read-only] DMA hardware configuration 1 register
    volatile uint32_t DMA_VERR;    // [read-only] This register identifies the version of the IP.
    volatile uint32_t DMA_IPDR;    // [read-only] DMA IP identification register
    volatile uint32_t DMA_SIDR;    // [read-only] DMA size identification register

    static constexpr uint32_t DMA_LISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_LISR_FEIF0 = 0x1;        // FEIF0
    static constexpr uint32_t DMA_LISR_DMEIF0 = 0x4;       // DMEIF0
    static constexpr uint32_t DMA_LISR_TEIF0 = 0x8;        // TEIF0
    static constexpr uint32_t DMA_LISR_HTIF0 = 0x10;       // HTIF0
    static constexpr uint32_t DMA_LISR_TCIF0 = 0x20;       // TCIF0
    static constexpr uint32_t DMA_LISR_FEIF1 = 0x40;       // FEIF1
    static constexpr uint32_t DMA_LISR_DMEIF1 = 0x100;     // DMEIF1
    static constexpr uint32_t DMA_LISR_TEIF1 = 0x200;      // TEIF1
    static constexpr uint32_t DMA_LISR_HTIF1 = 0x400;      // HTIF1
    static constexpr uint32_t DMA_LISR_TCIF1 = 0x800;      // TCIF1
    static constexpr uint32_t DMA_LISR_FEIF2 = 0x10000;    // FEIF2
    static constexpr uint32_t DMA_LISR_DMEIF2 = 0x40000;   // DMEIF2
    static constexpr uint32_t DMA_LISR_TEIF2 = 0x80000;    // TEIF2
    static constexpr uint32_t DMA_LISR_HTIF2 = 0x100000;   // HTIF2
    static constexpr uint32_t DMA_LISR_TCIF2 = 0x200000;   // TCIF2
    static constexpr uint32_t DMA_LISR_FEIF3 = 0x400000;   // FEIF3
    static constexpr uint32_t DMA_LISR_DMEIF3 = 0x1000000; // DMEIF3
    static constexpr uint32_t DMA_LISR_TEIF3 = 0x2000000;  // TEIF3
    static constexpr uint32_t DMA_LISR_HTIF3 = 0x4000000;  // HTIF3
    static constexpr uint32_t DMA_LISR_TCIF3 = 0x8000000;  // TCIF3

    static constexpr uint32_t DMA_HISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_HISR_FEIF4 = 0x1;        // FEIF4
    static constexpr uint32_t DMA_HISR_DMEIF4 = 0x4;       // DMEIF4
    static constexpr uint32_t DMA_HISR_TEIF4 = 0x8;        // TEIF4
    static constexpr uint32_t DMA_HISR_HTIF4 = 0x10;       // HTIF4
    static constexpr uint32_t DMA_HISR_TCIF4 = 0x20;       // TCIF4
    static constexpr uint32_t DMA_HISR_FEIF5 = 0x40;       // FEIF5
    static constexpr uint32_t DMA_HISR_DMEIF5 = 0x100;     // DMEIF5
    static constexpr uint32_t DMA_HISR_TEIF5 = 0x200;      // TEIF5
    static constexpr uint32_t DMA_HISR_HTIF5 = 0x400;      // HTIF5
    static constexpr uint32_t DMA_HISR_TCIF5 = 0x800;      // TCIF5
    static constexpr uint32_t DMA_HISR_FEIF6 = 0x10000;    // FEIF6
    static constexpr uint32_t DMA_HISR_DMEIF6 = 0x40000;   // DMEIF6
    static constexpr uint32_t DMA_HISR_TEIF6 = 0x80000;    // TEIF6
    static constexpr uint32_t DMA_HISR_HTIF6 = 0x100000;   // HTIF6
    static constexpr uint32_t DMA_HISR_TCIF6 = 0x200000;   // TCIF6
    static constexpr uint32_t DMA_HISR_FEIF7 = 0x400000;   // FEIF7
    static constexpr uint32_t DMA_HISR_DMEIF7 = 0x1000000; // DMEIF7
    static constexpr uint32_t DMA_HISR_TEIF7 = 0x2000000;  // TEIF7
    static constexpr uint32_t DMA_HISR_HTIF7 = 0x4000000;  // HTIF7
    static constexpr uint32_t DMA_HISR_TCIF7 = 0x8000000;  // TCIF7

    static constexpr uint32_t DMA_LIFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_LIFCR_CFEIF0 = 0x1;        // CFEIF0
    static constexpr uint32_t DMA_LIFCR_CDMEIF0 = 0x4;       // CDMEIF0
    static constexpr uint32_t DMA_LIFCR_CTEIF0 = 0x8;        // CTEIF0
    static constexpr uint32_t DMA_LIFCR_CHTIF0 = 0x10;       // CHTIF0
    static constexpr uint32_t DMA_LIFCR_CTCIF0 = 0x20;       // CTCIF0
    static constexpr uint32_t DMA_LIFCR_CFEIF1 = 0x40;       // CFEIF1
    static constexpr uint32_t DMA_LIFCR_CDMEIF1 = 0x100;     // CDMEIF1
    static constexpr uint32_t DMA_LIFCR_CTEIF1 = 0x200;      // CTEIF1
    static constexpr uint32_t DMA_LIFCR_CHTIF1 = 0x400;      // CHTIF1
    static constexpr uint32_t DMA_LIFCR_CTCIF1 = 0x800;      // CTCIF1
    static constexpr uint32_t DMA_LIFCR_CFEIF2 = 0x10000;    // CFEIF2
    static constexpr uint32_t DMA_LIFCR_CDMEIF2 = 0x40000;   // CDMEIF2
    static constexpr uint32_t DMA_LIFCR_CTEIF2 = 0x80000;    // CTEIF2
    static constexpr uint32_t DMA_LIFCR_CHTIF2 = 0x100000;   // CHTIF2
    static constexpr uint32_t DMA_LIFCR_CTCIF2 = 0x200000;   // CTCIF2
    static constexpr uint32_t DMA_LIFCR_CFEIF3 = 0x400000;   // CFEIF3
    static constexpr uint32_t DMA_LIFCR_CDMEIF3 = 0x1000000; // CDMEIF3
    static constexpr uint32_t DMA_LIFCR_CTEIF3 = 0x2000000;  // CTEIF3
    static constexpr uint32_t DMA_LIFCR_CHTIF3 = 0x4000000;  // CHTIF3
    static constexpr uint32_t DMA_LIFCR_CTCIF3 = 0x8000000;  // CTCIF3

    static constexpr uint32_t DMA_HIFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_HIFCR_CFEIF4 = 0x1;        // CFEIF4
    static constexpr uint32_t DMA_HIFCR_CDMEIF4 = 0x4;       // CDMEIF4
    static constexpr uint32_t DMA_HIFCR_CTEIF4 = 0x8;        // CTEIF4
    static constexpr uint32_t DMA_HIFCR_CHTIF4 = 0x10;       // CHTIF4
    static constexpr uint32_t DMA_HIFCR_CTCIF4 = 0x20;       // CTCIF4
    static constexpr uint32_t DMA_HIFCR_CFEIF5 = 0x40;       // CFEIF5
    static constexpr uint32_t DMA_HIFCR_CDMEIF5 = 0x100;     // CDMEIF5
    static constexpr uint32_t DMA_HIFCR_CTEIF5 = 0x200;      // CTEIF5
    static constexpr uint32_t DMA_HIFCR_CHTIF5 = 0x400;      // CHTIF5
    static constexpr uint32_t DMA_HIFCR_CTCIF5 = 0x800;      // CTCIF5
    static constexpr uint32_t DMA_HIFCR_CFEIF6 = 0x10000;    // CFEIF6
    static constexpr uint32_t DMA_HIFCR_CDMEIF6 = 0x40000;   // CDMEIF6
    static constexpr uint32_t DMA_HIFCR_CTEIF6 = 0x80000;    // CTEIF6
    static constexpr uint32_t DMA_HIFCR_CHTIF6 = 0x100000;   // CHTIF6
    static constexpr uint32_t DMA_HIFCR_CTCIF6 = 0x200000;   // CTCIF6
    static constexpr uint32_t DMA_HIFCR_CFEIF7 = 0x400000;   // CFEIF7
    static constexpr uint32_t DMA_HIFCR_CDMEIF7 = 0x1000000; // CDMEIF7
    static constexpr uint32_t DMA_HIFCR_CTEIF7 = 0x2000000;  // CTEIF7
    static constexpr uint32_t DMA_HIFCR_CHTIF7 = 0x4000000;  // CHTIF7
    static constexpr uint32_t DMA_HIFCR_CTCIF7 = 0x8000000;  // CTCIF7

    static constexpr uint32_t DMA_S0CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S0CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S0CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S0CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S0CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S0CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S0CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S0CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S0CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S0CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S0CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S0CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S0CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S0CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S0NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S0NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S0PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S0M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S0M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S0FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S0FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S0FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S0FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S0FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S1CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S1CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S1CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S1CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S1CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S1CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S1CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S1CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S1CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S1CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S1CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S1CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S1CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S1NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S1NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S1PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S1M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S1M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S1FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S1FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S1FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S1FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S1FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S2CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S2CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S2CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S2CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S2CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S2CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S2CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S2CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S2CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S2CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S2CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S2CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S2CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S2NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S2NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S2PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S2M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S2M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S2FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S2FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S2FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S2FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S2FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S3CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S3CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S3CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S3CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S3CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S3CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S3CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S3CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S3CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S3CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S3CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S3CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S3CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S3NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S3NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S3PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S3M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S3M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S3FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S3FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S3FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S3FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S3FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S4CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S4CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S4CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S4CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S4CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S4CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S4CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S4CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S4CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S4CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S4CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S4CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S4CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S4NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S4NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S4PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S4M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S4M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S4FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S4FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S4FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S4FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S4FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S5CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S5CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S5CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S5CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S5CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S5CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S5CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S5CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S5CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S5CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S5CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S5CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S5CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S5CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S5NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S5NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S5PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S5M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S5M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S5FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S5FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S5FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S5FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S5FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S6CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S6CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S6CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S6CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S6CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S6CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S6CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S6CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S6CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S6CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S6CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S6CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S6CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S6CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S6NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S6NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S6PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S6M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S6M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S6FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S6FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S6FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S6FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S6FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_S7CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMA_S7CR_EN = 0x1;        // EN
    static constexpr uint32_t DMA_S7CR_DMEIE = 0x2;     // DMEIE
    static constexpr uint32_t DMA_S7CR_TEIE = 0x4;      // TEIE
    static constexpr uint32_t DMA_S7CR_HTIE = 0x8;      // HTIE
    static constexpr uint32_t DMA_S7CR_TCIE = 0x10;     // TCIE
    static constexpr uint32_t DMA_S7CR_PFCTRL = 0x20;   // PFCTRL
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_DIR =            // DIR
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DMA_S7CR_CIRC = 0x100;    // CIRC
    static constexpr uint32_t DMA_S7CR_PINC = 0x200;    // PINC
    static constexpr uint32_t DMA_S7CR_MINC = 0x400;    // MINC
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_PSIZE =          // PSIZE
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_MSIZE =          // MSIZE
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t DMA_S7CR_PINCOS = 0x8000; // PINCOS
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_PL =             // PL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DMA_S7CR_DBM = 0x40000;   // DBM
    static constexpr uint32_t DMA_S7CR_CT = 0x80000;    // CT
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_PBURST =         // PBURST
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_S7CR_MBURST =         // MBURST
        bit_field_t<23, 0x3>::value<X>();

    static constexpr uint32_t DMA_S7NDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMA_S7NDTR_NDT =   // NDT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DMA_S7PAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S7M0AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S7M1AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMA_S7FCR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t DMA_S7FCR_FTH =        // FTH
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_S7FCR_DMDIS = 0x4; // DMDIS
    template<uint32_t X>
    static constexpr uint32_t DMA_S7FCR_FS =         // FS
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DMA_S7FCR_FEIE = 0x80; // FEIE

    static constexpr uint32_t DMA_HWCFGR2_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR2_FIFO_SIZE =              // FIFO_SIZE
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DMA_HWCFGR2_WRITE_BUFFERABLE = 0x10; // WRITE_BUFFERABLE
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR2_CHSEL_WIDTH =            // CHSEL_WIDTH
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t DMA_HWCFGR1_RESET_VALUE = 0x22222222;
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF0 =   // DMA_DEF0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF1 =   // DMA_DEF1
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF2 =   // DMA_DEF2
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF3 =   // DMA_DEF3
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF4 =   // DMA_DEF4
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF5 =   // DMA_DEF5
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF6 =   // DMA_DEF6
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_HWCFGR1_DMA_DEF7 =   // DMA_DEF7
        bit_field_t<28, 0x3>::value<X>();

    static constexpr uint32_t DMA_VERR_RESET_VALUE = 0x14;
    template<uint32_t X>
    static constexpr uint32_t DMA_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMA_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DMA_IPDR_RESET_VALUE = 0x100002;

    static constexpr uint32_t DMA_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, DMA1>
{
    typedef stm32mp15xxx_dma1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, DMA2>
{
    typedef stm32mp15xxx_dma1_t T;
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

