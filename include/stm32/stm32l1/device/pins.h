#pragma once

////
//
//      STM32L1 pins
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
    , AF10 = 0xa
    , AF11 = 0xb
    , AF12 = 0xc
    , AF14 = 0xe
    };

enum signal_t
    { COMP1_INP
    , COMP2_INM
    , COMP2_INP
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
    , FSMC_NBL0
    , FSMC_NBL1
    , FSMC_NE1
    , FSMC_NE2
    , FSMC_NE3
    , FSMC_NE4
    , FSMC_NL
    , FSMC_NOE
    , FSMC_NWAIT
    , FSMC_NWE
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2S2_CK
    , I2S2_MCK
    , I2S2_SD
    , I2S2_WS
    , I2S3_CK
    , I2S3_MCK
    , I2S3_SD
    , I2S3_WS
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
    , RCC_MCO
    , RCC_OSC32_IN
    , RCC_OSC32_OUT
    , RCC_OSC_IN
    , RCC_OSC_OUT
    , RTC_OUT_ALARM
    , RTC_OUT_CALIB
    , RTC_REFIN
    , RTC_TAMP1
    , RTC_TAMP2
    , RTC_TAMP3
    , RTC_TS
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
    , SYS_JTDO_TRACESWO
    , SYS_JTMS_SWDIO
    , SYS_JTRST
    , SYS_PVD_IN
    , SYS_TRACECK
    , SYS_TRACED0
    , SYS_TRACED1
    , SYS_TRACED2
    , SYS_TRACED3
    , SYS_V_REF_OUT
    , SYS_WKUP1
    , SYS_WKUP2
    , SYS_WKUP3
    , TIM10_CH1
    , TIM11_CH1
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
    , TIM9_CH1
    , TIM9_CH2
    , TIMX_IC1
    , TIMX_IC2
    , TIMX_IC3
    , TIMX_IC4
    , TS_G10_IO1
    , TS_G10_IO2
    , TS_G10_IO3
    , TS_G10_IO4
    , TS_G11_IO1
    , TS_G11_IO2
    , TS_G11_IO3
    , TS_G11_IO4
    , TS_G11_IO5
    , TS_G1_IO1
    , TS_G1_IO2
    , TS_G1_IO3
    , TS_G1_IO4
    , TS_G2_IO1
    , TS_G2_IO2
    , TS_G2_IO3
    , TS_G2_IO4
    , TS_G2_IO5
    , TS_G3_IO1
    , TS_G3_IO2
    , TS_G3_IO3
    , TS_G3_IO4
    , TS_G3_IO5
    , TS_G4_IO1
    , TS_G4_IO2
    , TS_G4_IO3
    , TS_G5_IO1
    , TS_G5_IO2
    , TS_G5_IO3
    , TS_G6_IO1
    , TS_G6_IO2
    , TS_G6_IO3
    , TS_G6_IO4
    , TS_G7_IO1
    , TS_G7_IO2
    , TS_G7_IO3
    , TS_G7_IO4
    , TS_G7_IO5
    , TS_G7_IO6
    , TS_G7_IO7
    , TS_G8_IO1
    , TS_G8_IO2
    , TS_G8_IO3
    , TS_G8_IO4
    , TS_G9_IO1
    , TS_G9_IO2
    , TS_G9_IO3
    , TS_G9_IO4
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
    , USB_DM
    , USB_DP
    , V_REF_OUT
    , V_REF_PVD_IN
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
struct signal_traits<CFG, PA0, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, RTC_TAMP2>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SYS_WKUP1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32L152x8
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM5_CH1>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TS_G1_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LCD_SEG0>
{
    static constexpr altfun_t AF = AF11;
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
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TS_G1_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LCD_COM2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TS_G4_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USB_DM>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USB_DP>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, TS_G5_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, TS_G5_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, LCD_SEG17>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
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
struct signal_traits<CFG, PA15, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TS_G5_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LCD_SEG1>
{
    static constexpr altfun_t AF = AF11;
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
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM9_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TS_G1_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LCD_SEG2>
{
    static constexpr altfun_t AF = AF11;
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
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM9_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TS_G1_IO4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2S3_WS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI3_NSS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LCD_SEG3>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM10_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TS_G2_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, LCD_SEG4>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM11_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TS_G2_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LCD_COM0>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TS_G4_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, LCD_COM1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TS_G4_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LCD_SEG5>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, SYS_V_REF_OUT>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TS_G3_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, V_REF_OUT>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LCD_SEG6>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, SYS_V_REF_OUT>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TS_G3_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, V_REF_OUT>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LCD_SEG10>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LCD_SEG11>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PB12, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LCD_SEG12>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM10_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TS_G7_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LCD_SEG13>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM9_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TS_G7_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, LCD_SEG14>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM9_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TS_G7_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, LCD_SEG15>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM11_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TS_G7_IO4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, TS_G3_IO3>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, COMP2_INM>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, LCD_SEG7>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SYS_JTDO_TRACESWO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, COMP2_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, LCD_SEG8>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
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
struct signal_traits<CFG, PB4, TS_G6_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, COMP2_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LCD_SEG9>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TS_G6_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, COMP2_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TS_G6_IO3>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, COMP2_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, FSMC_NL>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, SYS_PVD_IN>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TS_G6_IO4>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, V_REF_PVD_IN>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, LCD_SEG16>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SDIO_D4>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
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
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, LCD_COM3>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SDIO_D5>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
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
struct signal_traits<CFG, PC0, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LCD_SEG18>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TS_G8_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LCD_SEG19>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TS_G8_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, I2S3_CK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_COM4>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_SEG28>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_SEG40>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SDIO_D2>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SPI3_SCK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, UART4_TX>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_COM5>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_SEG29>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_SEG41>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SDIO_D3>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SPI3_MISO>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UART4_RX>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, I2S3_SD>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_COM6>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_SEG30>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_SEG42>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SDIO_CK>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SPI3_MOSI>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, UART5_TX>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, RTC_OUT_ALARM>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, RTC_OUT_CALIB>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, RTC_TAMP1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, RTC_TS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, SYS_WKUP2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, RCC_OSC32_IN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, RCC_OSC32_OUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LCD_SEG20>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TS_G8_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LCD_SEG21>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TS_G8_IO4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, LCD_SEG22>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, TS_G9_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, LCD_SEG23>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TS_G9_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, LCD_SEG24>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDIO_D6>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TS_G10_IO1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, I2S3_MCK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, LCD_SEG25>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDIO_D7>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TS_G10_IO2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, LCD_SEG26>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SDIO_D0>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TS_G10_IO3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LCD_SEG27>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SDIO_D1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TS_G10_IO4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FSMC_D2>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FSMC_DA2>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIM9_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FSMC_D3>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FSMC_DA3>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FSMC_D15>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FSMC_DA15>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LCD_SEG30>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, FSMC_A16>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LCD_SEG31>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, FSMC_A17>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LCD_SEG32>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, FSMC_A18>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LCD_SEG33>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FSMC_D0>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FSMC_DA0>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, LCD_SEG34>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM4_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FSMC_D1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FSMC_DA1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, LCD_SEG35>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM4_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_COM7>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_SEG31>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_SEG43>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, SDIO_CMD>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, UART5_RX>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, FSMC_CLK>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, FSMC_NOE>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, FSMC_NWE>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, FSMC_NWAIT>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FSMC_NE1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, TIM9_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FSMC_D13>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FSMC_DA13>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, LCD_SEG28>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FSMC_D14>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FSMC_DA14>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LCD_SEG29>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, FSMC_NBL0>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, LCD_SEG36>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM10_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM4_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, FSMC_NBL1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, LCD_SEG37>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM11_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FSMC_D7>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FSMC_DA7>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FSMC_D8>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FSMC_DA8>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FSMC_D9>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FSMC_DA9>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FSMC_D10>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FSMC_DA10>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FSMC_D11>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FSMC_DA11>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FSMC_D12>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FSMC_DA12>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, FSMC_A23>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, LCD_SEG38>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SYS_TRACECK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, FSMC_A19>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, LCD_SEG39>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SYS_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, FSMC_A20>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SYS_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, FSMC_A21>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
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
struct signal_traits<CFG, PE5, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, RTC_TAMP3>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA|STM32L162xD|STM32L162xE)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SYS_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SYS_WKUP3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM9_CH2>
{
    static constexpr altfun
        < CFG & (STM32L152x8|STM32L152xC|STM32L15xxA|STM32L162xE)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIMX_IC3>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FSMC_D4>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FSMC_DA4>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIMX_IC4>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FSMC_D5>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FSMC_DA5>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIMX_IC1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FSMC_D6>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FSMC_DA6>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM2_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM5_ETR>
{
    static constexpr altfun
        < CFG & (STM32L152xC|STM32L15xxA)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIMX_IC2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, FSMC_A0>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, FSMC_A1>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, TS_G11_IO5>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, TS_G3_IO4>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, FSMC_A6>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, TS_G3_IO5>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, FSMC_A7>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, TS_G9_IO3>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, FSMC_A8>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, TS_G9_IO4>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, FSMC_A9>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, TS_G2_IO3>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, FSMC_A2>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, FSMC_A3>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, FSMC_A4>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, FSMC_A5>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM5_CH1>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM5_ETR>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TS_G11_IO1>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TIM5_CH2>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TS_G11_IO2>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TIM5_CH3>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TS_G11_IO3>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, COMP1_INP>
{
    static constexpr altfun
        < CFG & STM32L162xE
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM5_CH4>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TS_G11_IO4>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, FSMC_A10>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, TS_G2_IO4>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, FSMC_A11>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, TS_G2_IO5>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, FSMC_NE3>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, FSMC_NE4>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, FSMC_A24>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, FSMC_A25>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, FSMC_A12>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, TS_G7_IO5>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, FSMC_A13>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, TS_G7_IO6>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, FSMC_A14>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, TS_G7_IO7>
{
    static constexpr altfun
        < CFG & (STM32L162xD|STM32L162xE)
        > AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, FSMC_A15>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FSMC_NE2>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, RCC_OSC_IN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, RCC_OSC_OUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, FSMC_A22>
{
    static constexpr altfun
        < CFG & STM32L162xD
        > AF = AF12;
};

