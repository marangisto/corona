#pragma once

////
//
//      STM32H7 ART peripherals
//
///

// ART: accelerator - control register (ART_CTR)

struct stm32h745_cm4_art_t
{
    volatile uint32_t CTR; // control register

    static constexpr uint32_t CTR_RESET_VALUE = 0x4; // Reset value
    static constexpr uint32_t CTR_EN = 0x1; // Cache enable
    typedef bit_field_t<8, 0xfff> CTR_PCACHEADDR; // Cacheable page index
};

template<>
struct peripheral_t<STM32H745_CM4, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ART>
{
    static constexpr periph_t P = ART;
    using T = stm32h745_cm4_art_t;
    static T& V;
};

using art_t = peripheral_t<svd, ART>;
