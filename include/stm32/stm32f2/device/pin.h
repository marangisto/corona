#pragma once

////
//
//      STM32F2 pins
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
    };

enum alternate_function_t
    { CAN1_RX
    , CAN1_TX
    , CAN2_RX
    , CAN2_TX
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
    , FSMC_A0
    , FSMC_A1
    , FSMC_A10
    , FSMC_A11
    , FSMC_A12
    , FSMC_A13
    , FSMC_A14
    , FSMC_A15
    , FSMC_A16
    , FSMC_A17
    , FSMC_A18
    , FSMC_A19
    , FSMC_A2
    , FSMC_A20
    , FSMC_A21
    , FSMC_A22
    , FSMC_A23
    , FSMC_A24
    , FSMC_A25
    , FSMC_A3
    , FSMC_A4
    , FSMC_A5
    , FSMC_A6
    , FSMC_A7
    , FSMC_A8
    , FSMC_A9
    , FSMC_ALE
    , FSMC_CD
    , FSMC_CLE
    , FSMC_CLK
    , FSMC_D0
    , FSMC_D1
    , FSMC_D10
    , FSMC_D11
    , FSMC_D12
    , FSMC_D13
    , FSMC_D14
    , FSMC_D15
    , FSMC_D2
    , FSMC_D3
    , FSMC_D4
    , FSMC_D5
    , FSMC_D6
    , FSMC_D7
    , FSMC_D8
    , FSMC_D9
    , FSMC_DA0
    , FSMC_DA1
    , FSMC_DA10
    , FSMC_DA11
    , FSMC_DA12
    , FSMC_DA13
    , FSMC_DA14
    , FSMC_DA15
    , FSMC_DA2
    , FSMC_DA3
    , FSMC_DA4
    , FSMC_DA5
    , FSMC_DA6
    , FSMC_DA7
    , FSMC_DA8
    , FSMC_DA9
    , FSMC_INT2
    , FSMC_INT3
    , FSMC_INTR
    , FSMC_NBL0
    , FSMC_NBL1
    , FSMC_NCE2
    , FSMC_NCE3
    , FSMC_NCE4_1
    , FSMC_NCE4_2
    , FSMC_NE1
    , FSMC_NE2
    , FSMC_NE3
    , FSMC_NE4
    , FSMC_NIORD
    , FSMC_NIOWR
    , FSMC_NL
    , FSMC_NOE
    , FSMC_NREG
    , FSMC_NWAIT
    , FSMC_NWE
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
    , I2S2_MCK
    , I2S2_SCK
    , I2S2_SD
    , I2S2_WS
    , I2S3_MCK
    , I2S3_SCK
    , I2S3_SD
    , I2S3_WS
    , I2S_CKIN
    , RCC_MCO_1
    , RCC_MCO_2
    , RCC_OSC32_IN
    , RCC_OSC32_OUT
    , RCC_OSC_IN
    , RCC_OSC_OUT
    , RTC_AF1
    , RTC_AF2
    , RTC_REFIN
    , SDIO_CK
    , SDIO_CMD
    , SDIO_D0
    , SDIO_D1
    , SDIO_D2
    , SDIO_D3
    , SDIO_D4
    , SDIO_D5
    , SDIO_D6
    , SDIO_D7
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
    , SYS_WKUP
    , TIM10_CH1
    , TIM11_CH1
    , TIM12_CH1
    , TIM12_CH2
    , TIM13_CH1
    , TIM14_CH1
    , TIM1_BKIN
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
    , UART4_RX
    , UART4_TX
    , UART5_RX
    , UART5_TX
    , USART1_CK
    , USART1_CTS
    , USART1_RTS
    , USART1_RX
    , USART1_TX
    , USART2_CK
    , USART2_CTS
    , USART2_RTS
    , USART2_RX
    , USART2_TX
    , USART3_CK
    , USART3_CTS
    , USART3_RTS
    , USART3_RX
    , USART3_TX
    , USART6_CK
    , USART6_CTS
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
    , USB_OTG_HS_VBUS
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
template<> struct alt_fun_traits<PA0, ETH_CRS> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA0, SYS_WKUP> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA0, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA0, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA0, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA0, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA1, ETH_REF_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA1, ETH_RX_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA1, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA1, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA1, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA1, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA10, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA10, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA10, USB_OTG_FS_ID> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA11, CAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA11, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, USB_OTG_FS_DM> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA12, CAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA12, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USB_OTG_FS_DP> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA13, SYS_JTMS_SWDIO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA14, SYS_JTCK_SWCLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, I2S3_WS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA15, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA15, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA15, SYS_JTDI> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA15, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA2, ETH_MDIO> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA2, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA2, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA2, TIM9_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA2, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA3, ETH_COL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA3, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA3, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA3, TIM9_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA3, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA3, USB_OTG_HS_ULPI_D0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA4, DCMI_HSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA4, I2S3_WS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA4, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA4, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA4, USART2_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA4, USB_OTG_HS_SOF> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA5, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM2_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA5, USB_OTG_HS_ULPI_CK> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA6, DCMI_PIXCLK> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA6, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA6, TIM13_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA6, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA6, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA7, ETH_CRS_DV> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, ETH_RX_DV> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA7, TIM14_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA7, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA7, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA8, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA8, RCC_MCO_1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA8, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA8, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA8, USB_OTG_FS_SOF> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA9, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA9, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA9, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB0, ETH_RXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB0, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB0, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB0, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB0, USB_OTG_HS_ULPI_D1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB1, ETH_RXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB1, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB1, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB1, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB1, USB_OTG_HS_ULPI_D2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB10, ETH_RX_ER> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB10, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB10, I2S2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB10, USB_OTG_HS_ULPI_D3> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB11, ETH_TX_EN> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB11, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB11, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB11, USB_OTG_HS_ULPI_D4> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB12, CAN2_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB12, ETH_TXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB12, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB12, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB12, USB_OTG_HS_ID> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB12, USB_OTG_HS_ULPI_D5> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB13, CAN2_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB13, ETH_TXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB13, I2S2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB13, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB13, USB_OTG_HS_ULPI_D6> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB13, USB_OTG_HS_VBUS> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB14, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB14, TIM12_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB14, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB14, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB14, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB14, USB_OTG_HS_DM> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB15, I2S2_SD> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB15, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, TIM12_CH2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB15, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB15, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB15, USB_OTG_HS_DP> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB3, I2S3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB3, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB3, SYS_JTDO_SWO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB4, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB4, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB4, SYS_JTRST> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB4, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB5, CAN2_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB5, DCMI_D10> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB5, ETH_PPS_OUT> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB5, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB5, I2S3_SD> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB5, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB5, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB5, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB5, USB_OTG_HS_ULPI_D7> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB6, CAN2_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB6, DCMI_D5> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB6, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB6, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB6, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB7, DCMI_VSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB7, FSMC_NL> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB7, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB7, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB7, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB8, CAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB8, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB8, ETH_TXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB8, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB8, SDIO_D4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB8, TIM10_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB8, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PB9, CAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB9, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB9, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB9, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, SDIO_D5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB9, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, TIM11_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB9, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC0, USB_OTG_HS_ULPI_STP> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC1, ETH_MDC> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC10, DCMI_D8> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC10, I2S3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC10, SDIO_D2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC10, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC10, UART4_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC11, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC11, SDIO_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC11, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC11, UART4_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC12, DCMI_D9> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC12, I2S3_SD> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC12, SDIO_CK> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC12, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC12, UART5_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC13, RTC_AF1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC14, RCC_OSC32_IN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC15, RCC_OSC32_OUT> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC2, ETH_TXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC2, USB_OTG_HS_ULPI_DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC3, ETH_TX_CLK> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC3, I2S2_SD> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, USB_OTG_HS_ULPI_NXT> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PC4, ETH_RXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC5, ETH_RXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC6, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC6, I2S2_MCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC6, SDIO_D6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC6, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC6, USART6_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC7, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC7, I2S3_MCK> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC7, SDIO_D7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC7, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC7, USART6_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC8, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC8, SDIO_D0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC8, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC8, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC8, USART6_CK> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC9, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC9, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC9, I2S_CKIN> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC9, RCC_MCO_2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC9, SDIO_D1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PC9, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PC9, TIM8_CH4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD0, CAN1_RX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD0, FSMC_D2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD0, FSMC_DA2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD1, CAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD1, FSMC_D3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD1, FSMC_DA3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD10, FSMC_D15> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD10, FSMC_DA15> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD10, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD11, FSMC_A16> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD11, FSMC_CLE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD11, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD12, FSMC_A17> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD12, FSMC_ALE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD12, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD12, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD13, FSMC_A18> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD13, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD14, FSMC_D0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD14, FSMC_DA0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD14, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD15, FSMC_D1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD15, FSMC_DA1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD15, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD2, DCMI_D11> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD2, SDIO_CMD> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD2, TIM3_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD2, UART5_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PD3, FSMC_CLK> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD3, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD4, FSMC_NOE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD4, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD5, FSMC_NWE> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD5, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD6, FSMC_NWAIT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD6, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD7, FSMC_NCE2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD7, FSMC_NE1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD7, USART2_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD8, FSMC_D13> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD8, FSMC_DA13> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD8, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD9, FSMC_D14> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD9, FSMC_DA14> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PD9, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PE0, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE0, FSMC_NBL0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE0, TIM4_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PE1, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE1, FSMC_NBL1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE10, FSMC_D7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE10, FSMC_DA7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE10, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE11, FSMC_D8> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE11, FSMC_DA8> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE11, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE12, FSMC_D9> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE12, FSMC_DA9> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE12, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE13, FSMC_D10> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE13, FSMC_DA10> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE13, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE14, FSMC_D11> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE14, FSMC_DA11> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE14, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE15, FSMC_D12> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE15, FSMC_DA12> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE15, TIM1_BKIN> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE2, ETH_TXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE2, FSMC_A23> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE2, SYS_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE3, FSMC_A19> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE3, SYS_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE4, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE4, FSMC_A20> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE4, SYS_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE5, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE5, FSMC_A21> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE5, SYS_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE5, TIM9_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE6, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE6, FSMC_A22> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE6, SYS_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE6, TIM9_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE7, FSMC_D4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE7, FSMC_DA4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE7, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE8, FSMC_D5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE8, FSMC_DA5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE8, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE9, FSMC_D6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE9, FSMC_DA6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PE9, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PF0, FSMC_A0> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF0, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF1, FSMC_A1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF1, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF10, FSMC_INTR> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF11, DCMI_D12> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PF12, FSMC_A6> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF13, FSMC_A7> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF14, FSMC_A8> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF15, FSMC_A9> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF2, FSMC_A2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF2, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PF3, FSMC_A3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF4, FSMC_A4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF5, FSMC_A5> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF6, FSMC_NIORD> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF6, TIM10_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PF7, FSMC_NREG> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF7, TIM11_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PF8, FSMC_NIOWR> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF8, TIM13_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PF9, FSMC_CD> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PF9, TIM14_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PG0, FSMC_A10> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG1, FSMC_A11> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG10, FSMC_NCE4_1> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG10, FSMC_NE3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG11, ETH_TX_EN> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG11, FSMC_NCE4_2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG12, FSMC_NE4> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG12, USART6_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG13, ETH_TXD0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG13, FSMC_A24> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG13, USART6_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG14, ETH_TXD1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG14, FSMC_A25> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG14, USART6_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG15, DCMI_D13> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PG15, USART6_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG2, FSMC_A12> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG3, FSMC_A13> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG4, FSMC_A14> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG5, FSMC_A15> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG6, FSMC_INT2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG7, FSMC_INT3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG7, USART6_CK> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG8, ETH_PPS_OUT> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PG8, USART6_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PG9, FSMC_NCE3> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG9, FSMC_NE2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PG9, USART6_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PH0, RCC_OSC_IN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PH1, RCC_OSC_OUT> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PH10, DCMI_D1> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH10, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH11, DCMI_D2> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH11, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH12, DCMI_D3> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH12, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PH13, CAN1_TX> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH13, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH14, DCMI_D4> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH14, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH15, DCMI_D11> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH15, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PH2, ETH_CRS> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH3, ETH_COL> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH4, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH4, USB_OTG_HS_ULPI_NXT> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PH5, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH6, ETH_RXD2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH6, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH6, TIM12_CH1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PH7, ETH_RXD3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PH7, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH8, DCMI_HSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH8, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH9, DCMI_D0> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PH9, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PH9, TIM12_CH2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PI0, DCMI_D13> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI0, I2S2_WS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI0, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI0, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PI1, DCMI_D8> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI1, I2S2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI1, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI10, ETH_RX_ER> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PI11, USB_OTG_HS_ULPI_DIR> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PI2, DCMI_D9> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI2, TIM8_CH4> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI3, DCMI_D10> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI3, I2S2_SD> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PI3, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI4, DCMI_D5> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI4, TIM8_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI5, DCMI_VSYNC> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI5, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI6, DCMI_D6> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI6, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI7, DCMI_D7> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PI7, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PI8, RTC_AF2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PI9, CAN1_RX> { static const alt_fun_t AF = AF9; };