#pragma once

////
//
//      STM32U5 RAMCFG peripherals
//
///

// RAMCFG: RAMCFG

struct stm32u5xx_ramcfg_t
{
    volatile uint32_t RAM1CR; // RAMCFG SRAM x control register
    reserved_t<0x1> _0x4;
    volatile uint32_t RAM1ISR; // RAMCFG RAMx interrupt status register
    reserved_t<0x7> _0xc;
    volatile uint32_t RAM1ERKEYR; // RAMCFG SRAM x erase key register
    reserved_t<0x5> _0x2c;
    volatile uint32_t RAM2CR; // RAMCFG SRAM x control register
    volatile uint32_t RAM2IER; // RAMCFG SRAM x interrupt enable register
    volatile uint32_t RAM2ISR; // RAMCFG RAMx interrupt status register
    volatile uint32_t RAM2SEAR; // RAMCFG RAM x ECC single error address register
    volatile uint32_t RAM2DEAR; // RAMCFG RAM x ECC double error address register
    volatile uint32_t RAM2ICR; // RAMCFG RAM x interrupt clear register x
    volatile uint32_t RAM2WPR1; // RAMCFG SRAM2 write protection register 1
    volatile uint32_t RAM2WPR2; // RAMCFG SRAM2 write protection register 2
    reserved_t<0x1> _0x60;
    volatile uint32_t RAM2ECCKEYR; // RAMCFG SRAM x ECC key register
    volatile uint32_t RAM2ERKEYR; // RAMCFG SRAM x erase key register
    reserved_t<0x5> _0x6c;
    volatile uint32_t RAM3CR; // RAMCFG SRAM x control register
    volatile uint32_t RAM3IER; // RAMCFG SRAM x interrupt enable register
    volatile uint32_t RAM3ISR; // RAMCFG RAMx interrupt status register
    volatile uint32_t RAM3SEAR; // RAMCFG RAM x ECC single error address register
    volatile uint32_t RAM3DEAR; // RAMCFG RAM x ECC double error address register
    volatile uint32_t RAM3ICR; // RAMCFG RAM x interrupt clear register x
    reserved_t<0x3> _0x98;
    volatile uint32_t RAM3ECCKEYR; // RAMCFG SRAM x ECC key register
    volatile uint32_t RAM3ERKEYR; // RAMCFG SRAM x erase key register
    reserved_t<0x5> _0xac;
    volatile uint32_t RAM4CR; // RAMCFG SRAM x control register
    reserved_t<0x1> _0xc4;
    volatile uint32_t RAM4ISR; // RAMCFG RAMx interrupt status register
    reserved_t<0x7> _0xcc;
    volatile uint32_t RAM4ERKEYR; // RAMCFG SRAM x erase key register
    reserved_t<0x5> _0xec;
    volatile uint32_t RAM5CR; // RAMCFG SRAM x control register
    volatile uint32_t RAM5IER; // RAMCFG SRAM x interrupt enable register
    volatile uint32_t RAM5ISR; // RAMCFG RAMx interrupt status register
    volatile uint32_t RAM5SEAR; // RAMCFG RAM x ECC single error address register
    volatile uint32_t RAM5DEAR; // RAMCFG RAM x ECC double error address register
    volatile uint32_t RAM5ICR; // RAMCFG RAM x interrupt clear register x

    static constexpr uint32_t RAM1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM1CR_ECCE = 0x1; // ECCE
    static constexpr uint32_t RAM1CR_ALE = 0x10; // ALE
    static constexpr uint32_t RAM1CR_SRAMER = 0x100; // SRAMER
    typedef bit_field_t<16, 0x7> RAM1CR_WSC; // WSC


    static constexpr uint32_t RAM1ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM1ISR_SEDC = 0x1; // SEDC
    static constexpr uint32_t RAM1ISR_DED = 0x2; // DED
    static constexpr uint32_t RAM1ISR_SRAMBUSY = 0x100; // SRAMBUSY


    static constexpr uint32_t RAM1ERKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM1ERKEYR_ERASEKEY; // ERASEKEY


    static constexpr uint32_t RAM2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2CR_ECCE = 0x1; // ECCE
    static constexpr uint32_t RAM2CR_ALE = 0x10; // ALE
    static constexpr uint32_t RAM2CR_SRAMER = 0x100; // SRAMER
    typedef bit_field_t<16, 0x7> RAM2CR_WSC; // WSC

    static constexpr uint32_t RAM2IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2IER_SEIE = 0x1; // SEIE
    static constexpr uint32_t RAM2IER_DEIE = 0x2; // DEIE
    static constexpr uint32_t RAM2IER_ECCNMI = 0x8; // ECCNMI

    static constexpr uint32_t RAM2ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2ISR_SEDC = 0x1; // SEDC
    static constexpr uint32_t RAM2ISR_DED = 0x2; // DED
    static constexpr uint32_t RAM2ISR_SRAMBUSY = 0x100; // SRAMBUSY

    static constexpr uint32_t RAM2SEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM2SEAR_ESEA; // ESEA

    static constexpr uint32_t RAM2DEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM2DEAR_EDEA; // EDEA

    static constexpr uint32_t RAM2ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2ICR_CSEDC = 0x1; // CSEDC
    static constexpr uint32_t RAM2ICR_CDED = 0x2; // CDED

    static constexpr uint32_t RAM2WPR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2WPR1_P0WP = 0x1; // P0WP
    static constexpr uint32_t RAM2WPR1_P1WP = 0x2; // P1WP
    static constexpr uint32_t RAM2WPR1_P2WP = 0x4; // P2WP
    static constexpr uint32_t RAM2WPR1_P3WP = 0x8; // P3WP
    static constexpr uint32_t RAM2WPR1_P4WP = 0x10; // P4WP
    static constexpr uint32_t RAM2WPR1_P5WP = 0x20; // P5WP
    static constexpr uint32_t RAM2WPR1_P6WP = 0x40; // P6WP
    static constexpr uint32_t RAM2WPR1_P7WP = 0x80; // P7WP
    static constexpr uint32_t RAM2WPR1_P8WP = 0x100; // P8WP
    static constexpr uint32_t RAM2WPR1_P9WP = 0x200; // P9WP
    static constexpr uint32_t RAM2WPR1_P10WP = 0x400; // P10WP
    static constexpr uint32_t RAM2WPR1_P11WP = 0x800; // P11WP
    static constexpr uint32_t RAM2WPR1_P12WP = 0x1000; // P12WP
    static constexpr uint32_t RAM2WPR1_P13WP = 0x2000; // P13WP
    static constexpr uint32_t RAM2WPR1_P14WP = 0x4000; // P14WP
    static constexpr uint32_t RAM2WPR1_P15WP = 0x8000; // P15WP
    static constexpr uint32_t RAM2WPR1_P16WP = 0x10000; // P16WP
    static constexpr uint32_t RAM2WPR1_P17WP = 0x20000; // P17WP
    static constexpr uint32_t RAM2WPR1_P18WP = 0x40000; // P18WP
    static constexpr uint32_t RAM2WPR1_P19WP = 0x80000; // P19WP
    static constexpr uint32_t RAM2WPR1_P20WP = 0x100000; // P20WP
    static constexpr uint32_t RAM2WPR1_P21WP = 0x200000; // P21WP
    static constexpr uint32_t RAM2WPR1_P22WP = 0x400000; // P22WP
    static constexpr uint32_t RAM2WPR1_P23WP = 0x800000; // P23WP
    static constexpr uint32_t RAM2WPR1_P24WP = 0x1000000; // P24WP
    static constexpr uint32_t RAM2WPR1_P25WP = 0x2000000; // P25WP
    static constexpr uint32_t RAM2WPR1_P26WP = 0x4000000; // P26WP
    static constexpr uint32_t RAM2WPR1_P27WP = 0x8000000; // P27WP
    static constexpr uint32_t RAM2WPR1_P28WP = 0x10000000; // P28WP
    static constexpr uint32_t RAM2WPR1_P29WP = 0x20000000; // P29WP
    static constexpr uint32_t RAM2WPR1_P30WP = 0x40000000; // P30WP
    static constexpr uint32_t RAM2WPR1_P31WP = 0x80000000; // P31WP

    static constexpr uint32_t RAM2WPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM2WPR2_P32WP = 0x1; // P32WP
    static constexpr uint32_t RAM2WPR2_P33WP = 0x2; // P33WP
    static constexpr uint32_t RAM2WPR2_P34WP = 0x4; // P34WP
    static constexpr uint32_t RAM2WPR2_P35WP = 0x8; // P35WP
    static constexpr uint32_t RAM2WPR2_P36WP = 0x10; // P36WP
    static constexpr uint32_t RAM2WPR2_P37WP = 0x20; // P37WP
    static constexpr uint32_t RAM2WPR2_P38WP = 0x40; // P38WP
    static constexpr uint32_t RAM2WPR2_P39WP = 0x80; // P39WP
    static constexpr uint32_t RAM2WPR2_P40WP = 0x100; // P40WP
    static constexpr uint32_t RAM2WPR2_P41WP = 0x200; // P41WP
    static constexpr uint32_t RAM2WPR2_P42WP = 0x400; // P42WP
    static constexpr uint32_t RAM2WPR2_P43WP = 0x800; // P43WP
    static constexpr uint32_t RAM2WPR2_P44WP = 0x1000; // P44WP
    static constexpr uint32_t RAM2WPR2_P45WP = 0x2000; // P45WP
    static constexpr uint32_t RAM2WPR2_P46WP = 0x4000; // P46WP
    static constexpr uint32_t RAM2WPR2_P47WP = 0x8000; // P47WP
    static constexpr uint32_t RAM2WPR2_P48WP = 0x10000; // P48WP
    static constexpr uint32_t RAM2WPR2_P49WP = 0x20000; // P49WP
    static constexpr uint32_t RAM2WPR2_P50WP = 0x40000; // P50WP
    static constexpr uint32_t RAM2WPR2_P51WP = 0x80000; // P51WP
    static constexpr uint32_t RAM2WPR2_P52WP = 0x100000; // P52WP
    static constexpr uint32_t RAM2WPR2_P53WP = 0x200000; // P53WP
    static constexpr uint32_t RAM2WPR2_P54WP = 0x400000; // P54WP
    static constexpr uint32_t RAM2WPR2_P55WP = 0x800000; // P55WP
    static constexpr uint32_t RAM2WPR2_P56WP = 0x1000000; // P56WP
    static constexpr uint32_t RAM2WPR2_P57WP = 0x2000000; // P57WP
    static constexpr uint32_t RAM2WPR2_P58WP = 0x4000000; // P58WP
    static constexpr uint32_t RAM2WPR2_P59WP = 0x8000000; // P59WP
    static constexpr uint32_t RAM2WPR2_P60WP = 0x10000000; // P60WP
    static constexpr uint32_t RAM2WPR2_P61WP = 0x20000000; // P61WP
    static constexpr uint32_t RAM2WPR2_P62WP = 0x40000000; // P62WP
    static constexpr uint32_t RAM2WPR2_P63WP = 0x80000000; // P63WP


    static constexpr uint32_t RAM2ECCKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM2ECCKEYR_ECCKEY; // ECCKEY

    static constexpr uint32_t RAM2ERKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM2ERKEYR_ERASEKEY; // ERASEKEY


    static constexpr uint32_t RAM3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM3CR_ECCE = 0x1; // ECCE
    static constexpr uint32_t RAM3CR_ALE = 0x10; // ALE
    static constexpr uint32_t RAM3CR_SRAMER = 0x100; // SRAMER
    typedef bit_field_t<16, 0x7> RAM3CR_WSC; // WSC

    static constexpr uint32_t RAM3IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM3IER_SEIE = 0x1; // SEIE
    static constexpr uint32_t RAM3IER_DEIE = 0x2; // DEIE
    static constexpr uint32_t RAM3IER_ECCNMI = 0x8; // ECCNMI

    static constexpr uint32_t RAM3ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM3ISR_SEDC = 0x1; // SEDC
    static constexpr uint32_t RAM3ISR_DED = 0x2; // DED
    static constexpr uint32_t RAM3ISR_SRAMBUSY = 0x100; // SRAMBUSY

    static constexpr uint32_t RAM3SEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM3SEAR_ESEA; // ESEA

    static constexpr uint32_t RAM3DEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM3DEAR_EDEA; // EDEA

    static constexpr uint32_t RAM3ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM3ICR_CSEDC = 0x1; // CSEDC
    static constexpr uint32_t RAM3ICR_CDED = 0x2; // CDED


    static constexpr uint32_t RAM3ECCKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM3ECCKEYR_ECCKEY; // ECCKEY

    static constexpr uint32_t RAM3ERKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM3ERKEYR_ERASEKEY; // ERASEKEY


    static constexpr uint32_t RAM4CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM4CR_ECCE = 0x1; // ECCE
    static constexpr uint32_t RAM4CR_ALE = 0x10; // ALE
    static constexpr uint32_t RAM4CR_SRAMER = 0x100; // SRAMER
    typedef bit_field_t<16, 0x7> RAM4CR_WSC; // WSC


    static constexpr uint32_t RAM4ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM4ISR_SEDC = 0x1; // SEDC
    static constexpr uint32_t RAM4ISR_DED = 0x2; // DED
    static constexpr uint32_t RAM4ISR_SRAMBUSY = 0x100; // SRAMBUSY


    static constexpr uint32_t RAM4ERKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RAM4ERKEYR_ERASEKEY; // ERASEKEY


    static constexpr uint32_t RAM5CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM5CR_ECCE = 0x1; // ECCE
    static constexpr uint32_t RAM5CR_ALE = 0x10; // ALE
    static constexpr uint32_t RAM5CR_SRAMER = 0x100; // SRAMER
    typedef bit_field_t<16, 0x7> RAM5CR_WSC; // WSC

    static constexpr uint32_t RAM5IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM5IER_SEIE = 0x1; // SEIE
    static constexpr uint32_t RAM5IER_DEIE = 0x2; // DEIE
    static constexpr uint32_t RAM5IER_ECCNMI = 0x8; // ECCNMI

    static constexpr uint32_t RAM5ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM5ISR_SEDC = 0x1; // SEDC
    static constexpr uint32_t RAM5ISR_DED = 0x2; // DED
    static constexpr uint32_t RAM5ISR_SRAMBUSY = 0x100; // SRAMBUSY

    static constexpr uint32_t RAM5SEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM5SEAR_ESEA; // ESEA

    static constexpr uint32_t RAM5DEAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RAM5DEAR_EDEA; // EDEA

    static constexpr uint32_t RAM5ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RAM5ICR_CSEDC = 0x1; // CSEDC
    static constexpr uint32_t RAM5ICR_CDED = 0x2; // CDED
};

template<>
struct peripheral_t<STM32U5xx, RAMCFG>
{
    static constexpr periph_t P = RAMCFG;
    using T = stm32u5xx_ramcfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_RAMCFG>
{
    static constexpr periph_t P = SEC_RAMCFG;
    using T = stm32u5xx_ramcfg_t;
    static T& V;
};

using ramcfg_t = peripheral_t<svd, RAMCFG>;
using sec_ramcfg_t = peripheral_t<svd, SEC_RAMCFG>;
