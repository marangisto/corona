#pragma once

////
//
//      STM32L5 pins
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
    , PH3 = 0x73
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
    { COMP1_OUT
    , COMP2_OUT
    , CRS_SYNC
    , DEBUG_JTCK_SWCLK
    , DEBUG_JTDI
    , DEBUG_JTDO_SWO
    , DEBUG_JTMS_SWDIO
    , DEBUG_JTRST
    , DEBUG_TRACECLK
    , DEBUG_TRACED0
    , DEBUG_TRACED1
    , DEBUG_TRACED2
    , DEBUG_TRACED3
    , DFSDM1_CKIN0
    , DFSDM1_CKIN1
    , DFSDM1_CKIN2
    , DFSDM1_CKIN3
    , DFSDM1_CKOUT
    , DFSDM1_DATIN0
    , DFSDM1_DATIN1
    , DFSDM1_DATIN2
    , DFSDM1_DATIN3
    , EVENTOUT
    , FDCAN1_RX
    , FDCAN1_TX
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
    , FMC_NBL0
    , FMC_NBL1
    , FMC_NCE
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
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM1_OUT
    , LPTIM2_ETR
    , LPTIM2_IN1
    , LPTIM2_OUT
    , LPTIM3_ETR
    , LPTIM3_IN1
    , LPTIM3_OUT
    , LPUART1_CTS
    , LPUART1_DE
    , LPUART1_RTS
    , LPUART1_RX
    , LPUART1_TX
    , OCTOSPI1_CLK
    , OCTOSPI1_DQS
    , OCTOSPI1_IO0
    , OCTOSPI1_IO1
    , OCTOSPI1_IO2
    , OCTOSPI1_IO3
    , OCTOSPI1_IO4
    , OCTOSPI1_IO5
    , OCTOSPI1_IO6
    , OCTOSPI1_IO7
    , OCTOSPI1_NCLK
    , OCTOSPI1_NCS
    , RCC_MCO
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
    , TSC_G1_IO1
    , TSC_G1_IO2
    , TSC_G1_IO3
    , TSC_G2_IO1
    , TSC_G2_IO2
    , TSC_G2_IO3
    , TSC_G2_IO4
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
    , UART4_CTS_NSS
    , UART4_DE
    , UART4_RTS
    , UART4_RX
    , UART4_TX
    , UART5_CTS_NSS
    , UART5_DE
    , UART5_RTS
    , UART5_RX
    , UART5_TX
    , UCPD1_FRSTX1
    , UCPD1_FRSTX2
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
    };

static constexpr gpio_conf_t gpio_conf = mcu_traits<target>::gpio_conf;

template<gpio_conf_t CFG, gpio_pin_t PIN, alternate_function_t ALT>
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
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, SAI1_EXTCLK> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, TIM2_ETR> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, TIM8_ETR> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, UART4_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA0, USART2_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, OCTOSPI1_DQS> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, TIM15_CH1N> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, UART4_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, USART2_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA1, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, CRS_SYNC> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, TIM17_BKIN> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, TIM1_BKIN2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA11, USB_DM> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, USART1_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA12, USB_DP> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA13, DEBUG_JTMS_SWDIO> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA13, IR_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA13, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA13, USB_NOE> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, DEBUG_JTCK_SWCLK> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, I2C4_SMBA> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA14, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, DEBUG_JTDI> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, SAI2_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, UART4_DE> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, UART4_RTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, USART2_RX> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, USART3_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA15, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, OCTOSPI1_NCS> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, SAI2_EXTCLK> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA2, USART2_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, OCTOSPI1_CLK> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA3, USART2_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, OCTOSPI1_NCS> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA4, USART2_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA5, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, OCTOSPI1_IO3> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, TIM1_BKIN> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, TIM8_BKIN> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA6, USART3_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, OCTOSPI1_IO2> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA7, TIM8_CH1N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, RCC_MCO> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, SAI1_CK2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA8, USART1_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, SPI2_SCK> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, TIM15_BKIN> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PA9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, OCTOSPI1_IO1> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, SAI1_EXTCLK> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB0, USART3_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, DFSDM1_DATIN0> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, OCTOSPI1_IO0> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, USART3_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB1, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, I2C4_SCL> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, LPTIM3_OUT> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, OCTOSPI1_CLK> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, TSC_SYNC> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, I2C4_SDA> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, OCTOSPI1_NCS> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, DFSDM1_DATIN1> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, OCTOSPI1_NCLK> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, SAI2_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, TIM15_BKIN> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, TIM1_BKIN> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, TSC_G1_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, DFSDM1_CKIN1> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, LPTIM3_IN1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, SAI2_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, TIM15_CH1N> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, TSC_G1_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB13, USART3_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, DFSDM1_DATIN2> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, LPTIM3_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, SAI2_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, TIM8_CH2N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, TSC_G1_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, USART3_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB14, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, DFSDM1_CKIN2> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, SAI2_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB15, TIM8_CH3N> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, DFSDM1_CKIN0> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, OCTOSPI1_DQS> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB2, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, CRS_SYNC> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, DEBUG_JTDO_SWO> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, SAI1_SCK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, USART1_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB3, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, DEBUG_JTRST> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, SAI1_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, TIM17_BKIN> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, TSC_G2_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, UART5_DE> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, UART5_RTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB4, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, OCTOSPI1_NCLK> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, TIM16_BKIN> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, TSC_G2_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, UART5_CTS_NSS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB5, USART1_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, I2C4_SCL> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, TIM16_CH1N> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, TIM8_BKIN2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, TSC_G2_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB6, USART1_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, FMC_NL> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, I2C4_SDA> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, TIM17_CH1N> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, TIM8_BKIN> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, TSC_G2_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, UART4_CTS_NSS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB7, USART1_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, DFSDM1_CKOUT> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, SDMMC1_CKIN> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, SDMMC1_D4> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB8, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, IR_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, SAI1_D2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, SDMMC1_CDIR> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, SDMMC1_D5> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PB9, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, OCTOSPI1_IO7> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, SAI2_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC0, SDMMC1_D5> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, OCTOSPI1_IO4> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC1, SPI2_MOSI> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, LPTIM3_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, SAI2_SCK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, SDMMC1_D2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, TSC_G3_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, UART4_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC10, USART3_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, LPTIM3_IN1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, OCTOSPI1_NCS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, SAI2_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, SDMMC1_D3> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, TSC_G3_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, UART4_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC11, USART3_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, SAI2_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, SDMMC1_CK> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, TSC_G3_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, UART5_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC12, USART3_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC2, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC2, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC2, OCTOSPI1_IO5> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, LPTIM3_OUT> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, OCTOSPI1_IO6> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC4, OCTOSPI1_IO7> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC4, USART3_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC5, SAI1_D3> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC5, USART3_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, DFSDM1_CKIN3> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, SAI2_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, SDMMC1_D0DIR> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, SDMMC1_D6> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, TIM8_CH1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC6, TSC_G4_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, DFSDM1_DATIN3> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, SAI2_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, SDMMC1_D123DIR> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, SDMMC1_D7> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, TIM8_CH2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC7, TSC_G4_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC8, SDMMC1_D0> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC8, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC8, TIM8_CH3> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC8, TSC_G4_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, SAI2_EXTCLK> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, SDMMC1_D1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, TIM8_BKIN2> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, TIM8_CH4> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, TSC_G4_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PC9, USB_NOE> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD0, FDCAN1_RX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD0, FMC_D2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD0, FMC_DA2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD0, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD1, FDCAN1_TX> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD1, FMC_D3> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD1, FMC_DA3> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD1, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, FMC_D15> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, FMC_DA15> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, SAI2_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, TSC_G6_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD10, USART3_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, FMC_A16> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, I2C4_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, SAI2_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, TSC_G6_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, USART3_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD11, USART3_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, FMC_A17> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, SAI2_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, TIM4_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, TSC_G6_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, USART3_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD12, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, FMC_A18> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, I2C4_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, TIM4_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD13, TSC_G6_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD14, FMC_D0> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD14, FMC_DA0> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD14, TIM4_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD15, FMC_D1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD15, FMC_DA1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD15, TIM4_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, SDMMC1_CMD> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, TIM3_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, TSC_SYNC> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, UART5_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, USART3_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD2, USART3_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, DFSDM1_DATIN0> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, FMC_CLK> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, SPI2_SCK> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, USART2_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD3, USART2_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, DFSDM1_CKIN0> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, FMC_NOE> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, OCTOSPI1_IO4> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, USART2_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD4, USART2_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD5, FMC_NWE> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD5, OCTOSPI1_IO5> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD5, USART2_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, DFSDM1_DATIN1> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, FMC_NWAIT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, OCTOSPI1_IO6> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, SPI3_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD6, USART2_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, DFSDM1_CKIN1> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, FMC_NCE> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, FMC_NE1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, OCTOSPI1_IO7> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD7, USART2_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD8, FMC_D13> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD8, FMC_DA13> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD8, USART3_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD9, FMC_D14> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD9, FMC_DA14> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD9, SAI2_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PD9, USART3_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE0, FMC_NBL0> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE0, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE0, TIM4_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE1, FMC_NBL1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE1, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, FMC_D7> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, FMC_DA7> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, OCTOSPI1_CLK> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, SAI1_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE10, TSC_G5_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, FMC_D8> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, FMC_DA8> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, OCTOSPI1_NCS> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE11, TSC_G5_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, FMC_D9> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, FMC_DA9> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, OCTOSPI1_IO0> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE12, TSC_G5_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, FMC_D10> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, FMC_DA10> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, OCTOSPI1_IO1> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE13, TSC_G5_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, FMC_D11> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, FMC_DA11> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, OCTOSPI1_IO2> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, TIM1_BKIN2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE14, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, FMC_D12> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, FMC_DA12> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, OCTOSPI1_IO3> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE15, TIM1_BKIN> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, DEBUG_TRACECLK> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, FMC_A23> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, TIM3_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE2, TSC_G7_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, DEBUG_TRACED0> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, FMC_A19> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, OCTOSPI1_DQS> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, TIM3_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE3, TSC_G7_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, DEBUG_TRACED1> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, DFSDM1_DATIN3> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, FMC_A20> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, SAI1_D2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, TIM3_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE4, TSC_G7_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, DEBUG_TRACED2> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, DFSDM1_CKIN3> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, FMC_A21> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, SAI1_CK2> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, TIM3_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE5, TSC_G7_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, DEBUG_TRACED3> { static const alt_fun_t AF = AF0; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, FMC_A22> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE6, TIM3_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, DFSDM1_DATIN2> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, FMC_D4> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, FMC_DA4> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE7, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, DFSDM1_CKIN2> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, FMC_D5> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, FMC_DA5> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, SAI1_SCK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE8, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, FMC_D6> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, FMC_DA6> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, OCTOSPI1_NCLK> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PE9, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF0, FMC_A0> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF0, I2C2_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF1, FMC_A1> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF1, I2C2_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF10, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF10, OCTOSPI1_CLK> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF10, SAI1_D3> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF10, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF11, OCTOSPI1_NCLK> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF12, FMC_A6> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF13, FMC_A7> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF13, I2C4_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF14, FMC_A8> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF14, I2C4_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF14, TSC_G8_IO1> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF15, FMC_A9> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF15, I2C4_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF15, TSC_G8_IO2> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF2, FMC_A2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF2, I2C2_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF3, FMC_A3> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF3, LPTIM3_IN1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF4, FMC_A4> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF4, LPTIM3_ETR> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF5, FMC_A5> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF5, LPTIM3_OUT> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF6, OCTOSPI1_IO3> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF6, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF6, TIM5_CH1> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF6, TIM5_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF7, OCTOSPI1_IO2> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF7, SAI1_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF7, TIM5_CH2> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF8, OCTOSPI1_IO0> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF8, SAI1_SCK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF8, TIM5_CH3> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF9, OCTOSPI1_IO1> { static const alt_fun_t AF = AF10; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF9, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF9, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PF9, TIM5_CH4> { static const alt_fun_t AF = AF2; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG0, FMC_A10> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG0, TSC_G8_IO3> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG1, FMC_A11> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG1, TSC_G8_IO4> { static const alt_fun_t AF = AF9; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, FMC_NE3> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, SAI2_FS_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, SPI3_MISO> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, TIM15_CH1> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, OCTOSPI1_IO5> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, SAI2_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, SPI3_MOSI> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, TIM15_CH2> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG11, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, FMC_NE4> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, SAI2_SD_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, SPI3_NSS> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, USART1_DE> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG13, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG13, FMC_A24> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG13, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG13, USART1_CK> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG14, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG14, FMC_A25> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG14, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG15, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG15, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG15, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG2, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG2, FMC_A12> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG2, SAI2_SCK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG2, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG3, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG3, FMC_A13> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG3, SAI2_FS_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG3, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG4, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG4, FMC_A14> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG4, SAI2_MCLK_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG4, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG5, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG5, FMC_A15> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG5, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG5, SAI2_SD_B> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG5, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, OCTOSPI1_DQS> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG6, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, DFSDM1_CKOUT> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, FMC_INT> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, UCPD1_FRSTX1> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG7, UCPD1_FRSTX2> { static const alt_fun_t AF = AF11; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG8, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG8, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG8, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, FMC_NCE> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, FMC_NE2> { static const alt_fun_t AF = AF12; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, SAI2_SCK_A> { static const alt_fun_t AF = AF13; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, SPI3_SCK> { static const alt_fun_t AF = AF6; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, TIM15_CH1N> { static const alt_fun_t AF = AF14; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PG9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PH0, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PH1, EVENTOUT> { static const alt_fun_t AF = AF15; };
template<gpio_conf_t CFG> struct alt_fun_traits<CFG, PH3, EVENTOUT> { static const alt_fun_t AF = AF15; };
