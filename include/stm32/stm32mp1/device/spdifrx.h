#pragma once

////
//
//      STM32MP1 SPDIFRX peripherals
//
////

////
//
//      SPDIFRX
//
////

struct stm32mp15xxx_spdifrx_t
{
    volatile uint32_t SPDIFRX_CR;      // [read-write] Control register
    volatile uint32_t SPDIFRX_IMR;     // [read-write] Interrupt mask register
    volatile uint32_t SPDIFRX_SR;      // [read-only] Status register
    volatile uint32_t SPDIFRX_IFCR;    // [read-write] Interrupt flag clear register
    volatile uint32_t SPDIFRX_FMT0_DR; // [read-only] This register can take 3 different formats according to DRFMT. Here is the format when DRFMT = 00:
    volatile uint32_t SPDIFRX_CSR;     // [read-only] Channel status register
    volatile uint32_t SPDIFRX_DIR;     // [read-only] Debug information register
    reserved_t<0xf6> _0x3f4;
    volatile uint32_t SPDIFRX_VERR;    // [read-only] SPDIFRX version register
    volatile uint32_t SPDIFRX_IPIDR;   // [read-only] SPDIFRX identification register
    volatile uint32_t SPDIFRX_SIDR;    // [read-only] SPDIFRX size identification register

    static constexpr uint32_t SPDIFRX_CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CR_SPDIFRXEN =          // SPDIFRXEN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t SPDIFRX_CR_RXDMAEN = 0x4;       // RXDMAEN
    static constexpr uint32_t SPDIFRX_CR_RXSTEO = 0x8;        // RXSTEO
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CR_DRFMT =              // DRFMT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SPDIFRX_CR_PMSK = 0x40;         // PMSK
    static constexpr uint32_t SPDIFRX_CR_VMSK = 0x80;         // VMSK
    static constexpr uint32_t SPDIFRX_CR_CUMSK = 0x100;       // CUMSK
    static constexpr uint32_t SPDIFRX_CR_PTMSK = 0x200;       // PTMSK
    static constexpr uint32_t SPDIFRX_CR_CBDMAEN = 0x400;     // CBDMAEN
    static constexpr uint32_t SPDIFRX_CR_CHSEL = 0x800;       // CHSEL
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CR_NBTR =               // NBTR
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t SPDIFRX_CR_WFA = 0x4000;        // WFA
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CR_INSEL =              // INSEL
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t SPDIFRX_CR_CKSEN = 0x100000;    // CKSEN
    static constexpr uint32_t SPDIFRX_CR_CKSBKPEN = 0x200000; // CKSBKPEN

    static constexpr uint32_t SPDIFRX_IMR_RESET_VALUE = 0x0;
    static constexpr uint32_t SPDIFRX_IMR_RXNEIE = 0x1;   // RXNEIE
    static constexpr uint32_t SPDIFRX_IMR_CSRNEIE = 0x2;  // CSRNEIE
    static constexpr uint32_t SPDIFRX_IMR_PERRIE = 0x4;   // PERRIE
    static constexpr uint32_t SPDIFRX_IMR_OVRIE = 0x8;    // OVRIE
    static constexpr uint32_t SPDIFRX_IMR_SBLKIE = 0x10;  // SBLKIE
    static constexpr uint32_t SPDIFRX_IMR_SYNCDIE = 0x20; // SYNCDIE
    static constexpr uint32_t SPDIFRX_IMR_IFEIE = 0x40;   // IFEIE

    static constexpr uint32_t SPDIFRX_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SPDIFRX_SR_RXNE = 0x1;   // RXNE
    static constexpr uint32_t SPDIFRX_SR_CSRNE = 0x2;  // CSRNE
    static constexpr uint32_t SPDIFRX_SR_PERR = 0x4;   // PERR
    static constexpr uint32_t SPDIFRX_SR_OVR = 0x8;    // OVR
    static constexpr uint32_t SPDIFRX_SR_SBD = 0x10;   // SBD
    static constexpr uint32_t SPDIFRX_SR_SYNCD = 0x20; // SYNCD
    static constexpr uint32_t SPDIFRX_SR_FERR = 0x40;  // FERR
    static constexpr uint32_t SPDIFRX_SR_SERR = 0x80;  // SERR
    static constexpr uint32_t SPDIFRX_SR_TERR = 0x100; // TERR
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_SR_WIDTH5 =      // WIDTH5
        bit_field_t<16, 0x7fff>::value<X>();

    static constexpr uint32_t SPDIFRX_IFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SPDIFRX_IFCR_PERRCF = 0x4;   // PERRCF
    static constexpr uint32_t SPDIFRX_IFCR_OVRCF = 0x8;    // OVRCF
    static constexpr uint32_t SPDIFRX_IFCR_SBDCF = 0x10;   // SBDCF
    static constexpr uint32_t SPDIFRX_IFCR_SYNCDCF = 0x20; // SYNCDCF

    static constexpr uint32_t SPDIFRX_FMT0_DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_FMT0_DR_DR =            // DR
        bit_field_t<0, 0xffffff>::value<X>();
    static constexpr uint32_t SPDIFRX_FMT0_DR_PE = 0x1000000; // PE
    static constexpr uint32_t SPDIFRX_FMT0_DR_V = 0x2000000;  // V
    static constexpr uint32_t SPDIFRX_FMT0_DR_U = 0x4000000;  // U
    static constexpr uint32_t SPDIFRX_FMT0_DR_C = 0x8000000;  // C
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_FMT0_DR_PT =            // PT
        bit_field_t<28, 0x3>::value<X>();

    static constexpr uint32_t SPDIFRX_CSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CSR_USR =            // USR
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_CSR_CS =             // CS
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t SPDIFRX_CSR_SOB = 0x1000000; // SOB

    static constexpr uint32_t SPDIFRX_DIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_DIR_THI =   // THI
        bit_field_t<0, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_DIR_TLO =   // TLO
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t SPDIFRX_VERR_RESET_VALUE = 0x12;
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SPDIFRX_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SPDIFRX_IPIDR_RESET_VALUE = 0x130041;

    static constexpr uint32_t SPDIFRX_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, SPDIFRX>
{
    typedef stm32mp15xxx_spdifrx_t T;
    static T& V;
};

using spdifrx_t = peripheral_t<mcu_svd, SPDIFRX>;

