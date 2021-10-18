#pragma once

////
//
//      STM32WB EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32wb10_cm4_exti_t
{
    volatile uint32_t RTSR1; // rising trigger selection register
    volatile uint32_t FTSR1; // falling trigger selection register
    volatile uint32_t SWIER1; // software interrupt event register
    volatile uint32_t PR1; // EXTI pending register
    reserved_t<0x4> _0x10;
    volatile uint32_t RTSR2; // rising trigger selection register
    volatile uint32_t FTSR2; // falling trigger selection register
    volatile uint32_t SWIER2; // software interrupt event register
    volatile uint32_t PR2; // pending register
    reserved_t<0x14> _0x30;
    volatile uint32_t IMR1; // CPUm wakeup with interrupt mask register
    volatile uint32_t EMR1; // CPUm wakeup with event mask register
    reserved_t<0x2> _0x88;
    volatile uint32_t IMR2; // CPUm wakeup with interrupt mask register
    volatile uint32_t EMR2; // CPUm wakeup with event mask register
    reserved_t<0xa> _0x98;
    volatile uint32_t C2IMR1; // CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR1; // CPUm wakeup with event mask register
    reserved_t<0x2> _0xc8;
    volatile uint32_t C2IMR2; // CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR2; // CPUm wakeup with event mask register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fffff> RTSR1_RT; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fffff> FTSR1_FT; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fffff> SWIER1_SWI; // Software interrupt on event

    static constexpr uint32_t PR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1fffff> PR1_PIF; // Configurable event inputs Pending bit


    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR2_RT33 = 0x2; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR2_RT40 = 0x100; // Rising trigger event configuration bit of Configurable Event input 40
    static constexpr uint32_t RTSR2_RT41 = 0x200; // Rising trigger event configuration bit of Configurable Event input 41

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR2_FT33 = 0x2; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR2_FT40 = 0x100; // Falling trigger event configuration bit of configurable event input 40
    static constexpr uint32_t FTSR2_FT41 = 0x200; // Falling trigger event configuration bit of configurable event input 41

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER2_SWI33 = 0x2; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI40 = 0x100; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI41 = 0x200; // Software interrupt on event

    static constexpr uint32_t PR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR2_PIF33 = 0x2; // Configurable event inputs x+32 Pending bit.
    static constexpr uint32_t PR2_PIF40 = 0x100; // Configurable event inputs x+32 Pending bit.
    static constexpr uint32_t PR2_PIF41 = 0x200; // Configurable event inputs x+32 Pending bit.


    static constexpr uint32_t IMR1_RESET_VALUE = 0x7fc00000; // Reset value
    typedef bit_field_t<0, 0xffffffff> IMR1_IM; // CPU(m) wakeup with interrupt Mask on Event input

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> EMR1_EM0_15; // CPU(m) Wakeup with event generation Mask on Event input
    typedef bit_field_t<17, 0xf> EMR1_EM17_20; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t IMR2_RESET_VALUE = 0x1fcfd; // Reset value
    typedef bit_field_t<1, 0x1ffff> IMR2_IM; // CPUm Wakeup with interrupt Mask on Event input

    static constexpr uint32_t EMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> EMR2_EM; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x7fc00000; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2IMR1_IM; // CPU(m) wakeup with interrupt Mask on Event input

    static constexpr uint32_t C2EMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C2EMR1_EM0_15; // CPU(m) Wakeup with event generation Mask on Event input
    typedef bit_field_t<17, 0xf> C2EMR1_EM17_20; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x1fcfd; // Reset value
    typedef bit_field_t<1, 0x1ffff> C2IMR2_IM; // CPUm Wakeup with interrupt Mask on Event input

    static constexpr uint32_t C2EMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> C2EMR2_EM; // CPU(m) Wakeup with event generation Mask on Event input
};

// EXTI: External interrupt/event controller

struct stm32wb30_cm4_exti_t
{
    volatile uint32_t RTSR1; // rising trigger selection register
    volatile uint32_t FTSR1; // falling trigger selection register
    volatile uint32_t SWIER1; // software interrupt event register
    volatile uint32_t PR1; // EXTI pending register
    reserved_t<0x4> _0x10;
    volatile uint32_t RTSR2; // rising trigger selection register
    volatile uint32_t FTSR2; // falling trigger selection register
    volatile uint32_t SWIER2; // software interrupt event register
    volatile uint32_t PR2; // pending register
    reserved_t<0x14> _0x30;
    volatile uint32_t C1IMR1; // CPUm wakeup with interrupt mask register
    volatile uint32_t C1EMR1; // CPUm wakeup with event mask register
    reserved_t<0x2> _0x88;
    volatile uint32_t C1IMR2; // CPUm wakeup with interrupt mask register
    volatile uint32_t C1EMR2; // CPUm wakeup with event mask register
    reserved_t<0xa> _0x98;
    volatile uint32_t C2IMR1; // CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR1; // CPUm wakeup with event mask register
    reserved_t<0x2> _0xc8;
    volatile uint32_t C2IMR2; // CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR2; // CPUm wakeup with event mask register
    reserved_t<0xc0> _0xd8;
    volatile uint32_t HWCFGR7; // EXTI Hardware configuration registers
    volatile uint32_t HWCFGR6; // Hardware configuration registers
    volatile uint32_t HWCFGR5; // Hardware configuration registers
    volatile uint32_t HWCFGR4; // Hardware configuration registers
    volatile uint32_t HWCFGR3; // Hardware configuration registers
    volatile uint32_t HWCFGR2; // Hardware configuration registers
    volatile uint32_t HWCFGR1; // Hardware configuration register 1
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // Identification register
    volatile uint32_t SIDR; // Size ID register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffff> RTSR1_RT; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_RT_31 = 0x80000000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffff> FTSR1_FT; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_FT_31 = 0x80000000; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffff> SWIER1_SWI; // Software interrupt on event
    static constexpr uint32_t SWIER1_SWI_31 = 0x80000000; // Software interrupt on event

    static constexpr uint32_t PR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffff> PR1_PIF; // Configurable event inputs Pending bit
    static constexpr uint32_t PR1_PIF_31 = 0x80000000; // Configurable event inputs Pending bit


    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR2_RT33 = 0x2; // Rising trigger event configuration bit of Configurable Event input
    typedef bit_field_t<8, 0x3> RTSR2_RT40_41; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR2_FT33 = 0x2; // Falling trigger event configuration bit of Configurable Event input
    typedef bit_field_t<8, 0x3> FTSR2_FT40_41; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER2_SWI33 = 0x2; // Software interrupt on event
    typedef bit_field_t<8, 0x3> SWIER2_SWI40_41; // Software interrupt on event

    static constexpr uint32_t PR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR2_PIF33 = 0x2; // Configurable event inputs x+32 Pending bit.
    typedef bit_field_t<8, 0x3> PR2_PIF40_41; // Configurable event inputs x+32 Pending bit.


    static constexpr uint32_t C1IMR1_RESET_VALUE = 0x7fc00000; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1IMR1_IM; // CPU(m) wakeup with interrupt Mask on Event input

    static constexpr uint32_t C1EMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C1EMR1_EM0_15; // CPU(m) Wakeup with event generation Mask on Event input
    typedef bit_field_t<17, 0x1f> C1EMR1_EM17_21; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t C1IMR2_RESET_VALUE = 0x1fcfd; // Reset value
    typedef bit_field_t<0, 0x1ffff> C1IMR2_IM; // CPUm Wakeup with interrupt Mask on Event input

    static constexpr uint32_t C1EMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> C1EMR2_EM; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x7fc00000; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2IMR1_IM; // CPU(m) wakeup with interrupt Mask on Event input

    static constexpr uint32_t C2EMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> C2EMR1_EM0_15; // CPU(m) Wakeup with event generation Mask on Event input
    typedef bit_field_t<17, 0x1f> C2EMR1_EM17_21; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x1fcfd; // Reset value
    typedef bit_field_t<0, 0x1ffff> C2IMR2_IM; // CPUm Wakeup with interrupt Mask on Event input

    static constexpr uint32_t C2EMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> C2EMR2_EM; // CPU(m) Wakeup with event generation Mask on Event input


    static constexpr uint32_t HWCFGR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR7_CPUEVENT; // HW configuration CPU event generation

    static constexpr uint32_t HWCFGR6_RESET_VALUE = 0x300; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR6_CPUEVENT; // HW configuration CPU event generation

    static constexpr uint32_t HWCFGR5_RESET_VALUE = 0x3effff; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR5_CPUEVENT; // HW configuration CPU event generation

    static constexpr uint32_t HWCFGR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR4_EVENT_TRG; // HW configuration event trigger type

    static constexpr uint32_t HWCFGR3_RESET_VALUE = 0x302; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR3_EVENT_TRG; // HW configuration event trigger type

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x803fffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> HWCFGR2_EVENT_TRG; // HW configuration event trigger type

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x3130; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_NBEVENTS; // HW configuration number of event
    typedef bit_field_t<8, 0xf> HWCFGR1_NBCPUS; // HW configuration number of CPUs
    typedef bit_field_t<12, 0xf> HWCFGR1_CPUEVTEN; // HW configuration of CPU(m) event output enable

    static constexpr uint32_t VERR_RESET_VALUE = 0x20; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0xe0001; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32WB10_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb10_cm4_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB15_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb10_cm4_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb30_cm4_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb30_cm4_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb30_cm4_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wb30_cm4_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
