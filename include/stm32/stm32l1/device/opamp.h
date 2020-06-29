#pragma once

////
//
//      STM32L1 OPAMP peripherals
//
///

// OPAMP: Operational amplifiers

struct stm32l100_opamp_t
{
    volatile uint32_t CSR; // control/status register
    volatile uint32_t OTR; // offset trimming register for normal mode
    volatile uint32_t LPOTR; // OPAMP offset trimming register for low power mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x10101; // Reset value
    static constexpr uint32_t CSR_OPA3CALOUT = 0x80000000; // OPAMP3 calibration output
    static constexpr uint32_t CSR_OPA2CALOUT = 0x40000000; // OPAMP2 calibration output
    static constexpr uint32_t CSR_OPA1CALOUT = 0x20000000; // OPAMP1 calibration output
    static constexpr uint32_t CSR_AOP_RANGE = 0x10000000; // Power range selection
    static constexpr uint32_t CSR_S7SEL2 = 0x8000000; // Switch 7 for OPAMP2 enable
    static constexpr uint32_t CSR_ANAWSEL3 = 0x4000000; // Switch SanA enable for OPAMP3
    static constexpr uint32_t CSR_ANAWSEL2 = 0x2000000; // Switch SanA enable for OPAMP2
    static constexpr uint32_t CSR_ANAWSEL1 = 0x1000000; // Switch SanA enable for OPAMP1
    static constexpr uint32_t CSR_OPA3LPM = 0x800000; // OPAMP3 low power mode
    static constexpr uint32_t CSR_OPA3CAL_H = 0x400000; // OPAMP3 offset calibration for N differential pair
    static constexpr uint32_t CSR_OPA3CAL_L = 0x200000; // OPAMP3 offset Calibration for P differential pair
    static constexpr uint32_t CSR_S6SEL3 = 0x100000; // Switch 6 for OPAMP3 enable
    static constexpr uint32_t CSR_S5SEL3 = 0x80000; // Switch 5 for OPAMP3 enable
    static constexpr uint32_t CSR_S4SEL3 = 0x40000; // Switch 4 for OPAMP3 enable
    static constexpr uint32_t CSR_S3SEL3 = 0x20000; // Switch 3 for OPAMP3 Enable
    static constexpr uint32_t CSR_OPA3PD = 0x10000; // OPAMP3 power down
    static constexpr uint32_t CSR_OPA2LPM = 0x8000; // OPAMP2 low power mode
    static constexpr uint32_t CSR_OPA2CAL_H = 0x4000; // OPAMP2 offset calibration for N differential pair
    static constexpr uint32_t CSR_OPA2CAL_L = 0x2000; // OPAMP2 offset Calibration for P differential pair
    static constexpr uint32_t CSR_S6SEL2 = 0x1000; // Switch 6 for OPAMP2 enable
    static constexpr uint32_t CSR_S5SEL2 = 0x800; // Switch 5 for OPAMP2 enable
    static constexpr uint32_t CSR_S4SEL2 = 0x400; // Switch 4 for OPAMP2 enable
    static constexpr uint32_t CSR_S3SEL2 = 0x200; // Switch 3 for OPAMP2 enable
    static constexpr uint32_t CSR_OPA2PD = 0x100; // OPAMP2 power down
    static constexpr uint32_t CSR_OPA1LPM = 0x80; // OPAMP1 low power mode
    static constexpr uint32_t CSR_OPA1CAL_H = 0x40; // OPAMP1 offset calibration for N differential pair
    static constexpr uint32_t CSR_OPA1CAL_L = 0x20; // OPAMP1 offset calibration for P differential pair
    static constexpr uint32_t CSR_S6SEL1 = 0x10; // Switch 6 for OPAMP1 enable
    static constexpr uint32_t CSR_S5SEL1 = 0x8; // Switch 5 for OPAMP1 enable
    static constexpr uint32_t CSR_S4SEL1 = 0x4; // Switch 4 for OPAMP1 enable
    static constexpr uint32_t CSR_S3SEL1 = 0x2; // Switch 3 for OPAMP1 enable
    static constexpr uint32_t CSR_OPA1PD = 0x1; // OPAMP1 power down

    static constexpr uint32_t OTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTR_OT_USER = 0x80000000; // Select user or factory trimming value
    typedef bit_field_t<20, 0x3ff> OTR_AO3_OPT_OFFSET_TRIM; // OPAMP3, 10-bit offset trim value for normal mode
    typedef bit_field_t<10, 0x3ff> OTR_AO2_OPT_OFFSET_TRIM; // OPAMP2, 10-bit offset trim value for normal mode
    typedef bit_field_t<0, 0x3ff> OTR_AO1_OPT_OFFSET_TRIM; // OPAMP1, 10-bit offset trim value for normal mode

    static constexpr uint32_t LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3ff> LPOTR_AO3_OPT_OFFSET_TRIM_LP; // OPAMP3, 10-bit offset trim value for low power mode
    typedef bit_field_t<10, 0x3ff> LPOTR_AO2_OPT_OFFSET_TRIM_LP; // OPAMP2, 10-bit offset trim value for low power mode
    typedef bit_field_t<0, 0x3ff> LPOTR_AO1_OPT_OFFSET_TRIM_LP; // OPAMP1, 10-bit offset trim value for low power mode
};

template<>
struct peripheral_t<STM32L100, OPAMP>
{
    using T = stm32l100_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, OPAMP>
{
    using T = stm32l100_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, OPAMP>
{
    using T = stm32l100_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, OPAMP>
{
    using T = stm32l100_opamp_t;
    static T& V;
};

using opamp_t = peripheral_t<svd, OPAMP>;

template<int INST> struct opamp_traits {};
