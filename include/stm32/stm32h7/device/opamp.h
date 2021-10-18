#pragma once

////
//
//      STM32H7 OPAMP peripherals
//
///

// OPAMP: Operational amplifiers

struct stm32h723_opamp_t
{
    volatile uint32_t OPAMP1_CSR; // OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR; // OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_HSOTR; // OPAMP1 offset trimming register in low-power mode
    reserved_t<0x1> _0xc;
    volatile uint32_t OPAMP2_CSR; // OPAMP2 control/status register
    volatile uint32_t OPAMP2_OTR; // OPAMP2 offset trimming register in normal mode
    volatile uint32_t OPAMP2_HSOTR; // OPAMP2 offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_FORCE_VP = 0x2; // Force internal reference on VP (reserved for test
    typedef bit_field_t<2, 0x3> OPAMP1_CSR_VP_SEL; // Operational amplifier PGA mode
    typedef bit_field_t<5, 0x3> OPAMP1_CSR_VM_SEL; // Inverting input selection
    static constexpr uint32_t OPAMP1_CSR_OPAHSM = 0x100; // Operational amplifier high-speed mode
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x800; // Calibration mode enabled
    typedef bit_field_t<12, 0x3> OPAMP1_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP1_CSR_PGA_GAIN; // allows to switch from AOP offset trimmed values to AOP offset
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x40000; // User trimming enable
    static constexpr uint32_t OPAMP1_CSR_TSTREF = 0x20000000; // OPAMP calibration reference voltage output control (reserved for test)
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x40000000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP1_HSOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_HSOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP1_HSOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs


    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2; // Force internal reference on VP (reserved for test)
    typedef bit_field_t<5, 0x3> OPAMP2_CSR_VM_SEL; // Inverting input selection
    static constexpr uint32_t OPAMP2_CSR_OPAHSM = 0x100; // Operational amplifier high-speed mode
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800; // Calibration mode enabled
    typedef bit_field_t<12, 0x3> OPAMP2_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP2_CSR_PGA_GAIN; // Operational amplifier Programmable amplifier gain value
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x40000; // User trimming enable
    static constexpr uint32_t OPAMP2_CSR_TSTREF = 0x20000000; // OPAMP calibration reference voltage output control (reserved for test)
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x40000000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_OTR_TRIMOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_OTR_TRIMOFFSETP; // Trim for PMOS differential pairs

    static constexpr uint32_t OPAMP2_HSOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_HSOTR_TRIMLPOFFSETN; // Trim for NMOS differential pairs
    typedef bit_field_t<8, 0x1f> OPAMP2_HSOTR_TRIMLPOFFSETP; // Trim for PMOS differential pairs
};

template<>
struct peripheral_t<STM32H723, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32h723_opamp_t;
    static T& V;
};

using opamp_t = peripheral_t<svd, OPAMP>;

template<int INST> struct opamp_traits {};

template<> struct opamp_traits<0>
{
    using opamp = opamp_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1HENR |= RCC::T::APB1HENR_OPAMPEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1HENR &= ~RCC::T::APB1HENR_OPAMPEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1HRSTR |= RCC::T::APB1HRSTR_OPAMPRST;
    }
};
