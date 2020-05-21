#pragma once

////
//
//      STM32L4 pins
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
    , AF14
    , AF15
    };

enum alternate_function_t
    { CAN1_RX
    , CAN1_TX
    , CAN2_RX
    , CAN2_TX
    , COMP1_OUT
    , COMP2_OUT
    , CRS_SYNC
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
    , EVENTOUT
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
    , FMC_CLK
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
    , FMC_INT3
    , FMC_NBL0
    , FMC_NBL1
    , FMC_NCE
    , FMC_NCE3
    , FMC_NE1
    , FMC_NE2
    , FMC_NE3
    , FMC_NE4
    , FMC_NL
    , FMC_NOE
    , FMC_NWAIT
    , FMC_NWE
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
    , IR_OUT
    , LCD_COM0
    , LCD_COM1
    , LCD_COM2
    , LCD_COM3
    , LCD_COM4
    , LCD_COM5
    , LCD_COM6
    , LCD_COM7
    , LCD_SEG0
    , LCD_SEG1
    , LCD_SEG10
    , LCD_SEG11
    , LCD_SEG12
    , LCD_SEG13
    , LCD_SEG14
    , LCD_SEG15
    , LCD_SEG16
    , LCD_SEG17
    , LCD_SEG18
    , LCD_SEG19
    , LCD_SEG2
    , LCD_SEG20
    , LCD_SEG21
    , LCD_SEG22
    , LCD_SEG23
    , LCD_SEG24
    , LCD_SEG25
    , LCD_SEG26
    , LCD_SEG27
    , LCD_SEG28
    , LCD_SEG29
    , LCD_SEG3
    , LCD_SEG30
    , LCD_SEG31
    , LCD_SEG32
    , LCD_SEG33
    , LCD_SEG34
    , LCD_SEG35
    , LCD_SEG36
    , LCD_SEG37
    , LCD_SEG38
    , LCD_SEG39
    , LCD_SEG4
    , LCD_SEG40
    , LCD_SEG41
    , LCD_SEG42
    , LCD_SEG43
    , LCD_SEG5
    , LCD_SEG6
    , LCD_SEG7
    , LCD_SEG8
    , LCD_SEG9
    , LCD_VLCD
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM1_OUT
    , LPTIM2_ETR
    , LPTIM2_IN1
    , LPTIM2_OUT
    , LPUART1_CTS
    , LPUART1_DE
    , LPUART1_RTS
    , LPUART1_RX
    , LPUART1_TX
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
    , OCTOSPIM_P1_CLK
    , OCTOSPIM_P1_DQS
    , OCTOSPIM_P1_IO0
    , OCTOSPIM_P1_IO1
    , OCTOSPIM_P1_IO2
    , OCTOSPIM_P1_IO3
    , OCTOSPIM_P1_IO4
    , OCTOSPIM_P1_IO5
    , OCTOSPIM_P1_IO6
    , OCTOSPIM_P1_IO7
    , OCTOSPIM_P1_NCS
    , OCTOSPIM_P2_CLK
    , OCTOSPIM_P2_DQS
    , OCTOSPIM_P2_IO0
    , OCTOSPIM_P2_IO1
    , OCTOSPIM_P2_IO2
    , OCTOSPIM_P2_IO3
    , OCTOSPIM_P2_IO4
    , OCTOSPIM_P2_IO5
    , OCTOSPIM_P2_IO6
    , OCTOSPIM_P2_IO7
    , OCTOSPIM_P2_NCS
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
    , QUADSPI_NCS
    , RCC_MCO
    , RTC_OUT2
    , RTC_OUT_ALARM
    , RTC_OUT_CALIB
    , RTC_REFIN
    , SAI1_CK1
    , SAI1_CK2
    , SAI1_D1
    , SAI1_D2
    , SAI1_D3
    , SAI1_EXTCLK
    , SAI1_FS_A
    , SAI1_FS_B
    , SAI1_MCLK_A
    , SAI1_MCLK_B
    , SAI1_SCK_A
    , SAI1_SCK_B
    , SAI1_SD_A
    , SAI1_SD_B
    , SAI2_EXTCLK
    , SAI2_FS_A
    , SAI2_FS_B
    , SAI2_MCLK_A
    , SAI2_MCLK_B
    , SAI2_SCK_A
    , SAI2_SCK_B
    , SAI2_SD_A
    , SAI2_SD_B
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
    , SWPMI1_IO
    , SWPMI1_RX
    , SWPMI1_SUSPEND
    , SWPMI1_TX
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
    , TIM1_BKIN2_COMP1
    , TIM1_BKIN2_COMP2
    , TIM1_BKIN_COMP1
    , TIM1_BKIN_COMP2
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
    , TIM8_BKIN2_COMP1
    , TIM8_BKIN2_COMP2
    , TIM8_BKIN_COMP1
    , TIM8_BKIN_COMP2
    , TIM8_CH1
    , TIM8_CH1N
    , TIM8_CH2
    , TIM8_CH2N
    , TIM8_CH3
    , TIM8_CH3N
    , TIM8_CH4
    , TIM8_ETR
    , TSC_G1_IO1
    , TSC_G1_IO2
    , TSC_G1_IO3
    , TSC_G1_IO4
    , TSC_G2_IO1
    , TSC_G2_IO2
    , TSC_G2_IO3
    , TSC_G2_IO4
    , TSC_G3_IO1
    , TSC_G3_IO2
    , TSC_G3_IO3
    , TSC_G3_IO4
    , TSC_G4_IO1
    , TSC_G4_IO2
    , TSC_G4_IO3
    , TSC_G4_IO4
    , TSC_G5_IO1
    , TSC_G5_IO2
    , TSC_G5_IO3
    , TSC_G5_IO4
    , TSC_G6_IO1
    , TSC_G6_IO2
    , TSC_G6_IO3
    , TSC_G6_IO4
    , TSC_G7_IO1
    , TSC_G7_IO2
    , TSC_G7_IO3
    , TSC_G7_IO4
    , TSC_G8_IO1
    , TSC_G8_IO2
    , TSC_G8_IO3
    , TSC_G8_IO4
    , TSC_SYNC
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
    , USB_DM
    , USB_DP
    , USB_NOE
    , USB_OTG_FS_DM
    , USB_OTG_FS_DP
    , USB_OTG_FS_ID
    , USB_OTG_FS_NOE
    , USB_OTG_FS_SOF
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
template<> struct alt_fun_traits<PA0, COMP1_OUT> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF12; };
template<> struct alt_fun_traits<PA0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA0, SAI1_EXTCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA0, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA0, TIM5_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PA0, TIM8_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PA0, UART4_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PA0, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA0, USART2_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PA1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA1, I2C1_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PA1, LCD_SEG0> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA1, OCTOSPIM_P1_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PA1, SPI1_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF5; };
template<> struct alt_fun_traits<PA1, TIM15_CH1N> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA1, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA1, TIM5_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PA1, UART4_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PA1, USART2_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA1, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA10, CRS_SYNC> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA10, DCMI_D1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PA10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA10, I2C1_SDA> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PA10, LCD_COM2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA10, SAI1_D1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PA10, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA10, TIM17_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PA10, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA10, USB_OTG_FS_ID> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PA11, CAN1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PA11, COMP1_OUT> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF6; };
template<> struct alt_fun_traits<PA11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA11, SPI1_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF5; };
template<> struct alt_fun_traits<PA11, TIM1_BKIN2> { static const alt_fun_t AF = (gpio_conf & STM32L4Rx) ? AF12 : AF2; };
template<> struct alt_fun_traits<PA11, TIM1_BKIN2_COMP1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF12; };
template<> struct alt_fun_traits<PA11, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, USART1_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PA11, USB_DM> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA11, USB_OTG_FS_DM> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PA12, CAN1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PA12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA12, SPI1_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF5; };
template<> struct alt_fun_traits<PA12, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA12, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USB_DP> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA12, USB_OTG_FS_DP> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PA13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA13, IR_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA13, SAI1_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA13, SWPMI1_TX> { static const alt_fun<gpio_conf & (STM32L49x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA13, SYS_JTMS_SWDIO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA13, USB_NOE> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA13, USB_OTG_FS_NOE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PA14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA14, I2C1_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PA14, I2C4_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF5; };
template<> struct alt_fun_traits<PA14, LPTIM1_OUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF1; };
template<> struct alt_fun_traits<PA14, SAI1_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA14, SWPMI1_RX> { static const alt_fun<gpio_conf & (STM32L49x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA14, SYS_JTCK_SWCLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA14, USB_OTG_FS_SOF> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PA15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA15, LCD_SEG17> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA15, SAI2_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PA15, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA15, SPI3_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PA15, SWPMI1_SUSPEND> { static const alt_fun<gpio_conf & (STM32L49x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA15, SYS_JTDI> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA15, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA15, TSC_G3_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA15, UART4_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PA15, UART4_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PA15, USART2_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF3; };
template<> struct alt_fun_traits<PA15, USART3_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF7; };
template<> struct alt_fun_traits<PA15, USART3_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF7; };
template<> struct alt_fun_traits<PA2, COMP2_OUT> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA2, LCD_SEG1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA2, LPUART1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF8; };
template<> struct alt_fun_traits<PA2, OCTOSPIM_P1_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PA2, QUADSPI_BK1_NCS> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA2, SAI2_EXTCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PA2, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA2, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA2, TIM5_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PA2, USART2_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA3, LCD_SEG2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA3, LPUART1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF8; };
template<> struct alt_fun_traits<PA3, OCTOSPIM_P1_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PA3, QUADSPI_CLK> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA3, SAI1_CK1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PA3, SAI1_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA3, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA3, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA3, TIM5_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PA3, USART2_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA4, DCMI_HSYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PA4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA4, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA4, OCTOSPIM_P1_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PA4, SAI1_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA4, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA4, SPI3_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PA4, USART2_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA5, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & STM32L45x> AF = AF6; };
template<> struct alt_fun_traits<PA5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA5, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA5, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA5, TIM8_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PA6, COMP1_OUT> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF6; };
template<> struct alt_fun_traits<PA6, DCMI_PIXCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PA6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA6, LCD_SEG3> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA6, LPUART1_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF8; };
template<> struct alt_fun_traits<PA6, OCTOSPIM_P1_IO3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PA6, QUADSPI_BK1_IO3> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA6, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA6, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA6, TIM1_BKIN> { static const alt_fun_t AF = (gpio_conf & STM32L4Rx) ? AF12 : AF1; };
template<> struct alt_fun_traits<PA6, TIM1_BKIN_COMP2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA6, TIM3_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PA6, TIM8_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = (gpio_conf & STM32L4Rx) ? AF13 : AF3; };
template<> struct alt_fun_traits<PA6, TIM8_BKIN_COMP2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PA6, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA6, USART3_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PA7, COMP2_OUT> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA7, DFSDM1_DATIN0> { static const alt_fun<gpio_conf & STM32L45x> AF = AF6; };
template<> struct alt_fun_traits<PA7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA7, I2C3_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PA7, LCD_SEG4> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA7, OCTOSPIM_P1_IO2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PA7, QUADSPI_BK1_IO2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PA7, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA7, TIM17_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PA7, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA7, TIM3_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PA7, TIM8_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PA8, DFSDM1_CKIN1> { static const alt_fun<gpio_conf & STM32L45x> AF = AF6; };
template<> struct alt_fun_traits<PA8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA8, LCD_COM0> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA8, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA8, RCC_MCO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA8, SAI1_CK2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PA8, SAI1_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA8, SWPMI1_IO> { static const alt_fun<gpio_conf & (STM32L49x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PA8, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA8, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA8, USB_OTG_FS_SOF> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PA9, DCMI_D0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PA9, DFSDM1_DATIN1> { static const alt_fun<gpio_conf & STM32L45x> AF = AF6; };
template<> struct alt_fun_traits<PA9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA9, I2C1_SCL> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PA9, LCD_COM1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PA9, SAI1_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PA9, SPI2_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PA9, TIM15_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA9, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB0, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB0, DFSDM1_CKIN0> { static const alt_fun<gpio_conf & STM32L45x> AF = AF6; };
template<> struct alt_fun_traits<PB0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB0, LCD_SEG5> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB0, OCTOSPIM_P1_IO1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PB0, QUADSPI_BK1_IO1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PB0, SAI1_EXTCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB0, SPI1_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF5; };
template<> struct alt_fun_traits<PB0, SYS_TRACED0> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB0, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB0, TIM3_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PB0, TIM8_CH2N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PB0, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB1, DFSDM1_DATIN0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB1, LCD_SEG6> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB1, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB1, LPUART1_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF8; };
template<> struct alt_fun_traits<PB1, LPUART1_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF8; };
template<> struct alt_fun_traits<PB1, OCTOSPIM_P1_IO0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PB1, QUADSPI_BK1_IO0> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PB1, SYS_TRACED1> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB1, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB1, TIM3_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PB1, TIM8_CH3N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PB1, USART3_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB1, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB10, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB10, DFSDM1_DATIN7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB10, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB10, I2C4_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF3; };
template<> struct alt_fun_traits<PB10, LCD_SEG10> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB10, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB10, OCTOSPIM_P1_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PB10, QUADSPI_CLK> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PB10, SAI1_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB10, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB10, TSC_SYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF9; };
template<> struct alt_fun_traits<PB10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB11, COMP2_OUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB11, DFSDM1_CKIN7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB11, DSIHOST_TE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PB11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB11, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB11, I2C4_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF3; };
template<> struct alt_fun_traits<PB11, LCD_SEG11> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB11, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB11, OCTOSPIM_P1_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PB11, QUADSPI_BK1_NCS> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PB11, QUADSPI_NCS> { static const alt_fun<gpio_conf & STM32L47x> AF = AF10; };
template<> struct alt_fun_traits<PB11, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB12, CAN1_RX> { static const alt_fun<gpio_conf & STM32L45x> AF = AF10; };
template<> struct alt_fun_traits<PB12, CAN2_RX> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PB12, DFSDM1_DATIN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB12, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB12, LCD_SEG12> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB12, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB12, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB12, SAI1_FS_A> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB12, SAI2_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PB12, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, SWPMI1_IO> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB12, TIM15_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN> { static const alt_fun_t AF = (gpio_conf & STM32L4Rx) ? AF3 : AF1; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN_COMP2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF3; };
template<> struct alt_fun_traits<PB12, TSC_G1_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB13, CAN1_TX> { static const alt_fun<gpio_conf & STM32L45x> AF = AF10; };
template<> struct alt_fun_traits<PB13, CAN2_TX> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PB13, DFSDM1_CKIN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB13, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB13, LCD_SEG13> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB13, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB13, SAI1_SCK_A> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB13, SAI2_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PB13, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, SWPMI1_TX> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB13, TIM15_CH1N> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB13, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB13, TSC_G1_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB13, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB13, USART3_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PB14, DFSDM1_DATIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB14, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB14, LCD_SEG14> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB14, SAI1_MCLK_A> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB14, SAI2_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PB14, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB14, SWPMI1_RX> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB14, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB14, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB14, TIM8_CH2N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PB14, TSC_G1_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB14, USART3_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB14, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB15, DFSDM1_CKIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB15, LCD_SEG15> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB15, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB15, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB15, SAI2_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PB15, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, SWPMI1_SUSPEND> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB15, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB15, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB15, TIM8_CH3N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PB15, TSC_G1_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB2, DFSDM1_CKIN0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PB2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB2, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB2, LCD_VLCD> { static const alt_fun<gpio_conf & (STM32L49x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB2, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB2, LTDC_B1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PB2, OCTOSPIM_P1_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PB2, RTC_OUT2> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB2, RTC_OUT_ALARM> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB2, RTC_OUT_CALIB> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, CRS_SYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB3, LCD_SEG7> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB3, SAI1_SCK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB3, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, SPI3_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PB3, SYS_JTDO_SWO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB3, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB3, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, DCMI_D12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB4, I2C3_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF4; };
template<> struct alt_fun_traits<PB4, LCD_SEG8> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB4, SAI1_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB4, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB4, SPI3_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PB4, SYS_JTRST> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB4, TIM17_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PB4, TIM3_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PB4, TSC_G2_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB4, UART5_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PB4, UART5_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PB4, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, USART1_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PB5, CAN1_RX> { static const alt_fun<gpio_conf & STM32L45x> AF = AF3; };
template<> struct alt_fun_traits<PB5, CAN2_RX> { static const alt_fun<gpio_conf & STM32L49x> AF = AF3; };
template<> struct alt_fun_traits<PB5, COMP2_OUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB5, DCMI_D10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB5, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB5, LCD_SEG9> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB5, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB5, SAI1_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB5, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB5, SPI3_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PB5, SYS_TRACED2> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB5, TIM16_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB5, TIM3_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PB5, TSC_G2_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB5, UART5_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PB5, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB6, CAN1_TX> { static const alt_fun<gpio_conf & STM32L45x> AF = AF8; };
template<> struct alt_fun_traits<PB6, CAN2_TX> { static const alt_fun<gpio_conf & STM32L49x> AF = AF8; };
template<> struct alt_fun_traits<PB6, DCMI_D5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB6, DFSDM1_DATIN5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB6, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB6, I2C4_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF5; };
template<> struct alt_fun_traits<PB6, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB6, SAI1_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB6, SYS_TRACED3> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB6, TIM16_CH1N> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB6, TIM4_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PB6, TIM8_BKIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = (gpio_conf & STM32L4Rx) ? AF12 : AF3; };
template<> struct alt_fun_traits<PB6, TIM8_BKIN2_COMP2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PB6, TSC_G2_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB6, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB7, DCMI_VSYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB7, DFSDM1_CKIN5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB7, DSIHOST_TE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PB7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB7, FMC_NL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PB7, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB7, I2C4_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF5; };
template<> struct alt_fun_traits<PB7, LCD_SEG21> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB7, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB7, SYS_TRACECLK> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PB7, TIM17_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PB7, TIM4_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PB7, TIM8_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = (gpio_conf & STM32L4Rx) ? AF13 : AF3; };
template<> struct alt_fun_traits<PB7, TIM8_BKIN_COMP1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PB7, TSC_G2_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB7, UART4_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PB7, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB8, CAN1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PB8, DCMI_D6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB8, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PB8, DFSDM1_DATIN6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB8, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB8, LCD_SEG16> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB8, LTDC_B1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PB8, SAI1_CK1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PB8, SAI1_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB8, SDMMC1_CKIN> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF8; };
template<> struct alt_fun_traits<PB8, SDMMC1_D4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB8, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB8, TIM4_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PB9, CAN1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PB9, DCMI_D7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PB9, DFSDM1_CKIN6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PB9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB9, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB9, IR_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB9, LCD_COM3> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PB9, SAI1_D2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PB9, SAI1_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PB9, SDMMC1_CDIR> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF8; };
template<> struct alt_fun_traits<PB9, SDMMC1_D5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PB9, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, TIM17_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PB9, TIM4_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PC0, DFSDM1_DATIN4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PC0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC0, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC0, I2C4_SCL> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC0, LCD_SEG18> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC0, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC0, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC0, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC0, SAI2_FS_A> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF13; };
template<> struct alt_fun_traits<PC0, SYS_TRACECLK> { static const alt_fun<gpio_conf & STM32L41x> AF = AF0; };
template<> struct alt_fun_traits<PC1, DFSDM1_CKIN4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PC1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC1, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC1, I2C4_SDA> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC1, LCD_SEG19> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC1, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC1, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC1, OCTOSPIM_P1_IO4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PC1, QUADSPI_BK2_IO0> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PC1, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF13; };
template<> struct alt_fun_traits<PC1, SPI2_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PC1, SYS_TRACED0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L41x)> AF = AF0; };
template<> struct alt_fun_traits<PC10, DCMI_D8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC10, LCD_COM4> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC10, LCD_SEG28> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC10, LCD_SEG40> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC10, SAI2_SCK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC10, SDMMC1_D2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC10, SPI3_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PC10, SYS_TRACED1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L41x)> AF = AF0; };
template<> struct alt_fun_traits<PC10, TSC_G3_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC10, UART4_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PC10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC11, DCMI_D2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF4; };
template<> struct alt_fun_traits<PC11, DCMI_D4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC11, LCD_COM5> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC11, LCD_SEG29> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC11, LCD_SEG41> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC11, OCTOSPIM_P1_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PC11, QUADSPI_BK2_NCS> { static const alt_fun<gpio_conf & STM32L49x> AF = AF5; };
template<> struct alt_fun_traits<PC11, SAI2_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC11, SDMMC1_D3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC11, SPI3_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PC11, TSC_G3_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC11, UART4_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF8; };
template<> struct alt_fun_traits<PC11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC12, DCMI_D9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC12, LCD_COM6> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC12, LCD_SEG30> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC12, LCD_SEG42> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC12, SAI2_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC12, SDMMC1_CK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC12, SPI3_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF6; };
template<> struct alt_fun_traits<PC12, SYS_TRACED3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L41x)> AF = AF0; };
template<> struct alt_fun_traits<PC12, TSC_G3_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC12, UART5_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PC12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC2, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PC2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC2, LCD_SEG20> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC2, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC2, OCTOSPIM_P1_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PC2, QUADSPI_BK2_IO1> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PC2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC3, LCD_VLCD> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC3, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC3, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC3, OCTOSPIM_P1_IO6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PC3, QUADSPI_BK2_IO2> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PC3, SAI1_D1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PC3, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PC3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC4, LCD_SEG22> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC4, OCTOSPIM_P1_IO7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PC4, QUADSPI_BK2_IO3> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PC4, USART3_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC5, LCD_SEG23> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC5, SAI1_D3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PC5, USART3_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PC6, DCMI_D0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC6, DFSDM1_CKIN3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PC6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC6, LCD_SEG24> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC6, LTDC_R0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PC6, SAI2_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC6, SDMMC1_D0DIR> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF8; };
template<> struct alt_fun_traits<PC6, SDMMC1_D6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC6, TIM3_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC6, TIM8_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PC6, TSC_G4_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC7, DCMI_D1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC7, DFSDM1_DATIN3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PC7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC7, LCD_SEG25> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC7, LTDC_R1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PC7, SAI2_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC7, SDMMC1_D123DIR> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF8; };
template<> struct alt_fun_traits<PC7, SDMMC1_D7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC7, TIM3_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC7, TIM8_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PC7, TSC_G4_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC8, DCMI_D2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PC8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC8, LCD_SEG26> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC8, SDMMC1_D0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC8, TIM3_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC8, TIM8_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PC8, TSC_G4_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC9, DCMI_D3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PC9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC9, I2C3_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF6; };
template<> struct alt_fun_traits<PC9, LCD_SEG27> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PC9, SAI2_EXTCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PC9, SDMMC1_D1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PC9, SYS_TRACED0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF0; };
template<> struct alt_fun_traits<PC9, TIM3_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PC9, TIM8_BKIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = (gpio_conf & STM32L4Rx) ? AF14 : AF1; };
template<> struct alt_fun_traits<PC9, TIM8_BKIN2_COMP1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PC9, TIM8_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF3; };
template<> struct alt_fun_traits<PC9, TSC_G4_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC9, USB_NOE> { static const alt_fun<gpio_conf & (STM32L45x|STM32L43x|STM32L41x)> AF = AF10; };
template<> struct alt_fun_traits<PC9, USB_OTG_FS_NOE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF10; };
template<> struct alt_fun_traits<PD0, CAN1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD0, DFSDM1_DATIN7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PD0, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD0, FMC_D2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD0, FMC_DA2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD0, LTDC_B4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD0, SPI2_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PD1, CAN1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD1, DFSDM1_CKIN7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PD1, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD1, FMC_D3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD1, FMC_DA3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD1, LTDC_B5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD1, SPI2_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PD10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD10, FMC_D15> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD10, FMC_DA15> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD10, LCD_SEG30> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD10, LTDC_R5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD10, SAI2_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PD10, TSC_G6_IO1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD10, USART3_CK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD11, FMC_A16> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD11, I2C4_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF4; };
template<> struct alt_fun_traits<PD11, LCD_SEG31> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD11, LPTIM2_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF14; };
template<> struct alt_fun_traits<PD11, LTDC_R6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD11, SAI2_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PD11, TSC_G6_IO2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD11, USART3_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD11, USART3_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PD12, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD12, FMC_A17> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD12, I2C4_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF4; };
template<> struct alt_fun_traits<PD12, LCD_SEG32> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD12, LPTIM2_IN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF14; };
template<> struct alt_fun_traits<PD12, LTDC_R7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD12, SAI2_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PD12, TIM4_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PD12, TSC_G6_IO3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD12, USART3_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD12, USART3_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD13, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD13, FMC_A18> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD13, I2C4_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x)> AF = AF4; };
template<> struct alt_fun_traits<PD13, LCD_SEG33> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD13, LPTIM2_OUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF14; };
template<> struct alt_fun_traits<PD13, TIM4_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PD13, TSC_G6_IO4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PD14, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD14, FMC_D0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD14, FMC_DA0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD14, LCD_SEG34> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD14, LTDC_B2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD14, TIM4_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PD15, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD15, FMC_D1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD15, FMC_DA1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD15, LCD_SEG35> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD15, LTDC_B3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD15, TIM4_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PD2, DCMI_D11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PD2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD2, LCD_COM7> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD2, LCD_SEG31> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD2, LCD_SEG43> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD2, SDMMC1_CMD> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF12; };
template<> struct alt_fun_traits<PD2, SYS_TRACED2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L41x)> AF = AF0; };
template<> struct alt_fun_traits<PD2, TIM3_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PD2, TSC_SYNC> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD2, UART5_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PD2, USART3_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD2, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PD3, DCMI_D5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PD3, DFSDM1_DATIN0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PD3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD3, FMC_CLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD3, LTDC_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD3, OCTOSPIM_P2_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PD3, QUADSPI_BK2_NCS> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PD3, SPI2_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PD3, SPI2_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PD3, USART2_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD3, USART2_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PD4, DFSDM1_CKIN0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PD4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD4, FMC_NOE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD4, OCTOSPIM_P1_IO4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PD4, QUADSPI_BK2_IO0> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PD4, SPI2_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PD4, USART2_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD4, USART2_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD5, FMC_NWE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD5, OCTOSPIM_P1_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PD5, QUADSPI_BK2_IO1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PD5, USART2_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD6, DCMI_D10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PD6, DFSDM1_DATIN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PD6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD6, FMC_NWAIT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD6, LTDC_DE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD6, OCTOSPIM_P1_IO6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PD6, QUADSPI_BK2_IO1> { static const alt_fun<gpio_conf & STM32L49x> AF = AF5; };
template<> struct alt_fun_traits<PD6, QUADSPI_BK2_IO2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PD6, SAI1_D1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PD6, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PD6, SPI3_MOSI> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PD6, USART2_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD7, DFSDM1_CKIN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PD7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD7, FMC_NCE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF12; };
template<> struct alt_fun_traits<PD7, FMC_NE1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD7, OCTOSPIM_P1_IO7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PD7, QUADSPI_BK2_IO3> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PD7, USART2_CK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD8, DCMI_HSYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PD8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD8, FMC_D13> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD8, FMC_DA13> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD8, LCD_SEG28> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD8, LTDC_R3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD8, USART3_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PD9, DCMI_PIXCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PD9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PD9, FMC_D14> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD9, FMC_DA14> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PD9, LCD_SEG29> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PD9, LTDC_R4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PD9, SAI2_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PD9, USART3_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF7; };
template<> struct alt_fun_traits<PE0, DCMI_D2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PE0, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE0, FMC_NBL0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE0, LCD_SEG36> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PE0, LTDC_HSYNC> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE0, TIM16_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF14; };
template<> struct alt_fun_traits<PE0, TIM4_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PE1, DCMI_D3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PE1, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE1, FMC_NBL1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE1, LCD_SEG37> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PE1, LTDC_VSYNC> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE1, TIM17_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PE10, DFSDM1_DATIN4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PE10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE10, FMC_D7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE10, FMC_DA7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE10, LTDC_G3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE10, OCTOSPIM_P1_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE10, QUADSPI_CLK> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE10, SAI1_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE10, TIM1_CH2N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE10, TSC_G5_IO1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE11, DFSDM1_CKIN4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PE11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE11, FMC_D8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE11, FMC_DA8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE11, LTDC_G4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE11, OCTOSPIM_P1_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE11, QUADSPI_BK1_NCS> { static const alt_fun<gpio_conf & (STM32L49x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE11, QUADSPI_NCS> { static const alt_fun<gpio_conf & STM32L47x> AF = AF10; };
template<> struct alt_fun_traits<PE11, TIM1_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE11, TSC_G5_IO2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE12, DFSDM1_DATIN5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PE12, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE12, FMC_D9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE12, FMC_DA9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE12, LTDC_G5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE12, OCTOSPIM_P1_IO0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE12, QUADSPI_BK1_IO0> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE12, SPI1_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PE12, TIM1_CH3N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE12, TSC_G5_IO3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE13, DFSDM1_CKIN5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PE13, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE13, FMC_D10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE13, FMC_DA10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE13, LTDC_G6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE13, OCTOSPIM_P1_IO1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE13, QUADSPI_BK1_IO1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE13, SPI1_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PE13, TIM1_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE13, TSC_G5_IO4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE14, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE14, FMC_D11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE14, FMC_DA11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE14, LTDC_G7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE14, OCTOSPIM_P1_IO2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE14, QUADSPI_BK1_IO2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE14, SPI1_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PE14, TIM1_BKIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = (gpio_conf & STM32L4Rx) ? AF3 : AF2; };
template<> struct alt_fun_traits<PE14, TIM1_BKIN2_COMP2> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF3; };
template<> struct alt_fun_traits<PE14, TIM1_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE15, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE15, FMC_D12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE15, FMC_DA12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE15, LTDC_R2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE15, OCTOSPIM_P1_IO3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PE15, QUADSPI_BK1_IO3> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF10; };
template<> struct alt_fun_traits<PE15, SPI1_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF5; };
template<> struct alt_fun_traits<PE15, TIM1_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = (gpio_conf & STM32L4Rx) ? AF3 : AF1; };
template<> struct alt_fun_traits<PE15, TIM1_BKIN_COMP1> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF3; };
template<> struct alt_fun_traits<PE2, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE2, FMC_A23> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE2, LCD_SEG38> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PE2, LTDC_R0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE2, SAI1_CK1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PE2, SAI1_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE2, SYS_TRACECLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF0; };
template<> struct alt_fun_traits<PE2, TIM3_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PE2, TSC_G7_IO1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE3, FMC_A19> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE3, LCD_SEG39> { static const alt_fun<gpio_conf & (STM32L49x|STM32L47x|STM32L43x)> AF = AF11; };
template<> struct alt_fun_traits<PE3, LTDC_R1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE3, OCTOSPIM_P1_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PE3, SAI1_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE3, SYS_TRACED0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF0; };
template<> struct alt_fun_traits<PE3, TIM3_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PE3, TSC_G7_IO2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE4, DCMI_D4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PE4, DFSDM1_DATIN3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PE4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE4, FMC_A20> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE4, LTDC_B0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE4, SAI1_D2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PE4, SAI1_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE4, SYS_TRACED1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF0; };
template<> struct alt_fun_traits<PE4, TIM3_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PE4, TSC_G7_IO3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE5, DCMI_D6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PE5, DFSDM1_CKIN3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PE5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE5, FMC_A21> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE5, LTDC_G0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE5, SAI1_CK2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PE5, SAI1_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE5, SYS_TRACED2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF0; };
template<> struct alt_fun_traits<PE5, TIM3_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PE5, TSC_G7_IO4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF9; };
template<> struct alt_fun_traits<PE6, DCMI_D7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PE6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE6, FMC_A22> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE6, LTDC_G1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE6, SAI1_D1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PE6, SAI1_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE6, SYS_TRACED3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF0; };
template<> struct alt_fun_traits<PE6, TIM3_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF2; };
template<> struct alt_fun_traits<PE7, DFSDM1_DATIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PE7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE7, FMC_D4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE7, FMC_DA4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE7, LTDC_B6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE7, SAI1_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE7, TIM1_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE8, DFSDM1_CKIN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PE8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE8, FMC_D5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE8, FMC_DA5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE8, LTDC_B7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE8, SAI1_SCK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE8, TIM1_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PE9, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x)> AF = AF6; };
template<> struct alt_fun_traits<PE9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF15; };
template<> struct alt_fun_traits<PE9, FMC_D6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE9, FMC_DA6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PE9, LTDC_G2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PE9, SAI1_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF13; };
template<> struct alt_fun_traits<PE9, TIM1_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x|STM32L45x|STM32L43x)> AF = AF1; };
template<> struct alt_fun_traits<PF0, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF0, FMC_A0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF0, I2C2_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PF0, OCTOSPIM_P2_IO0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF1, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF1, FMC_A1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF1, I2C2_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PF1, OCTOSPIM_P2_IO1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF10, DCMI_D11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PF10, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF6; };
template<> struct alt_fun_traits<PF10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF10, OCTOSPIM_P1_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PF10, QUADSPI_CLK> { static const alt_fun<gpio_conf & STM32L49x> AF = AF3; };
template<> struct alt_fun_traits<PF10, SAI1_D3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF13; };
template<> struct alt_fun_traits<PF10, TIM15_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PF11, DCMI_D12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PF11, DSIHOST_TE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PF11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF11, LTDC_DE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF9; };
template<> struct alt_fun_traits<PF12, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF12, FMC_A6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF12, LTDC_B0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PF12, OCTOSPIM_P2_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF13, DFSDM1_DATIN6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PF13, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF13, FMC_A7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF13, I2C4_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PF13, LTDC_B1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PF14, DFSDM1_CKIN6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PF14, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF14, FMC_A8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF14, I2C4_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PF14, LTDC_G0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PF14, TSC_G8_IO1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF9; };
template<> struct alt_fun_traits<PF15, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF15, FMC_A9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF15, I2C4_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PF15, LTDC_G1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PF15, TSC_G8_IO2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF9; };
template<> struct alt_fun_traits<PF2, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF2, FMC_A2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF2, I2C2_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PF2, OCTOSPIM_P2_IO2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF3, FMC_A3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF3, OCTOSPIM_P2_IO3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF4, FMC_A4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF4, OCTOSPIM_P2_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PF5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF5, FMC_A5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PF6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF6, OCTOSPIM_P1_IO3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PF6, QUADSPI_BK1_IO3> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PF6, SAI1_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PF6, TIM5_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PF6, TIM5_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF1; };
template<> struct alt_fun_traits<PF7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF7, OCTOSPIM_P1_IO2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PF7, QUADSPI_BK1_IO2> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PF7, SAI1_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PF7, TIM5_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PF8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF8, OCTOSPIM_P1_IO0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PF8, QUADSPI_BK1_IO0> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PF8, SAI1_SCK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PF8, TIM5_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PF9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PF9, OCTOSPIM_P1_IO1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF10; };
template<> struct alt_fun_traits<PF9, QUADSPI_BK1_IO1> { static const alt_fun<gpio_conf & STM32L49x> AF = AF10; };
template<> struct alt_fun_traits<PF9, SAI1_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PF9, TIM15_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PF9, TIM5_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF2; };
template<> struct alt_fun_traits<PG0, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG0, FMC_A10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG0, OCTOSPIM_P2_IO4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG0, TSC_G8_IO3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF9; };
template<> struct alt_fun_traits<PG1, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG1, FMC_A11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG1, OCTOSPIM_P2_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG1, TSC_G8_IO4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF9; };
template<> struct alt_fun_traits<PG10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG10, FMC_NE3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG10, LPTIM1_IN1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF1; };
template<> struct alt_fun_traits<PG10, OCTOSPIM_P2_IO7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG10, SAI2_FS_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG10, SPI3_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PG10, TIM15_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PG10, USART1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PG11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG11, LPTIM1_IN2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF1; };
template<> struct alt_fun_traits<PG11, OCTOSPIM_P1_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PG11, SAI2_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG11, SPI3_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PG11, TIM15_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PG11, USART1_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PG11, USART1_NSS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF7; };
template<> struct alt_fun_traits<PG12, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG12, FMC_NE4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG12, LPTIM1_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF1; };
template<> struct alt_fun_traits<PG12, OCTOSPIM_P2_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG12, SAI2_SD_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG12, SPI3_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PG12, USART1_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PG12, USART1_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PG13, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG13, FMC_A24> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG13, I2C1_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG13, LTDC_R0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PG13, USART1_CK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PG14, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG14, FMC_A25> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG14, I2C1_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG14, LTDC_R1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PG15, DCMI_D13> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PG15, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG15, I2C1_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG15, LPTIM1_OUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF1; };
template<> struct alt_fun_traits<PG15, OCTOSPIM_P2_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG2, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG2, FMC_A12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG2, SAI2_SCK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG2, SPI1_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF5; };
template<> struct alt_fun_traits<PG3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG3, FMC_A13> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG3, SAI2_FS_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG3, SPI1_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF5; };
template<> struct alt_fun_traits<PG4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG4, FMC_A14> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG4, SAI2_MCLK_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG4, SPI1_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF5; };
template<> struct alt_fun_traits<PG5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG5, FMC_A15> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG5, LPUART1_CTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PG5, SAI2_SD_B> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG5, SPI1_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF5; };
template<> struct alt_fun_traits<PG6, DSIHOST_TE> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF11; };
template<> struct alt_fun_traits<PG6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG6, I2C3_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG6, LPUART1_DE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PG6, LPUART1_RTS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PG6, LTDC_R1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF9; };
template<> struct alt_fun_traits<PG6, OCTOSPIM_P1_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PG7, DFSDM1_CKOUT> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF6; };
template<> struct alt_fun_traits<PG7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG7, FMC_INT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF12; };
template<> struct alt_fun_traits<PG7, FMC_INT3> { static const alt_fun<gpio_conf & STM32L47x> AF = AF12; };
template<> struct alt_fun_traits<PG7, I2C3_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG7, LPUART1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PG7, OCTOSPIM_P2_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG7, SAI1_CK1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PG7, SAI1_MCLK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF13; };
template<> struct alt_fun_traits<PG8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG8, I2C3_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF4; };
template<> struct alt_fun_traits<PG8, LPUART1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF8; };
template<> struct alt_fun_traits<PG9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF15; };
template<> struct alt_fun_traits<PG9, FMC_NCE> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF12; };
template<> struct alt_fun_traits<PG9, FMC_NCE3> { static const alt_fun<gpio_conf & STM32L47x> AF = AF12; };
template<> struct alt_fun_traits<PG9, FMC_NE2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF12; };
template<> struct alt_fun_traits<PG9, OCTOSPIM_P2_IO6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PG9, SAI2_SCK_A> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF13; };
template<> struct alt_fun_traits<PG9, SPI3_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF6; };
template<> struct alt_fun_traits<PG9, TIM15_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF14; };
template<> struct alt_fun_traits<PG9, USART1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L47x)> AF = AF7; };
template<> struct alt_fun_traits<PH0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH10, DCMI_D1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH10, OCTOSPIM_P2_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH10, TIM5_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF2; };
template<> struct alt_fun_traits<PH11, DCMI_D2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH11, OCTOSPIM_P2_IO6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH11, TIM5_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF2; };
template<> struct alt_fun_traits<PH12, DCMI_D3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH12, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH12, OCTOSPIM_P2_IO7> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH12, TIM5_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF2; };
template<> struct alt_fun_traits<PH13, CAN1_TX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF9; };
template<> struct alt_fun_traits<PH13, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH13, TIM8_CH1N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PH14, DCMI_D4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH14, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH14, TIM8_CH2N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PH15, DCMI_D11> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH15, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH15, OCTOSPIM_P2_IO6> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH15, TIM8_CH3N> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PH2, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH2, OCTOSPIM_P1_IO4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PH2, QUADSPI_BK2_IO0> { static const alt_fun<gpio_conf & STM32L49x> AF = AF3; };
template<> struct alt_fun_traits<PH3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x|STM32L45x|STM32L43x|STM32L41x)> AF = AF15; };
template<> struct alt_fun_traits<PH4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH4, I2C2_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH4, OCTOSPIM_P2_DQS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH5, DCMI_PIXCLK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH5, I2C2_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH6, DCMI_D8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH6, I2C2_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH6, OCTOSPIM_P2_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH7, DCMI_D9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH7, I2C3_SCL> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH8, DCMI_HSYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH8, I2C3_SDA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH8, OCTOSPIM_P2_IO3> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PH9, DCMI_D0> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PH9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PH9, I2C3_SMBA> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF4; };
template<> struct alt_fun_traits<PH9, OCTOSPIM_P2_IO4> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI0, DCMI_D13> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI0, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI0, OCTOSPIM_P1_IO5> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF3; };
template<> struct alt_fun_traits<PI0, SPI2_NSS> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PI0, TIM5_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF2; };
template<> struct alt_fun_traits<PI1, DCMI_D8> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI1, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI1, SPI2_SCK> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PI10, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI10, OCTOSPIM_P2_IO1> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI11, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI11, OCTOSPIM_P2_IO0> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI2, DCMI_D9> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI2, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI2, SPI2_MISO> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PI2, TIM8_CH4> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI3, DCMI_D10> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI3, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI3, SPI2_MOSI> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF5; };
template<> struct alt_fun_traits<PI3, TIM8_ETR> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI4, DCMI_D5> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI4, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI4, TIM8_BKIN> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI5, DCMI_VSYNC> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI5, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI5, OCTOSPIM_P2_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI5, TIM8_CH1> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI6, DCMI_D6> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI6, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI6, OCTOSPIM_P2_CLK> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI6, TIM8_CH2> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI7, DCMI_D7> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI7, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI7, TIM8_CH3> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF3; };
template<> struct alt_fun_traits<PI8, DCMI_D12> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF10; };
template<> struct alt_fun_traits<PI8, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI8, OCTOSPIM_P2_NCS> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
template<> struct alt_fun_traits<PI9, CAN1_RX> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF9; };
template<> struct alt_fun_traits<PI9, EVENTOUT> { static const alt_fun<gpio_conf & (STM32L4Rx|STM32L49x)> AF = AF15; };
template<> struct alt_fun_traits<PI9, OCTOSPIM_P2_IO2> { static const alt_fun<gpio_conf & STM32L4Rx> AF = AF5; };
