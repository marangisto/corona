#pragma once

////
//
//      STM32WL peripheral instances
//
///

typename peripheral_t<STM32WL5x_CM0P, TIM1>::T&
    peripheral_t<STM32WL5x_CM0P, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WL5x_CM4, TIM1>::T&
    peripheral_t<STM32WL5x_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WLE5_CM4, TIM1>::T&
    peripheral_t<STM32WLE5_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WL5x_CM0P, ADC1>::T&
    peripheral_t<STM32WL5x_CM0P, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, ADC1>::T*
        >(0x40012400);

typename peripheral_t<STM32WL5x_CM4, ADC1>::T&
    peripheral_t<STM32WL5x_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, ADC1>::T*
        >(0x40012400);

typename peripheral_t<STM32WLE5_CM4, ADC1>::T&
    peripheral_t<STM32WLE5_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, ADC1>::T*
        >(0x40012400);

typename peripheral_t<STM32WL5x_CM0P, AES>::T&
    peripheral_t<STM32WL5x_CM0P, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, AES>::T*
        >(0x58001800);

typename peripheral_t<STM32WL5x_CM4, AES>::T&
    peripheral_t<STM32WL5x_CM4, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, AES>::T*
        >(0x58001800);

typename peripheral_t<STM32WLE5_CM4, AES>::T&
    peripheral_t<STM32WLE5_CM4, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, AES>::T*
        >(0x58001800);

typename peripheral_t<STM32WL5x_CM0P, COMP>::T&
    peripheral_t<STM32WL5x_CM0P, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WL5x_CM4, COMP>::T&
    peripheral_t<STM32WL5x_CM4, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WLE5_CM4, COMP>::T&
    peripheral_t<STM32WLE5_CM4, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WL5x_CM0P, CRC>::T&
    peripheral_t<STM32WL5x_CM0P, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WL5x_CM4, CRC>::T&
    peripheral_t<STM32WL5x_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WLE5_CM4, CRC>::T&
    peripheral_t<STM32WLE5_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WL5x_CM0P, DAC1>::T&
    peripheral_t<STM32WL5x_CM0P, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32WL5x_CM4, DAC1>::T&
    peripheral_t<STM32WL5x_CM4, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32WLE5_CM4, DAC1>::T&
    peripheral_t<STM32WLE5_CM4, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32WL5x_CM4, DBGMCU>::T&
    peripheral_t<STM32WL5x_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WLE5_CM4, DBGMCU>::T&
    peripheral_t<STM32WLE5_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WL5x_CM0P, DMA1>::T&
    peripheral_t<STM32WL5x_CM0P, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WL5x_CM0P, DMA2>::T&
    peripheral_t<STM32WL5x_CM0P, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WL5x_CM4, DMA1>::T&
    peripheral_t<STM32WL5x_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WL5x_CM4, DMA2>::T&
    peripheral_t<STM32WL5x_CM4, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WLE5_CM4, DMA1>::T&
    peripheral_t<STM32WLE5_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WLE5_CM4, DMA2>::T&
    peripheral_t<STM32WLE5_CM4, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WL5x_CM0P, DMAMUX>::T&
    peripheral_t<STM32WL5x_CM0P, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WL5x_CM4, DMAMUX>::T&
    peripheral_t<STM32WL5x_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WLE5_CM4, DMAMUX>::T&
    peripheral_t<STM32WLE5_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WL5x_CM0P, EXTI>::T&
    peripheral_t<STM32WL5x_CM0P, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WL5x_CM4, EXTI>::T&
    peripheral_t<STM32WL5x_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WLE5_CM4, EXTI>::T&
    peripheral_t<STM32WLE5_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WL5x_CM0P, FLASH>::T&
    peripheral_t<STM32WL5x_CM0P, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WL5x_CM4, FLASH>::T&
    peripheral_t<STM32WL5x_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WLE5_CM4, FLASH>::T&
    peripheral_t<STM32WLE5_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WL5x_CM0P, GPIOA>::T&
    peripheral_t<STM32WL5x_CM0P, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WL5x_CM4, GPIOA>::T&
    peripheral_t<STM32WL5x_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WLE5_CM4, GPIOA>::T&
    peripheral_t<STM32WLE5_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WL5x_CM0P, GPIOB>::T&
    peripheral_t<STM32WL5x_CM0P, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WL5x_CM4, GPIOB>::T&
    peripheral_t<STM32WL5x_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WLE5_CM4, GPIOB>::T&
    peripheral_t<STM32WLE5_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WL5x_CM0P, GPIOC>::T&
    peripheral_t<STM32WL5x_CM0P, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WL5x_CM4, GPIOC>::T&
    peripheral_t<STM32WL5x_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WLE5_CM4, GPIOC>::T&
    peripheral_t<STM32WLE5_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WL5x_CM0P, GPIOH>::T&
    peripheral_t<STM32WL5x_CM0P, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WL5x_CM4, GPIOH>::T&
    peripheral_t<STM32WL5x_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WLE5_CM4, GPIOH>::T&
    peripheral_t<STM32WLE5_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WL5x_CM0P, TIM2>::T&
    peripheral_t<STM32WL5x_CM0P, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WL5x_CM4, TIM2>::T&
    peripheral_t<STM32WL5x_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WLE5_CM4, TIM2>::T&
    peripheral_t<STM32WLE5_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WL5x_CM0P, TIM16>::T&
    peripheral_t<STM32WL5x_CM0P, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WL5x_CM4, TIM16>::T&
    peripheral_t<STM32WL5x_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WLE5_CM4, TIM16>::T&
    peripheral_t<STM32WLE5_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WL5x_CM0P, TIM17>::T&
    peripheral_t<STM32WL5x_CM0P, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WL5x_CM4, TIM17>::T&
    peripheral_t<STM32WL5x_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WLE5_CM4, TIM17>::T&
    peripheral_t<STM32WLE5_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WL5x_CM0P, HSEM>::T&
    peripheral_t<STM32WL5x_CM0P, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WL5x_CM4, HSEM>::T&
    peripheral_t<STM32WL5x_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WLE5_CM4, HSEM>::T&
    peripheral_t<STM32WLE5_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WL5x_CM0P, I2C1>::T&
    peripheral_t<STM32WL5x_CM0P, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WL5x_CM0P, I2C2>::T&
    peripheral_t<STM32WL5x_CM0P, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32WL5x_CM0P, I2C3>::T&
    peripheral_t<STM32WL5x_CM0P, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32WL5x_CM4, I2C1>::T&
    peripheral_t<STM32WL5x_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WL5x_CM4, I2C2>::T&
    peripheral_t<STM32WL5x_CM4, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32WL5x_CM4, I2C3>::T&
    peripheral_t<STM32WL5x_CM4, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32WLE5_CM4, I2C1>::T&
    peripheral_t<STM32WLE5_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WLE5_CM4, I2C2>::T&
    peripheral_t<STM32WLE5_CM4, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32WLE5_CM4, I2C3>::T&
    peripheral_t<STM32WLE5_CM4, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32WL5x_CM0P, IPCC>::T&
    peripheral_t<STM32WL5x_CM0P, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WL5x_CM4, IPCC>::T&
    peripheral_t<STM32WL5x_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WL5x_CM0P, IWDG>::T&
    peripheral_t<STM32WL5x_CM0P, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WL5x_CM4, IWDG>::T&
    peripheral_t<STM32WL5x_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WLE5_CM4, IWDG>::T&
    peripheral_t<STM32WLE5_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WL5x_CM0P, LPTIM1>::T&
    peripheral_t<STM32WL5x_CM0P, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WL5x_CM4, LPTIM1>::T&
    peripheral_t<STM32WL5x_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WLE5_CM4, LPTIM1>::T&
    peripheral_t<STM32WLE5_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WL5x_CM0P, LPTIM2>::T&
    peripheral_t<STM32WL5x_CM0P, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WL5x_CM4, LPTIM2>::T&
    peripheral_t<STM32WL5x_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WLE5_CM4, LPTIM2>::T&
    peripheral_t<STM32WLE5_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WL5x_CM0P, LPTIM3>::T&
    peripheral_t<STM32WL5x_CM0P, LPTIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, LPTIM3>::T*
        >(0x40009800);

typename peripheral_t<STM32WL5x_CM4, LPTIM3>::T&
    peripheral_t<STM32WL5x_CM4, LPTIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, LPTIM3>::T*
        >(0x40009800);

typename peripheral_t<STM32WLE5_CM4, LPTIM3>::T&
    peripheral_t<STM32WLE5_CM4, LPTIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, LPTIM3>::T*
        >(0x40009800);

typename peripheral_t<STM32WL5x_CM0P, LPUART1>::T&
    peripheral_t<STM32WL5x_CM0P, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WL5x_CM4, LPUART1>::T&
    peripheral_t<STM32WL5x_CM4, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WLE5_CM4, LPUART1>::T&
    peripheral_t<STM32WLE5_CM4, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WL5x_CM0P, MPU>::T&
    peripheral_t<STM32WL5x_CM0P, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WL5x_CM4, MPU>::T&
    peripheral_t<STM32WL5x_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WLE5_CM4, MPU>::T&
    peripheral_t<STM32WLE5_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WL5x_CM0P, NVIC>::T&
    peripheral_t<STM32WL5x_CM0P, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WL5x_CM4, NVIC>::T&
    peripheral_t<STM32WL5x_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WLE5_CM4, NVIC>::T&
    peripheral_t<STM32WLE5_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WL5x_CM0P, NVIC_STIR>::T&
    peripheral_t<STM32WL5x_CM0P, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WL5x_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WL5x_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WLE5_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WLE5_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WL5x_CM0P, PKA>::T&
    peripheral_t<STM32WL5x_CM0P, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WL5x_CM4, PKA>::T&
    peripheral_t<STM32WL5x_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WLE5_CM4, PKA>::T&
    peripheral_t<STM32WLE5_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WL5x_CM0P, PWR>::T&
    peripheral_t<STM32WL5x_CM0P, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WL5x_CM4, PWR>::T&
    peripheral_t<STM32WL5x_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WLE5_CM4, PWR>::T&
    peripheral_t<STM32WLE5_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WL5x_CM0P, RCC>::T&
    peripheral_t<STM32WL5x_CM0P, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WL5x_CM4, RCC>::T&
    peripheral_t<STM32WL5x_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WLE5_CM4, RCC>::T&
    peripheral_t<STM32WLE5_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WL5x_CM0P, RNG>::T&
    peripheral_t<STM32WL5x_CM0P, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WL5x_CM4, RNG>::T&
    peripheral_t<STM32WL5x_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WLE5_CM4, RNG>::T&
    peripheral_t<STM32WLE5_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WL5x_CM0P, RTC>::T&
    peripheral_t<STM32WL5x_CM0P, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WL5x_CM4, RTC>::T&
    peripheral_t<STM32WL5x_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WLE5_CM4, RTC>::T&
    peripheral_t<STM32WLE5_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WL5x_CM0P, SCB>::T&
    peripheral_t<STM32WL5x_CM0P, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32WL5x_CM4, SCB>::T&
    peripheral_t<STM32WL5x_CM4, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32WLE5_CM4, SCB>::T&
    peripheral_t<STM32WLE5_CM4, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32WL5x_CM0P, SCB_ACTRL>::T&
    peripheral_t<STM32WL5x_CM0P, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WL5x_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WL5x_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WLE5_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WLE5_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WL5x_CM0P, SPI1>::T&
    peripheral_t<STM32WL5x_CM0P, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WL5x_CM0P, SPI2>::T&
    peripheral_t<STM32WL5x_CM0P, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32WL5x_CM0P, SPI3>::T&
    peripheral_t<STM32WL5x_CM0P, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SPI3>::T*
        >(0x58010000);

typename peripheral_t<STM32WL5x_CM4, SPI1>::T&
    peripheral_t<STM32WL5x_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WL5x_CM4, SPI2>::T&
    peripheral_t<STM32WL5x_CM4, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32WL5x_CM4, SPI3>::T&
    peripheral_t<STM32WL5x_CM4, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SPI3>::T*
        >(0x58010000);

typename peripheral_t<STM32WLE5_CM4, SPI1>::T&
    peripheral_t<STM32WLE5_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WLE5_CM4, SPI2>::T&
    peripheral_t<STM32WLE5_CM4, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32WLE5_CM4, SPI3>::T&
    peripheral_t<STM32WLE5_CM4, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SPI3>::T*
        >(0x58010000);

typename peripheral_t<STM32WL5x_CM0P, STK>::T&
    peripheral_t<STM32WL5x_CM0P, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32WL5x_CM4, STK>::T&
    peripheral_t<STM32WL5x_CM4, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32WLE5_CM4, STK>::T&
    peripheral_t<STM32WLE5_CM4, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32WL5x_CM0P, SYSCFG>::T&
    peripheral_t<STM32WL5x_CM0P, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WL5x_CM4, SYSCFG>::T&
    peripheral_t<STM32WL5x_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WLE5_CM4, SYSCFG>::T&
    peripheral_t<STM32WLE5_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WL5x_CM0P, SYSCFG_CONTINUE>::T&
    peripheral_t<STM32WL5x_CM0P, SYSCFG_CONTINUE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, SYSCFG_CONTINUE>::T*
        >(0x40010100);

typename peripheral_t<STM32WL5x_CM4, SYSCFG_CONTINUE>::T&
    peripheral_t<STM32WL5x_CM4, SYSCFG_CONTINUE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, SYSCFG_CONTINUE>::T*
        >(0x40010100);

typename peripheral_t<STM32WLE5_CM4, SYSCFG_CONTINUE>::T&
    peripheral_t<STM32WLE5_CM4, SYSCFG_CONTINUE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, SYSCFG_CONTINUE>::T*
        >(0x40010100);

typename peripheral_t<STM32WL5x_CM0P, TAMP>::T&
    peripheral_t<STM32WL5x_CM0P, TAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TAMP>::T*
        >(0x4000b000);

typename peripheral_t<STM32WL5x_CM4, TAMP>::T&
    peripheral_t<STM32WL5x_CM4, TAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TAMP>::T*
        >(0x4000b000);

typename peripheral_t<STM32WLE5_CM4, TAMP>::T&
    peripheral_t<STM32WLE5_CM4, TAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, TAMP>::T*
        >(0x4000b000);

typename peripheral_t<STM32WL5x_CM0P, TZIC>::T&
    peripheral_t<STM32WL5x_CM0P, TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TZIC>::T*
        >(0x58004800);

typename peripheral_t<STM32WL5x_CM4, TZIC>::T&
    peripheral_t<STM32WL5x_CM4, TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TZIC>::T*
        >(0x58004800);

typename peripheral_t<STM32WL5x_CM0P, TZSC>::T&
    peripheral_t<STM32WL5x_CM0P, TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, TZSC>::T*
        >(0x58004400);

typename peripheral_t<STM32WL5x_CM4, TZSC>::T&
    peripheral_t<STM32WL5x_CM4, TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, TZSC>::T*
        >(0x58004400);

typename peripheral_t<STM32WL5x_CM0P, USART1>::T&
    peripheral_t<STM32WL5x_CM0P, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WL5x_CM0P, USART2>::T&
    peripheral_t<STM32WL5x_CM0P, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32WL5x_CM4, USART1>::T&
    peripheral_t<STM32WL5x_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WL5x_CM4, USART2>::T&
    peripheral_t<STM32WL5x_CM4, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32WLE5_CM4, USART1>::T&
    peripheral_t<STM32WLE5_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WLE5_CM4, USART2>::T&
    peripheral_t<STM32WLE5_CM4, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32WL5x_CM0P, VREFBUF>::T&
    peripheral_t<STM32WL5x_CM0P, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32WL5x_CM4, VREFBUF>::T&
    peripheral_t<STM32WL5x_CM4, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32WLE5_CM4, VREFBUF>::T&
    peripheral_t<STM32WLE5_CM4, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, VREFBUF>::T*
        >(0x40010030);

typename peripheral_t<STM32WL5x_CM0P, WWDG>::T&
    peripheral_t<STM32WL5x_CM0P, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM0P, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WL5x_CM4, WWDG>::T&
    peripheral_t<STM32WL5x_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WL5x_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WLE5_CM4, WWDG>::T&
    peripheral_t<STM32WLE5_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WLE5_CM4, WWDG>::T*
        >(0x40002c00);

