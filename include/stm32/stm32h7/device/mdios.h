#pragma once

////
//
//      STM32H7 MDIOS peripherals
//
///

// MDIOS: Management data input/output slave

struct stm32h742x_mdios_t
{
    volatile uint32_t CR; // MDIOS configuration register
    volatile uint32_t WRFR; // MDIOS write flag register
    volatile uint32_t CWRFR; // MDIOS clear write flag register
    volatile uint32_t RDFR; // MDIOS read flag register
    volatile uint32_t CRDFR; // MDIOS clear read flag register
    volatile uint32_t SR; // MDIOS status register
    volatile uint32_t CLRFR; // MDIOS clear flag register
    volatile uint32_t DINR0; // MDIOS input data register 0
    volatile uint32_t DINR1; // MDIOS input data register 1
    volatile uint32_t DINR2; // MDIOS input data register 2
    volatile uint32_t DINR3; // MDIOS input data register 3
    volatile uint32_t DINR4; // MDIOS input data register 4
    volatile uint32_t DINR5; // MDIOS input data register 5
    volatile uint32_t DINR6; // MDIOS input data register 6
    volatile uint32_t DINR7; // MDIOS input data register 7
    volatile uint32_t DINR8; // MDIOS input data register 8
    volatile uint32_t DINR9; // MDIOS input data register 9
    volatile uint32_t DINR10; // MDIOS input data register 10
    volatile uint32_t DINR11; // MDIOS input data register 11
    volatile uint32_t DINR12; // MDIOS input data register 12
    volatile uint32_t DINR13; // MDIOS input data register 13
    volatile uint32_t DINR14; // MDIOS input data register 14
    volatile uint32_t DINR15; // MDIOS input data register 15
    volatile uint32_t DINR16; // MDIOS input data register 16
    volatile uint32_t DINR17; // MDIOS input data register 17
    volatile uint32_t DINR18; // MDIOS input data register 18
    volatile uint32_t DINR19; // MDIOS input data register 19
    volatile uint32_t DINR20; // MDIOS input data register 20
    volatile uint32_t DINR21; // MDIOS input data register 21
    volatile uint32_t DINR22; // MDIOS input data register 22
    volatile uint32_t DINR23; // MDIOS input data register 23
    volatile uint32_t DINR24; // MDIOS input data register 24
    volatile uint32_t DINR25; // MDIOS input data register 25
    volatile uint32_t DINR26; // MDIOS input data register 26
    volatile uint32_t DINR27; // MDIOS input data register 27
    volatile uint32_t DINR28; // MDIOS input data register 28
    volatile uint32_t DINR29; // MDIOS input data register 29
    volatile uint32_t DINR30; // MDIOS input data register 30
    volatile uint32_t DINR31; // MDIOS input data register 31
    volatile uint32_t DOUTR0; // MDIOS output data register 0
    volatile uint32_t DOUTR1; // MDIOS output data register 1
    volatile uint32_t DOUTR2; // MDIOS output data register 2
    volatile uint32_t DOUTR3; // MDIOS output data register 3
    volatile uint32_t DOUTR4; // MDIOS output data register 4
    volatile uint32_t DOUTR5; // MDIOS output data register 5
    volatile uint32_t DOUTR6; // MDIOS output data register 6
    volatile uint32_t DOUTR7; // MDIOS output data register 7
    volatile uint32_t DOUTR8; // MDIOS output data register 8
    volatile uint32_t DOUTR9; // MDIOS output data register 9
    volatile uint32_t DOUTR10; // MDIOS output data register 10
    volatile uint32_t DOUTR11; // MDIOS output data register 11
    volatile uint32_t DOUTR12; // MDIOS output data register 12
    volatile uint32_t DOUTR13; // MDIOS output data register 13
    volatile uint32_t DOUTR14; // MDIOS output data register 14
    volatile uint32_t DOUTR15; // MDIOS output data register 15
    volatile uint32_t DOUTR16; // MDIOS output data register 16
    volatile uint32_t DOUTR17; // MDIOS output data register 17
    volatile uint32_t DOUTR18; // MDIOS output data register 18
    volatile uint32_t DOUTR19; // MDIOS output data register 19
    volatile uint32_t DOUTR20; // MDIOS output data register 20
    volatile uint32_t DOUTR21; // MDIOS output data register 21
    volatile uint32_t DOUTR22; // MDIOS output data register 22
    volatile uint32_t DOUTR23; // MDIOS output data register 23
    volatile uint32_t DOUTR24; // MDIOS output data register 24
    volatile uint32_t DOUTR25; // MDIOS output data register 25
    volatile uint32_t DOUTR26; // MDIOS output data register 26
    volatile uint32_t DOUTR27; // MDIOS output data register 27
    volatile uint32_t DOUTR28; // MDIOS output data register 28
    volatile uint32_t DOUTR29; // MDIOS output data register 29
    volatile uint32_t DOUTR30; // MDIOS output data register 30
    volatile uint32_t DOUTR31; // MDIOS output data register 31

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN = 0x1; // Peripheral enable
    static constexpr uint32_t CR_WRIE = 0x2; // Register write interrupt enable
    static constexpr uint32_t CR_RDIE = 0x4; // Register Read Interrupt Enable
    static constexpr uint32_t CR_EIE = 0x8; // Error interrupt enable
    static constexpr uint32_t CR_DPC = 0x80; // Disable Preamble Check
    typedef bit_field_t<8, 0x1f> CR_PORT_ADDRESS; // Slaves&#39;s address

    static constexpr uint32_t WRFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRFR_WRF; // Write flags for MDIO registers 0 to 31

    static constexpr uint32_t CWRFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CWRFR_CWRF; // Clear the write flag

    static constexpr uint32_t RDFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RDFR_RDF; // Read flags for MDIO registers 0 to 31

    static constexpr uint32_t CRDFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CRDFR_CRDF; // Clear the read flag

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_PERF = 0x1; // Preamble error flag
    static constexpr uint32_t SR_SERF = 0x2; // Start error flag
    static constexpr uint32_t SR_TERF = 0x4; // Turnaround error flag

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_CPERF = 0x1; // Clear the preamble error flag
    static constexpr uint32_t CLRFR_CSERF = 0x2; // Clear the start error flag
    static constexpr uint32_t CLRFR_CTERF = 0x4; // Clear the turnaround error flag

    static constexpr uint32_t DINR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR0_DIN0; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR1_DIN1; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR2_DIN2; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR3_DIN3; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR4_DIN4; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR5_DIN5; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR6_DIN6; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR7_DIN7; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR8_DIN8; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR9_DIN9; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR10_DIN10; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR11_DIN11; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR12_DIN12; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR13_DIN13; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR14_DIN14; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR15_DIN15; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR16_DIN16; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR17_DIN17; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR18_DIN18; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR19_DIN19; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR20_DIN20; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR21_DIN21; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR22_DIN22; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR23_DIN23; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR24_DIN24; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR25_DIN25; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR26_DIN26; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR27_DIN27; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR28_DIN28; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR29_DIN29; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR30_DIN30; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DINR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DINR31_DIN31; // Input data received from MDIO Master during write frames

    static constexpr uint32_t DOUTR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR0_DOUT0; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR1_DOUT1; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR2_DOUT2; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR3_DOUT3; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR4_DOUT4; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR5_DOUT5; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR6_DOUT6; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR7_DOUT7; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR8_DOUT8; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR9_DOUT9; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR10_DOUT10; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR11_DOUT11; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR12_DOUT12; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR13_DOUT13; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR14_DOUT14; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR15_DOUT15; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR16_DOUT16; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR17_DOUT17; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR18_DOUT18; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR19_DOUT19; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR20_DOUT20; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR21_DOUT21; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR22_DOUT22; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR23_DOUT23; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR24_DOUT24; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR25_DOUT25; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR26_DOUT26; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR27_DOUT27; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR28_DOUT28; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR29_DOUT29; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR30_DOUT30; // Output data sent to MDIO Master during read frames

    static constexpr uint32_t DOUTR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DOUTR31_DOUT31; // Output data sent to MDIO Master during read frames
};

// MDIOS: Management data input/output slave

struct stm32h745_cm4_mdios_t
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
struct peripheral_t<STM32H742x, MDIOS>
{
    using T = stm32h742x_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, MDIOS>
{
    using T = stm32h742x_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, MDIOS>
{
    using T = stm32h742x_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, MDIOS>
{
    using T = stm32h745_cm4_mdios_t;
    static T& V;
};

using mdios_t = peripheral_t<svd, MDIOS>;

template<int INST> struct mdios_traits {};

template<> struct mdios_traits<0>
{
    using mdios = mdios_t;
    static constexpr signal_t MDC = MDIOS_MDC;
    static constexpr signal_t MDIO = MDIOS_MDIO;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1HENR |= RCC::T::APB1HENR_MDIOSEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1HENR &= ~RCC::T::APB1HENR_MDIOSEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1HRSTR |= RCC::T::APB1HRSTR_MDIOSRST;
    }
};
