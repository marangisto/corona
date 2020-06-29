#pragma once

////
//
//      STM32L1 FSMC peripherals
//
///

// FSMC: Flexible static memory controller

struct stm32l100_fsmc_t
{
    volatile uint32_t BCR1; // BCR1
    volatile uint32_t BTR1; // BTR1
    volatile uint32_t BCR2; // BCR2
    volatile uint32_t BTR2; // BTR2
    volatile uint32_t BCR3; // BCR3
    volatile uint32_t BTR3; // BTR3
    volatile uint32_t BCR4; // BCR4
    volatile uint32_t BTR4; // BTR4
    reserved_t<0x39> _0x20;
    volatile uint32_t BWTR1; // BWTR1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // BWTR2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // BWTR3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // BWTR4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x0; // Reset value
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

    static constexpr uint32_t BTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x0; // Reset value
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

    static constexpr uint32_t BTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x0; // Reset value
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

    static constexpr uint32_t BTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t BWTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET


    static constexpr uint32_t BWTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET


    static constexpr uint32_t BWTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // ADDSET


    static constexpr uint32_t BWTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // ADDSET
};

template<>
struct peripheral_t<STM32L100, FSMC>
{
    using T = stm32l100_fsmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, FSMC>
{
    using T = stm32l100_fsmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, FSMC>
{
    using T = stm32l100_fsmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, FSMC>
{
    using T = stm32l100_fsmc_t;
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
    static constexpr signal_t NBL0 = FSMC_NBL0;
    static constexpr signal_t NBL1 = FSMC_NBL1;
    static constexpr signal_t NE1 = FSMC_NE1;
    static constexpr signal_t NE2 = FSMC_NE2;
    static constexpr signal_t NE3 = FSMC_NE3;
    static constexpr signal_t NE4 = FSMC_NE4;
    static constexpr signal_t NL = FSMC_NL;
    static constexpr signal_t NOE = FSMC_NOE;
    static constexpr signal_t NWAIT = FSMC_NWAIT;
    static constexpr signal_t NWE = FSMC_NWE;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_FSMCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_FSMCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_FSMCRST;
    }
};
