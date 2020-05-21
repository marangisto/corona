#pragma once

////
//
//      STM32F7 WWDG peripherals
//
////

////
//
//      Window watchdog
//
////

struct stm32f722_wwdg_t
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
struct peripheral_t<STM32F722, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, WWDG>
{
    typedef stm32f722_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;

