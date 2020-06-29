#pragma once

////
//
//      STM32F7 MDIOS peripherals
//
///

// MDIOS: Management data input/output slave

struct stm32f767_mdios_t
{
    volatile uint32_t MDIOS_CR; // MDIOS configuration register
    volatile uint32_t MDIOS_WRFR; // MDIOS write flag register
    volatile uint32_t MDIOS_CWRFR; // MDIOS clear write flag register
    volatile uint32_t MDIOS_RDFR; // MDIOS read flag register
    volatile uint32_t MDIOS_CRDFR; // MDIOS clear read flag register
    volatile uint32_t MDIOS_SR; // MDIOS status register
    volatile uint32_t MDIOS_CLRFR; // MDIOS clear flag register
    volatile uint32_t MDIOS_DINR0; // MDIOS input data register 0
    volatile uint32_t MDIOS_DINR1; // MDIOS input data register 1
    volatile uint32_t MDIOS_DINR2; // MDIOS input data register 2
    volatile uint32_t MDIOS_DINR3; // MDIOS input data register 3
    volatile uint32_t MDIOS_DINR4; // MDIOS input data register 4
    volatile uint32_t MDIOS_DINR5; // MDIOS input data register 5
    volatile uint32_t MDIOS_DINR6; // MDIOS input data register 6
    volatile uint32_t MDIOS_DINR7; // MDIOS input data register 7
    volatile uint32_t MDIOS_DINR8; // MDIOS input data register 8
    volatile uint32_t MDIOS_DINR9; // MDIOS input data register 9
    volatile uint32_t MDIOS_DINR10; // MDIOS input data register 10
    volatile uint32_t MDIOS_DINR11; // MDIOS input data register 11
    volatile uint32_t MDIOS_DINR12; // MDIOS input data register 12
    volatile uint32_t MDIOS_DINR13; // MDIOS input data register 13
    volatile uint32_t MDIOS_DINR14; // MDIOS input data register 14
    volatile uint32_t MDIOS_DINR15; // MDIOS input data register 15
    volatile uint32_t MDIOS_DINR16; // MDIOS input data register 16
    volatile uint32_t MDIOS_DINR17; // MDIOS input data register 17
    volatile uint32_t MDIOS_DINR18; // MDIOS input data register 18
    volatile uint32_t MDIOS_DINR19; // MDIOS input data register 19
    volatile uint32_t MDIOS_DINR20; // MDIOS input data register 20
    volatile uint32_t MDIOS_DINR21; // MDIOS input data register 21
    volatile uint32_t MDIOS_DINR22; // MDIOS input data register 22
    volatile uint32_t MDIOS_DINR23; // MDIOS input data register 23
    volatile uint32_t MDIOS_DINR24; // MDIOS input data register 24
    volatile uint32_t MDIOS_DINR25; // MDIOS input data register 25
    volatile uint32_t MDIOS_DINR26; // MDIOS input data register 26
    volatile uint32_t MDIOS_DINR27; // MDIOS input data register 27
    volatile uint32_t MDIOS_DINR28; // MDIOS input data register 28
    volatile uint32_t MDIOS_DINR29; // MDIOS input data register 29
    volatile uint32_t MDIOS_DINR30; // MDIOS input data register 30
    volatile uint32_t MDIOS_DINR31; // MDIOS input data register 31
    volatile uint32_t MDIOS_DOUTR0; // MDIOS output data register 0
    volatile uint32_t MDIOS_DOUTR1; // MDIOS output data register 1
    volatile uint32_t MDIOS_DOUTR2; // MDIOS output data register 2
    volatile uint32_t MDIOS_DOUTR3; // MDIOS output data register 3
    volatile uint32_t MDIOS_DOUTR4; // MDIOS output data register 4
    volatile uint32_t MDIOS_DOUTR5; // MDIOS output data register 5
    volatile uint32_t MDIOS_DOUTR6; // MDIOS output data register 6
    volatile uint32_t MDIOS_DOUTR7; // MDIOS output data register 7
    volatile uint32_t MDIOS_DOUTR8; // MDIOS output data register 8
    volatile uint32_t MDIOS_DOUTR9; // MDIOS output data register 9
    volatile uint32_t MDIOS_DOUTR10; // MDIOS output data register 10
    volatile uint32_t MDIOS_DOUTR11; // MDIOS output data register 11
    volatile uint32_t MDIOS_DOUTR12; // MDIOS output data register 12
    volatile uint32_t MDIOS_DOUTR13; // MDIOS output data register 13
    volatile uint32_t MDIOS_DOUTR14; // MDIOS output data register 14
    volatile uint32_t MDIOS_DOUTR15; // MDIOS output data register 15
    volatile uint32_t MDIOS_DOUTR16; // MDIOS output data register 16
    volatile uint32_t MDIOS_DOUTR17; // MDIOS output data register 17
    volatile uint32_t MDIOS_DOUTR18; // MDIOS output data register 18
    volatile uint32_t MDIOS_DOUTR19; // MDIOS output data register 19
    volatile uint32_t MDIOS_DOUTR20; // MDIOS output data register 20
    volatile uint32_t MDIOS_DOUTR21; // MDIOS output data register 21
    volatile uint32_t MDIOS_DOUTR22; // MDIOS output data register 22
    volatile uint32_t MDIOS_DOUTR23; // MDIOS output data register 23
    volatile uint32_t MDIOS_DOUTR24; // MDIOS output data register 24
    volatile uint32_t MDIOS_DOUTR25; // MDIOS output data register 25
    volatile uint32_t MDIOS_DOUTR26; // MDIOS output data register 26
    volatile uint32_t MDIOS_DOUTR27; // MDIOS output data register 27
    volatile uint32_t MDIOS_DOUTR28; // MDIOS output data register 28
    volatile uint32_t MDIOS_DOUTR29; // MDIOS output data register 29
    volatile uint32_t MDIOS_DOUTR30; // MDIOS output data register 30
    volatile uint32_t MDIOS_DOUTR31; // MDIOS output data register 31

    static constexpr uint32_t MDIOS_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDIOS_CR_EN = 0x1; // Peripheral enable
    static constexpr uint32_t MDIOS_CR_WRIE = 0x2; // Register write interrupt enable
    static constexpr uint32_t MDIOS_CR_RDIE = 0x4; // Register Read Interrupt Enable
    static constexpr uint32_t MDIOS_CR_EIE = 0x8; // Error interrupt enable
    static constexpr uint32_t MDIOS_CR_DPC = 0x80; // Disable Preamble Check
    typedef bit_field_t<8, 0x1f> MDIOS_CR_PORT_ADDRESS; // Slaves&#39;s address

    static constexpr uint32_t MDIOS_WRFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDIOS_WRFR_WRF; // Write flags for MDIO registers 0 to 31

    static constexpr uint32_t MDIOS_CWRFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDIOS_CWRFR_CWRF; // Clear the write flag

    static constexpr uint32_t MDIOS_RDFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDIOS_RDFR_RDF; // Read flags for MDIO registers 0 to 31

    static constexpr uint32_t MDIOS_CRDFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MDIOS_CRDFR_CRDF; // Clear the read flag

    static constexpr uint32_t MDIOS_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDIOS_SR_PERF = 0x1; // Preamble error flag
    static constexpr uint32_t MDIOS_SR_SERF = 0x2; // Start error flag
    static constexpr uint32_t MDIOS_SR_TERF = 0x4; // Turnaround error flag

    static constexpr uint32_t MDIOS_CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDIOS_CLRFR_CPERF = 0x1; // Clear the preamble error flag
    static constexpr uint32_t MDIOS_CLRFR_CSERF = 0x2; // Clear the start error flag
    static constexpr uint32_t MDIOS_CLRFR_CTERF = 0x4; // Clear the turnaround error flag

    static constexpr uint32_t MDIOS_DINR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR0_DIN0; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR1_DIN1; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR2_DIN2; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR3_DIN3; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR4_DIN4; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR5_DIN5; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR6_DIN6; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR7_DIN7; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR8_DIN8; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR9_DIN9; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR10_DIN10; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR11_DIN11; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR12_DIN12; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR13_DIN13; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR14_DIN14; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR15_DIN15; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR16_DIN16; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR17_DIN17; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR18_DIN18; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR19_DIN19; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR20_DIN20; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR21_DIN21; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR22_DIN22; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR23_DIN23; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR24_DIN24; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR25_DIN25; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR26_DIN26; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR27_DIN27; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR28_DIN28; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR29_DIN29; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR30_DIN30; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DINR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DINR31_DIN31; // Input data received from MDIO Master during write frames

    static constexpr uint32_t MDIOS_DOUTR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR0_DOUT0; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR1_DOUT1; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR2_DOUT2; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR3_DOUT3; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR4_DOUT4; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR5_DOUT5; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR6_DOUT6; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR7_DOUT7; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR8_DOUT8; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR9_DOUT9; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR10_DOUT10; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR11_DOUT11; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR12_DOUT12; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR13_DOUT13; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR14_DOUT14; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR15_DOUT15; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR16_DOUT16; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR17_DOUT17; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR18_DOUT18; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR19_DOUT19; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR20_DOUT20; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR21_DOUT21; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR22_DOUT22; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR23_DOUT23; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR24_DOUT24; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR25_DOUT25; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR26_DOUT26; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR27_DOUT27; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR28_DOUT28; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR29_DOUT29; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR30_DOUT30; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t MDIOS_DOUTR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MDIOS_DOUTR31_DOUT31; // Output data sent to MDIO Master during read frames
};

template<>
struct peripheral_t<STM32F767, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, MDIOS>
{
    using T = stm32f767_mdios_t;
    static T& V;
};

using mdios_t = peripheral_t<svd, MDIOS>;

template<int INST> struct mdios_traits {};

template<> struct mdios_traits<0>
{
    using mdios = mdios_t;
    static constexpr signal_t MDC = MDIOS_MDC;
    static constexpr signal_t MDIO = MDIOS_MDIO;
};
