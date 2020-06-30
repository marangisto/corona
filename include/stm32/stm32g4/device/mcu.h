#pragma once

////
//
//      STM32G4 MCU family
//
///

enum mcu_t
    { STM32G431C6Tx
    , STM32G431C8Tx
    , STM32G431CBTx
    , STM32G431C6Ux
    , STM32G431C8Ux
    , STM32G431CBUx
    , STM32G431CBYx
    , STM32G431K6Tx
    , STM32G431K8Tx
    , STM32G431KBTx
    , STM32G431K6Ux
    , STM32G431K8Ux
    , STM32G431KBUx
    , STM32G431M6Tx
    , STM32G431M8Tx
    , STM32G431MBTx
    , STM32G431R6Ix
    , STM32G431R8Ix
    , STM32G431RBIx
    , STM32G431R6Tx
    , STM32G431R8Tx
    , STM32G431RBTx
    , STM32G431V6Tx
    , STM32G431V8Tx
    , STM32G431VBTx
    , STM32G441CBTx
    , STM32G441CBUx
    , STM32G441CBYx
    , STM32G441KBTx
    , STM32G441KBUx
    , STM32G441MBTx
    , STM32G441RBIx
    , STM32G441RBTx
    , STM32G441VBTx
    , STM32G471CCTx
    , STM32G471CETx
    , STM32G471CCUx
    , STM32G471CEUx
    , STM32G471MCTx
    , STM32G471METx
    , STM32G471MEYx
    , STM32G471QCTx
    , STM32G471QETx
    , STM32G471RCTx
    , STM32G471RETx
    , STM32G471VCHx
    , STM32G471VEHx
    , STM32G471VCIx
    , STM32G471VEIx
    , STM32G471VCTx
    , STM32G471VETx
    , STM32GBK1CBTx
    , STM32G473CBTx
    , STM32G473CCTx
    , STM32G473CETx
    , STM32G473CBUx
    , STM32G473CCUx
    , STM32G473CEUx
    , STM32G473MBTx
    , STM32G473MCTx
    , STM32G473METx
    , STM32G473MEYx
    , STM32G473QBTx
    , STM32G473QCTx
    , STM32G473QETx
    , STM32G473RBTx
    , STM32G473RCTx
    , STM32G473RETx
    , STM32G473VBHx
    , STM32G473VCHx
    , STM32G473VEHx
    , STM32G473VBIx
    , STM32G473VCIx
    , STM32G473VEIx
    , STM32G473VBTx
    , STM32G473VCTx
    , STM32G473VETx
    , STM32G483CETx
    , STM32G483CEUx
    , STM32G483METx
    , STM32G483MEYx
    , STM32G483QETx
    , STM32G483RETx
    , STM32G483VEHx
    , STM32G483VEIx
    , STM32G483VETx
    , STM32G474CBTx
    , STM32G474CCTx
    , STM32G474CETx
    , STM32G474CBUx
    , STM32G474CCUx
    , STM32G474CEUx
    , STM32G474MBTx
    , STM32G474MCTx
    , STM32G474METx
    , STM32G474MEYx
    , STM32G474QBTx
    , STM32G474QCTx
    , STM32G474QETx
    , STM32G474RBTx
    , STM32G474RCTx
    , STM32G474RETx
    , STM32G474VBHx
    , STM32G474VCHx
    , STM32G474VEHx
    , STM32G474VBIx
    , STM32G474VCIx
    , STM32G474VEIx
    , STM32G474VBTx
    , STM32G474VCTx
    , STM32G474VETx
    , STM32G484CETx
    , STM32G484CEUx
    , STM32G484METx
    , STM32G484MEYx
    , STM32G484QETx
    , STM32G484RETx
    , STM32G484VEHx
    , STM32G484VEIx
    , STM32G484VETx
    };

enum svd_t
    { STM32G431xx
    , STM32G441xx
    , STM32G471xx
    , STM32G473xx
    , STM32G474xx
    , STM32G483xx
    , STM32G484xx
    , STM32GBK1CBT6
    };

enum gpio_conf_t
    { STM32G43x = 0x1
    , STM32G47x = 0x2
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC3
    , ADC4
    , ADC5
    , ADC12_COMMON
    , ADC345_COMMON
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
    , LPTIM1
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , OPAMP
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
    , SPI3
    , SPI4
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
    , TIM20
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

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32G431C6Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C8Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C6Ux>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C8Ux>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K6Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K8Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431KBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K6Ux>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K8Ux>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431KBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431M6Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431M8Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431MBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R6Ix>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R8Ix>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431RBIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R6Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R8Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431RBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431V6Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431V8Tx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431VBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441KBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441KBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441MBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441RBIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441RBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441VBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G471CCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CCUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CEUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471MCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471METx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471MEYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471QCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471QETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471RCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471RETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VEHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VEIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32GBK1CBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32GBK1CBT6;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G473CBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CCUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CEUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473METx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MEYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VEHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VEIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483CETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483CEUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483METx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483MEYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483QETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483RETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VEHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VEIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CBUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CCUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CEUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474METx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MEYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VEHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VEIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCTx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484CETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484CEUx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484METx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484MEYx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484QETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484RETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VEHx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VEIx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VETx>
{
    static constexpr family_t family = STM32G4;
    static constexpr svd_t svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

