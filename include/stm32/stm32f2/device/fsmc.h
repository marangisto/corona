#pragma once

////
//
//      STM32F2 FSMC peripherals
//
///

// FSMC: Flexible static memory controller

struct stm32f215_fsmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x10> _0x20;
    volatile uint32_t PCR2; // PC Card/NAND Flash control register 2
    volatile uint32_t SR2; // FIFO status and interrupt register 2
    volatile uint32_t PMEM2; // Common memory space timing register 2
    volatile uint32_t PATT2; // Attribute memory space timing register 2
    reserved_t<0x1> _0x70;
    volatile uint32_t ECCR2; // ECC result register 2
    reserved_t<0x2> _0x78;
    volatile uint32_t PCR3; // PC Card/NAND Flash control register 3
    volatile uint32_t SR3; // FIFO status and interrupt register 3
    volatile uint32_t PMEM3; // Common memory space timing register 3
    volatile uint32_t PATT3; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR3; // ECC result register 3
    reserved_t<0x2> _0x98;
    volatile uint32_t PCR4; // PC Card/NAND Flash control register 4
    volatile uint32_t SR4; // FIFO status and interrupt register 4
    volatile uint32_t PMEM4; // Common memory space timing register 4
    volatile uint32_t PATT4; // Attribute memory space timing register 4
    volatile uint32_t PIO4; // I/O space timing register 4
    reserved_t<0x14> _0xb4;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // SRAM/NOR-Flash write timing registers 4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR2_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // MTYP
    static constexpr uint32_t BCR2_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR3_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // MTYP
    static constexpr uint32_t BCR3_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR4_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // MTYP
    static constexpr uint32_t BCR4_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t PCR2_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR2_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR2_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR2_TCLR; // TCLR
    static constexpr uint32_t PCR2_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR2_PWID; // PWID
    static constexpr uint32_t PCR2_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR2_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR2_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR2_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR2_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR2_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR2_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR2_IREN = 0x8; // IREN
    static constexpr uint32_t SR2_IFS = 0x4; // IFS
    static constexpr uint32_t SR2_ILS = 0x2; // ILS
    static constexpr uint32_t SR2_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM2_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM2_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM2_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM2_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT2_ATTHIZX; // Attribute memory x databus HiZ time
    typedef bit_field_t<16, 0xff> PATT2_ATTHOLDX; // Attribute memory x hold time
    typedef bit_field_t<8, 0xff> PATT2_ATTWAITX; // Attribute memory x wait time
    typedef bit_field_t<0, 0xff> PATT2_ATTSETX; // Attribute memory x setup time


    static constexpr uint32_t ECCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR2_ECCX; // ECC result


    static constexpr uint32_t PCR3_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR3_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR3_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR3_TCLR; // TCLR
    static constexpr uint32_t PCR3_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR3_PWID; // PWID
    static constexpr uint32_t PCR3_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR3_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR3_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR3_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR3_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR3_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR3_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR3_IREN = 0x8; // IREN
    static constexpr uint32_t SR3_IFS = 0x4; // IFS
    static constexpr uint32_t SR3_ILS = 0x2; // ILS
    static constexpr uint32_t SR3_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM3_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM3_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM3_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM3_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT3_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT3_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT3_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT3_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR3_ECCX; // ECCx


    static constexpr uint32_t PCR4_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR4_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR4_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR4_TCLR; // TCLR
    static constexpr uint32_t PCR4_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR4_PWID; // PWID
    static constexpr uint32_t PCR4_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR4_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR4_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR4_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR4_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR4_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR4_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR4_IREN = 0x8; // IREN
    static constexpr uint32_t SR4_IFS = 0x4; // IFS
    static constexpr uint32_t SR4_ILS = 0x2; // ILS
    static constexpr uint32_t SR4_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM4_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM4_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM4_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM4_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT4_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT4_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT4_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT4_ATTSETX; // ATTSETx

    static constexpr uint32_t PIO4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PIO4_IOHIZX; // IOHIZx
    typedef bit_field_t<16, 0xff> PIO4_IOHOLDX; // IOHOLDx
    typedef bit_field_t<8, 0xff> PIO4_IOWAITX; // IOWAITx
    typedef bit_field_t<0, 0xff> PIO4_IOSETX; // IOSETx


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET


    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // ADDSET


    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // ADDSET
};

template<>
struct peripheral_t<STM32F215, FSMC>
{
    using T = stm32f215_fsmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, FSMC>
{
    using T = stm32f215_fsmc_t;
    static T& V;
};

using fsmc_t = peripheral_t<svd, FSMC>;

template<int INST> struct fsmc_traits {};

template<> struct fsmc_traits<0>
{
    using fsmc = fsmc_t;
    static constexpr signal_t A0 = FSMC_A0;
    static constexpr signal_t A1 = FSMC_A1;
    static constexpr signal_t A10 = FSMC_A10;
    static constexpr signal_t A11 = FSMC_A11;
    static constexpr signal_t A12 = FSMC_A12;
    static constexpr signal_t A13 = FSMC_A13;
    static constexpr signal_t A14 = FSMC_A14;
    static constexpr signal_t A15 = FSMC_A15;
    static constexpr signal_t A16 = FSMC_A16;
    static constexpr signal_t A17 = FSMC_A17;
    static constexpr signal_t A18 = FSMC_A18;
    static constexpr signal_t A19 = FSMC_A19;
    static constexpr signal_t A2 = FSMC_A2;
    static constexpr signal_t A20 = FSMC_A20;
    static constexpr signal_t A21 = FSMC_A21;
    static constexpr signal_t A22 = FSMC_A22;
    static constexpr signal_t A23 = FSMC_A23;
    static constexpr signal_t A24 = FSMC_A24;
    static constexpr signal_t A25 = FSMC_A25;
    static constexpr signal_t A3 = FSMC_A3;
    static constexpr signal_t A4 = FSMC_A4;
    static constexpr signal_t A5 = FSMC_A5;
    static constexpr signal_t A6 = FSMC_A6;
    static constexpr signal_t A7 = FSMC_A7;
    static constexpr signal_t A8 = FSMC_A8;
    static constexpr signal_t A9 = FSMC_A9;
    static constexpr signal_t ALE = FSMC_ALE;
    static constexpr signal_t CD = FSMC_CD;
    static constexpr signal_t CLE = FSMC_CLE;
    static constexpr signal_t CLK = FSMC_CLK;
    static constexpr signal_t D0 = FSMC_D0;
    static constexpr signal_t D1 = FSMC_D1;
    static constexpr signal_t D10 = FSMC_D10;
    static constexpr signal_t D11 = FSMC_D11;
    static constexpr signal_t D12 = FSMC_D12;
    static constexpr signal_t D13 = FSMC_D13;
    static constexpr signal_t D14 = FSMC_D14;
    static constexpr signal_t D15 = FSMC_D15;
    static constexpr signal_t D2 = FSMC_D2;
    static constexpr signal_t D3 = FSMC_D3;
    static constexpr signal_t D4 = FSMC_D4;
    static constexpr signal_t D5 = FSMC_D5;
    static constexpr signal_t D6 = FSMC_D6;
    static constexpr signal_t D7 = FSMC_D7;
    static constexpr signal_t D8 = FSMC_D8;
    static constexpr signal_t D9 = FSMC_D9;
    static constexpr signal_t DA0 = FSMC_DA0;
    static constexpr signal_t DA1 = FSMC_DA1;
    static constexpr signal_t DA10 = FSMC_DA10;
    static constexpr signal_t DA11 = FSMC_DA11;
    static constexpr signal_t DA12 = FSMC_DA12;
    static constexpr signal_t DA13 = FSMC_DA13;
    static constexpr signal_t DA14 = FSMC_DA14;
    static constexpr signal_t DA15 = FSMC_DA15;
    static constexpr signal_t DA2 = FSMC_DA2;
    static constexpr signal_t DA3 = FSMC_DA3;
    static constexpr signal_t DA4 = FSMC_DA4;
    static constexpr signal_t DA5 = FSMC_DA5;
    static constexpr signal_t DA6 = FSMC_DA6;
    static constexpr signal_t DA7 = FSMC_DA7;
    static constexpr signal_t DA8 = FSMC_DA8;
    static constexpr signal_t DA9 = FSMC_DA9;
    static constexpr signal_t INT2 = FSMC_INT2;
    static constexpr signal_t INT3 = FSMC_INT3;
    static constexpr signal_t INTR = FSMC_INTR;
    static constexpr signal_t NBL0 = FSMC_NBL0;
    static constexpr signal_t NBL1 = FSMC_NBL1;
    static constexpr signal_t NCE2 = FSMC_NCE2;
    static constexpr signal_t NCE3 = FSMC_NCE3;
    static constexpr signal_t NCE4_1 = FSMC_NCE4_1;
    static constexpr signal_t NCE4_2 = FSMC_NCE4_2;
    static constexpr signal_t NE1 = FSMC_NE1;
    static constexpr signal_t NE2 = FSMC_NE2;
    static constexpr signal_t NE3 = FSMC_NE3;
    static constexpr signal_t NE4 = FSMC_NE4;
    static constexpr signal_t NIORD = FSMC_NIORD;
    static constexpr signal_t NIOWR = FSMC_NIOWR;
    static constexpr signal_t NL = FSMC_NL;
    static constexpr signal_t NOE = FSMC_NOE;
    static constexpr signal_t NREG = FSMC_NREG;
    static constexpr signal_t NWAIT = FSMC_NWAIT;
    static constexpr signal_t NWE = FSMC_NWE;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_FSMCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_FSMCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_FSMCRST;
    }
};
