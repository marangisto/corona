#pragma once

////
//
//      STM32MP1 GICV peripherals
//
////

////
//
//      GICV
//
////

struct stm32mp15xxx_gicv_t
{
    volatile uint32_t GICV_CTLR;   // [read-write] GICV virtual machine control register
    volatile uint32_t GICV_PMR;    // [read-write] GICV VM priority mask register
    volatile uint32_t GICV_BPR;    // [read-write] GICV VM binary point register
    volatile uint32_t GICV_IAR;    // [read-only] GICV VM interrupt acknowledge register
    volatile uint32_t GICV_EOIR;   // [write-only] GICV VM end of interrupt register
    volatile uint32_t GICV_RPR;    // [read-only] GICV VM running priority register
    volatile uint32_t GICV_HPPIR;  // [read-only] GICV VM highest priority pending interrupt register
    volatile uint32_t GICV_ABPR;   // [read-write] GICV VM aliased binary point register
    volatile uint32_t GICV_AIAR;   // [read-only] GICV VM aliased interrupt register
    volatile uint32_t GICV_AEOIR;  // [write-only] GICV VM aliased end of interrupt register
    volatile uint32_t GICV_AHPPIR; // [read-only] GICV VM aliased highest priority pending interrupt register
    reserved_t<0x29> _0xd0;
    volatile uint32_t GICV_APR0;   // [read-write] The GICV_APR0 is an alias of GICH_APR.
    reserved_t<0xa> _0xfc;
    volatile uint32_t GICV_IIDR;   // [read-only] The GICV_IIDR is an alias of GICC_IIDR.
    reserved_t<0x3c0> _0x1000;
    volatile uint32_t GICV_DIR;    // [write-only] GICV VM deactivate interrupt register

    static constexpr uint32_t GICV_CTLR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICV_CTLR_ENABLEGRP0 = 0x1; // ENABLEGRP0
    static constexpr uint32_t GICV_CTLR_ENABLEGRP1 = 0x2; // ENABLEGRP1
    static constexpr uint32_t GICV_CTLR_ACKCTL = 0x4;     // ACKCTL
    static constexpr uint32_t GICV_CTLR_FIQEN = 0x8;      // FIQEN
    static constexpr uint32_t GICV_CTLR_CBPR = 0x10;      // CBPR
    static constexpr uint32_t GICV_CTLR_EOIMODE = 0x200;  // EOIMODE

    static constexpr uint32_t GICV_PMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICV_PMR_PRIORITY =   // PRIORITY
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t GICV_BPR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t GICV_BPR_BINARY_POINT =   // BINARY_POINT
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t GICV_IAR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICV_IAR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_IAR_CPUID = 0x400;   // CPUID

    static constexpr uint32_t GICV_EOIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICV_EOIR_EOIINTID =     // EOIINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_EOIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICV_RPR_RESET_VALUE = 0xff;
    template<uint32_t X>
    static constexpr uint32_t GICV_RPR_PRIORITY =   // PRIORITY
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t GICV_HPPIR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICV_HPPIR_PENDINTID =    // PENDINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_HPPIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICV_ABPR_RESET_VALUE = 0x3;
    template<uint32_t X>
    static constexpr uint32_t GICV_ABPR_BINARY_POINT =   // BINARY_POINT
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t GICV_AIAR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICV_AIAR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_AIAR_CPUID = 0x400;   // CPUID

    static constexpr uint32_t GICV_AEOIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICV_AEOIR_EOIINTID =     // EOIINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_AEOIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICV_AHPPIR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICV_AHPPIR_PENDINTID =    // PENDINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_AHPPIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICV_APR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICV_IIDR_RESET_VALUE = 0x102143b;

    static constexpr uint32_t GICV_DIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICV_DIR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICV_DIR_CPUID = 0x400;   // CPUID
};


template<>
struct peripheral_t<STM32MP15xxx, GICV>
{
    typedef stm32mp15xxx_gicv_t T;
    static T& V;
};

using gicv_t = peripheral_t<mcu_svd, GICV>;

