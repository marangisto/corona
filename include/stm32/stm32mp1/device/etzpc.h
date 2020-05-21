#pragma once

////
//
//      STM32MP1 ETZPC peripherals
//
////

////
//
//      ETZPC
//
////

struct stm32mp15xxx_etzpc_t
{
    volatile uint32_t ETZPC_TZMA0_SIZE;    // [read-write] ETZPC ROM secure size definition
    volatile uint32_t ETZPC_TZMA1_SIZE;    // [read-write] ETZPC RAM secure size definition
    reserved_t<0x2> _0x10;
    volatile uint32_t ETZPC_DECPROT0;      // [read-write] Register reset values
    volatile uint32_t ETZPC_DECPROT1;      // [read-write] Register reset values
    volatile uint32_t ETZPC_DECPROT2;      // [read-write] Register reset values
    volatile uint32_t ETZPC_DECPROT3;      // [read-write] Register reset values
    volatile uint32_t ETZPC_DECPROT4;      // [read-write] Register reset values
    volatile uint32_t ETZPC_DECPROT5;      // [read-write] Register reset values
    reserved_t<0x2> _0x30;
    volatile uint32_t ETZPC_DECPROT_LOCK0; // [read-write] ETZPC decprot lock 0 register
    volatile uint32_t ETZPC_DECPROT_LOCK1; // [read-write] ETZPC decprot lock 1 register
    volatile uint32_t ETZPC_DECPROT_LOCK2; // [read-write] ETZPC decprot lock 2 register
    reserved_t<0xed> _0x3f0;
    volatile uint32_t ETZPC_HWCFGR;        // [read-only] ETZPC IP HW configuration register
    volatile uint32_t ETZPC_VERR;          // [read-only] ETZPC IP version register
    volatile uint32_t ETZPC_IDR;           // [read-only] ETZPC IP version register
    volatile uint32_t ETZPC_SIDR;          // [read-only] ETZPC IP version register

    static constexpr uint32_t ETZPC_TZMA0_SIZE_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_TZMA0_SIZE_R0SIZE =           // R0SIZE
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t ETZPC_TZMA0_SIZE_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t ETZPC_TZMA1_SIZE_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_TZMA1_SIZE_R0SIZE =           // R0SIZE
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t ETZPC_TZMA1_SIZE_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t ETZPC_DECPROT0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT0_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT1_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT2_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT3_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT4_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT0 =    // DECPROT0
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT1 =    // DECPROT1
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT2 =    // DECPROT2
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT3 =    // DECPROT3
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT4 =    // DECPROT4
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT5 =    // DECPROT5
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT6 =    // DECPROT6
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT7 =    // DECPROT7
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT8 =    // DECPROT8
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT9 =    // DECPROT9
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT10 =   // DECPROT10
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT11 =   // DECPROT11
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT12 =   // DECPROT12
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT13 =   // DECPROT13
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT14 =   // DECPROT14
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_DECPROT5_DECPROT15 =   // DECPROT15
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ETZPC_DECPROT_LOCK0_RESET_VALUE = 0x0;
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK0 = 0x1;         // LOCK0
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK1 = 0x2;         // LOCK1
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK2 = 0x4;         // LOCK2
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK3 = 0x8;         // LOCK3
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK4 = 0x10;        // LOCK4
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK5 = 0x20;        // LOCK5
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK6 = 0x40;        // LOCK6
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK7 = 0x80;        // LOCK7
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK8 = 0x100;       // LOCK8
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK9 = 0x200;       // LOCK9
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK10 = 0x400;      // LOCK10
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK11 = 0x800;      // LOCK11
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK12 = 0x1000;     // LOCK12
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK13 = 0x2000;     // LOCK13
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK14 = 0x4000;     // LOCK14
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK15 = 0x8000;     // LOCK15
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK16 = 0x10000;    // LOCK16
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK17 = 0x20000;    // LOCK17
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK18 = 0x40000;    // LOCK18
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK19 = 0x80000;    // LOCK19
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK20 = 0x100000;   // LOCK20
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK21 = 0x200000;   // LOCK21
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK22 = 0x400000;   // LOCK22
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK23 = 0x800000;   // LOCK23
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK24 = 0x1000000;  // LOCK24
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK25 = 0x2000000;  // LOCK25
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK26 = 0x4000000;  // LOCK26
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK27 = 0x8000000;  // LOCK27
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK28 = 0x10000000; // LOCK28
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK29 = 0x20000000; // LOCK29
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK30 = 0x40000000; // LOCK30
    static constexpr uint32_t ETZPC_DECPROT_LOCK0_LOCK31 = 0x80000000; // LOCK31

    static constexpr uint32_t ETZPC_DECPROT_LOCK1_RESET_VALUE = 0x0;
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK0 = 0x1;         // LOCK0
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK1 = 0x2;         // LOCK1
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK2 = 0x4;         // LOCK2
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK3 = 0x8;         // LOCK3
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK4 = 0x10;        // LOCK4
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK5 = 0x20;        // LOCK5
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK6 = 0x40;        // LOCK6
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK7 = 0x80;        // LOCK7
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK8 = 0x100;       // LOCK8
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK9 = 0x200;       // LOCK9
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK10 = 0x400;      // LOCK10
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK11 = 0x800;      // LOCK11
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK12 = 0x1000;     // LOCK12
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK13 = 0x2000;     // LOCK13
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK14 = 0x4000;     // LOCK14
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK15 = 0x8000;     // LOCK15
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK16 = 0x10000;    // LOCK16
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK17 = 0x20000;    // LOCK17
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK18 = 0x40000;    // LOCK18
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK19 = 0x80000;    // LOCK19
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK20 = 0x100000;   // LOCK20
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK21 = 0x200000;   // LOCK21
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK22 = 0x400000;   // LOCK22
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK23 = 0x800000;   // LOCK23
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK24 = 0x1000000;  // LOCK24
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK25 = 0x2000000;  // LOCK25
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK26 = 0x4000000;  // LOCK26
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK27 = 0x8000000;  // LOCK27
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK28 = 0x10000000; // LOCK28
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK29 = 0x20000000; // LOCK29
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK30 = 0x40000000; // LOCK30
    static constexpr uint32_t ETZPC_DECPROT_LOCK1_LOCK31 = 0x80000000; // LOCK31

    static constexpr uint32_t ETZPC_DECPROT_LOCK2_RESET_VALUE = 0x0;
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK0 = 0x1;         // LOCK0
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK1 = 0x2;         // LOCK1
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK2 = 0x4;         // LOCK2
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK3 = 0x8;         // LOCK3
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK4 = 0x10;        // LOCK4
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK5 = 0x20;        // LOCK5
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK6 = 0x40;        // LOCK6
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK7 = 0x80;        // LOCK7
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK8 = 0x100;       // LOCK8
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK9 = 0x200;       // LOCK9
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK10 = 0x400;      // LOCK10
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK11 = 0x800;      // LOCK11
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK12 = 0x1000;     // LOCK12
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK13 = 0x2000;     // LOCK13
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK14 = 0x4000;     // LOCK14
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK15 = 0x8000;     // LOCK15
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK16 = 0x10000;    // LOCK16
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK17 = 0x20000;    // LOCK17
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK18 = 0x40000;    // LOCK18
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK19 = 0x80000;    // LOCK19
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK20 = 0x100000;   // LOCK20
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK21 = 0x200000;   // LOCK21
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK22 = 0x400000;   // LOCK22
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK23 = 0x800000;   // LOCK23
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK24 = 0x1000000;  // LOCK24
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK25 = 0x2000000;  // LOCK25
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK26 = 0x4000000;  // LOCK26
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK27 = 0x8000000;  // LOCK27
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK28 = 0x10000000; // LOCK28
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK29 = 0x20000000; // LOCK29
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK30 = 0x40000000; // LOCK30
    static constexpr uint32_t ETZPC_DECPROT_LOCK2_LOCK31 = 0x80000000; // LOCK31

    static constexpr uint32_t ETZPC_HWCFGR_RESET_VALUE = 0x6002;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_HWCFGR_NUM_TZMA =      // NUM_TZMA
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_HWCFGR_NUM_PER_SEC =   // NUM_PER_SEC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_HWCFGR_NUM_AHB_SEC =   // NUM_AHB_SEC
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_HWCFGR_CHUNKS1N4 =     // CHUNKS1N4
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t ETZPC_VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t ETZPC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETZPC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t ETZPC_IDR_RESET_VALUE = 0x100061;

    static constexpr uint32_t ETZPC_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, ETZPC>
{
    typedef stm32mp15xxx_etzpc_t T;
    static T& V;
};

using etzpc_t = peripheral_t<mcu_svd, ETZPC>;

