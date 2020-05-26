#pragma once

////
//
//      STM32F1 pins
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
    };

enum alt_fun_t
    { AF0
    };

enum alternate_function_t
    { CAN1_RX
    , CAN1_TX
    , CAN2_RX
    , CAN2_TX
    , CAN_RX
    , CAN_TX
    , ETH_CRS_DV
    , ETH_RXD0
    , ETH_RXD1
    , ETH_RXD2
    , ETH_RXD3
    , ETH_RX_DV
    , I2C1_SCL
    , I2C1_SDA
    , I2S3_CK
    , I2S3_SD
    , I2S3_WS
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI3_MISO
    , SPI3_MOSI
    , SPI3_NSS
    , SPI3_SCK
    , TIM10_CH1
    , TIM11_CH1
    , TIM12_CH1
    , TIM12_CH2
    , TIM13_CH1
    , TIM14_CH1
    , TIM15_CH1
    , TIM15_CH2
    , TIM16_CH1
    , TIM17_CH1
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
    , TIM4_CH1
    , TIM4_CH2
    , TIM4_CH3
    , TIM4_CH4
    , TIM9_CH1
    , TIM9_CH2
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
template<> struct alt_fun_traits<PA0, TIM2_CH1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA0, TIM2_ETR> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA0, USART2_CTS> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA1, TIM2_CH2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA1, USART2_RTS> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA10, TIM1_CH3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA10, USART1_RX> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA11, CAN1_RX> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PA11, CAN_RX> { static const alt_fun<gpio_conf & (STM32F103xF|STM32F103xC|STM32F103x8|STM32F103x4)> AF = AF0; };
template<> struct alt_fun_traits<PA11, TIM1_CH4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA12, CAN1_TX> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PA12, CAN_TX> { static const alt_fun<gpio_conf & (STM32F103xF|STM32F103xC|STM32F103x8|STM32F103x4)> AF = AF0; };
template<> struct alt_fun_traits<PA12, TIM1_ETR> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, I2S3_WS> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PA15, SPI3_NSS> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PA2, TIM15_CH1> { static const alt_fun<gpio_conf & (STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PA2, TIM2_CH3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA2, TIM9_CH1> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PA2, USART2_TX> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA3, TIM15_CH2> { static const alt_fun<gpio_conf & (STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PA3, TIM2_CH4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA3, TIM9_CH2> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PA3, USART2_RX> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA4, SPI1_NSS> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA4, USART2_CK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA5, SPI1_SCK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA6, SPI1_MISO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA6, TIM13_CH1> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PA6, TIM3_CH1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA7, ETH_CRS_DV> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PA7, ETH_RX_DV> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PA7, SPI1_MOSI> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA7, TIM14_CH1> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PA7, TIM3_CH2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA8, TIM1_CH1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA9, TIM1_CH2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA9, USART1_TX> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB0, ETH_RXD2> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PB0, TIM3_CH3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB1, ETH_RXD3> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PB1, TIM3_CH4> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB10, USART3_TX> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB11, USART3_RX> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB12, CAN2_RX> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB12, USART3_CK> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB13, CAN2_TX> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PB13, TIM1_CH1N> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB13, USART3_CTS> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB14, TIM1_CH2N> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB14, USART3_RTS> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB15, TIM1_CH3N> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, I2S3_CK> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PB3, SPI3_SCK> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PB4, SPI3_MISO> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PB5, I2S3_SD> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PB5, SPI3_MOSI> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC)> AF = AF0; };
template<> struct alt_fun_traits<PB6, I2C1_SCL> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB6, TIM4_CH1> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB7, I2C1_SDA> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB7, TIM4_CH2> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB8, TIM10_CH1> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PB8, TIM16_CH1> { static const alt_fun<gpio_conf & (STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB8, TIM4_CH3> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB9, TIM11_CH1> { static const alt_fun<gpio_conf & STM32F103xF> AF = AF0; };
template<> struct alt_fun_traits<PB9, TIM17_CH1> { static const alt_fun<gpio_conf & (STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PB9, TIM4_CH4> { static const alt_fun<gpio_conf & (STM32F107_|STM32F103xF|STM32F103xC|STM32F103x8|STM32F100xC|STM32F100x8)> AF = AF0; };
template<> struct alt_fun_traits<PC4, ETH_RXD0> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PC4, TIM12_CH1> { static const alt_fun<gpio_conf & STM32F100xC> AF = AF0; };
template<> struct alt_fun_traits<PC5, ETH_RXD1> { static const alt_fun<gpio_conf & STM32F107_> AF = AF0; };
template<> struct alt_fun_traits<PC5, TIM12_CH2> { static const alt_fun<gpio_conf & STM32F100xC> AF = AF0; };
template<> struct alt_fun_traits<PC8, TIM13_CH1> { static const alt_fun<gpio_conf & STM32F100xC> AF = AF0; };
template<> struct alt_fun_traits<PC9, TIM14_CH1> { static const alt_fun<gpio_conf & STM32F100xC> AF = AF0; };
