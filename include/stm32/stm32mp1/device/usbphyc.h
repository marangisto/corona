#pragma once

////
//
//      STM32MP1 USBPHYC peripherals
//
////

////
//
//      USBPHYC
//
////

struct stm32mp15xxx_usbphyc_t
{
    volatile uint32_t USBPHYC_PLL;   // [read-write] This register is used to control the PLL of the HS PHY.
    reserved_t<0x1> _0x8;
    volatile uint32_t USBPHYC_MISC;  // [read-write] This register is used to control the switch between controllers for the HS PHY.
    reserved_t<0x40> _0x10c;
    volatile uint32_t USBPHYC_TUNE1; // [read-write] This register is used to control the tune interface of the HS PHY, port #x.
    reserved_t<0x3f> _0x20c;
    volatile uint32_t USBPHYC_TUNE2; // [read-write] This register is used to control the tune interface of the HS PHY, port #x.
    reserved_t<0x37b> _0xffc;
    volatile uint32_t USBPHYC_VERR;  // [read-only] This register defines the version of this IP.

    static constexpr uint32_t USBPHYC_PLL_RESET_VALUE = 0xc0000000;
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_PLL_PLLNDIV =                // PLLNDIV
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_PLL_PLLODF =                 // PLLODF
        bit_field_t<7, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_PLL_PLLFRACIN =              // PLLFRACIN
        bit_field_t<10, 0xffff>::value<X>();
    static constexpr uint32_t USBPHYC_PLL_PLLEN = 0x4000000;       // PLLEN
    static constexpr uint32_t USBPHYC_PLL_PLLSTRB = 0x8000000;     // PLLSTRB
    static constexpr uint32_t USBPHYC_PLL_PLLSTRBYP = 0x10000000;  // PLLSTRBYP
    static constexpr uint32_t USBPHYC_PLL_PLLFRACCTL = 0x20000000; // PLLFRACCTL
    static constexpr uint32_t USBPHYC_PLL_PLLDITHEN0 = 0x40000000; // PLLDITHEN0
    static constexpr uint32_t USBPHYC_PLL_PLLDITHEN1 = 0x80000000; // PLLDITHEN1

    static constexpr uint32_t USBPHYC_MISC_RESET_VALUE = 0x0;
    static constexpr uint32_t USBPHYC_MISC_SWITHOST = 0x1; // SWITHOST
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_MISC_PPCKDIS =       // PPCKDIS
        bit_field_t<1, 0x3>::value<X>();

    static constexpr uint32_t USBPHYC_TUNE1_RESET_VALUE = 0x4070004;
    static constexpr uint32_t USBPHYC_TUNE1_INCURREN = 0x1;            // INCURREN
    static constexpr uint32_t USBPHYC_TUNE1_INCURRINT = 0x2;           // INCURRINT
    static constexpr uint32_t USBPHYC_TUNE1_LFSCAPEN = 0x4;            // LFSCAPEN
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVSLEW = 0x8;           // HSDRVSLEW
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVDCCUR = 0x10;         // HSDRVDCCUR
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVDCLEV = 0x20;         // HSDRVDCLEV
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVCURINCR = 0x40;       // HSDRVCURINCR
    static constexpr uint32_t USBPHYC_TUNE1_FSDRVRFADJ = 0x80;         // FSDRVRFADJ
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVRFRED = 0x100;        // HSDRVRFRED
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVCHKITRM =             // HSDRVCHKITRM
        bit_field_t<9, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE1_HSDRVCHKZTRM =             // HSDRVCHKZTRM
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE1_OTPCOMP =                  // OTPCOMP
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE1_SQLCHCTL =                 // SQLCHCTL
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t USBPHYC_TUNE1_HDRXGNEQEN = 0x400000;     // HDRXGNEQEN
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE1_HSRXOFF =                  // HSRXOFF
        bit_field_t<23, 0x3>::value<X>();
    static constexpr uint32_t USBPHYC_TUNE1_HSFALLPREEM = 0x2000000;   // HSFALLPREEM
    static constexpr uint32_t USBPHYC_TUNE1_SHTCCTCTLPROT = 0x4000000; // SHTCCTCTLPROT
    static constexpr uint32_t USBPHYC_TUNE1_STAGSEL = 0x8000000;       // STAGSEL

    static constexpr uint32_t USBPHYC_TUNE2_RESET_VALUE = 0x4070004;
    static constexpr uint32_t USBPHYC_TUNE2_INCURREN = 0x1;            // INCURREN
    static constexpr uint32_t USBPHYC_TUNE2_INCURRINT = 0x2;           // INCURRINT
    static constexpr uint32_t USBPHYC_TUNE2_LFSCAPEN = 0x4;            // LFSCAPEN
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVSLEW = 0x8;           // HSDRVSLEW
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVDCCUR = 0x10;         // HSDRVDCCUR
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVDCLEV = 0x20;         // HSDRVDCLEV
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVCURINCR = 0x40;       // HSDRVCURINCR
    static constexpr uint32_t USBPHYC_TUNE2_FSDRVRFADJ = 0x80;         // FSDRVRFADJ
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVRFRED = 0x100;        // HSDRVRFRED
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVCHKITRM =             // HSDRVCHKITRM
        bit_field_t<9, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE2_HSDRVCHKZTRM =             // HSDRVCHKZTRM
        bit_field_t<13, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE2_OTPCOMP =                  // OTPCOMP
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE2_SQLCHCTL =                 // SQLCHCTL
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t USBPHYC_TUNE2_HDRXGNEQEN = 0x400000;     // HDRXGNEQEN
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_TUNE2_HSRXOFF =                  // HSRXOFF
        bit_field_t<23, 0x3>::value<X>();
    static constexpr uint32_t USBPHYC_TUNE2_HSFALLPREEM = 0x2000000;   // HSFALLPREEM
    static constexpr uint32_t USBPHYC_TUNE2_SHTCCTCTLPROT = 0x4000000; // SHTCCTCTLPROT
    static constexpr uint32_t USBPHYC_TUNE2_STAGSEL = 0x8000000;       // STAGSEL

    static constexpr uint32_t USBPHYC_VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t USBPHYC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, USBPHYC>
{
    typedef stm32mp15xxx_usbphyc_t T;
    static T& V;
};

using usbphyc_t = peripheral_t<mcu_svd, USBPHYC>;

