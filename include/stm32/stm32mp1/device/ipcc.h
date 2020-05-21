#pragma once

////
//
//      STM32MP1 IPCC peripherals
//
////

////
//
//      IPCC
//
////

struct stm32mp15xxx_ipcc_t
{
    volatile uint32_t IPCC_C1CR;     // [read-write] IPCC Processor 1 control register
    volatile uint32_t IPCC_C1MR;     // [read-write] IPCC Processor 1 mask register
    volatile uint32_t IPCC_C1SCR;    // [read-write] Reading this register will always return 0x0000 0000.
    volatile uint32_t IPCC_C1TOC2SR; // [read-only] IPCC processor 1 to processor 2 status register
    volatile uint32_t IPCC_C2CR;     // [read-write] IPCC Processor 2 control register
    volatile uint32_t IPCC_C2MR;     // [read-write] IPCC Processor 2 mask register
    volatile uint32_t IPCC_C2SCR;    // [read-write] Reading this register will always return 0x0000 0000.
    volatile uint32_t IPCC_C2TOC1SR; // [read-only] IPCC processor 2 to processor 1 status register
    reserved_t<0xf4> _0x3f0;
    volatile uint32_t IPCC_HWCFGR;   // [read-only] IPCC Hardware configuration register
    volatile uint32_t IPCC_VER;      // [read-only] IPCC IP Version register
    volatile uint32_t IPCC_ID;       // [read-only] IPCC IP Identification register
    volatile uint32_t IPCC_SID;      // [read-only] IPCC Size ID register

    static constexpr uint32_t IPCC_C1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t IPCC_C1CR_RXOIE = 0x1;     // RXOIE
    static constexpr uint32_t IPCC_C1CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t IPCC_C1MR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C1MR_CHxOM =   // CHxOM
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPCC_C1MR_CHxFM =   // CHxFM
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_C1SCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C1SCR_CHxC =   // CHxC
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPCC_C1SCR_CHxS =   // CHxS
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_C1TOC2SR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C1TOC2SR_CHxF =   // CHxF
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t IPCC_C2CR_RXOIE = 0x1;     // RXOIE
    static constexpr uint32_t IPCC_C2CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t IPCC_C2MR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C2MR_CHxOM =   // CHxOM
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPCC_C2MR_CHxFM =   // CHxFM
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_C2SCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C2SCR_CHxC =   // CHxC
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPCC_C2SCR_CHxS =   // CHxS
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_C2TOC1SR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPCC_C2TOC1SR_CHxF =   // CHxF
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t IPCC_HWCFGR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t IPCC_HWCFGR_CHANNELS =   // CHANNELS
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t IPCC_VER_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t IPCC_VER_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPCC_VER_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPCC_ID_RESET_VALUE = 0x100071;

    static constexpr uint32_t IPCC_SID_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, IPCC>
{
    typedef stm32mp15xxx_ipcc_t T;
    static T& V;
};

using ipcc_t = peripheral_t<mcu_svd, IPCC>;

