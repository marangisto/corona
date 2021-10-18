#pragma once

////
//
//      STM32WL IPCC peripherals
//
///

// IPCC: Inter Processor communication controller

struct stm32wl5x_cm0p_ipcc_t
{
    volatile uint32_t IPCC_C1CR; // IPCC Processor 1 control register
    volatile uint32_t IPCC_C1MR; // IPCC Processor 1 mask register
    volatile uint32_t IPCC_C1SCR; // Reading this register will always return 0x0000 0000.
    volatile uint32_t IPCC_C1TOC2SR; // IPCC processor 1 to processor 2 status register
    volatile uint32_t IPCC_C2CR; // IPCC Processor 2 control register
    volatile uint32_t IPCC_C2MR; // IPCC Processor 2 mask register
    volatile uint32_t IPCC_C2SCR; // Reading this register will always return 0x0000 0000.
    volatile uint32_t IPCC_C2TOC1SR; // IPCC processor 2 to processor 1 status register
    reserved_t<0xf4> _0x20;
    volatile uint32_t IPCC_HWCFGR; // IPCC Hardware configuration register
    volatile uint32_t IPCC_VERR; // IPCC IP Version register
    volatile uint32_t IPCC_IPIDR; // IPCC IP Identification register
    volatile uint32_t IPCC_SIDR; // IPCC Size ID register

    static constexpr uint32_t IPCC_C1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C1CR_RXOIE = 0x1; // RXOIE
    static constexpr uint32_t IPCC_C1CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t IPCC_C1MR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t IPCC_C1MR_CH1OM = 0x1; // CH1OM
    static constexpr uint32_t IPCC_C1MR_CH2OM = 0x2; // CH2OM
    static constexpr uint32_t IPCC_C1MR_CH3OM = 0x4; // CH3OM
    static constexpr uint32_t IPCC_C1MR_CH4OM = 0x8; // CH4OM
    static constexpr uint32_t IPCC_C1MR_CH5OM = 0x10; // CH5OM
    static constexpr uint32_t IPCC_C1MR_CH6OM = 0x20; // CH6OM
    static constexpr uint32_t IPCC_C1MR_CH1FM = 0x10000; // CH1FM
    static constexpr uint32_t IPCC_C1MR_CH2FM = 0x20000; // CH2FM
    static constexpr uint32_t IPCC_C1MR_CH3FM = 0x40000; // CH3FM
    static constexpr uint32_t IPCC_C1MR_CH4FM = 0x80000; // CH4FM
    static constexpr uint32_t IPCC_C1MR_CH5FM = 0x100000; // CH5FM
    static constexpr uint32_t IPCC_C1MR_CH6FM = 0x200000; // CH6FM

    static constexpr uint32_t IPCC_C1SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C1SCR_CH1C = 0x1; // CH1C
    static constexpr uint32_t IPCC_C1SCR_CH2C = 0x2; // CH2C
    static constexpr uint32_t IPCC_C1SCR_CH3C = 0x4; // CH3C
    static constexpr uint32_t IPCC_C1SCR_CH4C = 0x8; // CH4C
    static constexpr uint32_t IPCC_C1SCR_CH5C = 0x10; // CH5C
    static constexpr uint32_t IPCC_C1SCR_CH6C = 0x20; // CH6C
    static constexpr uint32_t IPCC_C1SCR_CH1S = 0x10000; // CH1S
    static constexpr uint32_t IPCC_C1SCR_CH2S = 0x20000; // CH2S
    static constexpr uint32_t IPCC_C1SCR_CH3S = 0x40000; // CH3S
    static constexpr uint32_t IPCC_C1SCR_CH4S = 0x80000; // CH4S
    static constexpr uint32_t IPCC_C1SCR_CH5S = 0x100000; // CH5S
    static constexpr uint32_t IPCC_C1SCR_CH6S = 0x200000; // CH6S

    static constexpr uint32_t IPCC_C1TOC2SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C1TOC2SR_CH1F = 0x1; // CH1F
    static constexpr uint32_t IPCC_C1TOC2SR_CH2F = 0x2; // CH2F
    static constexpr uint32_t IPCC_C1TOC2SR_CH3F = 0x4; // CH3F
    static constexpr uint32_t IPCC_C1TOC2SR_CH4F = 0x8; // CH4F
    static constexpr uint32_t IPCC_C1TOC2SR_CH5F = 0x10; // CH5F
    static constexpr uint32_t IPCC_C1TOC2SR_CH6F = 0x20; // CH6F

    static constexpr uint32_t IPCC_C2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C2CR_RXOIE = 0x1; // RXOIE
    static constexpr uint32_t IPCC_C2CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t IPCC_C2MR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t IPCC_C2MR_CH1OM = 0x1; // CH1OM
    static constexpr uint32_t IPCC_C2MR_CH2OM = 0x2; // CH2OM
    static constexpr uint32_t IPCC_C2MR_CH3OM = 0x4; // CH3OM
    static constexpr uint32_t IPCC_C2MR_CH4OM = 0x8; // CH4OM
    static constexpr uint32_t IPCC_C2MR_CH5OM = 0x10; // CH5OM
    static constexpr uint32_t IPCC_C2MR_CH6OM = 0x20; // CH6OM
    static constexpr uint32_t IPCC_C2MR_CH1FM = 0x10000; // CH1FM
    static constexpr uint32_t IPCC_C2MR_CH2FM = 0x20000; // CH2FM
    static constexpr uint32_t IPCC_C2MR_CH3FM = 0x40000; // CH3FM
    static constexpr uint32_t IPCC_C2MR_CH4FM = 0x80000; // CH4FM
    static constexpr uint32_t IPCC_C2MR_CH5FM = 0x100000; // CH5FM
    static constexpr uint32_t IPCC_C2MR_CH6FM = 0x200000; // CH6FM

    static constexpr uint32_t IPCC_C2SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C2SCR_CH1C = 0x1; // CH1C
    static constexpr uint32_t IPCC_C2SCR_CH2C = 0x2; // CH2C
    static constexpr uint32_t IPCC_C2SCR_CH3C = 0x4; // CH3C
    static constexpr uint32_t IPCC_C2SCR_CH4C = 0x8; // CH4C
    static constexpr uint32_t IPCC_C2SCR_CH5C = 0x10; // CH5C
    static constexpr uint32_t IPCC_C2SCR_CH6C = 0x20; // CH6C
    static constexpr uint32_t IPCC_C2SCR_CH1S = 0x10000; // CH1S
    static constexpr uint32_t IPCC_C2SCR_CH2S = 0x20000; // CH2S
    static constexpr uint32_t IPCC_C2SCR_CH3S = 0x40000; // CH3S
    static constexpr uint32_t IPCC_C2SCR_CH4S = 0x80000; // CH4S
    static constexpr uint32_t IPCC_C2SCR_CH5S = 0x100000; // CH5S
    static constexpr uint32_t IPCC_C2SCR_CH6S = 0x200000; // CH6S

    static constexpr uint32_t IPCC_C2TOC1SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IPCC_C2TOC1SR_CH1F = 0x1; // CH1F
    static constexpr uint32_t IPCC_C2TOC1SR_CH2F = 0x2; // CH2F
    static constexpr uint32_t IPCC_C2TOC1SR_CH3F = 0x4; // CH3F
    static constexpr uint32_t IPCC_C2TOC1SR_CH4F = 0x8; // CH4F
    static constexpr uint32_t IPCC_C2TOC1SR_CH5F = 0x10; // CH5F
    static constexpr uint32_t IPCC_C2TOC1SR_CH6F = 0x20; // CH6F


    static constexpr uint32_t IPCC_HWCFGR_RESET_VALUE = 0x6; // Reset value
    typedef bit_field_t<0, 0xff> IPCC_HWCFGR_CHANNELS; // CHANNELS

    static constexpr uint32_t IPCC_VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> IPCC_VERR_MINREV; // MINREV
    typedef bit_field_t<4, 0xf> IPCC_VERR_MAJREV; // MAJREV

    static constexpr uint32_t IPCC_IPIDR_RESET_VALUE = 0x100071; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPCC_IPIDR_ID; // ID

    static constexpr uint32_t IPCC_SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPCC_SIDR_SID; // SID
};

// IPCC: Inter Processor communication controller

struct stm32wl5x_cm4_ipcc_t
{
    volatile uint32_t C1CR; // IPCC Processor 1 control register
    volatile uint32_t C1MR; // IPCC Processor 1 mask register
    volatile uint32_t C1SCR; // Reading this register will always return 0x0000 0000.
    volatile uint32_t IC1TOC2SR; // IPCC processor 1 to processor 2 status register
    volatile uint32_t C2CR; // IPCC Processor 2 control register
    volatile uint32_t C2MR; // IPCC Processor 2 mask register
    volatile uint32_t C2SCR; // Reading this register will always return 0x0000 0000.
    volatile uint32_t C2TOC1SR; // IPCC processor 2 to processor 1 status register
    reserved_t<0xf4> _0x20;
    volatile uint32_t HWCFGR; // IPCC Hardware configuration register
    volatile uint32_t VERR; // IPCC IP Version register
    volatile uint32_t IPIDR; // IPCC IP Identification register
    volatile uint32_t SIDR; // IPCC Size ID register

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1CR_RXOIE = 0x1; // RXOIE
    static constexpr uint32_t C1CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t C1MR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t C1MR_CH1OM = 0x1; // CH1OM
    static constexpr uint32_t C1MR_CH2OM = 0x2; // CH2OM
    static constexpr uint32_t C1MR_CH3OM = 0x4; // CH3OM
    static constexpr uint32_t C1MR_CH4OM = 0x8; // CH4OM
    static constexpr uint32_t C1MR_CH5OM = 0x10; // CH5OM
    static constexpr uint32_t C1MR_CH6OM = 0x20; // CH6OM
    static constexpr uint32_t C1MR_CH1FM = 0x10000; // CH1FM
    static constexpr uint32_t C1MR_CH2FM = 0x20000; // CH2FM
    static constexpr uint32_t C1MR_CH3FM = 0x40000; // CH3FM
    static constexpr uint32_t C1MR_CH4FM = 0x80000; // CH4FM
    static constexpr uint32_t C1MR_CH5FM = 0x100000; // CH5FM
    static constexpr uint32_t C1MR_CH6FM = 0x200000; // CH6FM

    static constexpr uint32_t C1SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1SCR_CH1C = 0x1; // CH1C
    static constexpr uint32_t C1SCR_CH2C = 0x2; // CH2C
    static constexpr uint32_t C1SCR_CH3C = 0x4; // CH3C
    static constexpr uint32_t C1SCR_CH4C = 0x8; // CH4C
    static constexpr uint32_t C1SCR_CH5C = 0x10; // CH5C
    static constexpr uint32_t C1SCR_CH6C = 0x20; // CH6C
    static constexpr uint32_t C1SCR_CH1S = 0x10000; // CH1S
    static constexpr uint32_t C1SCR_CH2S = 0x20000; // CH2S
    static constexpr uint32_t C1SCR_CH3S = 0x40000; // CH3S
    static constexpr uint32_t C1SCR_CH4S = 0x80000; // CH4S
    static constexpr uint32_t C1SCR_CH5S = 0x100000; // CH5S
    static constexpr uint32_t C1SCR_CH6S = 0x200000; // CH6S

    static constexpr uint32_t IC1TOC2SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IC1TOC2SR_CH1F = 0x1; // CH1F
    static constexpr uint32_t IC1TOC2SR_CH2F = 0x2; // CH2F
    static constexpr uint32_t IC1TOC2SR_CH3F = 0x4; // CH3F
    static constexpr uint32_t IC1TOC2SR_CH4F = 0x8; // CH4F
    static constexpr uint32_t IC1TOC2SR_CH5F = 0x10; // CH5F
    static constexpr uint32_t IC1TOC2SR_CH6F = 0x20; // CH6F

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2CR_RXOIE = 0x1; // RXOIE
    static constexpr uint32_t C2CR_TXFIE = 0x10000; // TXFIE

    static constexpr uint32_t C2MR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t C2MR_CH1OM = 0x1; // CH1OM
    static constexpr uint32_t C2MR_CH2OM = 0x2; // CH2OM
    static constexpr uint32_t C2MR_CH3OM = 0x4; // CH3OM
    static constexpr uint32_t C2MR_CH4OM = 0x8; // CH4OM
    static constexpr uint32_t C2MR_CH5OM = 0x10; // CH5OM
    static constexpr uint32_t C2MR_CH6OM = 0x20; // CH6OM
    static constexpr uint32_t C2MR_CH1FM = 0x10000; // CH1FM
    static constexpr uint32_t C2MR_CH2FM = 0x20000; // CH2FM
    static constexpr uint32_t C2MR_CH3FM = 0x40000; // CH3FM
    static constexpr uint32_t C2MR_CH4FM = 0x80000; // CH4FM
    static constexpr uint32_t C2MR_CH5FM = 0x100000; // CH5FM
    static constexpr uint32_t C2MR_CH6FM = 0x200000; // CH6FM

    static constexpr uint32_t C2SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2SCR_CH1C = 0x1; // CH1C
    static constexpr uint32_t C2SCR_CH2C = 0x2; // CH2C
    static constexpr uint32_t C2SCR_CH3C = 0x4; // CH3C
    static constexpr uint32_t C2SCR_CH4C = 0x8; // CH4C
    static constexpr uint32_t C2SCR_CH5C = 0x10; // CH5C
    static constexpr uint32_t C2SCR_CH6C = 0x20; // CH6C
    static constexpr uint32_t C2SCR_CH1S = 0x10000; // CH1S
    static constexpr uint32_t C2SCR_CH2S = 0x20000; // CH2S
    static constexpr uint32_t C2SCR_CH3S = 0x40000; // CH3S
    static constexpr uint32_t C2SCR_CH4S = 0x80000; // CH4S
    static constexpr uint32_t C2SCR_CH5S = 0x100000; // CH5S
    static constexpr uint32_t C2SCR_CH6S = 0x200000; // CH6S

    static constexpr uint32_t C2TOC1SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2TOC1SR_CH1F = 0x1; // CH1F
    static constexpr uint32_t C2TOC1SR_CH2F = 0x2; // CH2F
    static constexpr uint32_t C2TOC1SR_CH3F = 0x4; // CH3F
    static constexpr uint32_t C2TOC1SR_CH4F = 0x8; // CH4F
    static constexpr uint32_t C2TOC1SR_CH5F = 0x10; // CH5F
    static constexpr uint32_t C2TOC1SR_CH6F = 0x20; // CH6F


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x6; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR_CHANNELS; // CHANNELS

    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // MINREV
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // MAJREV

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x100071; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // ID

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // SID
};

template<>
struct peripheral_t<STM32WL5x_CM0P, IPCC>
{
    static constexpr periph_t P = IPCC;
    using T = stm32wl5x_cm0p_ipcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, IPCC>
{
    static constexpr periph_t P = IPCC;
    using T = stm32wl5x_cm4_ipcc_t;
    static T& V;
};

using ipcc_t = peripheral_t<svd, IPCC>;

template<int INST> struct ipcc_traits {};

template<> struct ipcc_traits<0>
{
    using ipcc = ipcc_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_IPCCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_IPCCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_IPCCRST;
    }
};
