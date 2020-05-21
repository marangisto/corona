#pragma once

////
//
//      STM32L4 WWDG peripherals
//
////

////
//
//      System window watchdog
//
////

struct stm32l412_wwdg_t
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
struct peripheral_t<STM32L412, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, WWDG>
{
    typedef stm32l412_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;

