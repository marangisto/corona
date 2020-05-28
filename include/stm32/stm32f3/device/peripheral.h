#pragma once

////
//
//      STM32F3 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , ADC1
    , ADC1_2
    , ADC2
    , ADC3
    , ADC3_4
    , ADC4
    , ADC_COMMON
    , CAN
    , CRC
    , DAC1
    , DAC2
    , DBGMCU
    , DMA1
    , DMA2
    , EXTI
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
    , HDMI_CEC
    , HRTIM_COMMON
    , HRTIM_MASTER
    , HRTIM_TIMA
    , HRTIM_TIMB
    , HRTIM_TIMC
    , HRTIM_TIMD
    , HRTIM_TIME
    , I2C1
    , I2C2
    , I2C3
    , I2S2EXT
    , I2S3EXT
    , IWDG
    , MPU
    , NVIC
    , NVIC_STIR
    , PWR
    , RCC
    , RTC
    , SCB
    , SCB_ACTRL
    , SDADC1
    , SDADC2
    , SDADC3
    , SPI1
    , SPI2
    , SPI3
    , SPI4
    , STK
    , SYSCFG_COMP_OPAMP
    , TIM1
    , TIM12
    , TIM13
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TIM18
    , TIM19
    , TIM2
    , TIM20
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TSC
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USB
    , USB_FS
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

