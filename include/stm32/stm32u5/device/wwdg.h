#pragma once

////
//
//      STM32U5 WWDG peripherals
//
///

// WWDG: System window watchdog

struct stm32u5xx_wwdg_t
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

template<>
struct peripheral_t<STM32U5xx, SEC_WWDG>
{
    static constexpr periph_t P = SEC_WWDG;
    using T = stm32u5xx_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32u5xx_wwdg_t;
    static T& V;
};

using sec_wwdg_t = peripheral_t<svd, SEC_WWDG>;
using wwdg_t = peripheral_t<svd, WWDG>;
