#pragma once

////
//
//      STM32F4 FSMC peripherals
//
////

////
//
//      Flexible memory controller
//
////

struct stm32f427_fmc_t
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
    reserved_t<0xc> _0x140;
    volatile uint32_t SDCR1; // [read-write] SDRAM Control Register 1
    volatile uint32_t SDCR2; // [read-write] SDRAM Control Register 2
    volatile uint32_t SDTR1; // [read-write] SDRAM Timing register 1
    volatile uint32_t SDTR2; // [read-write] SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR;  // [read-only] SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // CCLKEN
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    template<uint32_t X>
    static constexpr uint32_t BCR1_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000;      // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t BCR1_WRAPMOD = 0x400;    // WRAPMOD
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
    template<uint32_t X>
    static constexpr uint32_t BCR2_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
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
    template<uint32_t X>
    static constexpr uint32_t BCR3_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
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
    template<uint32_t X>
    static constexpr uint32_t BCR4_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
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
    static constexpr uint32_t PATT2_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTSETx =    // ATTSETx
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
    static constexpr uint32_t BWTR1_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR1_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR1_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR1_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NC =        // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NR =        // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_MWID =      // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_NB = 0x40;  // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR2_CAS =       // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR2_SDCLK =     // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MODE =       // Command mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SDCMR_CTB2 = 0x8;  // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    template<uint32_t X>
    static constexpr uint32_t SDCMR_NRFS =       // Number of Auto-refresh
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MRD =        // Mode Register definition
        bit_field_t<9, 0x1fff>::value<X>();

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDRTR_CRE = 0x1;     // Clear Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDRTR_COUNT =        // Refresh Timer Count
        bit_field_t<1, 0x1fff>::value<X>();
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDSR_RE = 0x1;    // Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES1 =     // Status Mode for Bank 1
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES2 =     // Status Mode for Bank 2
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};


////
//
//      Flexible memory controller
//
////

struct stm32f429_fmc_t
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
    reserved_t<0xc> _0x140;
    volatile uint32_t SDCR1; // [read-write] SDRAM Control Register 1
    volatile uint32_t SDCR2; // [read-write] SDRAM Control Register 2
    volatile uint32_t SDTR1; // [read-write] SDRAM Timing register 1
    volatile uint32_t SDTR2; // [read-write] SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR;  // [read-only] SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // CCLKEN
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
    static constexpr uint32_t PATT2_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTSETx =    // ATTSETx
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

    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR1_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR1_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR1_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR2_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR2_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR2_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MODE =       // Command mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SDCMR_CTB2 = 0x8;  // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    template<uint32_t X>
    static constexpr uint32_t SDCMR_NRFS =       // Number of Auto-refresh
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MRD =        // Mode Register definition
        bit_field_t<9, 0x1fff>::value<X>();

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDRTR_CRE = 0x1;     // Clear Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDRTR_COUNT =        // Refresh Timer Count
        bit_field_t<1, 0x1fff>::value<X>();
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDSR_RE = 0x1;    // Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES1 =     // Status Mode for Bank 1
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES2 =     // Status Mode for Bank 2
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};


////
//
//      Flexible memory controller
//
////

struct stm32f446_fmc_t
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
    reserved_t<0x8> _0x140;
    volatile uint32_t SDCR1; // [read-write] SDRAM Control Register 1
    volatile uint32_t SDCR2; // [read-write] SDRAM Control Register 2
    volatile uint32_t SDTR1; // [read-write] SDRAM Timing register 1
    volatile uint32_t SDTR2; // [read-write] SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR;  // [read-only] SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // CCLKEN
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
    static constexpr uint32_t PATT2_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTSETx =    // ATTSETx
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

    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR1_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR1_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR1_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR2_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR2_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR2_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MODE =       // Command mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SDCMR_CTB2 = 0x8;  // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    template<uint32_t X>
    static constexpr uint32_t SDCMR_NRFS =       // Number of Auto-refresh
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MRD =        // Mode Register definition
        bit_field_t<9, 0x1fff>::value<X>();

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDRTR_CRE = 0x1;     // Clear Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDRTR_COUNT =        // Refresh Timer Count
        bit_field_t<1, 0x1fff>::value<X>();
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDSR_RE = 0x1;    // Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES1 =     // Status Mode for Bank 1
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES2 =     // Status Mode for Bank 2
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};


////
//
//      Flexible memory controller
//
////

struct stm32f469_fmc_t
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
    reserved_t<0x8> _0x140;
    volatile uint32_t SDCR1; // [read-write] SDRAM Control Register 1
    volatile uint32_t SDCR2; // [read-write] SDRAM Control Register 2
    volatile uint32_t SDTR1; // [read-write] SDRAM Timing register 1
    volatile uint32_t SDTR2; // [read-write] SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR;  // [read-only] SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0;
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // CCLKEN
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

    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR1_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR1_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR1_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR1_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0;
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NC =             // Number of column address bits
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_NR =             // Number of row address bits
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCR2_MWID =           // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_NB = 0x40;       // Number of internal banks
    template<uint32_t X>
    static constexpr uint32_t SDCR2_CAS =            // CAS latency
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_WP = 0x200;      // Write protection
    template<uint32_t X>
    static constexpr uint32_t SDCR2_SDCLK =          // SDRAM clock configuration
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    template<uint32_t X>
    static constexpr uint32_t SDCR2_RPIPE =          // Read pipe
        bit_field_t<13, 0x3>::value<X>();

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR1_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TMRD =   // Load Mode Register to Active
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TXSR =   // Exit self-refresh delay
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRAS =   // Self refresh time
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRC =    // Row cycle delay
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TWR =    // Recovery delay
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRP =    // Row precharge delay
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDTR2_TRCD =   // Row to column delay
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MODE =       // Command mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t SDCMR_CTB2 = 0x8;  // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    template<uint32_t X>
    static constexpr uint32_t SDCMR_NRFS =       // Number of Auto-refresh
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDCMR_MRD =        // Mode Register definition
        bit_field_t<9, 0x1fff>::value<X>();

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDRTR_CRE = 0x1;     // Clear Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDRTR_COUNT =        // Refresh Timer Count
        bit_field_t<1, 0x1fff>::value<X>();
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDSR_RE = 0x1;    // Refresh error flag
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES1 =     // Status Mode for Bank 1
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDSR_MODES2 =     // Status Mode for Bank 2
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};


////
//
//      Flexible static memory controller
//
////

struct stm32f405_fsmc_t
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
    static constexpr uint32_t PATT2_ATTHIZx =    // ATTHIZx
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTHOLDx =   // ATTHOLDx
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTWAITx =   // ATTWAITx
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PATT2_ATTSETx =    // ATTSETx
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


////
//
//      Flexible static memory controller
//
////

struct stm32f413_fsmc_t
{
    volatile uint32_t BCR1;  // [read-write] BCR1
    volatile uint32_t BTR1;  // [read-write] BTR1
    volatile uint32_t BCR2;  // [read-write] BCR2
    volatile uint32_t BTR2;  // [read-write] BTR2
    volatile uint32_t BCR3;  // [read-write] BCR3
    volatile uint32_t BTR3;  // [read-write] BTR3
    volatile uint32_t BCR4;  // [read-write] BCR4
    volatile uint32_t BTR4;  // [read-write] BTR4
    reserved_t<0x39> _0x104;
    volatile uint32_t BWTR1; // [read-write] BWTR1
    reserved_t<0x1> _0x10c;
    volatile uint32_t BWTR2; // [read-write] BWTR2
    reserved_t<0x1> _0x114;
    volatile uint32_t BWTR3; // [read-write] BWTR3
    reserved_t<0x1> _0x11c;
    volatile uint32_t BWTR4; // [read-write] BWTR4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BCR1_CPSIZE =            // CRAM page size
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    static constexpr uint32_t BCR1_EXTMOD = 0x4000;    // Extended mode enable
    static constexpr uint32_t BCR1_WAITEN = 0x2000;    // Wait enable bit
    static constexpr uint32_t BCR1_WREN = 0x1000;      // Write enable bitWREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800;    // Wait timing configuration
    static constexpr uint32_t BCR1_WAITPOL = 0x200;    // Wait signal polarity bit
    static constexpr uint32_t BCR1_BURSTEN = 0x100;    // Burst enable bit
    static constexpr uint32_t BCR1_FACCEN = 0x40;      // Flash access enable
    template<uint32_t X>
    static constexpr uint32_t BCR1_MWID =              // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR1_MTYP =              // Memory type
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR1_MUXEN = 0x2;        // Memory bank enable bit
    static constexpr uint32_t BCR1_MBKEN = 0x1;        // Memory bank enable bit
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR1_CCLKEN = 0x100000;  // Continuous Clock Enable
    static constexpr uint32_t BCR1_WFDIS = 0x200000;   // Write FIFO Disable

    static constexpr uint32_t BTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTR1_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_CLKDIV =    // Clock divide ratio
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR1_DATLAT =    // Data latency
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t BCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BCR2_CPSIZE =            // CRAM page size
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    static constexpr uint32_t BCR2_EXTMOD = 0x4000;    // Extended mode enable
    static constexpr uint32_t BCR2_WAITEN = 0x2000;    // Wait enable bit
    static constexpr uint32_t BCR2_WREN = 0x1000;      // Write enable bit
    static constexpr uint32_t BCR2_WAITCFG = 0x800;    // Wait timing configuration
    static constexpr uint32_t BCR2_WAITPOL = 0x200;    // Wait signal polarity bit
    static constexpr uint32_t BCR2_BURSTEN = 0x100;    // Burst enable bit
    static constexpr uint32_t BCR2_FACCEN = 0x40;      // Flash access enable
    template<uint32_t X>
    static constexpr uint32_t BCR2_MWID =              // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR2_MTYP =              // Memory type
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR2_MUXEN = 0x2;        // Address/data multiplexing enable bit
    static constexpr uint32_t BCR2_MBKEN = 0x1;        // Memory bank enable bit
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR2_CCLKEN = 0x100000;  // Continuous Clock Enable
    static constexpr uint32_t BCR2_WFDIS = 0x200000;   // Write FIFO Disable

    static constexpr uint32_t BTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTR2_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_DATLAT =    // Data latency
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_CLKDIV =    // Clock divide ratio
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR2_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BCR3_RESET_VALUE = 0x0;
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    static constexpr uint32_t BCR3_EXTMOD = 0x4000;    // Extended mode enable
    static constexpr uint32_t BCR3_WAITEN = 0x2000;    // Write enable bit
    static constexpr uint32_t BCR3_WREN = 0x1000;      // Write enable bit
    static constexpr uint32_t BCR3_WAITCFG = 0x800;    // Wait timing configuration
    static constexpr uint32_t BCR3_WAITPOL = 0x200;    // Wait signal polarity bit
    static constexpr uint32_t BCR3_BURSTEN = 0x100;    // Burst enable bit
    static constexpr uint32_t BCR3_FACCEN = 0x40;      // Flash access enable
    template<uint32_t X>
    static constexpr uint32_t BCR3_MWID =              // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR3_MTYP =              // Memory type
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR3_MUXEN = 0x2;        // Address/data multiplexing enable bit
    static constexpr uint32_t BCR3_MBKEN = 0x1;        // Memory bank enable bit
    template<uint32_t X>
    static constexpr uint32_t BCR3_CPSIZE =            // CRAM page size
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BCR3_CCLKEN = 0x100000;  // Continuous Clock Enable
    static constexpr uint32_t BCR3_WFDIS = 0x200000;   // Write FIFO Disable

    static constexpr uint32_t BTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTR3_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_DATLAT =    // Data latency
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_CLKDIV =    // Clock divide ratio
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR3_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // Extended mode enable
    static constexpr uint32_t BCR4_EXTMOD = 0x4000;    // Extended mode enable
    static constexpr uint32_t BCR4_WAITEN = 0x2000;    // Wait enable bit
    static constexpr uint32_t BCR4_WREN = 0x1000;      // Write enable bit
    static constexpr uint32_t BCR4_WAITCFG = 0x800;    // Wait timing configuration
    static constexpr uint32_t BCR4_WAITPOL = 0x200;    // Wait signal polarity bit
    static constexpr uint32_t BCR4_BURSTEN = 0x100;    // Burst enable bit
    static constexpr uint32_t BCR4_FACCEN = 0x40;      // Flash access enable
    template<uint32_t X>
    static constexpr uint32_t BCR4_MWID =              // Memory data bus width
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BCR4_MTYP =              // Memory type
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t BCR4_MUXEN = 0x2;        // Address/data multiplexing enable bit
    static constexpr uint32_t BCR4_MBKEN = 0x1;        // Memory bank enable bit
    template<uint32_t X>
    static constexpr uint32_t BCR4_CPSIZE =            // CRAM page size
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t BCR4_CCLKEN = 0x100000;  // Continuous Clock Enable
    static constexpr uint32_t BCR4_WFDIS = 0x200000;   // Write FIFO Disable

    static constexpr uint32_t BTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTR4_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_DATLAT =    // Data latency
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_CLKDIV =    // Clock divide ratio
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BTR4_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t BWTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR1_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t BWTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR2_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t BWTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR3_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t BWTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ACCMOD =    // Access mode
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_DATAST =    // Data-phase duration
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDHLD =    // Address-hold phase duration
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_ADDSET =    // Address setup phase duration
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BWTR4_BUSTURN =   // Bus turnaround phase duration
        bit_field_t<16, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32F405, FSMC>
{
    typedef stm32f405_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, FSMC>
{
    typedef stm32f405_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, FSMC>
{
    typedef stm32f405_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, FSMC>
{
    typedef stm32f413_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, FMC>
{
    typedef stm32f427_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, FMC>
{
    typedef stm32f429_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, FMC>
{
    typedef stm32f446_fmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, FMC>
{
    typedef stm32f469_fmc_t T;
    static T& V;
};

using fmc_t = peripheral_t<mcu_svd, FMC>;
using fsmc_t = peripheral_t<mcu_svd, FSMC>;

