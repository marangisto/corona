#pragma once

////
//
//      STM32WL MCU family
//
///

enum mcu_t
    { STM32WL54CCUx
    , STM32WL54JCIx
    , STM32WL55CCUx
    , STM32WL55JCIx
    , STM32WL55UCYx
    , STM32WLE4C8Ux
    , STM32WLE4CBUx
    , STM32WLE4CCUx
    , STM32WLE4J8Ix
    , STM32WLE4JBIx
    , STM32WLE4JCIx
    , STM32WLE5C8Ux
    , STM32WLE5CBUx
    , STM32WLE5CCUx
    , STM32WLE5J8Ix
    , STM32WLE5JBIx
    , STM32WLE5JCIx
    , STM32WLE5U8Yx
    , STM32WLE5UBYx
    };

enum svd_t
    { STM32WL5x_CM0P = 0x1
    , STM32WL5x_CM4 = 0x2
    , STM32WLE5_CM4 = 0x4
    };

enum gpio_conf_t
    { STM32WL = 0x1
    };

enum dma_resource_t
    { AES_IN
    , AES_OUT
    , DAC_OUT1
    , I2C_RX
    , I2C_TX
    , LPUART_RX
    , LPUART_TX
    , SAI_A
    , SAI_B
    , SPI_RX
    , SPI_TX
    , SUBGHZSPI_RX
    , SUBGHZSPI_TX
    , TIM_CH1
    , TIM_CH2
    , TIM_CH3
    , TIM_CH4
    , TIM_COM
    , TIM_TRIG
    , TIM_UP
    , USART_RX
    , USART_TX
    };

enum periph_t
    { ADC1
    , AES
    , COMP
    , CRC
    , DAC1
    , DBGMCU
    , DMA1
    , DMA2
    , DMAMUX
    , EXTI
    , FLASH
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOH
    , HSEM
    , I2C1
    , I2C2
    , I2C3
    , IPCC
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , PKA
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SYSCFG
    , SYSCFG_CONTINUE
    , TAMP
    , TIM1
    , TIM2
    , TIM16
    , TIM17
    , TZIC
    , TZSC
    , USART1
    , USART2
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

template<> struct mcu_traits<STM32WL54CCUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WL5x_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WL54JCIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WL5x_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WL55CCUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WL5x_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WL55JCIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WL5x_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WL55UCYx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WL5x_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4C8Ux>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4CBUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4CCUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4J8Ix>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4JBIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE4JCIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5C8Ux>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5CBUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5CCUx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5J8Ix>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5JBIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5JCIx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5U8Yx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32WLE5UBYx>
{
    static constexpr family_t family = STM32WL;
    static constexpr svd_t svd = STM32WLE5_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WL;
    static constexpr unsigned frequency = 48;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

