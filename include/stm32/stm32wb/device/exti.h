#pragma once

////
//
//      STM32WB EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32wb30_cm4_exti_t
{
    volatile uint32_t RTSR1;   // [read-write] rising trigger selection register
    volatile uint32_t FTSR1;   // [read-write] falling trigger selection register
    volatile uint32_t SWIER1;  // [read-write] software interrupt event register
    volatile uint32_t PR1;     // [read-write] EXTI pending register
    reserved_t<0x4> _0x20;
    volatile uint32_t RTSR2;   // [read-write] rising trigger selection register
    volatile uint32_t FTSR2;   // [read-write] falling trigger selection register
    volatile uint32_t SWIER2;  // [read-write] software interrupt event register
    volatile uint32_t PR2;     // [read-write] pending register
    reserved_t<0x14> _0x80;
    volatile uint32_t C1IMR1;  // [read-write] CPUm wakeup with interrupt mask register
    volatile uint32_t C1EMR1;  // [read-write] CPUm wakeup with event mask register
    reserved_t<0x2> _0x90;
    volatile uint32_t C1IMR2;  // [read-write] CPUm wakeup with interrupt mask register
    volatile uint32_t C1EMR2;  // [read-write] CPUm wakeup with event mask register
    reserved_t<0xa> _0xc0;
    volatile uint32_t C2IMR1;  // [read-write] CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR1;  // [read-write] CPUm wakeup with event mask register
    reserved_t<0x2> _0xd0;
    volatile uint32_t C2IMR2;  // [read-write] CPUm wakeup with interrupt mask register
    volatile uint32_t C2EMR2;  // [read-write] CPUm wakeup with event mask register
    reserved_t<0xc0> _0x3d8;
    volatile uint32_t HWCFGR7; // [read-only] EXTI Hardware configuration registers
    volatile uint32_t HWCFGR6; // [read-only] Hardware configuration registers
    volatile uint32_t HWCFGR5; // [read-only] Hardware configuration registers
    volatile uint32_t HWCFGR4; // [read-only] Hardware configuration registers
    volatile uint32_t HWCFGR3; // [read-only] Hardware configuration registers
    volatile uint32_t HWCFGR2; // [read-only] Hardware configuration registers
    volatile uint32_t HWCFGR1; // [read-only] Hardware configuration register 1
    volatile uint32_t VERR;    // [read-only] EXTI IP Version register
    volatile uint32_t IPIDR;   // [read-only] Identification register
    volatile uint32_t SIDR;    // [read-only] Size ID register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTSR1_RT =                // Rising trigger event configuration bit of Configurable Event input
        bit_field_t<0, 0x3fffff>::value<X>();
    static constexpr uint32_t RTSR1_RT_31 = 0x80000000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FTSR1_FT =                // Falling trigger event configuration bit of Configurable Event input
        bit_field_t<0, 0x3fffff>::value<X>();
    static constexpr uint32_t FTSR1_FT_31 = 0x80000000; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SWIER1_SWI =                // Software interrupt on event
        bit_field_t<0, 0x3fffff>::value<X>();
    static constexpr uint32_t SWIER1_SWI_31 = 0x80000000; // Software interrupt on event

    static constexpr uint32_t PR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PR1_PIF =                // Configurable event inputs Pending bit
        bit_field_t<0, 0x3fffff>::value<X>();
    static constexpr uint32_t PR1_PIF_31 = 0x80000000; // Configurable event inputs Pending bit

    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR2_RT33 = 0x2; // Rising trigger event configuration bit of Configurable Event input
    template<uint32_t X>
    static constexpr uint32_t RTSR2_RT40_41 =   // Rising trigger event configuration bit of Configurable Event input
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR2_FT33 = 0x2; // Falling trigger event configuration bit of Configurable Event input
    template<uint32_t X>
    static constexpr uint32_t FTSR2_FT40_41 =   // Falling trigger event configuration bit of Configurable Event input
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER2_SWI33 = 0x2; // Software interrupt on event
    template<uint32_t X>
    static constexpr uint32_t SWIER2_SWI40_41 =   // Software interrupt on event
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t PR2_RESET_VALUE = 0x0;
    static constexpr uint32_t PR2_PIF33 = 0x2; // Configurable event inputs x+32 Pending bit.
    template<uint32_t X>
    static constexpr uint32_t PR2_PIF40_41 =   // Configurable event inputs x+32 Pending bit.
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t C1IMR1_RESET_VALUE = 0x7fc00000;

    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x7fc00000;

    static constexpr uint32_t C1EMR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1EMR1_EM0_15 =    // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1EMR1_EM17_21 =   // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<17, 0x1f>::value<X>();

    static constexpr uint32_t C2EMR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2EMR1_EM0_15 =    // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2EMR1_EM17_21 =   // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<17, 0x1f>::value<X>();

    static constexpr uint32_t C1IMR2_RESET_VALUE = 0x1fcfd;
    template<uint32_t X>
    static constexpr uint32_t C1IMR2_IM =   // CPUm Wakeup with interrupt Mask on Event input
        bit_field_t<0, 0x1ffff>::value<X>();

    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x1fcfd;
    template<uint32_t X>
    static constexpr uint32_t C2IMR2_IM =   // CPUm Wakeup with interrupt Mask on Event input
        bit_field_t<0, 0x1ffff>::value<X>();

    static constexpr uint32_t C1EMR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1EMR2_EM =   // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t C2EMR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2EMR2_EM =   // CPU(m) Wakeup with event generation Mask on Event input
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t HWCFGR5_RESET_VALUE = 0x3effff;

    static constexpr uint32_t HWCFGR6_RESET_VALUE = 0x300;

    static constexpr uint32_t HWCFGR7_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x803fffff;

    static constexpr uint32_t HWCFGR3_RESET_VALUE = 0x302;

    static constexpr uint32_t HWCFGR4_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x3130;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBEVENTS =   // HW configuration number of event
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBCPUS =     // HW configuration number of CPUs
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CPUEVTEN =   // HW configuration of CPU(m) event output enable
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision number
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0xe0001;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32WB30_CM4, EXTI>
{
    typedef stm32wb30_cm4_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, EXTI>
{
    typedef stm32wb30_cm4_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, EXTI>
{
    typedef stm32wb30_cm4_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, EXTI>
{
    typedef stm32wb30_cm4_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

