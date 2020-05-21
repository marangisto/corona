#pragma once

////
//
//      STM32H7 MDIOS peripherals
//
////

////
//
//      Management data input/output slave
//
////

struct stm32h742x_mdios_t
{
    volatile uint32_t CR;      // [read-write] MDIOS configuration register
    volatile uint32_t WRFR;    // [read-only] MDIOS write flag register
    volatile uint32_t CWRFR;   // [read-write] MDIOS clear write flag register
    volatile uint32_t RDFR;    // [read-only] MDIOS read flag register
    volatile uint32_t CRDFR;   // [read-write] MDIOS clear read flag register
    volatile uint32_t SR;      // [read-only] MDIOS status register
    volatile uint32_t CLRFR;   // [read-write] MDIOS clear flag register
    volatile uint32_t DINR0;   // [read-only] MDIOS input data register 0
    volatile uint32_t DINR1;   // [read-only] MDIOS input data register 1
    volatile uint32_t DINR2;   // [read-only] MDIOS input data register 2
    volatile uint32_t DINR3;   // [read-only] MDIOS input data register 3
    volatile uint32_t DINR4;   // [read-only] MDIOS input data register 4
    volatile uint32_t DINR5;   // [read-only] MDIOS input data register 5
    volatile uint32_t DINR6;   // [read-only] MDIOS input data register 6
    volatile uint32_t DINR7;   // [read-only] MDIOS input data register 7
    volatile uint32_t DINR8;   // [read-only] MDIOS input data register 8
    volatile uint32_t DINR9;   // [read-only] MDIOS input data register 9
    volatile uint32_t DINR10;  // [read-only] MDIOS input data register 10
    volatile uint32_t DINR11;  // [read-only] MDIOS input data register 11
    volatile uint32_t DINR12;  // [read-only] MDIOS input data register 12
    volatile uint32_t DINR13;  // [read-only] MDIOS input data register 13
    volatile uint32_t DINR14;  // [read-only] MDIOS input data register 14
    volatile uint32_t DINR15;  // [read-only] MDIOS input data register 15
    volatile uint32_t DINR16;  // [read-only] MDIOS input data register 16
    volatile uint32_t DINR17;  // [read-only] MDIOS input data register 17
    volatile uint32_t DINR18;  // [read-only] MDIOS input data register 18
    volatile uint32_t DINR19;  // [read-only] MDIOS input data register 19
    volatile uint32_t DINR20;  // [read-only] MDIOS input data register 20
    volatile uint32_t DINR21;  // [read-only] MDIOS input data register 21
    volatile uint32_t DINR22;  // [read-only] MDIOS input data register 22
    volatile uint32_t DINR23;  // [read-only] MDIOS input data register 23
    volatile uint32_t DINR24;  // [read-only] MDIOS input data register 24
    volatile uint32_t DINR25;  // [read-only] MDIOS input data register 25
    volatile uint32_t DINR26;  // [read-only] MDIOS input data register 26
    volatile uint32_t DINR27;  // [read-only] MDIOS input data register 27
    volatile uint32_t DINR28;  // [read-only] MDIOS input data register 28
    volatile uint32_t DINR29;  // [read-only] MDIOS input data register 29
    volatile uint32_t DINR30;  // [read-only] MDIOS input data register 30
    volatile uint32_t DINR31;  // [read-only] MDIOS input data register 31
    volatile uint32_t DOUTR0;  // [read-write] MDIOS output data register 0
    volatile uint32_t DOUTR1;  // [read-write] MDIOS output data register 1
    volatile uint32_t DOUTR2;  // [read-write] MDIOS output data register 2
    volatile uint32_t DOUTR3;  // [read-write] MDIOS output data register 3
    volatile uint32_t DOUTR4;  // [read-write] MDIOS output data register 4
    volatile uint32_t DOUTR5;  // [read-write] MDIOS output data register 5
    volatile uint32_t DOUTR6;  // [read-write] MDIOS output data register 6
    volatile uint32_t DOUTR7;  // [read-write] MDIOS output data register 7
    volatile uint32_t DOUTR8;  // [read-write] MDIOS output data register 8
    volatile uint32_t DOUTR9;  // [read-write] MDIOS output data register 9
    volatile uint32_t DOUTR10; // [read-write] MDIOS output data register 10
    volatile uint32_t DOUTR11; // [read-write] MDIOS output data register 11
    volatile uint32_t DOUTR12; // [read-write] MDIOS output data register 12
    volatile uint32_t DOUTR13; // [read-write] MDIOS output data register 13
    volatile uint32_t DOUTR14; // [read-write] MDIOS output data register 14
    volatile uint32_t DOUTR15; // [read-write] MDIOS output data register 15
    volatile uint32_t DOUTR16; // [read-write] MDIOS output data register 16
    volatile uint32_t DOUTR17; // [read-write] MDIOS output data register 17
    volatile uint32_t DOUTR18; // [read-write] MDIOS output data register 18
    volatile uint32_t DOUTR19; // [read-write] MDIOS output data register 19
    volatile uint32_t DOUTR20; // [read-write] MDIOS output data register 20
    volatile uint32_t DOUTR21; // [read-write] MDIOS output data register 21
    volatile uint32_t DOUTR22; // [read-write] MDIOS output data register 22
    volatile uint32_t DOUTR23; // [read-write] MDIOS output data register 23
    volatile uint32_t DOUTR24; // [read-write] MDIOS output data register 24
    volatile uint32_t DOUTR25; // [read-write] MDIOS output data register 25
    volatile uint32_t DOUTR26; // [read-write] MDIOS output data register 26
    volatile uint32_t DOUTR27; // [read-write] MDIOS output data register 27
    volatile uint32_t DOUTR28; // [read-write] MDIOS output data register 28
    volatile uint32_t DOUTR29; // [read-write] MDIOS output data register 29
    volatile uint32_t DOUTR30; // [read-write] MDIOS output data register 30
    volatile uint32_t DOUTR31; // [read-write] MDIOS output data register 31

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_EN = 0x1;        // Peripheral enable
    static constexpr uint32_t CR_WRIE = 0x2;      // Register write interrupt enable
    static constexpr uint32_t CR_RDIE = 0x4;      // Register Read Interrupt Enable
    static constexpr uint32_t CR_EIE = 0x8;       // Error interrupt enable
    static constexpr uint32_t CR_DPC = 0x80;      // Disable Preamble Check
    template<uint32_t X>
    static constexpr uint32_t CR_PORT_ADDRESS =   // Slaves's address
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t WRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t CWRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t RDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_PERF = 0x1; // Preamble error flag
    static constexpr uint32_t SR_SERF = 0x2; // Start error flag
    static constexpr uint32_t SR_TERF = 0x4; // Turnaround error flag

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t CLRFR_CPERF = 0x1; // Clear the preamble error flag
    static constexpr uint32_t CLRFR_CSERF = 0x2; // Clear the start error flag
    static constexpr uint32_t CLRFR_CTERF = 0x4; // Clear the turnaround error flag

    static constexpr uint32_t DINR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR0_DIN0 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR1_DIN1 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR2_DIN2 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR3_DIN3 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR4_DIN4 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR5_DIN5 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR6_DIN6 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR7_DIN7 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR8_DIN8 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR9_DIN9 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR10_DIN10 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR11_DIN11 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR12_DIN12 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR13_DIN13 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR14_DIN14 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR15_DIN15 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR16_DIN16 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR17_DIN17 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR18_DIN18 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR19_DIN19 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR20_DIN20 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR21_DIN21 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR22_DIN22 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR23_DIN23 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR24_DIN24 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR25_DIN25 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR26_DIN26 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR27_DIN27 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR28_DIN28 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR29_DIN29 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR30_DIN30 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DINR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DINR31_DIN31 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR0_DOUT0 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR1_DOUT1 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR2_DOUT2 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR3_DOUT3 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR4_DOUT4 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR5_DOUT5 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR6_DOUT6 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR7_DOUT7 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR8_DOUT8 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR9_DOUT9 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR10_DOUT10 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR11_DOUT11 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR12_DOUT12 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR13_DOUT13 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR14_DOUT14 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR15_DOUT15 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR16_DOUT16 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR17_DOUT17 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR18_DOUT18 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR19_DOUT19 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR20_DOUT20 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR21_DOUT21 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR22_DOUT22 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR23_DOUT23 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR24_DOUT24 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR25_DOUT25 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR26_DOUT26 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR27_DOUT27 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR28_DOUT28 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR29_DOUT29 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR30_DOUT30 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DOUTR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOUTR31_DOUT31 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      Management data input/output slave
//
////

struct stm32h745_cm4_mdios_t
{
    volatile uint32_t MDIOS_CR;      // [read-write] MDIOS configuration register
    volatile uint32_t MDIOS_WRFR;    // [read-only] MDIOS write flag register
    volatile uint32_t MDIOS_CWRFR;   // [read-write] MDIOS clear write flag register
    volatile uint32_t MDIOS_RDFR;    // [read-only] MDIOS read flag register
    volatile uint32_t MDIOS_CRDFR;   // [read-write] MDIOS clear read flag register
    volatile uint32_t MDIOS_SR;      // [read-only] MDIOS status register
    volatile uint32_t MDIOS_CLRFR;   // [read-write] MDIOS clear flag register
    volatile uint32_t MDIOS_DINR0;   // [read-only] MDIOS input data register 0
    volatile uint32_t MDIOS_DINR1;   // [read-only] MDIOS input data register 1
    volatile uint32_t MDIOS_DINR2;   // [read-only] MDIOS input data register 2
    volatile uint32_t MDIOS_DINR3;   // [read-only] MDIOS input data register 3
    volatile uint32_t MDIOS_DINR4;   // [read-only] MDIOS input data register 4
    volatile uint32_t MDIOS_DINR5;   // [read-only] MDIOS input data register 5
    volatile uint32_t MDIOS_DINR6;   // [read-only] MDIOS input data register 6
    volatile uint32_t MDIOS_DINR7;   // [read-only] MDIOS input data register 7
    volatile uint32_t MDIOS_DINR8;   // [read-only] MDIOS input data register 8
    volatile uint32_t MDIOS_DINR9;   // [read-only] MDIOS input data register 9
    volatile uint32_t MDIOS_DINR10;  // [read-only] MDIOS input data register 10
    volatile uint32_t MDIOS_DINR11;  // [read-only] MDIOS input data register 11
    volatile uint32_t MDIOS_DINR12;  // [read-only] MDIOS input data register 12
    volatile uint32_t MDIOS_DINR13;  // [read-only] MDIOS input data register 13
    volatile uint32_t MDIOS_DINR14;  // [read-only] MDIOS input data register 14
    volatile uint32_t MDIOS_DINR15;  // [read-only] MDIOS input data register 15
    volatile uint32_t MDIOS_DINR16;  // [read-only] MDIOS input data register 16
    volatile uint32_t MDIOS_DINR17;  // [read-only] MDIOS input data register 17
    volatile uint32_t MDIOS_DINR18;  // [read-only] MDIOS input data register 18
    volatile uint32_t MDIOS_DINR19;  // [read-only] MDIOS input data register 19
    volatile uint32_t MDIOS_DINR20;  // [read-only] MDIOS input data register 20
    volatile uint32_t MDIOS_DINR21;  // [read-only] MDIOS input data register 21
    volatile uint32_t MDIOS_DINR22;  // [read-only] MDIOS input data register 22
    volatile uint32_t MDIOS_DINR23;  // [read-only] MDIOS input data register 23
    volatile uint32_t MDIOS_DINR24;  // [read-only] MDIOS input data register 24
    volatile uint32_t MDIOS_DINR25;  // [read-only] MDIOS input data register 25
    volatile uint32_t MDIOS_DINR26;  // [read-only] MDIOS input data register 26
    volatile uint32_t MDIOS_DINR27;  // [read-only] MDIOS input data register 27
    volatile uint32_t MDIOS_DINR28;  // [read-only] MDIOS input data register 28
    volatile uint32_t MDIOS_DINR29;  // [read-only] MDIOS input data register 29
    volatile uint32_t MDIOS_DINR30;  // [read-only] MDIOS input data register 30
    volatile uint32_t MDIOS_DINR31;  // [read-only] MDIOS input data register 31
    volatile uint32_t MDIOS_DOUTR0;  // [read-write] MDIOS output data register 0
    volatile uint32_t MDIOS_DOUTR1;  // [read-write] MDIOS output data register 1
    volatile uint32_t MDIOS_DOUTR2;  // [read-write] MDIOS output data register 2
    volatile uint32_t MDIOS_DOUTR3;  // [read-write] MDIOS output data register 3
    volatile uint32_t MDIOS_DOUTR4;  // [read-write] MDIOS output data register 4
    volatile uint32_t MDIOS_DOUTR5;  // [read-write] MDIOS output data register 5
    volatile uint32_t MDIOS_DOUTR6;  // [read-write] MDIOS output data register 6
    volatile uint32_t MDIOS_DOUTR7;  // [read-write] MDIOS output data register 7
    volatile uint32_t MDIOS_DOUTR8;  // [read-write] MDIOS output data register 8
    volatile uint32_t MDIOS_DOUTR9;  // [read-write] MDIOS output data register 9
    volatile uint32_t MDIOS_DOUTR10; // [read-write] MDIOS output data register 10
    volatile uint32_t MDIOS_DOUTR11; // [read-write] MDIOS output data register 11
    volatile uint32_t MDIOS_DOUTR12; // [read-write] MDIOS output data register 12
    volatile uint32_t MDIOS_DOUTR13; // [read-write] MDIOS output data register 13
    volatile uint32_t MDIOS_DOUTR14; // [read-write] MDIOS output data register 14
    volatile uint32_t MDIOS_DOUTR15; // [read-write] MDIOS output data register 15
    volatile uint32_t MDIOS_DOUTR16; // [read-write] MDIOS output data register 16
    volatile uint32_t MDIOS_DOUTR17; // [read-write] MDIOS output data register 17
    volatile uint32_t MDIOS_DOUTR18; // [read-write] MDIOS output data register 18
    volatile uint32_t MDIOS_DOUTR19; // [read-write] MDIOS output data register 19
    volatile uint32_t MDIOS_DOUTR20; // [read-write] MDIOS output data register 20
    volatile uint32_t MDIOS_DOUTR21; // [read-write] MDIOS output data register 21
    volatile uint32_t MDIOS_DOUTR22; // [read-write] MDIOS output data register 22
    volatile uint32_t MDIOS_DOUTR23; // [read-write] MDIOS output data register 23
    volatile uint32_t MDIOS_DOUTR24; // [read-write] MDIOS output data register 24
    volatile uint32_t MDIOS_DOUTR25; // [read-write] MDIOS output data register 25
    volatile uint32_t MDIOS_DOUTR26; // [read-write] MDIOS output data register 26
    volatile uint32_t MDIOS_DOUTR27; // [read-write] MDIOS output data register 27
    volatile uint32_t MDIOS_DOUTR28; // [read-write] MDIOS output data register 28
    volatile uint32_t MDIOS_DOUTR29; // [read-write] MDIOS output data register 29
    volatile uint32_t MDIOS_DOUTR30; // [read-write] MDIOS output data register 30
    volatile uint32_t MDIOS_DOUTR31; // [read-write] MDIOS output data register 31

    static constexpr uint32_t MDIOS_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_CR_EN = 0x1;        // Peripheral enable
    static constexpr uint32_t MDIOS_CR_WRIE = 0x2;      // Register write interrupt enable
    static constexpr uint32_t MDIOS_CR_RDIE = 0x4;      // Register Read Interrupt Enable
    static constexpr uint32_t MDIOS_CR_EIE = 0x8;       // Error interrupt enable
    static constexpr uint32_t MDIOS_CR_DPC = 0x80;      // Disable Preamble Check
    template<uint32_t X>
    static constexpr uint32_t MDIOS_CR_PORT_ADDRESS =   // Slaves's address
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t MDIOS_WRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_CWRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_RDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_CRDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_SR_PERF = 0x1; // Preamble error flag
    static constexpr uint32_t MDIOS_SR_SERF = 0x2; // Start error flag
    static constexpr uint32_t MDIOS_SR_TERF = 0x4; // Turnaround error flag

    static constexpr uint32_t MDIOS_CLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_CLRFR_CPERF = 0x1; // Clear the preamble error flag
    static constexpr uint32_t MDIOS_CLRFR_CSERF = 0x2; // Clear the start error flag
    static constexpr uint32_t MDIOS_CLRFR_CTERF = 0x4; // Clear the turnaround error flag

    static constexpr uint32_t MDIOS_DINR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR0_DIN0 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR1_DIN1 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR2_DIN2 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR3_DIN3 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR4_DIN4 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR5_DIN5 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR6_DIN6 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR7_DIN7 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR8_DIN8 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR9_DIN9 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR10_DIN10 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR11_DIN11 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR12_DIN12 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR13_DIN13 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR14_DIN14 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR15_DIN15 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR16_DIN16 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR17_DIN17 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR18_DIN18 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR19_DIN19 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR20_DIN20 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR21_DIN21 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR22_DIN22 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR23_DIN23 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR24_DIN24 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR25_DIN25 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR26_DIN26 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR27_DIN27 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR28_DIN28 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR29_DIN29 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR30_DIN30 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR31_DIN31 =   // Input data received from MDIO Master during write frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR0_DOUT0 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR1_DOUT1 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR2_DOUT2 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR3_DOUT3 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR4_DOUT4 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR5_DOUT5 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR6_DOUT6 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR7_DOUT7 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR8_DOUT8 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR9_DOUT9 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR10_DOUT10 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR11_DOUT11 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR12_DOUT12 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR13_DOUT13 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR14_DOUT14 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR15_DOUT15 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR16_DOUT16 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR17_DOUT17 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR18_DOUT18 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR19_DOUT19 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR20_DOUT20 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR21_DOUT21 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR22_DOUT22 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR23_DOUT23 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR24_DOUT24 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR25_DOUT25 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR26_DOUT26 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR27_DOUT27 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR28_DOUT28 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR29_DOUT29 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR30_DOUT30 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR31_DOUT31 =   // Output data sent to MDIO Master during read frames
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, MDIOS>
{
    typedef stm32h742x_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, MDIOS>
{
    typedef stm32h742x_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, MDIOS>
{
    typedef stm32h742x_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, MDIOS>
{
    typedef stm32h745_cm4_mdios_t T;
    static T& V;
};

using mdios_t = peripheral_t<mcu_svd, MDIOS>;

