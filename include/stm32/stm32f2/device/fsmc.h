#pragma once

////
//
//      STM32F2 FSMC peripherals
//
////

////
//
//      Flexible static memory controller
//
////

struct stm32f215_fsmc_t
{
    volatile uint32_t BCR1;  // [read-write] SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1;  // [read-write] SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2;  // [read-write] SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2;  // [read-write] SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3;  // [read-write] SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3;  // [read-write] SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4;  // [read-write] SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4;  // [read-write] SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x10> _0x60;
    volatile uint32_t PCR2;  // [read-write] PC Card/NAND Flash control register 2
    volatile uint32_t SR2;   // FIFO status and interrupt register 2
    volatile uint32_t PMEM2; // [read-write] Common memory space timing register 2
    volatile uint32_t PATT2; // [read-write] Attribute memory space timing register 2
    reserved_t<0x1> _0x74;
    volatile uint32_t ECCR2; // [read-only] ECC result register 2
    reserved_t<0x2> _0x80;
    volatile uint32_t PCR3;  // [read-write] PC Card/NAND Flash control register 3
    volatile uint32_t SR3;   // FIFO status and interrupt register 3
    volatile uint32_t PMEM3; // [read-write] Common memory space timing register 3
    volatile uint32_t PATT3; // [read-write] Attribute memory space timing register 3
    reserved_t<0x1> _0x94;
    volatile uint32_t ECCR3; // [read-only] ECC result register 3
    reserved_t<0x2> _0xa0;
    volatile uint32_t PCR4;  // [read-write] PC Card/NAND Flash control register 4
    volatile uint32_t SR4;   // FIFO status and interrupt register 4
    volatile uint32_t PMEM4; // [read-write] Common memory space timing register 4
    volatile uint32_t PATT4; // [read-write] Attribute memory space timing register 4
    volatile uint32_t PIO4;  // [read-write] I/O space timing register 4
    reserved_t<0x14> _0x104;
    volatile uint32_t BWTR1; // [read-write] SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x10c;
    volatile uint32_t BWTR2; // [read-write] SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x114;
    volatile uint32_t BWTR3; // [read-write] SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x11c;
    volatile uint32_t BWTR4; // [read-write] SRAM/NOR-Flash write timing registers 4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR1_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40;      // FACCEN
    template<uint32_t X>
    static constexpr uint32_t BCR1_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR1_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR1_MUXEN = 0x2;        // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1;        // MBKEN

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

    static constexpr uint32_t PCR2_RESET_VALUE = 0x18;
    template<uint32_t X>
    static constexpr uint32_t PCR2_ECCPS =        // ECCPS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR2_TAR =          // TAR
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR2_TCLR =         // TCLR
        bit_field_t<9, 0xf>::value<X>();
    static constexpr uint32_t PCR2_ECCEN = 0x40;  // ECCEN
    template<uint32_t X>
    static constexpr uint32_t PCR2_PWID =         // PWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t PCR2_PTYP = 0x8;    // PTYP
    static constexpr uint32_t PCR2_PBKEN = 0x4;   // PBKEN
    static constexpr uint32_t PCR2_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR2_RESET_VALUE = 0x40;
    static constexpr uint32_t SR2_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR2_IFEN = 0x20;  // IFEN
    static constexpr uint32_t SR2_ILEN = 0x10;  // ILEN
    static constexpr uint32_t SR2_IREN = 0x8;   // IREN
    static constexpr uint32_t SR2_IFS = 0x4;    // IFS
    static constexpr uint32_t SR2_ILS = 0x2;    // ILS
    static constexpr uint32_t SR2_IRS = 0x1;    // IRS

    static constexpr uint32_t PMEM2_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PMEM2_MEMHIZx =    // MEMHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM2_MEMHOLDx =   // MEMHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM2_MEMWAITx =   // MEMWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM2_MEMSETx =    // MEMSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PATT2_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHIZx =    // Attribute memory x databus HiZ time
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHOLDx =   // Attribute memory x hold time
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTWAITx =   // Attribute memory x wait time
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTSETx =    // Attribute memory x setup time
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ECCR2_RESET_VALUE = 0x0;

    static constexpr uint32_t PCR3_RESET_VALUE = 0x18;
    template<uint32_t X>
    static constexpr uint32_t PCR3_ECCPS =        // ECCPS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR3_TAR =          // TAR
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR3_TCLR =         // TCLR
        bit_field_t<9, 0xf>::value<X>();
    static constexpr uint32_t PCR3_ECCEN = 0x40;  // ECCEN
    template<uint32_t X>
    static constexpr uint32_t PCR3_PWID =         // PWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t PCR3_PTYP = 0x8;    // PTYP
    static constexpr uint32_t PCR3_PBKEN = 0x4;   // PBKEN
    static constexpr uint32_t PCR3_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR3_RESET_VALUE = 0x40;
    static constexpr uint32_t SR3_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR3_IFEN = 0x20;  // IFEN
    static constexpr uint32_t SR3_ILEN = 0x10;  // ILEN
    static constexpr uint32_t SR3_IREN = 0x8;   // IREN
    static constexpr uint32_t SR3_IFS = 0x4;    // IFS
    static constexpr uint32_t SR3_ILS = 0x2;    // ILS
    static constexpr uint32_t SR3_IRS = 0x1;    // IRS

    static constexpr uint32_t PMEM3_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PMEM3_MEMHIZx =    // MEMHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM3_MEMHOLDx =   // MEMHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM3_MEMWAITx =   // MEMWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM3_MEMSETx =    // MEMSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PATT3_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PATT3_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT3_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT3_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT3_ATTSETx =    // ATTSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ECCR3_RESET_VALUE = 0x0;

    static constexpr uint32_t PCR4_RESET_VALUE = 0x18;
    template<uint32_t X>
    static constexpr uint32_t PCR4_ECCPS =        // ECCPS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR4_TAR =          // TAR
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PCR4_TCLR =         // TCLR
        bit_field_t<9, 0xf>::value<X>();
    static constexpr uint32_t PCR4_ECCEN = 0x40;  // ECCEN
    template<uint32_t X>
    static constexpr uint32_t PCR4_PWID =         // PWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t PCR4_PTYP = 0x8;    // PTYP
    static constexpr uint32_t PCR4_PBKEN = 0x4;   // PBKEN
    static constexpr uint32_t PCR4_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR4_RESET_VALUE = 0x40;
    static constexpr uint32_t SR4_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR4_IFEN = 0x20;  // IFEN
    static constexpr uint32_t SR4_ILEN = 0x10;  // ILEN
    static constexpr uint32_t SR4_IREN = 0x8;   // IREN
    static constexpr uint32_t SR4_IFS = 0x4;    // IFS
    static constexpr uint32_t SR4_ILS = 0x2;    // ILS
    static constexpr uint32_t SR4_IRS = 0x1;    // IRS

    static constexpr uint32_t PMEM4_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PMEM4_MEMHIZx =    // MEMHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM4_MEMHOLDx =   // MEMHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM4_MEMWAITx =   // MEMWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PMEM4_MEMSETx =    // MEMSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PATT4_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PATT4_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT4_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT4_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT4_ATTSETx =    // ATTSETx
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PIO4_RESET_VALUE = 0xfcfcfcfc;
    template<uint32_t X>
    static constexpr uint32_t PIO4_IOHIZx =    // IOHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIO4_IOHOLDx =   // IOHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIO4_IOWAITx =   // IOWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIO4_IOSETx =    // IOSETx
        bit_field_t<0, 0xff>::value<X>();

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
struct peripheral_t<STM32F215, FSMC>
{
    typedef stm32f215_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, FSMC>
{
    typedef stm32f215_fsmc_t T;
    static T& V;
};

using fsmc_t = peripheral_t<mcu_svd, FSMC>;

