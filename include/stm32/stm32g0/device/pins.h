#pragma once

////
//
//      STM32G0 pins
//
///

enum port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PD = 0x3
    , PF = 0x5
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
    , PD8 = 0x38
    , PD9 = 0x39
    , PF0 = 0x50
    , PF1 = 0x51
    , PF2 = 0x52
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
    };

enum signal_t
    { CEC
    , COMP1_OUT
    , COMP2_OUT
    , EVENTOUT
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2S1_CK
    , I2S1_MCK
    , I2S1_SD
    , I2S1_WS
    , I2S_CKIN
    , IR_OUT
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
    , RCC_MCO
    , RCC_OSC32_EN
    , RCC_OSC_EN
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_SCK
    , SYS_SWCLK
    , SYS_SWDIO
    , TIM14_CH1
    , TIM15_BK
    , TIM15_CH1
    , TIM15_CH1N
    , TIM15_CH2
    , TIM16_BK
    , TIM16_CH1
    , TIM16_CH1N
    , TIM17_BK
    , TIM17_CH1
    , TIM17_CH1N
    , TIM1_BK
    , TIM1_BK2
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
    , UCPD1_FRSTX
    , UCPD1_TXDATA
    , UCPD1_TXGND
    , UCPD2_FRSTX
    , UCPD2_TXDATA
    , UCPD2_TXGND
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
    , USART4_CK
    , USART4_CTS
    , USART4_DE
    , USART4_NSS
    , USART4_RTS
    , USART4_RX
    , USART4_TX
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
struct signal_traits<CFG, PA0, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SPI2_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_NSS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2S1_CK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, SPI1_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_CK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_DE>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_RTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C1_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM17_BK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM1_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, UCPD2_TXGND>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2C2_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2S1_MCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_BK2>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_NSS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2C2_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2S1_SD>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2S_CKIN>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_CK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_DE>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_RTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USART2_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S1_WS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART2_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART3_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART3_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART3_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, I2S1_SD>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LPUART1_TX>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM15_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LPUART1_RX>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, SPI2_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM15_CH2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S1_WS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM14_CH1>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, CEC>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, I2S1_CK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, I2S1_MCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM16_CH1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM1_BK>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, USART3_CTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, USART3_NSS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, I2S1_SD>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM14_CH1>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM17_CH1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, SPI2_NSS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C1_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SPI2_MISO>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM15_BK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM1_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, UCPD1_TXGND>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, I2S1_WS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_DE>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM14_CH1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, CEC>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_DE>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM15_BK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BK>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2C2_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_NSS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2C2_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM15_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S1_CK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_CK>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_DE>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_RTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2S1_MCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM17_BK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_CTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_NSS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S1_SD>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM16_BK>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, SPI2_MISO>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM1_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM17_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART4_CTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART4_NSS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CEC>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SPI2_SCK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM15_BK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, EVENTOUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM17_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPTIM2_IN1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPUART1_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TIM15_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, UCPD1_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TIM1_CH3>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, TIM1_CH4>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, TIM1_BK>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, TIM1_BK2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, RCC_OSC32_EN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, RCC_OSC_EN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, TIM15_BK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LPTIM1_IN2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TIM15_CH2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LPTIM1_ETR>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LPTIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIM2_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, USART1_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TIM2_CH2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, UCPD2_TXGND>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, USART1_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, UCPD1_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM1_CH1>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, UCPD2_FRSTX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2S_CKIN>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM1_CH2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIM16_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, TIM17_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, I2S1_MCK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, TIM1_BK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, LPTIM2_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, UCPD1_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, TIM1_BK2>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, UCPD2_TXDATA>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, TIM14_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, RCC_OSC_EN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, RCC_MCO>
{
    static constexpr altfun
        < CFG & STM32G07x
        > AF = AF0;
};

