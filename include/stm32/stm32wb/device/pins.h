#pragma once

////
//
//      STM32WB pins
//
///

enum port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PD = 0x3
    , PE = 0x4
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
    , PH0 = 0x70
    , PH1 = 0x71
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
    , AF9 = 0x9
    , AF10 = 0xa
    , AF11 = 0xb
    , AF12 = 0xc
    , AF13 = 0xd
    , AF14 = 0xe
    , AF15 = 0xf
    };

enum signal_t
    { CM4_EVENTOUT
    , COMP1_OUT
    , COMP2_OUT
    , CRS_SYNC
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
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
    , QUADSPI_BK1_IO0
    , QUADSPI_BK1_IO1
    , QUADSPI_BK1_IO2
    , QUADSPI_BK1_IO3
    , QUADSPI_BK1_NCS
    , QUADSPI_CLK
    , RCC_LSCO
    , RCC_MCO
    , RF_TX_MOD_EXT_PA
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
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_SCK
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
    , TRIG_INOUT
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
    , TSC_SYNC
    , USART1_CK
    , USART1_CTS
    , USART1_DE
    , USART1_NSS
    , USART1_RTS
    , USART1_RX
    , USART1_TX
    , USB_DM
    , USB_DP
    , USB_NOE
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
struct signal_traits<CFG, PA0, SAI1_EXTCLK>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PA1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LCD_SEG0>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PA10, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, CRS_SYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LCD_COM2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SAI1_D1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PA11, USB_DM>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
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
struct signal_traits<CFG, PA12, USB_DP>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USB_NOE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LCD_SEG5>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, LCD_SEG17>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, RCC_MCO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
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
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TSC_G3_IO1>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PA2, LCD_SEG1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, QUADSPI_BK1_NCS>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PA3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LCD_SEG2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, QUADSPI_CLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, SAI1_CK1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LCD_SEG5>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PA6, LCD_SEG3>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, QUADSPI_BK1_IO3>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PA7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, LCD_SEG4>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, QUADSPI_BK1_IO2>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PA8, LCD_COM0>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PA8, SAI1_CK2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, SAI1_SCK_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PA9, LCD_COM1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SAI1_D2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB0, RF_TX_MOD_EXT_PA>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PB10, LCD_SEG10>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, QUADSPI_CLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SAI1_SCK_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB10, TSC_SYNC>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB11, LCD_SEG11>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, QUADSPI_BK1_NCS>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PB12, LCD_SEG12>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PB12, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB12, TSC_G1_IO1>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB13, LCD_SEG13>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SAI1_SCK_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB13, TSC_G1_IO2>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB14, LCD_SEG14>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB14, TSC_G1_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PB15, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB15, TSC_G1_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LCD_VLCD>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, RTC_OUT_ALARM>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, RTC_OUT_CALIB>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SAI1_EXTCLK>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB3, LCD_SEG7>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SYS_JTDO_SWO>
{
    static constexpr altfun_t AF = AF0;
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
struct signal_traits<CFG, PB4, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, LCD_SEG8>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB4, TSC_G2_IO1>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB5, LCD_SEG9>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB5, TSC_G2_IO2>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB6, LCD_SEG6>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM16_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TSC_G2_IO3>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB7, LCD_SEG21>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PB7, TSC_G2_IO4>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB8, LCD_SEG16>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, QUADSPI_BK1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SAI1_CK1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, LCD_COM3>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, QUADSPI_BK1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SAI1_D2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PB9, TSC_G7_IO4>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PC0, LCD_SEG18>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PC1, LCD_SEG19>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PC10, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PC10, SYS_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TSC_G3_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PC11, TSC_G3_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PC12, RCC_LSCO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SYS_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TSC_G3_IO4>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PC2, LCD_SEG20>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PC3, LCD_VLCD>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PC3, SAI1_D1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
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
struct signal_traits<CFG, PC4, LCD_SEG22>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, LCD_SEG23>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, SAI1_D3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, LCD_SEG24>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TSC_G4_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, LCD_SEG25>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TSC_G4_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, LCD_SEG26>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TSC_G4_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LCD_SEG27>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TSC_G4_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, USB_NOE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LCD_SEG30>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, TRIG_INOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, TSC_G6_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LCD_SEG31>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, TSC_G6_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LCD_SEG32>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TSC_G6_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LCD_SEG33>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LPTIM2_OUT>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TSC_G6_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, LCD_SEG34>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, LCD_SEG35>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PD2, SYS_TRACED2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TSC_SYNC>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, QUADSPI_BK1_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_SCK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, QUADSPI_BK1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, TSC_G5_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, QUADSPI_BK1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, TSC_G5_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, QUADSPI_BK1_IO2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SAI1_D1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, TSC_G5_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, LCD_SEG39>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, QUADSPI_BK1_IO3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, TSC_G5_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, LCD_SEG28>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, TIM1_BKIN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LCD_SEG29>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, SYS_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, LCD_SEG36>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM16_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TSC_G7_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, LCD_SEG37>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM17_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TSC_G7_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, LCD_SEG38>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SAI1_CK1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, SYS_TRACECLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TSC_G7_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, CM4_EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, RCC_LSCO>
{
    static constexpr altfun_t AF = AF0;
};

