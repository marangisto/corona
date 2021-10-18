#pragma once

////
//
//      STM32U5 pins
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
    , PI = 0x8
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
    , PH3 = 0x73
    , PH4 = 0x74
    , PH5 = 0x75
    , PH6 = 0x76
    , PH7 = 0x77
    , PH8 = 0x78
    , PH9 = 0x79
    , PH10 = 0x7a
    , PH11 = 0x7b
    , PH12 = 0x7c
    , PH13 = 0x7d
    , PH14 = 0x7e
    , PH15 = 0x7f
    , PI0 = 0x80
    , PI1 = 0x81
    , PI2 = 0x82
    , PI3 = 0x83
    , PI4 = 0x84
    , PI5 = 0x85
    , PI6 = 0x86
    , PI7 = 0x87
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
    { ADF1_CCK0
    , ADF1_CCK1
    , ADF1_SDI0
    , AUDIOCLK
    , COMP1_OUT
    , COMP2_OUT
    , CRS_SYNC
    , DCMI_D0
    , DCMI_D1
    , DCMI_D10
    , DCMI_D11
    , DCMI_D12
    , DCMI_D13
    , DCMI_D2
    , DCMI_D3
    , DCMI_D4
    , DCMI_D5
    , DCMI_D6
    , DCMI_D7
    , DCMI_D8
    , DCMI_D9
    , DCMI_HSYNC
    , DCMI_PIXCLK
    , DCMI_VSYNC
    , DEBUG_JTCK_SWCLK
    , DEBUG_JTDI
    , DEBUG_JTDO_SWO
    , DEBUG_JTMS_SWDIO
    , DEBUG_JTRST
    , DEBUG_TRACECLK
    , DEBUG_TRACED0
    , DEBUG_TRACED1
    , DEBUG_TRACED2
    , DEBUG_TRACED3
    , EVENTOUT
    , FDCAN1_RX
    , FDCAN1_TX
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
    , FMC_DA0
    , FMC_DA1
    , FMC_DA10
    , FMC_DA11
    , FMC_DA12
    , FMC_DA13
    , FMC_DA14
    , FMC_DA15
    , FMC_DA2
    , FMC_DA3
    , FMC_DA4
    , FMC_DA5
    , FMC_DA6
    , FMC_DA7
    , FMC_DA8
    , FMC_DA9
    , FMC_INT
    , FMC_NBL0
    , FMC_NBL1
    , FMC_NCE
    , FMC_NE1
    , FMC_NE2
    , FMC_NE3
    , FMC_NE4
    , FMC_NL
    , FMC_NOE
    , FMC_NWAIT
    , FMC_NWE
    , I2C1_SCL
    , I2C1_SDA
    , I2C1_SMBA
    , I2C2_SCL
    , I2C2_SDA
    , I2C2_SMBA
    , I2C3_SCL
    , I2C3_SDA
    , I2C3_SMBA
    , I2C4_SCL
    , I2C4_SDA
    , I2C4_SMBA
    , IR_OUT
    , LPTIM1_CH1
    , LPTIM1_CH2
    , LPTIM1_ETR
    , LPTIM1_IN1
    , LPTIM1_IN2
    , LPTIM2_CH1
    , LPTIM2_CH2
    , LPTIM2_ETR
    , LPTIM2_IN1
    , LPTIM2_IN2
    , LPTIM3_CH1
    , LPTIM3_CH2
    , LPTIM3_ETR
    , LPTIM3_IN1
    , LPTIM4_ETR
    , LPTIM4_IN1
    , LPTIM4_OUT
    , LPUART1_CTS
    , LPUART1_DE
    , LPUART1_RTS
    , LPUART1_RX
    , LPUART1_TX
    , MDF1_CCK0
    , MDF1_CCK1
    , MDF1_CKI0
    , MDF1_CKI1
    , MDF1_CKI2
    , MDF1_CKI3
    , MDF1_CKI4
    , MDF1_CKI5
    , MDF1_SDI0
    , MDF1_SDI1
    , MDF1_SDI2
    , MDF1_SDI3
    , MDF1_SDI4
    , MDF1_SDI5
    , OCTOSPIM_P1_CLK
    , OCTOSPIM_P1_DQS
    , OCTOSPIM_P1_IO0
    , OCTOSPIM_P1_IO1
    , OCTOSPIM_P1_IO2
    , OCTOSPIM_P1_IO3
    , OCTOSPIM_P1_IO4
    , OCTOSPIM_P1_IO5
    , OCTOSPIM_P1_IO6
    , OCTOSPIM_P1_IO7
    , OCTOSPIM_P1_NCLK
    , OCTOSPIM_P1_NCS
    , OCTOSPIM_P2_CLK
    , OCTOSPIM_P2_DQS
    , OCTOSPIM_P2_IO0
    , OCTOSPIM_P2_IO1
    , OCTOSPIM_P2_IO2
    , OCTOSPIM_P2_IO3
    , OCTOSPIM_P2_IO4
    , OCTOSPIM_P2_IO5
    , OCTOSPIM_P2_IO6
    , OCTOSPIM_P2_IO7
    , OCTOSPIM_P2_NCLK
    , OCTOSPIM_P2_NCS
    , PSSI_D0
    , PSSI_D1
    , PSSI_D10
    , PSSI_D11
    , PSSI_D12
    , PSSI_D13
    , PSSI_D14
    , PSSI_D15
    , PSSI_D2
    , PSSI_D3
    , PSSI_D4
    , PSSI_D5
    , PSSI_D6
    , PSSI_D7
    , PSSI_D8
    , PSSI_D9
    , PSSI_DE
    , PSSI_PDCK
    , PSSI_RDY
    , PWR_CDSTOP
    , PWR_CSLEEP
    , PWR_SRDSTOP
    , RCC_MCO
    , RTC_REFIN
    , SAI1_CK1
    , SAI1_CK2
    , SAI1_D1
    , SAI1_D2
    , SAI1_D3
    , SAI1_FS_A
    , SAI1_FS_B
    , SAI1_MCLK_A
    , SAI1_MCLK_B
    , SAI1_SCK_A
    , SAI1_SCK_B
    , SAI1_SD_A
    , SAI1_SD_B
    , SAI2_FS_A
    , SAI2_FS_B
    , SAI2_MCLK_A
    , SAI2_MCLK_B
    , SAI2_SCK_A
    , SAI2_SCK_B
    , SAI2_SD_A
    , SAI2_SD_B
    , SDMMC1_CDIR
    , SDMMC1_CK
    , SDMMC1_CKIN
    , SDMMC1_CMD
    , SDMMC1_D0
    , SDMMC1_D0DIR
    , SDMMC1_D1
    , SDMMC1_D123DIR
    , SDMMC1_D2
    , SDMMC1_D3
    , SDMMC1_D4
    , SDMMC1_D5
    , SDMMC1_D6
    , SDMMC1_D7
    , SDMMC2_CK
    , SDMMC2_CMD
    , SDMMC2_D0
    , SDMMC2_D1
    , SDMMC2_D2
    , SDMMC2_D3
    , SDMMC2_D4
    , SDMMC2_D5
    , SDMMC2_D6
    , SDMMC2_D7
    , SPI1_MISO
    , SPI1_MOSI
    , SPI1_NSS
    , SPI1_RDY
    , SPI1_SCK
    , SPI2_MISO
    , SPI2_MOSI
    , SPI2_NSS
    , SPI2_RDY
    , SPI2_SCK
    , SPI3_MISO
    , SPI3_MOSI
    , SPI3_NSS
    , SPI3_RDY
    , SPI3_SCK
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
    , TIM1_BKIN2
    , TIM1_CH1
    , TIM1_CH1N
    , TIM1_CH2
    , TIM1_CH2N
    , TIM1_CH3
    , TIM1_CH3N
    , TIM1_CH4
    , TIM1_CH4N
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
    , TIM8_CH4N
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
    , UART4_CTS
    , UART4_DE
    , UART4_RTS
    , UART4_RX
    , UART4_TX
    , UART5_CTS
    , UART5_DE
    , UART5_RTS
    , UART5_RX
    , UART5_TX
    , UCPD1_FRSTX1
    , UCPD1_FRSTX2
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
    , USB_OTG_FS_DM
    , USB_OTG_FS_DP
    , USB_OTG_FS_ID
    , USB_OTG_FS_NOE
    , USB_OTG_FS_SOF
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
struct signal_traits<CFG, PA0, AUDIOCLK>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SDMMC2_CMD>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, SPI3_RDY>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PA0, TIM5_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, TIM8_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA0, UART4_TX>
{
    static constexpr altfun_t AF = AF8;
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
struct signal_traits<CFG, PA1, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, LPTIM1_CH2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, OCTOSPIM_P1_DQS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM15_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM2_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, TIM5_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA1, UART4_RX>
{
    static constexpr altfun_t AF = AF8;
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
struct signal_traits<CFG, PA10, CRS_SYNC>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, DCMI_D1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, LPTIM2_IN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA10, PSSI_D1>
{
    static constexpr altfun_t AF = AF5;
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
struct signal_traits<CFG, PA10, USB_OTG_FS_ID>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, FDCAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA11, TIM1_BKIN2>
{
    static constexpr altfun_t AF = AF2;
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
struct signal_traits<CFG, PA11, USB_OTG_FS_DM>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, FDCAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA12, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PA12, USB_OTG_FS_DP>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, DEBUG_JTMS_SWDIO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, IR_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA13, USB_OTG_FS_NOE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, DEBUG_JTCK_SWCLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, I2C4_SMBA>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, LPTIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA14, USB_OTG_FS_SOF>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, DEBUG_JTDI>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, SPI3_NSS>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PA15, UART4_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, UART4_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART2_RX>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA15, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, OCTOSPIM_P1_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, SPI1_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM15_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM2_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, TIM5_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA2, UCPD1_FRSTX1>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PA3, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, OCTOSPIM_P1_CLK>
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
struct signal_traits<CFG, PA3, TIM15_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM2_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, TIM5_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA3, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, DCMI_HSYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, LPTIM2_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, OCTOSPIM_P1_NCS>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, PSSI_DE>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PA4, SPI3_NSS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA4, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, PSSI_D14>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, PWR_CSLEEP>
{
    static constexpr altfun_t AF = AF0;
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
struct signal_traits<CFG, PA5, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA5, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, DCMI_PIXCLK>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, OCTOSPIM_P1_IO3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, PSSI_PDCK>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, PWR_CDSTOP>
{
    static constexpr altfun_t AF = AF0;
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
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, TIM8_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA6, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, LPTIM2_CH2>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, OCTOSPIM_P1_IO2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, PWR_SRDSTOP>
{
    static constexpr altfun_t AF = AF0;
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
struct signal_traits<CFG, PA7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA7, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, DEBUG_TRACECLK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, LPTIM2_CH1>
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
struct signal_traits<CFG, PA8, SPI1_RDY>
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
struct signal_traits<CFG, PA8, USB_OTG_FS_SOF>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, DCMI_D0>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, PSSI_D0>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, SPI2_SCK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA9, TIM15_BKIN>
{
    static constexpr altfun_t AF = AF14;
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
struct signal_traits<CFG, PB0, AUDIOCLK>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, COMP1_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, OCTOSPIM_P1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB0, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, LPTIM3_CH2>
{
    static constexpr altfun_t AF = AF4;
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
struct signal_traits<CFG, PB1, MDF1_SDI0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, OCTOSPIM_P1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB1, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, COMP1_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, I2C4_SCL>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB10, OCTOSPIM_P1_CLK>
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
struct signal_traits<CFG, PB10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, I2C4_SDA>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, OCTOSPIM_P1_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB11, SPI2_RDY>
{
    static constexpr altfun_t AF = AF5;
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
struct signal_traits<CFG, PB12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
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
struct signal_traits<CFG, PB12, MDF1_SDI1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, OCTOSPIM_P1_NCLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM15_BKIN>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, TSC_G1_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPTIM3_IN1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, MDF1_CKI1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SAI2_SCK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB13, TIM15_CH1N>
{
    static constexpr altfun_t AF = AF14;
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
struct signal_traits<CFG, PB13, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, LPTIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, MDF1_SDI2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SDMMC2_D0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM15_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB14, TSC_G1_IO3>
{
    static constexpr altfun_t AF = AF9;
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
struct signal_traits<CFG, PB15, FMC_NBL1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, LPTIM2_IN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, MDF1_CKI2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, RTC_REFIN>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SAI2_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SDMMC2_D1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM15_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB15, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, LPTIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, MDF1_CKI0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, OCTOSPIM_P1_DQS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, SPI1_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, TIM8_CH4N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB2, UCPD1_FRSTX1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, ADF1_CCK0>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, CRS_SYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, DEBUG_JTDO_SWO>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, LPTIM1_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SDMMC2_D2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB3, SPI3_SCK>
{
    static constexpr altfun_t AF = AF6;
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
struct signal_traits<CFG, PB4, ADF1_SDI0>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, DCMI_D12>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, DEBUG_JTRST>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, LPTIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, PSSI_D12>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SDMMC2_D3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, SPI3_MISO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM17_BKIN>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, TSC_G2_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, UART5_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, UART5_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB4, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, COMP2_OUT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, DCMI_D10>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PB5, OCTOSPIM_P1_NCLK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, PSSI_D10>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PB5, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM16_BKIN>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, TSC_G2_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, UART5_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB5, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, DCMI_D5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, I2C4_SCL>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, MDF1_SDI5>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, PSSI_D5>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PB6, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB6, TIM8_BKIN2>
{
    static constexpr altfun_t AF = AF3;
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
struct signal_traits<CFG, PB7, DCMI_VSYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, FMC_NL>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, I2C4_SDA>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, MDF1_CKI5>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, PSSI_RDY>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM17_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TIM8_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, TSC_G2_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, UART4_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB7, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, DCMI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, FDCAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, MDF1_CCK0>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, PSSI_D6>
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
struct signal_traits<CFG, PB8, SDMMC1_CKIN>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SDMMC1_D4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SDMMC2_D4>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, SPI3_RDY>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM16_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB8, TIM4_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, DCMI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, FDCAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, IR_OUT>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, PSSI_D7>
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
struct signal_traits<CFG, PB9, SDMMC1_CDIR>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SDMMC1_D5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PB9, SDMMC2_D5>
{
    static constexpr altfun_t AF = AF11;
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
struct signal_traits<CFG, PB9, TIM4_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, EVENTOUT>
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
struct signal_traits<CFG, PC0, MDF1_SDI4>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, OCTOSPIM_P1_IO7>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, SDMMC1_D5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC0, SPI2_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, DEBUG_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPTIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, MDF1_CKI4>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, OCTOSPIM_P1_IO4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SDMMC2_CK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC1, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, ADF1_CCK1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, DCMI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, DEBUG_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, LPTIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, PSSI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SAI2_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SDMMC1_D2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, SPI3_SCK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, TSC_G3_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, UART4_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC10, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, ADF1_SDI0>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, DCMI_D2>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, DCMI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, LPTIM3_IN1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, OCTOSPIM_P1_NCS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, PSSI_D2>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, PSSI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SDMMC1_D3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, SPI3_MISO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, TSC_G3_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UART4_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, UCPD1_FRSTX2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC11, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, DCMI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, DEBUG_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, PSSI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SAI2_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SDMMC1_CK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, TSC_G3_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, UART5_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC12, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, MDF1_CCK1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, OCTOSPIM_P1_IO5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC2, TSC_G3_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
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
struct signal_traits<CFG, PC3, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC3, OCTOSPIM_P1_IO6>
{
    static constexpr altfun_t AF = AF10;
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
struct signal_traits<CFG, PC3, TSC_G1_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, OCTOSPIM_P1_IO7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC4, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, PSSI_D15>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, SAI1_D3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, TIM1_CH4N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC5, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, DCMI_D0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, MDF1_CKI3>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, PSSI_D0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, PWR_CSLEEP>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDMMC1_D0DIR>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDMMC1_D6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, SDMMC2_D6>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TIM8_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC6, TSC_G4_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, DCMI_D1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, LPTIM2_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, MDF1_SDI3>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, PSSI_D1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, PWR_CDSTOP>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDMMC1_D123DIR>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDMMC1_D7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, SDMMC2_D7>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TIM8_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC7, TSC_G4_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, DCMI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, PSSI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, PWR_SRDSTOP>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, SDMMC1_D0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TIM8_CH3>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC8, TSC_G4_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, DCMI_D3>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, DEBUG_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, LPTIM3_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, PSSI_D3>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, SDMMC1_D1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM8_BKIN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TIM8_CH4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, TSC_G4_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PC9, USB_OTG_FS_NOE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FDCAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FMC_D2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, FMC_DA2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD0, TIM8_CH4N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FDCAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FMC_D3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, FMC_DA3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FMC_D15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, FMC_DA15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LPTIM2_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, LPTIM3_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, SAI2_SCK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, TSC_G6_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD10, USART3_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, FMC_A16>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, I2C4_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, LPTIM2_ETR>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, SAI2_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, TSC_G6_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD11, USART3_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, FMC_A17>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, I2C4_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, LPTIM2_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TIM4_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, TSC_G6_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD12, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, FMC_A18>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, I2C4_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LPTIM2_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, LPTIM4_IN1>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TIM4_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD13, TSC_G6_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FMC_D0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, FMC_DA0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD14, TIM4_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FMC_D1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, FMC_DA1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, LPTIM3_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD15, TIM4_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, DCMI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, DEBUG_TRACED2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, LPTIM4_ETR>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, PSSI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, SDMMC1_CMD>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, TSC_SYNC>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, UART5_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD2, USART3_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, DCMI_D5>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, FMC_CLK>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, MDF1_SDI0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD3, PSSI_D5>
{
    static constexpr altfun_t AF = AF4;
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
struct signal_traits<CFG, PD3, USART2_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, FMC_NOE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, MDF1_CKI0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, OCTOSPIM_P1_IO4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD4, USART2_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, FMC_NWE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, OCTOSPIM_P1_IO5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, SPI2_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD5, USART2_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, DCMI_D10>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, FMC_NWAIT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, MDF1_SDI1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, OCTOSPIM_P1_IO6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, PSSI_D10>
{
    static constexpr altfun_t AF = AF4;
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
struct signal_traits<CFG, PD6, SDMMC2_CK>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD6, USART2_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FMC_NCE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, FMC_NE1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, LPTIM4_OUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, MDF1_CKI1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, OCTOSPIM_P1_IO7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, SDMMC2_CMD>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD7, USART2_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, DCMI_HSYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FMC_D13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, FMC_DA13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, PSSI_DE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD8, USART3_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, DCMI_PIXCLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FMC_D14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, FMC_DA14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LPTIM2_IN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, LPTIM3_IN1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, PSSI_PDCK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PD9, USART3_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, DCMI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, FMC_NBL0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, PSSI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM16_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE0, TIM4_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, DCMI_D3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, FMC_NBL1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, PSSI_D3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE1, TIM17_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, ADF1_SDI0>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FMC_D7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, FMC_DA7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, MDF1_SDI4>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, OCTOSPIM_P1_CLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TIM1_CH2N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE10, TSC_G5_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FMC_D8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, FMC_DA8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, MDF1_CKI4>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, OCTOSPIM_P1_NCS>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, SPI1_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE11, TSC_G5_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FMC_D9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, FMC_DA9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, MDF1_SDI5>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, OCTOSPIM_P1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TIM1_CH3N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE12, TSC_G5_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FMC_D10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, FMC_DA10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, MDF1_CKI5>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, OCTOSPIM_P1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TIM1_CH3>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE13, TSC_G5_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FMC_D11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, FMC_DA11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, OCTOSPIM_P1_IO2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_BKIN2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE14, TIM1_CH4>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FMC_D12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, FMC_DA12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, OCTOSPIM_P1_IO3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_BKIN>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE15, TIM1_CH4N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, DEBUG_TRACECLK>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, FMC_A23>
{
    static constexpr altfun_t AF = AF12;
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
struct signal_traits<CFG, PE2, TIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE2, TSC_G7_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, DEBUG_TRACED0>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, FMC_A19>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, OCTOSPIM_P1_DQS>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE3, TSC_G7_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, DCMI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, DEBUG_TRACED1>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, FMC_A20>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, MDF1_SDI3>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, PSSI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SAI1_D2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, SAI1_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE4, TSC_G7_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, DCMI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, DEBUG_TRACED2>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, FMC_A21>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, MDF1_CKI3>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, PSSI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SAI1_CK2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, SAI1_SCK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TIM3_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE5, TSC_G7_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, DCMI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, DEBUG_TRACED3>
{
    static constexpr altfun_t AF = AF0;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, FMC_A22>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, PSSI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SAI1_D1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, SAI1_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE6, TIM3_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FMC_D4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, FMC_DA4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, MDF1_SDI2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE7, TIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FMC_D5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, FMC_DA5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, MDF1_CKI2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE8, TIM1_CH1N>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, ADF1_CCK0>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FMC_D6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, FMC_DA6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, MDF1_CCK0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, OCTOSPIM_P1_NCLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PE9, TIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, FMC_A0>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF0, OCTOSPIM_P2_IO0>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, FMC_A1>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF1, OCTOSPIM_P2_IO1>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, DCMI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, MDF1_CCK1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, OCTOSPIM_P1_CLK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, PSSI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, PSSI_D15>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, SAI1_D3>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF10, TIM15_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, DCMI_D12>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, LPTIM4_IN1>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, OCTOSPIM_P1_NCLK>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF11, PSSI_D12>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, FMC_A6>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, LPTIM4_ETR>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF12, OCTOSPIM_P2_DQS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, FMC_A7>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, I2C4_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, LPTIM4_OUT>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF13, UCPD1_FRSTX2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, FMC_A8>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, I2C4_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF14, TSC_G8_IO1>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, FMC_A9>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, I2C4_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF15, TSC_G8_IO2>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, FMC_A2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, LPTIM3_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF2, OCTOSPIM_P2_IO2>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, FMC_A3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, LPTIM3_IN1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF3, OCTOSPIM_P2_IO3>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, FMC_A4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, LPTIM3_ETR>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF4, OCTOSPIM_P2_CLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, FMC_A5>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, LPTIM3_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF5, OCTOSPIM_P2_NCLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, DCMI_D12>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, OCTOSPIM_P1_IO3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, PSSI_D12>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, SAI1_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM5_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF6, TIM5_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, FDCAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, OCTOSPIM_P1_IO2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, SAI1_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF7, TIM5_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, FDCAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, OCTOSPIM_P1_IO0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, PSSI_D14>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, SAI1_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF8, TIM5_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, OCTOSPIM_P1_IO1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, PSSI_D15>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, SAI1_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM15_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PF9, TIM5_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, FMC_A10>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, OCTOSPIM_P2_IO4>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG0, TSC_G8_IO3>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, FMC_A11>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, OCTOSPIM_P2_IO5>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG1, TSC_G8_IO4>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, FMC_NE3>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, LPTIM1_IN1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, OCTOSPIM_P2_IO7>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, SAI2_FS_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, SPI3_MISO>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, TIM15_CH1>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG10, USART1_RX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, LPTIM1_IN2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, OCTOSPIM_P1_IO5>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, SAI2_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, SPI3_MOSI>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, TIM15_CH2>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG11, USART1_CTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, FMC_NE4>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, LPTIM1_ETR>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, SAI2_SD_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, SPI3_NSS>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, USART1_DE>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG12, USART1_RTS>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, FMC_A24>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, I2C1_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, SPI3_RDY>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG13, USART1_CK>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, FMC_A25>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, I2C1_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG14, LPTIM1_CH2>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, DCMI_D13>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, I2C1_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, LPTIM1_CH1>
{
    static constexpr altfun_t AF = AF1;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, OCTOSPIM_P2_DQS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG15, PSSI_D13>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, FMC_A12>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, SAI2_SCK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG2, SPI1_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, FMC_A13>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, SAI2_FS_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG3, SPI1_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, FMC_A14>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, SAI2_MCLK_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG4, SPI1_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, FMC_A15>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, LPUART1_CTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, SAI2_SD_B>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG5, SPI1_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, LPUART1_DE>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, LPUART1_RTS>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, OCTOSPIM_P1_DQS>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, SPI1_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG6, UCPD1_FRSTX1>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, FMC_INT>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, LPUART1_TX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, MDF1_CCK0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, OCTOSPIM_P2_DQS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, SAI1_CK1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, SAI1_MCLK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG7, UCPD1_FRSTX2>
{
    static constexpr altfun_t AF = AF11;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG8, LPUART1_RX>
{
    static constexpr altfun_t AF = AF8;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NCE>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, FMC_NE2>
{
    static constexpr altfun_t AF = AF12;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, OCTOSPIM_P2_IO6>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SAI2_SCK_A>
{
    static constexpr altfun_t AF = AF13;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, SPI3_SCK>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, TIM15_CH1N>
{
    static constexpr altfun_t AF = AF14;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PG9, USART1_TX>
{
    static constexpr altfun_t AF = AF7;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, DCMI_D1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, OCTOSPIM_P2_IO5>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, PSSI_D1>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH10, TIM5_CH1>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, DCMI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, OCTOSPIM_P2_IO6>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, PSSI_D2>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH11, TIM5_CH2>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, DCMI_D3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, OCTOSPIM_P2_IO7>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, PSSI_D3>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, TIM5_CH3>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH12, TIM8_CH4N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, FDCAN1_TX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH13, TIM8_CH1N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, DCMI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, FDCAN1_RX>
{
    static constexpr altfun_t AF = AF9;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, PSSI_D4>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH14, TIM8_CH2N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, DCMI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, OCTOSPIM_P2_IO6>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, PSSI_D11>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH15, TIM8_CH3N>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH2, OCTOSPIM_P1_IO4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, I2C2_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, OCTOSPIM_P2_DQS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH4, PSSI_D14>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, DCMI_PIXCLK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, I2C2_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH5, PSSI_PDCK>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, DCMI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, I2C2_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, OCTOSPIM_P2_CLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH6, PSSI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, DCMI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, I2C3_SCL>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, OCTOSPIM_P2_NCLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH7, PSSI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, DCMI_HSYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, I2C3_SDA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, OCTOSPIM_P2_IO3>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH8, PSSI_DE>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, DCMI_D0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, I2C3_SMBA>
{
    static constexpr altfun_t AF = AF4;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, OCTOSPIM_P2_IO4>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PH9, PSSI_D0>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, DCMI_D13>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, OCTOSPIM_P1_IO5>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, PSSI_D13>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, SPI2_NSS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI0, TIM5_CH4>
{
    static constexpr altfun_t AF = AF2;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, DCMI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, OCTOSPIM_P2_IO2>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, PSSI_D8>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI1, SPI2_SCK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, DCMI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, OCTOSPIM_P2_IO1>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, PSSI_D9>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, SPI2_MISO>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI2, TIM8_CH4>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, DCMI_D10>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, OCTOSPIM_P2_IO0>
{
    static constexpr altfun_t AF = AF6;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, PSSI_D10>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, SPI2_MOSI>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI3, TIM8_ETR>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, DCMI_D5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, PSSI_D5>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, SPI2_RDY>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI4, TIM8_BKIN>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, DCMI_VSYNC>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, OCTOSPIM_P2_NCS>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, PSSI_RDY>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI5, TIM8_CH1>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, DCMI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, OCTOSPIM_P2_CLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, PSSI_D6>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI6, TIM8_CH2>
{
    static constexpr altfun_t AF = AF3;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, DCMI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, EVENTOUT>
{
    static constexpr altfun_t AF = AF15;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, OCTOSPIM_P2_NCLK>
{
    static constexpr altfun_t AF = AF5;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, PSSI_D7>
{
    static constexpr altfun_t AF = AF10;
};

template<gpio_conf_t CFG>
struct signal_traits<CFG, PI7, TIM8_CH3>
{
    static constexpr altfun_t AF = AF3;
};

template<periph_t PERIPH, pin_t PIN, int POLARITY>
struct adc_dac_chan{};

template<>
struct adc_dac_chan<ADC1, PA0, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA1, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA2, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA3, 1>
{
    static constexpr uint8_t CHAN = 8;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA4, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA5, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA6, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PA7, 1>
{
    static constexpr uint8_t CHAN = 12;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB0, 1>
{
    static constexpr uint8_t CHAN = 15;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB1, 1>
{
    static constexpr uint8_t CHAN = 16;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PB2, 1>
{
    static constexpr uint8_t CHAN = 17;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC0, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC1, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC2, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC3, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC4, 1>
{
    static constexpr uint8_t CHAN = 13;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC1, PC5, 1>
{
    static constexpr uint8_t CHAN = 14;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PA4, 1>
{
    static constexpr uint8_t CHAN = 9;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PA5, 1>
{
    static constexpr uint8_t CHAN = 10;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PA6, 1>
{
    static constexpr uint8_t CHAN = 11;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PA7, 1>
{
    static constexpr uint8_t CHAN = 20;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PB0, 1>
{
    static constexpr uint8_t CHAN = 18;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PB1, 1>
{
    static constexpr uint8_t CHAN = 19;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC0, 1>
{
    static constexpr uint8_t CHAN = 1;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC1, 1>
{
    static constexpr uint8_t CHAN = 2;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC2, 1>
{
    static constexpr uint8_t CHAN = 3;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC3, 1>
{
    static constexpr uint8_t CHAN = 4;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC4, 1>
{
    static constexpr uint8_t CHAN = 22;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PC5, 1>
{
    static constexpr uint8_t CHAN = 23;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD11, 1>
{
    static constexpr uint8_t CHAN = 15;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD12, 1>
{
    static constexpr uint8_t CHAN = 16;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PD13, 1>
{
    static constexpr uint8_t CHAN = 17;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PF14, 1>
{
    static constexpr uint8_t CHAN = 5;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PF15, 1>
{
    static constexpr uint8_t CHAN = 6;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PG0, 1>
{
    static constexpr uint8_t CHAN = 7;
    static constexpr uint8_t BANK = 0;
};

template<>
struct adc_dac_chan<ADC4, PG1, 1>
{
    static constexpr uint8_t CHAN = 8;
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

