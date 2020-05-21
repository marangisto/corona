#pragma once

////
//
//      STM32WB Hardware_Semaphore peripherals
//
////

////
//
//      HSEM
//
////

struct stm32wb30_cm4_hsem_t
{
    volatile uint32_t R0;      // [read-write] Semaphore 0 register
    volatile uint32_t R1;      // [read-write] Semaphore 1 register
    volatile uint32_t R2;      // [read-write] Semaphore 2 register
    volatile uint32_t R3;      // [read-write] Semaphore 3 register
    volatile uint32_t R4;      // [read-write] Semaphore 4 register
    volatile uint32_t R5;      // [read-write] Semaphore 5 register
    volatile uint32_t R6;      // [read-write] Semaphore 6 register
    volatile uint32_t R7;      // [read-write] Semaphore 7 register
    volatile uint32_t R8;      // [read-write] Semaphore 8 register
    volatile uint32_t R9;      // [read-write] Semaphore 9 register
    volatile uint32_t R10;     // [read-write] Semaphore 10 register
    volatile uint32_t R11;     // [read-write] Semaphore 11 register
    volatile uint32_t R12;     // [read-write] Semaphore 12 register
    volatile uint32_t R13;     // [read-write] Semaphore 13 register
    volatile uint32_t R14;     // [read-write] Semaphore 14 register
    volatile uint32_t R15;     // [read-write] Semaphore 15 register
    volatile uint32_t R16;     // [read-write] Semaphore 16 register
    volatile uint32_t R17;     // [read-write] Semaphore 17 register
    volatile uint32_t R18;     // [read-write] Semaphore 18 register
    volatile uint32_t R19;     // [read-write] Semaphore 19 register
    volatile uint32_t R20;     // [read-write] Semaphore 20 register
    volatile uint32_t R21;     // [read-write] Semaphore 21 register
    volatile uint32_t R22;     // [read-write] Semaphore 22 register
    volatile uint32_t R23;     // [read-write] Semaphore 23 register
    volatile uint32_t R24;     // [read-write] Semaphore 24 register
    volatile uint32_t R25;     // [read-write] Semaphore 25 register
    volatile uint32_t R26;     // [read-write] Semaphore 26 register
    volatile uint32_t R27;     // [read-write] Semaphore 27 register
    volatile uint32_t R28;     // [read-write] Semaphore 28 register
    volatile uint32_t R29;     // [read-write] Semaphore 29 register
    volatile uint32_t R30;     // [read-write] Semaphore 30 register
    volatile uint32_t R31;     // [read-write] Semaphore 31 register
    volatile uint32_t RLR0;    // [read-only] Semaphore 0 read lock register
    volatile uint32_t RLR1;    // [read-only] Semaphore 1 read lock register
    volatile uint32_t RLR2;    // [read-only] Semaphore 2 read lock register
    volatile uint32_t RLR3;    // [read-only] Semaphore 3 read lock register
    volatile uint32_t RLR4;    // [read-only] Semaphore 4 read lock read lock register
    volatile uint32_t RLR5;    // [read-only] Semaphore 5 read lock register
    volatile uint32_t RLR6;    // [read-only] Semaphore 6 read lock register
    volatile uint32_t RLR7;    // [read-only] Semaphore 7 read lock register
    volatile uint32_t RLR8;    // [read-only] Semaphore 8 read lock register
    volatile uint32_t RLR9;    // [read-only] Semaphore 9 read lock register
    volatile uint32_t RLR10;   // [read-only] Semaphore 10 read lock register
    volatile uint32_t RLR11;   // [read-only] Semaphore 11 read lock register
    volatile uint32_t RLR12;   // [read-only] Semaphore 12 read lock register
    volatile uint32_t RLR13;   // [read-only] Semaphore 13 read lock register
    volatile uint32_t RLR14;   // [read-only] Semaphore 14 read lock register
    volatile uint32_t RLR15;   // [read-only] Semaphore 15 read lock register
    volatile uint32_t RLR16;   // [read-only] Semaphore 16 read lock register
    volatile uint32_t RLR17;   // [read-only] Semaphore 17 read lock register
    volatile uint32_t RLR18;   // [read-only] Semaphore 18 read lock register
    volatile uint32_t RLR19;   // [read-only] Semaphore 19 read lock register
    volatile uint32_t RLR20;   // [read-only] Semaphore 20 read lock register
    volatile uint32_t RLR21;   // [read-only] Semaphore 21 read lock register
    volatile uint32_t RLR22;   // [read-only] Semaphore 22 read lock register
    volatile uint32_t RLR23;   // [read-only] Semaphore 23 read lock register
    volatile uint32_t RLR24;   // [read-only] Semaphore 24 read lock register
    volatile uint32_t RLR25;   // [read-only] Semaphore 25 read lock register
    volatile uint32_t RLR26;   // [read-only] Semaphore 26 read lock register
    volatile uint32_t RLR27;   // [read-only] Semaphore 27 read lock register
    volatile uint32_t RLR28;   // [read-only] Semaphore 28 read lock register
    volatile uint32_t RLR29;   // [read-only] Semaphore 29 read lock register
    volatile uint32_t RLR30;   // [read-only] Semaphore 30 read lock register
    volatile uint32_t RLR31;   // [read-only] Semaphore 31 read lock register
    volatile uint32_t C1IER0;  // [read-write] HSEM Interrupt enable register
    volatile uint32_t C1ICR;   // [read-write] HSEM Interrupt clear register
    volatile uint32_t C1ISR;   // [read-only] HSEM Interrupt status register
    volatile uint32_t C1MISR;  // [read-only] HSEM Masked interrupt status register
    volatile uint32_t C2IER0;  // [read-write] HSEM Interrupt enable register
    volatile uint32_t C2ICR;   // [read-write] HSEM Interrupt clear register
    volatile uint32_t C2ISR;   // [read-only] HSEM Interrupt status register
    volatile uint32_t C2MISR;  // [read-only] HSEM Masked interrupt status register
    reserved_t<0x8> _0x140;
    volatile uint32_t CR;      // [read-write] Semaphore Clear register
    volatile uint32_t KEYR;    // [read-write] Interrupt clear register
    reserved_t<0xa9> _0x3ec;
    volatile uint32_t HWCFGR2; // [read-only] Semaphore hardware configuration register 2
    volatile uint32_t HWCFGR1; // [read-only] Semaphore hardware configuration register 1
    volatile uint32_t VERR;    // [read-only] HSEM version register
    volatile uint32_t IPIDR;   // [read-only] HSEM indentification register
    volatile uint32_t SIDR;    // [read-only] HSEM size indentification register

    static constexpr uint32_t R0_RESET_VALUE = 0x0;
    static constexpr uint32_t R0_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R0_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R0_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R1_RESET_VALUE = 0x0;
    static constexpr uint32_t R1_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R1_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R1_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R2_RESET_VALUE = 0x0;
    static constexpr uint32_t R2_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R2_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R2_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R3_RESET_VALUE = 0x0;
    static constexpr uint32_t R3_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R3_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R3_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R4_RESET_VALUE = 0x0;
    static constexpr uint32_t R4_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R4_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R4_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R5_RESET_VALUE = 0x0;
    static constexpr uint32_t R5_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R5_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R5_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R6_RESET_VALUE = 0x0;
    static constexpr uint32_t R6_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R6_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R6_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R7_RESET_VALUE = 0x0;
    static constexpr uint32_t R7_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R7_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R7_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R8_RESET_VALUE = 0x0;
    static constexpr uint32_t R8_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R8_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R8_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R9_RESET_VALUE = 0x0;
    static constexpr uint32_t R9_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R9_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R9_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R10_RESET_VALUE = 0x0;
    static constexpr uint32_t R10_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R10_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R10_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R11_RESET_VALUE = 0x0;
    static constexpr uint32_t R11_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R11_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R11_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R12_RESET_VALUE = 0x0;
    static constexpr uint32_t R12_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R12_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R12_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R13_RESET_VALUE = 0x0;
    static constexpr uint32_t R13_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R13_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R13_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R14_RESET_VALUE = 0x0;
    static constexpr uint32_t R14_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R14_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R14_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R15_RESET_VALUE = 0x0;
    static constexpr uint32_t R15_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R15_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R15_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R16_RESET_VALUE = 0x0;
    static constexpr uint32_t R16_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R16_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R16_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R17_RESET_VALUE = 0x0;
    static constexpr uint32_t R17_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R17_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R17_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R18_RESET_VALUE = 0x0;
    static constexpr uint32_t R18_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R18_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R18_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R19_RESET_VALUE = 0x0;
    static constexpr uint32_t R19_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R19_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R19_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R20_RESET_VALUE = 0x0;
    static constexpr uint32_t R20_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R20_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R20_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R21_RESET_VALUE = 0x0;
    static constexpr uint32_t R21_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R21_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R21_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R22_RESET_VALUE = 0x0;
    static constexpr uint32_t R22_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R22_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R22_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R23_RESET_VALUE = 0x0;
    static constexpr uint32_t R23_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R23_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R23_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R24_RESET_VALUE = 0x0;
    static constexpr uint32_t R24_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R24_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R24_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R25_RESET_VALUE = 0x0;
    static constexpr uint32_t R25_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R25_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R25_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R26_RESET_VALUE = 0x0;
    static constexpr uint32_t R26_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R26_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R26_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R27_RESET_VALUE = 0x0;
    static constexpr uint32_t R27_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R27_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R27_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R28_RESET_VALUE = 0x0;
    static constexpr uint32_t R28_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R28_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R28_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R29_RESET_VALUE = 0x0;
    static constexpr uint32_t R29_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R29_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R29_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R30_RESET_VALUE = 0x0;
    static constexpr uint32_t R30_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R30_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R30_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t R31_RESET_VALUE = 0x0;
    static constexpr uint32_t R31_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t R31_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R31_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR0_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR0_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR0_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR0_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR1_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR1_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR1_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR2_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR2_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR2_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR2_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR3_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR3_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR3_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR3_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR4_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR4_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR4_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR4_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR5_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR5_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR5_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR5_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR6_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR6_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR6_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR6_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR7_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR7_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR7_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR7_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR8_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR8_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR8_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR8_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR9_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR9_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR9_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR9_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR10_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR10_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR10_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR10_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR11_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR11_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR11_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR11_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR12_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR12_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR12_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR12_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR13_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR13_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR13_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR13_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR14_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR14_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR14_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR14_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR15_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR15_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR15_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR15_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR16_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR16_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR16_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR16_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR17_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR17_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR17_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR17_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR18_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR18_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR18_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR18_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR19_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR19_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR19_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR19_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR20_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR20_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR20_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR20_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR21_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR21_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR21_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR21_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR22_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR22_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR22_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR22_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR23_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR23_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR23_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR23_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR24_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR24_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR24_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR24_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR25_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR25_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR25_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR25_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR26_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR26_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR26_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR26_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR27_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR27_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR27_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR27_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR28_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR28_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR28_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR28_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR29_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR29_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR29_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR29_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR30_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR30_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR30_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR30_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RLR31_RESET_VALUE = 0x0;
    static constexpr uint32_t RLR31_LOCK = 0x80000000; // lock indication
    template<uint32_t X>
    static constexpr uint32_t RLR31_COREID =           // Semaphore CoreID
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RLR31_PROCID =           // Semaphore ProcessID
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_KEY =      // Semaphore clear Key
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_COREID =   // CoreID of semaphore to be cleared
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KEYR_KEY =   // Semaphore Clear Key
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x84;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_MASTERID4 =   // Hardware Configuration valid bus masters ID4
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_MASTERID3 =   // Hardware Configuration valid bus masters ID3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_MASTERID2 =   // Hardware Configuration valid bus masters ID2
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_MASTERID1 =   // Hardware Configuration valid bus masters ID1
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x220;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBINT =   // Hardware Configuration number of interrupts supported number of master IDs
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBSEM =   // Hardware Configuration number of semaphores
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x100072;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;

    static constexpr uint32_t C1IER0_RESET_VALUE = 0x0;

    static constexpr uint32_t C1ICR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1ISR_RESET_VALUE = 0x0;

    static constexpr uint32_t C1MISR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2IER0_RESET_VALUE = 0x0;

    static constexpr uint32_t C2ICR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2ISR_RESET_VALUE = 0x0;

    static constexpr uint32_t C2MISR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32WB30_CM4, HSEM>
{
    typedef stm32wb30_cm4_hsem_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, HSEM>
{
    typedef stm32wb30_cm4_hsem_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, HSEM>
{
    typedef stm32wb30_cm4_hsem_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, HSEM>
{
    typedef stm32wb30_cm4_hsem_t T;
    static T& V;
};

using hsem_t = peripheral_t<mcu_svd, HSEM>;

