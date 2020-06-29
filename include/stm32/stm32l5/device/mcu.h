#pragma once

////
//
//      STM32L5 MCU family
//
///

enum mcu_t
    { STM32L552CCTx
    , STM32L552CETx
    , STM32L552CCUx
    , STM32L552CEUx
    , STM32L552CETxP
    , STM32L552CEUxP
    , STM32L552MEYxP
    , STM32L552MEYxQ
    , STM32L552QCIxQ
    , STM32L552QEIxQ
    , STM32L552QEIx
    , STM32L552QEIxP
    , STM32L552RCTx
    , STM32L552RETx
    , STM32L552RETxP
    , STM32L552RETxQ
    , STM32L552VCTxQ
    , STM32L552VETxQ
    , STM32L552VETx
    , STM32L552ZCTxQ
    , STM32L552ZETxQ
    , STM32L552ZETx
    , STM32L562CETx
    , STM32L562CETxP
    , STM32L562CEUx
    , STM32L562CEUxP
    , STM32L562MEYxP
    , STM32L562MEYxQ
    , STM32L562QEIx
    , STM32L562QEIxP
    , STM32L562QEIxQ
    , STM32L562RETx
    , STM32L562RETxP
    , STM32L562RETxQ
    , STM32L562VETx
    , STM32L562VETxQ
    , STM32L562ZETx
    , STM32L562ZETxQ
    };

enum svd_t
    { STM32L552
    , STM32L562
    };

enum gpio_conf_t
    { STM32L55x = 0x1
    };

enum periph_t
    { ADC
    , ADC_COMMON
    , SEC_ADC
    , SEC_ADC_COMMON
    , AES
    , SEC_AES
    , COMP
    , SEC_COMP
    , CRC
    , SEC_CRC
    , CRS
    , SEC_CRS
    , DAC1
    , SEC_DAC
    , DBGMCU
    , DCB
    , DFSDM1
    , SEC_DFSDM1
    , DMA1
    , DMA2
    , SEC_DMA1
    , SEC_DMA2
    , DMAMUX1
    , SEC_DMAMUX1
    , EXTI
    , SEC_EXTI
    , FDCAN1
    , SEC_FDCAN1
    , FLASH
    , SEC_FLASH
    , FMC
    , SEC_FMC
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , SEC_GPIOA
    , SEC_GPIOB
    , SEC_GPIOC
    , SEC_GPIOD
    , SEC_GPIOE
    , SEC_GPIOF
    , SEC_GPIOG
    , SEC_GPIOH
    , GTZC_MPCBB1
    , GTZC_MPCBB2
    , GTZC_TZIC
    , GTZC_TZSC
    , SEC_GTZC_TZIC
    , SEC_GTZC_TZSC
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , SEC_I2C1
    , SEC_I2C2
    , SEC_I2C3
    , SEC_I2C4
    , ICACHE
    , SEC_ICACHE
    , IWDG
    , SEC_IWDG
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , SEC_LPTIM1
    , SEC_LPTIM2
    , SEC_LPTIM3
    , LPUART1
    , SEC_LPUART1
    , NVIC
    , NVIC_STIR
    , OCTOSPI1
    , SEC_OCTOSPI1
    , OPAMP
    , SEC_OPAMP
    , OTFDEC1
    , SEC_OTFDEC1
    , PKA
    , SEC_PKA
    , PWR
    , SEC_PWR
    , RCC
    , SEC_RCC
    , RNG
    , SEC_RNG
    , RTC
    , SEC_RTC
    , SAI1
    , SAI2
    , SEC_SAI1
    , SEC_SAI2
    , SDMMC1
    , SEC_SDMMC1
    , SEC_GTZC_MPCBB1
    , SEC_GTZC_MPCBB2
    , SEC_SPI1
    , SEC_SPI2
    , SEC_SPI3
    , SPI1
    , SPI2
    , SPI3
    , SEC_SYSCFG
    , SYSCFG
    , SEC_TAMP
    , TAMP
    , SEC_TIM1
    , SEC_TIM15
    , SEC_TIM16
    , SEC_TIM17
    , SEC_TIM2
    , SEC_TIM3
    , SEC_TIM4
    , SEC_TIM5
    , SEC_TIM6
    , SEC_TIM7
    , SEC_TIM8
    , TIM1
    , TIM15
    , TIM16
    , TIM17
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , SEC_TSC
    , TSC
    , SEC_UCPD1
    , UCPD1
    , SEC_UART4
    , SEC_UART5
    , SEC_USART1
    , SEC_USART2
    , SEC_USART3
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , SEC_USB
    , USB
    , SEC_VREFBUF
    , VREFBUF
    , SEC_WWDG
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

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32L552CCTx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CCUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CEUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CEUxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552MEYxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552MEYxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QCIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RCTx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VCTxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZCTxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CEUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CEUxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562MEYxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562MEYxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562QEIx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562QEIxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562QEIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562RETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562RETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562RETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562VETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562VETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562ZETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562ZETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

