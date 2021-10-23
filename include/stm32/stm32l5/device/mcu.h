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
    { STM32L552 = 0x1
    , STM32L562 = 0x2
    };

enum gpio_conf_t
    { STM32L55x = 0x1
    };

enum dma_resource_t
    { AES_IN
    , AES_OUT
    , DAC_CH1
    , DAC_CH2
    , DFSDM_FLT0
    , DFSDM_FLT1
    , DFSDM_FLT2
    , DFSDM_FLT3
    , HASH_IN
    , I2C_RX
    , I2C_TX
    , LPUART_RX
    , LPUART_TX
    , SAI_A
    , SAI_B
    , SPI_RX
    , SPI_TX
    , TIM_CH1
    , TIM_CH2
    , TIM_CH3
    , TIM_CH4
    , TIM_COM
    , TIM_TRIG
    , TIM_UP
    , UART_RX
    , UART_TX
    , UCPD_RX
    , UCPD_TX
    , USART_RX
    , USART_TX
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC_COMMON
    , AES
    , COMP
    , CRC
    , CRS
    , DAC1
    , DBGMCU
    , DCB
    , DFSDM1
    , DMA1
    , DMA2
    , DMAMUX1
    , EXTI
    , FDCAN1
    , FLASH
    , FMC
    , FPU
    , FPU_CPACR
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , GTZC_MPCBB1
    , GTZC_MPCBB2
    , GTZC_TZIC
    , GTZC_TZSC
    , HASH
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , ICACHE
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPUART1
    , NVIC
    , NVIC_STIR
    , OCTOSPI1
    , OPAMP
    , OTFDEC1
    , PKA
    , PWR
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SDMMC1
    , SEC_ADC1
    , SEC_ADC2
    , SEC_ADC_COMMON
    , SEC_AES
    , SEC_COMP
    , SEC_CRC
    , SEC_CRS
    , SEC_DAC
    , SEC_DFSDM1
    , SEC_DMA1
    , SEC_DMA2
    , SEC_DMAMUX1
    , SEC_EXTI
    , SEC_FDCAN1
    , SEC_FLASH
    , SEC_FMC
    , SEC_GPIOA
    , SEC_GPIOB
    , SEC_GPIOC
    , SEC_GPIOD
    , SEC_GPIOE
    , SEC_GPIOF
    , SEC_GPIOG
    , SEC_GPIOH
    , SEC_GTZC_MPCBB1
    , SEC_GTZC_MPCBB2
    , SEC_GTZC_TZIC
    , SEC_GTZC_TZSC
    , SEC_HASH
    , SEC_I2C1
    , SEC_I2C2
    , SEC_I2C3
    , SEC_I2C4
    , SEC_ICACHE
    , SEC_IWDG
    , SEC_LPTIM1
    , SEC_LPTIM2
    , SEC_LPTIM3
    , SEC_LPUART1
    , SEC_OCTOSPI1
    , SEC_OPAMP
    , SEC_OTFDEC1
    , SEC_PKA
    , SEC_PWR
    , SEC_RCC
    , SEC_RNG
    , SEC_RTC
    , SEC_SAI1
    , SEC_SAI2
    , SEC_SDMMC1
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
    , SEC_USB
    , SEC_VREFBUF
    , SEC_WWDG
    , SPI1
    , SPI2
    , SPI3
    , STK
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
    , USB
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

template<> struct mcu_traits<STM32L552CCTx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552CETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552CCUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552CEUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552CETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552CEUxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552MEYxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552MEYxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552QCIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552QEIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552QEIx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552QEIxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552RCTx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552RETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552RETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552RETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552VCTxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552VETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552VETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552ZCTxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552ZETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L552ZETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562CETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562CETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562CEUx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562CEUxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562MEYxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562MEYxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562QEIx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562QEIxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562QEIxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562RETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562RETxP>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562RETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562VETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562VETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562ZETx>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

template<> struct mcu_traits<STM32L562ZETxQ>
{
    static constexpr family_t family = STM32L5;
    static constexpr svd_t svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
    static constexpr unsigned frequency = 110;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

