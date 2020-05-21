#pragma once

////
//
//      STM32L1 EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32l100_exti_t
{
    volatile uint32_t IMR;   // [read-write] IMR
    volatile uint32_t EMR;   // [read-write] EMR
    volatile uint32_t RTSR;  // [read-write] RTSR
    volatile uint32_t FTSR;  // [read-write] FTSR
    volatile uint32_t SWIER; // [read-write] SWIER
    volatile uint32_t PR;    // [read-write] PR

    static constexpr uint32_t IMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IMR_MR =   // Interrupt mask on line x
        bit_field_t<0, 0x7fffff>::value<X>();

    static constexpr uint32_t EMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EMR_MR =   // Event mask on line x
        bit_field_t<0, 0x7fffff>::value<X>();

    static constexpr uint32_t RTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTSR_TR =   // Rising edge trigger event configuration bit of line x
        bit_field_t<0, 0x7fffff>::value<X>();

    static constexpr uint32_t FTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FTSR_TR =   // Falling edge trigger event configuration bit of line x
        bit_field_t<0, 0x7fffff>::value<X>();

    static constexpr uint32_t SWIER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SWIER_SWIER =   // Software interrupt on line x
        bit_field_t<0, 0x7fffff>::value<X>();

    static constexpr uint32_t PR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PR_PR =   // Pending bit
        bit_field_t<0, 0x7fffff>::value<X>();
};


template<>
struct peripheral_t<STM32L100, EXTI>
{
    typedef stm32l100_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, EXTI>
{
    typedef stm32l100_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, EXTI>
{
    typedef stm32l100_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, EXTI>
{
    typedef stm32l100_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

