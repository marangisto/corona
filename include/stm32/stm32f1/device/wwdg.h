#pragma once

////
//
//      STM32F1 WWDG peripherals
//
////

////
//
//      Window watchdog
//
////

struct stm32f100_wwdg_t
{
    volatile uint32_t CR;  // [read-write] Control register (WWDG_CR)
    volatile uint32_t CFR; // [read-write] Configuration register (WWDG_CFR)
    volatile uint32_t SR;  // [read-write] Status register (WWDG_SR)

    static constexpr uint32_t CR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t CR_T =          // 7-bit counter (MSB to LSB)
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t CFR_W =          // 7-bit window value
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFR_WDGTB =      // Timer Base
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t CFR_EWI = 0x200; // Early Wakeup Interrupt

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EWI = 0x1; // Early Wakeup Interrupt
};


template<>
struct peripheral_t<STM32F100, WWDG>
{
    typedef stm32f100_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, WWDG>
{
    typedef stm32f100_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, WWDG>
{
    typedef stm32f100_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, WWDG>
{
    typedef stm32f100_wwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, WWDG>
{
    typedef stm32f100_wwdg_t T;
    static T& V;
};

using wwdg_t = peripheral_t<mcu_svd, WWDG>;

