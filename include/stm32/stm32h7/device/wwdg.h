#pragma once

////
//
//      STM32H7 WWDG peripherals
//
////

////
//
//      WWDG
//
////

struct stm32h742x_wwdg_t
{
    volatile uint32_t CR;  // [read-write] Control register
    volatile uint32_t CFR; // [read-write] Configuration register
    volatile uint32_t SR;  // [read-write] Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t CR_T =          // 7-bit counter (MSB to LSB) These bits contain the value of the watchdog counter. It is decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A reset is produced when it is decremented from 0x40 to 0x3F (T6 becomes cleared).
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit This bit is set by software and only cleared by hardware after a reset. When WDGA=1, the watchdog can generate a reset.

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t CFR_W =          // 7-bit window value These bits contain the window value to be compared to the downcounter.
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFR_WDGTB =      // Timer base The time base of the prescaler can be modified as follows:
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt When set, an interrupt occurs whenever the counter reaches the value 0x40. This interrupt is only cleared by hardware after a reset.

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag This bit is set by hardware when the counter has reached the value 0x40. It must be cleared by software by writing 0. A write of 1 has no effect. This bit is also set if the interrupt is not enabled.
};


////
//
//      WWDG
//
////

struct stm32h750x_wwdg_t
{
    volatile uint32_t WWDG_CR;  // [read-write] Control register
    volatile uint32_t WWDG_CFR; // [read-write] Configuration register
    volatile uint32_t WWDG_SR;  // [read-write] Status register

    static constexpr uint32_t WWDG_CR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t WWDG_CR_T =          // 7-bit counter (MSB to LSB) These bits contain the value of the watchdog counter. It is decremented every (4096 x 2WDGTB[1:0]) PCLK cycles. A reset is produced when it is decremented from 0x40 to 0x3F (T6 becomes cleared).
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t WWDG_CR_WDGA = 0x80; // Activation bit This bit is set by software and only cleared by hardware after a reset. When WDGA=1, the watchdog can generate a reset.

    static constexpr uint32_t WWDG_CFR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t WWDG_CFR_W =          // 7-bit window value These bits contain the window value to be compared to the downcounter.
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WWDG_CFR_WDGTB =      // Timer base The time base of the prescaler can be modified as follows:
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t WWDG_CFR_EWI = 0x200; // Early wakeup interrupt When set, an interrupt occurs whenever the counter reaches the value 0x40. This interrupt is only cleared by hardware after a reset.

    static constexpr uint32_t WWDG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t WWDG_SR_EWIF = 0x1; // Early wakeup interrupt flag This bit is set by hardware when the counter has reached the value 0x40. It must be cleared by software by writing 0. A write of 1 has no effect. This bit is also set if the interrupt is not enabled.
};


template<>
struct peripheral_t<STM32H742x, WWDG>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, WWDG>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, WWDG>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, WWDG1>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, WWDG2>
{
    typedef stm32h742x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, WWDG>
{
    typedef stm32h750x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, WWDG>
{
    typedef stm32h750x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, WWDG>
{
    typedef stm32h750x_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, WWDG>
{
    typedef stm32h750x_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;
using wwdg1_t = peripheral_t<mcu_svd, WWDG1>;
using wwdg2_t = peripheral_t<mcu_svd, WWDG2>;

template<int INST> struct wwdg_traits {};

template<> struct wwdg_traits<1>
{
    using wwdg = wwdg1_t;
};

template<> struct wwdg_traits<2>
{
    using wwdg = wwdg2_t;
};

