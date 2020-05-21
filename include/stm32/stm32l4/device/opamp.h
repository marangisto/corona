#pragma once

////
//
//      STM32L4 OPAMP peripherals
//
////

////
//
//      Operational amplifiers
//
////

struct stm32l412_opamp_t
{
    volatile uint32_t OPAMP1_CSR;   // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR;   // [read-write] OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_LPOTR; // [read-write] OPAMP1 offset trimming register in low-power mode
    reserved_t<0x1> _0x10;
    volatile uint32_t OPAMP2_CSR;   // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP2_OTR;   // [read-write] OPAMP2 offset trimming register in normal mode
    volatile uint32_t OPAMP2_LPOTR; // [read-write] OPAMP2 offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1;            // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_OPALPM = 0x2;           // Operational amplifier Low Power Mode
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_OPAMODE =               // Operational amplifier PGA mode
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_PGA_GAIN =              // Operational amplifier Programmable amplifier gain value
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VM_SEL =                // Inverting input selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_VP_SEL = 0x400;         // Non inverted input selection
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x1000;         // Calibration mode enabled
    static constexpr uint32_t OPAMP1_CSR_CALSEL = 0x2000;        // Calibration selection
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x4000;      // allows to switch from AOP offset trimmed values to AOP offset
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x8000;        // Operational amplifier calibration output
    static constexpr uint32_t OPAMP1_CSR_OPA_RANGE = 0x80000000; // Operational amplifier power supply range for stability

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_OTR_TRIMOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_OTR_TRIMOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP1_LPOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_LPOTR_TRIMLPOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_LPOTR_TRIMLPOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1;       // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_OPALPM = 0x2;      // Operational amplifier Low Power Mode
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_OPAMODE =          // Operational amplifier PGA mode
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_PGA_GAIN =         // Operational amplifier Programmable amplifier gain value
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VM_SEL =           // Inverting input selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_VP_SEL = 0x400;    // Non inverted input selection
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x1000;    // Calibration mode enabled
    static constexpr uint32_t OPAMP2_CSR_CALSEL = 0x2000;   // Calibration selection
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x4000; // allows to switch from AOP offset trimmed values to AOP offset
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x8000;   // Operational amplifier calibration output

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_OTR_TRIMOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_OTR_TRIMOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP2_LPOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_LPOTR_TRIMLPOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_LPOTR_TRIMLPOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();
};


template<>
struct peripheral_t<STM32L412, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, OPAMP>
{
    typedef stm32l412_opamp_t T;
    static T& V;
};

using opamp_t = peripheral_t<mcu_svd, OPAMP>;

