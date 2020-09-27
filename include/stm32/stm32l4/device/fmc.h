#pragma once

////
//
//      STM32L4 FMC peripherals
//
///

// FMC: Flexible memory controller

struct stm32l476_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x18> _0x20;
    volatile uint32_t PCR; // PC Card/NAND Flash control register 3
    volatile uint32_t SR; // FIFO status and interrupt register 3
    volatile uint32_t PMEM; // Common memory space timing register 3
    volatile uint32_t PATT; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR; // ECC result register 3
    reserved_t<0x1b> _0x98;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // SRAM/NOR-Flash write timing registers 4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // CCLKEN
    static constexpr uint32_t BCR1_WFDIS = 0x200000; // Write FIFO Disable

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


    static constexpr uint32_t PCR_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR_TCLR; // TCLR
    static constexpr uint32_t PCR_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR_PWID; // PWID
    static constexpr uint32_t PCR_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR_IREN = 0x8; // IREN
    static constexpr uint32_t SR_IFS = 0x4; // IFS
    static constexpr uint32_t SR_ILS = 0x2; // ILS
    static constexpr uint32_t SR_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR_ECCX; // ECCx


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
struct peripheral_t<STM32L476, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32l476_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32l476_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32l476_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32l476_fmc_t;
    static T& V;
};

using fmc_t = peripheral_t<svd, FMC>;

template<int INST> struct fmc_traits {};

template<> struct fmc_traits<0>
{
    using fmc = fmc_t;
    static constexpr signal_t A0 = FMC_A0;
    static constexpr signal_t A1 = FMC_A1;
    static constexpr signal_t A10 = FMC_A10;
    static constexpr signal_t A11 = FMC_A11;
    static constexpr signal_t A12 = FMC_A12;
    static constexpr signal_t A13 = FMC_A13;
    static constexpr signal_t A14 = FMC_A14;
    static constexpr signal_t A15 = FMC_A15;
    static constexpr signal_t A16 = FMC_A16;
    static constexpr signal_t A17 = FMC_A17;
    static constexpr signal_t A18 = FMC_A18;
    static constexpr signal_t A19 = FMC_A19;
    static constexpr signal_t A2 = FMC_A2;
    static constexpr signal_t A20 = FMC_A20;
    static constexpr signal_t A21 = FMC_A21;
    static constexpr signal_t A22 = FMC_A22;
    static constexpr signal_t A23 = FMC_A23;
    static constexpr signal_t A24 = FMC_A24;
    static constexpr signal_t A25 = FMC_A25;
    static constexpr signal_t A3 = FMC_A3;
    static constexpr signal_t A4 = FMC_A4;
    static constexpr signal_t A5 = FMC_A5;
    static constexpr signal_t A6 = FMC_A6;
    static constexpr signal_t A7 = FMC_A7;
    static constexpr signal_t A8 = FMC_A8;
    static constexpr signal_t A9 = FMC_A9;
    static constexpr signal_t CLK = FMC_CLK;
    static constexpr signal_t D0 = FMC_D0;
    static constexpr signal_t D1 = FMC_D1;
    static constexpr signal_t D10 = FMC_D10;
    static constexpr signal_t D11 = FMC_D11;
    static constexpr signal_t D12 = FMC_D12;
    static constexpr signal_t D13 = FMC_D13;
    static constexpr signal_t D14 = FMC_D14;
    static constexpr signal_t D15 = FMC_D15;
    static constexpr signal_t D2 = FMC_D2;
    static constexpr signal_t D3 = FMC_D3;
    static constexpr signal_t D4 = FMC_D4;
    static constexpr signal_t D5 = FMC_D5;
    static constexpr signal_t D6 = FMC_D6;
    static constexpr signal_t D7 = FMC_D7;
    static constexpr signal_t D8 = FMC_D8;
    static constexpr signal_t D9 = FMC_D9;
    static constexpr signal_t DA0 = FMC_DA0;
    static constexpr signal_t DA1 = FMC_DA1;
    static constexpr signal_t DA10 = FMC_DA10;
    static constexpr signal_t DA11 = FMC_DA11;
    static constexpr signal_t DA12 = FMC_DA12;
    static constexpr signal_t DA13 = FMC_DA13;
    static constexpr signal_t DA14 = FMC_DA14;
    static constexpr signal_t DA15 = FMC_DA15;
    static constexpr signal_t DA2 = FMC_DA2;
    static constexpr signal_t DA3 = FMC_DA3;
    static constexpr signal_t DA4 = FMC_DA4;
    static constexpr signal_t DA5 = FMC_DA5;
    static constexpr signal_t DA6 = FMC_DA6;
    static constexpr signal_t DA7 = FMC_DA7;
    static constexpr signal_t DA8 = FMC_DA8;
    static constexpr signal_t DA9 = FMC_DA9;
    static constexpr signal_t INT = FMC_INT;
    static constexpr signal_t INT3 = FMC_INT3;
    static constexpr signal_t NBL0 = FMC_NBL0;
    static constexpr signal_t NBL1 = FMC_NBL1;
    static constexpr signal_t NCE = FMC_NCE;
    static constexpr signal_t NCE3 = FMC_NCE3;
    static constexpr signal_t NE1 = FMC_NE1;
    static constexpr signal_t NE2 = FMC_NE2;
    static constexpr signal_t NE3 = FMC_NE3;
    static constexpr signal_t NE4 = FMC_NE4;
    static constexpr signal_t NL = FMC_NL;
    static constexpr signal_t NOE = FMC_NOE;
    static constexpr signal_t NWAIT = FMC_NWAIT;
    static constexpr signal_t NWE = FMC_NWE;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST;
    }
};
