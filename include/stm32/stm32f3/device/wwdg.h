#pragma once

////
//
//      STM32F3 WWDG peripherals
//
////

////
//
//      Window watchdog
//
////

struct stm32f301_wwdg_t
{
    volatile uint32_t CR;  // [read-write] Control register
    volatile uint32_t CFR; // [read-write] Configuration register
    volatile uint32_t SR;  // [read-write] Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f;
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    template<uint32_t X>
    static constexpr uint32_t CR_T =          // 7-bit counter
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f;
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt
    template<uint32_t X>
    static constexpr uint32_t CFR_WDGTB =      // Timer base
        bit_field_t<7, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFR_W =          // 7-bit window value
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};


template<>
struct peripheral_t<STM32F301, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, WWDG>
{
    typedef stm32f301_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;
