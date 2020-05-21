#pragma once

////
//
//      STM32MP1 DDRPHYC peripherals
//
////

////
//
//      DDRPHYC
//
////

struct stm32mp15xxx_ddrphyc_t
{
    volatile uint32_t DDRPHYC_RIDR;     // [read-only] DDRPHYC revision ID register
    volatile uint32_t DDRPHYC_PIR;      // [write-only] DDRPHYC PHY initialization register
    volatile uint32_t DDRPHYC_PGCR;     // [read-write] DDRPHYC PHY global control register
    volatile uint32_t DDRPHYC_PGSR;     // [read-only] DDRPHYC PHY global status register
    volatile uint32_t DDRPHYC_DLLGCR;   // [read-write] DDRPHYC DDR global control register
    volatile uint32_t DDRPHYC_ACDLLCR;  // [read-write] DDRPHYC AC DLL control register
    volatile uint32_t DDRPHYC_PTR0;     // [read-write] DDRPHYC PT register 0
    volatile uint32_t DDRPHYC_PTR1;     // [read-write] DDRPHYC PT register 1
    volatile uint32_t DDRPHYC_PTR2;     // [read-write] DDRPHYC PT register 2
    volatile uint32_t DDRPHYC_ACIOCR;   // [read-write] DDRPHYC ACIOC register
    volatile uint32_t DDRPHYC_DXCCR;    // [read-write] DDRPHYC DXCC register
    volatile uint32_t DDRPHYC_DSGCR;    // [read-write] DDRPHYC DSGC register
    volatile uint32_t DDRPHYC_DCR;      // [read-write] DDRPHYC DC register
    volatile uint32_t DDRPHYC_DTPR0;    // [read-write] DDRPHYC DTP register 0
    volatile uint32_t DDRPHYC_DTPR1;    // [read-write] DDRPHYC DTP register 1
    volatile uint32_t DDRPHYC_DTPR2;    // [read-write] DDRPHYC DTP register 2
    volatile uint32_t DDRPHYC_DDR3_MR0; // [read-write] DDRPHYC MR0 register for DDR3
    volatile uint32_t DDRPHYC_DDR3_MR1; // [read-write] DDRPHYC MR1 register for DDR3
    volatile uint32_t DDRPHYC_DDR3_MR2; // [read-write] DDRPHYC MR2 register for DDR3
    volatile uint32_t DDRPHYC_DDR3_MR3; // [read-write] DDRPHYC MR3 register for DDR3
    volatile uint32_t DDRPHYC_ODTCR;    // [read-write] DDRPHYC ODTC register
    volatile uint32_t DDRPHYC_DTAR;     // [read-write] DDRPHYC DTA register
    volatile uint32_t DDRPHYC_DTDR0;    // [read-write] DDRPHYC DTD register 0
    volatile uint32_t DDRPHYC_DTDR1;    // [read-write] DDRPHYC DTD register 1
    reserved_t<0x46> _0x178;
    volatile uint32_t DDRPHYC_GPR0;     // [read-write] DDRPHYC general purpose register 0
    volatile uint32_t DDRPHYC_GPR1;     // [read-write] DDRPHYC general purpose register 1
    volatile uint32_t DDRPHYC_ZQ0CR0;   // [read-write] DDRPHYC ZQ0C register 0
    volatile uint32_t DDRPHYC_ZQ0CR1;   // [read-write] DDRPHYC ZQ0CR1 register
    volatile uint32_t DDRPHYC_ZQ0SR0;   // [read-only] DDRPHYC ZQ0S register 0
    volatile uint32_t DDRPHYC_ZQ0SR1;   // [read-only] DDRPHYC ZQ0S register 1
    reserved_t<0xc> _0x1c0;
    volatile uint32_t DDRPHYC_DX0GCR;   // [read-write] DDRPHYC byte lane 0 GC register
    volatile uint32_t DDRPHYC_DX0GSR0;  // [read-only] DDRPHYC byte lane 0 GS register 0
    volatile uint32_t DDRPHYC_DX0GSR1;  // [read-only] DDRPHYC byte lane 0 GS register 1
    volatile uint32_t DDRPHYC_DX0DLLCR; // [read-write] DDRPHYC byte lane 0 DLLC register
    volatile uint32_t DDRPHYC_DX0DQTR;  // [read-write] DDRPHYC byte lane 0 DQT register
    volatile uint32_t DDRPHYC_DX0DQSTR; // [read-write] DDRPHYC byte lane 0 DQST register
    reserved_t<0xa> _0x200;
    volatile uint32_t DDRPHYC_DX1GCR;   // [read-write] DDRPHYC byte lane 1 GC register
    volatile uint32_t DDRPHYC_DX1GSR0;  // [read-only] DDRPHYC byte lane 1 GS register 0
    volatile uint32_t DDRPHYC_DX1GSR1;  // [read-only] DDRPHYC byte lane 1 GS register 1
    volatile uint32_t DDRPHYC_DX1DLLCR; // [read-write] DDRPHYC byte lane 1 DLLC register
    volatile uint32_t DDRPHYC_DX1DQTR;  // [read-write] DDRPHYC byte lane 1 DQT register
    volatile uint32_t DDRPHYC_DX1DQSTR; // [read-write] DDRPHYC byte lane 1 DQST register
    reserved_t<0xa> _0x240;
    volatile uint32_t DDRPHYC_DX2GCR;   // [read-write] DDRPHYC byte lane 2 GC register
    volatile uint32_t DDRPHYC_DX2GSR0;  // [read-only] DDRPHYC byte lane 2 GS register 0
    volatile uint32_t DDRPHYC_DX2GSR1;  // [read-only] DDRPHYC byte lane 2 GS register 1
    volatile uint32_t DDRPHYC_DX2DLLCR; // [read-write] DDRPHYC byte lane 2 DLLC register
    volatile uint32_t DDRPHYC_DX2DQTR;  // [read-write] DDRPHYC byte lane 2 DQT register
    volatile uint32_t DDRPHYC_DX2DQSTR; // [read-write] DDRPHYC byte lane 2 DQST register
    reserved_t<0xa> _0x280;
    volatile uint32_t DDRPHYC_DX3GCR;   // [read-write] DDRPHYC byte lane 3 GC register
    volatile uint32_t DDRPHYC_DX3GSR0;  // [read-only] DDRPHYC byte lane 3 GS register 0
    volatile uint32_t DDRPHYC_DX3GSR1;  // [read-only] DDRPHYC byte lane 3 GS register 1
    volatile uint32_t DDRPHYC_DX3DLLCR; // [read-write] DDRPHYC byte lane 3 DLLC register
    volatile uint32_t DDRPHYC_DX3DQTR;  // [read-write] DDRPHYC byte lane 3 DQT register
    volatile uint32_t DDRPHYC_DX3DQSTR; // [read-write] DDRPHYC byte lane 3 DQST register

    static constexpr uint32_t DDRPHYC_RIDR_RESET_VALUE = 0x410010;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PUBMNR =   // PUBMNR
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PUBMDR =   // PUBMDR
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PUBMJR =   // PUBMJR
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PHYMNR =   // PHYMNR
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PHYMDR =   // PHYMDR
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_PHYMJR =   // PHYMJR
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_RIDR_UDRID =    // UDRID
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRPHYC_PIR_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_PIR_INIT = 0x1;           // INIT
    static constexpr uint32_t DDRPHYC_PIR_DLLSRST = 0x2;        // DLLSRST
    static constexpr uint32_t DDRPHYC_PIR_DLLLOCK = 0x4;        // DLLLOCK
    static constexpr uint32_t DDRPHYC_PIR_ZCAL = 0x8;           // ZCAL
    static constexpr uint32_t DDRPHYC_PIR_ITMSRST = 0x10;       // ITMSRST
    static constexpr uint32_t DDRPHYC_PIR_DRAMRST = 0x20;       // DRAMRST
    static constexpr uint32_t DDRPHYC_PIR_DRAMINIT = 0x40;      // DRAMINIT
    static constexpr uint32_t DDRPHYC_PIR_QSTRN = 0x80;         // QSTRN
    static constexpr uint32_t DDRPHYC_PIR_RVTRN = 0x100;        // RVTRN
    static constexpr uint32_t DDRPHYC_PIR_ICPC = 0x10000;       // ICPC
    static constexpr uint32_t DDRPHYC_PIR_DLLBYP = 0x20000;     // DLLBYP
    static constexpr uint32_t DDRPHYC_PIR_CTLDINIT = 0x40000;   // CTLDINIT
    static constexpr uint32_t DDRPHYC_PIR_CLRSR = 0x10000000;   // CLRSR
    static constexpr uint32_t DDRPHYC_PIR_LOCKBYP = 0x20000000; // LOCKBYP
    static constexpr uint32_t DDRPHYC_PIR_ZCALBYP = 0x40000000; // ZCALBYP
    static constexpr uint32_t DDRPHYC_PIR_INITBYP = 0x80000000; // INITBYP

    static constexpr uint32_t DDRPHYC_PGCR_RESET_VALUE = 0x1bc2e04;
    static constexpr uint32_t DDRPHYC_PGCR_ITMDMD = 0x1;        // ITMDMD
    static constexpr uint32_t DDRPHYC_PGCR_DQSCFG = 0x2;        // DQSCFG
    static constexpr uint32_t DDRPHYC_PGCR_DFTCMP = 0x4;        // DFTCMP
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_DFTLMT =             // DFTLMT
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_DTOSEL =             // DTOSEL
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_CKEN =               // CKEN
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_CKDV =               // CKDV
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_PGCR_CKINV = 0x4000;      // CKINV
    static constexpr uint32_t DDRPHYC_PGCR_IOLB = 0x8000;       // IOLB
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_IODDRM =             // IODDRM
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_RANKEN =             // RANKEN
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_ZKSEL =              // ZKSEL
        bit_field_t<22, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_PGCR_PDDISDX = 0x1000000; // PDDISDX
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PGCR_RFSHDT =             // RFSHDT
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_PGCR_LBDQSS = 0x20000000; // LBDQSS
    static constexpr uint32_t DDRPHYC_PGCR_LBGDQS = 0x40000000; // LBGDQS
    static constexpr uint32_t DDRPHYC_PGCR_LBMODE = 0x80000000; // LBMODE

    static constexpr uint32_t DDRPHYC_PGSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_PGSR_IDONE = 0x1;     // IDONE
    static constexpr uint32_t DDRPHYC_PGSR_DLDONE = 0x2;    // DLDONE
    static constexpr uint32_t DDRPHYC_PGSR_ZCDDONE = 0x4;   // ZCDDONE
    static constexpr uint32_t DDRPHYC_PGSR_DIDONE = 0x8;    // DIDONE
    static constexpr uint32_t DDRPHYC_PGSR_DTDONE = 0x10;   // DTDONE
    static constexpr uint32_t DDRPHYC_PGSR_DTERR = 0x20;    // DTERR
    static constexpr uint32_t DDRPHYC_PGSR_DTIERR = 0x40;   // DTIERR
    static constexpr uint32_t DDRPHYC_PGSR_DFTERR = 0x80;   // DFTERR
    static constexpr uint32_t DDRPHYC_PGSR_RVERR = 0x100;   // RVERR
    static constexpr uint32_t DDRPHYC_PGSR_RVEIRR = 0x200;  // RVEIRR
    static constexpr uint32_t DDRPHYC_PGSR_TQ = 0x80000000; // TQ

    static constexpr uint32_t DDRPHYC_DLLGCR_RESET_VALUE = 0x3737000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_DRES =                // DRES
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_IPUMP =               // IPUMP
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DLLGCR_TESTEN = 0x20;        // TESTEN
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_DTC =                 // DTC
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_ATC =                 // ATC
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DLLGCR_TESTSW = 0x800;       // TESTSW
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_MBIAS =               // MBIAS
        bit_field_t<12, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_SBIAS2_0 =            // SBIAS2_0
        bit_field_t<20, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DLLGCR_BPS200 = 0x800000;    // BPS200
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_SBIAS5_3 =            // SBIAS5_3
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_FDTRMSL =             // FDTRMSL
        bit_field_t<27, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DLLGCR_LOCKDET = 0x20000000; // LOCKDET
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DLLGCR_DLLRSVD2 =            // DLLRSVD2
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t DDRPHYC_ACDLLCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACDLLCR_MFBDLY =              // MFBDLY
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACDLLCR_MFWDLY =              // MFWDLY
        bit_field_t<9, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_ACDLLCR_ATESTEN = 0x40000;    // ATESTEN
    static constexpr uint32_t DDRPHYC_ACDLLCR_DLLSRST = 0x40000000; // DLLSRST
    static constexpr uint32_t DDRPHYC_ACDLLCR_DLLDIS = 0x80000000;  // DLLDIS

    static constexpr uint32_t DDRPHYC_PTR0_RESET_VALUE = 0x22af9b;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR0_TDLLSRST =   // TDLLSRST
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR0_TDLLLOCK =   // TDLLLOCK
        bit_field_t<6, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR0_TITMSRST =   // TITMSRST
        bit_field_t<18, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_PTR1_RESET_VALUE = 0x604111d;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR1_TDINIT0 =   // TDINIT0
        bit_field_t<0, 0x7ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR1_TDINIT1 =   // TDINIT1
        bit_field_t<19, 0xff>::value<X>();

    static constexpr uint32_t DDRPHYC_PTR2_RESET_VALUE = 0x42da072;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR2_TDINIT2 =   // TDINIT2
        bit_field_t<0, 0x1ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_PTR2_TDINIT3 =   // TDINIT3
        bit_field_t<17, 0x3ff>::value<X>();

    static constexpr uint32_t DDRPHYC_ACIOCR_RESET_VALUE = 0x33c03812;
    static constexpr uint32_t DDRPHYC_ACIOCR_ACIOM = 0x1;         // ACIOM
    static constexpr uint32_t DDRPHYC_ACIOCR_ACOE = 0x2;          // ACOE
    static constexpr uint32_t DDRPHYC_ACIOCR_ACODT = 0x4;         // ACODT
    static constexpr uint32_t DDRPHYC_ACIOCR_ACPDD = 0x8;         // ACPDD
    static constexpr uint32_t DDRPHYC_ACIOCR_ACPDR = 0x10;        // ACPDR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACIOCR_CKODT =              // CKODT
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACIOCR_CKPDD =              // CKPDD
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACIOCR_CKPDR =              // CKPDR
        bit_field_t<11, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_ACIOCR_RANKODT = 0x4000;    // RANKODT
    static constexpr uint32_t DDRPHYC_ACIOCR_CSPDD = 0x40000;     // CSPDD
    static constexpr uint32_t DDRPHYC_ACIOCR_RANKPDR = 0x400000;  // RANKPDR
    static constexpr uint32_t DDRPHYC_ACIOCR_RSTODT = 0x4000000;  // RSTODT
    static constexpr uint32_t DDRPHYC_ACIOCR_RSTPDD = 0x8000000;  // RSTPDD
    static constexpr uint32_t DDRPHYC_ACIOCR_RSTPDR = 0x10000000; // RSTPDR
    static constexpr uint32_t DDRPHYC_ACIOCR_RSTIOM = 0x20000000; // RSTIOM
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ACIOCR_ACSR =               // ACSR
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t DDRPHYC_DXCCR_RESET_VALUE = 0x800;
    static constexpr uint32_t DDRPHYC_DXCCR_DXODT = 0x1;      // DXODT
    static constexpr uint32_t DDRPHYC_DXCCR_DXIOM = 0x2;      // DXIOM
    static constexpr uint32_t DDRPHYC_DXCCR_DXPDD = 0x4;      // DXPDD
    static constexpr uint32_t DDRPHYC_DXCCR_DXPDR = 0x8;      // DXPDR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DXCCR_DQSRES =          // DQSRES
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DXCCR_DQSNRES =         // DQSNRES
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_DXCCR_DQSNRST = 0x4000; // DQSNRST
    static constexpr uint32_t DDRPHYC_DXCCR_RVSEL = 0x8000;   // RVSEL
    static constexpr uint32_t DDRPHYC_DXCCR_AWDT = 0x10000;   // AWDT

    static constexpr uint32_t DDRPHYC_DSGCR_RESET_VALUE = 0xfa00001f;
    static constexpr uint32_t DDRPHYC_DSGCR_PUREN = 0x1;        // PUREN
    static constexpr uint32_t DDRPHYC_DSGCR_BDISEN = 0x2;       // BDISEN
    static constexpr uint32_t DDRPHYC_DSGCR_ZUEN = 0x4;         // ZUEN
    static constexpr uint32_t DDRPHYC_DSGCR_LPIOPD = 0x8;       // LPIOPD
    static constexpr uint32_t DDRPHYC_DSGCR_LPDLLPD = 0x10;     // LPDLLPD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DSGCR_DQSGX =             // DQSGX
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DSGCR_DQSGE =             // DQSGE
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DSGCR_NOBUB = 0x800;      // NOBUB
    static constexpr uint32_t DDRPHYC_DSGCR_FXDLAT = 0x1000;    // FXDLAT
    static constexpr uint32_t DDRPHYC_DSGCR_CKEPDD = 0x10000;   // CKEPDD
    static constexpr uint32_t DDRPHYC_DSGCR_ODTPDD = 0x100000;  // ODTPDD
    static constexpr uint32_t DDRPHYC_DSGCR_NL2PD = 0x1000000;  // NL2PD
    static constexpr uint32_t DDRPHYC_DSGCR_NL2OE = 0x2000000;  // NL2OE
    static constexpr uint32_t DDRPHYC_DSGCR_TPDPD = 0x4000000;  // TPDPD
    static constexpr uint32_t DDRPHYC_DSGCR_TPDOE = 0x8000000;  // TPDOE
    static constexpr uint32_t DDRPHYC_DSGCR_CKOE = 0x10000000;  // CKOE
    static constexpr uint32_t DDRPHYC_DSGCR_ODTOE = 0x20000000; // ODTOE
    static constexpr uint32_t DDRPHYC_DSGCR_RSTOE = 0x40000000; // RSTOE
    static constexpr uint32_t DDRPHYC_DSGCR_CKEOE = 0x80000000; // CKEOE

    static constexpr uint32_t DDRPHYC_DCR_RESET_VALUE = 0xb;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DCR_DDRMD =             // DDRMD
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DCR_DDR8BNK = 0x8;      // DDR8BNK
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DCR_PDQ =               // PDQ
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DCR_MPRDQ = 0x80;       // MPRDQ
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DCR_DDRTYPE =           // DDRTYPE
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DCR_NOSRA = 0x8000000;  // NOSRA
    static constexpr uint32_t DDRPHYC_DCR_DDR2T = 0x10000000; // DDR2T
    static constexpr uint32_t DDRPHYC_DCR_UDIMM = 0x20000000; // UDIMM
    static constexpr uint32_t DDRPHYC_DCR_RDIMM = 0x40000000; // RDIMM
    static constexpr uint32_t DDRPHYC_DCR_TPD = 0x80000000;   // TPD

    static constexpr uint32_t DDRPHYC_DTPR0_RESET_VALUE = 0x3012666e;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TMRD =             // TMRD
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRTP =             // TRTP
        bit_field_t<2, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TWTR =             // TWTR
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRP =              // TRP
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRCD =             // TRCD
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRAS =             // TRAS
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRRD =             // TRRD
        bit_field_t<21, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR0_TRC =              // TRC
        bit_field_t<25, 0x3f>::value<X>();
    static constexpr uint32_t DDRPHYC_DTPR0_TCCD = 0x80000000; // TCCD

    static constexpr uint32_t DDRPHYC_DTPR1_RESET_VALUE = 0xa030090;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TAOND =         // TAOND
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DTPR1_TRTW = 0x4;     // TRTW
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TFAW =          // TFAW
        bit_field_t<3, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TMOD =          // TMOD
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DTPR1_TRTODT = 0x800; // TRTODT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TRFC =          // TRFC
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TDQSCKMIN =     // TDQSCKMIN
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR1_TDQSCKMAX =     // TDQSCKMAX
        bit_field_t<27, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DTPR2_RESET_VALUE = 0x20040d84;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR2_TXS =     // TXS
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR2_TXP =     // TXP
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR2_TCKE =    // TCKE
        bit_field_t<15, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTPR2_TDLLK =   // TDLLK
        bit_field_t<19, 0x3ff>::value<X>();

    static constexpr uint32_t DDRPHYC_DDR3_MR0_RESET_VALUE = 0xa52;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR0_BL =         // BL
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR0_CL0 = 0x4;   // CL0
    static constexpr uint32_t DDRPHYC_DDR3_MR0_BT = 0x8;    // BT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR0_CL =         // CL
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR0_TM = 0x80;   // TM
    static constexpr uint32_t DDRPHYC_DDR3_MR0_DR = 0x100;  // DR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR0_WR =         // WR
        bit_field_t<9, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR0_PD = 0x1000; // PD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR0_RSVD =       // RSVD
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DDR3_MR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DDR3_MR1_DE = 0x1;      // DE
    static constexpr uint32_t DDRPHYC_DDR3_MR1_DIC0 = 0x2;    // DIC0
    static constexpr uint32_t DDRPHYC_DDR3_MR1_RTT0 = 0x4;    // RTT0
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR1_AL =           // AL
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR1_DIC1 = 0x20;   // DIC1
    static constexpr uint32_t DDRPHYC_DDR3_MR1_RTT1 = 0x40;   // RTT1
    static constexpr uint32_t DDRPHYC_DDR3_MR1_LEVEL = 0x80;  // LEVEL
    static constexpr uint32_t DDRPHYC_DDR3_MR1_RTT2 = 0x200;  // RTT2
    static constexpr uint32_t DDRPHYC_DDR3_MR1_TDQS = 0x800;  // TDQS
    static constexpr uint32_t DDRPHYC_DDR3_MR1_QOFF = 0x1000; // QOFF

    static constexpr uint32_t DDRPHYC_DDR3_MR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR2_PASR =      // PASR
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR2_CWL =       // CWL
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR2_ASR = 0x40; // ASR
    static constexpr uint32_t DDRPHYC_DDR3_MR2_SRT = 0x80; // SRT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR2_RTTWR =     // RTTWR
        bit_field_t<9, 0x3>::value<X>();

    static constexpr uint32_t DDRPHYC_DDR3_MR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DDR3_MR3_MPRLOC =   // MPRLOC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DDR3_MR3_MPR = 0x4; // MPR

    static constexpr uint32_t DDRPHYC_ODTCR_RESET_VALUE = 0x84210000;
    static constexpr uint32_t DDRPHYC_ODTCR_RDODT = 0x1;     // RDODT
    static constexpr uint32_t DDRPHYC_ODTCR_WRODT = 0x10000; // WRODT

    static constexpr uint32_t DDRPHYC_DTAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTAR_DTCOL =             // DTCOL
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTAR_DTROW =             // DTROW
        bit_field_t<12, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTAR_DTBANK =            // DTBANK
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t DDRPHYC_DTAR_DTMPR = 0x80000000; // DTMPR

    static constexpr uint32_t DDRPHYC_DTDR0_RESET_VALUE = 0xdd22ee11;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR0_DTBYTE0 =   // DTBYTE0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR0_DTBYTE1 =   // DTBYTE1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR0_DTBYTE2 =   // DTBYTE2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR0_DTBYTE3 =   // DTBYTE3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRPHYC_DTDR1_RESET_VALUE = 0x7788bb44;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR1_DTBYTE4 =   // DTBYTE4
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR1_DTBYTE5 =   // DTBYTE5
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR1_DTBYTE6 =   // DTBYTE6
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DTDR1_DTBYTE7 =   // DTBYTE7
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRPHYC_GPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPHYC_GPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t DDRPHYC_ZQ0CR0_RESET_VALUE = 0x14a;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0CR0_ZDATA =               // ZDATA
        bit_field_t<0, 0xfffff>::value<X>();
    static constexpr uint32_t DDRPHYC_ZQ0CR0_ZDEN = 0x10000000;    // ZDEN
    static constexpr uint32_t DDRPHYC_ZQ0CR0_ZCALBYP = 0x20000000; // ZCALBYP
    static constexpr uint32_t DDRPHYC_ZQ0CR0_ZCAL = 0x40000000;    // ZCAL
    static constexpr uint32_t DDRPHYC_ZQ0CR0_ZQPD = 0x80000000;    // ZQPD

    static constexpr uint32_t DDRPHYC_ZQ0CR1_RESET_VALUE = 0x7b;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0CR1_ZPROG =   // ZPROG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DDRPHYC_ZQ0SR0_RESET_VALUE = 0x14a;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0SR0_ZCTRL =             // ZCTRL
        bit_field_t<0, 0xfffff>::value<X>();
    static constexpr uint32_t DDRPHYC_ZQ0SR0_ZERR = 0x40000000;  // ZERR
    static constexpr uint32_t DDRPHYC_ZQ0SR0_ZDONE = 0x80000000; // ZDONE

    static constexpr uint32_t DDRPHYC_ZQ0SR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0SR1_ZPD =   // ZPD
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0SR1_ZPU =   // ZPU
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0SR1_OPD =   // OPD
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_ZQ0SR1_OPU =   // OPU
        bit_field_t<6, 0x3>::value<X>();

    static constexpr uint32_t DDRPHYC_DX0GCR_RESET_VALUE = 0xee81;
    static constexpr uint32_t DDRPHYC_DX0GCR_DXEN = 0x1;      // DXEN
    static constexpr uint32_t DDRPHYC_DX0GCR_DQSODT = 0x2;    // DQSODT
    static constexpr uint32_t DDRPHYC_DX0GCR_DQODT = 0x4;     // DQODT
    static constexpr uint32_t DDRPHYC_DX0GCR_DXIOM = 0x8;     // DXIOM
    static constexpr uint32_t DDRPHYC_DX0GCR_DXPDD = 0x10;    // DXPDD
    static constexpr uint32_t DDRPHYC_DX0GCR_DXPDR = 0x20;    // DXPDR
    static constexpr uint32_t DDRPHYC_DX0GCR_DQSRPD = 0x40;   // DQSRPD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GCR_DSEN =           // DSEN
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX0GCR_DQSRTT = 0x200;  // DQSRTT
    static constexpr uint32_t DDRPHYC_DX0GCR_DQRTT = 0x400;   // DQRTT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GCR_RTTOH =          // RTTOH
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX0GCR_RTTOAL = 0x2000; // RTTOAL
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GCR_R0RVSL =         // R0RVSL
        bit_field_t<14, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX0GSR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX0GSR0_DTDONE = 0x1;   // DTDONE
    static constexpr uint32_t DDRPHYC_DX0GSR0_DTERR = 0x10;   // DTERR
    static constexpr uint32_t DDRPHYC_DX0GSR0_DTIERR = 0x100; // DTIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GSR0_DTPASS =        // DTPASS
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX0GSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX0GSR1_DFTERR = 0x1;     // DFTERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GSR1_DQSDFT =          // DQSDFT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX0GSR1_RVERR = 0x1000;   // RVERR
    static constexpr uint32_t DDRPHYC_DX0GSR1_RVIERR = 0x10000; // RVIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0GSR1_RVPASS =          // RVPASS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX0DLLCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_SFBDLY =              // SFBDLY
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_SFWDLY =              // SFWDLY
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_MFBDLY =              // MFBDLY
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_MFWDLY =              // MFWDLY
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_SSTART =              // SSTART
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DLLCR_SDPHASE =             // SDPHASE
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_DX0DLLCR_ATESTEN = 0x40000;    // ATESTEN
    static constexpr uint32_t DDRPHYC_DX0DLLCR_SDLBMODE = 0x80000;   // SDLBMODE
    static constexpr uint32_t DDRPHYC_DX0DLLCR_DLLSRST = 0x40000000; // DLLSRST
    static constexpr uint32_t DDRPHYC_DX0DLLCR_DLLDIS = 0x80000000;  // DLLDIS

    static constexpr uint32_t DDRPHYC_DX0DQTR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY0 =   // DQDLY0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY1 =   // DQDLY1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY2 =   // DQDLY2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY3 =   // DQDLY3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY4 =   // DQDLY4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY5 =   // DQDLY5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY6 =   // DQDLY6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQTR_DQDLY7 =   // DQDLY7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX0DQSTR_RESET_VALUE = 0x3db02000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQSTR_R0DGSL =    // R0DGSL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQSTR_R0DGPS =    // R0DGPS
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQSTR_DQSDLY =    // DQSDLY
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQSTR_DQSNDLY =   // DQSNDLY
        bit_field_t<23, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX0DQSTR_DMDLY =     // DMDLY
        bit_field_t<26, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX1GCR_RESET_VALUE = 0xee81;
    static constexpr uint32_t DDRPHYC_DX1GCR_DXEN = 0x1;      // DXEN
    static constexpr uint32_t DDRPHYC_DX1GCR_DQSODT = 0x2;    // DQSODT
    static constexpr uint32_t DDRPHYC_DX1GCR_DQODT = 0x4;     // DQODT
    static constexpr uint32_t DDRPHYC_DX1GCR_DXIOM = 0x8;     // DXIOM
    static constexpr uint32_t DDRPHYC_DX1GCR_DXPDD = 0x10;    // DXPDD
    static constexpr uint32_t DDRPHYC_DX1GCR_DXPDR = 0x20;    // DXPDR
    static constexpr uint32_t DDRPHYC_DX1GCR_DQSRPD = 0x40;   // DQSRPD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GCR_DSEN =           // DSEN
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX1GCR_DQSRTT = 0x200;  // DQSRTT
    static constexpr uint32_t DDRPHYC_DX1GCR_DQRTT = 0x400;   // DQRTT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GCR_RTTOH =          // RTTOH
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX1GCR_RTTOAL = 0x2000; // RTTOAL
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GCR_R0RVSL =         // R0RVSL
        bit_field_t<14, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX1GSR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX1GSR0_DTDONE = 0x1;   // DTDONE
    static constexpr uint32_t DDRPHYC_DX1GSR0_DTERR = 0x10;   // DTERR
    static constexpr uint32_t DDRPHYC_DX1GSR0_DTIERR = 0x100; // DTIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GSR0_DTPASS =        // DTPASS
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX1GSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX1GSR1_DFTERR = 0x1;     // DFTERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GSR1_DQSDFT =          // DQSDFT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX1GSR1_RVERR = 0x1000;   // RVERR
    static constexpr uint32_t DDRPHYC_DX1GSR1_RVIERR = 0x10000; // RVIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1GSR1_RVPASS =          // RVPASS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX1DLLCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_SFBDLY =              // SFBDLY
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_SFWDLY =              // SFWDLY
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_MFBDLY =              // MFBDLY
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_MFWDLY =              // MFWDLY
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_SSTART =              // SSTART
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DLLCR_SDPHASE =             // SDPHASE
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_DX1DLLCR_ATESTEN = 0x40000;    // ATESTEN
    static constexpr uint32_t DDRPHYC_DX1DLLCR_SDLBMODE = 0x80000;   // SDLBMODE
    static constexpr uint32_t DDRPHYC_DX1DLLCR_DLLSRST = 0x40000000; // DLLSRST
    static constexpr uint32_t DDRPHYC_DX1DLLCR_DLLDIS = 0x80000000;  // DLLDIS

    static constexpr uint32_t DDRPHYC_DX1DQTR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY0 =   // DQDLY0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY1 =   // DQDLY1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY2 =   // DQDLY2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY3 =   // DQDLY3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY4 =   // DQDLY4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY5 =   // DQDLY5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY6 =   // DQDLY6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQTR_DQDLY7 =   // DQDLY7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX1DQSTR_RESET_VALUE = 0x3db02000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQSTR_R0DGSL =    // R0DGSL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQSTR_R0DGPS =    // R0DGPS
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQSTR_DQSDLY =    // DQSDLY
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQSTR_DQSNDLY =   // DQSNDLY
        bit_field_t<23, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX1DQSTR_DMDLY =     // DMDLY
        bit_field_t<26, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX2GCR_RESET_VALUE = 0xee81;
    static constexpr uint32_t DDRPHYC_DX2GCR_DXEN = 0x1;      // DXEN
    static constexpr uint32_t DDRPHYC_DX2GCR_DQSODT = 0x2;    // DQSODT
    static constexpr uint32_t DDRPHYC_DX2GCR_DQODT = 0x4;     // DQODT
    static constexpr uint32_t DDRPHYC_DX2GCR_DXIOM = 0x8;     // DXIOM
    static constexpr uint32_t DDRPHYC_DX2GCR_DXPDD = 0x10;    // DXPDD
    static constexpr uint32_t DDRPHYC_DX2GCR_DXPDR = 0x20;    // DXPDR
    static constexpr uint32_t DDRPHYC_DX2GCR_DQSRPD = 0x40;   // DQSRPD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GCR_DSEN =           // DSEN
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX2GCR_DQSRTT = 0x200;  // DQSRTT
    static constexpr uint32_t DDRPHYC_DX2GCR_DQRTT = 0x400;   // DQRTT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GCR_RTTOH =          // RTTOH
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX2GCR_RTTOAL = 0x2000; // RTTOAL
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GCR_R0RVSL =         // R0RVSL
        bit_field_t<14, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX2GSR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX2GSR0_DTDONE = 0x1;   // DTDONE
    static constexpr uint32_t DDRPHYC_DX2GSR0_DTERR = 0x10;   // DTERR
    static constexpr uint32_t DDRPHYC_DX2GSR0_DTIERR = 0x100; // DTIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GSR0_DTPASS =        // DTPASS
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX2GSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX2GSR1_DFTERR = 0x1;     // DFTERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GSR1_DQSDFT =          // DQSDFT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX2GSR1_RVERR = 0x1000;   // RVERR
    static constexpr uint32_t DDRPHYC_DX2GSR1_RVIERR = 0x10000; // RVIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2GSR1_RVPASS =          // RVPASS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX2DLLCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_SFBDLY =              // SFBDLY
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_SFWDLY =              // SFWDLY
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_MFBDLY =              // MFBDLY
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_MFWDLY =              // MFWDLY
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_SSTART =              // SSTART
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DLLCR_SDPHASE =             // SDPHASE
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_DX2DLLCR_ATESTEN = 0x40000;    // ATESTEN
    static constexpr uint32_t DDRPHYC_DX2DLLCR_SDLBMODE = 0x80000;   // SDLBMODE
    static constexpr uint32_t DDRPHYC_DX2DLLCR_DLLSRST = 0x40000000; // DLLSRST
    static constexpr uint32_t DDRPHYC_DX2DLLCR_DLLDIS = 0x80000000;  // DLLDIS

    static constexpr uint32_t DDRPHYC_DX2DQTR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY0 =   // DQDLY0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY1 =   // DQDLY1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY2 =   // DQDLY2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY3 =   // DQDLY3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY4 =   // DQDLY4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY5 =   // DQDLY5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY6 =   // DQDLY6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQTR_DQDLY7 =   // DQDLY7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX2DQSTR_RESET_VALUE = 0x3db02000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQSTR_R0DGSL =    // R0DGSL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQSTR_R0DGPS =    // R0DGPS
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQSTR_DQSDLY =    // DQSDLY
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQSTR_DQSNDLY =   // DQSNDLY
        bit_field_t<23, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX2DQSTR_DMDLY =     // DMDLY
        bit_field_t<26, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX3GCR_RESET_VALUE = 0xee81;
    static constexpr uint32_t DDRPHYC_DX3GCR_DXEN = 0x1;      // DXEN
    static constexpr uint32_t DDRPHYC_DX3GCR_DQSODT = 0x2;    // DQSODT
    static constexpr uint32_t DDRPHYC_DX3GCR_DQODT = 0x4;     // DQODT
    static constexpr uint32_t DDRPHYC_DX3GCR_DXIOM = 0x8;     // DXIOM
    static constexpr uint32_t DDRPHYC_DX3GCR_DXPDD = 0x10;    // DXPDD
    static constexpr uint32_t DDRPHYC_DX3GCR_DXPDR = 0x20;    // DXPDR
    static constexpr uint32_t DDRPHYC_DX3GCR_DQSRPD = 0x40;   // DQSRPD
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GCR_DSEN =           // DSEN
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX3GCR_DQSRTT = 0x200;  // DQSRTT
    static constexpr uint32_t DDRPHYC_DX3GCR_DQRTT = 0x400;   // DQRTT
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GCR_RTTOH =          // RTTOH
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX3GCR_RTTOAL = 0x2000; // RTTOAL
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GCR_R0RVSL =         // R0RVSL
        bit_field_t<14, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX3GSR0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX3GSR0_DTDONE = 0x1;   // DTDONE
    static constexpr uint32_t DDRPHYC_DX3GSR0_DTERR = 0x10;   // DTERR
    static constexpr uint32_t DDRPHYC_DX3GSR0_DTIERR = 0x100; // DTIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GSR0_DTPASS =        // DTPASS
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX3GSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRPHYC_DX3GSR1_DFTERR = 0x1;     // DFTERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GSR1_DQSDFT =          // DQSDFT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t DDRPHYC_DX3GSR1_RVERR = 0x1000;   // RVERR
    static constexpr uint32_t DDRPHYC_DX3GSR1_RVIERR = 0x10000; // RVIERR
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3GSR1_RVPASS =          // RVPASS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t DDRPHYC_DX3DLLCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_SFBDLY =              // SFBDLY
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_SFWDLY =              // SFWDLY
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_MFBDLY =              // MFBDLY
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_MFWDLY =              // MFWDLY
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_SSTART =              // SSTART
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DLLCR_SDPHASE =             // SDPHASE
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t DDRPHYC_DX3DLLCR_ATESTEN = 0x40000;    // ATESTEN
    static constexpr uint32_t DDRPHYC_DX3DLLCR_SDLBMODE = 0x80000;   // SDLBMODE
    static constexpr uint32_t DDRPHYC_DX3DLLCR_DLLSRST = 0x40000000; // DLLSRST
    static constexpr uint32_t DDRPHYC_DX3DLLCR_DLLDIS = 0x80000000;  // DLLDIS

    static constexpr uint32_t DDRPHYC_DX3DQTR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY0 =   // DQDLY0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY1 =   // DQDLY1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY2 =   // DQDLY2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY3 =   // DQDLY3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY4 =   // DQDLY4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY5 =   // DQDLY5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY6 =   // DQDLY6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQTR_DQDLY7 =   // DQDLY7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t DDRPHYC_DX3DQSTR_RESET_VALUE = 0x3db02000;
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQSTR_R0DGSL =    // R0DGSL
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQSTR_R0DGPS =    // R0DGPS
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQSTR_DQSDLY =    // DQSDLY
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQSTR_DQSNDLY =   // DQSNDLY
        bit_field_t<23, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRPHYC_DX3DQSTR_DMDLY =     // DMDLY
        bit_field_t<26, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, DDRPHYC>
{
    typedef stm32mp15xxx_ddrphyc_t T;
    static T& V;
};

using ddrphyc_t = peripheral_t<mcu_svd, DDRPHYC>;

