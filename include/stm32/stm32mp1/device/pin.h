#pragma once

////
//
//      STM32MP1 pins
//
////

enum gpio_port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PD = 0x3
    , PE = 0x4
    , PF = 0x5
    , PG = 0x6
    , PH = 0x7
    , PI = 0x8
    , PJ = 0x9
    , PK = 0xa
    , PZ = 0x19
    };

template<gpio_port_t PORT> struct gpio_traits_t {};

template<> struct gpio_traits_t<PA>
{
    static constexpr peripheral_enum_t peripheral = GPIOA;
};

template<> struct gpio_traits_t<PB>
{
    static constexpr peripheral_enum_t peripheral = GPIOB;
};

template<> struct gpio_traits_t<PC>
{
    static constexpr peripheral_enum_t peripheral = GPIOC;
};

template<> struct gpio_traits_t<PD>
{
    static constexpr peripheral_enum_t peripheral = GPIOD;
};

template<> struct gpio_traits_t<PE>
{
    static constexpr peripheral_enum_t peripheral = GPIOE;
};

template<> struct gpio_traits_t<PF>
{
    static constexpr peripheral_enum_t peripheral = GPIOF;
};

template<> struct gpio_traits_t<PG>
{
    static constexpr peripheral_enum_t peripheral = GPIOG;
};

template<> struct gpio_traits_t<PH>
{
    static constexpr peripheral_enum_t peripheral = GPIOH;
};

template<> struct gpio_traits_t<PI>
{
    static constexpr peripheral_enum_t peripheral = GPIOI;
};

template<> struct gpio_traits_t<PJ>
{
    static constexpr peripheral_enum_t peripheral = GPIOJ;
};

template<> struct gpio_traits_t<PK>
{
    static constexpr peripheral_enum_t peripheral = GPIOK;
};

template<> struct gpio_traits_t<PZ>
{
    static constexpr peripheral_enum_t peripheral = GPIOZ;
};

enum gpio_pin_t
    { PA0 = 0x0
    , PA1 = 0x1
    , PA2 = 0x2
    , PA3 = 0x3
    , PA4 = 0x4
    , PA5 = 0x5
    , PA6 = 0x6
    , PA7 = 0x7
    , PA8 = 0x8
    , PA9 = 0x9
    , PA10 = 0xa
    , PA11 = 0xb
    , PA12 = 0xc
    , PA13 = 0xd
    , PA14 = 0xe
    , PA15 = 0xf
    , PB0 = 0x10
    , PB1 = 0x11
    , PB2 = 0x12
    , PB3 = 0x13
    , PB4 = 0x14
    , PB5 = 0x15
    , PB6 = 0x16
    , PB7 = 0x17
    , PB8 = 0x18
    , PB9 = 0x19
    , PB10 = 0x1a
    , PB11 = 0x1b
    , PB12 = 0x1c
    , PB13 = 0x1d
    , PB14 = 0x1e
    , PB15 = 0x1f
    , PC0 = 0x20
    , PC1 = 0x21
    , PC2 = 0x22
    , PC3 = 0x23
    , PC4 = 0x24
    , PC5 = 0x25
    , PC6 = 0x26
    , PC7 = 0x27
    , PC8 = 0x28
    , PC9 = 0x29
    , PC10 = 0x2a
    , PC11 = 0x2b
    , PC12 = 0x2c
    , PC13 = 0x2d
    , PC14 = 0x2e
    , PC15 = 0x2f
    , PD0 = 0x30
    , PD1 = 0x31
    , PD2 = 0x32
    , PD3 = 0x33
    , PD4 = 0x34
    , PD5 = 0x35
    , PD6 = 0x36
    , PD7 = 0x37
    , PD8 = 0x38
    , PD9 = 0x39
    , PD10 = 0x3a
    , PD11 = 0x3b
    , PD12 = 0x3c
    , PD13 = 0x3d
    , PD14 = 0x3e
    , PD15 = 0x3f
    , PE0 = 0x40
    , PE1 = 0x41
    , PE2 = 0x42
    , PE3 = 0x43
    , PE4 = 0x44
    , PE5 = 0x45
    , PE6 = 0x46
    , PE7 = 0x47
    , PE8 = 0x48
    , PE9 = 0x49
    , PE10 = 0x4a
    , PE11 = 0x4b
    , PE12 = 0x4c
    , PE13 = 0x4d
    , PE14 = 0x4e
    , PE15 = 0x4f
    , PF0 = 0x50
    , PF1 = 0x51
    , PF2 = 0x52
    , PF3 = 0x53
    , PF4 = 0x54
    , PF5 = 0x55
    , PF6 = 0x56
    , PF7 = 0x57
    , PF8 = 0x58
    , PF9 = 0x59
    , PF10 = 0x5a
    , PF11 = 0x5b
    , PF12 = 0x5c
    , PF13 = 0x5d
    , PF14 = 0x5e
    , PF15 = 0x5f
    , PG0 = 0x60
    , PG1 = 0x61
    , PG2 = 0x62
    , PG3 = 0x63
    , PG4 = 0x64
    , PG5 = 0x65
    , PG6 = 0x66
    , PG7 = 0x67
    , PG8 = 0x68
    , PG9 = 0x69
    , PG10 = 0x6a
    , PG11 = 0x6b
    , PG12 = 0x6c
    , PG13 = 0x6d
    , PG14 = 0x6e
    , PG15 = 0x6f
    , PH0 = 0x70
    , PH1 = 0x71
    , PH2 = 0x72
    , PH3 = 0x73
    , PH4 = 0x74
    , PH5 = 0x75
    , PH6 = 0x76
    , PH7 = 0x77
    , PH8 = 0x78
    , PH9 = 0x79
    , PH10 = 0x7a
    , PH11 = 0x7b
    , PH12 = 0x7c
    , PH13 = 0x7d
    , PH14 = 0x7e
    , PH15 = 0x7f
    , PI0 = 0x80
    , PI1 = 0x81
    , PI2 = 0x82
    , PI3 = 0x83
    , PI4 = 0x84
    , PI5 = 0x85
    , PI6 = 0x86
    , PI7 = 0x87
    , PI8 = 0x88
    , PI9 = 0x89
    , PI10 = 0x8a
    , PI11 = 0x8b
    , PI12 = 0x8c
    , PI13 = 0x8d
    , PI14 = 0x8e
    , PI15 = 0x8f
    , PJ0 = 0x90
    , PJ1 = 0x91
    , PJ2 = 0x92
    , PJ3 = 0x93
    , PJ4 = 0x94
    , PJ5 = 0x95
    , PJ6 = 0x96
    , PJ7 = 0x97
    , PJ8 = 0x98
    , PJ9 = 0x99
    , PJ10 = 0x9a
    , PJ11 = 0x9b
    , PJ12 = 0x9c
    , PJ13 = 0x9d
    , PJ14 = 0x9e
    , PJ15 = 0x9f
    , PK0 = 0xa0
    , PK1 = 0xa1
    , PK2 = 0xa2
    , PK3 = 0xa3
    , PK4 = 0xa4
    , PK5 = 0xa5
    , PK6 = 0xa6
    , PK7 = 0xa7
    , PZ0 = 0x190
    , PZ1 = 0x191
    , PZ2 = 0x192
    , PZ3 = 0x193
    , PZ4 = 0x194
    , PZ5 = 0x195
    , PZ6 = 0x196
    , PZ7 = 0x197
    };

enum alt_fun_t
    { AF0
    , AF1
    , AF2
    , AF3
    , AF4
    , AF5
    , AF6
    , AF7
    , AF8
    , AF9
    , AF10
    , AF11
    , AF12
    , AF13
    , AF14
    };

enum alternate_function_t
    { CEC
    , DCMI_D0
    , DCMI_D1
    , DCMI_D10
    , DCMI_D11
    , DCMI_D12
    , DCMI_D13
    , DCMI_D2
    , DCMI_D3
    , DCMI_D4
    , DCMI_D5
    , DCMI_D6
    , DCMI_D7
    , DCMI_D8
    , DCMI_D9
    , DCMI_HSYNC
    , DCMI_PIXCLK
    , DCMI_VSYNC
    , DEBUG_DBTRGI
    , DEBUG_DBTRGO
    , DEBUG_TRACECLK
    , DEBUG_TRACED0
    , DEBUG_TRACED1
    , DEBUG_TRACED10
    , DEBUG_TRACED11
    , DEBUG_TRACED12
    , DEBUG_TRACED13
    , DEBUG_TRACED14
    , DEBUG_TRACED15
    , DEBUG_TRACED2
    , DEBUG_TRACED3
    , DEBUG_TRACED4
    , DEBUG_TRACED5
    , DEBUG_TRACED6
    , DEBUG_TRACED7
    , DEBUG_TRACED8
    , DEBUG_TRACED9
    , DFSDM1_CKIN0
    , DFSDM1_CKIN1
    , DFSDM1_CKIN2
    , DFSDM1_CKIN3
    , DFSDM1_CKIN4
    , DFSDM1_CKIN5
    , DFSDM1_CKIN6
    , DFSDM1_CKIN7
    , DFSDM1_CKOUT
    , DFSDM1_DATIN0
    , DFSDM1_DATIN1
    , DFSDM1_DATIN2
    , DFSDM1_DATIN3
    , DFSDM1_DATIN4
    , DFSDM1_DATIN5
    , DFSDM1_DATIN6
    , DFSDM1_DATIN7
    , DSIHOST_TE
    , ETH1_CLK
    , ETH1_CLK125
    , ETH1_COL
    , ETH1_CRS
    , ETH1_CRS_DV
    , ETH1_GTX_CLK
    , ETH1_MDC
    , ETH1_MDIO
    , ETH1_PHY_INTN
    , ETH1_PPS_OUT
    , ETH1_REF_CLK
    , ETH1_RXD0
    , ETH1_RXD1
    , ETH1_RXD2
    , ETH1_RXD3
    , ETH1_RXD4
    , ETH1_RXD5
    , ETH1_RXD6
    , ETH1_RXD7
    , ETH1_RX_CLK
    , ETH1_RX_CTL
    , ETH1_RX_DV
    , ETH1_RX_ER
    , ETH1_TXD0
    , ETH1_TXD1
    , ETH1_TXD2
    , ETH1_TXD3
    , ETH1_TXD4
    , ETH1_TXD5
    , ETH1_TXD6
    , ETH1_TXD7
    , ETH1_TX_CLK
    , ETH1_TX_CTL
    , ETH1_TX_EN
    , ETH1_TX_ER
    , FDCAN1_RX
    , FDCAN1_TX
    , FDCAN2_RX
    , FDCAN2_TX
    , FMC_ALE
    , FMC_CLE
    , FMC_D0
    , FMC_D1
    , FMC_D10
    , FMC_D11
    , FMC_D12
    , FMC_D13
    , FMC_D14
    , FMC_D15
    , FMC_D2
    , FMC_D3
    , FMC_D4
    , FMC_D5
    , FMC_D6
    , FMC_D7
    , FMC_D8
    , FMC_D9
    , FMC_NCE
    , FMC_NCE2
    , FMC_NOE
    , FMC_NWAIT
    , FMC_NWE
    , HDP_HDP0
    , HDP_HDP1
    , HDP_HDP2
    , HDP_HDP3
    , HDP_HDP4
    , HDP_HDP5
    , HDP_HDP6
    , HDP_HDP7
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
    , I2C4_SCL
    , I2C4_SDA
    , I2C4_SMBA
    , I2C5_SCL
    , I2C5_SDA
    , I2C5_SMBA
    , I2C6_SCL
    , I2C6_SDA
    , I2C6_SMBA
    , I2S1_CK
    , I2S1_MCK
    , I2S1_SDI
    , I2S1_SDO
    , I2S1_WS
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SDI
    , I2S2_SDO
    , I2S2_WS
    , I2S3_CK
    , I2S3_MCK
    , I2S3_SDI
    , I2S3_SDO
    , I2S3_WS
    , I2S_CKIN
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM1_OUT
    , LPTIM2_ETR
    , LPTIM2_IN1
    , LPTIM2_IN2
    , LPTIM2_OUT
    , LPTIM3_OUT
    , LPTIM4_OUT
    , LPTIM5_OUT
    , LTDC_B0
    , LTDC_B1
    , LTDC_B2
    , LTDC_B3
    , LTDC_B4
    , LTDC_B5
    , LTDC_B6
    , LTDC_B7
    , LTDC_CLK
    , LTDC_DE
    , LTDC_G0
    , LTDC_G1
    , LTDC_G2
    , LTDC_G3
    , LTDC_G4
    , LTDC_G5
    , LTDC_G6
    , LTDC_G7
    , LTDC_HSYNC
    , LTDC_R0
    , LTDC_R1
    , LTDC_R2
    , LTDC_R3
    , LTDC_R4
    , LTDC_R5
    , LTDC_R6
    , LTDC_R7
    , LTDC_VSYNC
    , MDIOS_MDC
    , MDIOS_MDIO
    , QUADSPI_BK1_IO0
    , QUADSPI_BK1_IO1
    , QUADSPI_BK1_IO2
    , QUADSPI_BK1_IO3
    , QUADSPI_BK1_NCS
    , QUADSPI_BK2_IO0
    , QUADSPI_BK2_IO1
    , QUADSPI_BK2_IO2
    , QUADSPI_BK2_IO3
    , QUADSPI_BK2_NCS
    , QUADSPI_CLK
    , RCC_MCO_1
    , RCC_MCO_2
    , RTC_OUT2
    , RTC_OUT_ALARM2
    , RTC_OUT_CALIB2
    , RTC_REFIN
    , SAI1_CK1
    , SAI1_CK2
    , SAI1_D1
    , SAI1_D2
    , SAI1_D3
    , SAI1_D4
    , SAI1_FS_A
    , SAI1_FS_B
    , SAI1_MCLK_A
    , SAI1_MCLK_B
    , SAI1_SCK_A
    , SAI1_SCK_B
    , SAI1_SD_A
    , SAI1_SD_B
    , SAI2_FS_A
    , SAI2_FS_B
    , SAI2_MCLK_A
    , SAI2_MCLK_B
    , SAI2_SCK_A
    , SAI2_SCK_B
    , SAI2_SD_A
    , SAI2_SD_B
    , SAI3_FS_A
    , SAI3_FS_B
    , SAI3_MCLK_A
    , SAI3_MCLK_B
    , SAI3_SCK_A
    , SAI3_SCK_B
    , SAI3_SD_A
    , SAI3_SD_B
    , SAI4_CK1
    , SAI4_CK2
    , SAI4_D1
    , SAI4_D2
    , SAI4_D3
    , SAI4_D4
    , SAI4_FS_A
    , SAI4_FS_B
    , SAI4_MCLK_A
    , SAI4_MCLK_B
    , SAI4_SCK_A
    , SAI4_SCK_B
    , SAI4_SD_A
    , SAI4_SD_B
    , SDMMC1_CDIR
    , SDMMC1_CK
    , SDMMC1_CKIN
    , SDMMC1_CMD
    , SDMMC1_D0
    , SDMMC1_D0DIR
    , SDMMC1_D1
    , SDMMC1_D123DIR
    , SDMMC1_D2
    , SDMMC1_D3
    , SDMMC1_D4
    , SDMMC1_D5
    , SDMMC1_D6
    , SDMMC1_D7
    , SDMMC2_CDIR
    , SDMMC2_CK
    , SDMMC2_CKIN
    , SDMMC2_CMD
    , SDMMC2_D0
    , SDMMC2_D0DIR
    , SDMMC2_D1
    , SDMMC2_D123DIR
    , SDMMC2_D2
    , SDMMC2_D3
    , SDMMC2_D4
    , SDMMC2_D5
    , SDMMC2_D6
    , SDMMC2_D7
    , SDMMC3_CDIR
    , SDMMC3_CK
    , SDMMC3_CKIN
    , SDMMC3_CMD
    , SDMMC3_D0
    , SDMMC3_D0DIR
    , SDMMC3_D1
    , SDMMC3_D123DIR
    , SDMMC3_D2
    , SDMMC3_D3
    , SPDIFRX_IN0
    , SPDIFRX_IN1
    , SPDIFRX_IN2
    , SPDIFRX_IN3
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_SCK
    , SPI3_MISO
    , SPI3_MOSI
    , SPI3_NSS
    , SPI3_SCK
    , SPI4_MISO
    , SPI4_MOSI
    , SPI4_NSS
    , SPI4_SCK
    , SPI5_MISO
    , SPI5_MOSI
    , SPI5_NSS
    , SPI5_SCK
    , SPI6_MISO
    , SPI6_MOSI
    , SPI6_NSS
    , SPI6_SCK
    , TIM12_CH1
    , TIM12_CH2
    , TIM13_CH1
    , TIM14_CH1
    , TIM15_BKIN
    , TIM15_CH1
    , TIM15_CH1N
    , TIM15_CH2
    , TIM16_BKIN
    , TIM16_CH1
    , TIM16_CH1N
    , TIM17_BKIN
    , TIM17_CH1
    , TIM17_CH1N
    , TIM1_BKIN
    , TIM1_BKIN2
    , TIM1_CH1
    , TIM1_CH1N
    , TIM1_CH2
    , TIM1_CH2N
    , TIM1_CH3
    , TIM1_CH3N
    , TIM1_CH4
    , TIM1_ETR
    , TIM2_CH1
    , TIM2_CH2
    , TIM2_CH3
    , TIM2_CH4
    , TIM2_ETR
    , TIM3_CH1
    , TIM3_CH2
    , TIM3_CH3
    , TIM3_CH4
    , TIM3_ETR
    , TIM4_CH1
    , TIM4_CH2
    , TIM4_CH3
    , TIM4_CH4
    , TIM4_ETR
    , TIM5_CH1
    , TIM5_CH2
    , TIM5_CH3
    , TIM5_CH4
    , TIM5_ETR
    , TIM8_BKIN
    , TIM8_BKIN2
    , TIM8_CH1
    , TIM8_CH1N
    , TIM8_CH2
    , TIM8_CH2N
    , TIM8_CH3
    , TIM8_CH3N
    , TIM8_CH4
    , TIM8_ETR
    , UART4_CTS
    , UART4_DE
    , UART4_RTS
    , UART4_RX
    , UART4_TX
    , UART5_CTS
    , UART5_DE
    , UART5_RTS
    , UART5_RX
    , UART5_TX
    , UART7_CTS
    , UART7_DE
    , UART7_RTS
    , UART7_RX
    , UART7_TX
    , UART8_CTS
    , UART8_DE
    , UART8_RTS
    , UART8_RX
    , UART8_TX
    , USART1_CK
    , USART1_CTS
    , USART1_DE
    , USART1_NSS
    , USART1_RTS
    , USART1_RX
    , USART1_TX
    , USART2_CK
    , USART2_CTS
    , USART2_DE
    , USART2_NSS
    , USART2_RTS
    , USART2_RX
    , USART2_TX
    , USART3_CK
    , USART3_CTS
    , USART3_DE
    , USART3_NSS
    , USART3_RTS
    , USART3_RX
    , USART3_TX
    , USART6_CK
    , USART6_CTS
    , USART6_DE
    , USART6_NSS
    , USART6_RTS
    , USART6_RX
    , USART6_TX
    , USB_OTG_FS_SOF
    , USB_OTG_HS_SOF
    };

static constexpr gpio_conf_t gpio_conf = mcu_traits<target>::gpio_conf;

template<gpio_pin_t PIN, alternate_function_t ALT>
struct alt_fun_traits
{
    static constexpr alt_fun_t AF = AF0;

    static_assert
        ( always_false_i<PIN>::value
        , "alternate function not available on pin!"
        );
};

template<bool AVAIL>
struct available_alt_fun_t
{
    typedef alt_fun_t type;

    static_assert
        ( always_false_i<AVAIL>::value
        , "alternate function not available on pin for target mcu!"
        );
};

template<>
struct available_alt_fun_t<true>
{
    typedef alt_fun_t type;
};

template<bool AVAIL>
using alt_fun = typename available_alt_fun_t<AVAIL>::type;
template<> struct alt_fun_traits<PA0, ETH1_CRS> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA0, SAI2_SD_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA0, SDMMC2_CMD> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA0, TIM15_BKIN> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA0, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA0, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA0, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA0, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA0, USART2_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA1, ETH1_CLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA1, ETH1_REF_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA1, ETH1_RX_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA1, LPTIM3_OUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA1, LTDC_R2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA1, QUADSPI_BK1_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA1, SAI2_MCLK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA1, TIM15_CH1N> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA1, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA1, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA1, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA1, USART2_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA1, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA10, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA10, I2S3_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA10, LTDC_B1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA10, MDIOS_MDIO> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA10, SAI4_FS_B> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA10, SPI3_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA10, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA11, I2C5_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA11, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA11, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA11, LTDC_R4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA11, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA11, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA11, UART4_RX> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA12, I2C5_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA12, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA12, LTDC_R5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA12, SAI2_FS_B> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA12, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA12, UART4_TX> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA12, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA13, DEBUG_DBTRGI> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA13, DEBUG_DBTRGO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA13, RCC_MCO_1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA13, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA14, DEBUG_DBTRGI> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA14, DEBUG_DBTRGO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA14, RCC_MCO_2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA15, CEC> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA15, DEBUG_DBTRGI> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, I2S1_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA15, I2S3_WS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA15, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA15, SAI4_D2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA15, SAI4_FS_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA15, SDMMC1_CDIR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA15, SDMMC1_D5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA15, SDMMC2_CDIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA15, SDMMC2_D5> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA15, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA15, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA15, SPI6_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA15, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA15, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA15, UART4_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA15, UART4_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA15, UART7_TX> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA2, ETH1_MDIO> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA2, LPTIM4_OUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA2, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA2, MDIOS_MDIO> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA2, SAI2_SCK_B> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA2, SDMMC2_D0DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA2, TIM15_CH1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA2, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA2, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA2, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA3, ETH1_COL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA3, LPTIM5_OUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA3, LTDC_B2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA3, LTDC_B5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA3, TIM15_CH2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA3, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA3, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA3, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA4, DCMI_HSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA4, HDP_HDP0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA4, I2S1_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA4, I2S3_WS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA4, LTDC_VSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA4, SAI4_D2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA4, SAI4_FS_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA4, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA4, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA4, SPI6_NSS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA4, TIM5_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA4, USART2_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA5, I2S1_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, LTDC_R4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA5, SAI4_CK1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA5, SAI4_MCLK_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA5, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, SPI6_SCK> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA5, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA6, DCMI_PIXCLK> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA6, I2S1_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA6, LTDC_G2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA6, MDIOS_MDC> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA6, SAI4_CK2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA6, SAI4_SCK_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA6, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA6, SPI6_MISO> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA6, TIM13_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA6, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA6, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA7, ETH1_CRS_DV> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, ETH1_RX_CTL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, ETH1_RX_DV> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, I2S1_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA7, QUADSPI_CLK> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA7, SAI4_D1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA7, SAI4_SD_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA7, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA7, SPI6_MOSI> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA7, TIM14_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA7, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA7, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA8, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA8, I2S3_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA8, LTDC_R6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA8, RCC_MCO_1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA8, SAI4_SD_B> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA8, SDMMC2_CKIN> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA8, SDMMC2_D4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA8, SPI3_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA8, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA8, TIM8_BKIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA8, UART7_RX> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA8, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA8, USB_OTG_FS_SOF> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA8, USB_OTG_HS_SOF> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA9, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA9, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA9, I2S2_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA9, LTDC_R5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA9, SDMMC2_CDIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA9, SDMMC2_D5> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA9, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA9, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB0, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB0, ETH1_RXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB0, LTDC_G1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB0, LTDC_R3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB0, MDIOS_MDIO> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB0, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB0, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB0, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB0, UART4_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB1, DFSDM1_DATIN1> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB1, ETH1_RXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB1, LTDC_G0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB1, LTDC_R6> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB1, MDIOS_MDC> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB1, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB1, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB1, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB10, DFSDM1_DATIN7> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB10, ETH1_RX_ER> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB10, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB10, I2S2_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, LPTIM2_IN1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB10, LTDC_G4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB10, QUADSPI_BK1_NCS> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB10, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB11, DFSDM1_CKIN7> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB11, DSIHOST_TE> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB11, ETH1_TX_CTL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB11, ETH1_TX_EN> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB11, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB11, LPTIM2_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB11, LTDC_G5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB11, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB12, DFSDM1_DATIN1> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB12, ETH1_TXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB12, FDCAN2_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB12, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB12, I2C6_SMBA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB12, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB12, UART5_RX> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB12, USART3_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB13, DFSDM1_CKIN1> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB13, DFSDM1_CKOUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB13, ETH1_TXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB13, FDCAN2_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB13, I2S2_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, LPTIM2_OUT> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB13, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB13, UART5_TX> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB13, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB13, USART3_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB14, DFSDM1_DATIN2> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB14, I2S2_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB14, SDMMC2_D0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB14, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB14, TIM12_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB14, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB14, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB14, USART1_TX> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB14, USART3_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB14, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB15, DFSDM1_CKIN2> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB15, I2S2_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB15, SDMMC2_D1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB15, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, TIM12_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB15, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB15, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB15, USART1_RX> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB2, DEBUG_TRACED4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB2, DFSDM1_CKIN1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB2, I2S3_SDO> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB2, I2S_CKIN> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB2, QUADSPI_CLK> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB2, RTC_OUT2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB2, RTC_OUT_ALARM2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB2, RTC_OUT_CALIB2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB2, SAI1_D1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB2, SAI1_SD_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB2, SPI3_MOSI> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB2, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB2, USART1_RX> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB3, DEBUG_TRACED9> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, I2S1_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, I2S3_CK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB3, SAI4_CK1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB3, SAI4_MCLK_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB3, SDMMC2_D2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB3, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB3, SPI6_SCK> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB3, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB3, UART7_RX> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB4, DEBUG_TRACED8> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB4, I2S1_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB4, I2S2_WS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, I2S3_SDI> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB4, SAI4_CK2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB4, SAI4_SCK_A> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB4, SDMMC2_D3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB4, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB4, SPI2_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB4, SPI6_MISO> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB4, TIM16_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB4, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB4, UART7_TX> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB5, DCMI_D10> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB5, ETH1_CLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB5, ETH1_PPS_OUT> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB5, FDCAN2_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB5, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB5, I2C4_SMBA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB5, I2S1_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB5, I2S3_SDO> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB5, LTDC_G7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB5, SAI4_D1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB5, SAI4_SD_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB5, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB5, SPI3_MOSI> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB5, SPI6_MOSI> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB5, TIM17_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB5, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB5, UART5_RX> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB6, CEC> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB6, DCMI_D5> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB6, DFSDM1_DATIN5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB6, FDCAN2_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB6, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB6, I2C4_SCL> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB6, QUADSPI_BK1_NCS> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB6, TIM16_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB6, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB6, UART5_TX> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB6, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB7, DCMI_VSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB7, DFSDM1_CKIN5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB7, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB7, I2C4_SDA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB7, SDMMC2_D1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB7, TIM17_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB7, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB7, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB8, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB8, DFSDM1_CKIN7> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB8, ETH1_TXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB8, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB8, HDP_HDP6> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB8, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB8, I2C4_SCL> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB8, LTDC_B6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB8, SDMMC1_CKIN> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB8, SDMMC1_D4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB8, SDMMC2_CKIN> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB8, SDMMC2_D4> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB8, TIM16_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB8, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB8, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB9, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB9, DFSDM1_DATIN7> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB9, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB9, HDP_HDP7> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB9, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB9, I2C4_SDA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB9, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, LTDC_B7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB9, SDMMC1_CDIR> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB9, SDMMC1_D5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB9, SDMMC2_CDIR> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB9, SDMMC2_D5> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB9, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, TIM17_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB9, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB9, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC0, DFSDM1_CKIN0> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC0, DFSDM1_DATIN4> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC0, LPTIM2_IN2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC0, LTDC_R5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC0, QUADSPI_BK2_NCS> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC0, SAI2_FS_B> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC1, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC1, DFSDM1_CKIN4> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC1, DFSDM1_DATIN0> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC1, ETH1_MDC> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC1, I2S2_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC1, MDIOS_MDC> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC1, SAI1_D1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC1, SAI1_SD_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC1, SDMMC2_CK> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC1, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC10, DCMI_D8> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC10, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC10, DFSDM1_CKIN5> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC10, I2S3_CK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC10, LTDC_R2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC10, QUADSPI_BK1_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC10, SAI4_MCLK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC10, SDMMC1_D2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC10, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC10, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC11, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC11, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC11, DFSDM1_DATIN5> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC11, I2S3_SDI> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC11, QUADSPI_BK2_NCS> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC11, SAI4_SCK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC11, SDMMC1_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC11, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC11, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC12, DCMI_D9> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC12, DEBUG_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC12, I2S3_SDO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC12, RCC_MCO_2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC12, SAI4_D3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC12, SAI4_SD_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC12, SDMMC1_CK> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC12, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC12, UART5_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC2, DCMI_PIXCLK> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC2, DFSDM1_CKIN1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC2, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC2, ETH1_TXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC2, I2S2_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, DEBUG_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC3, DFSDM1_DATIN1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC3, ETH1_TX_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC3, I2S2_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC4, DFSDM1_CKIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC4, ETH1_RXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC4, I2S1_MCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC4, SPDIFRX_IN2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC5, DFSDM1_DATIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC5, ETH1_RXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC5, SAI1_D3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC5, SAI1_D4> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC5, SAI4_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC5, SAI4_D4> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC5, SPDIFRX_IN3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC6, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC6, DFSDM1_CKIN3> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC6, DSIHOST_TE> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC6, HDP_HDP1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC6, I2S2_MCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC6, LTDC_HSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC6, SDMMC1_D0DIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC6, SDMMC1_D6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC6, SDMMC2_D0DIR> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC6, SDMMC2_D6> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC6, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC6, USART6_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC7, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC7, DFSDM1_DATIN3> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC7, HDP_HDP4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC7, I2S3_MCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC7, LTDC_G6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC7, SDMMC1_D123DIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC7, SDMMC1_D7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC7, SDMMC2_D123DIR> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC7, SDMMC2_D7> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC7, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC7, USART6_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC8, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC8, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC8, SDMMC1_D0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC8, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC8, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC8, UART4_TX> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC8, UART5_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC8, UART5_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC8, USART6_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC9, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC9, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC9, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC9, I2S_CKIN> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC9, LTDC_B2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC9, QUADSPI_BK1_IO0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC9, SDMMC1_D1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC9, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC9, TIM8_CH4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC9, UART5_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD0, DFSDM1_CKIN6> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD0, DFSDM1_DATIN7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD0, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD0, FMC_D2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD0, I2C5_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD0, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD0, SAI3_SCK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD0, SDMMC3_CMD> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD0, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD1, DFSDM1_CKIN7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD1, DFSDM1_DATIN6> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD1, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD1, FMC_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD1, I2C5_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD1, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD1, SAI3_SD_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD1, SDMMC3_D0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD1, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD10, DFSDM1_CKOUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD10, FMC_D15> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD10, I2C5_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD10, I2S3_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD10, LTDC_B3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD10, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PD10, SAI3_FS_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD10, SPI3_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD10, TIM16_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD10, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD11, FMC_CLE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD11, I2C1_SMBA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD11, I2C4_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD11, LPTIM2_IN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD11, QUADSPI_BK1_IO0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD11, SAI2_SD_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD11, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD11, USART3_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD12, FMC_ALE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD12, I2C1_SCL> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD12, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD12, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD12, LPTIM2_IN1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD12, QUADSPI_BK1_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD12, SAI2_FS_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD12, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD12, USART3_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD12, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD13, DSIHOST_TE> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD13, I2C1_SDA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD13, I2C4_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD13, I2S3_MCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD13, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD13, QUADSPI_BK1_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD13, SAI2_SCK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD13, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD14, FMC_D0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD14, SAI3_MCLK_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD14, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD14, UART8_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD15, FMC_D1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD15, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD15, SAI3_MCLK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD15, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD15, UART8_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD2, DCMI_D11> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD2, I2C5_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD2, SDMMC1_CMD> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD2, TIM3_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD2, UART4_RX> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD2, UART5_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD3, DCMI_D5> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD3, DFSDM1_CKOUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD3, DFSDM1_DATIN0> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD3, HDP_HDP5> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PD3, I2S2_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD3, LTDC_G7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD3, SDMMC1_D123DIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD3, SDMMC1_D7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD3, SDMMC2_D123DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD3, SDMMC2_D7> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD3, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD3, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD3, USART2_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD4, DFSDM1_CKIN0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD4, FMC_NOE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD4, SAI3_FS_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD4, SDMMC3_D1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD4, USART2_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD4, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD5, FMC_NWE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD5, SDMMC3_D2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD5, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD6, DCMI_D10> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD6, DFSDM1_CKIN4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD6, DFSDM1_DATIN1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD6, FMC_NWAIT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD6, I2S3_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD6, LTDC_B2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD6, SAI1_D1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD6, SAI1_SD_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD6, SPI3_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD6, TIM16_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD6, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD7, DEBUG_TRACED6> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PD7, DFSDM1_CKIN1> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD7, DFSDM1_DATIN4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD7, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PD7, SDMMC3_D3> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD7, SPDIFRX_IN0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD7, USART2_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD8, DFSDM1_CKIN3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD8, FMC_D13> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD8, LTDC_B7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD8, SAI3_SCK_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD8, SPDIFRX_IN1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD8, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD9, DCMI_HSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD9, DFSDM1_DATIN3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD9, FMC_D14> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD9, LTDC_B0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD9, SAI3_SD_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PD9, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE0, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE0, I2S3_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE0, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE0, LPTIM2_ETR> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE0, SAI2_MCLK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE0, SAI4_MCLK_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE0, SPI3_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE0, TIM4_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE0, UART8_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE1, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE1, I2S2_MCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE1, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE1, SAI3_SD_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE1, UART8_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE10, DFSDM1_DATIN4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE10, FMC_D7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE10, QUADSPI_BK2_IO3> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE10, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE10, UART7_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE11, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE11, DFSDM1_CKIN4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE11, FMC_D8> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE11, LTDC_G3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE11, SAI2_SD_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE11, SPI4_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE11, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE11, USART6_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE12, DFSDM1_DATIN5> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE12, FMC_D9> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE12, LTDC_B4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE12, SAI2_SCK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE12, SDMMC1_D0DIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE12, SPI4_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE12, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE13, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE13, DFSDM1_CKIN5> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE13, FMC_D10> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE13, HDP_HDP2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE13, LTDC_DE> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE13, SAI2_FS_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE13, SPI4_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE13, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE14, FMC_D11> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE14, LTDC_CLK> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE14, LTDC_G0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE14, SAI2_MCLK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE14, SDMMC1_D123DIR> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE14, SPI4_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE14, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE14, UART8_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE14, UART8_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE15, FMC_D12> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE15, FMC_NCE2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE15, HDP_HDP3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE15, LTDC_R7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE15, TIM15_BKIN> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE15, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE15, UART8_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE15, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE15, USART2_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE2, DEBUG_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE2, ETH1_TXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE2, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE2, QUADSPI_BK1_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE2, SAI1_CK1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE2, SAI1_MCLK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE2, SPI4_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE3, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE3, SAI1_SD_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE3, SDMMC2_CK> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE3, TIM15_BKIN> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE4, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE4, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE4, DFSDM1_DATIN3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE4, LTDC_B0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE4, SAI1_D2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE4, SAI1_FS_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE4, SDMMC1_CKIN> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE4, SDMMC1_D4> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE4, SDMMC2_CKIN> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE4, SDMMC2_D4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE4, SPI4_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE4, TIM15_CH1N> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE5, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE5, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE5, DFSDM1_CKIN3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE5, LTDC_G0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE5, SAI1_CK2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE5, SAI1_SCK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE5, SDMMC1_D0DIR> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE5, SDMMC1_D6> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE5, SDMMC2_D0DIR> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE5, SDMMC2_D6> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE5, SPI4_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE5, TIM15_CH1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE6, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE6, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE6, LTDC_G1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE6, SAI1_D1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE6, SAI1_SD_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PE6, SAI2_MCLK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE6, SDMMC1_D2> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PE6, SDMMC2_D0> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE6, SPI4_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PE6, TIM15_CH2> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PE6, TIM1_BKIN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE7, DFSDM1_DATIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE7, FMC_D4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE7, QUADSPI_BK2_IO0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE7, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE7, TIM3_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE7, UART7_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE8, DFSDM1_CKIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE8, FMC_D5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE8, QUADSPI_BK2_IO1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE8, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE8, UART7_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE9, DFSDM1_CKOUT> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE9, FMC_D6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE9, QUADSPI_BK2_IO2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PE9, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE9, UART7_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE9, UART7_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF0, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF0, SDMMC3_CKIN> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF0, SDMMC3_D0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF1, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF1, SDMMC3_CDIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF1, SDMMC3_CMD> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF10, DCMI_D11> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PF10, LTDC_DE> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PF10, QUADSPI_CLK> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF10, SAI1_D3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PF10, SAI1_D4> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF10, SAI4_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF10, SAI4_D4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PF10, TIM16_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF11, DCMI_D12> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PF11, LTDC_G5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PF11, SAI2_SD_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF11, SPI5_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF12, DEBUG_TRACED4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF12, ETH1_RXD4> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF13, DEBUG_TRACED5> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF13, DFSDM1_DATIN3> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF13, DFSDM1_DATIN6> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PF13, ETH1_RXD5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF13, I2C1_SMBA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF13, I2C4_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF14, DEBUG_TRACED6> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF14, DFSDM1_CKIN6> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PF14, ETH1_RXD6> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF14, I2C1_SCL> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF14, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF15, DEBUG_TRACED7> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF15, ETH1_RXD7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF15, I2C1_SDA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF15, I2C4_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF2, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF2, SDMMC1_D0DIR> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF2, SDMMC2_D0DIR> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF2, SDMMC3_D0DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF3, ETH1_TX_ER> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PF4, SDMMC3_D1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF4, SDMMC3_D123DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF4, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF5, SDMMC3_D2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF5, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF6, QUADSPI_BK1_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF6, SAI1_SD_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF6, SAI4_SCK_B> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF6, SPI5_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF6, TIM16_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF6, UART7_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF7, QUADSPI_BK1_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF7, SAI1_MCLK_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF7, SPI5_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF7, TIM17_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF7, UART7_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF8, DEBUG_TRACED12> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF8, QUADSPI_BK1_IO0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF8, SAI1_SCK_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF8, SPI5_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF8, TIM13_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF8, TIM16_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF8, UART7_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF8, UART7_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PF9, DEBUG_TRACED13> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PF9, QUADSPI_BK1_IO1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PF9, SAI1_FS_B> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PF9, SPI5_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PF9, TIM14_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF9, TIM17_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF9, UART7_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG0, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG0, DFSDM1_DATIN0> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PG0, ETH1_TXD4> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG1, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG1, ETH1_TXD5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG10, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG10, DEBUG_TRACED10> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG10, LTDC_B2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG10, LTDC_G3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG10, QUADSPI_BK2_IO2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG10, SAI2_SD_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG10, UART8_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG11, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG11, DEBUG_TRACED11> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG11, ETH1_TX_CTL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG11, ETH1_TX_EN> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG11, LTDC_B3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG11, SPDIFRX_IN0> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG11, UART4_TX> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG11, USART1_TX> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PG12, ETH1_PHY_INTN> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG12, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG12, LTDC_B1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG12, LTDC_B4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG12, SAI4_CK2> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG12, SAI4_SCK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG12, SPDIFRX_IN1> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG12, SPI6_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PG12, USART6_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG12, USART6_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG13, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG13, ETH1_TXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG13, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG13, LTDC_R0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG13, SAI1_CK2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PG13, SAI1_SCK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG13, SAI4_CK1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PG13, SAI4_MCLK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG13, SPI6_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PG13, USART6_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG13, USART6_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG14, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG14, ETH1_TXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG14, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG14, LTDC_B0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG14, QUADSPI_BK2_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG14, SAI4_D1> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG14, SAI4_SD_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG14, SPI6_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PG14, USART6_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG15, DCMI_D13> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG15, DEBUG_TRACED7> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG15, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PG15, SAI1_D2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PG15, SAI1_FS_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG15, SDMMC3_CK> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG15, USART6_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG15, USART6_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG2, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG2, ETH1_TXD6> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG2, RCC_MCO_2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG2, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PG3, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG3, DFSDM1_CKIN1> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PG3, ETH1_TXD7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG3, TIM8_BKIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PG4, ETH1_GTX_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG4, TIM1_BKIN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG5, ETH1_CLK125> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG5, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG6, DCMI_D12> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG6, DEBUG_TRACED14> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG6, LTDC_R7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG6, SDMMC2_CMD> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG6, TIM17_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG7, DCMI_D13> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG7, DEBUG_TRACED5> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG7, LTDC_CLK> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG7, QUADSPI_BK2_IO3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG7, QUADSPI_CLK> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG7, SAI1_MCLK_A> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG7, UART8_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG7, UART8_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG7, USART6_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG8, DEBUG_TRACED15> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG8, ETH1_CLK> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PG8, ETH1_PPS_OUT> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG8, LTDC_G7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG8, SAI4_D2> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PG8, SAI4_FS_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG8, SPDIFRX_IN2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG8, SPI6_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PG8, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG8, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PG8, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PG8, USART3_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG8, USART3_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG8, USART6_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG8, USART6_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PG9, DCMI_VSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG9, DEBUG_DBTRGO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PG9, FMC_NCE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG9, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PG9, QUADSPI_BK2_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG9, SAI2_FS_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PG9, SPDIFRX_IN3> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG9, USART6_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PH10, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH10, I2C1_SMBA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH10, I2C4_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH10, LTDC_R4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH10, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH11, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH11, I2C1_SCL> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH11, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH11, LTDC_R5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH11, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH12, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH12, HDP_HDP2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PH12, I2C1_SDA> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH12, I2C4_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH12, LTDC_R6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH12, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH13, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH13, LTDC_G2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH13, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH13, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PH14, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH14, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH14, LTDC_G3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH14, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH14, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PH15, DCMI_D11> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH15, LTDC_G4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH15, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH2, ETH1_CRS> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH2, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PH2, LTDC_R0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH2, QUADSPI_BK2_IO0> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH2, SAI2_SCK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PH3, DFSDM1_CKIN4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH3, ETH1_COL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH3, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH3, QUADSPI_BK2_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH3, SAI2_MCLK_B> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PH4, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH4, LTDC_G4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH4, LTDC_G5> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH5, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH5, SAI4_SD_B> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PH5, SPI5_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH6, DCMI_D8> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH6, ETH1_RXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH6, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH6, MDIOS_MDIO> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PH6, SPI5_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH6, TIM12_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH7, DCMI_D9> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH7, ETH1_RXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH7, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH7, MDIOS_MDC> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PH7, SPI5_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PH8, DCMI_HSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH8, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH8, LTDC_R2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH8, TIM5_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH9, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH9, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH9, LTDC_R3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PH9, TIM12_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PI0, DCMI_D13> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI0, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI0, LTDC_G5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI0, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI0, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PI1, DCMI_D8> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI1, I2S2_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI1, LTDC_G6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI1, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI1, TIM8_BKIN2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI10, ETH1_RX_ER> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PI10, HDP_HDP0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI10, LTDC_HSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI10, USART3_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PI10, USART3_NSS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PI11, I2S_CKIN> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI11, LTDC_G6> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PI11, RCC_MCO_1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI12, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI12, HDP_HDP0> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PI12, LTDC_HSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI13, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI13, HDP_HDP1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PI13, LTDC_VSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI14, DEBUG_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI14, LTDC_CLK> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI15, LTDC_G2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PI15, LTDC_R0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI2, DCMI_D9> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI2, I2S2_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI2, LTDC_G7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI2, TIM8_CH4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI3, DCMI_D10> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI3, I2S2_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI3, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI4, DCMI_D5> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI4, LTDC_B4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI4, SAI2_MCLK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PI4, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI5, DCMI_VSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI5, LTDC_B5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI5, SAI2_SCK_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PI5, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI6, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI6, LTDC_B6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI6, SAI2_SD_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PI6, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI7, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI7, LTDC_B7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI7, SAI2_FS_A> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PI7, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI9, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PI9, HDP_HDP1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI9, LTDC_VSYNC> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PI9, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PJ0, DEBUG_TRACED8> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ0, LTDC_R1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ0, LTDC_R7> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PJ1, DEBUG_TRACED9> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ1, LTDC_R2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ10, LTDC_G3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ10, SPI5_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PJ10, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PJ10, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ11, LTDC_G4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ11, SPI5_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PJ11, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PJ11, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ12, LTDC_B0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ12, LTDC_G3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PJ13, LTDC_B1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ13, LTDC_G4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PJ14, LTDC_B2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ15, LTDC_B3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ2, DEBUG_TRACED10> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ2, DSIHOST_TE> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PJ2, LTDC_R3> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ3, DEBUG_TRACED11> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ3, LTDC_R4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ4, DEBUG_TRACED12> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ4, LTDC_R5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ5, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ5, HDP_HDP2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PJ5, LTDC_R6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ6, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ6, HDP_HDP3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PJ6, LTDC_R7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ6, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ7, DEBUG_TRACED13> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ7, LTDC_G0> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ7, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ8, DEBUG_TRACED14> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ8, LTDC_G1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ8, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PJ8, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ8, UART8_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PJ9, DEBUG_TRACED15> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PJ9, LTDC_G2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PJ9, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PJ9, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PJ9, UART8_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PK0, LTDC_G5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK0, SPI5_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PK0, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PK0, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PK1, DEBUG_TRACED4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PK1, HDP_HDP4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PK1, LTDC_G6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK1, SPI5_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PK1, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PK1, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PK2, DEBUG_TRACED5> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PK2, HDP_HDP5> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PK2, LTDC_G7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK2, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PK2, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PK3, LTDC_B4> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK4, LTDC_B5> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK5, DEBUG_TRACED6> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PK5, HDP_HDP6> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PK5, LTDC_B6> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK6, DEBUG_TRACED7> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PK6, HDP_HDP7> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PK6, LTDC_B7> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PK7, LTDC_DE> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PZ0, I2C2_SCL> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ0, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ0, I2S1_CK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ0, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ0, SPI6_SCK> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PZ0, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ1, I2C2_SDA> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ1, I2C4_SDA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ1, I2C5_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ1, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ1, I2S1_SDI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ1, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ1, SPI6_MISO> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PZ1, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ2, I2C2_SCL> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ2, I2C4_SMBA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ2, I2C5_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ2, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ2, I2S1_SDO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ2, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ2, SPI6_MOSI> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PZ2, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ3, I2C2_SDA> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ3, I2C4_SDA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ3, I2C5_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ3, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ3, I2S1_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ3, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ3, SPI6_NSS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PZ3, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ3, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ4, I2C2_SCL> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ4, I2C4_SCL> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ4, I2C5_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ4, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ5, I2C2_SDA> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ5, I2C4_SDA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ5, I2C5_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ5, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ5, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ5, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ6, I2C2_SCL> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ6, I2C4_SMBA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PZ6, I2C6_SCL> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ6, I2S1_MCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PZ6, USART1_CK> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PZ6, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PZ7, I2C2_SDA> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PZ7, I2C6_SDA> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PZ7, USART1_TX> { static const alt_fun_t AF = AF7; };