#pragma once

////
//
//      STM32L5 OPAMP peripherals
//
////

////
//
//      Operational amplifiers
//
////

struct stm32l552_opamp_t
{
    volatile uint32_t OPAMP1_CSR;   // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR;   // [read-write] OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_LPOTR; // [read-write] OPAMP1 offset trimming register in low-powe mode
    reserved_t<0x1> _0x10;
    volatile uint32_t OPAMP2_CRS;   // [read-write] OPAMP2 control/status register
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
    static constexpr uint32_t OPAMP1_CSR_VM_SEL =                // inverting input selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_VP_SEL = 0x400;         // non inverted input selection
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x1000;         // calibration mode enable
    static constexpr uint32_t OPAMP1_CSR_CALSEL = 0x2000;        // calibration selection
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x4000;      // User trimming enable
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

    static constexpr uint32_t OPAMP2_CRS_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_CRS_OPAEN = 0x1;       // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CRS_OPALPM = 0x2;      // Operational amplifier Low Power Mode
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CRS_OPAMODE =          // Operational amplifier PGA mode
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CRS_PGA_GAIN =         // Operational amplifier Programmable amplifier gain value
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CRS_VM_SEL =           // inverting input selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CRS_VP_SEL = 0x400;    // non inverted input selection
    static constexpr uint32_t OPAMP2_CRS_CALON = 0x1000;    // calibration mode enable
    static constexpr uint32_t OPAMP2_CRS_CALSEL = 0x2000;   // calibration selection
    static constexpr uint32_t OPAMP2_CRS_USERTRIM = 0x4000; // User trimming enable
    static constexpr uint32_t OPAMP2_CRS_CALOUT = 0x8000;   // Operational amplifier calibration output

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
struct peripheral_t<STM32L552, OPAMP>
{
    typedef stm32l552_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_OPAMP>
{
    typedef stm32l552_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, OPAMP>
{
    typedef stm32l552_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OPAMP>
{
    typedef stm32l552_opamp_t T;
    static T& V;
};

using opamp_t = peripheral_t<mcu_svd, OPAMP>;
using sec_opamp_t = peripheral_t<mcu_svd, SEC_OPAMP>;

