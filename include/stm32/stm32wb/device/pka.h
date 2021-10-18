#pragma once

////
//
//      STM32WB PKA peripherals
//
///

// PKA: PKA

struct stm32wb10_cm4_pka_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t SR; // PKA status register
    volatile uint32_t CLRFR; // PKA clear flag register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000; // End of operation interrupt enable
    typedef bit_field_t<8, 0x3f> CR_MODE; // PKA Operation Mode
    static constexpr uint32_t CR_SECLVL = 0x4; // Security Enable
    static constexpr uint32_t CR_START = 0x2; // Start the operation
    static constexpr uint32_t CR_EN = 0x1; // Peripheral Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // Address error flag
    static constexpr uint32_t SR_RAMERRF = 0x80000; // RAM error flag
    static constexpr uint32_t SR_PROCENDF = 0x20000; // PKA End of Operation flag
    static constexpr uint32_t SR_BUSY = 0x10000; // PKA Operation in progress

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // Clear Address error flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000; // Clear RAM error flag
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000; // Clear PKA End of Operation flag
};

// PKA: PKA

struct stm32wb30_cm4_pka_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t SR; // PKA status register
    volatile uint32_t CLRFR; // PKA clear flag register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000; // End of operation interrupt enable
    typedef bit_field_t<8, 0x3f> CR_MODE; // PKA Operation Mode
    static constexpr uint32_t CR_START = 0x2; // Start the operation
    static constexpr uint32_t CR_EN = 0x1; // Peripheral Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // Address error flag
    static constexpr uint32_t SR_RAMERRF = 0x80000; // RAM error flag
    static constexpr uint32_t SR_PROCENDF = 0x20000; // PKA End of Operation flag
    static constexpr uint32_t SR_BUSY = 0x10000; // PKA Operation in progress

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // Clear Address error flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000; // Clear RAM error flag
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000; // Clear PKA End of Operation flag
};

// PKA: PKA

struct stm32wb35_cm4_pka_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t SR; // PKA status register
    volatile uint32_t CLRFR; // PKA clear flag register
    reserved_t<0x7fa> _0xc;
    volatile uint32_t VERR; // PKA version register
    volatile uint32_t IPIDR; // PKA identification register
    volatile uint32_t SIDR; // PKA size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000; // End of operation interrupt enable
    typedef bit_field_t<8, 0x3f> CR_MODE; // PKA Operation Mode
    static constexpr uint32_t CR_SECLVL = 0x4; // Security Enable
    static constexpr uint32_t CR_START = 0x2; // Start the operation
    static constexpr uint32_t CR_EN = 0x1; // Peripheral Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // Address error flag
    static constexpr uint32_t SR_RAMERRF = 0x80000; // RAM error flag
    static constexpr uint32_t SR_PROCENDF = 0x20000; // PKA End of Operation flag
    static constexpr uint32_t SR_BUSY = 0x10000; // PKA Operation in progress

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // Clear Address error flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000; // Clear RAM error flag
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000; // Clear PKA End of Operation flag


    static constexpr uint32_t VERR_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor revision
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major revision

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170061; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // Identification Code

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd08; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Side Identification Code
};

template<>
struct peripheral_t<STM32WB10_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb10_cm4_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB15_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb10_cm4_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb30_cm4_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb30_cm4_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb35_cm4_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wb35_cm4_pka_t;
    static T& V;
};

using pka_t = peripheral_t<svd, PKA>;

template<int INST> struct pka_traits {};

template<> struct pka_traits<0>
{
    using pka = pka_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST;
    }
};
