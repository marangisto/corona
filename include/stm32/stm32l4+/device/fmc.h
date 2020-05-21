#pragma once

////
//
//      STM32L4+ FMC peripherals
//
////

////
//
//      Flexible memory controller
//
////

struct stm32l4p5_fmc_t
{
    volatile uint32_t BCR1;  // [read-write] SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1;  // [read-write] SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2;  // [read-write] SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2;  // [read-write] SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3;  // [read-write] SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3;  // [read-write] SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4;  // [read-write] SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4;  // [read-write] SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x18> _0x80;
    volatile uint32_t PCR;   // [read-write] PC Card/NAND Flash control register 3
    volatile uint32_t SR;    // FIFO status and interrupt register 3
    volatile uint32_t PMEM;  // [read-write] Common memory space timing register 3
    volatile uint32_t PATT;  // [read-write] Attribute memory space timing register 3
    reserved_t<0x1> _0x94;
    volatile uint32_t ECCR;  // [read-only] ECC result register 3
    reserved_t<0x1b> _0x104;
    volatile uint32_t BWTR1; // [read-write] SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x10c;
    volatile uint32_t BWTR2; // [read-write] SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x114;
    volatile uint32_t BWTR3; // [read-write] SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x11c;
    volatile uint32_t BWTR4; // [read-write] SRAM/NOR-Flash write timing registers 4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_MBKEN = 0x1;        // MBKEN
    static constexpr uint32_t BCR1_MUXEN = 0x2;        // MUXEN
    template<uint32_t X>
    static constexpr uint32_t BCR1_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR1_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t BCR1_FACCEN = 0x40;      // FACCEN
    static constexpr uint32_t BCR1_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t BCR1_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t BCR1_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR1_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR1_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR1_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // CCLKEN
    static constexpr uint32_t BCR1_WFDIS = 0x200000;   // Write FIFO Disable

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t BTR1_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400;    // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40;      // FACCEN
    template<uint32_t X>
    static constexpr uint32_t BCR2_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR2_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR2_MUXEN = 0x2;        // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1;        // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t BTR2_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400;    // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40;      // FACCEN
    template<uint32_t X>
    static constexpr uint32_t BCR3_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR3_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR3_MUXEN = 0x2;        // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1;        // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t BTR3_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400;    // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40;      // FACCEN
    template<uint32_t X>
    static constexpr uint32_t BCR4_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR4_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR4_MUXEN = 0x2;        // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1;        // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t BTR4_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t PCR_RESET_VALUE = 0x18;
    template<uint32_t X>
    static constexpr uint32_t PCR_ECCPS =        // ECCPS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR_TAR =          // TAR
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR_TCLR =         // TCLR
        bit_field_t<9, 0xf>::value<X>();
    static constexpr uint32_t PCR_ECCEN = 0x40;  // ECCEN
    template<uint32_t X>
    static constexpr uint32_t PCR_PWID =         // PWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t PCR_PTYP = 0x8;    // PTYP
    static constexpr uint32_t PCR_PBKEN = 0x4;   // PBKEN
    static constexpr uint32_t PCR_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR_RESET_VALUE = 0x40;
    static constexpr uint32_t SR_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR_IFEN = 0x20;  // IFEN
    static constexpr uint32_t SR_ILEN = 0x10;  // ILEN
    static constexpr uint32_t SR_IREN = 0x8;   // IREN
    static constexpr uint32_t SR_IFS = 0x4;    // IFS
    static constexpr uint32_t SR_ILS = 0x2;    // ILS
    static constexpr uint32_t SR_IRS = 0x1;    // IRS

    static constexpr uint32_t PMEM_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PMEM_MEMHIZx =    // MEMHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM_MEMHOLDx =   // MEMHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM_MEMWAITx =   // MEMWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM_MEMSETx =    // MEMSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PATT_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PATT_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT_ATTSETx =    // ATTSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0;

    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ACCMOD =   // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_DATLAT =   // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_CLKDIV =   // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_DATAST =   // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDHLD =   // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDSET =   // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ACCMOD =   // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_DATLAT =   // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_CLKDIV =   // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_DATAST =   // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDHLD =   // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDSET =   // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ACCMOD =   // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_DATLAT =   // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_CLKDIV =   // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_DATAST =   // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDHLD =   // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDSET =   // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ACCMOD =   // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_DATLAT =   // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_CLKDIV =   // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_DATAST =   // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDHLD =   // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDSET =   // ADDSET
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32L4P5, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, FMC>
{
    typedef stm32l4p5_fmc_t T;
    static T& V;
};

using fmc_t = peripheral_t<mcu_svd, FMC>;

