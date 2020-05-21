#pragma once

////
//
//      STM32WB IPCC peripherals
//
////

////
//
//      IPCC
//
////

struct stm32wb30_cm4_ipcc_t
{
    volatile uint32_t C1CR;     // [read-write] Control register CPU1
    volatile uint32_t C1MR;     // [read-write] Mask register CPU1
    volatile uint32_t C1SCR;    // [write-only] Status Set or Clear register CPU1
    volatile uint32_t C1TO2SR;  // [read-only] CPU1 to CPU2 status register
    volatile uint32_t C2CR;     // [read-write] Control register CPU2
    volatile uint32_t C2MR;     // [read-write] Mask register CPU2
    volatile uint32_t C2SCR;    // [write-only] Status Set or Clear register CPU2
    volatile uint32_t C2TOC1SR; // [read-only] CPU2 to CPU1 status register
    reserved_t<0xf4> _0x3f0;
    volatile uint32_t HWCFGR;   // [read-only] IPCC Hardware configuration register
    volatile uint32_t VERR;     // [read-only] IPCC version register
    volatile uint32_t IPIDR;    // [read-only] IPCC indentification register
    volatile uint32_t SIDR;     // [read-only] IPCC size indentification register

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1CR_TXFIE = 0x10000; // processor 1 Transmit channel free interrupt enable
    static constexpr uint32_t C1CR_RXOIE = 0x1;     // processor 1 Receive channel occupied interrupt enable

    static constexpr uint32_t C1MR_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t C1MR_CH6FM = 0x200000; // processor 1 Transmit channel 6 free interrupt mask
    static constexpr uint32_t C1MR_CH5FM = 0x100000; // processor 1 Transmit channel 5 free interrupt mask
    static constexpr uint32_t C1MR_CH4FM = 0x80000;  // processor 1 Transmit channel 4 free interrupt mask
    static constexpr uint32_t C1MR_CH3FM = 0x40000;  // processor 1 Transmit channel 3 free interrupt mask
    static constexpr uint32_t C1MR_CH2FM = 0x20000;  // processor 1 Transmit channel 2 free interrupt mask
    static constexpr uint32_t C1MR_CH1FM = 0x10000;  // processor 1 Transmit channel 1 free interrupt mask
    static constexpr uint32_t C1MR_CH6OM = 0x20;     // processor 1 Receive channel 6 occupied interrupt enable
    static constexpr uint32_t C1MR_CH5OM = 0x10;     // processor 1 Receive channel 5 occupied interrupt enable
    static constexpr uint32_t C1MR_CH4OM = 0x8;      // processor 1 Receive channel 4 occupied interrupt enable
    static constexpr uint32_t C1MR_CH3OM = 0x4;      // processor 1 Receive channel 3 occupied interrupt enable
    static constexpr uint32_t C1MR_CH2OM = 0x2;      // processor 1 Receive channel 2 occupied interrupt enable
    static constexpr uint32_t C1MR_CH1OM = 0x1;      // processor 1 Receive channel 1 occupied interrupt enable

    static constexpr uint32_t C1SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1SCR_CH6S = 0x200000; // processor 1 Transmit channel 6 status set
    static constexpr uint32_t C1SCR_CH5S = 0x100000; // processor 1 Transmit channel 5 status set
    static constexpr uint32_t C1SCR_CH4S = 0x80000;  // processor 1 Transmit channel 4 status set
    static constexpr uint32_t C1SCR_CH3S = 0x40000;  // processor 1 Transmit channel 3 status set
    static constexpr uint32_t C1SCR_CH2S = 0x20000;  // processor 1 Transmit channel 2 status set
    static constexpr uint32_t C1SCR_CH1S = 0x10000;  // processor 1 Transmit channel 1 status set
    static constexpr uint32_t C1SCR_CH6C = 0x20;     // processor 1 Receive channel 6 status clear
    static constexpr uint32_t C1SCR_CH5C = 0x10;     // processor 1 Receive channel 5 status clear
    static constexpr uint32_t C1SCR_CH4C = 0x8;      // processor 1 Receive channel 4 status clear
    static constexpr uint32_t C1SCR_CH3C = 0x4;      // processor 1 Receive channel 3 status clear
    static constexpr uint32_t C1SCR_CH2C = 0x2;      // processor 1 Receive channel 2 status clear
    static constexpr uint32_t C1SCR_CH1C = 0x1;      // processor 1 Receive channel 1 status clear

    static constexpr uint32_t C1TO2SR_RESET_VALUE = 0x0;
    static constexpr uint32_t C1TO2SR_CH6F = 0x20; // processor 1 transmit to process 2 Receive channel 6 status flag
    static constexpr uint32_t C1TO2SR_CH5F = 0x10; // processor 1 transmit to process 2 Receive channel 5 status flag
    static constexpr uint32_t C1TO2SR_CH4F = 0x8;  // processor 1 transmit to process 2 Receive channel 4 status flag
    static constexpr uint32_t C1TO2SR_CH3F = 0x4;  // processor 1 transmit to process 2 Receive channel 3 status flag
    static constexpr uint32_t C1TO2SR_CH2F = 0x2;  // processor 1 transmit to process 2 Receive channel 2 status flag
    static constexpr uint32_t C1TO2SR_CH1F = 0x1;  // processor 1 transmit to process 2 Receive channel 1 status flag

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2CR_TXFIE = 0x10000; // processor 2 Transmit channel free interrupt enable
    static constexpr uint32_t C2CR_RXOIE = 0x1;     // processor 2 Receive channel occupied interrupt enable

    static constexpr uint32_t C2MR_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t C2MR_CH6FM = 0x200000; // processor 2 Transmit channel 6 free interrupt mask
    static constexpr uint32_t C2MR_CH5FM = 0x100000; // processor 2 Transmit channel 5 free interrupt mask
    static constexpr uint32_t C2MR_CH4FM = 0x80000;  // processor 2 Transmit channel 4 free interrupt mask
    static constexpr uint32_t C2MR_CH3FM = 0x40000;  // processor 2 Transmit channel 3 free interrupt mask
    static constexpr uint32_t C2MR_CH2FM = 0x20000;  // processor 2 Transmit channel 2 free interrupt mask
    static constexpr uint32_t C2MR_CH1FM = 0x10000;  // processor 2 Transmit channel 1 free interrupt mask
    static constexpr uint32_t C2MR_CH6OM = 0x20;     // processor 2 Receive channel 6 occupied interrupt enable
    static constexpr uint32_t C2MR_CH5OM = 0x10;     // processor 2 Receive channel 5 occupied interrupt enable
    static constexpr uint32_t C2MR_CH4OM = 0x8;      // processor 2 Receive channel 4 occupied interrupt enable
    static constexpr uint32_t C2MR_CH3OM = 0x4;      // processor 2 Receive channel 3 occupied interrupt enable
    static constexpr uint32_t C2MR_CH2OM = 0x2;      // processor 2 Receive channel 2 occupied interrupt enable
    static constexpr uint32_t C2MR_CH1OM = 0x1;      // processor 2 Receive channel 1 occupied interrupt enable

    static constexpr uint32_t C2SCR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2SCR_CH6S = 0x200000; // processor 2 Transmit channel 6 status set
    static constexpr uint32_t C2SCR_CH5S = 0x100000; // processor 2 Transmit channel 5 status set
    static constexpr uint32_t C2SCR_CH4S = 0x80000;  // processor 2 Transmit channel 4 status set
    static constexpr uint32_t C2SCR_CH3S = 0x40000;  // processor 2 Transmit channel 3 status set
    static constexpr uint32_t C2SCR_CH2S = 0x20000;  // processor 2 Transmit channel 2 status set
    static constexpr uint32_t C2SCR_CH1S = 0x10000;  // processor 2 Transmit channel 1 status set
    static constexpr uint32_t C2SCR_CH6C = 0x20;     // processor 2 Receive channel 6 status clear
    static constexpr uint32_t C2SCR_CH5C = 0x10;     // processor 2 Receive channel 5 status clear
    static constexpr uint32_t C2SCR_CH4C = 0x8;      // processor 2 Receive channel 4 status clear
    static constexpr uint32_t C2SCR_CH3C = 0x4;      // processor 2 Receive channel 3 status clear
    static constexpr uint32_t C2SCR_CH2C = 0x2;      // processor 2 Receive channel 2 status clear
    static constexpr uint32_t C2SCR_CH1C = 0x1;      // processor 2 Receive channel 1 status clear

    static constexpr uint32_t C2TOC1SR_RESET_VALUE = 0x0;
    static constexpr uint32_t C2TOC1SR_CH6F = 0x20; // processor 2 transmit to process 1 Receive channel 6 status flag
    static constexpr uint32_t C2TOC1SR_CH5F = 0x10; // processor 2 transmit to process 1 Receive channel 5 status flag
    static constexpr uint32_t C2TOC1SR_CH4F = 0x8;  // processor 2 transmit to process 1 Receive channel 4 status flag
    static constexpr uint32_t C2TOC1SR_CH3F = 0x4;  // processor 2 transmit to process 1 Receive channel 3 status flag
    static constexpr uint32_t C2TOC1SR_CH2F = 0x2;  // processor 2 transmit to process 1 Receive channel 2 status flag
    static constexpr uint32_t C2TOC1SR_CH1F = 0x1;  // processor 2 transmit to process 1 Receive channel 1 status flag

    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_CHANNELS =   // Number of channels per CPU supported by the IP, range 1 to 16
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x100071;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32WB30_CM4, IPCC>
{
    typedef stm32wb30_cm4_ipcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, IPCC>
{
    typedef stm32wb30_cm4_ipcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, IPCC>
{
    typedef stm32wb30_cm4_ipcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, IPCC>
{
    typedef stm32wb30_cm4_ipcc_t T;
    static T& V;
};

using ipcc_t = peripheral_t<mcu_svd, IPCC>;

