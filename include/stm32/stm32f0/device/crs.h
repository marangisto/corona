#pragma once

////
//
//      STM32F0 CRS peripherals
//
////

////
//
//      Clock recovery system
//
////

struct stm32f0x1_crs_t
{
    volatile uint32_t CR;   // [read-write] control register
    volatile uint32_t CFGR; // [read-write] configuration register
    volatile uint32_t ISR;  // [read-only] interrupt and status register
    volatile uint32_t ICR;  // [read-write] interrupt flag clear register

    static constexpr uint32_t CR_RESET_VALUE = 0x2000;
    template<uint32_t X>
    static constexpr uint32_t CR_TRIM =             // HSI48 oscillator smooth trimming
        bit_field_t<8, 0x3f>::value<X>();
    static constexpr uint32_t CR_SWSYNC = 0x80;     // Generate software SYNC event
    static constexpr uint32_t CR_AUTOTRIMEN = 0x40; // Automatic trimming enable
    static constexpr uint32_t CR_CEN = 0x20;        // Frequency error counter enable
    static constexpr uint32_t CR_ESYNCIE = 0x8;     // Expected SYNC interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x4;       // Synchronization or trimming error interrupt enable
    static constexpr uint32_t CR_SYNCWARNIE = 0x2;  // SYNC warning interrupt enable
    static constexpr uint32_t CR_SYNCOKIE = 0x1;    // SYNC event OK interrupt enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x2022bb7f;
    static constexpr uint32_t CFGR_SYNCPOL = 0x80000000; // SYNC polarity selection
    template<uint32_t X>
    static constexpr uint32_t CFGR_SYNCSRC =             // SYNC signal source selection
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SYNCDIV =             // SYNC divider
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_FELIM =               // Frequency error limit
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_RELOAD =              // Counter reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ISR_FECAP =           // Frequency error capture
        bit_field_t<16, 0xffff>::value<X>();
    static constexpr uint32_t ISR_FEDIR = 0x8000;   // Frequency error direction
    static constexpr uint32_t ISR_TRIMOVF = 0x400;  // Trimming overflow or underflow
    static constexpr uint32_t ISR_SYNCMISS = 0x200; // SYNC missed
    static constexpr uint32_t ISR_SYNCERR = 0x100;  // SYNC error
    static constexpr uint32_t ISR_ESYNCF = 0x8;     // Expected SYNC flag
    static constexpr uint32_t ISR_ERRF = 0x4;       // Error flag
    static constexpr uint32_t ISR_SYNCWARNF = 0x2;  // SYNC warning flag
    static constexpr uint32_t ISR_SYNCOKF = 0x1;    // SYNC event OK flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_ESYNCC = 0x8;    // Expected SYNC clear flag
    static constexpr uint32_t ICR_ERRC = 0x4;      // Error clear flag
    static constexpr uint32_t ICR_SYNCWARNC = 0x2; // SYNC warning clear flag
    static constexpr uint32_t ICR_SYNCOKC = 0x1;   // SYNC event OK clear flag
};


template<>
struct peripheral_t<STM32F0x1, CRS>
{
    typedef stm32f0x1_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, CRS>
{
    typedef stm32f0x1_crs_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, CRS>
{
    typedef stm32f0x1_crs_t T;
    static T& V;
};

using crs_t = peripheral_t<mcu_svd, CRS>;

