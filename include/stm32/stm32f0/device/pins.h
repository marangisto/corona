#pragma once

////
//
//      STM32F0 pins
//
///

enum port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PD = 0x3
    , PE = 0x4
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
    , PF9 = 0x59
    , PF10 = 0x5a
    , PF11 = 0x5b
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
    { CAN_RX
    , CAN_TX
    , CEC
    , COMP1_INM
    , COMP1_INP
    , COMP1_OUT
    , COMP2_INM
    , COMP2_INP
    , COMP2_OUT
    , CRS_SYNC
    , EVENTOUT
    , HDMI_CEC_CEC
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2S1_CK
    , I2S1_MCK
    , I2S1_SD
    , I2S1_WS
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SD
    , I2S2_WS
    , IR_OUT
    , RCC_MCO
    , RTC_REFIN
    , RTC_TAMP2
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_SCK
    , SYS_CAN
    , SYS_COMP
    , SYS_DAC
    , SYS_I2C
    , SYS_IR_Out
    , SYS_SPI
    , SYS_SWCLK
    , SYS_SWDIO
    , SYS_SYSTEM
    , SYS_TIM1
    , SYS_TIM14
    , SYS_TIM15
    , SYS_TIM16
    , SYS_TIM17
    , SYS_TIM2
    , SYS_TIM3
    , SYS_TOUCH
    , SYS_USART
    , SYS_WKUP1
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
    , USART4_CK
    , USART4_CTS
    , USART4_DE
    , USART4_RTS
    , USART4_RX
    , USART4_TX
    , USART5_CK
    , USART5_DE
    , USART5_RTS
    , USART5_RX
    , USART5_TX
    , USART6_CK
    , USART6_RTS
    , USART6_RX
    , USART6_TX
    , USART7_CK
    , USART7_RTS
    , USART7_RX
    , USART7_TX
    , USART8_CK
    , USART8_RTS
    , USART8_RX
    , USART8_TX
    , USB_NOE
    , USB_OE
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
struct signal_traits<CFG, PA0, COMP1_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, RTC_TAMP2>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SYS_WKUP1>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051)
        > AF = AF0;
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
struct signal_traits<CFG, PA0, TSC_G1_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART1_CTS>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART4_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TSC_G1_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART1_DE>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART1_RTS>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
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
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C1_SDA>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F042|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM1_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TSC_G4_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2C1_SCL>
{
    static constexpr altfun
        < CFG & STM32F042
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2C2_SCL>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TSC_G4_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, COMP2_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2C1_SDA>
{
    static constexpr altfun
        < CFG & STM32F042
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2C2_SDA>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TSC_G4_IO4>
{
    static constexpr altfun_t AF = AF3;
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
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_SWDIO>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USB_NOE>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USB_OE>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USART1_TX>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USART2_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, EVENTOUT>
{
    static constexpr altfun_t AF = AF3;
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
struct signal_traits<CFG, PA15, USART1_RX>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART2_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USB_NOE>
{
    static constexpr altfun
        < CFG & STM32F042
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM15_CH1>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TSC_G1_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART1_TX>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, COMP2_INP>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TSC_G1_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART1_RX>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, COMP1_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, COMP2_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S1_WS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM14_CH1>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TSC_G2_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART1_CK>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART6_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USB_NOE>
{
    static constexpr altfun
        < CFG & STM32F042
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, CEC>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F051|STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, COMP1_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, COMP2_INM>
{
    static constexpr altfun
        < CFG & STM32F051
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, HDMI_CEC_CEC>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, I2S1_CK>
{
    static constexpr altfun_t AF = AF0;
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
struct signal_traits<CFG, PA5, TSC_G2_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, USART6_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, EVENTOUT>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, I2S1_MCK>
{
    static constexpr altfun_t AF = AF0;
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
struct signal_traits<CFG, PA6, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TSC_G2_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP2_OUT>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, EVENTOUT>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PA7, TSC_G2_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, CRS_SYNC>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, EVENTOUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C1_SCL>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F042|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, RCC_MCO>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM15_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM1_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TSC_G4_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, EVENTOUT>
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
struct signal_traits<CFG, PB0, TSC_G3_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
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
struct signal_traits<CFG, PB1, TSC_G3_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, CEC>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, HDMI_CEC_CEC>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C1_SCL>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F042)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TSC_SYNC>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C1_SDA>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F042)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TSC_G6_IO1>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM15_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TSC_G6_IO2>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TSC_G6_IO3>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF0;
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
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TSC_G6_IO4>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF0;
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
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F031|STM32F051|STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, TSC_G3_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
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
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TSC_G5_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, EVENTOUT>
{
    static constexpr altfun_t AF = AF2;
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
struct signal_traits<CFG, PB4, TIM17_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TSC_G5_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S1_SD>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM16_BKIN>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_DE>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TSC_G5_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM17_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TSC_G5_IO4>
{
    static constexpr altfun_t AF = AF3;
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
        < CFG & (STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CEC>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, HDMI_CEC_CEC>
{
    static constexpr altfun
        < CFG & STM32F031
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TSC_SYNC>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, EVENTOUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM17_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, SYS_I2C>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, USART6_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, USART7_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SYS_SPI>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, USART6_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, USART7_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SYS_TIM15>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART4_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SYS_TIM16>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART4_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SYS_TIM17>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART4_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, CEC>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, SYS_IR_Out>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, SYS_COMP>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, SYS_DAC>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, SYS_CAN>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SYS_USART>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, USART8_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SYS_SYSTEM>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, USART8_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, SYS_TOUCH>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TSC_G3_IO1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SYS_TIM1>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, USART7_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SYS_TIM2>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, USART7_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SYS_TIM3>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = (CFG & STM32F051) ? AF1 : AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, USART8_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SYS_TIM14>
{
    static constexpr altfun
        < CFG & STM32F052
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, USART8_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TSC_G8_IO1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART8_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART8_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TSC_G8_IO2>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, USART8_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TSC_G8_IO3>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, USART8_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, CRS_SYNC>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TSC_G8_IO4>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, USART7_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, USART7_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun
        < CFG & (STM32F051|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM16_CH1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM17_CH1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM1_CH2>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, I2S1_WS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI1_NSS>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, I2S1_CK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI1_SCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIM1_CH3>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, I2S1_MCK>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI1_MISO>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_CH4>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, I2S1_SD>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIM3_ETR>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TSC_G7_IO1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TSC_G7_IO2>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TSC_G7_IO3>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM3_CH3>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TSC_G7_IO4>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_DE>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM1_CH1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, CRS_SYNC>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, I2C1_SDA>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, I2C1_SCL>
{
    static constexpr altfun
        < CFG & (STM32F042|STM32F091)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, USART6_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, USART7_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, USART7_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, USART7_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, USART6_CK>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, USART6_RTS>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, USART7_RX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM15_CH1>
{
    static constexpr altfun
        < CFG & (STM32F052|STM32F091)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, USART6_TX>
{
    static constexpr altfun
        < CFG & STM32F091
        > AF = AF1;
};

template<periph_t PERIPH, pin_t PIN, int POLARITY>
struct adc_dac_chan{};

template<>
struct adc_dac_chan<ADC1, PA0, 1>
{
    static constexpr uint8_t CHAN = 0;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA1, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA2, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA3, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA5, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA6, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA7, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB0, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB1, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC0, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC1, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC2, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC3, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC4, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC5, 1>
{
    static constexpr uint8_t CHAN = 15;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<DAC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<DAC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<DAC1, PA5, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

