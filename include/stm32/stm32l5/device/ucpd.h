#pragma once

////
//
//      STM32L5 UCPD peripherals
//
////

////
//
//      USB Power Delivery interface
//
////

struct stm32l552_ucpd1_t
{
    volatile uint32_t CFG1;       // [read-write] UCPD configuration register
    volatile uint32_t CFG2;       // [read-write] UCPD configuration register 2
    volatile uint32_t CFG3;       // [read-write] UCPD configuration register 3
    volatile uint32_t CR;         // [read-write] UCPD control register
    volatile uint32_t IMR;        // [read-write] UCPD Interrupt Mask Register
    volatile uint32_t SR;         // [read-only] UCPD Status Register
    volatile uint32_t ICR;        // [read-write] UCPD Interrupt Clear Register
    volatile uint32_t TX_ORDSET;  // [read-write] UCPD Tx Ordered Set Type Register
    volatile uint32_t TX_PAYSZ;   // [read-write] UCPD Tx Paysize Register
    volatile uint32_t TXDR;       // [read-write] UCPD Tx Data Register
    volatile uint32_t RX_ORDSET;  // [read-only] UCPD Rx Ordered Set Register
    volatile uint32_t RX_PAYSZ;   // [read-only] UCPD Rx Paysize Register
    volatile uint32_t RXDR;       // [read-only] UCPD Receive Data Register
    volatile uint32_t RX_ORDEXT1; // [read-write] UCPD Rx Ordered Set Extension Register
    volatile uint32_t RX_ORDEXT2; // [read-write] UCPD Rx Ordered Set Extension Register

    static constexpr uint32_t CFG1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFG1_HBITCLKDIV =          // HBITCLKDIV
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG1_IFRGAP =              // IFRGAP
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG1_TRANSWIN =            // TRANSWIN
        bit_field_t<11, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG1_PSC_USBPDCLK =        // PSC_USBPDCLK
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG1_RXORDSETEN =          // RXORDSETEN
        bit_field_t<20, 0x1ff>::value<X>();
    static constexpr uint32_t CFG1_TXDMAEN = 0x20000000; // TXDMAEN
    static constexpr uint32_t CFG1_RXDMAEN = 0x40000000; // RXDMAEN:
    static constexpr uint32_t CFG1_UCPDEN = 0x80000000;  // UCPDEN

    static constexpr uint32_t CFG2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFG2_RXFILTDIS = 0x1; // RXFILTDIS
    static constexpr uint32_t CFG2_RXFILT2N3 = 0x2; // RXFILT2N3
    static constexpr uint32_t CFG2_FORCECLK = 0x4;  // FORCECLK
    static constexpr uint32_t CFG2_WUPEN = 0x8;     // WUPEN

    static constexpr uint32_t CFG3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM1_NG_CCRPD =   // TRIM1_NG_CCRPD
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM1_NG_CC1A5 =   // TRIM1_NG_CC1A5
        bit_field_t<4, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM1_NG_CC3A0 =   // TRIM1_NG_CC3A0
        bit_field_t<9, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM2_NG_CCRPD =   // TRIM2_NG_CCRPD
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM2_NG_CC1A5 =   // TRIM2_NG_CC1A5
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFG3_TRIM2_NG_CC3A0 =   // TRIM2_NG_CC3A0
        bit_field_t<25, 0xf>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_TXMODE =             // TXMODE
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CR_TXSEND = 0x4;        // TXSEND
    static constexpr uint32_t CR_TXHRST = 0x8;        // TXHRST
    static constexpr uint32_t CR_RXMODE = 0x10;       // RXMODE
    static constexpr uint32_t CR_PHYRXEN = 0x20;      // PHYRXEN
    static constexpr uint32_t CR_PHYCCSEL = 0x40;     // PHYCCSEL
    template<uint32_t X>
    static constexpr uint32_t CR_ANASUBMODE =         // ANASUBMODE
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t CR_ANAMODE = 0x200;     // ANAMODE
    template<uint32_t X>
    static constexpr uint32_t CR_CCENABLE =           // CCENABLE
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t CR_FRSRXEN = 0x10000;   // FRSRXEN
    static constexpr uint32_t CR_FRSTX = 0x20000;     // FRSTX
    static constexpr uint32_t CR_RDCH = 0x40000;      // RDCH
    static constexpr uint32_t CR_CC1TCDIS = 0x100000; // CC1TCDIS
    static constexpr uint32_t CR_CC2TCDIS = 0x200000; // CC2TCDIS

    static constexpr uint32_t IMR_RESET_VALUE = 0x0;
    static constexpr uint32_t IMR_TXISIE = 0x1;         // TXISIE
    static constexpr uint32_t IMR_TXMSGDISCIE = 0x2;    // TXMSGDISCIE
    static constexpr uint32_t IMR_TXMSGSENTIE = 0x4;    // TXMSGSENTIE
    static constexpr uint32_t IMR_TXMSGABTIE = 0x8;     // TXMSGABTIE
    static constexpr uint32_t IMR_HRSTDISCIE = 0x10;    // HRSTDISCIE
    static constexpr uint32_t IMR_HRSTSENTIE = 0x20;    // HRSTSENTIE
    static constexpr uint32_t IMR_TXUNDIE = 0x40;       // TXUNDIE
    static constexpr uint32_t IMR_RXNEIE = 0x100;       // RXNEIE
    static constexpr uint32_t IMR_RXORDDETIE = 0x200;   // RXORDDETIE
    static constexpr uint32_t IMR_RXHRSTDETIE = 0x400;  // RXHRSTDETIE
    static constexpr uint32_t IMR_RXOVRIE = 0x800;      // RXOVRIE
    static constexpr uint32_t IMR_RXMSGENDIE = 0x1000;  // RXMSGENDIE
    static constexpr uint32_t IMR_TYPECEVT1IE = 0x4000; // TYPECEVT1IE
    static constexpr uint32_t IMR_TYPECEVT2IE = 0x8000; // TYPECEVT2IE
    static constexpr uint32_t IMR_FRSEVTIE = 0x100000;  // FRSEVTIE

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TXIS = 0x1;          // TXIS
    static constexpr uint32_t SR_TXMSGDISC = 0x2;     // TXMSGDISC
    static constexpr uint32_t SR_TXMSGSENT = 0x4;     // TXMSGSENT
    static constexpr uint32_t SR_TXMSGABT = 0x8;      // TXMSGABT
    static constexpr uint32_t SR_HRSTDISC = 0x10;     // HRSTDISC
    static constexpr uint32_t SR_HRSTSENT = 0x20;     // HRSTSENT
    static constexpr uint32_t SR_TXUND = 0x40;        // TXUND
    static constexpr uint32_t SR_RXNE = 0x100;        // RXNE
    static constexpr uint32_t SR_RXORDDET = 0x200;    // RXORDDET
    static constexpr uint32_t SR_RXHRSTDET = 0x400;   // RXHRSTDET
    static constexpr uint32_t SR_RXOVR = 0x800;       // RXOVR
    static constexpr uint32_t SR_RXMSGEND = 0x1000;   // RXMSGEND
    static constexpr uint32_t SR_RXERR = 0x2000;      // RXERR
    static constexpr uint32_t SR_TYPECEVT1 = 0x4000;  // TYPECEVT1
    static constexpr uint32_t SR_TYPECEVT2 = 0x8000;  // TYPECEVT2
    template<uint32_t X>
    static constexpr uint32_t SR_TYPEC_VSTATE_CC1 =   // TYPEC_VSTATE_CC1
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SR_TYPEC_VSTATE_CC2 =   // TYPEC_VSTATE_CC2
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t SR_FRSEVT = 0x100000;   // FRSEVT

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_TXMSGDISCCF = 0x2;    // TXMSGDISCCF
    static constexpr uint32_t ICR_TXMSGSENTCF = 0x4;    // TXMSGSENTCF
    static constexpr uint32_t ICR_TXMSGABTCF = 0x8;     // TXMSGABTCF
    static constexpr uint32_t ICR_HRSTDISCCF = 0x10;    // HRSTDISCCF
    static constexpr uint32_t ICR_HRSTSENTCF = 0x20;    // HRSTSENTCF
    static constexpr uint32_t ICR_TXUNDCF = 0x40;       // TXUNDCF
    static constexpr uint32_t ICR_RXORDDETCF = 0x200;   // RXORDDETCF
    static constexpr uint32_t ICR_RXHRSTDETCF = 0x400;  // RXHRSTDETCF
    static constexpr uint32_t ICR_RXOVRCF = 0x800;      // RXOVRCF
    static constexpr uint32_t ICR_RXMSGENDCF = 0x1000;  // RXMSGENDCF
    static constexpr uint32_t ICR_TYPECEVT1CF = 0x4000; // TYPECEVT1CF
    static constexpr uint32_t ICR_TYPECEVT2CF = 0x8000; // TYPECEVT2CF
    static constexpr uint32_t ICR_FRSEVTCF = 0x100000;  // FRSEVTCF

    static constexpr uint32_t TX_ORDSET_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TX_ORDSET_TXORDSET =   // TXORDSET
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t TX_PAYSZ_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TX_PAYSZ_TXPAYSZ =   // TXPAYSZ
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXDR_TXDATA =   // TXDATA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RX_ORDSET_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RX_ORDSET_RXORDSET =        // RXORDSET
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RX_ORDSET_RXSOP3OF4 = 0x8;  // RXSOP3OF4
    template<uint32_t X>
    static constexpr uint32_t RX_ORDSET_RXSOPKINVALID =   // RXSOPKINVALID
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t RX_PAYSZ_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RX_PAYSZ_RXPAYSZ =   // RXPAYSZ
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXDR_RXDATA =   // RXDATA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RX_ORDEXT1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RX_ORDEXT1_RXSOPX1 =   // RXSOPX1
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t RX_ORDEXT2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RX_ORDEXT2_RXSOPX2 =   // RXSOPX2
        bit_field_t<0, 0xfffff>::value<X>();
};


template<>
struct peripheral_t<STM32L552, UCPD1>
{
    typedef stm32l552_ucpd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_UCPD1>
{
    typedef stm32l552_ucpd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, UCPD1>
{
    typedef stm32l552_ucpd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_UCPD1>
{
    typedef stm32l552_ucpd1_t T;
    static T& V;
};

using sec_ucpd1_t = peripheral_t<mcu_svd, SEC_UCPD1>;
using ucpd1_t = peripheral_t<mcu_svd, UCPD1>;

