#pragma once

////
//
//      STM32G0 WWDG peripherals
//
///

// WWDG: System window watchdog

struct stm32g030_wwdg_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t CFR; // Configuration register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB)

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<11, 0x7> CFR_WDGTB; // Timer base
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

// WWDG: System window watchdog

struct stm32g050_wwdg_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t CFR; // Configuration register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB) These bits contain the value of the watchdog counter, decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A reset is produced when it is decremented from 0x40 to 0x3F (T6 becomes cleared).
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit This bit is set by software and only cleared by hardware after a reset. When WDGA=1, the watchdog can generate a reset.

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value These bits contain the window value to be compared with the down-counter.
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt When set, an interrupt occurs whenever the counter reaches the value 0x40. This interrupt is only cleared by hardware after a reset.
    typedef bit_field_t<11, 0x7> CFR_WDGTB; // Timer base The timebase of the prescaler can be modified as follows:

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

template<>
struct peripheral_t<STM32G030, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g030_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32g050_wwdg_t;
    static T& V;
};

using wwdg_t = peripheral_t<svd, WWDG>;

template<int INST> struct wwdg_traits {};

template<> struct wwdg_traits<0>
{
    using wwdg = wwdg_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN;
    }
};
