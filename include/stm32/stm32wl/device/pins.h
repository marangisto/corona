#pragma once

////
//
//      STM32WL pins
//
///

enum port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PH = 0x7
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
    , PC13 = 0x2d
    , PC14 = 0x2e
    , PC15 = 0x2f
    , PH3 = 0x73
    , NO_PIN
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
    , AF12 = 0xc
    , AF13 = 0xd
    , AF14 = 0xe
    , AF15 = 0xf
    };

enum signal_t
    { CM4_EVENTOUT
    , COMP1_OUT
    , COMP2_OUT
    , DEBUG_JTCK_SWCLK
    , DEBUG_JTDI
    , DEBUG_JTDO_SWO
    , DEBUG_JTMS_SWDIO
    , DEBUG_PWR_LDORDY
    , DEBUG_PWR_REGLP1S
    , DEBUG_PWR_REGLP2S
    , DEBUG_RF_BUSY
    , DEBUG_RF_DTB1
    , DEBUG_RF_HSE32RDY
    , DEBUG_RF_LDORDY
    , DEBUG_RF_NRESET
    , DEBUG_RF_SMPSRDY
    , DEBUG_SUBGHZSPI_MISOOUT
    , DEBUG_SUBGHZSPI_MOSIOUT
    , DEBUG_SUBGHZSPI_NSSOUT
    , DEBUG_SUBGHZSPI_SCKOUT
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SD
    , I2S2_WS
    , I2S_CKIN
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
    , RCC_LSCO
    , RCC_MCO
    , RF_IRQ0
    , RF_IRQ1
    , RF_IRQ2
    , RTC_REFIN
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_SCK
    , SYS_JTRST
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
    };

static constexpr gpio_conf_t gpio_conf = mcu_traits<target>::gpio_conf;

template<gpio_conf_t CFG, pin_t PIN, signal_t SIG>
struct signal_traits
{
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
struct signal_traits<CFG, PA0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, COMP1_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, DEBUG_PWR_REGLP1S>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, I2S_CKIN>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_NSS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, DEBUG_PWR_REGLP2S>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LPTIM3_OUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
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
struct signal_traits<CFG, PA10, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, DEBUG_RF_HSE32RDY>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, RTC_REFIN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF14;
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
struct signal_traits<CFG, PA11, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, DEBUG_RF_NRESET>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, LPTIM3_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_BKIN2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_NSS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, DEBUG_RF_BUSY>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, LPTIM3_IN1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
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
struct signal_traits<CFG, PA13, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, DEBUG_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, DEBUG_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, DEBUG_JTDI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, DEBUG_PWR_LDORDY>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, RCC_LSCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, I2S2_MCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, DEBUG_SUBGHZSPI_NSSOUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, DEBUG_SUBGHZSPI_SCKOUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI2_MISO>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, DEBUG_SUBGHZSPI_MISOOUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM16_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, DEBUG_SUBGHZSPI_MOSIOUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM17_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2S2_WS>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SPI2_NSS>
{
    static constexpr altfun_t AF = AF3;
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
struct signal_traits<CFG, PB0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, COMP1_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, COMP1_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
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
struct signal_traits<CFG, PB11, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
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
struct signal_traits<CFG, PB14, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2S2_MCK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, DEBUG_RF_SMPSRDY>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, DEBUG_JTDO_SWO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, DEBUG_RF_DTB1>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, RF_IRQ0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, DEBUG_RF_LDORDY>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SYS_JTRST>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_NSS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, RF_IRQ1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM16_BKIN>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM17_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, RF_IRQ2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2S2_WS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM17_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, I2S2_SD>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, I2S2_SD>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, I2S2_MCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<periph_t PERIPH, pin_t PIN, int POLARITY>
struct adc_dac_chan{};

template<>
struct adc_dac_chan<ADC1, PA10, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA11, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA12, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA13, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA14, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA15, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB1, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB2, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB3, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB4, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB13, 1>
{
    static constexpr uint8_t CHAN = 0;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB14, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<DAC1, PA10, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

