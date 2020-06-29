#pragma once

////
//
//      STM32F7 pins
//
///

enum port_t
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
    };

enum pin_t
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
    };

enum altfun_t
    { AF0 = 0x0
    , AF1 = 0x1
    , AF2 = 0x2
    , AF3 = 0x3
    , AF4 = 0x4
    , AF5 = 0x5
    , AF6 = 0x6
    , AF7 = 0x7
    , AF8 = 0x8
    , AF9 = 0x9
    , AF10 = 0xa
    , AF11 = 0xb
    , AF12 = 0xc
    , AF13 = 0xd
    , AF14 = 0xe
    };

enum signal_t
    { CAN1_RX
    , CAN1_TX
    , CAN2_RX
    , CAN2_TX
    , CAN3_RX
    , CAN3_TX
    , CEC
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
    , ETH_COL
    , ETH_CRS
    , ETH_CRS_DV
    , ETH_MDC
    , ETH_MDIO
    , ETH_PPS_OUT
    , ETH_REF_CLK
    , ETH_RXD0
    , ETH_RXD1
    , ETH_RXD2
    , ETH_RXD3
    , ETH_RX_CLK
    , ETH_RX_DV
    , ETH_RX_ER
    , ETH_TXD0
    , ETH_TXD1
    , ETH_TXD2
    , ETH_TXD3
    , ETH_TX_CLK
    , ETH_TX_EN
    , FMC_A0
    , FMC_A1
    , FMC_A10
    , FMC_A11
    , FMC_A12
    , FMC_A13
    , FMC_A14
    , FMC_A15
    , FMC_A16
    , FMC_A17
    , FMC_A18
    , FMC_A19
    , FMC_A2
    , FMC_A20
    , FMC_A21
    , FMC_A22
    , FMC_A23
    , FMC_A24
    , FMC_A25
    , FMC_A3
    , FMC_A4
    , FMC_A5
    , FMC_A6
    , FMC_A7
    , FMC_A8
    , FMC_A9
    , FMC_ALE
    , FMC_BA0
    , FMC_BA1
    , FMC_CLE
    , FMC_CLK
    , FMC_D0
    , FMC_D1
    , FMC_D10
    , FMC_D11
    , FMC_D12
    , FMC_D13
    , FMC_D14
    , FMC_D15
    , FMC_D16
    , FMC_D17
    , FMC_D18
    , FMC_D19
    , FMC_D2
    , FMC_D20
    , FMC_D21
    , FMC_D22
    , FMC_D23
    , FMC_D24
    , FMC_D25
    , FMC_D26
    , FMC_D27
    , FMC_D28
    , FMC_D29
    , FMC_D3
    , FMC_D30
    , FMC_D31
    , FMC_D4
    , FMC_D5
    , FMC_D6
    , FMC_D7
    , FMC_D8
    , FMC_D9
    , FMC_DA0
    , FMC_DA1
    , FMC_DA10
    , FMC_DA11
    , FMC_DA12
    , FMC_DA13
    , FMC_DA14
    , FMC_DA15
    , FMC_DA2
    , FMC_DA3
    , FMC_DA4
    , FMC_DA5
    , FMC_DA6
    , FMC_DA7
    , FMC_DA8
    , FMC_DA9
    , FMC_INT
    , FMC_NBL0
    , FMC_NBL1
    , FMC_NBL2
    , FMC_NBL3
    , FMC_NCE
    , FMC_NE1
    , FMC_NE2
    , FMC_NE3
    , FMC_NE4
    , FMC_NL
    , FMC_NOE
    , FMC_NWAIT
    , FMC_NWE
    , FMC_SDCKE0
    , FMC_SDCKE1
    , FMC_SDCLK
    , FMC_SDNCAS
    , FMC_SDNE0
    , FMC_SDNE1
    , FMC_SDNRAS
    , FMC_SDNWE
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
    , I2S1_CK
    , I2S1_MCK
    , I2S1_SD
    , I2S1_WS
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SD
    , I2S2_WS
    , I2S3_CK
    , I2S3_MCK
    , I2S3_SD
    , I2S3_WS
    , I2S_CKIN
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM1_OUT
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
    , RTC_REFIN
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
    , SDMMC1_CK
    , SDMMC1_CMD
    , SDMMC1_D0
    , SDMMC1_D1
    , SDMMC1_D2
    , SDMMC1_D3
    , SDMMC1_D4
    , SDMMC1_D5
    , SDMMC1_D6
    , SDMMC1_D7
    , SDMMC2_CK
    , SDMMC2_CMD
    , SDMMC2_D0
    , SDMMC2_D1
    , SDMMC2_D2
    , SDMMC2_D3
    , SDMMC2_D4
    , SDMMC2_D5
    , SDMMC2_D6
    , SDMMC2_D7
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
    , SYS_JTCK_SWCLK
    , SYS_JTDI
    , SYS_JTDO_SWO
    , SYS_JTMS_SWDIO
    , SYS_JTRST
    , SYS_TRACECLK
    , SYS_TRACED0
    , SYS_TRACED1
    , SYS_TRACED2
    , SYS_TRACED3
    , TIM10_CH1
    , TIM11_CH1
    , TIM12_CH1
    , TIM12_CH2
    , TIM13_CH1
    , TIM14_CH1
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
    , TIM9_CH1
    , TIM9_CH2
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
    , USART1_RTS
    , USART1_RX
    , USART1_TX
    , USART2_CK
    , USART2_CTS
    , USART2_DE
    , USART2_RTS
    , USART2_RX
    , USART2_TX
    , USART3_CK
    , USART3_CTS
    , USART3_DE
    , USART3_RTS
    , USART3_RX
    , USART3_TX
    , USART6_CK
    , USART6_CTS
    , USART6_DE
    , USART6_RTS
    , USART6_RX
    , USART6_TX
    , USB_OTG_FS_DM
    , USB_OTG_FS_DP
    , USB_OTG_FS_ID
    , USB_OTG_FS_SOF
    , USB_OTG_HS_DM
    , USB_OTG_HS_DP
    , USB_OTG_HS_ID
    , USB_OTG_HS_SOF
    , USB_OTG_HS_ULPI_CK
    , USB_OTG_HS_ULPI_D0
    , USB_OTG_HS_ULPI_D1
    , USB_OTG_HS_ULPI_D2
    , USB_OTG_HS_ULPI_D3
    , USB_OTG_HS_ULPI_D4
    , USB_OTG_HS_ULPI_D5
    , USB_OTG_HS_ULPI_D6
    , USB_OTG_HS_ULPI_D7
    , USB_OTG_HS_ULPI_DIR
    , USB_OTG_HS_ULPI_NXT
    , USB_OTG_HS_ULPI_STP
    };

static constexpr gpio_conf_t gpio_conf = mcu_traits<target>::gpio_conf;

template<gpio_conf_t CFG, pin_t PIN, signal_t SIG>
struct signal_traits
{
    static constexpr altfun_t AF = AF0;
    static_assert
        ( always_false_i<PIN>::value
        , "alternate function not available on this pin!"
        );
};

template<bool AVAIL>
struct available_signal_t
{
    using type = altfun_t;
    static_assert
        ( always_false_i<AVAIL>::value
        , "alternate function not available on pin for mcu"
        );
};

template<>
struct available_signal_t<true>
{
    using type = altfun_t;
};

template<bool AVAIL>
using altfun = typename available_signal_t<AVAIL>::type;

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SAI2_SD_B>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM5_CH1>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM8_ETR>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, UART4_TX>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, ETH_CRS>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, SAI2_SD_B>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, TIM2_CH1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, TIM2_ETR>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, TIM5_CH1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, TIM8_ETR>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, UART4_TX>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0/WKUP, USART2_CTS>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, ETH_REF_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, ETH_RX_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LTDC_R2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, QUADSPI_BK1_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM5_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, UART4_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, DCMI_D1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LTDC_B1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LTDC_B4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, MDIOS_MDIO>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM1_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USB_OTG_FS_ID>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, CAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2S2_WS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, LTDC_R4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI2_NSS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, UART4_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USB_OTG_FS_DM>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, LTDC_R5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, UART4_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USB_OTG_FS_DP>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, CAN3_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, CEC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S1_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S3_WS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI3_NSS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI6_NSS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SYS_JTDI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, UART4_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, UART4_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, UART7_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, ETH_MDIO>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LTDC_R1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, MDIOS_MDIO>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, SAI2_SCK_B>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM5_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM9_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, ETH_COL>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LTDC_B2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LTDC_B5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM5_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM9_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USB_OTG_HS_ULPI_D0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, DCMI_HSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S1_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S3_WS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LTDC_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI3_NSS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI6_NSS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USB_OTG_HS_SOF>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, I2S1_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LTDC_R4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI6_SCK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, USB_OTG_HS_ULPI_CK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, DCMI_PIXCLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LTDC_G2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, MDIOS_MDC>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI6_MISO>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM13_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM8_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, ETH_CRS_DV>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, ETH_RX_DV>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, FMC_SDNWE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, I2S1_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI6_MOSI>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM14_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, CAN3_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LTDC_B3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LTDC_R6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO_1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM8_BKIN2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, UART7_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USB_OTG_FS_SOF>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, DCMI_D0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, LTDC_R5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, DFSDM1_CKOUT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, ETH_RXD2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LTDC_G1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LTDC_R3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, UART4_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USB_OTG_HS_ULPI_D1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, DFSDM1_DATIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, ETH_RXD3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LTDC_G0>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LTDC_R6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USB_OTG_HS_ULPI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, DFSDM1_DATIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, ETH_RX_ER>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LTDC_G4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, QUADSPI_BK1_NCS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USB_OTG_HS_ULPI_D3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, DFSDM1_CKIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, DSIHOST_TE>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, ETH_TX_EN>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LTDC_G5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USB_OTG_HS_ULPI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, CAN2_RX>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, DFSDM1_DATIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, ETH_TXD0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, UART5_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USB_OTG_HS_ID>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USB_OTG_HS_ULPI_D5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, CAN2_TX>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, DFSDM1_CKIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, ETH_TXD1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, UART5_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USB_OTG_HS_ULPI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, DFSDM1_DATIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SDMMC2_D0>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM12_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, UART4_DE>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, UART4_RTS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART1_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USB_OTG_HS_DM>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, DFSDM1_CKIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SDMMC2_D1>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM12_CH2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, UART4_CTS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, USART1_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, USB_OTG_HS_DP>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, DFSDM1_CKIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, I2S3_SD>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, QUADSPI_CLK>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, CAN3_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S1_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S3_CK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SDMMC2_D2>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI3_SCK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI6_SCK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SYS_JTDO_SWO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, UART7_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, CAN3_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2S2_WS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SDMMC2_D3>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI2_NSS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI3_MISO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI6_MISO>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SYS_JTRST>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, UART7_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, CAN2_RX>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, DCMI_D10>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, ETH_PPS_OUT>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, FMC_SDCKE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S1_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S3_SD>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LTDC_G7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI6_MOSI>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, UART5_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USB_OTG_HS_ULPI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, CAN2_TX>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, CEC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, DCMI_D5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, DFSDM1_DATIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, FMC_SDNE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C4_SCL>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, QUADSPI_BK1_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, UART5_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, DCMI_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, DFSDM1_CKIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, FMC_NL>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C4_SDA>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, DCMI_D6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, DFSDM1_CKIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, ETH_TXD3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C4_SCL>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, LTDC_B6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SDMMC1_D4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SDMMC2_D4>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM10_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM4_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, UART5_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, DCMI_D7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, DFSDM1_DATIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C4_SDA>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C4_SMBA>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2S2_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, LTDC_B7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SDMMC1_D5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SDMMC2_D5>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM11_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM4_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, UART5_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, DFSDM1_CKIN0>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, DFSDM1_DATIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, FMC_SDNWE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LTDC_R5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, USB_OTG_HS_ULPI_STP>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, DFSDM1_CKIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, DFSDM1_DATIN0>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, ETH_MDC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, MDIOS_MDC>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SYS_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, DCMI_D8>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, DFSDM1_CKIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, I2S3_CK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LTDC_R2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, QUADSPI_BK1_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SDMMC1_D2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SPI3_SCK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, UART4_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, DCMI_D4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, DFSDM1_DATIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, QUADSPI_BK2_NCS>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SDMMC1_D3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SPI3_MISO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UART4_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, DCMI_D9>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, I2S3_SD>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SDMMC1_CK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SYS_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, UART5_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, DFSDM1_CKIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, DFSDM1_CKOUT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, ETH_TXD2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, FMC_SDNE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, USB_OTG_HS_ULPI_DIR>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, DFSDM1_DATIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, ETH_TX_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, FMC_SDCKE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, USB_OTG_HS_ULPI_NXT>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, DFSDM1_CKIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, ETH_RXD0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, FMC_SDNE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, I2S1_MCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, SPDIFRX_IN2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, DFSDM1_DATIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, ETH_RXD1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, FMC_SDCKE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, SPDIFRX_IN3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, DCMI_D0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, DFSDM1_CKIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, FMC_NWAIT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, I2S2_MCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, LTDC_HSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDMMC1_D6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDMMC2_D6>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM8_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, USART6_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, DCMI_D1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, DFSDM1_DATIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, FMC_NE1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, I2S3_MCK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, LTDC_G6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDMMC1_D7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDMMC2_D7>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM8_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, USART6_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, DCMI_D2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, FMC_NCE>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, FMC_NE2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SDMMC1_D0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SYS_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM8_CH3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, UART5_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, UART5_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, USART6_CK>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, DCMI_D3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2S_CKIN>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LTDC_B2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LTDC_G3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, QUADSPI_BK1_IO0>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, RCC_MCO_2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SDMMC1_D1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM8_CH4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, UART5_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, DFSDM1_CKIN6>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, DFSDM1_DATIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FMC_D2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FMC_DA2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, UART4_RX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, DFSDM1_CKIN7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, DFSDM1_DATIN6>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FMC_D3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FMC_DA3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, UART4_TX>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, DFSDM1_CKOUT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FMC_D15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FMC_DA15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LTDC_B3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, FMC_A16>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, FMC_CLE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, I2C4_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, QUADSPI_BK1_IO0>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, SAI2_SD_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, FMC_A17>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, FMC_ALE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, I2C4_SCL>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, QUADSPI_BK1_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, FMC_A18>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, I2C4_SDA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, QUADSPI_BK1_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, SAI2_SCK_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FMC_D0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FMC_DA0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM4_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, UART8_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FMC_D1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FMC_DA1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM4_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, UART8_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, UART8_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, DCMI_D11>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, SDMMC1_CMD>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, SYS_TRACED2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, UART5_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, DCMI_D5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, DFSDM1_CKOUT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, DFSDM1_DATIN0>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, FMC_CLK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, LTDC_G7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, DFSDM1_CKIN0>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, FMC_NOE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, FMC_NWE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, DCMI_D10>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, DFSDM1_CKIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, DFSDM1_DATIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, FMC_NWAIT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, I2S3_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, LTDC_B2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SDMMC2_CK>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, DFSDM1_CKIN1>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, DFSDM1_DATIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FMC_NE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, SDMMC2_CMD>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, SPDIFRX_IN0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, DFSDM1_CKIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FMC_D13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FMC_DA13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, SPDIFRX_IN1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, DFSDM1_DATIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FMC_D14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FMC_DA14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, DCMI_D2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, FMC_NBL0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM4_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, UART8_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, DCMI_D3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, FMC_NBL1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, UART8_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, DFSDM1_DATIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FMC_D7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FMC_DA7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, QUADSPI_BK2_IO3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, UART7_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, DFSDM1_CKIN4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FMC_D8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FMC_DA8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, LTDC_G3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, SAI2_SD_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, SPI4_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, DFSDM1_DATIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FMC_D9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FMC_DA9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, LTDC_B4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SAI2_SCK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI4_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, DFSDM1_CKIN5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FMC_D10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FMC_DA10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, LTDC_DE>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI4_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIM1_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FMC_D11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FMC_DA11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, LTDC_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI4_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FMC_D12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FMC_DA12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, LTDC_R7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, ETH_TXD3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, FMC_A23>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, QUADSPI_BK1_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SPI4_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SYS_TRACECLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, FMC_A19>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SYS_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, DCMI_D4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, DFSDM1_DATIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, FMC_A20>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, LTDC_B0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SPI4_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SYS_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, DCMI_D6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, DFSDM1_CKIN3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, FMC_A21>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, LTDC_G0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SAI1_SCK_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SPI4_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SYS_TRACED2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM9_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, DCMI_D7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, FMC_A22>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, LTDC_G1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SPI4_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SYS_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM1_BKIN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM9_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, DFSDM1_DATIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FMC_D4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FMC_DA4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, QUADSPI_BK2_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, UART7_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, DFSDM1_CKIN2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FMC_D5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FMC_DA5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, QUADSPI_BK2_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, UART7_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, DFSDM1_CKOUT>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FMC_D6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FMC_DA6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, QUADSPI_BK2_IO2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, UART7_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, UART7_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, FMC_A0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, FMC_A1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, DCMI_D11>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, LTDC_DE>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, QUADSPI_CLK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, DCMI_D12>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, FMC_SDNRAS>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, SAI2_SD_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, SPI5_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, FMC_A6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, DFSDM1_DATIN6>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, FMC_A7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, I2C4_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, DFSDM1_CKIN6>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, FMC_A8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, I2C4_SCL>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, FMC_A9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, I2C4_SDA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, FMC_A2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, FMC_A3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, FMC_A4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, FMC_A5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, QUADSPI_BK1_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, SPI5_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM10_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, UART7_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, QUADSPI_BK1_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, SPI5_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TIM11_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, UART7_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, QUADSPI_BK1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, SPI5_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TIM13_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, UART7_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, UART7_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, QUADSPI_BK1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, SPI5_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM14_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, UART7_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, FMC_A10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, FMC_A11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, DCMI_D2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, FMC_NE3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, LTDC_B2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, LTDC_G3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, SAI2_SD_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, SDMMC2_D1>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, DCMI_D3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, ETH_TX_EN>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, FMC_INT>
{
    static constexpr altfun
        < CFG & STM32F72x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, LTDC_B3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, SDMMC2_D2>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, SPDIFRX_IN0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, FMC_NE4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, LTDC_B1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, LTDC_B4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, SDMMC2_D3>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, SPDIFRX_IN1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, SPI6_MISO>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, USART6_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, USART6_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, ETH_TXD0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, FMC_A24>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, LTDC_R0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, SPI6_SCK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, SYS_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, USART6_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, ETH_TXD1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, FMC_A25>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, LTDC_B0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, QUADSPI_BK2_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, SPI6_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, SYS_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, USART6_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, DCMI_D13>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, FMC_SDNCAS>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, USART6_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, FMC_A12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, FMC_A13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, FMC_A14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, FMC_BA0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, FMC_A15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, FMC_BA1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, DCMI_D12>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, FMC_NE3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, LTDC_R7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, DCMI_D13>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, FMC_INT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, LTDC_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, SAI1_MCLK_A>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, USART6_CK>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, ETH_PPS_OUT>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, FMC_SDCLK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, LTDC_G7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, SPDIFRX_IN2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, SPI6_NSS>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, USART6_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, USART6_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, DCMI_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NCE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NE2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, QUADSPI_BK2_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SDMMC2_D0>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SPDIFRX_IN3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, USART6_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, DCMI_D1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, FMC_D18>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, I2C4_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, LTDC_R4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, TIM5_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, DCMI_D2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, FMC_D19>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, I2C4_SCL>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, LTDC_R5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, TIM5_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, DCMI_D3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, FMC_D20>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, I2C4_SDA>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, LTDC_R6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, TIM5_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, CAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, FMC_D21>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, LTDC_G2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, UART4_TX>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, CAN1_RX>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, DCMI_D4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, FMC_D22>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, LTDC_G3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, UART4_RX>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, DCMI_D11>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, FMC_D23>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, LTDC_G4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, ETH_CRS>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, FMC_SDCKE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, LTDC_R0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, QUADSPI_BK2_IO0>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, SAI2_SCK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, ETH_COL>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, FMC_SDNE0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, LTDC_R1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, QUADSPI_BK2_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, LTDC_G4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, LTDC_G5>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, USB_OTG_HS_ULPI_NXT>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, FMC_SDNWE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, SPI5_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, DCMI_D8>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, ETH_RXD2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, FMC_SDNE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, SPI5_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, TIM12_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, DCMI_D9>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, ETH_RXD3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, FMC_SDCKE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, SPI5_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, DCMI_HSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, FMC_D16>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, LTDC_R2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, DCMI_D0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, FMC_D17>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, LTDC_R3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, TIM12_CH2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, DCMI_D13>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, FMC_D24>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, I2S2_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, LTDC_G5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, TIM5_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, DCMI_D8>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, FMC_D25>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, LTDC_G6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, TIM8_BKIN2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI10, ETH_RX_ER>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI10, FMC_D31>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI10, LTDC_HSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI11, LTDC_G6>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI11, USB_OTG_HS_ULPI_DIR>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI12, LTDC_HSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI13, LTDC_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI14, LTDC_CLK>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI15, LTDC_G2>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI15, LTDC_R0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, DCMI_D9>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, FMC_D26>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, LTDC_G7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, TIM8_CH4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, DCMI_D10>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, FMC_D27>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, TIM8_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, DCMI_D5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, FMC_NBL2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, LTDC_B4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, TIM8_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, DCMI_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, FMC_NBL3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, LTDC_B5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, SAI2_SCK_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, TIM8_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, DCMI_D6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, FMC_D28>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, LTDC_B6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, SAI2_SD_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, TIM8_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, DCMI_D7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, FMC_D29>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, LTDC_B7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, TIM8_CH3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI9, CAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI9, FMC_D30>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI9, LTDC_VSYNC>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI9, UART4_RX>
{
    static constexpr altfun
        < CFG & (STM32F72x|STM32F76x)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ0, LTDC_R1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ0, LTDC_R7>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ1, LTDC_R2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ10, LTDC_G3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ11, LTDC_G4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ12, LTDC_B0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ12, LTDC_G3>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ13, LTDC_B1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ13, LTDC_G4>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ14, LTDC_B2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ15, LTDC_B3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ2, DSIHOST_TE>
{
    static constexpr altfun
        < CFG & STM32F76x
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ2, LTDC_R3>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ3, LTDC_R4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ4, LTDC_R5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ5, LTDC_R6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ6, LTDC_R7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ7, LTDC_G0>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ8, LTDC_G1>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PJ9, LTDC_G2>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK0, LTDC_G5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK1, LTDC_G6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK2, LTDC_G7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK3, LTDC_B4>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK4, LTDC_B5>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK5, LTDC_B6>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK6, LTDC_B7>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PK7, LTDC_DE>
{
    static constexpr altfun
        < CFG & (STM32F746_|STM32F76x)
        > AF = AF14;
};

