#pragma once

////
//
//      STM32F3 ADC_COMMON peripherals
//
///

// ADC_COMMON: ADC common registers

struct stm32f3x4_adc_common_t
{
    volatile uint32_t ADC1_CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t ADC1_CCR; // ADC common control register
    volatile uint32_t ADC1_CDR; // ADC common regular data register for dual mode

    static constexpr uint32_t ADC1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC1_CSR_ADRDY_MST = 0x1; // Master ADC ready
    static constexpr uint32_t ADC1_CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC
    static constexpr uint32_t ADC1_CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC
    static constexpr uint32_t ADC1_CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC
    static constexpr uint32_t ADC1_CSR_OVR_MST = 0x10; // Overrun flag of the master ADC
    static constexpr uint32_t ADC1_CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC
    static constexpr uint32_t ADC1_CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC
    static constexpr uint32_t ADC1_CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t ADC1_CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t ADC1_CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t ADC1_CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t ADC1_CSR_ADRDY_SLV = 0x10000; // Slave ADC ready
    static constexpr uint32_t ADC1_CSR_EOSMP_SLV = 0x20000; // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_EOC_SLV = 0x40000; // End of regular conversion of the slave ADC
    static constexpr uint32_t ADC1_CSR_EOS_SLV = 0x80000; // End of regular sequence flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_OVR_SLV = 0x100000; // Overrun flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_JEOC_SLV = 0x200000; // End of injected conversion flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_JEOS_SLV = 0x400000; // End of injected sequence flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_AWD1_SLV = 0x800000; // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_AWD2_SLV = 0x1000000; // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_AWD3_SLV = 0x2000000; // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t ADC1_CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC


    static constexpr uint32_t ADC1_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC1_CCR_DUAL; // Dual ADC mode selection
    typedef bit_field_t<8, 0xf> ADC1_CCR_DELAY; // Delay between 2 sampling phases
    static constexpr uint32_t ADC1_CCR_DMACFG = 0x2000; // DMA configuration (for dual ADC mode)
    typedef bit_field_t<14, 0x3> ADC1_CCR_MDMA; // Direct memory access mode for dual ADC mode
    typedef bit_field_t<16, 0x3> ADC1_CCR_CKMODE; // ADC clock mode
    static constexpr uint32_t ADC1_CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t ADC1_CCR_TSEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t ADC1_CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t ADC1_CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ADC1_CDR_RDATA_SLV; // Regular data of the slave ADC
    typedef bit_field_t<0, 0xffff> ADC1_CDR_RDATA_MST; // Regular data of the master ADC
};

template<>
struct peripheral_t<STM32F3x4, ADC_COMMON>
{
    using T = stm32f3x4_adc_common_t;
    static T& V;
};

using adc_common_t = peripheral_t<svd, ADC_COMMON>;

template<int INST> struct adc_common_traits {};

template<> struct adc_common_traits<123>
{
    using adc_common = adc_common_t;
};
