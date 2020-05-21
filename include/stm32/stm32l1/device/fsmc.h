#pragma once

////
//
//      STM32L1 FSMC peripherals
//
////

////
//
//      Flexible static memory controller
//
////

struct stm32l100_fsmc_t
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
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
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

    static constexpr uint32_t BTR1_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BCR2_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BTR2_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BCR3_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BTR3_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BCR4_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BTR4_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BWTR1_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BWTR2_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BWTR3_RESET_VALUE = 0x0;
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

    static constexpr uint32_t BWTR4_RESET_VALUE = 0x0;
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
struct peripheral_t<STM32L100, FSMC>
{
    typedef stm32l100_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, FSMC>
{
    typedef stm32l100_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, FSMC>
{
    typedef stm32l100_fsmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, FSMC>
{
    typedef stm32l100_fsmc_t T;
    static T& V;
};

using fsmc_t = peripheral_t<mcu_svd, FSMC>;

