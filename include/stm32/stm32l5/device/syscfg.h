#pragma once

////
//
//      STM32L5 SYSCFG peripherals
//
////

////
//
//      System configuration controller
//
////

struct stm32l552_syscfg_t
{
    volatile uint32_t SECCFGR; // [read-write] SYSCFG secure configuration register
    volatile uint32_t CFGR1;   // [read-write] configuration register 1
    volatile uint32_t FPUIMR;  // [read-write] FPU interrupt mask register
    volatile uint32_t CNSLCKR; // [read-write] SYSCFG CPU non-secure lock register
    volatile uint32_t CSLOCKR; // [read-write] SYSCFG CPU secure lock register
    volatile uint32_t CFGR2;   // CFGR2
    volatile uint32_t SCSR;    // SCSR
    volatile uint32_t SKR;     // [write-only] SKR
    volatile uint32_t SWPR;    // [write-only] SWPR
    volatile uint32_t SWPR2;   // [write-only] SWPR2
    reserved_t<0x1> _0x2c;
    volatile uint32_t RSSCMDR; // [read-write] RSSCMDR

    static constexpr uint32_t SECCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t SECCFGR_SRAM2SEC = 0x4;  // SRAM2 security
    static constexpr uint32_t SECCFGR_CLASSBSEC = 0x2; // ClassB security
    static constexpr uint32_t SECCFGR_SYSCFGSEC = 0x1; // SYSCFG clock control security
    static constexpr uint32_t SECCFGR_FPUSEC = 0x8;    // FPUSEC

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR1_I2C4_FMP = 0x800000;   // I2C4_FMP
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000;   // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000;   // I2C2 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000;   // I2C1 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C_PB9_FMP = 0x80000; // Fast-mode Plus (Fm+) driving capability activation on PB9
    static constexpr uint32_t CFGR1_I2C_PB8_FMP = 0x40000; // Fast-mode Plus (Fm+) driving capability activation on PB8
    static constexpr uint32_t CFGR1_I2C_PB7_FMP = 0x20000; // Fast-mode Plus (Fm+) driving capability activation on PB7
    static constexpr uint32_t CFGR1_I2C_PB6_FMP = 0x10000; // Fast-mode Plus (Fm+) driving capability activation on PB6
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100;       // I/O analog switch voltage booster enable
    static constexpr uint32_t CFGR1_ANASWVDD = 0x200;      // GPIO analog switch control voltage selection

    static constexpr uint32_t FPUIMR_RESET_VALUE = 0x1f;
    template<uint32_t X>
    static constexpr uint32_t FPUIMR_FPU_IE =   // Floating point unit interrupts enable bits
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CNSLCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t CNSLCKR_LOCKNSVTOR = 0x1; // VTOR_NS register lock
    static constexpr uint32_t CNSLCKR_LOCKNSMPU = 0x2;  // Non-secure MPU registers lock

    static constexpr uint32_t CSLOCKR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSLOCKR_LOCKSVTAIRCR = 0x1; // LOCKSVTAIRCR
    static constexpr uint32_t CSLOCKR_LOCKSMPU = 0x2;     // LOCKSMPU
    static constexpr uint32_t CSLOCKR_LOCKSAU = 0x4;      // LOCKSAU

    static constexpr uint32_t SCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCSR_SRAM2BSY = 0x2; // SRAM2 busy by erase operation
    static constexpr uint32_t SCSR_SRAM2ER = 0x1;  // SRAM2 Erase

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM2 parity error flag
    static constexpr uint32_t CFGR2_ECCL = 0x8;  // ECC Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4;  // PVD lock enable bit
    static constexpr uint32_t CFGR2_SPL = 0x2;   // SRAM2 parity lock bit
    static constexpr uint32_t CFGR2_CLL = 0x1;   // LOCKUP (hardfault) output enable bit

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0;
    static constexpr uint32_t SWPR_P31WP = 0x80000000; // SRAM2 page 31 write protection
    static constexpr uint32_t SWPR_P30WP = 0x40000000; // P30WP
    static constexpr uint32_t SWPR_P29WP = 0x20000000; // P29WP
    static constexpr uint32_t SWPR_P28WP = 0x10000000; // P28WP
    static constexpr uint32_t SWPR_P27WP = 0x8000000;  // P27WP
    static constexpr uint32_t SWPR_P26WP = 0x4000000;  // P26WP
    static constexpr uint32_t SWPR_P25WP = 0x2000000;  // P25WP
    static constexpr uint32_t SWPR_P24WP = 0x1000000;  // P24WP
    static constexpr uint32_t SWPR_P23WP = 0x800000;   // P23WP
    static constexpr uint32_t SWPR_P22WP = 0x400000;   // P22WP
    static constexpr uint32_t SWPR_P21WP = 0x200000;   // P21WP
    static constexpr uint32_t SWPR_P20WP = 0x100000;   // P20WP
    static constexpr uint32_t SWPR_P19WP = 0x80000;    // P19WP
    static constexpr uint32_t SWPR_P18WP = 0x40000;    // P18WP
    static constexpr uint32_t SWPR_P17WP = 0x20000;    // P17WP
    static constexpr uint32_t SWPR_P16WP = 0x10000;    // P16WP
    static constexpr uint32_t SWPR_P15WP = 0x8000;     // P15WP
    static constexpr uint32_t SWPR_P14WP = 0x4000;     // P14WP
    static constexpr uint32_t SWPR_P13WP = 0x2000;     // P13WP
    static constexpr uint32_t SWPR_P12WP = 0x1000;     // P12WP
    static constexpr uint32_t SWPR_P11WP = 0x800;      // P11WP
    static constexpr uint32_t SWPR_P10WP = 0x400;      // P10WP
    static constexpr uint32_t SWPR_P9WP = 0x200;       // P9WP
    static constexpr uint32_t SWPR_P8WP = 0x100;       // P8WP
    static constexpr uint32_t SWPR_P7WP = 0x80;        // P7WP
    static constexpr uint32_t SWPR_P6WP = 0x40;        // P6WP
    static constexpr uint32_t SWPR_P5WP = 0x20;        // P5WP
    static constexpr uint32_t SWPR_P4WP = 0x10;        // P4WP
    static constexpr uint32_t SWPR_P3WP = 0x8;         // P3WP
    static constexpr uint32_t SWPR_P2WP = 0x4;         // P2WP
    static constexpr uint32_t SWPR_P1WP = 0x2;         // P1WP
    static constexpr uint32_t SWPR_P0WP = 0x1;         // P0WP

    static constexpr uint32_t SKR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SKR_KEY =   // SRAM2 write protection key for software erase
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SWPR2_RESET_VALUE = 0x0;
    static constexpr uint32_t SWPR2_P32WP = 0x1;        // P32WP
    static constexpr uint32_t SWPR2_P33WP = 0x2;        // P33WP
    static constexpr uint32_t SWPR2_P34WP = 0x4;        // P34WP
    static constexpr uint32_t SWPR2_P35WP = 0x8;        // P35WP
    static constexpr uint32_t SWPR2_P36WP = 0x10;       // P36WP
    static constexpr uint32_t SWPR2_P37WP = 0x20;       // P37WP
    static constexpr uint32_t SWPR2_P38WP = 0x40;       // P38WP
    static constexpr uint32_t SWPR2_P39WP = 0x80;       // P39WP
    static constexpr uint32_t SWPR2_P40WP = 0x100;      // P40WP
    static constexpr uint32_t SWPR2_P41WP = 0x200;      // P41WP
    static constexpr uint32_t SWPR2_P42WP = 0x400;      // P42WP
    static constexpr uint32_t SWPR2_P43WP = 0x800;      // P43WP
    static constexpr uint32_t SWPR2_P44WP = 0x1000;     // P44WP
    static constexpr uint32_t SWPR2_P45WP = 0x2000;     // P45WP
    static constexpr uint32_t SWPR2_P46WP = 0x4000;     // P46WP
    static constexpr uint32_t SWPR2_P47WP = 0x8000;     // P47WP
    static constexpr uint32_t SWPR2_P48WP = 0x10000;    // P48WP
    static constexpr uint32_t SWPR2_P49WP = 0x20000;    // P49WP
    static constexpr uint32_t SWPR2_P50WP = 0x40000;    // P50WP
    static constexpr uint32_t SWPR2_P51WP = 0x80000;    // P51WP
    static constexpr uint32_t SWPR2_P52WP = 0x100000;   // P52WP
    static constexpr uint32_t SWPR2_P53WP = 0x200000;   // P53WP
    static constexpr uint32_t SWPR2_P54WP = 0x400000;   // P54WP
    static constexpr uint32_t SWPR2_P55WP = 0x800000;   // P55WP
    static constexpr uint32_t SWPR2_P56WP = 0x1000000;  // P56WP
    static constexpr uint32_t SWPR2_P57WP = 0x2000000;  // P57WP
    static constexpr uint32_t SWPR2_P58WP = 0x4000000;  // P58WP
    static constexpr uint32_t SWPR2_P59WP = 0x8000000;  // P59WP
    static constexpr uint32_t SWPR2_P60WP = 0x10000000; // P60WP
    static constexpr uint32_t SWPR2_P61WP = 0x20000000; // P61WP
    static constexpr uint32_t SWPR2_P62WP = 0x40000000; // P62WP
    static constexpr uint32_t SWPR2_P63WP = 0x80000000; // P63WP

    static constexpr uint32_t RSSCMDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RSSCMDR_RSSCMD =   // RSS commands
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32L552, SYSCFG>
{
    typedef stm32l552_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_SYSCFG>
{
    typedef stm32l552_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SYSCFG>
{
    typedef stm32l552_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_SYSCFG>
{
    typedef stm32l552_syscfg_t T;
    static T& V;
};

using sec_syscfg_t = peripheral_t<mcu_svd, SEC_SYSCFG>;
using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

