#pragma once

////
//
//      STM32MP1 QUADSPI1 peripherals
//
////

////
//
//      QUADSPI1
//
////

struct stm32mp15xxx_quadspi_t
{
    volatile uint32_t QUADSPI_CR;     // [read-write] QUADSPI control register
    volatile uint32_t QUADSPI_DCR;    // [read-write] QUADSPI device configuration register
    volatile uint32_t QUADSPI_SR;     // [read-only] QUADSPI status register
    volatile uint32_t QUADSPI_FCR;    // [write-only] QUADSPI flag clear register
    volatile uint32_t QUADSPI_DLR;    // [read-write] QUADSPI data length register
    volatile uint32_t QUADSPI_CCR;    // [read-write] QUADSPI communication configuration register
    volatile uint32_t QUADSPI_AR;     // [read-write] QUADSPI address register
    volatile uint32_t QUADSPI_ABR;    // [read-write] QUADSPI alternate bytes registers
    volatile uint32_t QUADSPI_DR;     // [read-write] QUADSPI data register
    volatile uint32_t QUADSPI_PSMKR;  // [read-write] QUADSPI polling status mask register
    volatile uint32_t QUADSPI_PSMAR;  // [read-write] QUADSPI polling status match register
    volatile uint32_t QUADSPI_PIR;    // [read-write] QUADSPI polling interval register
    volatile uint32_t QUADSPI_LPTR;   // [read-write] QUADSPI low-power timeout register
    reserved_t<0xef> _0x3f0;
    volatile uint32_t QUADSPI_HWCFGR; // [read-only] QUADSPI HW configuration register
    volatile uint32_t QUADSPI_VERR;   // [read-only] QUADSPI version register
    volatile uint32_t QUADSPI_IPIDR;  // [read-only] QUADSPI identification register
    volatile uint32_t QUADSPI_SIDR;   // [read-only] QUADSPI size identification register

    static constexpr uint32_t QUADSPI_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_CR_EN = 0x1;        // EN
    static constexpr uint32_t QUADSPI_CR_ABORT = 0x2;     // ABORT
    static constexpr uint32_t QUADSPI_CR_DMAEN = 0x4;     // DMAEN
    static constexpr uint32_t QUADSPI_CR_TCEN = 0x8;      // TCEN
    static constexpr uint32_t QUADSPI_CR_SSHIFT = 0x10;   // SSHIFT
    static constexpr uint32_t QUADSPI_CR_DFM = 0x40;      // DFM
    static constexpr uint32_t QUADSPI_CR_FSEL = 0x80;     // FSEL
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CR_FTHRES =         // FTHRES
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t QUADSPI_CR_TEIE = 0x10000;  // TEIE
    static constexpr uint32_t QUADSPI_CR_TCIE = 0x20000;  // TCIE
    static constexpr uint32_t QUADSPI_CR_FTIE = 0x40000;  // FTIE
    static constexpr uint32_t QUADSPI_CR_SMIE = 0x80000;  // SMIE
    static constexpr uint32_t QUADSPI_CR_TOIE = 0x100000; // TOIE
    static constexpr uint32_t QUADSPI_CR_APMS = 0x400000; // APMS
    static constexpr uint32_t QUADSPI_CR_PMM = 0x800000;  // PMM
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CR_PRESCALER =      // PRESCALER
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t QUADSPI_DCR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_DCR_CKMODE = 0x1; // CKMODE
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_DCR_CSHT =        // CSHT
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_DCR_FSIZE =       // FSIZE
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t QUADSPI_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_SR_TEF = 0x1;   // TEF
    static constexpr uint32_t QUADSPI_SR_TCF = 0x2;   // TCF
    static constexpr uint32_t QUADSPI_SR_FTF = 0x4;   // FTF
    static constexpr uint32_t QUADSPI_SR_SMF = 0x8;   // SMF
    static constexpr uint32_t QUADSPI_SR_TOF = 0x10;  // TOF
    static constexpr uint32_t QUADSPI_SR_BUSY = 0x20; // BUSY
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_SR_FLEVEL =     // FLEVEL
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t QUADSPI_FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_FCR_CTEF = 0x1;  // CTEF
    static constexpr uint32_t QUADSPI_FCR_CTCF = 0x2;  // CTCF
    static constexpr uint32_t QUADSPI_FCR_CSMF = 0x8;  // CSMF
    static constexpr uint32_t QUADSPI_FCR_CTOF = 0x10; // CTOF

    static constexpr uint32_t QUADSPI_DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_INSTRUCTION =      // INSTRUCTION
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_IMODE =            // IMODE
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ADMODE =           // ADMODE
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ADSIZE =           // ADSIZE
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ABMODE =           // ABMODE
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ABSIZE =           // ABSIZE
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_DCYC =             // DCYC
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_DMODE =            // DMODE
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_FMODE =            // FMODE
        bit_field_t<26, 0x3>::value<X>();
    static constexpr uint32_t QUADSPI_CCR_SIOO = 0x10000000; // SIOO
    static constexpr uint32_t QUADSPI_CCR_FRCM = 0x20000000; // FRCM
    static constexpr uint32_t QUADSPI_CCR_DHHC = 0x40000000; // DHHC
    static constexpr uint32_t QUADSPI_CCR_DDRM = 0x80000000; // DDRM

    static constexpr uint32_t QUADSPI_AR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_ABR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_DR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PSMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_PIR_INTERVAL =   // INTERVAL
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t QUADSPI_LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_LPTR_TIMEOUT =   // TIMEOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t QUADSPI_HWCFGR_RESET_VALUE = 0xb058;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_HWCFGR_FIFOSIZE =   // FIFOSIZE
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_HWCFGR_FIFOPTR =    // FIFOPTR
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_HWCFGR_PRESCVAL =   // PRESCVAL
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_HWCFGR_IDLENGTH =   // IDLENGTH
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t QUADSPI_VERR_RESET_VALUE = 0x41;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t QUADSPI_IPIDR_RESET_VALUE = 0x140031;

    static constexpr uint32_t QUADSPI_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, QUADSPI>
{
    typedef stm32mp15xxx_quadspi_t T;
    static T& V;
};

using quadspi_t = peripheral_t<mcu_svd, QUADSPI>;

