#pragma once

////
//
//      STM32MP1 GICH peripherals
//
////

////
//
//      GICH
//
////

struct stm32mp15xxx_gich_t
{
    volatile uint32_t GICH_HCR;   // [read-write] GICH hypervisor control register
    volatile uint32_t GICH_VTR;   // [read-only] GICH VGIC type register
    volatile uint32_t GICH_VMCR;  // [read-write] GICH virtual machine control register
    reserved_t<0x1> _0x10;
    volatile uint32_t GICH_MISR;  // [read-only] GICH maintenance interrupt status register
    reserved_t<0x3> _0x20;
    volatile uint32_t GICH_EISR0; // [read-only] GICH end of interrupt status register
    reserved_t<0x3> _0x30;
    volatile uint32_t GICH_ELSR0; // [read-only] GICH empty list status register
    reserved_t<0x2f> _0xf0;
    volatile uint32_t GICH_APR0;  // [read-write] GICH active priority register
    reserved_t<0x3> _0x100;
    volatile uint32_t GICH_LR0;   // [read-write] GICH list register 0
    volatile uint32_t GICH_LR1;   // [read-write] GICH list register 1
    volatile uint32_t GICH_LR2;   // [read-write] GICH list register 2
    volatile uint32_t GICH_LR3;   // [read-write] GICH list register 3

    static constexpr uint32_t GICH_HCR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICH_HCR_EN = 0x1;        // EN
    static constexpr uint32_t GICH_HCR_UIE = 0x2;       // UIE
    static constexpr uint32_t GICH_HCR_LRENPIE = 0x4;   // LRENPIE
    static constexpr uint32_t GICH_HCR_NPIE = 0x8;      // NPIE
    static constexpr uint32_t GICH_HCR_VGRP0EIE = 0x10; // VGRP0EIE
    static constexpr uint32_t GICH_HCR_VGRP0DIE = 0x20; // VGRP0DIE
    static constexpr uint32_t GICH_HCR_VGRP1EIE = 0x40; // VGRP1EIE
    static constexpr uint32_t GICH_HCR_VGRP1DIE = 0x80; // VGRP1DIE
    template<uint32_t X>
    static constexpr uint32_t GICH_HCR_EOICOUNT =       // EOICOUNT
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICH_VTR_RESET_VALUE = 0x90000003;
    template<uint32_t X>
    static constexpr uint32_t GICH_VTR_LISTREGS =   // LISTREGS
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_VTR_PREBITS =    // PREBITS
        bit_field_t<26, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_VTR_PRIBITS =    // PRIBITS
        bit_field_t<29, 0x7>::value<X>();

    static constexpr uint32_t GICH_VMCR_RESET_VALUE = 0x4d0000;
    static constexpr uint32_t GICH_VMCR_VMGRP0EN = 0x1; // VMGRP0EN
    static constexpr uint32_t GICH_VMCR_VMGRP1EN = 0x2; // VMGRP1EN
    static constexpr uint32_t GICH_VMCR_VMACKCTL = 0x4; // VMACKCTL
    static constexpr uint32_t GICH_VMCR_VMFIQEN = 0x8;  // VMFIQEN
    static constexpr uint32_t GICH_VMCR_VMCBPR = 0x10;  // VMCBPR
    static constexpr uint32_t GICH_VMCR_VEM = 0x200;    // VEM
    template<uint32_t X>
    static constexpr uint32_t GICH_VMCR_VMABP =         // VMABP
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_VMCR_VMBP =          // VMBP
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_VMCR_VMPRIMASK =     // VMPRIMASK
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t GICH_MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t GICH_MISR_EOI = 0x1;     // EOI
    static constexpr uint32_t GICH_MISR_U = 0x2;       // U
    static constexpr uint32_t GICH_MISR_LRENP = 0x4;   // LRENP
    static constexpr uint32_t GICH_MISR_NP = 0x8;      // NP
    static constexpr uint32_t GICH_MISR_VGRP0E = 0x10; // VGRP0E
    static constexpr uint32_t GICH_MISR_VGRP0D = 0x20; // VGRP0D
    static constexpr uint32_t GICH_MISR_VGRP1E = 0x40; // VGRP1E
    static constexpr uint32_t GICH_MISR_VGRP1D = 0x80; // VGRP1D

    static constexpr uint32_t GICH_EISR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICH_ELSR0_RESET_VALUE = 0xf;

    static constexpr uint32_t GICH_APR0_RESET_VALUE = 0x0;

    static constexpr uint32_t GICH_LR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICH_LR0_VIRTUALID =        // VIRTUALID
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR0_PHYSICALID =       // PHYSICALID
        bit_field_t<10, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR0_PRIORITY =         // PRIORITY
        bit_field_t<23, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR0_STATE =            // STATE
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t GICH_LR0_GRP1 = 0x40000000; // GRP1
    static constexpr uint32_t GICH_LR0_HW = 0x80000000;   // HW

    static constexpr uint32_t GICH_LR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICH_LR1_VIRTUALID =        // VIRTUALID
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR1_PHYSICALID =       // PHYSICALID
        bit_field_t<10, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR1_PRIORITY =         // PRIORITY
        bit_field_t<23, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR1_STATE =            // STATE
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t GICH_LR1_GRP1 = 0x40000000; // GRP1
    static constexpr uint32_t GICH_LR1_HW = 0x80000000;   // HW

    static constexpr uint32_t GICH_LR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICH_LR2_VIRTUALID =        // VIRTUALID
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR2_PHYSICALID =       // PHYSICALID
        bit_field_t<10, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR2_PRIORITY =         // PRIORITY
        bit_field_t<23, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR2_STATE =            // STATE
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t GICH_LR2_GRP1 = 0x40000000; // GRP1
    static constexpr uint32_t GICH_LR2_HW = 0x80000000;   // HW

    static constexpr uint32_t GICH_LR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GICH_LR3_VIRTUALID =        // VIRTUALID
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR3_PHYSICALID =       // PHYSICALID
        bit_field_t<10, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR3_PRIORITY =         // PRIORITY
        bit_field_t<23, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t GICH_LR3_STATE =            // STATE
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t GICH_LR3_GRP1 = 0x40000000; // GRP1
    static constexpr uint32_t GICH_LR3_HW = 0x80000000;   // HW
};


template<>
struct peripheral_t<STM32MP15xxx, GICH>
{
    typedef stm32mp15xxx_gich_t T;
    static T& V;
};

using gich_t = peripheral_t<mcu_svd, GICH>;

