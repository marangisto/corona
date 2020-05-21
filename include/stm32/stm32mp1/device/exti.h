#pragma once

////
//
//      STM32MP1 EXTI peripherals
//
////

////
//
//      EXTI
//
////

struct stm32mp15xxx_exti_t
{
    volatile uint32_t EXTI_RTSR1;    // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_FTSR1;    // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_SWIER1;   // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_RPR1;     // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_FPR1;     // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_TZENR1;   // [read-write] This register provides TrustZone Write access security, a non-secure write access will generate a bus error. A non-secure read will return the register data. Contains only register bits for TrustZone capable Input events.
    reserved_t<0x7> _0x34;
    volatile uint32_t EXTI_TZENR2;   // [read-write] This register provides TrustZone Write access security, a non-secure write access will generate a bus error. A non-secure read will return the register data. Contains only register bits for TrustZone capable Input events.
    reserved_t<0x2> _0x40;
    volatile uint32_t EXTI_RTSR3;    // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_FTSR3;    // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_SWIER3;   // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_RPR3;     // [read-write] Contains only register bits for configurable events.
    volatile uint32_t EXTI_FPR3;     // [read-write] Contains only register bits for configurable events.
    reserved_t<0x3> _0x60;
    volatile uint32_t EXTI_EXTICR1;  // [read-write] EXTIm fields contain only the number of bits in line with the nb_ioport configuration.
    volatile uint32_t EXTI_EXTICR2;  // [read-write] EXTIm fields contain only the number of bits in line with the nb_ioport configuration.
    volatile uint32_t EXTI_EXTICR3;  // [read-write] EXTIm fields contain only the number of bits in line with the nb_ioport configuration.
    volatile uint32_t EXTI_EXTICR4;  // [read-write] EXTIm fields contain only the number of bits in line with the nb_ioport configuration.
    reserved_t<0x4> _0x80;
    volatile uint32_t EXTI_IMR1;     // [read-write] Contains register bits for configurable events and Direct events.
    volatile uint32_t EXTI_EMR1;     // [read-write] EXTI CPU wakeup with event mask register
    reserved_t<0x2> _0x90;
    volatile uint32_t EXTI_IMR2;     // [read-write] Contains register bits for configurable events and direct events.
    reserved_t<0x3> _0xa0;
    volatile uint32_t EXTI_IMR3;     // [read-write] Contains register bits for configurable events and direct events.
    volatile uint32_t EXTI_EMR3;     // [read-write] EXTI CPU wakeup with event mask register
    reserved_t<0x6> _0xc0;
    volatile uint32_t EXTI_C2IMR1;   // [read-write] Contains register bits for configurable events and Direct events.
    volatile uint32_t EXTI_C2EMR1;   // [read-write] EXTI CPU2 wakeup with event mask register
    reserved_t<0x2> _0xd0;
    volatile uint32_t EXTI_C2IMR2;   // [read-write] Contains register bits for configurable events and direct events.
    reserved_t<0x3> _0xe0;
    volatile uint32_t EXTI_C2IMR3;   // [read-write] Contains register bits for configurable events and direct events.
    volatile uint32_t EXTI_C2EMR3;   // [read-write] EXTI CPU2 wakeup with event mask register
    reserved_t<0xb6> _0x3c0;
    volatile uint32_t EXTI_HWCFGR13; // [read-only] EXTI hardware configuration register 13
    volatile uint32_t EXTI_HWCFGR12; // [read-only] EXTI hardware configuration register 12
    volatile uint32_t EXTI_HWCFGR11; // [read-only] EXTI hardware configuration register 11
    reserved_t<0x3> _0x3d8;
    volatile uint32_t EXTI_HWCFGR7;  // [read-only] EXTI hardware configuration register 7
    volatile uint32_t EXTI_HWCFGR6;  // [read-only] EXTI hardware configuration register 6
    volatile uint32_t EXTI_HWCFGR5;  // [read-only] EXTI hardware configuration register 5
    volatile uint32_t EXTI_HWCFGR4;  // [read-only] EXTI hardware configuration register 4
    volatile uint32_t EXTI_HWCFGR3;  // [read-only] EXTI hardware configuration register 3
    volatile uint32_t EXTI_HWCFGR2;  // [read-only] EXTI hardware configuration register 2
    volatile uint32_t EXTI_HWCFGR1;  // [read-only] EXTI hardware configuration register 1
    volatile uint32_t EXTI_VERR;     // [read-only] EXTI IP version register
    volatile uint32_t EXTI_IPIDR;    // [read-only] EXTI identification register
    volatile uint32_t EXTI_SIDR;     // [read-only] EXTI size ID register

    static constexpr uint32_t EXTI_RTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_RTSR1_RT0 = 0x1;      // RT0
    static constexpr uint32_t EXTI_RTSR1_RT1 = 0x2;      // RT1
    static constexpr uint32_t EXTI_RTSR1_RT2 = 0x4;      // RT2
    static constexpr uint32_t EXTI_RTSR1_RT3 = 0x8;      // RT3
    static constexpr uint32_t EXTI_RTSR1_RT4 = 0x10;     // RT4
    static constexpr uint32_t EXTI_RTSR1_RT5 = 0x20;     // RT5
    static constexpr uint32_t EXTI_RTSR1_RT6 = 0x40;     // RT6
    static constexpr uint32_t EXTI_RTSR1_RT7 = 0x80;     // RT7
    static constexpr uint32_t EXTI_RTSR1_RT8 = 0x100;    // RT8
    static constexpr uint32_t EXTI_RTSR1_RT9 = 0x200;    // RT9
    static constexpr uint32_t EXTI_RTSR1_RT10 = 0x400;   // RT10
    static constexpr uint32_t EXTI_RTSR1_RT11 = 0x800;   // RT11
    static constexpr uint32_t EXTI_RTSR1_RT12 = 0x1000;  // RT12
    static constexpr uint32_t EXTI_RTSR1_RT13 = 0x2000;  // RT13
    static constexpr uint32_t EXTI_RTSR1_RT14 = 0x4000;  // RT14
    static constexpr uint32_t EXTI_RTSR1_RT15 = 0x8000;  // RT15
    static constexpr uint32_t EXTI_RTSR1_RT16 = 0x10000; // RT16

    static constexpr uint32_t EXTI_FTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_FTSR1_FT0 = 0x1;      // FT0
    static constexpr uint32_t EXTI_FTSR1_FT1 = 0x2;      // FT1
    static constexpr uint32_t EXTI_FTSR1_FT2 = 0x4;      // FT2
    static constexpr uint32_t EXTI_FTSR1_FT3 = 0x8;      // FT3
    static constexpr uint32_t EXTI_FTSR1_FT4 = 0x10;     // FT4
    static constexpr uint32_t EXTI_FTSR1_FT5 = 0x20;     // FT5
    static constexpr uint32_t EXTI_FTSR1_FT6 = 0x40;     // FT6
    static constexpr uint32_t EXTI_FTSR1_FT7 = 0x80;     // FT7
    static constexpr uint32_t EXTI_FTSR1_FT8 = 0x100;    // FT8
    static constexpr uint32_t EXTI_FTSR1_FT9 = 0x200;    // FT9
    static constexpr uint32_t EXTI_FTSR1_FT10 = 0x400;   // FT10
    static constexpr uint32_t EXTI_FTSR1_FT11 = 0x800;   // FT11
    static constexpr uint32_t EXTI_FTSR1_FT12 = 0x1000;  // FT12
    static constexpr uint32_t EXTI_FTSR1_FT13 = 0x2000;  // FT13
    static constexpr uint32_t EXTI_FTSR1_FT14 = 0x4000;  // FT14
    static constexpr uint32_t EXTI_FTSR1_FT15 = 0x8000;  // FT15
    static constexpr uint32_t EXTI_FTSR1_FT16 = 0x10000; // FT16

    static constexpr uint32_t EXTI_SWIER1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_SWIER1_SWI0 = 0x1;      // SWI0
    static constexpr uint32_t EXTI_SWIER1_SWI1 = 0x2;      // SWI1
    static constexpr uint32_t EXTI_SWIER1_SWI2 = 0x4;      // SWI2
    static constexpr uint32_t EXTI_SWIER1_SWI3 = 0x8;      // SWI3
    static constexpr uint32_t EXTI_SWIER1_SWI4 = 0x10;     // SWI4
    static constexpr uint32_t EXTI_SWIER1_SWI5 = 0x20;     // SWI5
    static constexpr uint32_t EXTI_SWIER1_SWI6 = 0x40;     // SWI6
    static constexpr uint32_t EXTI_SWIER1_SWI7 = 0x80;     // SWI7
    static constexpr uint32_t EXTI_SWIER1_SWI8 = 0x100;    // SWI8
    static constexpr uint32_t EXTI_SWIER1_SWI9 = 0x200;    // SWI9
    static constexpr uint32_t EXTI_SWIER1_SWI10 = 0x400;   // SWI10
    static constexpr uint32_t EXTI_SWIER1_SWI11 = 0x800;   // SWI11
    static constexpr uint32_t EXTI_SWIER1_SWI12 = 0x1000;  // SWI12
    static constexpr uint32_t EXTI_SWIER1_SWI13 = 0x2000;  // SWI13
    static constexpr uint32_t EXTI_SWIER1_SWI14 = 0x4000;  // SWI14
    static constexpr uint32_t EXTI_SWIER1_SWI15 = 0x8000;  // SWI15
    static constexpr uint32_t EXTI_SWIER1_SWI16 = 0x10000; // SWI16

    static constexpr uint32_t EXTI_RPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_RPR1_RPIF0 = 0x1;      // RPIF0
    static constexpr uint32_t EXTI_RPR1_RPIF1 = 0x2;      // RPIF1
    static constexpr uint32_t EXTI_RPR1_RPIF2 = 0x4;      // RPIF2
    static constexpr uint32_t EXTI_RPR1_RPIF3 = 0x8;      // RPIF3
    static constexpr uint32_t EXTI_RPR1_RPIF4 = 0x10;     // RPIF4
    static constexpr uint32_t EXTI_RPR1_RPIF5 = 0x20;     // RPIF5
    static constexpr uint32_t EXTI_RPR1_RPIF6 = 0x40;     // RPIF6
    static constexpr uint32_t EXTI_RPR1_RPIF7 = 0x80;     // RPIF7
    static constexpr uint32_t EXTI_RPR1_RPIF8 = 0x100;    // RPIF8
    static constexpr uint32_t EXTI_RPR1_RPIF9 = 0x200;    // RPIF9
    static constexpr uint32_t EXTI_RPR1_RPIF10 = 0x400;   // RPIF10
    static constexpr uint32_t EXTI_RPR1_RPIF11 = 0x800;   // RPIF11
    static constexpr uint32_t EXTI_RPR1_RPIF12 = 0x1000;  // RPIF12
    static constexpr uint32_t EXTI_RPR1_RPIF13 = 0x2000;  // RPIF13
    static constexpr uint32_t EXTI_RPR1_RPIF14 = 0x4000;  // RPIF14
    static constexpr uint32_t EXTI_RPR1_RPIF15 = 0x8000;  // RPIF15
    static constexpr uint32_t EXTI_RPR1_RPIF16 = 0x10000; // RPIF16

    static constexpr uint32_t EXTI_FPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_FPR1_FPIF0 = 0x1;      // FPIF0
    static constexpr uint32_t EXTI_FPR1_FPIF1 = 0x2;      // FPIF1
    static constexpr uint32_t EXTI_FPR1_FPIF2 = 0x4;      // FPIF2
    static constexpr uint32_t EXTI_FPR1_FPIF3 = 0x8;      // FPIF3
    static constexpr uint32_t EXTI_FPR1_FPIF4 = 0x10;     // FPIF4
    static constexpr uint32_t EXTI_FPR1_FPIF5 = 0x20;     // FPIF5
    static constexpr uint32_t EXTI_FPR1_FPIF6 = 0x40;     // FPIF6
    static constexpr uint32_t EXTI_FPR1_FPIF7 = 0x80;     // FPIF7
    static constexpr uint32_t EXTI_FPR1_FPIF8 = 0x100;    // FPIF8
    static constexpr uint32_t EXTI_FPR1_FPIF9 = 0x200;    // FPIF9
    static constexpr uint32_t EXTI_FPR1_FPIF10 = 0x400;   // FPIF10
    static constexpr uint32_t EXTI_FPR1_FPIF11 = 0x800;   // FPIF11
    static constexpr uint32_t EXTI_FPR1_FPIF12 = 0x1000;  // FPIF12
    static constexpr uint32_t EXTI_FPR1_FPIF13 = 0x2000;  // FPIF13
    static constexpr uint32_t EXTI_FPR1_FPIF14 = 0x4000;  // FPIF14
    static constexpr uint32_t EXTI_FPR1_FPIF15 = 0x8000;  // FPIF15
    static constexpr uint32_t EXTI_FPR1_FPIF16 = 0x10000; // FPIF16

    static constexpr uint32_t EXTI_TZENR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_TZENR1_TZEN0 = 0x1;        // TZEN0
    static constexpr uint32_t EXTI_TZENR1_TZEN1 = 0x2;        // TZEN1
    static constexpr uint32_t EXTI_TZENR1_TZEN2 = 0x4;        // TZEN2
    static constexpr uint32_t EXTI_TZENR1_TZEN3 = 0x8;        // TZEN3
    static constexpr uint32_t EXTI_TZENR1_TZEN4 = 0x10;       // TZEN4
    static constexpr uint32_t EXTI_TZENR1_TZEN5 = 0x20;       // TZEN5
    static constexpr uint32_t EXTI_TZENR1_TZEN6 = 0x40;       // TZEN6
    static constexpr uint32_t EXTI_TZENR1_TZEN7 = 0x80;       // TZEN7
    static constexpr uint32_t EXTI_TZENR1_TZEN8 = 0x100;      // TZEN8
    static constexpr uint32_t EXTI_TZENR1_TZEN9 = 0x200;      // TZEN9
    static constexpr uint32_t EXTI_TZENR1_TZEN10 = 0x400;     // TZEN10
    static constexpr uint32_t EXTI_TZENR1_TZEN11 = 0x800;     // TZEN11
    static constexpr uint32_t EXTI_TZENR1_TZEN12 = 0x1000;    // TZEN12
    static constexpr uint32_t EXTI_TZENR1_TZEN13 = 0x2000;    // TZEN13
    static constexpr uint32_t EXTI_TZENR1_TZEN14 = 0x4000;    // TZEN14
    static constexpr uint32_t EXTI_TZENR1_TZEN15 = 0x8000;    // TZEN15
    static constexpr uint32_t EXTI_TZENR1_TZEN17 = 0x20000;   // TZEN17
    static constexpr uint32_t EXTI_TZENR1_TZEN18 = 0x40000;   // TZEN18
    static constexpr uint32_t EXTI_TZENR1_TZEN19 = 0x80000;   // TZEN19
    static constexpr uint32_t EXTI_TZENR1_TZEN24 = 0x1000000; // TZEN24
    static constexpr uint32_t EXTI_TZENR1_TZEN26 = 0x4000000; // TZEN26

    static constexpr uint32_t EXTI_TZENR2_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_TZENR2_TZEN41 = 0x200;      // TZEN41
    static constexpr uint32_t EXTI_TZENR2_TZEN54 = 0x400000;   // TZEN54
    static constexpr uint32_t EXTI_TZENR2_TZEN55 = 0x800000;   // TZEN55
    static constexpr uint32_t EXTI_TZENR2_TZEN56 = 0x1000000;  // TZEN56
    static constexpr uint32_t EXTI_TZENR2_TZEN57 = 0x2000000;  // TZEN57
    static constexpr uint32_t EXTI_TZENR2_TZEN58 = 0x4000000;  // TZEN58
    static constexpr uint32_t EXTI_TZENR2_TZEN59 = 0x8000000;  // TZEN59
    static constexpr uint32_t EXTI_TZENR2_TZEN60 = 0x10000000; // TZEN60

    static constexpr uint32_t EXTI_RTSR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_RTSR3_RT65 = 0x2;   // RT65
    static constexpr uint32_t EXTI_RTSR3_RT66 = 0x4;   // RT66
    static constexpr uint32_t EXTI_RTSR3_RT68 = 0x10;  // RT68
    static constexpr uint32_t EXTI_RTSR3_RT73 = 0x200; // RT73
    static constexpr uint32_t EXTI_RTSR3_RT74 = 0x400; // RT74

    static constexpr uint32_t EXTI_FTSR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_FTSR3_FT65 = 0x2;   // FT65
    static constexpr uint32_t EXTI_FTSR3_FT66 = 0x4;   // FT66
    static constexpr uint32_t EXTI_FTSR3_FT68 = 0x10;  // FT68
    static constexpr uint32_t EXTI_FTSR3_FT73 = 0x200; // FT73
    static constexpr uint32_t EXTI_FTSR3_FT74 = 0x400; // FT74

    static constexpr uint32_t EXTI_SWIER3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_SWIER3_SWI65 = 0x2;   // SWI65
    static constexpr uint32_t EXTI_SWIER3_SWI66 = 0x4;   // SWI66
    static constexpr uint32_t EXTI_SWIER3_SWI68 = 0x10;  // SWI68
    static constexpr uint32_t EXTI_SWIER3_SWI73 = 0x200; // SWI73
    static constexpr uint32_t EXTI_SWIER3_SWI74 = 0x400; // SWI74

    static constexpr uint32_t EXTI_RPR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_RPR3_RPIF65 = 0x2;   // RPIF65
    static constexpr uint32_t EXTI_RPR3_RPIF66 = 0x4;   // RPIF66
    static constexpr uint32_t EXTI_RPR3_RPIF68 = 0x10;  // RPIF68
    static constexpr uint32_t EXTI_RPR3_RPIF73 = 0x200; // RPIF73
    static constexpr uint32_t EXTI_RPR3_RPIF74 = 0x400; // RPIF74

    static constexpr uint32_t EXTI_FPR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_FPR3_FPIF65 = 0x2;   // FPIF65
    static constexpr uint32_t EXTI_FPR3_FPIF66 = 0x4;   // FPIF66
    static constexpr uint32_t EXTI_FPR3_FPIF68 = 0x10;  // FPIF68
    static constexpr uint32_t EXTI_FPR3_FPIF73 = 0x200; // FPIF73
    static constexpr uint32_t EXTI_FPR3_FPIF74 = 0x400; // FPIF74

    static constexpr uint32_t EXTI_EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR1_EXTI0 =   // EXTI0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR1_EXTI1 =   // EXTI1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR1_EXTI2 =   // EXTI2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR1_EXTI3 =   // EXTI3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTI_EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR2_EXTI4 =   // EXTI4
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR2_EXTI5 =   // EXTI5
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR2_EXTI6 =   // EXTI6
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR2_EXTI7 =   // EXTI7
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTI_EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR3_EXTI8 =    // EXTI8
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR3_EXTI9 =    // EXTI9
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR3_EXTI11 =   // EXTI11
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTI_EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR4_EXTI12 =   // EXTI12
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR4_EXTI13 =   // EXTI13
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR4_EXTI14 =   // EXTI14
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_EXTICR4_EXTI15 =   // EXTI15
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTI_IMR1_RESET_VALUE = 0xfffe0000;
    static constexpr uint32_t EXTI_IMR1_IM0 = 0x1;         // IM0
    static constexpr uint32_t EXTI_IMR1_IM1 = 0x2;         // IM1
    static constexpr uint32_t EXTI_IMR1_IM2 = 0x4;         // IM2
    static constexpr uint32_t EXTI_IMR1_IM3 = 0x8;         // IM3
    static constexpr uint32_t EXTI_IMR1_IM4 = 0x10;        // IM4
    static constexpr uint32_t EXTI_IMR1_IM5 = 0x20;        // IM5
    static constexpr uint32_t EXTI_IMR1_IM6 = 0x40;        // IM6
    static constexpr uint32_t EXTI_IMR1_IM7 = 0x80;        // IM7
    static constexpr uint32_t EXTI_IMR1_IM8 = 0x100;       // IM8
    static constexpr uint32_t EXTI_IMR1_IM9 = 0x200;       // IM9
    static constexpr uint32_t EXTI_IMR1_IM10 = 0x400;      // IM10
    static constexpr uint32_t EXTI_IMR1_IM11 = 0x800;      // IM11
    static constexpr uint32_t EXTI_IMR1_IM12 = 0x1000;     // IM12
    static constexpr uint32_t EXTI_IMR1_IM13 = 0x2000;     // IM13
    static constexpr uint32_t EXTI_IMR1_IM14 = 0x4000;     // IM14
    static constexpr uint32_t EXTI_IMR1_IM15 = 0x8000;     // IM15
    static constexpr uint32_t EXTI_IMR1_IM16 = 0x10000;    // IM16
    static constexpr uint32_t EXTI_IMR1_IM17 = 0x20000;    // IM17
    static constexpr uint32_t EXTI_IMR1_IM18 = 0x40000;    // IM18
    static constexpr uint32_t EXTI_IMR1_IM19 = 0x80000;    // IM19
    static constexpr uint32_t EXTI_IMR1_IM20 = 0x100000;   // IM20
    static constexpr uint32_t EXTI_IMR1_IM21 = 0x200000;   // IM21
    static constexpr uint32_t EXTI_IMR1_IM22 = 0x400000;   // IM22
    static constexpr uint32_t EXTI_IMR1_IM23 = 0x800000;   // IM23
    static constexpr uint32_t EXTI_IMR1_IM24 = 0x1000000;  // IM24
    static constexpr uint32_t EXTI_IMR1_IM25 = 0x2000000;  // IM25
    static constexpr uint32_t EXTI_IMR1_IM26 = 0x4000000;  // IM26
    static constexpr uint32_t EXTI_IMR1_IM27 = 0x8000000;  // IM27
    static constexpr uint32_t EXTI_IMR1_IM28 = 0x10000000; // IM28
    static constexpr uint32_t EXTI_IMR1_IM29 = 0x20000000; // IM29
    static constexpr uint32_t EXTI_IMR1_IM30 = 0x40000000; // IM30
    static constexpr uint32_t EXTI_IMR1_IM31 = 0x80000000; // IM31

    static constexpr uint32_t EXTI_EMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_EMR1_EM0 = 0x1;      // EM0
    static constexpr uint32_t EXTI_EMR1_EM1 = 0x2;      // EM1
    static constexpr uint32_t EXTI_EMR1_EM2 = 0x4;      // EM2
    static constexpr uint32_t EXTI_EMR1_EM3 = 0x8;      // EM3
    static constexpr uint32_t EXTI_EMR1_EM4 = 0x10;     // EM4
    static constexpr uint32_t EXTI_EMR1_EM5 = 0x20;     // EM5
    static constexpr uint32_t EXTI_EMR1_EM6 = 0x40;     // EM6
    static constexpr uint32_t EXTI_EMR1_EM7 = 0x80;     // EM7
    static constexpr uint32_t EXTI_EMR1_EM8 = 0x100;    // EM8
    static constexpr uint32_t EXTI_EMR1_EM9 = 0x200;    // EM9
    static constexpr uint32_t EXTI_EMR1_EM10 = 0x400;   // EM10
    static constexpr uint32_t EXTI_EMR1_EM11 = 0x800;   // EM11
    static constexpr uint32_t EXTI_EMR1_EM12 = 0x1000;  // EM12
    static constexpr uint32_t EXTI_EMR1_EM13 = 0x2000;  // EM13
    static constexpr uint32_t EXTI_EMR1_EM14 = 0x4000;  // EM14
    static constexpr uint32_t EXTI_EMR1_EM15 = 0x8000;  // EM15
    static constexpr uint32_t EXTI_EMR1_EM17 = 0x20000; // EM17
    static constexpr uint32_t EXTI_EMR1_EM18 = 0x40000; // EM18
    static constexpr uint32_t EXTI_EMR1_EM19 = 0x80000; // EM19

    static constexpr uint32_t EXTI_IMR2_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t EXTI_IMR2_IM32 = 0x1;        // IM32
    static constexpr uint32_t EXTI_IMR2_IM33 = 0x2;        // IM33
    static constexpr uint32_t EXTI_IMR2_IM34 = 0x4;        // IM34
    static constexpr uint32_t EXTI_IMR2_IM35 = 0x8;        // IM35
    static constexpr uint32_t EXTI_IMR2_IM36 = 0x10;       // IM36
    static constexpr uint32_t EXTI_IMR2_IM37 = 0x20;       // IM37
    static constexpr uint32_t EXTI_IMR2_IM38 = 0x40;       // IM38
    static constexpr uint32_t EXTI_IMR2_IM39 = 0x80;       // IM39
    static constexpr uint32_t EXTI_IMR2_IM40 = 0x100;      // IM40
    static constexpr uint32_t EXTI_IMR2_IM41 = 0x200;      // IM41
    static constexpr uint32_t EXTI_IMR2_IM42 = 0x400;      // IM42
    static constexpr uint32_t EXTI_IMR2_IM43 = 0x800;      // IM43
    static constexpr uint32_t EXTI_IMR2_IM44 = 0x1000;     // IM44
    static constexpr uint32_t EXTI_IMR2_IM45 = 0x2000;     // IM45
    static constexpr uint32_t EXTI_IMR2_IM46 = 0x4000;     // IM46
    static constexpr uint32_t EXTI_IMR2_IM47 = 0x8000;     // IM47
    static constexpr uint32_t EXTI_IMR2_IM48 = 0x10000;    // IM48
    static constexpr uint32_t EXTI_IMR2_IM49 = 0x20000;    // IM49
    static constexpr uint32_t EXTI_IMR2_IM50 = 0x40000;    // IM50
    static constexpr uint32_t EXTI_IMR2_IM51 = 0x80000;    // IM51
    static constexpr uint32_t EXTI_IMR2_IM52 = 0x100000;   // IM52
    static constexpr uint32_t EXTI_IMR2_IM53 = 0x200000;   // IM53
    static constexpr uint32_t EXTI_IMR2_IM54 = 0x400000;   // IM54
    static constexpr uint32_t EXTI_IMR2_IM55 = 0x800000;   // IM55
    static constexpr uint32_t EXTI_IMR2_IM56 = 0x1000000;  // IM56
    static constexpr uint32_t EXTI_IMR2_IM57 = 0x2000000;  // IM57
    static constexpr uint32_t EXTI_IMR2_IM58 = 0x4000000;  // IM58
    static constexpr uint32_t EXTI_IMR2_IM59 = 0x8000000;  // IM59
    static constexpr uint32_t EXTI_IMR2_IM60 = 0x10000000; // IM60
    static constexpr uint32_t EXTI_IMR2_IM61 = 0x20000000; // IM61
    static constexpr uint32_t EXTI_IMR2_IM62 = 0x40000000; // IM62
    static constexpr uint32_t EXTI_IMR2_IM63 = 0x80000000; // IM63

    static constexpr uint32_t EXTI_IMR3_RESET_VALUE = 0xde9;
    static constexpr uint32_t EXTI_IMR3_IM64 = 0x1;   // IM64
    static constexpr uint32_t EXTI_IMR3_IM65 = 0x2;   // IM65
    static constexpr uint32_t EXTI_IMR3_IM66 = 0x4;   // IM66
    static constexpr uint32_t EXTI_IMR3_IM67 = 0x8;   // IM67
    static constexpr uint32_t EXTI_IMR3_IM68 = 0x10;  // IM68
    static constexpr uint32_t EXTI_IMR3_IM69 = 0x20;  // IM69
    static constexpr uint32_t EXTI_IMR3_IM70 = 0x40;  // IM70
    static constexpr uint32_t EXTI_IMR3_IM71 = 0x80;  // IM71
    static constexpr uint32_t EXTI_IMR3_IM72 = 0x100; // IM72
    static constexpr uint32_t EXTI_IMR3_IM73 = 0x200; // IM73
    static constexpr uint32_t EXTI_IMR3_IM74 = 0x400; // IM74
    static constexpr uint32_t EXTI_IMR3_IM75 = 0x800; // IM75

    static constexpr uint32_t EXTI_EMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_EMR3_EM66 = 0x4; // EM66

    static constexpr uint32_t EXTI_C2IMR1_RESET_VALUE = 0xfffe0000;
    static constexpr uint32_t EXTI_C2IMR1_IM0 = 0x1;         // IM0
    static constexpr uint32_t EXTI_C2IMR1_IM1 = 0x2;         // IM1
    static constexpr uint32_t EXTI_C2IMR1_IM2 = 0x4;         // IM2
    static constexpr uint32_t EXTI_C2IMR1_IM3 = 0x8;         // IM3
    static constexpr uint32_t EXTI_C2IMR1_IM4 = 0x10;        // IM4
    static constexpr uint32_t EXTI_C2IMR1_IM5 = 0x20;        // IM5
    static constexpr uint32_t EXTI_C2IMR1_IM6 = 0x40;        // IM6
    static constexpr uint32_t EXTI_C2IMR1_IM7 = 0x80;        // IM7
    static constexpr uint32_t EXTI_C2IMR1_IM8 = 0x100;       // IM8
    static constexpr uint32_t EXTI_C2IMR1_IM9 = 0x200;       // IM9
    static constexpr uint32_t EXTI_C2IMR1_IM10 = 0x400;      // IM10
    static constexpr uint32_t EXTI_C2IMR1_IM11 = 0x800;      // IM11
    static constexpr uint32_t EXTI_C2IMR1_IM12 = 0x1000;     // IM12
    static constexpr uint32_t EXTI_C2IMR1_IM13 = 0x2000;     // IM13
    static constexpr uint32_t EXTI_C2IMR1_IM14 = 0x4000;     // IM14
    static constexpr uint32_t EXTI_C2IMR1_IM15 = 0x8000;     // IM15
    static constexpr uint32_t EXTI_C2IMR1_IM16 = 0x10000;    // IM16
    static constexpr uint32_t EXTI_C2IMR1_IM17 = 0x20000;    // IM17
    static constexpr uint32_t EXTI_C2IMR1_IM18 = 0x40000;    // IM18
    static constexpr uint32_t EXTI_C2IMR1_IM19 = 0x80000;    // IM19
    static constexpr uint32_t EXTI_C2IMR1_IM20 = 0x100000;   // IM20
    static constexpr uint32_t EXTI_C2IMR1_IM21 = 0x200000;   // IM21
    static constexpr uint32_t EXTI_C2IMR1_IM22 = 0x400000;   // IM22
    static constexpr uint32_t EXTI_C2IMR1_IM23 = 0x800000;   // IM23
    static constexpr uint32_t EXTI_C2IMR1_IM24 = 0x1000000;  // IM24
    static constexpr uint32_t EXTI_C2IMR1_IM25 = 0x2000000;  // IM25
    static constexpr uint32_t EXTI_C2IMR1_IM26 = 0x4000000;  // IM26
    static constexpr uint32_t EXTI_C2IMR1_IM27 = 0x8000000;  // IM27
    static constexpr uint32_t EXTI_C2IMR1_IM28 = 0x10000000; // IM28
    static constexpr uint32_t EXTI_C2IMR1_IM29 = 0x20000000; // IM29
    static constexpr uint32_t EXTI_C2IMR1_IM30 = 0x40000000; // IM30
    static constexpr uint32_t EXTI_C2IMR1_IM31 = 0x80000000; // IM31

    static constexpr uint32_t EXTI_C2EMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_C2EMR1_EM0 = 0x1;      // EM0
    static constexpr uint32_t EXTI_C2EMR1_EM1 = 0x2;      // EM1
    static constexpr uint32_t EXTI_C2EMR1_EM2 = 0x4;      // EM2
    static constexpr uint32_t EXTI_C2EMR1_EM3 = 0x8;      // EM3
    static constexpr uint32_t EXTI_C2EMR1_EM4 = 0x10;     // EM4
    static constexpr uint32_t EXTI_C2EMR1_EM5 = 0x20;     // EM5
    static constexpr uint32_t EXTI_C2EMR1_EM6 = 0x40;     // EM6
    static constexpr uint32_t EXTI_C2EMR1_EM7 = 0x80;     // EM7
    static constexpr uint32_t EXTI_C2EMR1_EM8 = 0x100;    // EM8
    static constexpr uint32_t EXTI_C2EMR1_EM9 = 0x200;    // EM9
    static constexpr uint32_t EXTI_C2EMR1_EM10 = 0x400;   // EM10
    static constexpr uint32_t EXTI_C2EMR1_EM11 = 0x800;   // EM11
    static constexpr uint32_t EXTI_C2EMR1_EM12 = 0x1000;  // EM12
    static constexpr uint32_t EXTI_C2EMR1_EM13 = 0x2000;  // EM13
    static constexpr uint32_t EXTI_C2EMR1_EM14 = 0x4000;  // EM14
    static constexpr uint32_t EXTI_C2EMR1_EM15 = 0x8000;  // EM15
    static constexpr uint32_t EXTI_C2EMR1_EM17 = 0x20000; // EM17
    static constexpr uint32_t EXTI_C2EMR1_EM18 = 0x40000; // EM18
    static constexpr uint32_t EXTI_C2EMR1_EM19 = 0x80000; // EM19

    static constexpr uint32_t EXTI_C2IMR2_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t EXTI_C2IMR2_IM32 = 0x1;        // IM32
    static constexpr uint32_t EXTI_C2IMR2_IM33 = 0x2;        // IM33
    static constexpr uint32_t EXTI_C2IMR2_IM34 = 0x4;        // IM34
    static constexpr uint32_t EXTI_C2IMR2_IM35 = 0x8;        // IM35
    static constexpr uint32_t EXTI_C2IMR2_IM36 = 0x10;       // IM36
    static constexpr uint32_t EXTI_C2IMR2_IM37 = 0x20;       // IM37
    static constexpr uint32_t EXTI_C2IMR2_IM38 = 0x40;       // IM38
    static constexpr uint32_t EXTI_C2IMR2_IM39 = 0x80;       // IM39
    static constexpr uint32_t EXTI_C2IMR2_IM40 = 0x100;      // IM40
    static constexpr uint32_t EXTI_C2IMR2_IM41 = 0x200;      // IM41
    static constexpr uint32_t EXTI_C2IMR2_IM42 = 0x400;      // IM42
    static constexpr uint32_t EXTI_C2IMR2_IM43 = 0x800;      // IM43
    static constexpr uint32_t EXTI_C2IMR2_IM44 = 0x1000;     // IM44
    static constexpr uint32_t EXTI_C2IMR2_IM45 = 0x2000;     // IM45
    static constexpr uint32_t EXTI_C2IMR2_IM46 = 0x4000;     // IM46
    static constexpr uint32_t EXTI_C2IMR2_IM47 = 0x8000;     // IM47
    static constexpr uint32_t EXTI_C2IMR2_IM48 = 0x10000;    // IM48
    static constexpr uint32_t EXTI_C2IMR2_IM49 = 0x20000;    // IM49
    static constexpr uint32_t EXTI_C2IMR2_IM50 = 0x40000;    // IM50
    static constexpr uint32_t EXTI_C2IMR2_IM51 = 0x80000;    // IM51
    static constexpr uint32_t EXTI_C2IMR2_IM52 = 0x100000;   // IM52
    static constexpr uint32_t EXTI_C2IMR2_IM53 = 0x200000;   // IM53
    static constexpr uint32_t EXTI_C2IMR2_IM54 = 0x400000;   // IM54
    static constexpr uint32_t EXTI_C2IMR2_IM55 = 0x800000;   // IM55
    static constexpr uint32_t EXTI_C2IMR2_IM56 = 0x1000000;  // IM56
    static constexpr uint32_t EXTI_C2IMR2_IM57 = 0x2000000;  // IM57
    static constexpr uint32_t EXTI_C2IMR2_IM58 = 0x4000000;  // IM58
    static constexpr uint32_t EXTI_C2IMR2_IM59 = 0x8000000;  // IM59
    static constexpr uint32_t EXTI_C2IMR2_IM60 = 0x10000000; // IM60
    static constexpr uint32_t EXTI_C2IMR2_IM61 = 0x20000000; // IM61
    static constexpr uint32_t EXTI_C2IMR2_IM62 = 0x40000000; // IM62
    static constexpr uint32_t EXTI_C2IMR2_IM63 = 0x80000000; // IM63

    static constexpr uint32_t EXTI_C2IMR3_RESET_VALUE = 0xde9;
    static constexpr uint32_t EXTI_C2IMR3_IM64 = 0x1;   // IM64
    static constexpr uint32_t EXTI_C2IMR3_IM65 = 0x2;   // IM65
    static constexpr uint32_t EXTI_C2IMR3_IM66 = 0x4;   // IM66
    static constexpr uint32_t EXTI_C2IMR3_IM67 = 0x8;   // IM67
    static constexpr uint32_t EXTI_C2IMR3_IM68 = 0x10;  // IM68
    static constexpr uint32_t EXTI_C2IMR3_IM69 = 0x20;  // IM69
    static constexpr uint32_t EXTI_C2IMR3_IM70 = 0x40;  // IM70
    static constexpr uint32_t EXTI_C2IMR3_IM71 = 0x80;  // IM71
    static constexpr uint32_t EXTI_C2IMR3_IM72 = 0x100; // IM72
    static constexpr uint32_t EXTI_C2IMR3_IM73 = 0x200; // IM73
    static constexpr uint32_t EXTI_C2IMR3_IM74 = 0x400; // IM74
    static constexpr uint32_t EXTI_C2IMR3_IM75 = 0x800; // IM75

    static constexpr uint32_t EXTI_C2EMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t EXTI_C2EMR3_EM66 = 0x4; // EM66

    static constexpr uint32_t EXTI_HWCFGR13_RESET_VALUE = 0x50effff;

    static constexpr uint32_t EXTI_HWCFGR12_RESET_VALUE = 0x50effff;

    static constexpr uint32_t EXTI_HWCFGR11_RESET_VALUE = 0x50effff;

    static constexpr uint32_t EXTI_HWCFGR7_RESET_VALUE = 0xeffff;

    static constexpr uint32_t EXTI_HWCFGR6_RESET_VALUE = 0xeffff;

    static constexpr uint32_t EXTI_HWCFGR5_RESET_VALUE = 0xeffff;

    static constexpr uint32_t EXTI_HWCFGR4_RESET_VALUE = 0x1ffff;

    static constexpr uint32_t EXTI_HWCFGR3_RESET_VALUE = 0x1ffff;

    static constexpr uint32_t EXTI_HWCFGR2_RESET_VALUE = 0x1ffff;

    static constexpr uint32_t EXTI_HWCFGR1_RESET_VALUE = 0xb214b;
    template<uint32_t X>
    static constexpr uint32_t EXTI_HWCFGR1_NBEVENTS =   // NBEVENTS
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_HWCFGR1_NBCPUS =     // NBCPUS
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_HWCFGR1_CPUEVTEN =   // CPUEVTEN
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_HWCFGR1_NBIOPORT =   // NBIOPORT
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t EXTI_VERR_RESET_VALUE = 0x30;
    template<uint32_t X>
    static constexpr uint32_t EXTI_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTI_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t EXTI_IPIDR_RESET_VALUE = 0xe0001;

    static constexpr uint32_t EXTI_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, EXTI>
{
    typedef stm32mp15xxx_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

