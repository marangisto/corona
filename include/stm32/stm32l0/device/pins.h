#pragma once

////
//
//      STM32L0 pins
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
    , PH0 = 0x70
    , PH1 = 0x71
    , PH9 = 0x79
    , PH10 = 0x7a
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
    { COMP1_OUT
    , COMP2_OUT
    , CRS_SYNC
    , EVENTOUT
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
    , LCD_SEG44
    , LCD_SEG45
    , LCD_SEG46
    , LCD_SEG47
    , LCD_SEG48
    , LCD_SEG49
    , LCD_SEG5
    , LCD_SEG50
    , LCD_SEG51
    , LCD_SEG6
    , LCD_SEG7
    , LCD_SEG8
    , LCD_SEG9
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM1_OUT
    , LPUART1_CTS
    , LPUART1_DE
    , LPUART1_RTS
    , LPUART1_RX
    , LPUART1_TX
    , RCC_MCO
    , RTC_OUT_ALARM
    , RTC_OUT_CALIB
    , RTC_REFIN
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
    , TIM21_CH1
    , TIM21_CH2
    , TIM21_ETR
    , TIM22_CH1
    , TIM22_CH2
    , TIM22_ETR
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
    , USB_NOE
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
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, LPUART1_RX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM2_ETR>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TSC_G1_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_CTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART2_RX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, I2C1_SMBA>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LCD_SEG0>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LPTIM1_IN2>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM21_ETR>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TSC_G1_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_DE>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART2_RTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, I2C1_SDA>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = (CFG & STM32L071) ? AF6 : AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LCD_COM2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, RTC_REFIN>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM21_CH1>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM22_CH2>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TIM2_CH3>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, TSC_G4_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, USART2_RX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, COMP1_OUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, EVENTOUT>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM21_CH2>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TSC_G4_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART1_CTS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, USART2_CTS>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, COMP2_OUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, EVENTOUT>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, TSC_G4_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_DE>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART1_RTS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART2_DE>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, USART2_RTS>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, I2C1_SDA>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, LPTIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SYS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USB_NOE>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C1_SMBA>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LPUART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SYS_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USART2_TX>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, EVENTOUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, LCD_SEG17>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_CH1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART2_RX>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART4_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, COMP2_OUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LCD_SEG1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LPUART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM21_CH1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TSC_G1_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, USART2_TX>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LCD_SEG2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM21_CH2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TSC_G1_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, COMP2_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, I2C1_SCL>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM1_ETR>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, SPI1_NSS>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM22_ETR>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, TSC_G2_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LPTIM1_IN2>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, SPI1_SCK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_CH1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TIM2_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, TSC_G2_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, COMP1_OUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, EVENTOUT>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LCD_SEG3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPTIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM22_CH1>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TSC_G2_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, COMP2_OUT>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, EVENTOUT>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, LCD_SEG4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM21_ETR>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM22_CH2>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TSC_G2_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, USART2_CTS>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, CRS_SYNC>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, EVENTOUT>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, I2C3_SCL>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LCD_COM0>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, TIM2_CH1>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART1_CK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, USART2_CK>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, COMP1_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C1_SCL>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L071)
        > AF = (CFG & STM32L071) ? AF6 : AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, I2C3_SMBA>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, LCD_COM1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, RCC_MCO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM21_CH2>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM22_CH1>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TSC_G4_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, USART2_TX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, EVENTOUT>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LCD_SEG5>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, SPI1_MISO>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM2_CH2>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM2_CH3>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TSC_G3_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USART2_DE>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USART2_RTS>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LCD_SEG6>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_DE>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM2_CH4>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TSC_G3_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART2_CK>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LCD_SEG10>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF6 : AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TIM2_CH3>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, TSC_SYNC>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LCD_SEG11>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF6 : AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TIM2_CH4>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, TSC_G6_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C2_SMBA>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LCD_SEG12>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_DE>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, LPUART1_RTS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TSC_G6_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2C2_SCL>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2S2_CK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LCD_SEG13>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPUART1_CTS>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF6 : AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, RCC_MCO>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM21_CH1>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF5 : AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TSC_G6_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2C2_SDA>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, LCD_SEG14>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, LPUART1_DE>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF6 : AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, LPUART1_RTS>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF6 : AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, RTC_OUT_ALARM>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, RTC_OUT_CALIB>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM21_CH2>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = (CFG & STM32L031) ? AF5 : AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TSC_G6_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, LCD_SEG15>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, I2C3_SMBA>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LPTIM1_OUT>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, TSC_G3_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, EVENTOUT>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, LCD_SEG7>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
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
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART1_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031|STM32L051)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2C3_SDA>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, LCD_SEG8>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM22_CH1>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TSC_G5_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_CTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LCD_SEG9>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM21_CH1>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM22_CH2>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART1_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART5_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM21_CH1>
{
    static constexpr altfun
        < CFG & STM32L031
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM2_CH3>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TSC_G5_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, USART2_TX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, LPUART1_RX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM2_CH4>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TSC_G5_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART2_RX>
{
    static constexpr altfun
        < CFG & (STM32L021|STM32L031)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART4_CTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, LCD_SEG16>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TSC_SYNC>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, USART2_TX>
{
    static constexpr altfun
        < CFG & STM32L021
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2S2_WS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, LCD_COM3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SPI2_NSS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, I2C3_SCL>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LCD_SEG18>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPTIM1_IN1>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L031|STM32L071)
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, TSC_G7_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, I2C3_SDA>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LCD_SEG19>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPTIM1_OUT>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, TSC_G7_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_COM4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_SEG28>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_SEG40>
{
    static constexpr altfun
        < CFG & STM32L051
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LCD_SEG48>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LPUART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_COM5>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_SEG29>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_SEG41>
{
    static constexpr altfun
        < CFG & STM32L051
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LCD_SEG49>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_COM6>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_SEG30>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_SEG42>
{
    static constexpr altfun
        < CFG & STM32L051
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, LCD_SEG50>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART4_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, I2S2_MCK>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LCD_SEG20>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LPTIM1_IN2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TSC_G7_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, I2S2_SD>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LCD_SEG21>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, LPTIM1_ETR>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, TSC_G7_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, EVENTOUT>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, LCD_SEG22>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, LPUART1_TX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, LCD_SEG23>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, LPUART1_RX>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TSC_G3_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, LCD_SEG24>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM22_CH1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TSC_G8_IO1>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, LCD_SEG25>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM22_CH2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TSC_G8_IO2>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, LCD_SEG26>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM22_ETR>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TSC_G8_IO3>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, I2C3_SDA>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LCD_SEG27>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM21_ETR>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TSC_G8_IO4>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, USB_NOE>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, I2S2_WS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIM21_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, I2S2_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LCD_SEG30>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LCD_SEG31>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LPUART1_CTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LCD_SEG32>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LPUART1_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LPUART1_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LCD_SEG33>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, LCD_SEG34>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, CRS_SYNC>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, LCD_SEG35>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_COM7>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_SEG31>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_SEG43>
{
    static constexpr altfun
        < CFG & STM32L051
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LCD_SEG51>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LPUART1_DE>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LPUART1_RTS>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, I2S2_MCK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, LCD_SEG44>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, SPI2_MISO>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, I2S2_SD>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, TIM21_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, LCD_SEG28>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, LPUART1_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LCD_SEG29>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LPUART1_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, LCD_SEG36>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, EVENTOUT>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, LCD_SEG37>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, LCD_SEG40>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM2_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, USART5_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM2_CH3>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, USART5_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI1_NSS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM2_CH4>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, LCD_SEG41>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI1_SCK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, LCD_SEG42>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI1_MISO>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, LCD_SEG43>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, SPI1_MOSI>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, LCD_SEG38>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TIM3_ETR>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, LCD_SEG39>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM22_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM3_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM22_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM3_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM21_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM3_CH3>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM21_CH2>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM3_CH4>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, LCD_SEG45>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_CK>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_DE>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, USART5_RTS>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, LCD_SEG46>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, USART4_TX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, LCD_SEG47>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM2_CH1>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM2_ETR>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, USART4_RX>
{
    static constexpr altfun
        < CFG & STM32L071
        > AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, CRS_SYNC>
{
    static constexpr altfun
        < CFG & (STM32L051|STM32L071)
        > AF = AF0;
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
struct adc_dac_chan<DAC1, PA5, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

