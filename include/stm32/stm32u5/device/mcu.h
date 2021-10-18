#pragma once

////
//
//      STM32U5 MCU family
//
///

enum mcu_t
    { STM32U575AGIx
    , STM32U575AGIxQ
    , STM32U575AIIx
    , STM32U575AIIxQ
    , STM32U575CGTx
    , STM32U575CGTxQ
    , STM32U575CGUx
    , STM32U575CGUxQ
    , STM32U575CITx
    , STM32U575CITxQ
    , STM32U575CIUx
    , STM32U575CIUxQ
    , STM32U575OIYxQ
    , STM32U575QGIx
    , STM32U575QGIxQ
    , STM32U575QIIx
    , STM32U575QIIxQ
    , STM32U575RGTx
    , STM32U575RGTxQ
    , STM32U575RITx
    , STM32U575RITxQ
    , STM32U575VGTx
    , STM32U575VGTxQ
    , STM32U575VITx
    , STM32U575VITxQ
    , STM32U575ZGTx
    , STM32U575ZGTxQ
    , STM32U575ZITx
    , STM32U575ZITxQ
    , STM32U585AIIx
    , STM32U585AIIxQ
    , STM32U585CITx
    , STM32U585CITxQ
    , STM32U585CIUx
    , STM32U585CIUxQ
    , STM32U585OIYxQ
    , STM32U585QIIx
    , STM32U585RITx
    , STM32U585RITxQ
    , STM32U585VITx
    , STM32U585VITxQ
    , STM32U585ZITx
    };

enum svd_t
    { STM32U5xx = 0x1
    };

enum gpio_conf_t
    { STM32U5x = 0x1
    };

enum dma_resource_t
    {
    };

enum periph_t
    { ADC1
    , ADC4
    , ADF1
    , AES
    , COMP
    , CORDIC
    , CRC
    , CRS
    , DAC1
    , DBGMCU
    , DCACHE
    , DCMI
    , DLYBOS1
    , DLYBOS2
    , DLYBSD1
    , DLYBSD2
    , DMA2D
    , EXTI
    , FDCAN1
    , FDCAN1_RAM
    , FLASH
    , FMAC
    , FMC
    , GPDMA1
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , GPIOI
    , GTZC1_MPCBB1
    , GTZC1_MPCBB2
    , GTZC1_MPCBB3
    , GTZC1_TZIC
    , GTZC1_TZSC
    , GTZC2_MPCBB4
    , GTZC2_TZIC
    , GTZC2_TZSC
    , HASH
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , ICACHE
    , IWDG
    , LPDMA1
    , LPGPIO1
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPTIM4
    , LPUART1
    , MDF1
    , OCTOSPI1
    , OCTOSPI2
    , OCTOSPIM
    , OPAMP
    , OTFDEC1
    , OTFDEC2
    , OTG_FS
    , PKA
    , PSSI
    , PWR
    , RAMCFG
    , RCC
    , RNG
    , RTC
    , SAES
    , SAI1
    , SAI2
    , SDMMC1
    , SDMMC2
    , SEC_ADC1
    , SEC_ADC4
    , SEC_ADF1
    , SEC_AES
    , SEC_COMP
    , SEC_CORDIC
    , SEC_CRC
    , SEC_CRS
    , SEC_DAC1
    , SEC_DCACHE
    , SEC_DCMI
    , SEC_DLYBOS1
    , SEC_DLYBOS2
    , SEC_DLYBSD1
    , SEC_DLYBSD2
    , SEC_DMA2D
    , SEC_EXTI
    , SEC_FDCAN1
    , SEC_FDCAN1_RAM
    , SEC_FLASH
    , SEC_FMAC
    , SEC_FMC
    , SEC_GPDMA1
    , SEC_GPIOA
    , SEC_GPIOB
    , SEC_GPIOC
    , SEC_GPIOD
    , SEC_GPIOE
    , SEC_GPIOF
    , SEC_GPIOG
    , SEC_GPIOH
    , SEC_GPIOI
    , SEC_GTZC1_MPCBB1
    , SEC_GTZC1_MPCBB2
    , SEC_GTZC1_MPCBB3
    , SEC_GTZC1_TZIC
    , SEC_GTZC1_TZSC
    , SEC_GTZC2_MPCBB4
    , SEC_GTZC2_TZIC
    , SEC_GTZC2_TZSC
    , SEC_HASH
    , SEC_I2C1
    , SEC_I2C2
    , SEC_I2C3
    , SEC_I2C4
    , SEC_ICACHE
    , SEC_IWDG
    , SEC_LPDMA1
    , SEC_LPGPIO1
    , SEC_LPTIM1
    , SEC_LPTIM2
    , SEC_LPTIM3
    , SEC_LPTIM4
    , SEC_LPUART1
    , SEC_MDF1
    , SEC_OCTOSPI1
    , SEC_OCTOSPI2
    , SEC_OCTOSPIM
    , SEC_OPAMP
    , SEC_OTFDEC1
    , SEC_OTFDEC2
    , SEC_OTG_FS
    , SEC_PKA
    , SEC_PSSI
    , SEC_PWR
    , SEC_RAMCFG
    , SEC_RCC
    , SEC_RNG
    , SEC_RTC
    , SEC_SAES
    , SEC_SAI1
    , SEC_SAI2
    , SEC_SDMMC1
    , SEC_SDMMC2
    , SEC_SPI1
    , SEC_SPI2
    , SEC_SPI3
    , SEC_SYSCFG
    , SEC_TAMP
    , SEC_TIM1
    , SEC_TIM2
    , SEC_TIM3
    , SEC_TIM4
    , SEC_TIM5
    , SEC_TIM6
    , SEC_TIM7
    , SEC_TIM8
    , SEC_TIM15
    , SEC_TIM16
    , SEC_TIM17
    , SEC_TSC
    , SEC_UART4
    , SEC_UART5
    , SEC_UCPD1
    , SEC_USART1
    , SEC_USART2
    , SEC_USART3
    , SEC_VREFBUF
    , SEC_WWDG
    , SPI1
    , SPI2
    , SPI3
    , SYSCFG
    , TAMP
    , TIM1
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TIM15
    , TIM16
    , TIM17
    , TSC
    , UART4
    , UART5
    , UCPD1
    , USART1
    , USART2
    , USART3
    , VREFBUF
    , WWDG
    };

template<svd_t SVD, periph_t PERIPH>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on this MCU!"
        );
};

template<periph_t P, dma_resource_t R>
struct dma_request_t
{
    static_assert
        ( always_false_i<P>::value
        , "DMA resource not available on this peripheral!"
        );
};

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32U575AGIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575AGIxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575AIIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575AIIxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CGTx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CGTxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CGUx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CGUxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CIUx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575CIUxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575OIYxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575QGIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575QGIxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575QIIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575QIIxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575RGTx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575RGTxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575RITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575RITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575VGTx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575VGTxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575VITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575VITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575ZGTx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575ZGTxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575ZITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U575ZITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585AIIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585AIIxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585CITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585CITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585CIUx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585CIUxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585OIYxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585QIIx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585RITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585RITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585VITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585VITxQ>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

template<> struct mcu_traits<STM32U585ZITx>
{
    static constexpr family_t family = STM32U5;
    static constexpr svd_t svd = STM32U5xx;
    static constexpr gpio_conf_t gpio_conf = STM32U5x;
    static constexpr unsigned frequency = 160;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

