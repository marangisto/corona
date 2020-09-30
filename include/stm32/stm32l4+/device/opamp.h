#pragma once

////
//
//      STM32L4+ OPAMP peripherals
//
///

// OPAMP: Operational amplifiers

struct stm32l4p5_opamp_t
{
    volatile uint32_t OPAMP1_CSR; // OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR; // OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_LPOTR; // OPAMP1 offset trimming register in low-power mode
    reserved_t<0x1> _0xc;
    volatile uint32_t OPAMP2_CSR; // OPAMP2 control/status register
    volatile uint32_t OPAMP2_OTR; // OPAMP2 offset trimming register in normal mode
    volatile uint32_t OPAMP2_LPOTR; // OPAMP2 offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_OPALPM = 0x2; // Operational amplifier Low Power Mode
    typedef bit_field_t<2, 0x3> OPAMP1_CSR_OPAMODE; // Operational amplifier PGA mode
    typedef bit_field_t<4, 0x3> OPAMP1_CSR_PGA_GAIN; // Operational amplifier Programmable amplifier gain value
    typedef bit_field_t<8, 0x3> OPAMP1_CSR_VM_SEL; // Inverting input selection
    static constexpr uint32_t OPAMP1_CSR_VP_SEL = 0x400; // Non inverted input selection
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x1000; // Calibration mode enabled
    static constexpr uint32_t OPAMP1_CSR_CALSEL = 0x2000; // Calibration selection
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x4000; // allows to switch from AOP offset trimmed values to AOP offset
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x8000; // Operational amplifier calibration output
    static constexpr uint32_t OPAMP1_CSR_OPA_RANGE = 0x80000000; // Operational amplifier power supply range for stability

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP1_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs


    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_OPALPM = 0x2; // Operational amplifier Low Power Mode
    typedef bit_field_t<2, 0x3> OPAMP2_CSR_OPAMODE; // Operational amplifier PGA mode
    typedef bit_field_t<4, 0x3> OPAMP2_CSR_PGA_GAIN; // Operational amplifier Programmable amplifier gain value
    typedef bit_field_t<8, 0x3> OPAMP2_CSR_VM_SEL; // Inverting input selection
    static constexpr uint32_t OPAMP2_CSR_VP_SEL = 0x400; // Non inverted input selection
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x1000; // Calibration mode enabled
    static constexpr uint32_t OPAMP2_CSR_CALSEL = 0x2000; // Calibration selection
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x4000; // allows to switch from AOP offset trimmed values to AOP offset
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x8000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP2_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs
};

template<>
struct peripheral_t<STM32L4P5, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32l4p5_opamp_t;
    static T& V;
};

using opamp_t = peripheral_t<svd, OPAMP>;

template<int INST> struct opamp_traits {};

template<> struct opamp_traits<0>
{
    using opamp = opamp_t;
    static constexpr clock_source_t CS = APB1_PERIPH;

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
