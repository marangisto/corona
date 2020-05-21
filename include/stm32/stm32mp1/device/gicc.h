#pragma once

////
//
//      STM32MP1 GICC peripherals
//
////

////
//
//      GICC
//
////

struct stm32mp15xxx_gicc_t
{
    volatile uint32_t GICC_CTLR;   // [read-write] GICC control register
    volatile uint32_t GICC_PMR;    // [read-write] GICC input priority mask register
    volatile uint32_t GICC_BPR;    // [read-write] GICC binary point register
    volatile uint32_t GICC_IAR;    // [read-only] GICC interrupt acknowledge register
    volatile uint32_t GICC_EOIR;   // [write-only] GICC end of interrupt register
    volatile uint32_t GICC_RPR;    // [read-only] GICC running priority register
    volatile uint32_t GICC_HPPIR;  // [read-only] GICC highest priority pending interrupt register
    volatile uint32_t GICC_ABPR;   // [read-write] GICC_ABPR is an alias of the non-secure GICC_BPR. When GICC_CTLR.CBPR is set to 0, a secure access to this register is equivalent to a non-secure access to GICC_BPR.
    volatile uint32_t GICC_AIAR;   // [read-only] GICC_AIAR is an alias of the non-secure view of GICC_IAR. A secure access to this register is identical to a non-secure access to GICC_IAR.
    volatile uint32_t GICC_AEOIR;  // [write-only] GICC_AEOIR is an alias of the Non-secure GICC_EOIR. A secure access to this register is similar to a non-secure access to GICC_EOIR, except that the GICC_CTLR.EOImodeS bit is used.
    volatile uint32_t GICC_AHPPIR; // [read-only] ICC_AHPPIR is an alias of the non-secure GICC_HPPIR. A secure access to this register is equivalent to a non-secure access to GICC_HPPIR.
    reserved_t<0x29> _0xd0;
    volatile uint32_t GICC_APR0;   // [read-write] GICC active priority register
    reserved_t<0x3> _0xe0;
    volatile uint32_t GICC_NSAPR0; // [read-write] GICC non-secure active priority register
    reserved_t<0x6> _0xfc;
    volatile uint32_t GICC_IIDR;   // [read-only] GICC interface identification register
    reserved_t<0x3c0> _0x1000;
    volatile uint32_t GICC_DIR;    // [write-only] GICC deactivate interrupt register

    static constexpr uint32_t GICC_CTLR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICC_CTLR_ENABLEGRP0 = 0x1;      // ENABLEGRP0
    static constexpr uint32_t GICC_CTLR_ENABLEGRP1 = 0x2;      // ENABLEGRP1
    static constexpr uint32_t GICC_CTLR_ACKCTL = 0x4;          // ACKCTL
    static constexpr uint32_t GICC_CTLR_FIQEN = 0x8;           // FIQEN
    static constexpr uint32_t GICC_CTLR_CBPR = 0x10;           // CBPR
    static constexpr uint32_t GICC_CTLR_FIQBYPDISGRP0 = 0x20;  // FIQBYPDISGRP0
    static constexpr uint32_t GICC_CTLR_IRQBYPDISGRP0 = 0x40;  // IRQBYPDISGRP0
    static constexpr uint32_t GICC_CTLR_FIQBYPDISGRP1 = 0x80;  // FIQBYPDISGRP1
    static constexpr uint32_t GICC_CTLR_IRQBYPDISGRP1 = 0x100; // IRQBYPDISGRP1
    static constexpr uint32_t GICC_CTLR_EOIMODES = 0x200;      // EOIMODES
    static constexpr uint32_t GICC_CTLR_EOIMODENS = 0x400;     // EOIMODENS

    static constexpr uint32_t GICC_PMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICC_PMR_PRIORITY =   // PRIORITY
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t GICC_BPR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t GICC_BPR_BINARY_POINT =   // BINARY_POINT
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t GICC_IAR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICC_IAR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_IAR_CPUID = 0x400;   // CPUID

    static constexpr uint32_t GICC_EOIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICC_EOIR_EOIINTID =     // EOIINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_EOIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICC_RPR_RESET_VALUE = 0xff;
    template<uint32_t X>
    static constexpr uint32_t GICC_RPR_PRIORITY =   // PRIORITY
        bit_field_t<3, 0x1f>::value<X>();

    static constexpr uint32_t GICC_HPPIR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICC_HPPIR_PENDINTID =    // PENDINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_HPPIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICC_ABPR_RESET_VALUE = 0x3;
    template<uint32_t X>
    static constexpr uint32_t GICC_ABPR_BINARY_POINT =   // BINARY_POINT
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t GICC_AIAR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICC_AIAR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_AIAR_CPUID = 0x400;   // CPUID

    static constexpr uint32_t GICC_AEOIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICC_AEOIR_EOIINTID =     // EOIINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_AEOIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICC_AHPPIR_RESET_VALUE = 0x3ff;
    template<uint32_t X>
    static constexpr uint32_t GICC_AHPPIR_PENDINTID =    // PENDINTID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_AHPPIR_CPUID = 0x400; // CPUID

    static constexpr uint32_t GICC_APR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICC_NSAPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICC_IIDR_RESET_VALUE = 0x102143b;
    template<uint32_t X>
    static constexpr uint32_t GICC_IIDR_IMPLEMENTER =   // IMPLEMENTER
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICC_IIDR_REVISION =      // REVISION
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICC_IIDR_ARCH =          // ARCH
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICC_IIDR_PRODUCTID =     // PRODUCTID
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t GICC_DIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICC_DIR_INTERRUPT_ID =   // INTERRUPT_ID
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t GICC_DIR_CPUID = 0x400;   // CPUID
};


template<>
struct peripheral_t<STM32MP15xxx, GICC>
{
    typedef stm32mp15xxx_gicc_t T;
    static T& V;
};

using gicc_t = peripheral_t<mcu_svd, GICC>;

