#pragma once

////
//
//      STM32U5 OPAMP peripherals
//
///

// OPAMP: Operational amplifiers

struct stm32u5xx_opamp_t
{
    volatile uint32_t OPAMP1_CSR; // OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR; // offset trimming register in normal mode
    volatile uint32_t OPAMP1_LPOTR; // offset trimming register in low-power mode
    reserved_t<0x1> _0xc;
    volatile uint32_t OPAMP2_CRS; // control/status register
    volatile uint32_t OPAMP2_OTR; // offset trimming register in normal mode
    volatile uint32_t OPAMP2_LPOTR; // offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_OPALPM = 0x2; // OPALPM
    typedef bit_field_t<2, 0x3> OPAMP1_CSR_OPAMODE; // OPAMODE
    typedef bit_field_t<4, 0x3> OPAMP1_CSR_PGA_GAIN; // USERTRIM
    typedef bit_field_t<8, 0x3> OPAMP1_CSR_VM_SEL; // VM_SEL
    static constexpr uint32_t OPAMP1_CSR_VP_SEL = 0x400; // VP_SEL
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x1000; // CALON
    static constexpr uint32_t OPAMP1_CSR_CALSEL = 0x2000; // CALSEL
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x4000; // USERTRIM
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x8000; // CALOUT
    static constexpr uint32_t OPAMP1_CSR_OPAHSM = 0x40000000; // OPAHSM

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_OTR_TRIMOFFSETN; // TRIMOFFSETN
    typedef bit_field_t<8, 0x1f> OPAMP1_OTR_TRIMOFFSETP; // TRIMOFFSETP

    static constexpr uint32_t OPAMP1_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETN; // TRIMLPOFFSETN
    typedef bit_field_t<8, 0x1f> OPAMP1_LPOTR_TRIMLPOFFSETP; // TRIMLPOFFSETP


    static constexpr uint32_t OPAMP2_CRS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CRS_OPAEN = 0x1; // OPAEN
    static constexpr uint32_t OPAMP2_CRS_OPALPM = 0x2; // OPALPM
    typedef bit_field_t<2, 0x3> OPAMP2_CRS_OPAMODE; // OPAMODE
    typedef bit_field_t<4, 0x3> OPAMP2_CRS_PGA_GAIN; // PGA_GAIN
    typedef bit_field_t<8, 0x3> OPAMP2_CRS_VM_SEL; // VM_SEL
    static constexpr uint32_t OPAMP2_CRS_VP_SEL = 0x400; // VP_SEL
    static constexpr uint32_t OPAMP2_CRS_CALON = 0x1000; // CALON
    static constexpr uint32_t OPAMP2_CRS_CALSEL = 0x2000; // CALSEL
    static constexpr uint32_t OPAMP2_CRS_USERTRIM = 0x4000; // USERTRIM
    static constexpr uint32_t OPAMP2_CRS_CALOUT = 0x8000; // CALOUT
    static constexpr uint32_t OPAMP2_CRS_OPAHSM = 0x40000000; // OPAHSM

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_OTR_TRIMOFFSETN; // TRIMOFFSETN
    typedef bit_field_t<8, 0x1f> OPAMP2_OTR_TRIMOFFSETP; // TRIMOFFSETP

    static constexpr uint32_t OPAMP2_LPOTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETN; // TRIMLPOFFSETN
    typedef bit_field_t<8, 0x1f> OPAMP2_LPOTR_TRIMLPOFFSETP; // TRIMLPOFFSETP
};

template<>
struct peripheral_t<STM32U5xx, OPAMP>
{
    static constexpr periph_t P = OPAMP;
    using T = stm32u5xx_opamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_OPAMP>
{
    static constexpr periph_t P = SEC_OPAMP;
    using T = stm32u5xx_opamp_t;
    static T& V;
};

using opamp_t = peripheral_t<svd, OPAMP>;
using sec_opamp_t = peripheral_t<svd, SEC_OPAMP>;
