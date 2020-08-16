#pragma once

////
//
//      STM32F1 pins
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
    , NO_PIN
    };

enum altfun_t
    { REMAP = 0x0
    , REMAP_CAN1_2 = 0x1
    , REMAP_CAN1_3 = 0x2
    , REMAP_CAN2_ENABLE = 0x3
    , REMAP_CEC_ENABLE = 0x4
    , REMAP_ETH_ENABLE = 0x5
    , REMAP_I2C1_ENABLE = 0x6
    , REMAP_SPI1_ENABLE = 0x7
    , REMAP_SPI3_ENABLE = 0x8
    , REMAP_TIM10_ENABLE = 0x9
    , REMAP_TIM11_ENABLE = 0xa
    , REMAP_TIM12_ENABLE = 0xb
    , REMAP_TIM13_ENABLE = 0xc
    , REMAP_TIM14_ENABLE = 0xd
    , REMAP_TIM15_ENABLE = 0xe
    , REMAP_TIM16_ENABLE = 0xf
    , REMAP_TIM17_ENABLE = 0x10
    , REMAP_TIM1_ENABLE = 0x11
    , REMAP_TIM1_PARTIAL = 0x12
    , REMAP_TIM2_ENABLE = 0x13
    , REMAP_TIM2_PARTIAL_1 = 0x14
    , REMAP_TIM2_PARTIAL_2 = 0x15
    , REMAP_TIM3_ENABLE = 0x16
    , REMAP_TIM3_PARTIAL = 0x17
    , REMAP_TIM4_ENABLE = 0x18
    , REMAP_TIM9_ENABLE = 0x19
    , REMAP_USART1_ENABLE = 0x1a
    , REMAP_USART2_ENABLE = 0x1b
    , REMAP_USART3_ENABLE = 0x1c
    , REMAP_USART3_PARTIAL = 0x1d
    };

enum signal_t
    { CAN1_RX
    , CAN1_TX
    , CAN2_RX
    , CAN2_TX
    , CAN_RX
    , CAN_TX
    , CEC
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
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = REMAP_TIM2_PARTIAL_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun_t AF = REMAP_TIM2_PARTIAL_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = REMAP_TIM2_PARTIAL_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_RTS>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM1_CH3>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, CAN1_RX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CAN1_TX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = REMAP_SPI1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_CH1>
{
    static constexpr altfun_t AF = (CFG & (STM32F100x8|STM32F100xC|STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)) ? REMAP_TIM2_PARTIAL_1 : REMAP_TIM2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = (CFG & (STM32F100x8|STM32F100xC|STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)) ? REMAP_TIM2_PARTIAL_1 : REMAP_TIM2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM15_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = REMAP_TIM2_PARTIAL_1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM9_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = REMAP_TIM2_PARTIAL_1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM9_CH2>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM16_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP_TIM16_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM1_BKIN>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, ETH_CRS_DV>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, ETH_RX_DV>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM17_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP_TIM17_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM1_CH1N>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM1_CH2>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, ETH_RXD2>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP_TIM13_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM1_CH2N>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun_t AF = REMAP_TIM3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, ETH_RXD3>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP_TIM14_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM1_CH3N>
{
    static constexpr altfun_t AF = REMAP_TIM1_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun_t AF = REMAP_TIM3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, CEC>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP_CEC_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun_t AF = (CFG & (STM32F100x8|STM32F100xC|STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)) ? REMAP_TIM2_PARTIAL_2 : REMAP_TIM2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun_t AF = (CFG & (STM32F100x8|STM32F100xC|STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)) ? REMAP_TIM2_PARTIAL_2 : REMAP_TIM2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, CAN2_RX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM12_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100xC|STM32F103x4)
        > AF = REMAP_TIM12_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, CAN2_TX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM12_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100xC|STM32F103x4)
        > AF = REMAP_TIM12_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM1_CH1N>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun_t AF = REMAP_USART3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM15_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x4)
        > AF = REMAP_TIM15_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_RTS>
{
    static constexpr altfun_t AF = REMAP_USART3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x4)
        > AF = REMAP_TIM15_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = REMAP_SPI1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = (CFG & (STM32F100x8|STM32F100xC|STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)) ? REMAP_TIM2_PARTIAL_1 : REMAP_TIM2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = REMAP_SPI1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun_t AF = REMAP_TIM3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, CAN2_RX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = REMAP_SPI1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = REMAP_TIM3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, CAN2_TX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM4_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = REMAP_USART1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM4_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = REMAP_USART1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CAN1_RX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN1_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP_CAN1_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = REMAP_I2C1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM10_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM4_CH3>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CAN1_TX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN1_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP_CAN1_2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = REMAP_I2C1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM11_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM17_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM4_CH4>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_SPI3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_PARTIAL;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, ETH_RXD0>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIM12_CH1>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, ETH_RXD1>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TIM12_CH2>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun_t AF = REMAP_TIM3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun_t AF = REMAP_TIM3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun_t AF = REMAP_TIM3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F100xC
        > AF = REMAP;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun_t AF = REMAP_TIM3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CAN1_RX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN1_3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP_CAN1_3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CAN1_TX>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_CAN1_3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F103x4|STM32F103x8|STM32F103xC|STM32F103xF)
        > AF = REMAP_CAN1_3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, ETH_RXD1>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, ETH_RXD2>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, ETH_RXD3>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIM4_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM4_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIM4_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM4_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM4_CH3>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM4_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM4_CH4>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM4_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun_t AF = REMAP_USART2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun_t AF = REMAP_USART2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun_t AF = REMAP_USART2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun_t AF = REMAP_USART2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun_t AF = REMAP_USART2_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, ETH_CRS_DV>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, ETH_RX_DV>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, ETH_RXD0>
{
    static constexpr altfun
        < CFG & STM32F107_
        > AF = REMAP_ETH_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_USART3_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM1_CH2>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIM1_CH3>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_CH4>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM9_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM9_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM9_CH2>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM9_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM1_CH1>
{
    static constexpr altfun
        < CFG & (STM32F100x8|STM32F100xC|STM32F103x8|STM32F103xC|STM32F103xF|STM32F107_)
        > AF = REMAP_TIM1_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM10_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM10_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TIM11_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM11_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM13_ENABLE;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F103xF
        > AF = REMAP_TIM14_ENABLE;
};

