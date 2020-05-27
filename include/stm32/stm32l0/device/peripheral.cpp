#pragma once

////
//
//      STM32L0 peripherals
//
////

typename peripheral_t<STM32L0x0, ADC>::T& peripheral_t<STM32L0x0, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L0x1, ADC>::T& peripheral_t<STM32L0x1, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L0x2, ADC>::T& peripheral_t<STM32L0x2, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L0x3, ADC>::T& peripheral_t<STM32L0x3, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L0x1, AES>::T& peripheral_t<STM32L0x1, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, AES>::T*>(0x40026000);

typename peripheral_t<STM32L0x2, AES>::T& peripheral_t<STM32L0x2, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, AES>::T*>(0x40026000);

typename peripheral_t<STM32L0x3, AES>::T& peripheral_t<STM32L0x3, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, AES>::T*>(0x40026000);

typename peripheral_t<STM32L0x0, CRC>::T& peripheral_t<STM32L0x0, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L0x1, CRC>::T& peripheral_t<STM32L0x1, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L0x2, CRC>::T& peripheral_t<STM32L0x2, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L0x3, CRC>::T& peripheral_t<STM32L0x3, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L0x2, CRS>::T& peripheral_t<STM32L0x2, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, CRS>::T*>(0x40006c00);

typename peripheral_t<STM32L0x3, CRS>::T& peripheral_t<STM32L0x3, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, CRS>::T*>(0x40006c00);

typename peripheral_t<STM32L0x2, DAC>::T& peripheral_t<STM32L0x2, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L0x3, DAC>::T& peripheral_t<STM32L0x3, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L0x0, DBG>::T& peripheral_t<STM32L0x0, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, DBG>::T*>(0x40015800);

typename peripheral_t<STM32L0x1, DBG>::T& peripheral_t<STM32L0x1, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, DBG>::T*>(0x40015800);

typename peripheral_t<STM32L0x2, DBGMCU>::T& peripheral_t<STM32L0x2, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, DBGMCU>::T*>(0x40015800);

typename peripheral_t<STM32L0x3, DBGMCU>::T& peripheral_t<STM32L0x3, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, DBGMCU>::T*>(0x40015800);

typename peripheral_t<STM32L0x0, DMA1>::T& peripheral_t<STM32L0x0, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L0x1, DMA1>::T& peripheral_t<STM32L0x1, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L0x2, DMA1>::T& peripheral_t<STM32L0x2, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L0x3, DMA1>::T& peripheral_t<STM32L0x3, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L0x0, EXTI>::T& peripheral_t<STM32L0x0, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L0x1, EXTI>::T& peripheral_t<STM32L0x1, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L0x2, EXTI>::T& peripheral_t<STM32L0x2, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L0x3, EXTI>::T& peripheral_t<STM32L0x3, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L0x0, FIREWALL>::T& peripheral_t<STM32L0x0, FIREWALL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, FIREWALL>::T*>(0x40011c00);

typename peripheral_t<STM32L0x1, FIREWALL>::T& peripheral_t<STM32L0x1, FIREWALL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, FIREWALL>::T*>(0x40011c00);

typename peripheral_t<STM32L0x2, FIREWALL>::T& peripheral_t<STM32L0x2, FIREWALL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, FIREWALL>::T*>(0x40011c00);

typename peripheral_t<STM32L0x3, FIREWALL>::T& peripheral_t<STM32L0x3, FIREWALL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, FIREWALL>::T*>(0x40011c00);

typename peripheral_t<STM32L0x0, FLASH>::T& peripheral_t<STM32L0x0, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L0x1, FLASH>::T& peripheral_t<STM32L0x1, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L0x2, FLASH>::T& peripheral_t<STM32L0x2, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L0x3, FLASH>::T& peripheral_t<STM32L0x3, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L0x0, GPIOA>::T& peripheral_t<STM32L0x0, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32L0x1, GPIOA>::T& peripheral_t<STM32L0x1, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32L0x2, GPIOA>::T& peripheral_t<STM32L0x2, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32L0x3, GPIOA>::T& peripheral_t<STM32L0x3, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32L0x0, GPIOB>::T& peripheral_t<STM32L0x0, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32L0x0, GPIOC>::T& peripheral_t<STM32L0x0, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32L0x0, GPIOD>::T& peripheral_t<STM32L0x0, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32L0x0, GPIOH>::T& peripheral_t<STM32L0x0, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOH>::T*>(0x50001c00);

typename peripheral_t<STM32L0x0, GPIOE>::T& peripheral_t<STM32L0x0, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, GPIOE>::T*>(0x50001000);

typename peripheral_t<STM32L0x1, GPIOB>::T& peripheral_t<STM32L0x1, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32L0x1, GPIOC>::T& peripheral_t<STM32L0x1, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32L0x1, GPIOD>::T& peripheral_t<STM32L0x1, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32L0x1, GPIOH>::T& peripheral_t<STM32L0x1, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOH>::T*>(0x50001c00);

typename peripheral_t<STM32L0x1, GPIOE>::T& peripheral_t<STM32L0x1, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, GPIOE>::T*>(0x50001000);

typename peripheral_t<STM32L0x2, GPIOB>::T& peripheral_t<STM32L0x2, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32L0x2, GPIOC>::T& peripheral_t<STM32L0x2, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32L0x2, GPIOD>::T& peripheral_t<STM32L0x2, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32L0x2, GPIOH>::T& peripheral_t<STM32L0x2, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOH>::T*>(0x50001c00);

typename peripheral_t<STM32L0x2, GPIOE>::T& peripheral_t<STM32L0x2, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, GPIOE>::T*>(0x50001000);

typename peripheral_t<STM32L0x3, GPIOB>::T& peripheral_t<STM32L0x3, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32L0x3, GPIOC>::T& peripheral_t<STM32L0x3, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32L0x3, GPIOD>::T& peripheral_t<STM32L0x3, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32L0x3, GPIOH>::T& peripheral_t<STM32L0x3, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOH>::T*>(0x50001c00);

typename peripheral_t<STM32L0x3, GPIOE>::T& peripheral_t<STM32L0x3, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, GPIOE>::T*>(0x50001000);

typename peripheral_t<STM32L0x0, I2C1>::T& peripheral_t<STM32L0x0, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L0x1, I2C1>::T& peripheral_t<STM32L0x1, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L0x1, I2C2>::T& peripheral_t<STM32L0x1, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L0x1, I2C3>::T& peripheral_t<STM32L0x1, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32L0x2, I2C1>::T& peripheral_t<STM32L0x2, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L0x2, I2C2>::T& peripheral_t<STM32L0x2, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L0x2, I2C3>::T& peripheral_t<STM32L0x2, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32L0x3, I2C1>::T& peripheral_t<STM32L0x3, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L0x3, I2C2>::T& peripheral_t<STM32L0x3, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L0x3, I2C3>::T& peripheral_t<STM32L0x3, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32L0x0, IWDG>::T& peripheral_t<STM32L0x0, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L0x1, IWDG>::T& peripheral_t<STM32L0x1, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L0x2, IWDG>::T& peripheral_t<STM32L0x2, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L0x3, IWDG>::T& peripheral_t<STM32L0x3, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L0x3, LCD>::T& peripheral_t<STM32L0x3, LCD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, LCD>::T*>(0x40002400);

typename peripheral_t<STM32L0x0, LPTIM>::T& peripheral_t<STM32L0x0, LPTIM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, LPTIM>::T*>(0x40007c00);

typename peripheral_t<STM32L0x1, LPTIM>::T& peripheral_t<STM32L0x1, LPTIM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, LPTIM>::T*>(0x40007c00);

typename peripheral_t<STM32L0x2, LPTIM>::T& peripheral_t<STM32L0x2, LPTIM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, LPTIM>::T*>(0x40007c00);

typename peripheral_t<STM32L0x3, LPTIM>::T& peripheral_t<STM32L0x3, LPTIM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, LPTIM>::T*>(0x40007c00);

typename peripheral_t<STM32L0x0, MPU>::T& peripheral_t<STM32L0x0, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L0x1, MPU>::T& peripheral_t<STM32L0x1, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L0x2, MPU>::T& peripheral_t<STM32L0x2, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L0x3, MPU>::T& peripheral_t<STM32L0x3, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L0x0, NVIC>::T& peripheral_t<STM32L0x0, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L0x1, NVIC>::T& peripheral_t<STM32L0x1, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L0x2, NVIC>::T& peripheral_t<STM32L0x2, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L0x3, NVIC>::T& peripheral_t<STM32L0x3, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L0x0, PWR>::T& peripheral_t<STM32L0x0, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L0x1, PWR>::T& peripheral_t<STM32L0x1, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L0x2, PWR>::T& peripheral_t<STM32L0x2, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L0x3, PWR>::T& peripheral_t<STM32L0x3, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L0x0, RCC>::T& peripheral_t<STM32L0x0, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L0x1, RCC>::T& peripheral_t<STM32L0x1, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L0x2, RCC>::T& peripheral_t<STM32L0x2, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L0x3, RCC>::T& peripheral_t<STM32L0x3, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L0x2, RNG>::T& peripheral_t<STM32L0x2, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, RNG>::T*>(0x40025000);

typename peripheral_t<STM32L0x3, RNG>::T& peripheral_t<STM32L0x3, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, RNG>::T*>(0x40025000);

typename peripheral_t<STM32L0x0, RTC>::T& peripheral_t<STM32L0x0, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L0x1, RTC>::T& peripheral_t<STM32L0x1, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L0x2, RTC>::T& peripheral_t<STM32L0x2, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L0x3, RTC>::T& peripheral_t<STM32L0x3, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L0x0, SCB>::T& peripheral_t<STM32L0x0, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L0x1, SCB>::T& peripheral_t<STM32L0x1, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L0x2, SCB>::T& peripheral_t<STM32L0x2, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L0x3, SCB>::T& peripheral_t<STM32L0x3, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L0x0, SPI1>::T& peripheral_t<STM32L0x0, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L0x1, SPI1>::T& peripheral_t<STM32L0x1, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L0x1, SPI2>::T& peripheral_t<STM32L0x1, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L0x2, SPI1>::T& peripheral_t<STM32L0x2, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L0x2, SPI2>::T& peripheral_t<STM32L0x2, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L0x3, SPI1>::T& peripheral_t<STM32L0x3, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L0x3, SPI2>::T& peripheral_t<STM32L0x3, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L0x0, STK>::T& peripheral_t<STM32L0x0, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L0x1, STK>::T& peripheral_t<STM32L0x1, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L0x2, STK>::T& peripheral_t<STM32L0x2, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L0x3, STK>::T& peripheral_t<STM32L0x3, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L0x0, SYSCFG>::T& peripheral_t<STM32L0x0, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L0x1, SYSCFG_COMP>::T& peripheral_t<STM32L0x1, SYSCFG_COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, SYSCFG_COMP>::T*>(0x40010000);

typename peripheral_t<STM32L0x2, SYSCFG_COMP>::T& peripheral_t<STM32L0x2, SYSCFG_COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, SYSCFG_COMP>::T*>(0x40010000);

typename peripheral_t<STM32L0x3, SYSCFG_COMP>::T& peripheral_t<STM32L0x3, SYSCFG_COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, SYSCFG_COMP>::T*>(0x40010000);

typename peripheral_t<STM32L0x0, TIM2>::T& peripheral_t<STM32L0x0, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L0x1, TIM2>::T& peripheral_t<STM32L0x1, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L0x1, TIM3>::T& peripheral_t<STM32L0x1, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L0x2, TIM2>::T& peripheral_t<STM32L0x2, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L0x2, TIM3>::T& peripheral_t<STM32L0x2, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L0x3, TIM2>::T& peripheral_t<STM32L0x3, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L0x3, TIM3>::T& peripheral_t<STM32L0x3, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L0x0, TIM21>::T& peripheral_t<STM32L0x0, TIM21>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, TIM21>::T*>(0x40010800);

typename peripheral_t<STM32L0x1, TIM21>::T& peripheral_t<STM32L0x1, TIM21>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM21>::T*>(0x40010800);

typename peripheral_t<STM32L0x2, TIM21>::T& peripheral_t<STM32L0x2, TIM21>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM21>::T*>(0x40010800);

typename peripheral_t<STM32L0x3, TIM21>::T& peripheral_t<STM32L0x3, TIM21>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM21>::T*>(0x40010800);

typename peripheral_t<STM32L0x0, TIM22>::T& peripheral_t<STM32L0x0, TIM22>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, TIM22>::T*>(0x40011400);

typename peripheral_t<STM32L0x1, TIM22>::T& peripheral_t<STM32L0x1, TIM22>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM22>::T*>(0x40011400);

typename peripheral_t<STM32L0x2, TIM22>::T& peripheral_t<STM32L0x2, TIM22>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM22>::T*>(0x40011400);

typename peripheral_t<STM32L0x3, TIM22>::T& peripheral_t<STM32L0x3, TIM22>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM22>::T*>(0x40011400);

typename peripheral_t<STM32L0x1, TIM6>::T& peripheral_t<STM32L0x1, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L0x1, TIM7>::T& peripheral_t<STM32L0x1, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L0x2, TIM6>::T& peripheral_t<STM32L0x2, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L0x2, TIM7>::T& peripheral_t<STM32L0x2, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L0x3, TIM6>::T& peripheral_t<STM32L0x3, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L0x3, TIM7>::T& peripheral_t<STM32L0x3, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L0x2, TSC>::T& peripheral_t<STM32L0x2, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, TSC>::T*>(0x40024000);

typename peripheral_t<STM32L0x3, TSC>::T& peripheral_t<STM32L0x3, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, TSC>::T*>(0x40024000);

typename peripheral_t<STM32L0x0, USART2>::T& peripheral_t<STM32L0x0, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L0x1, USART1>::T& peripheral_t<STM32L0x1, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L0x1, USART2>::T& peripheral_t<STM32L0x1, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L0x1, USART4>::T& peripheral_t<STM32L0x1, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32L0x1, USART5>::T& peripheral_t<STM32L0x1, USART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, USART5>::T*>(0x40005000);

typename peripheral_t<STM32L0x2, USART1>::T& peripheral_t<STM32L0x2, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L0x2, USART2>::T& peripheral_t<STM32L0x2, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L0x2, USART4>::T& peripheral_t<STM32L0x2, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32L0x2, USART5>::T& peripheral_t<STM32L0x2, USART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USART5>::T*>(0x40005000);

typename peripheral_t<STM32L0x3, USART1>::T& peripheral_t<STM32L0x3, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L0x3, USART2>::T& peripheral_t<STM32L0x3, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L0x3, USART4>::T& peripheral_t<STM32L0x3, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32L0x3, USART5>::T& peripheral_t<STM32L0x3, USART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USART5>::T*>(0x40005000);

typename peripheral_t<STM32L0x0, LPUART1>::T& peripheral_t<STM32L0x0, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, LPUART1>::T*>(0x40004800);

typename peripheral_t<STM32L0x1, LPUART1>::T& peripheral_t<STM32L0x1, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, LPUART1>::T*>(0x40004800);

typename peripheral_t<STM32L0x2, LPUSART1>::T& peripheral_t<STM32L0x2, LPUSART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, LPUSART1>::T*>(0x40004800);

typename peripheral_t<STM32L0x3, LPUSART1>::T& peripheral_t<STM32L0x3, LPUSART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, LPUSART1>::T*>(0x40004800);

typename peripheral_t<STM32L0x2, USB_FS>::T& peripheral_t<STM32L0x2, USB_FS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USB_FS>::T*>(0x40005c00);

typename peripheral_t<STM32L0x3, USB_FS>::T& peripheral_t<STM32L0x3, USB_FS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USB_FS>::T*>(0x40005c00);

typename peripheral_t<STM32L0x2, USB_SRAM>::T& peripheral_t<STM32L0x2, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L0x3, USB_SRAM>::T& peripheral_t<STM32L0x3, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L0x0, WWDG>::T& peripheral_t<STM32L0x0, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x0, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L0x1, WWDG>::T& peripheral_t<STM32L0x1, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x1, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L0x2, WWDG>::T& peripheral_t<STM32L0x2, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x2, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L0x3, WWDG>::T& peripheral_t<STM32L0x3, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L0x3, WWDG>::T*>(0x40002c00);

