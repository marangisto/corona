#pragma once

////
//
//      STM32H7 ART peripherals
//
////

////
//
//      accelerator - control register (ART_CTR)
//
////

struct stm32h745_cm4_art_t
{
    volatile uint32_t CTR; // [read-write] control register

    static constexpr uint32_t CTR_RESET_VALUE = 0x4;
    static constexpr uint32_t CTR_EN = 0x1;      // Cache enable
    template<uint32_t X>
    static constexpr uint32_t CTR_PCACHEADDR =   // Cacheable page index
        bit_field_t<8, 0xfff>::value<X>();
};


template<>
struct peripheral_t<STM32H745_CM4, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ART>
{
    typedef stm32h745_cm4_art_t T;
    static T& V;
};

using art_t = peripheral_t<mcu_svd, ART>;

