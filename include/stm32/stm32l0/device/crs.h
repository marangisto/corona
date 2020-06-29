#pragma once

////
//
//      STM32L0 CRS peripherals
//
///

// CRS: Clock recovery system

struct stm32l0x2_crs_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t ICR; // interrupt flag clear register

    static constexpr uint32_t CR_RESET_VALUE = 0x2000; // Reset value
    typedef bit_field_t<8, 0x3f> CR_TRIM; // HSI48 oscillator smooth trimming
    static constexpr uint32_t CR_SWSYNC = 0x80; // Generate software SYNC event
    static constexpr uint32_t CR_AUTOTRIMEN = 0x40; // Automatic trimming enable
    static constexpr uint32_t CR_CEN = 0x20; // Frequency error counter enable
    static constexpr uint32_t CR_ESYNCIE = 0x8; // Expected SYNC interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x4; // Synchronization or trimming error interrupt enable
    static constexpr uint32_t CR_SYNCWARNIE = 0x2; // SYNC warning interrupt enable
    static constexpr uint32_t CR_SYNCOKIE = 0x1; // SYNC event OK interrupt enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x2022bb7f; // Reset value
    static constexpr uint32_t CFGR_SYNCPOL = 0x80000000; // SYNC polarity selection
    typedef bit_field_t<28, 0x3> CFGR_SYNCSRC; // SYNC signal source selection
    typedef bit_field_t<24, 0x7> CFGR_SYNCDIV; // SYNC divider
    typedef bit_field_t<16, 0xff> CFGR_FELIM; // Frequency error limit
    typedef bit_field_t<0, 0xffff> CFGR_RELOAD; // Counter reload value

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ISR_FECAP; // Frequency error capture
    static constexpr uint32_t ISR_FEDIR = 0x8000; // Frequency error direction
    static constexpr uint32_t ISR_TRIMOVF = 0x400; // Trimming overflow or underflow
    static constexpr uint32_t ISR_SYNCMISS = 0x200; // SYNC missed
    static constexpr uint32_t ISR_SYNCERR = 0x100; // SYNC error
    static constexpr uint32_t ISR_ESYNCF = 0x8; // Expected SYNC flag
    static constexpr uint32_t ISR_ERRF = 0x4; // Error flag
    static constexpr uint32_t ISR_SYNCWARNF = 0x2; // SYNC warning flag
    static constexpr uint32_t ISR_SYNCOKF = 0x1; // SYNC event OK flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ESYNCC = 0x8; // Expected SYNC clear flag
    static constexpr uint32_t ICR_ERRC = 0x4; // Error clear flag
    static constexpr uint32_t ICR_SYNCWARNC = 0x2; // SYNC warning clear flag
    static constexpr uint32_t ICR_SYNCOKC = 0x1; // SYNC event OK clear flag
};

template<>
struct peripheral_t<STM32L0x2, CRS>
{
    using T = stm32l0x2_crs_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, CRS>
{
    using T = stm32l0x2_crs_t;
    static T& V;
};

using crs_t = peripheral_t<svd, CRS>;

template<int INST> struct crs_traits {};

template<> struct crs_traits<0>
{
    using crs = crs_t;
    static constexpr signal_t SYNC = CRS_SYNC;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_CRSEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_CRSEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_CRSSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_CRSSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_CRSRST;
    }
};
