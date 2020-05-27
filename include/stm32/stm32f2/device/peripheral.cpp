#pragma once

////
//
//      STM32F2 peripherals
//
////

typename peripheral_t<STM32F215, ADC1>::T& peripheral_t<STM32F215, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ADC1>::T*>(0x40012000);

typename peripheral_t<STM32F215, ADC2>::T& peripheral_t<STM32F215, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ADC2>::T*>(0x40012100);

typename peripheral_t<STM32F215, ADC3>::T& peripheral_t<STM32F215, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ADC3>::T*>(0x40012200);

typename peripheral_t<STM32F217, ADC1>::T& peripheral_t<STM32F217, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ADC1>::T*>(0x40012000);

typename peripheral_t<STM32F217, ADC2>::T& peripheral_t<STM32F217, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ADC2>::T*>(0x40012100);

typename peripheral_t<STM32F217, ADC3>::T& peripheral_t<STM32F217, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ADC3>::T*>(0x40012200);

typename peripheral_t<STM32F215, ADC_COMMON>::T& peripheral_t<STM32F215, ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ADC_COMMON>::T*>(0x40012300);

typename peripheral_t<STM32F217, ADC_COMMON>::T& peripheral_t<STM32F217, ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ADC_COMMON>::T*>(0x40012300);

typename peripheral_t<STM32F215, CAN2>::T& peripheral_t<STM32F215, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F215, CAN1>::T& peripheral_t<STM32F215, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F217, CAN2>::T& peripheral_t<STM32F217, CAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, CAN2>::T*>(0x40006800);

typename peripheral_t<STM32F217, CAN1>::T& peripheral_t<STM32F217, CAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, CAN1>::T*>(0x40006400);

typename peripheral_t<STM32F215, CRC>::T& peripheral_t<STM32F215, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F217, CRC>::T& peripheral_t<STM32F217, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F215, CRYP>::T& peripheral_t<STM32F215, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, CRYP>::T*>(0x50060000);

typename peripheral_t<STM32F217, CRYP>::T& peripheral_t<STM32F217, CRYP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, CRYP>::T*>(0x50060000);

typename peripheral_t<STM32F215, DAC>::T& peripheral_t<STM32F215, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, DAC>::T*>(0x40007400);

typename peripheral_t<STM32F217, DAC>::T& peripheral_t<STM32F217, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, DAC>::T*>(0x40007400);

typename peripheral_t<STM32F215, DBG>::T& peripheral_t<STM32F215, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F217, DBG>::T& peripheral_t<STM32F217, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, DBG>::T*>(0xe0042000);

typename peripheral_t<STM32F215, DCMI>::T& peripheral_t<STM32F215, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, DCMI>::T*>(0x50050000);

typename peripheral_t<STM32F217, DCMI>::T& peripheral_t<STM32F217, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, DCMI>::T*>(0x50050000);

typename peripheral_t<STM32F215, DMA2>::T& peripheral_t<STM32F215, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32F215, DMA1>::T& peripheral_t<STM32F215, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32F217, DMA2>::T& peripheral_t<STM32F217, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32F217, DMA1>::T& peripheral_t<STM32F217, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32F215, EXTI>::T& peripheral_t<STM32F215, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, EXTI>::T*>(0x40013c00);

typename peripheral_t<STM32F217, EXTI>::T& peripheral_t<STM32F217, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, EXTI>::T*>(0x40013c00);

typename peripheral_t<STM32F215, ETHERNET_MAC>::T& peripheral_t<STM32F215, ETHERNET_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ETHERNET_MAC>::T*>(0x40028000);

typename peripheral_t<STM32F217, ETHERNET_MAC>::T& peripheral_t<STM32F217, ETHERNET_MAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ETHERNET_MAC>::T*>(0x40028000);

typename peripheral_t<STM32F215, ETHERNET_MMC>::T& peripheral_t<STM32F215, ETHERNET_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ETHERNET_MMC>::T*>(0x40028100);

typename peripheral_t<STM32F217, ETHERNET_MMC>::T& peripheral_t<STM32F217, ETHERNET_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ETHERNET_MMC>::T*>(0x40028100);

typename peripheral_t<STM32F215, ETHERNET_PTP>::T& peripheral_t<STM32F215, ETHERNET_PTP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ETHERNET_PTP>::T*>(0x40028700);

typename peripheral_t<STM32F217, ETHERNET_PTP>::T& peripheral_t<STM32F217, ETHERNET_PTP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ETHERNET_PTP>::T*>(0x40028700);

typename peripheral_t<STM32F215, ETHERNET_DMA>::T& peripheral_t<STM32F215, ETHERNET_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, ETHERNET_DMA>::T*>(0x40029000);

typename peripheral_t<STM32F217, ETHERNET_DMA>::T& peripheral_t<STM32F217, ETHERNET_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, ETHERNET_DMA>::T*>(0x40029000);

typename peripheral_t<STM32F215, FLASH>::T& peripheral_t<STM32F215, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32F217, FLASH>::T& peripheral_t<STM32F217, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32F215, FSMC>::T& peripheral_t<STM32F215, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F217, FSMC>::T& peripheral_t<STM32F217, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32F215, GPIOI>::T& peripheral_t<STM32F215, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOI>::T*>(0x40022000);

typename peripheral_t<STM32F215, GPIOH>::T& peripheral_t<STM32F215, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOH>::T*>(0x40021c00);

typename peripheral_t<STM32F215, GPIOG>::T& peripheral_t<STM32F215, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOG>::T*>(0x40021800);

typename peripheral_t<STM32F215, GPIOF>::T& peripheral_t<STM32F215, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOF>::T*>(0x40021400);

typename peripheral_t<STM32F215, GPIOE>::T& peripheral_t<STM32F215, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOE>::T*>(0x40021000);

typename peripheral_t<STM32F215, GPIOD>::T& peripheral_t<STM32F215, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32F215, GPIOC>::T& peripheral_t<STM32F215, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32F217, GPIOI>::T& peripheral_t<STM32F217, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOI>::T*>(0x40022000);

typename peripheral_t<STM32F217, GPIOH>::T& peripheral_t<STM32F217, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOH>::T*>(0x40021c00);

typename peripheral_t<STM32F217, GPIOG>::T& peripheral_t<STM32F217, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOG>::T*>(0x40021800);

typename peripheral_t<STM32F217, GPIOF>::T& peripheral_t<STM32F217, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOF>::T*>(0x40021400);

typename peripheral_t<STM32F217, GPIOE>::T& peripheral_t<STM32F217, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOE>::T*>(0x40021000);

typename peripheral_t<STM32F217, GPIOD>::T& peripheral_t<STM32F217, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32F217, GPIOC>::T& peripheral_t<STM32F217, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32F215, GPIOB>::T& peripheral_t<STM32F215, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32F217, GPIOB>::T& peripheral_t<STM32F217, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32F215, GPIOA>::T& peripheral_t<STM32F215, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32F217, GPIOA>::T& peripheral_t<STM32F217, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32F215, HASH>::T& peripheral_t<STM32F215, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, HASH>::T*>(0x50060400);

typename peripheral_t<STM32F217, HASH>::T& peripheral_t<STM32F217, HASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, HASH>::T*>(0x50060400);

typename peripheral_t<STM32F215, I2C3>::T& peripheral_t<STM32F215, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32F215, I2C2>::T& peripheral_t<STM32F215, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F215, I2C1>::T& peripheral_t<STM32F215, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F217, I2C3>::T& peripheral_t<STM32F217, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32F217, I2C2>::T& peripheral_t<STM32F217, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F217, I2C1>::T& peripheral_t<STM32F217, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F215, IWDG>::T& peripheral_t<STM32F215, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F217, IWDG>::T& peripheral_t<STM32F217, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F215, MPU>::T& peripheral_t<STM32F215, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F217, MPU>::T& peripheral_t<STM32F217, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F215, NVIC>::T& peripheral_t<STM32F215, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F217, NVIC>::T& peripheral_t<STM32F217, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F215, NVIC_STIR>::T& peripheral_t<STM32F215, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F217, NVIC_STIR>::T& peripheral_t<STM32F217, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F215, PWR>::T& peripheral_t<STM32F215, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F217, PWR>::T& peripheral_t<STM32F217, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F215, RCC>::T& peripheral_t<STM32F215, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, RCC>::T*>(0x40023800);

typename peripheral_t<STM32F217, RCC>::T& peripheral_t<STM32F217, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, RCC>::T*>(0x40023800);

typename peripheral_t<STM32F215, RNG>::T& peripheral_t<STM32F215, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, RNG>::T*>(0x50060800);

typename peripheral_t<STM32F217, RNG>::T& peripheral_t<STM32F217, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, RNG>::T*>(0x50060800);

typename peripheral_t<STM32F215, RTC>::T& peripheral_t<STM32F215, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F217, RTC>::T& peripheral_t<STM32F217, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F215, SCB_ACTRL>::T& peripheral_t<STM32F215, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F217, SCB_ACTRL>::T& peripheral_t<STM32F217, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F215, SCB>::T& peripheral_t<STM32F215, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F217, SCB>::T& peripheral_t<STM32F217, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F215, SDIO>::T& peripheral_t<STM32F215, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32F217, SDIO>::T& peripheral_t<STM32F217, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32F215, SPI1>::T& peripheral_t<STM32F215, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F215, SPI3>::T& peripheral_t<STM32F215, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F215, SPI2>::T& peripheral_t<STM32F215, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F217, SPI1>::T& peripheral_t<STM32F217, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F217, SPI3>::T& peripheral_t<STM32F217, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F217, SPI2>::T& peripheral_t<STM32F217, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F215, STK>::T& peripheral_t<STM32F215, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F217, STK>::T& peripheral_t<STM32F217, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F215, SYSCFG>::T& peripheral_t<STM32F215, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, SYSCFG>::T*>(0x40013800);

typename peripheral_t<STM32F217, SYSCFG>::T& peripheral_t<STM32F217, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, SYSCFG>::T*>(0x40013800);

typename peripheral_t<STM32F215, TIM1>::T& peripheral_t<STM32F215, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32F215, TIM8>::T& peripheral_t<STM32F215, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32F217, TIM1>::T& peripheral_t<STM32F217, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM1>::T*>(0x40010000);

typename peripheral_t<STM32F217, TIM8>::T& peripheral_t<STM32F217, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM8>::T*>(0x40010400);

typename peripheral_t<STM32F215, TIM2>::T& peripheral_t<STM32F215, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F217, TIM2>::T& peripheral_t<STM32F217, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F215, TIM3>::T& peripheral_t<STM32F215, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F215, TIM4>::T& peripheral_t<STM32F215, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F217, TIM3>::T& peripheral_t<STM32F217, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F217, TIM4>::T& peripheral_t<STM32F217, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F215, TIM5>::T& peripheral_t<STM32F215, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F217, TIM5>::T& peripheral_t<STM32F217, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F215, TIM9>::T& peripheral_t<STM32F215, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM9>::T*>(0x40014000);

typename peripheral_t<STM32F215, TIM12>::T& peripheral_t<STM32F215, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F217, TIM9>::T& peripheral_t<STM32F217, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM9>::T*>(0x40014000);

typename peripheral_t<STM32F217, TIM12>::T& peripheral_t<STM32F217, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F215, TIM10>::T& peripheral_t<STM32F215, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM10>::T*>(0x40014400);

typename peripheral_t<STM32F215, TIM11>::T& peripheral_t<STM32F215, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM11>::T*>(0x40014800);

typename peripheral_t<STM32F215, TIM13>::T& peripheral_t<STM32F215, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F215, TIM14>::T& peripheral_t<STM32F215, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F217, TIM10>::T& peripheral_t<STM32F217, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM10>::T*>(0x40014400);

typename peripheral_t<STM32F217, TIM11>::T& peripheral_t<STM32F217, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM11>::T*>(0x40014800);

typename peripheral_t<STM32F217, TIM13>::T& peripheral_t<STM32F217, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F217, TIM14>::T& peripheral_t<STM32F217, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F215, TIM6>::T& peripheral_t<STM32F215, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F215, TIM7>::T& peripheral_t<STM32F215, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F217, TIM6>::T& peripheral_t<STM32F217, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F217, TIM7>::T& peripheral_t<STM32F217, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F215, USART6>::T& peripheral_t<STM32F215, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, USART6>::T*>(0x40011400);

typename peripheral_t<STM32F215, USART1>::T& peripheral_t<STM32F215, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, USART1>::T*>(0x40011000);

typename peripheral_t<STM32F215, USART2>::T& peripheral_t<STM32F215, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F215, USART3>::T& peripheral_t<STM32F215, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F217, USART6>::T& peripheral_t<STM32F217, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, USART6>::T*>(0x40011400);

typename peripheral_t<STM32F217, USART1>::T& peripheral_t<STM32F217, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, USART1>::T*>(0x40011000);

typename peripheral_t<STM32F217, USART2>::T& peripheral_t<STM32F217, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F217, USART3>::T& peripheral_t<STM32F217, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F215, UART4>::T& peripheral_t<STM32F215, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F217, UART4>::T& peripheral_t<STM32F217, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F215, UART5>::T& peripheral_t<STM32F215, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F217, UART5>::T& peripheral_t<STM32F217, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F215, OTG_FS_GLOBAL>::T& peripheral_t<STM32F215, OTG_FS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_FS_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F217, OTG_FS_GLOBAL>::T& peripheral_t<STM32F217, OTG_FS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_FS_GLOBAL>::T*>(0x50000000);

typename peripheral_t<STM32F215, OTG_FS_HOST>::T& peripheral_t<STM32F215, OTG_FS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_FS_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F217, OTG_FS_HOST>::T& peripheral_t<STM32F217, OTG_FS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_FS_HOST>::T*>(0x50000400);

typename peripheral_t<STM32F215, OTG_FS_DEVICE>::T& peripheral_t<STM32F215, OTG_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_FS_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F217, OTG_FS_DEVICE>::T& peripheral_t<STM32F217, OTG_FS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_FS_DEVICE>::T*>(0x50000800);

typename peripheral_t<STM32F215, OTG_FS_PWRCLK>::T& peripheral_t<STM32F215, OTG_FS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_FS_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F217, OTG_FS_PWRCLK>::T& peripheral_t<STM32F217, OTG_FS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_FS_PWRCLK>::T*>(0x50000e00);

typename peripheral_t<STM32F215, OTG_HS_GLOBAL>::T& peripheral_t<STM32F215, OTG_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32F217, OTG_HS_GLOBAL>::T& peripheral_t<STM32F217, OTG_HS_GLOBAL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_HS_GLOBAL>::T*>(0x40040000);

typename peripheral_t<STM32F215, OTG_HS_HOST>::T& peripheral_t<STM32F215, OTG_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32F217, OTG_HS_HOST>::T& peripheral_t<STM32F217, OTG_HS_HOST>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_HS_HOST>::T*>(0x40040400);

typename peripheral_t<STM32F215, OTG_HS_DEVICE>::T& peripheral_t<STM32F215, OTG_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32F217, OTG_HS_DEVICE>::T& peripheral_t<STM32F217, OTG_HS_DEVICE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_HS_DEVICE>::T*>(0x40040800);

typename peripheral_t<STM32F215, OTG_HS_PWRCLK>::T& peripheral_t<STM32F215, OTG_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, OTG_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32F217, OTG_HS_PWRCLK>::T& peripheral_t<STM32F217, OTG_HS_PWRCLK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, OTG_HS_PWRCLK>::T*>(0x40040e00);

typename peripheral_t<STM32F215, WWDG>::T& peripheral_t<STM32F215, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F215, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F217, WWDG>::T& peripheral_t<STM32F217, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F217, WWDG>::T*>(0x40002c00);

