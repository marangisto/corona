#pragma once

////
//
//      STM32F4 WWDG peripherals
//
////

////
//
//      Window watchdog
//
////

struct stm32f401_wwdg_t
{
    volatile uint32_t CR;  // [read-write] Control register
    volatile uint32_t CFR; // [read-write] Configuration register
    volatile uint32_t SR;  // [read-write] Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f;
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    template<uint32_t X>
    static constexpr uint32_t CR_T =          // 7-bit counter (MSB to LSB)
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f;
    static constexpr uint32_t CFR_EWI = 0x200;    // Early wakeup interrupt
    static constexpr uint32_t CFR_WDGTB1 = 0x100; // Timer base
    static constexpr uint32_t CFR_WDGTB0 = 0x80;  // Timer base
    template<uint32_t X>
    static constexpr uint32_t CFR_W =             // 7-bit window value
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};


template<>
struct peripheral_t<STM32F401, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, WWDG>
{
    typedef stm32f401_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;

