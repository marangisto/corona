#pragma once

////
//
//      STM32H7 HSEM peripherals
//
///

// HSEM: HSEM

struct stm32h742x_hsem_t
{
    volatile uint32_t HSEM_R0; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R1; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R2; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R3; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R4; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R5; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R6; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R7; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R8; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R9; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R10; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R11; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R12; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R13; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R14; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R15; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R16; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R17; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R18; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R19; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R20; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R21; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R22; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R23; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R24; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R25; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R26; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R27; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R28; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R29; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R30; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_R31; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t HSEM_RLR0; // HSEM Read lock register
    volatile uint32_t HSEM_RLR1; // HSEM Read lock register
    volatile uint32_t HSEM_RLR2; // HSEM Read lock register
    volatile uint32_t HSEM_RLR3; // HSEM Read lock register
    volatile uint32_t HSEM_RLR4; // HSEM Read lock register
    volatile uint32_t HSEM_RLR5; // HSEM Read lock register
    volatile uint32_t HSEM_RLR6; // HSEM Read lock register
    volatile uint32_t HSEM_RLR7; // HSEM Read lock register
    volatile uint32_t HSEM_RLR8; // HSEM Read lock register
    volatile uint32_t HSEM_RLR9; // HSEM Read lock register
    volatile uint32_t HSEM_RLR10; // HSEM Read lock register
    volatile uint32_t HSEM_RLR11; // HSEM Read lock register
    volatile uint32_t HSEM_RLR12; // HSEM Read lock register
    volatile uint32_t HSEM_RLR13; // HSEM Read lock register
    volatile uint32_t HSEM_RLR14; // HSEM Read lock register
    volatile uint32_t HSEM_RLR15; // HSEM Read lock register
    volatile uint32_t HSEM_RLR16; // HSEM Read lock register
    volatile uint32_t HSEM_RLR17; // HSEM Read lock register
    volatile uint32_t HSEM_RLR18; // HSEM Read lock register
    volatile uint32_t HSEM_RLR19; // HSEM Read lock register
    volatile uint32_t HSEM_RLR20; // HSEM Read lock register
    volatile uint32_t HSEM_RLR21; // HSEM Read lock register
    volatile uint32_t HSEM_RLR22; // HSEM Read lock register
    volatile uint32_t HSEM_RLR23; // HSEM Read lock register
    volatile uint32_t HSEM_RLR24; // HSEM Read lock register
    volatile uint32_t HSEM_RLR25; // HSEM Read lock register
    volatile uint32_t HSEM_RLR26; // HSEM Read lock register
    volatile uint32_t HSEM_RLR27; // HSEM Read lock register
    volatile uint32_t HSEM_RLR28; // HSEM Read lock register
    volatile uint32_t HSEM_RLR29; // HSEM Read lock register
    volatile uint32_t HSEM_RLR30; // HSEM Read lock register
    volatile uint32_t HSEM_RLR31; // HSEM Read lock register
    volatile uint32_t HSEM_IER; // HSEM Interrupt enable register
    volatile uint32_t HSEM_ICR; // HSEM Interrupt clear register
    volatile uint32_t HSEM_ISR; // HSEM Interrupt status register
    volatile uint32_t HSEM_MISR; // HSEM Masked interrupt status register
    reserved_t<0xc> _0x110;
    volatile uint32_t HSEM_CR; // HSEM Clear register
    volatile uint32_t HSEM_KEYR; // HSEM Interrupt clear register

    static constexpr uint32_t HSEM_R0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R0_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R1_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R2_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R3_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R4_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R5_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R6_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R7_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R8_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R9_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R10_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R11_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R12_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R13_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R14_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R15_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R15_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R16_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R16_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R16_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R17_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R17_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R17_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R18_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R18_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R18_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R19_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R19_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R19_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R20_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R20_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R20_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R21_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R21_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R21_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R22_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R22_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R22_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R23_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R23_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R23_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R24_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R24_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R24_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R25_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R25_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R25_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R26_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R26_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R26_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R27_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R27_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R27_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R28_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R28_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R28_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R29_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R29_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R29_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R30_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R30_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R30_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R31_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_R31_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_R31_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR0_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR1_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR2_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR3_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR4_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR5_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR6_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR7_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR8_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR9_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR10_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR11_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR12_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR13_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR14_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR15_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR15_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR16_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR16_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR16_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR17_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR17_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR17_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR18_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR18_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR18_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR19_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR19_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR19_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR20_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR20_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR20_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR21_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR21_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR21_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR22_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR22_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR22_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR23_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR23_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR23_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR24_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR24_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR24_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR25_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR25_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR25_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR26_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR26_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR26_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR27_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR27_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR27_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR28_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR28_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR28_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR29_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR29_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR29_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR30_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR30_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR30_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR31_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> HSEM_RLR31_MASTERID; // Semaphore MasterID
    static constexpr uint32_t HSEM_RLR31_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_IER_ISEM0 = 0x1; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM1 = 0x2; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM2 = 0x4; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM3 = 0x8; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM4 = 0x10; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM5 = 0x20; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM6 = 0x40; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM7 = 0x80; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM8 = 0x100; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM9 = 0x200; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM10 = 0x400; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM11 = 0x800; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM12 = 0x1000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM13 = 0x2000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM14 = 0x4000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM15 = 0x8000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM16 = 0x10000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM17 = 0x20000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM18 = 0x40000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM19 = 0x80000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM20 = 0x100000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM21 = 0x200000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM22 = 0x400000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM23 = 0x800000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM24 = 0x1000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM25 = 0x2000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM26 = 0x4000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM27 = 0x8000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM28 = 0x10000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM29 = 0x20000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM30 = 0x40000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISEM31 = 0x80000000; // Interrupt(N) semaphore n enable bit.

    static constexpr uint32_t HSEM_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_ICR_ISEM0 = 0x1; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM1 = 0x2; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM2 = 0x4; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM3 = 0x8; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM4 = 0x10; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM5 = 0x20; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM6 = 0x40; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM7 = 0x80; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM8 = 0x100; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM9 = 0x200; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM10 = 0x400; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM11 = 0x800; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM12 = 0x1000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM13 = 0x2000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM14 = 0x4000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM15 = 0x8000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM16 = 0x10000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM17 = 0x20000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM18 = 0x40000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM19 = 0x80000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM20 = 0x100000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM21 = 0x200000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM22 = 0x400000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM23 = 0x800000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM24 = 0x1000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM25 = 0x2000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM26 = 0x4000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM27 = 0x8000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM28 = 0x10000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM29 = 0x20000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM30 = 0x40000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISEM31 = 0x80000000; // Interrupt(N) semaphore n clear bit

    static constexpr uint32_t HSEM_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_ISR_ISEM0 = 0x1; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM1 = 0x2; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM2 = 0x4; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM3 = 0x8; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM4 = 0x10; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM5 = 0x20; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM6 = 0x40; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM7 = 0x80; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM8 = 0x100; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM9 = 0x200; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM10 = 0x400; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM11 = 0x800; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM12 = 0x1000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM13 = 0x2000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM14 = 0x4000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM15 = 0x8000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM16 = 0x10000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM17 = 0x20000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM18 = 0x40000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM19 = 0x80000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM20 = 0x100000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM21 = 0x200000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM22 = 0x400000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM23 = 0x800000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM24 = 0x1000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM25 = 0x2000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM26 = 0x4000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM27 = 0x8000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM28 = 0x10000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM29 = 0x20000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM30 = 0x40000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISEM31 = 0x80000000; // Interrupt(N) semaphore n status bit before enable (mask)

    static constexpr uint32_t HSEM_MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_MISR_ISEM0 = 0x1; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM1 = 0x2; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM2 = 0x4; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM3 = 0x8; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM4 = 0x10; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM5 = 0x20; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM6 = 0x40; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM7 = 0x80; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM8 = 0x100; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM9 = 0x200; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM10 = 0x400; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM11 = 0x800; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM12 = 0x1000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM13 = 0x2000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM14 = 0x4000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM15 = 0x8000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM16 = 0x10000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM17 = 0x20000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM18 = 0x40000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM19 = 0x80000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM20 = 0x100000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM21 = 0x200000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM22 = 0x400000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM23 = 0x800000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM24 = 0x1000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM25 = 0x2000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM26 = 0x4000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM27 = 0x8000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM28 = 0x10000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM29 = 0x20000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM30 = 0x40000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_ISEM31 = 0x80000000; // masked interrupt(N) semaphore n status bit after enable (mask)


    static constexpr uint32_t HSEM_CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> HSEM_CR_MASTERID; // MasterID of semaphores to be cleared
    typedef bit_field_t<16, 0xffff> HSEM_CR_KEY; // Semaphore clear Key

    static constexpr uint32_t HSEM_KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HSEM_KEYR_KEY; // Semaphore Clear Key
};

// HSEM: HSEM

struct stm32h7a3x_hsem_t
{
    volatile uint32_t R0; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R1; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R2; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R3; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R4; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R5; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R6; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R7; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R8; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R9; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R10; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R11; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R12; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R13; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R14; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R15; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R16; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R17; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R18; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R19; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R20; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R21; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R22; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R23; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R24; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R25; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R26; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R27; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R28; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R29; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R30; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t R31; // HSEM register HSEM_R0 HSEM_R31
    volatile uint32_t RLR0; // HSEM Read lock register
    volatile uint32_t RLR1; // HSEM Read lock register
    volatile uint32_t RLR2; // HSEM Read lock register
    volatile uint32_t RLR3; // HSEM Read lock register
    volatile uint32_t RLR4; // HSEM Read lock register
    volatile uint32_t RLR5; // HSEM Read lock register
    volatile uint32_t RLR6; // HSEM Read lock register
    volatile uint32_t RLR7; // HSEM Read lock register
    volatile uint32_t RLR8; // HSEM Read lock register
    volatile uint32_t RLR9; // HSEM Read lock register
    volatile uint32_t RLR10; // HSEM Read lock register
    volatile uint32_t RLR11; // HSEM Read lock register
    volatile uint32_t RLR12; // HSEM Read lock register
    volatile uint32_t RLR13; // HSEM Read lock register
    volatile uint32_t RLR14; // HSEM Read lock register
    volatile uint32_t RLR15; // HSEM Read lock register
    volatile uint32_t RLR16; // HSEM Read lock register
    volatile uint32_t RLR17; // HSEM Read lock register
    volatile uint32_t RLR18; // HSEM Read lock register
    volatile uint32_t RLR19; // HSEM Read lock register
    volatile uint32_t RLR20; // HSEM Read lock register
    volatile uint32_t RLR21; // HSEM Read lock register
    volatile uint32_t RLR22; // HSEM Read lock register
    volatile uint32_t RLR23; // HSEM Read lock register
    volatile uint32_t RLR24; // HSEM Read lock register
    volatile uint32_t RLR25; // HSEM Read lock register
    volatile uint32_t RLR26; // HSEM Read lock register
    volatile uint32_t RLR27; // HSEM Read lock register
    volatile uint32_t RLR28; // HSEM Read lock register
    volatile uint32_t RLR29; // HSEM Read lock register
    volatile uint32_t RLR30; // HSEM Read lock register
    volatile uint32_t RLR31; // HSEM Read lock register
    volatile uint32_t IER; // HSEM Interrupt enable register
    volatile uint32_t ICR; // HSEM Interrupt clear register
    volatile uint32_t ISR; // HSEM Interrupt status register
    volatile uint32_t MISR; // HSEM Masked interrupt status register
    reserved_t<0xc> _0x110;
    volatile uint32_t CR; // HSEM Clear register
    volatile uint32_t KEYR; // HSEM Interrupt clear register

    static constexpr uint32_t R0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R0_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R1_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R2_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R3_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R4_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R5_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R6_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R7_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R8_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R9_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R10_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R11_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R12_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R13_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R14_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R15_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R15_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R16_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R16_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R16_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R17_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R17_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R17_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R18_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R18_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R18_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R19_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R19_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R19_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R20_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R20_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R20_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R21_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R21_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R21_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R22_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R22_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R22_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R23_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R23_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R23_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R24_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R24_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R24_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R25_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R25_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R25_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R26_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R26_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R26_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R27_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R27_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R27_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R28_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R28_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R28_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R29_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R29_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R29_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R30_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R30_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R30_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t R31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> R31_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> R31_MASTERID; // Semaphore MasterID
    static constexpr uint32_t R31_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR0_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR1_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR2_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR3_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR4_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR5_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR6_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR7_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR8_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR9_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR10_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR11_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR12_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR13_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR14_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR15_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR15_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR16_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR16_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR16_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR17_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR17_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR17_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR18_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR18_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR18_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR19_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR19_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR19_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR20_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR20_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR20_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR21_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR21_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR21_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR22_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR22_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR22_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR23_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR23_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR23_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR24_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR24_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR24_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR25_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR25_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR25_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR26_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR26_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR26_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR27_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR27_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR27_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR28_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR28_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR28_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR29_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR29_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR29_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR30_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR30_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR30_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t RLR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RLR31_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xff> RLR31_MASTERID; // Semaphore MasterID
    static constexpr uint32_t RLR31_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_ISEM0 = 0x1; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM1 = 0x2; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM2 = 0x4; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM3 = 0x8; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM4 = 0x10; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM5 = 0x20; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM6 = 0x40; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM7 = 0x80; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM8 = 0x100; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM9 = 0x200; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM10 = 0x400; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM11 = 0x800; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM12 = 0x1000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM13 = 0x2000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM14 = 0x4000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM15 = 0x8000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM16 = 0x10000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM17 = 0x20000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM18 = 0x40000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM19 = 0x80000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM20 = 0x100000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM21 = 0x200000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM22 = 0x400000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM23 = 0x800000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM24 = 0x1000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM25 = 0x2000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM26 = 0x4000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM27 = 0x8000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM28 = 0x10000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM29 = 0x20000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM30 = 0x40000000; // Interrupt semaphore n enable bit
    static constexpr uint32_t IER_ISEM31 = 0x80000000; // Interrupt(N) semaphore n enable bit.

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ISEM0 = 0x1; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM1 = 0x2; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM2 = 0x4; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM3 = 0x8; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM4 = 0x10; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM5 = 0x20; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM6 = 0x40; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM7 = 0x80; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM8 = 0x100; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM9 = 0x200; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM10 = 0x400; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM11 = 0x800; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM12 = 0x1000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM13 = 0x2000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM14 = 0x4000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM15 = 0x8000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM16 = 0x10000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM17 = 0x20000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM18 = 0x40000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM19 = 0x80000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM20 = 0x100000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM21 = 0x200000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM22 = 0x400000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM23 = 0x800000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM24 = 0x1000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM25 = 0x2000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM26 = 0x4000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM27 = 0x8000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM28 = 0x10000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM29 = 0x20000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM30 = 0x40000000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t ICR_ISEM31 = 0x80000000; // Interrupt(N) semaphore n clear bit

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_ISEM0 = 0x1; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM1 = 0x2; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM2 = 0x4; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM3 = 0x8; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM4 = 0x10; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM5 = 0x20; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM6 = 0x40; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM7 = 0x80; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM8 = 0x100; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM9 = 0x200; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM10 = 0x400; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM11 = 0x800; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM12 = 0x1000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM13 = 0x2000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM14 = 0x4000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM15 = 0x8000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM16 = 0x10000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM17 = 0x20000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM18 = 0x40000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM19 = 0x80000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM20 = 0x100000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM21 = 0x200000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM22 = 0x400000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM23 = 0x800000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM24 = 0x1000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM25 = 0x2000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM26 = 0x4000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM27 = 0x8000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM28 = 0x10000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM29 = 0x20000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM30 = 0x40000000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t ISR_ISEM31 = 0x80000000; // Interrupt(N) semaphore n status bit before enable (mask)

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_ISEM0 = 0x1; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM1 = 0x2; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM2 = 0x4; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM3 = 0x8; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM4 = 0x10; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM5 = 0x20; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM6 = 0x40; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM7 = 0x80; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM8 = 0x100; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM9 = 0x200; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM10 = 0x400; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM11 = 0x800; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM12 = 0x1000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM13 = 0x2000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM14 = 0x4000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM15 = 0x8000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM16 = 0x10000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM17 = 0x20000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM18 = 0x40000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM19 = 0x80000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM20 = 0x100000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM21 = 0x200000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM22 = 0x400000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM23 = 0x800000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM24 = 0x1000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM25 = 0x2000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM26 = 0x4000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM27 = 0x8000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM28 = 0x10000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM29 = 0x20000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM30 = 0x40000000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t MISR_ISEM31 = 0x80000000; // masked interrupt(N) semaphore n status bit after enable (mask)


    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> CR_MASTERID; // MasterID of semaphores to be cleared
    typedef bit_field_t<16, 0xffff> CR_KEY; // Semaphore clear Key

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> KEYR_KEY; // Semaphore Clear Key
};

template<>
struct peripheral_t<STM32H742x, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HSEM>
{
    using T = stm32h742x_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HSEM>
{
    using T = stm32h7a3x_hsem_t;
    static T& V;
};

using hsem_t = peripheral_t<svd, HSEM>;

template<int INST> struct hsem_traits {};

template<> struct hsem_traits<0>
{
    using hsem = hsem_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_HSEMEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_HSEMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_HSEMRST;
    }
};
