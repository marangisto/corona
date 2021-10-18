#pragma once

////
//
//      STM32WL HSEM peripherals
//
///

// HSEM: Hardware semaphore

struct stm32wl5x_cm0p_hsem_t
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
    reserved_t<0x10> _0x40;
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
    reserved_t<0x10> _0xc0;
    volatile uint32_t HSEM_C1IER; // HSEM Interrupt enable register
    volatile uint32_t HSEM_C1ICR; // HSEM Interrupt clear register
    volatile uint32_t HSEM_C1ISR; // HSEM Interrupt status register
    volatile uint32_t HSEM_C1MISR; // HSEM Masked interrupt status register
    volatile uint32_t HSEM_C2IER; // HSEM Interrupt enable register
    volatile uint32_t HSEM_C2ICR; // HSEM Interrupt clear register
    volatile uint32_t HSEM_C2ISR; // HSEM Interrupt status register
    volatile uint32_t HSEM_C2MISR; // HSEM Masked interrupt status register
    reserved_t<0x8> _0x120;
    volatile uint32_t HSEM_CR; // HSEM Clear register
    volatile uint32_t HSEM_KEYR; // HSEM Interrupt clear register

    static constexpr uint32_t HSEM_R0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R0_COREID; // COREID
    static constexpr uint32_t HSEM_R0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R1_COREID; // COREID
    static constexpr uint32_t HSEM_R1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R2_COREID; // COREID
    static constexpr uint32_t HSEM_R2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R3_COREID; // COREID
    static constexpr uint32_t HSEM_R3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R4_COREID; // COREID
    static constexpr uint32_t HSEM_R4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R5_COREID; // COREID
    static constexpr uint32_t HSEM_R5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R6_COREID; // COREID
    static constexpr uint32_t HSEM_R6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R7_COREID; // COREID
    static constexpr uint32_t HSEM_R7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R8_COREID; // COREID
    static constexpr uint32_t HSEM_R8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R9_COREID; // COREID
    static constexpr uint32_t HSEM_R9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R10_COREID; // COREID
    static constexpr uint32_t HSEM_R10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R11_COREID; // COREID
    static constexpr uint32_t HSEM_R11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R12_COREID; // COREID
    static constexpr uint32_t HSEM_R12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R13_COREID; // COREID
    static constexpr uint32_t HSEM_R13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R14_COREID; // COREID
    static constexpr uint32_t HSEM_R14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R15_COREID; // COREID
    static constexpr uint32_t HSEM_R15_LOCK = 0x80000000; // Lock indication


    static constexpr uint32_t HSEM_RLR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR0_COREID; // COREID
    static constexpr uint32_t HSEM_RLR0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR1_COREID; // COREID
    static constexpr uint32_t HSEM_RLR1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR2_COREID; // COREID
    static constexpr uint32_t HSEM_RLR2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR3_COREID; // COREID
    static constexpr uint32_t HSEM_RLR3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR4_COREID; // COREID
    static constexpr uint32_t HSEM_RLR4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR5_COREID; // COREID
    static constexpr uint32_t HSEM_RLR5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR6_COREID; // COREID
    static constexpr uint32_t HSEM_RLR6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR7_COREID; // COREID
    static constexpr uint32_t HSEM_RLR7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR8_COREID; // COREID
    static constexpr uint32_t HSEM_RLR8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR9_COREID; // COREID
    static constexpr uint32_t HSEM_RLR9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR10_COREID; // COREID
    static constexpr uint32_t HSEM_RLR10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR11_COREID; // COREID
    static constexpr uint32_t HSEM_RLR11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR12_COREID; // COREID
    static constexpr uint32_t HSEM_RLR12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR13_COREID; // COREID
    static constexpr uint32_t HSEM_RLR13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR14_COREID; // COREID
    static constexpr uint32_t HSEM_RLR14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR15_COREID; // COREID
    static constexpr uint32_t HSEM_RLR15_LOCK = 0x80000000; // Lock indication


    static constexpr uint32_t HSEM_C1IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C1IER_ISE0 = 0x1; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE1 = 0x2; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE2 = 0x4; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE3 = 0x8; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE4 = 0x10; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE5 = 0x20; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE6 = 0x40; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE7 = 0x80; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE8 = 0x100; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE9 = 0x200; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE10 = 0x400; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE11 = 0x800; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE12 = 0x1000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE13 = 0x2000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE14 = 0x4000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C1IER_ISE15 = 0x8000; // Interrupt semaphore n enable bit

    static constexpr uint32_t HSEM_C1ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C1ICR_ISC0 = 0x1; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC1 = 0x2; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC2 = 0x4; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC3 = 0x8; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC4 = 0x10; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC5 = 0x20; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC6 = 0x40; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC7 = 0x80; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC8 = 0x100; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC9 = 0x200; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC10 = 0x400; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC11 = 0x800; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC12 = 0x1000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC13 = 0x2000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC14 = 0x4000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C1ICR_ISC15 = 0x8000; // Interrupt(N) semaphore n clear bit

    static constexpr uint32_t HSEM_C1ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C1ISR_ISF0 = 0x1; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF1 = 0x2; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF2 = 0x4; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF3 = 0x8; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF4 = 0x10; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF5 = 0x20; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF6 = 0x40; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF7 = 0x80; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF8 = 0x100; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF9 = 0x200; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF10 = 0x400; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF11 = 0x800; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF12 = 0x1000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF13 = 0x2000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF14 = 0x4000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C1ISR_ISF15 = 0x8000; // Interrupt(N) semaphore n status bit before enable (mask)

    static constexpr uint32_t HSEM_C1MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C1MISR_MISF0 = 0x1; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF1 = 0x2; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF2 = 0x4; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF3 = 0x8; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF4 = 0x10; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF5 = 0x20; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF6 = 0x40; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF7 = 0x80; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF8 = 0x100; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF9 = 0x200; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF10 = 0x400; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF11 = 0x800; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF12 = 0x1000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF13 = 0x2000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF14 = 0x4000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C1MISR_MISF15 = 0x8000; // masked interrupt(N) semaphore n status bit after enable (mask)

    static constexpr uint32_t HSEM_C2IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C2IER_ISE0 = 0x1; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE1 = 0x2; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE2 = 0x4; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE3 = 0x8; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE4 = 0x10; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE5 = 0x20; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE6 = 0x40; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE7 = 0x80; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE8 = 0x100; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE9 = 0x200; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE10 = 0x400; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE11 = 0x800; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE12 = 0x1000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE13 = 0x2000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE14 = 0x4000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_C2IER_ISE15 = 0x8000; // Interrupt semaphore n enable bit

    static constexpr uint32_t HSEM_C2ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C2ICR_ISC0 = 0x1; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC1 = 0x2; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC2 = 0x4; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC3 = 0x8; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC4 = 0x10; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC5 = 0x20; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC6 = 0x40; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC7 = 0x80; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC8 = 0x100; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC9 = 0x200; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC10 = 0x400; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC11 = 0x800; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC12 = 0x1000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC13 = 0x2000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC14 = 0x4000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_C2ICR_ISC15 = 0x8000; // Interrupt(N) semaphore n clear bit

    static constexpr uint32_t HSEM_C2ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C2ISR_ISF0 = 0x1; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF1 = 0x2; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF2 = 0x4; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF3 = 0x8; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF4 = 0x10; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF5 = 0x20; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF6 = 0x40; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF7 = 0x80; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF8 = 0x100; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF9 = 0x200; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF10 = 0x400; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF11 = 0x800; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF12 = 0x1000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF13 = 0x2000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF14 = 0x4000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_C2ISR_ISF15 = 0x8000; // Interrupt(N) semaphore n status bit before enable (mask)

    static constexpr uint32_t HSEM_C2MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_C2MISR_MISF0 = 0x1; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF1 = 0x2; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF2 = 0x4; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF3 = 0x8; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF4 = 0x10; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF5 = 0x20; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF6 = 0x40; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF7 = 0x80; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF8 = 0x100; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF9 = 0x200; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF10 = 0x400; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF11 = 0x800; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF12 = 0x1000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF13 = 0x2000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF14 = 0x4000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_C2MISR_MISF15 = 0x8000; // masked interrupt(N) semaphore n status bit after enable (mask)


    static constexpr uint32_t HSEM_CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xf> HSEM_CR_COREID; // COREID
    typedef bit_field_t<16, 0xffff> HSEM_CR_KEY; // Semaphore clear Key

    static constexpr uint32_t HSEM_KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HSEM_KEYR_KEY; // Semaphore Clear Key
};

// HSEM: Hardware semaphore

struct stm32wle5_cm4_hsem_t
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
    reserved_t<0x10> _0x40;
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
    reserved_t<0x10> _0xc0;
    volatile uint32_t HSEM_IER; // HSEM Interrupt enable register
    volatile uint32_t HSEM_ICR; // HSEM Interrupt clear register
    volatile uint32_t HSEM_ISR; // HSEM Interrupt status register
    volatile uint32_t HSEM_MISR; // HSEM Masked interrupt status register
    reserved_t<0xc> _0x110;
    volatile uint32_t HSEM_CR; // HSEM Clear register
    volatile uint32_t HSEM_KEYR; // HSEM Interrupt clear register

    static constexpr uint32_t HSEM_R0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R0_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R1_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R2_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R3_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R4_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R5_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R6_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R7_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R8_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R9_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R10_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R11_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R12_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R13_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R14_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_R15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_R15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_R15_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_R15_LOCK = 0x80000000; // Lock indication


    static constexpr uint32_t HSEM_RLR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR0_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR0_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR0_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR1_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR1_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR1_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR2_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR2_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR2_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR3_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR3_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR3_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR4_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR4_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR4_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR5_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR5_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR5_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR6_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR6_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR6_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR7_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR7_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR7_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR8_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR8_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR8_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR9_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR9_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR9_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR10_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR10_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR10_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR11_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR11_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR11_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR12_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR12_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR12_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR13_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR13_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR13_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR14_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR14_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR14_LOCK = 0x80000000; // Lock indication

    static constexpr uint32_t HSEM_RLR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HSEM_RLR15_PROCID; // Semaphore ProcessID
    typedef bit_field_t<8, 0xf> HSEM_RLR15_MASTERID; // Semaphore MASTERID
    static constexpr uint32_t HSEM_RLR15_LOCK = 0x80000000; // Lock indication


    static constexpr uint32_t HSEM_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_IER_ISE0 = 0x1; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE1 = 0x2; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE2 = 0x4; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE3 = 0x8; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE4 = 0x10; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE5 = 0x20; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE6 = 0x40; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE7 = 0x80; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE8 = 0x100; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE9 = 0x200; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE10 = 0x400; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE11 = 0x800; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE12 = 0x1000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE13 = 0x2000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE14 = 0x4000; // Interrupt semaphore n enable bit
    static constexpr uint32_t HSEM_IER_ISE15 = 0x8000; // Interrupt semaphore n enable bit

    static constexpr uint32_t HSEM_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_ICR_ISC0 = 0x1; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC1 = 0x2; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC2 = 0x4; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC3 = 0x8; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC4 = 0x10; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC5 = 0x20; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC6 = 0x40; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC7 = 0x80; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC8 = 0x100; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC9 = 0x200; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC10 = 0x400; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC11 = 0x800; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC12 = 0x1000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC13 = 0x2000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC14 = 0x4000; // Interrupt(N) semaphore n clear bit
    static constexpr uint32_t HSEM_ICR_ISC15 = 0x8000; // Interrupt(N) semaphore n clear bit

    static constexpr uint32_t HSEM_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_ISR_ISF0 = 0x1; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF1 = 0x2; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF2 = 0x4; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF3 = 0x8; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF4 = 0x10; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF5 = 0x20; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF6 = 0x40; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF7 = 0x80; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF8 = 0x100; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF9 = 0x200; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF10 = 0x400; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF11 = 0x800; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF12 = 0x1000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF13 = 0x2000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF14 = 0x4000; // Interrupt(N) semaphore n status bit before enable (mask)
    static constexpr uint32_t HSEM_ISR_ISF15 = 0x8000; // Interrupt(N) semaphore n status bit before enable (mask)

    static constexpr uint32_t HSEM_MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HSEM_MISR_MISF0 = 0x1; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF1 = 0x2; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF2 = 0x4; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF3 = 0x8; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF4 = 0x10; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF5 = 0x20; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF6 = 0x40; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF7 = 0x80; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF8 = 0x100; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF9 = 0x200; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF10 = 0x400; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF11 = 0x800; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF12 = 0x1000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF13 = 0x2000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF14 = 0x4000; // masked interrupt(N) semaphore n status bit after enable (mask)
    static constexpr uint32_t HSEM_MISR_MISF15 = 0x8000; // masked interrupt(N) semaphore n status bit after enable (mask)


    static constexpr uint32_t HSEM_CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xf> HSEM_CR_MASTERID; // MASTERID
    typedef bit_field_t<16, 0xffff> HSEM_CR_KEY; // Semaphore clear Key

    static constexpr uint32_t HSEM_KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HSEM_KEYR_KEY; // Semaphore Clear Key
};

template<>
struct peripheral_t<STM32WL5x_CM0P, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wl5x_cm0p_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wl5x_cm0p_hsem_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, HSEM>
{
    static constexpr periph_t P = HSEM;
    using T = stm32wle5_cm4_hsem_t;
    static T& V;
};

using hsem_t = peripheral_t<svd, HSEM>;

template<int INST> struct hsem_traits {};

template<> struct hsem_traits<0>
{
    using hsem = hsem_t;
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
