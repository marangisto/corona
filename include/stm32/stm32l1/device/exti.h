#pragma once

////
//
//      STM32L1 EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32l100_exti_t
{
    volatile uint32_t IMR; // IMR
    volatile uint32_t EMR; // EMR
    volatile uint32_t RTSR; // RTSR
    volatile uint32_t FTSR; // FTSR
    volatile uint32_t SWIER; // SWIER
    volatile uint32_t PR; // PR

    static constexpr uint32_t IMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> IMR_MR; // Interrupt mask on line x

    static constexpr uint32_t EMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> EMR_MR; // Event mask on line x

    static constexpr uint32_t RTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> RTSR_TR; // Rising edge trigger event configuration bit of line x

    static constexpr uint32_t FTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> FTSR_TR; // Falling edge trigger event configuration bit of line x

    static constexpr uint32_t SWIER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> SWIER_SWIER; // Software interrupt on line x

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffff> PR_PR; // Pending bit
};

template<>
struct peripheral_t<STM32L100, EXTI>
{
    using T = stm32l100_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, EXTI>
{
    using T = stm32l100_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, EXTI>
{
    using T = stm32l100_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, EXTI>
{
    using T = stm32l100_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
