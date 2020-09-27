#pragma once

////
//
//      STM32L5 OPAMP peripherals
//
///

// OPAMP: Operational amplifiers

struct stm32l552_opamp_t
{
    volatile uint32_t OPAMP1_CSR; // OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR; // OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_LPOTR; // OPAMP1 offset trimming register in low-powe mode
    reserved_t<0x1> _0xc;
    volatile uint32_t OPAMP2_CRS; // OPAMP2 control/status register
    volatile uint32_t OPAMP2_OTR; // OPAMP2 offset trimming register in normal mode
    volatile uint32_t OPAMP2_LPOTR; // OPAMP2 offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_OPALPM = 0x2; // Operational amplifier Low Power Mode
    typedef bit_field_t<2, 0x3> OPAMP1_CSR_OPAMODE; // Operational amplifier PGA mode
    typedef bit_field_t<4, 0x3> OPAMP1_CSR_PGA_GAIN; // Operational amplifier Programmable amplifier gain value
    typedef bit_field_t<8, 0x3> OPAMP1_CSR_VM_SEL; // inverting input selection
    static constexpr uint32_t OPAMP1_CSR_VP_SEL = 0x400; // non inverted input selection
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x1000; // calibration mode enable
    static constexpr uint32_t OPAMP1_CSR_CALSEL = 0x2000; // calibration selection
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x4000; // User trimming enable
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x8000; // Operational amplifier calibration output
    static constexpr uint32_t OPAMP1_CSR_OPA_RANGE = 0x80000000; // Operational amplifier power supply range for stability

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP1_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs


    static constexpr uint32_t OPAMP2_CRS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CRS_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CRS_OPALPM = 0x2; // Operational amplifier Low Power Mode
    typedef bit_field_t<2, 0x3> OPAMP2_CRS_OPAMODE; // Operational amplifier PGA mode
    typedef bit_field_t<4, 0x3> OPAMP2_CRS_PGA_GAIN; // Operational amplifier Programmable amplifier gain value
    typedef bit_field_t<8, 0x3> OPAMP2_CRS_VM_SEL; // inverting input selection
    static constexpr uint32_t OPAMP2_CRS_VP_SEL = 0x400; // non inverted input selection
    static constexpr uint32_t OPAMP2_CRS_CALON = 0x1000; // calibration mode enable
    static constexpr uint32_t OPAMP2_CRS_CALSEL = 0x2000; // calibration selection
    static constexpr uint32_t OPAMP2_CRS_USERTRIM = 0x4000; // User trimming enable
    static constexpr uint32_t OPAMP2_CRS_CALOUT = 0x8000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP2_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs
};

template<>
struct peripheral_t<STM32L552, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l552_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_OPAMP>
{
    static constexpr periph_t P = SEC_OPAMP;
    using T = stm32l552_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l552_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OPAMP>
{
    static constexpr periph_t P = SEC_OPAMP;
    using T = stm32l552_opamp_t;
    static T& V;
};

using opamp_t = peripheral_t<svd, OPAMP>;
using sec_opamp_t = peripheral_t<svd, SEC_OPAMP>;

template<int INST> struct opamp_traits {};

template<> struct opamp_traits<0>
{
    using opamp = opamp_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_OPAMPEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_OPAMPEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_OPAMPSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_OPAMPSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_OPAMPRST;
    }
};
