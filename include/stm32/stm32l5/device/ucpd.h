#pragma once

////
//
//      STM32L5 UCPD peripherals
//
///

// UCPD1: USB Power Delivery interface

struct stm32l552_ucpd1_t
{
    volatile uint32_t CFG1; // UCPD configuration register
    volatile uint32_t CFG2; // UCPD configuration register 2
    volatile uint32_t CFG3; // UCPD configuration register 3
    volatile uint32_t CR; // UCPD control register
    volatile uint32_t IMR; // UCPD Interrupt Mask Register
    volatile uint32_t SR; // UCPD Status Register
    volatile uint32_t ICR; // UCPD Interrupt Clear Register
    volatile uint32_t TX_ORDSET; // UCPD Tx Ordered Set Type Register
    volatile uint32_t TX_PAYSZ; // UCPD Tx Paysize Register
    volatile uint32_t TXDR; // UCPD Tx Data Register
    volatile uint32_t RX_ORDSET; // UCPD Rx Ordered Set Register
    volatile uint32_t RX_PAYSZ; // UCPD Rx Paysize Register
    volatile uint32_t RXDR; // UCPD Receive Data Register
    volatile uint32_t RX_ORDEXT1; // UCPD Rx Ordered Set Extension Register
    volatile uint32_t RX_ORDEXT2; // UCPD Rx Ordered Set Extension Register

    static constexpr uint32_t CFG1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CFG1_HBITCLKDIV; // HBITCLKDIV
    typedef bit_field_t<6, 0x1f> CFG1_IFRGAP; // IFRGAP
    typedef bit_field_t<11, 0x1f> CFG1_TRANSWIN; // TRANSWIN
    typedef bit_field_t<17, 0x7> CFG1_PSC_USBPDCLK; // PSC_USBPDCLK
    typedef bit_field_t<20, 0x1ff> CFG1_RXORDSETEN; // RXORDSETEN
    static constexpr uint32_t CFG1_TXDMAEN = 0x20000000; // TXDMAEN
    static constexpr uint32_t CFG1_RXDMAEN = 0x40000000; // RXDMAEN:
    static constexpr uint32_t CFG1_UCPDEN = 0x80000000; // UCPDEN

    static constexpr uint32_t CFG2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFG2_RXFILTDIS = 0x1; // RXFILTDIS
    static constexpr uint32_t CFG2_RXFILT2N3 = 0x2; // RXFILT2N3
    static constexpr uint32_t CFG2_FORCECLK = 0x4; // FORCECLK
    static constexpr uint32_t CFG2_WUPEN = 0x8; // WUPEN

    static constexpr uint32_t CFG3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFG3_TRIM1_NG_CCRPD; // TRIM1_NG_CCRPD
    typedef bit_field_t<4, 0x1f> CFG3_TRIM1_NG_CC1A5; // TRIM1_NG_CC1A5
    typedef bit_field_t<9, 0xf> CFG3_TRIM1_NG_CC3A0; // TRIM1_NG_CC3A0
    typedef bit_field_t<16, 0xf> CFG3_TRIM2_NG_CCRPD; // TRIM2_NG_CCRPD
    typedef bit_field_t<20, 0x1f> CFG3_TRIM2_NG_CC1A5; // TRIM2_NG_CC1A5
    typedef bit_field_t<25, 0xf> CFG3_TRIM2_NG_CC3A0; // TRIM2_NG_CC3A0

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CR_TXMODE; // TXMODE
    static constexpr uint32_t CR_TXSEND = 0x4; // TXSEND
    static constexpr uint32_t CR_TXHRST = 0x8; // TXHRST
    static constexpr uint32_t CR_RXMODE = 0x10; // RXMODE
    static constexpr uint32_t CR_PHYRXEN = 0x20; // PHYRXEN
    static constexpr uint32_t CR_PHYCCSEL = 0x40; // PHYCCSEL
    typedef bit_field_t<7, 0x3> CR_ANASUBMODE; // ANASUBMODE
    static constexpr uint32_t CR_ANAMODE = 0x200; // ANAMODE
    typedef bit_field_t<10, 0x3> CR_CCENABLE; // CCENABLE
    static constexpr uint32_t CR_FRSRXEN = 0x10000; // FRSRXEN
    static constexpr uint32_t CR_FRSTX = 0x20000; // FRSTX
    static constexpr uint32_t CR_RDCH = 0x40000; // RDCH
    static constexpr uint32_t CR_CC1TCDIS = 0x100000; // CC1TCDIS
    static constexpr uint32_t CR_CC2TCDIS = 0x200000; // CC2TCDIS

    static constexpr uint32_t IMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR_TXISIE = 0x1; // TXISIE
    static constexpr uint32_t IMR_TXMSGDISCIE = 0x2; // TXMSGDISCIE
    static constexpr uint32_t IMR_TXMSGSENTIE = 0x4; // TXMSGSENTIE
    static constexpr uint32_t IMR_TXMSGABTIE = 0x8; // TXMSGABTIE
    static constexpr uint32_t IMR_HRSTDISCIE = 0x10; // HRSTDISCIE
    static constexpr uint32_t IMR_HRSTSENTIE = 0x20; // HRSTSENTIE
    static constexpr uint32_t IMR_TXUNDIE = 0x40; // TXUNDIE
    static constexpr uint32_t IMR_RXNEIE = 0x100; // RXNEIE
    static constexpr uint32_t IMR_RXORDDETIE = 0x200; // RXORDDETIE
    static constexpr uint32_t IMR_RXHRSTDETIE = 0x400; // RXHRSTDETIE
    static constexpr uint32_t IMR_RXOVRIE = 0x800; // RXOVRIE
    static constexpr uint32_t IMR_RXMSGENDIE = 0x1000; // RXMSGENDIE
    static constexpr uint32_t IMR_TYPECEVT1IE = 0x4000; // TYPECEVT1IE
    static constexpr uint32_t IMR_TYPECEVT2IE = 0x8000; // TYPECEVT2IE
    static constexpr uint32_t IMR_FRSEVTIE = 0x100000; // FRSEVTIE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TXIS = 0x1; // TXIS
    static constexpr uint32_t SR_TXMSGDISC = 0x2; // TXMSGDISC
    static constexpr uint32_t SR_TXMSGSENT = 0x4; // TXMSGSENT
    static constexpr uint32_t SR_TXMSGABT = 0x8; // TXMSGABT
    static constexpr uint32_t SR_HRSTDISC = 0x10; // HRSTDISC
    static constexpr uint32_t SR_HRSTSENT = 0x20; // HRSTSENT
    static constexpr uint32_t SR_TXUND = 0x40; // TXUND
    static constexpr uint32_t SR_RXNE = 0x100; // RXNE
    static constexpr uint32_t SR_RXORDDET = 0x200; // RXORDDET
    static constexpr uint32_t SR_RXHRSTDET = 0x400; // RXHRSTDET
    static constexpr uint32_t SR_RXOVR = 0x800; // RXOVR
    static constexpr uint32_t SR_RXMSGEND = 0x1000; // RXMSGEND
    static constexpr uint32_t SR_RXERR = 0x2000; // RXERR
    static constexpr uint32_t SR_TYPECEVT1 = 0x4000; // TYPECEVT1
    static constexpr uint32_t SR_TYPECEVT2 = 0x8000; // TYPECEVT2
    typedef bit_field_t<16, 0x3> SR_TYPEC_VSTATE_CC1; // TYPEC_VSTATE_CC1
    typedef bit_field_t<18, 0x3> SR_TYPEC_VSTATE_CC2; // TYPEC_VSTATE_CC2
    static constexpr uint32_t SR_FRSEVT = 0x100000; // FRSEVT

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_TXMSGDISCCF = 0x2; // TXMSGDISCCF
    static constexpr uint32_t ICR_TXMSGSENTCF = 0x4; // TXMSGSENTCF
    static constexpr uint32_t ICR_TXMSGABTCF = 0x8; // TXMSGABTCF
    static constexpr uint32_t ICR_HRSTDISCCF = 0x10; // HRSTDISCCF
    static constexpr uint32_t ICR_HRSTSENTCF = 0x20; // HRSTSENTCF
    static constexpr uint32_t ICR_TXUNDCF = 0x40; // TXUNDCF
    static constexpr uint32_t ICR_RXORDDETCF = 0x200; // RXORDDETCF
    static constexpr uint32_t ICR_RXHRSTDETCF = 0x400; // RXHRSTDETCF
    static constexpr uint32_t ICR_RXOVRCF = 0x800; // RXOVRCF
    static constexpr uint32_t ICR_RXMSGENDCF = 0x1000; // RXMSGENDCF
    static constexpr uint32_t ICR_TYPECEVT1CF = 0x4000; // TYPECEVT1CF
    static constexpr uint32_t ICR_TYPECEVT2CF = 0x8000; // TYPECEVT2CF
    static constexpr uint32_t ICR_FRSEVTCF = 0x100000; // FRSEVTCF

    static constexpr uint32_t TX_ORDSET_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TX_ORDSET_TXORDSET; // TXORDSET

    static constexpr uint32_t TX_PAYSZ_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> TX_PAYSZ_TXPAYSZ; // TXPAYSZ

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // TXDATA

    static constexpr uint32_t RX_ORDSET_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> RX_ORDSET_RXORDSET; // RXORDSET
    static constexpr uint32_t RX_ORDSET_RXSOP3OF4 = 0x8; // RXSOP3OF4
    typedef bit_field_t<4, 0x7> RX_ORDSET_RXSOPKINVALID; // RXSOPKINVALID

    static constexpr uint32_t RX_PAYSZ_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> RX_PAYSZ_RXPAYSZ; // RXPAYSZ

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // RXDATA

    static constexpr uint32_t RX_ORDEXT1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> RX_ORDEXT1_RXSOPX1; // RXSOPX1

    static constexpr uint32_t RX_ORDEXT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> RX_ORDEXT2_RXSOPX2; // RXSOPX2
};

template<>
struct peripheral_t<STM32L552, SEC_UCPD1>
{
    using T = stm32l552_ucpd1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, UCPD1>
{
    using T = stm32l552_ucpd1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_UCPD1>
{
    using T = stm32l552_ucpd1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, UCPD1>
{
    using T = stm32l552_ucpd1_t;
    static T& V;
};

using sec_ucpd1_t = peripheral_t<svd, SEC_UCPD1>;
using ucpd1_t = peripheral_t<svd, UCPD1>;

template<int INST> struct ucpd_traits {};

template<> struct ucpd_traits<1>
{
    using ucpd = ucpd1_t;
    static constexpr signal_t FRSTX1 = UCPD1_FRSTX1;
    static constexpr signal_t FRSTX2 = UCPD1_FRSTX2;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_UCPD1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_UCPD1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_UCPD1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_UCPD1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_UCPD1RST;
    }
};
