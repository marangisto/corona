#pragma once

////
//
//      STM32G4 peripherals
//
////

enum peripheral_enum_t
    { ADC1
    , ADC12_COMMON
    , ADC2
    , ADC3
    , ADC345_COMMON
    , ADC4
    , ADC5
    , AES
    , COMP
    , CORDIC
    , CRC
    , CRS
    , DAC1
    , DAC2
    , DAC3
    , DAC4
    , DBGMCU
    , DMA1
    , DMA2
    , DMAMUX
    , EXTI
    , FDCAN
    , FDCAN1
    , FDCAN2
    , FDCAN3
    , FLASH
    , FMAC
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
    , HRTIM_COMMON
    , HRTIM_MASTER
    , HRTIM_TIMA
    , HRTIM_TIMB
    , HRTIM_TIMC
    , HRTIM_TIMD
    , HRTIM_TIME
    , HRTIM_TIMF
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , IWDG
    , LPTIMER1
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , OPAMP
    , PWR
    , QUADSPI
    , RCC
    , RNG
    , RTC
    , SAI
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , SPI3
    , SPI4
    , STK
    , SYSCFG
    , TAMP
    , TIM1
    , TIM15
    , TIM16
    , TIM17
    , TIM2
    , TIM20
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , UART4
    , UART5
    , UCPD1
    , USART1
    , USART2
    , USART3
    , USB_FS_DEVICE
    , VREFBUF
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

