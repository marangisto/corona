#pragma once

////
//
//      STM32WB pins
//
////

enum gpio_port_t
    { PA = 0x0
    , PB = 0x1
    , PC = 0x2
    , PD = 0x3
    , PE = 0x4
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
template<> struct alt_fun_traits<PA0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA0, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA0, SAI1_EXTCLK> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA0, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA0, TIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA1, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA1, LCD_SEG0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA1, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA1, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA10, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA10, CRS_SYNC> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA10, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA10, LCD_COM2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA10, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA10, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA10, TIM17_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA10, TIM1_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA10, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA11, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA11, TIM1_BKIN2> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA11, TIM1_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA11, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA11, USB_DM> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA12, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA12, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA12, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA12, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA12, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA12, USB_DP> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA13, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA13, IR_OUT> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA13, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA13, SYS_JTMS_SWDIO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA13, USB_NOE> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA14, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA14, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA14, LCD_SEG5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA14, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA14, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA14, SYS_JTCK_SWCLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA15, LCD_SEG17> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA15, RCC_MCO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PA15, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA15, SYS_JTDI> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA15, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA15, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA15, TSC_G3_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PA2, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA2, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA2, LCD_SEG1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA2, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA2, QUADSPI_BK1_NCS> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA2, RCC_LSCO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA2, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA3, LCD_SEG2> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA3, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA3, QUADSPI_CLK> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA3, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA3, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA3, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA4, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA4, LCD_SEG5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA4, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA4, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA4, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA5, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA5, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA5, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA5, TIM2_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA5, TIM2_ETR> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PA6, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA6, LCD_SEG3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA6, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PA6, QUADSPI_BK1_IO3> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA6, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA6, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA6, TIM1_BKIN> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA7, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA7, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PA7, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA7, LCD_SEG4> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA7, QUADSPI_BK1_IO2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PA7, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA7, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA7, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA8, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA8, LCD_COM0> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA8, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PA8, RCC_MCO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PA8, SAI1_CK2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA8, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA8, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA8, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PA9, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PA9, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PA9, LCD_COM1> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PA9, SAI1_D2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PA9, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PA9, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PA9, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PA9, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB0, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB0, RF_TX_MOD_EXT_PA> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PB1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB1, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB1, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB1, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB10, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB10, COMP1_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB10, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB10, LCD_SEG10> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB10, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB10, QUADSPI_CLK> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB10, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB10, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB10, TIM2_CH3> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB10, TSC_SYNC> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB11, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB11, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB11, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB11, LCD_SEG11> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB11, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB11, QUADSPI_BK1_NCS> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB11, TIM2_CH4> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB12, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB12, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB12, LCD_SEG12> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB12, LPUART1_DE> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB12, LPUART1_RTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB12, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB12, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB12, TIM1_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB12, TSC_G1_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB13, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB13, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB13, LCD_SEG13> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB13, LPUART1_CTS> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB13, SAI1_SCK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB13, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB13, TIM1_CH1N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB13, TSC_G1_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB14, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB14, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB14, LCD_SEG14> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB14, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB14, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB14, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB14, TSC_G1_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB15, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB15, LCD_SEG15> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB15, RTC_REFIN> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB15, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB15, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB15, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB15, TSC_G1_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB2, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB2, I2C3_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB2, LCD_VLCD> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB2, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB2, RTC_OUT_ALARM> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB2, RTC_OUT_CALIB> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB2, SAI1_EXTCLK> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB2, SPI1_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB3, LCD_SEG7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB3, SAI1_SCK_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB3, SPI1_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB3, SYS_JTDO_SWO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB3, TIM2_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB3, USART1_DE> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB3, USART1_RTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB4, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB4, LCD_SEG8> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB4, SAI1_MCLK_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB4, SPI1_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB4, SYS_JTRST> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB4, TIM17_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB4, TSC_G2_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB4, USART1_CTS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB4, USART1_NSS> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB5, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB5, COMP2_OUT> { static const alt_fun_t AF = AF12; };
template<> struct alt_fun_traits<PB5, I2C1_SMBA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB5, LCD_SEG9> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB5, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB5, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB5, SAI1_SD_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB5, SPI1_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB5, TIM16_BKIN> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB5, TSC_G2_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB5, USART1_CK> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB6, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB6, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB6, LCD_SEG6> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB6, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB6, RCC_MCO> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PB6, SAI1_FS_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB6, TIM16_CH1N> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB6, TSC_G2_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB6, USART1_TX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB7, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB7, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB7, LCD_SEG21> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB7, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB7, TIM17_CH1N> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB7, TIM1_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB7, TSC_G2_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PB7, USART1_RX> { static const alt_fun_t AF = AF7; };
template<> struct alt_fun_traits<PB8, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB8, I2C1_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB8, LCD_SEG16> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB8, QUADSPI_BK1_IO1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB8, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB8, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB8, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB8, TIM1_CH2N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB9, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PB9, I2C1_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PB9, IR_OUT> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PB9, LCD_COM3> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PB9, QUADSPI_BK1_IO0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PB9, SAI1_D2> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PB9, SAI1_FS_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PB9, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PB9, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PB9, TIM1_CH3N> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PB9, TSC_G7_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC0, I2C3_SCL> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC0, LCD_SEG18> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC0, LPTIM1_IN1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC0, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC0, LPUART1_RX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC1, I2C3_SDA> { static const alt_fun_t AF = AF4; };
template<> struct alt_fun_traits<PC1, LCD_SEG19> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC1, LPTIM1_OUT> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC1, LPUART1_TX> { static const alt_fun_t AF = AF8; };
template<> struct alt_fun_traits<PC1, SPI2_MOSI> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC10, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC10, LCD_COM4> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC10, LCD_SEG28> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC10, LCD_SEG40> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC10, SYS_TRACED1> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC10, TSC_G3_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC11, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC11, LCD_COM5> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC11, LCD_SEG29> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC11, LCD_SEG41> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC11, TSC_G3_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC12, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC12, LCD_COM6> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC12, LCD_SEG30> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC12, LCD_SEG42> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC12, RCC_LSCO> { static const alt_fun_t AF = AF6; };
template<> struct alt_fun_traits<PC12, SYS_TRACED3> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PC12, TSC_G3_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC13, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC14, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC15, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC2, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC2, LCD_SEG20> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC2, LPTIM1_IN2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC2, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC3, LCD_VLCD> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC3, LPTIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PC3, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PC3, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC3, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC3, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PC4, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC4, LCD_SEG22> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC5, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC5, LCD_SEG23> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC5, SAI1_D3> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC6, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC6, LCD_SEG24> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC6, TSC_G4_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC7, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC7, LCD_SEG25> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC7, TSC_G4_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC8, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC8, LCD_SEG26> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC8, TSC_G4_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC9, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PC9, LCD_SEG27> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PC9, SAI1_SCK_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PC9, TIM1_BKIN> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PC9, TSC_G4_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PC9, USB_NOE> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD0, SPI2_NSS> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD1, SPI2_SCK> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD10, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD10, LCD_SEG30> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD10, TRIG_INOUT> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PD10, TSC_G6_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD11, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD11, LCD_SEG31> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD11, LPTIM2_ETR> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD11, TSC_G6_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD12, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD12, LCD_SEG32> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD12, LPTIM2_IN1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD12, TSC_G6_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD13, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD13, LCD_SEG33> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD13, LPTIM2_OUT> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PD13, TSC_G6_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD14, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD14, LCD_SEG34> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD14, TIM1_CH1> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD15, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD15, LCD_SEG35> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD15, TIM1_CH2> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PD2, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD2, LCD_COM7> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD2, LCD_SEG31> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD2, LCD_SEG43> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD2, SYS_TRACED2> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PD2, TSC_SYNC> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD3, QUADSPI_BK1_NCS> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD3, SPI2_MISO> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD3, SPI2_SCK> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD4, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD4, QUADSPI_BK1_IO0> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD4, SPI2_MOSI> { static const alt_fun_t AF = AF5; };
template<> struct alt_fun_traits<PD4, TSC_G5_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD5, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD5, QUADSPI_BK1_IO1> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD5, SAI1_MCLK_B> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD5, TSC_G5_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD6, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD6, QUADSPI_BK1_IO2> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD6, SAI1_D1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PD6, SAI1_SD_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PD6, TSC_G5_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD7, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD7, LCD_SEG39> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD7, QUADSPI_BK1_IO3> { static const alt_fun_t AF = AF10; };
template<> struct alt_fun_traits<PD7, TSC_G5_IO4> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PD8, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD8, LCD_SEG28> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD8, TIM1_BKIN2> { static const alt_fun_t AF = AF2; };
template<> struct alt_fun_traits<PD9, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PD9, LCD_SEG29> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PD9, SYS_TRACED0> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PE0, LCD_SEG36> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE0, TIM16_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE0, TIM1_ETR> { static const alt_fun_t AF = AF1; };
template<> struct alt_fun_traits<PE0, TSC_G7_IO3> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PE1, LCD_SEG37> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE1, TIM17_CH1> { static const alt_fun_t AF = AF14; };
template<> struct alt_fun_traits<PE1, TSC_G7_IO2> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE2, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PE2, LCD_SEG38> { static const alt_fun_t AF = AF11; };
template<> struct alt_fun_traits<PE2, SAI1_CK1> { static const alt_fun_t AF = AF3; };
template<> struct alt_fun_traits<PE2, SAI1_MCLK_A> { static const alt_fun_t AF = AF13; };
template<> struct alt_fun_traits<PE2, SYS_TRACECLK> { static const alt_fun_t AF = AF0; };
template<> struct alt_fun_traits<PE2, TSC_G7_IO1> { static const alt_fun_t AF = AF9; };
template<> struct alt_fun_traits<PE3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PE4, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH0, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH1, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH3, CM4_EVENTOUT> { static const alt_fun_t AF = AF15; };
template<> struct alt_fun_traits<PH3, RCC_LSCO> { static const alt_fun_t AF = AF0; };
