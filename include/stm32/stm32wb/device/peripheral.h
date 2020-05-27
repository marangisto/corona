#pragma once

////
//
//      STM32WB peripherals
//
////

enum peripheral_enum_t
    { ADC
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
    , QUADSPI
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
    , SYSCFG_VREFBUF
    , TIM1
    , TIM16
    , TIM17
    , TIM2
    , TSC
    , USART1
    , USB
    , WWDG
    };

template<mcu_svd_t SVD, peripheral_enum_t PERIPHERAL>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on MCU!"
        );
};

