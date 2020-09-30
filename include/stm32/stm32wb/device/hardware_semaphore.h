#pragma once

////
//
//      STM32WB HARDWARE_SEMAPHORE peripherals
//
///

// HSEM: HSEM

struct stm32wb30_cm4_hsem_t
{
    volatile uint32_t R0; // Semaphore 0 register
    volatile uint32_t R1; // Semaphore 1 register
    volatile uint32_t R2; // Semaphore 2 register
    volatile uint32_t R3; // Semaphore 3 register
    volatile uint32_t R4; // Semaphore 4 register
    volatile uint32_t R5; // Semaphore 5 register
    volatile uint32_t R6; // Semaphore 6 register
    volatile uint32_t R7; // Semaphore 7 register
    volatile uint32_t R8; // Semaphore 8 register
    volatile uint32_t R9; // Semaphore 9 register
    volatile uint32_t R10; // Semaphore 10 register
    volatile uint32_t R11; // Semaphore 11 register
    volatile uint32_t R12; // Semaphore 12 register
    volatile uint32_t R13; // Semaphore 13 register
    volatile uint32_t R14; // Semaphore 14 register
    volatile uint32_t R15; // Semaphore 15 register
    volatile uint32_t R16; // Semaphore 16 register
    volatile uint32_t R17; // Semaphore 17 register
    volatile uint32_t R18; // Semaphore 18 register
    volatile uint32_t R19; // Semaphore 19 register
    volatile uint32_t R20; // Semaphore 20 register
    volatile uint32_t R21; // Semaphore 21 register
    volatile uint32_t R22; // Semaphore 22 register
    volatile uint32_t R23; // Semaphore 23 register
    volatile uint32_t R24; // Semaphore 24 register
    volatile uint32_t R25; // Semaphore 25 register
    volatile uint32_t R26; // Semaphore 26 register
    volatile uint32_t R27; // Semaphore 27 register
    volatile uint32_t R28; // Semaphore 28 register
    volatile uint32_t R29; // Semaphore 29 register
    volatile uint32_t R30; // Semaphore 30 register
    volatile uint32_t R31; // Semaphore 31 register
    volatile uint32_t RLR0; // Semaphore 0 read lock register
    volatile uint32_t RLR1; // Semaphore 1 read lock register
    volatile uint32_t RLR2; // Semaphore 2 read lock register
    volatile uint32_t RLR3; // Semaphore 3 read lock register
    volatile uint32_t RLR4; // Semaphore 4 read lock read lock register
    volatile uint32_t RLR5; // Semaphore 5 read lock register
    volatile uint32_t RLR6; // Semaphore 6 read lock register
    volatile uint32_t RLR7; // Semaphore 7 read lock register
    volatile uint32_t RLR8; // Semaphore 8 read lock register
    volatile uint32_t RLR9; // Semaphore 9 read lock register
    volatile uint32_t RLR10; // Semaphore 10 read lock register
    volatile uint32_t RLR11; // Semaphore 11 read lock register
    volatile uint32_t RLR12; // Semaphore 12 read lock register
    volatile uint32_t RLR13; // Semaphore 13 read lock register
    volatile uint32_t RLR14; // Semaphore 14 read lock register
    volatile uint32_t RLR15; // Semaphore 15 read lock register
    volatile uint32_t RLR16; // Semaphore 16 read lock register
    volatile uint32_t RLR17; // Semaphore 17 read lock register
    volatile uint32_t RLR18; // Semaphore 18 read lock register
    volatile uint32_t RLR19; // Semaphore 19 read lock register
    volatile uint32_t RLR20; // Semaphore 20 read lock register
    volatile uint32_t RLR21; // Semaphore 21 read lock register
    volatile uint32_t RLR22; // Semaphore 22 read lock register
    volatile uint32_t RLR23; // Semaphore 23 read lock register
    volatile uint32_t RLR24; // Semaphore 24 read lock register
    volatile uint32_t RLR25; // Semaphore 25 read lock register
    volatile uint32_t RLR26; // Semaphore 26 read lock register
    volatile uint32_t RLR27; // Semaphore 27 read lock register
    volatile uint32_t RLR28; // Semaphore 28 read lock register
    volatile uint32_t RLR29; // Semaphore 29 read lock register
    volatile uint32_t RLR30; // Semaphore 30 read lock register
    volatile uint32_t RLR31; // Semaphore 31 read lock register
    volatile uint32_t C1IER0; // HSEM Interrupt enable register
    volatile uint32_t C1ICR; // HSEM Interrupt clear register
    volatile uint32_t C1ISR; // HSEM Interrupt status register
    volatile uint32_t C1MISR; // HSEM Masked interrupt status register
    volatile uint32_t C2IER0; // HSEM Interrupt enable register
    volatile uint32_t C2ICR; // HSEM Interrupt clear register
    volatile uint32_t C2ISR; // HSEM Interrupt status register
    volatile uint32_t C2MISR; // HSEM Masked interrupt status register
    reserved_t<0x8> _0x120;
    volatile uint32_t CR; // Semaphore Clear register
    volatile uint32_t KEYR; // Interrupt clear register
    reserved_t<0xa9> _0x148;
    volatile uint32_t HWCFGR2; // Semaphore hardware configuration register 2
    volatile uint32_t HWCFGR1; // Semaphore hardware configuration register 1
    volatile uint32_t VERR; // HSEM version register
    volatile uint32_t IPIDR; // HSEM indentification register
    volatile uint32_t SIDR; // HSEM size indentification register

    static constexpr uint32_t R0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R0_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R0_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R0_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R1_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R1_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R1_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R2_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R2_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R2_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R3_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R3_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R3_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R4_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R4_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R4_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R5_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R5_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R5_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R6_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R6_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R6_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R7_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R7_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R7_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R8_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R8_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R8_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R9_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R9_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R9_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R10_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R10_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R10_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R11_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R11_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R11_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R12_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R12_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R12_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R13_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R13_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R13_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R14_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R14_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R14_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R15_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R15_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R15_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R16_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R16_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R16_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R17_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R17_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R17_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R18_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R18_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R18_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R19_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R19_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R19_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R20_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R20_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R20_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R20_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R21_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R21_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R21_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R22_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R22_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R22_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R23_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R23_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R23_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R24_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R24_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R24_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R25_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R25_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R25_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R26_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R26_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R26_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R27_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R27_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R27_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R28_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R28_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R28_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R29_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R29_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R29_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R30_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R30_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R30_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R30_PROCID; // Semaphore ProcessID

    static constexpr uint32_t R31_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R31_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> R31_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> R31_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR0_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR0_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR0_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR1_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR1_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR1_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR2_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR2_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR2_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR3_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR3_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR3_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR4_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR4_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR4_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR5_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR5_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR5_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR6_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR6_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR6_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR7_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR7_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR7_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR8_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR8_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR8_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR9_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR9_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR9_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR10_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR10_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR10_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR11_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR11_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR11_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR12_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR12_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR12_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR13_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR13_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR13_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR14_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR14_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR14_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR15_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR15_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR15_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR16_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR16_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR16_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR17_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR17_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR17_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR18_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR18_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR18_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR19_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR19_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR19_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR20_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR20_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR20_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR20_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR21_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR21_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR21_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR22_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR22_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR22_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR23_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR23_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR23_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR24_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR24_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR24_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR25_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR25_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR25_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR26_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR26_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR26_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR27_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR27_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR27_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR28_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR28_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR28_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR29_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR29_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR29_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR30_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR30_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR30_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR30_PROCID; // Semaphore ProcessID

    static constexpr uint32_t RLR31_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RLR31_LOCK = 0x80000000; // lock indication
    typedef bit_field_t<8, 0xf> RLR31_COREID; // Semaphore CoreID
    typedef bit_field_t<0, 0xff> RLR31_PROCID; // Semaphore ProcessID

    static constexpr uint32_t C1IER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1IER0_ISEM; // CPU(n) semaphore m enable bit

    static constexpr uint32_t C1ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1ICR_ISCM; // CPU(n) semaphore m clear bit

    static constexpr uint32_t C1ISR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1ISR_ISFM; // CPU(n) semaphore m status bit before enable (mask)

    static constexpr uint32_t C1MISR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1MISR_MISFM; // masked CPU(n) semaphore m status bit after enable (mask).

    static constexpr uint32_t C2IER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2IER0_ISEM; // CPU(2) semaphore m enable bit.

    static constexpr uint32_t C2ICR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2ICR_ISCM; // CPU(2) semaphore m clear bit

    static constexpr uint32_t C2ISR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2ISR_ISFM; // CPU(2) semaphore m status bit before enable (mask).

    static constexpr uint32_t C2MISR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2MISR_MISFM; // masked CPU(2) semaphore m status bit after enable (mask).


    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CR_KEY; // Semaphore clear Key
    typedef bit_field_t<8, 0xf> CR_COREID; // CoreID of semaphore to be cleared

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> KEYR_KEY; // Semaphore Clear Key


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x84; // Reset value
    typedef bit_field_t<12, 0xf> HWCFGR2_MASTERID4; // Hardware Configuration valid bus masters ID4
    typedef bit_field_t<8, 0xf> HWCFGR2_MASTERID3; // Hardware Configuration valid bus masters ID3
    typedef bit_field_t<4, 0xf> HWCFGR2_MASTERID2; // Hardware Configuration valid bus masters ID2
    typedef bit_field_t<0, 0xf> HWCFGR2_MASTERID1; // Hardware Configuration valid bus masters ID1

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x220; // Reset value
    typedef bit_field_t<8, 0xf> HWCFGR1_NBINT; // Hardware Configuration number of interrupts supported number of master IDs
    typedef bit_field_t<0, 0xff> HWCFGR1_NBSEM; // Hardware Configuration number of semaphores

    static constexpr uint32_t VERR_RESET_VALUE = 0x20; // Reset value
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x100072; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // Identification Code

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification Code
};

template<>
struct peripheral_t<STM32WB30_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wb30_cm4_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wb30_cm4_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wb30_cm4_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wb30_cm4_hsem_t;
    static T& V;
};

using hsem_t = peripheral_t<svd, HSEM>;

template<int INST> struct hardware_semaphore_traits {};

template<> struct hardware_semaphore_traits<0>
{
    using hardware_semaphore = hsem_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_HSEMEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_HSEMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_HSEMRST;
    }
};
