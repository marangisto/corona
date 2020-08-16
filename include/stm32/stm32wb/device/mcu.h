#pragma once

////
//
//      STM32WB MCU family
//
///

enum mcu_t
    { STM32WB50CGUx
    , STM32WB55CCUx
    , STM32WB55CEUx
    , STM32WB55CGUx
    , STM32WB55RCVx
    , STM32WB55REVx
    , STM32WB55RGVx
    , STM32WB55VCQx
    , STM32WB55VCYx
    , STM32WB55VEQx
    , STM32WB55VEYx
    , STM32WB55VGQx
    , STM32WB55VGYx
    };

enum svd_t
    { STM32WB30_CM4
    , STM32WB35_CM4
    , STM32WB50_CM4
    , STM32WB55_CM4
    };

enum gpio_conf_t
    { STM32WB55x = 0x1
    };

enum periph_t
    { ADC1
    , AES1
    , AES2
    , COMP
    , CRC
    , CRS
    , DBGMCU
    , DMA1
    , DMA2
    , DMAMUX
    , DMAMUX1
    , EXTI
    , FLASH
    , FPU
    , FPU_CPACR
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOH
    , HSEM
    , I2C1
    , I2C3
    , IPCC
    , IWDG
    , LCD
    , LPTIM1
    , LPTIM2
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , PKA
    , PWR
    , QUADSPI1
    , RCC
    , RNG
    , RTC
    , SAI1
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , TIM1
    , TIM2
    , TIM16
    , TIM17
    , TSC
    , USART1
    , USB
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

template<> struct mcu_traits<STM32WB50CGUx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB50_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CCUx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CEUx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CGUx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55RCVx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55REVx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55RGVx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VCQx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VCYx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VEQx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VEYx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VGQx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VGYx>
{
    static constexpr family_t family = STM32WB;
    static constexpr svd_t svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

