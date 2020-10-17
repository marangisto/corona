#pragma once

////
//
//      STM32F3 pins
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
    , AF9 = 0x9
    , AF10 = 0xa
    , AF11 = 0xb
    , AF12 = 0xc
    , AF13 = 0xd
    , AF14 = 0xe
    , AF15 = 0xf
    };

enum signal_t
    { CAN_RX
    , CAN_TX
    , CEC
    , COMP1_OUT
    , COMP2_OUT
    , COMP3_OUT
    , COMP4_OUT
    , COMP5_OUT
    , COMP6_OUT
    , COMP7_OUT
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
    , FMC_CD
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
    , FMC_INT2
    , FMC_INT3
    , FMC_INTR
    , FMC_NBL0
    , FMC_NBL1
    , FMC_NCE2
    , FMC_NCE3
    , FMC_NCE4_1
    , FMC_NCE4_2
    , FMC_NE1
    , FMC_NE2
    , FMC_NE3
    , FMC_NE4
    , FMC_NIORD
    , FMC_NIOWR
    , FMC_NL
    , FMC_NOE
    , FMC_NREG
    , FMC_NWAIT
    , FMC_NWE
    , HRTIM1_CHA1
    , HRTIM1_CHA2
    , HRTIM1_CHB1
    , HRTIM1_CHB2
    , HRTIM1_CHC1
    , HRTIM1_CHC2
    , HRTIM1_CHD1
    , HRTIM1_CHD2
    , HRTIM1_CHE1
    , HRTIM1_CHE2
    , HRTIM1_EEV1
    , HRTIM1_EEV10
    , HRTIM1_EEV2
    , HRTIM1_EEV3
    , HRTIM1_EEV4
    , HRTIM1_EEV5
    , HRTIM1_EEV6
    , HRTIM1_EEV7
    , HRTIM1_EEV8
    , HRTIM1_EEV9
    , HRTIM1_FLT1
    , HRTIM1_FLT2
    , HRTIM1_FLT3
    , HRTIM1_FLT4
    , HRTIM1_FLT5
    , HRTIM1_SCIN
    , HRTIM1_SCOUT
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
    , I2S1_CK
    , I2S1_MCK
    , I2S1_SD
    , I2S1_WS
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SD
    , I2S2_WS
    , I2S2_ext_SD
    , I2S3_CK
    , I2S3_MCK
    , I2S3_SD
    , I2S3_WS
    , I2S3_ext_SD
    , I2S_CKIN
    , IR_OUT
    , OPAMP2_DIG
    , RCC_MCO
    , RTC_REFIN
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
    , SYS_JTCK_SWCLK
    , SYS_JTDI
    , SYS_JTDO_TRACESWO
    , SYS_JTMS_SWDIO
    , SYS_NJTRST
    , SYS_TRACECK
    , SYS_TRACED0
    , SYS_TRACED1
    , SYS_TRACED2
    , SYS_TRACED3
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
    , TIM19_CH1
    , TIM19_CH2
    , TIM19_CH3
    , TIM19_CH4
    , TIM19_ETR
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
    , TIM20_BKIN
    , TIM20_BKIN2
    , TIM20_CH1
    , TIM20_CH1N
    , TIM20_CH2
    , TIM20_CH2N
    , TIM20_CH3
    , TIM20_CH3N
    , TIM20_CH4
    , TIM20_ETR
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
    , UART4_RX
    , UART4_TX
    , UART5_RX
    , UART5_TX
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
    , USB_DM
    , USB_DP
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
struct signal_traits<CFG, PA0, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM19_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM5_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM5_ETR>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM8_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM8_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TSC_G1_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2S3_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, RTC_REFIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, SPI3_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM15_CH1N>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM19_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM5_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TSC_G1_IO2>
{
    static constexpr altfun_t AF = AF3;
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
struct signal_traits<CFG, PA10, COMP6_OUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, HRTIM1_CHB1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2S2_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2S2_ext_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM1_CH3>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM2_CH4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM8_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TSC_G4_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, CAN_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, HRTIM1_CHB2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, I2S2_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI2_NSS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_CH4>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM4_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM5_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USB_DM>
{
    static constexpr altfun
        < CFG & (STM32F303_|STM32F373_)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CAN_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, COMP2_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, HRTIM1_FLT1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, I2S_CKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM16_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM4_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIM5_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
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
struct signal_traits<CFG, PA12, USB_DP>
{
    static constexpr altfun
        < CFG & (STM32F303_|STM32F373_)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, I2S1_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TIM4_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TIM5_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TSC_G4_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TIM12_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TIM8_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TSC_G4_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USART2_TX>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, HRTIM1_FLT2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SYS_JTDI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM12_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF9;
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
struct signal_traits<CFG, PA15, TIM8_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TSC_SYNC>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART2_RX>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, I2S3_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, SPI3_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM15_CH1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM19_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM5_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TSC_G1_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, I2S3_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM15_CH2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM19_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM5_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TSC_G1_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM12_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TSC_G2_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, CEC>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM12_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
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
struct signal_traits<CFG, PA5, TSC_G2_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, I2S1_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, OPAMP2_DIG>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM16_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM8_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TSC_G2_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP2_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303_|STM32F373_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM17_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM8_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TSC_G2_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, COMP3_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, HRTIM1_CHA1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2C2_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2C3_SCL>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM1_CH1>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM4_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM5_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM5_ETR>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, COMP5_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, HRTIM1_CHA2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C3_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2S2_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2S3_MCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SPI2_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM15_BKIN>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM1_CH2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM2_CH3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TSC_G4_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM8_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TSC_G3_IO2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TSC_G3_IO3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, COMP4_OUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, HRTIM1_SCOUT>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM8_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TSC_G3_IO3>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TSC_G3_IO4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, CEC>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, HRTIM1_FLT3>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TSC_SYNC>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, HRTIM1_FLT4>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TSC_G6_IO1>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, HRTIM1_CHC1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C2_SMBA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TSC_G6_IO2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, HRTIM1_CHC2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TSC_G6_IO3>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, HRTIM1_CHD1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2S2_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2S2_ext_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM12_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM15_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TSC_G6_IO1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TSC_G6_IO4>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
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
struct signal_traits<CFG, PB15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, HRTIM1_CHD2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM12_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH1N>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TSC_G6_IO2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, HRTIM1_SCIN>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, TSC_G3_IO4>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, HRTIM1_EEV9>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, HRTIM1_SCOUT>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SYS_JTDO_TRACESWO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM3_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM4_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM8_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TSC_G5_IO1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, HRTIM1_EEV7>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2S1_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2S3_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2S3_ext_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SYS_NJTRST>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM15_CH1N>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM16_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM8_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TSC_G5_IO2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, HRTIM1_EEV6>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C3_SDA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM16_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM17_CH1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM19_ETR>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM8_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, HRTIM1_EEV4>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, HRTIM1_SCIN>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM15_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM19_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM3_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM4_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM8_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM8_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM8_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TSC_G5_IO3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, FMC_NL>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, HRTIM1_EEV3>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM15_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM17_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM19_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM4_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM8_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TSC_G5_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CAN_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, CEC>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, HRTIM1_EEV8>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM19_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM4_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM8_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TSC_SYNC>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, USART3_TX>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, CAN_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, COMP2_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, HRTIM1_EEV5>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2S2_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM17_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM19_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM4_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, TIM8_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, USART3_RX>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TIM1_CH1>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TIM5_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TIM5_ETR>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TIM1_CH2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TIM5_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TIM19_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TIM8_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, UART4_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, HRTIM1_EEV2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, I2S3_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, I2S3_ext_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, TIM19_CH2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, TIM8_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UART4_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, HRTIM1_EEV1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TIM19_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TIM8_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, UART5_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, COMP7_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, I2S2_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TIM1_CH3>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TIM5_CH3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, I2S2_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TIM1_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TIM1_CH4>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TIM5_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIM13_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TSC_G3_IO1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TIM15_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F333)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TSC_G3_IO1>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TSC_G3_IO2>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, COMP6_OUT>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, HRTIM1_EEV10>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, I2S1_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM8_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, COMP5_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, HRTIM1_FLT5>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, I2S1_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, I2S3_MCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM8_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, COMP3_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, HRTIM1_CHE1>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, I2S1_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM8_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, HRTIM1_CHE2>
{
    static constexpr altfun
        < CFG & STM32F333
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2C3_SDA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2S_CKIN>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM8_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM8_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CAN_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FMC_D2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIM19_CH4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CAN_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FMC_D3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, TIM19_ETR>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, TIM8_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, TIM8_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FMC_D15>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, FMC_A16>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, FMC_A17>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIM4_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TSC_G8_IO1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, FMC_A18>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIM4_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TSC_G8_IO2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FMC_D0>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM4_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TSC_G8_IO3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FMC_D1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM4_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TSC_G8_IO4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, EVENTOUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F333|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM8_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, UART5_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, FMC_CLK>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, I2S2_MCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, TIM2_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, TIM2_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, FMC_NOE>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, I2S2_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, TIM2_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, FMC_NWE>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, FMC_NWAIT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, I2S2_WS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SPI2_NSS>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, TIM2_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FMC_NCE2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FMC_NE1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, TIM2_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FMC_D13>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, TSC_G6_IO3>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FMC_D14>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, TSC_G6_IO4>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, FMC_NBL0>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM16_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM20_ETR>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM4_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, USART1_TX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, FMC_NBL1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM17_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM20_CH4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, USART1_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FMC_D7>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM1_CH2N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FMC_D8>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, SPI4_NSS>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM1_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FMC_D9>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI4_SCK>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FMC_D10>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI4_MISO>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIM1_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FMC_D11>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI4_MOSI>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_BKIN2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FMC_D12>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_BKIN>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, USART3_RX>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, FMC_A23>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SPI4_SCK>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SYS_TRACECK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIM20_CH1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIM3_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TSC_G7_IO1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, FMC_A19>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SPI4_NSS>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SYS_TRACED0>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM20_CH2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM3_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TSC_G7_IO2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, FMC_A20>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SPI4_NSS>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SYS_TRACED1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM20_CH1N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM3_CH3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TSC_G7_IO3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, FMC_A21>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SPI4_MISO>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SYS_TRACED2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM20_CH2N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM3_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TSC_G7_IO4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, FMC_A22>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SPI4_MOSI>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SYS_TRACED3>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM20_CH3N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FMC_D4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FMC_D5>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIM1_CH1N>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FMC_D6>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM1_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, TIM1_CH3N>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F333)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F302_|STM32F303E)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, FMC_INTR>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, TIM15_CH2>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, TIM20_BKIN2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, TIM20_ETR>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, FMC_A6>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, TIM20_CH1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, FMC_A7>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, TIM20_CH2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, FMC_A8>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, TIM20_CH3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, FMC_A9>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, TIM20_CH4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, FMC_A2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, I2C2_SMBA>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, TIM20_CH3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, FMC_A3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, TIM20_CH4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, COMP1_OUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, FMC_A4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, TIM20_CH1N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, FMC_A5>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, TIM20_CH2N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, FMC_NIORD>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, I2S1_SD>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM4_CH4>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, USART3_DE>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, USART3_RTS>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, FMC_NREG>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, I2C2_SDA>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TIM20_BKIN>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, USART2_CK>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, FMC_NIOWR>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TIM20_BKIN2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_|STM32F373_)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, FMC_CD>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM14_CH1>
{
    static constexpr altfun
        < CFG & STM32F373_
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM15_CH1>
{
    static constexpr altfun
        < CFG & (STM32F303E|STM32F303_)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM20_BKIN>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, FMC_A10>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, TIM20_CH1N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, FMC_A11>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, TIM20_CH2N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, FMC_NCE4_1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, FMC_NE3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, FMC_NCE4_2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, FMC_NE4>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, FMC_A24>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, FMC_A25>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, FMC_A12>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, TIM20_CH3N>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, FMC_A13>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, TIM20_BKIN>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, FMC_A14>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, TIM20_BKIN2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, FMC_A15>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, TIM20_ETR>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, FMC_INT2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, FMC_INT3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NCE3>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NE2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, FMC_A0>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, TIM20_CH1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, FMC_A1>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, TIM20_CH2>
{
    static constexpr altfun
        < CFG & STM32F303E
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32F303E
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
struct adc_dac_chan<ADC1, PA0, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA1, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA1, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA2, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA2, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA3, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA3, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 5;
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
    static constexpr uint8_t CHAN = 10;
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
    static constexpr uint8_t CHAN = 15;
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
    static constexpr uint8_t CHAN = 11;
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
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB1, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB11, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB13, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC0, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC0, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC1, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC1, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC2, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC2, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC3, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC3, 1>
{
    static constexpr uint8_t CHAN = 9;
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
struct adc_dac_chan<ADC1, PF2, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PF4, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PA4, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PA5, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PA6, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PA7, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PB2, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PB11, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PB12, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PB14, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PB15, 1>
{
    static constexpr uint8_t CHAN = 15;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC0, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC1, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC2, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC3, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC4, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PC5, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC2, PF2, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PB0, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PB1, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PB13, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PD10, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PD11, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PD12, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PD13, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PD14, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE7, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE8, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE9, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE10, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE11, 1>
{
    static constexpr uint8_t CHAN = 15;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE12, 1>
{
    static constexpr uint8_t CHAN = 16;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC3, PE13, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PB12, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PB14, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PB15, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD8, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD9, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD10, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD11, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD12, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD13, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD14, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PE8, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PE14, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PE15, 1>
{
    static constexpr uint8_t CHAN = 2;
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

template<>
struct adc_dac_chan<DAC1, PA5, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<DAC2, PA6, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

