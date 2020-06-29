#pragma once

////
//
//      STM32F0 peripheral instances
//
///

typename peripheral_t<STM32F0x0, ADC>::T&
    peripheral_t<STM32F0x0, ADC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, ADC>::T*
        >(0x40012400);

typename peripheral_t<STM32F0x1, ADC>::T&
    peripheral_t<STM32F0x1, ADC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, ADC>::T*
        >(0x40012400);

typename peripheral_t<STM32F0x2, ADC>::T&
    peripheral_t<STM32F0x2, ADC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, ADC>::T*
        >(0x40012400);

typename peripheral_t<STM32F0x8, ADC>::T&
    peripheral_t<STM32F0x8, ADC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, ADC>::T*
        >(0x40012400);

typename peripheral_t<STM32F0x1, CAN>::T&
    peripheral_t<STM32F0x1, CAN>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, CAN>::T*
        >(0x40006400);

typename peripheral_t<STM32F0x2, CAN>::T&
    peripheral_t<STM32F0x2, CAN>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, CAN>::T*
        >(0x40006400);

typename peripheral_t<STM32F0x8, CAN>::T&
    peripheral_t<STM32F0x8, CAN>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, CAN>::T*
        >(0x40006400);

typename peripheral_t<STM32F0x1, HDMI_CEC>::T&
    peripheral_t<STM32F0x1, HDMI_CEC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, HDMI_CEC>::T*
        >(0x40007800);

typename peripheral_t<STM32F0x2, HDMI_CEC>::T&
    peripheral_t<STM32F0x2, HDMI_CEC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, HDMI_CEC>::T*
        >(0x40007800);

typename peripheral_t<STM32F0x8, HDMI_CEC>::T&
    peripheral_t<STM32F0x8, HDMI_CEC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, HDMI_CEC>::T*
        >(0x40007800);

typename peripheral_t<STM32F0x0, CRC>::T&
    peripheral_t<STM32F0x0, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32F0x1, CRC>::T&
    peripheral_t<STM32F0x1, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32F0x2, CRC>::T&
    peripheral_t<STM32F0x2, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32F0x8, CRC>::T&
    peripheral_t<STM32F0x8, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32F0x1, CRS>::T&
    peripheral_t<STM32F0x1, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, CRS>::T*
        >(0x40006c00);

typename peripheral_t<STM32F0x2, CRS>::T&
    peripheral_t<STM32F0x2, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, CRS>::T*
        >(0x40006c00);

typename peripheral_t<STM32F0x8, CRS>::T&
    peripheral_t<STM32F0x8, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, CRS>::T*
        >(0x40006c00);

typename peripheral_t<STM32F0x1, DAC1>::T&
    peripheral_t<STM32F0x1, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32F0x2, DAC1>::T&
    peripheral_t<STM32F0x2, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32F0x8, DAC1>::T&
    peripheral_t<STM32F0x8, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, DAC1>::T*
        >(0x40007400);

typename peripheral_t<STM32F0x0, DBGMCU>::T&
    peripheral_t<STM32F0x0, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, DBGMCU>::T*
        >(0x40015800);

typename peripheral_t<STM32F0x1, DBGMCU>::T&
    peripheral_t<STM32F0x1, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, DBGMCU>::T*
        >(0x40015800);

typename peripheral_t<STM32F0x2, DBGMCU>::T&
    peripheral_t<STM32F0x2, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, DBGMCU>::T*
        >(0x40015800);

typename peripheral_t<STM32F0x8, DBGMCU>::T&
    peripheral_t<STM32F0x8, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, DBGMCU>::T*
        >(0x40015800);

typename peripheral_t<STM32F0x0, DMA1>::T&
    peripheral_t<STM32F0x0, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32F0x1, DMA1>::T&
    peripheral_t<STM32F0x1, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32F0x1, DMA2>::T&
    peripheral_t<STM32F0x1, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32F0x2, DMA1>::T&
    peripheral_t<STM32F0x2, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32F0x8, DMA1>::T&
    peripheral_t<STM32F0x8, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32F0x8, DMA2>::T&
    peripheral_t<STM32F0x8, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32F0x0, EXTI>::T&
    peripheral_t<STM32F0x0, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32F0x1, EXTI>::T&
    peripheral_t<STM32F0x1, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32F0x8, EXTI>::T&
    peripheral_t<STM32F0x8, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32F0x2, EXTI>::T&
    peripheral_t<STM32F0x2, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, EXTI>::T*
        >(0x40010400);

typename peripheral_t<STM32F0x0, FLASH>::T&
    peripheral_t<STM32F0x0, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32F0x1, FLASH>::T&
    peripheral_t<STM32F0x1, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32F0x2, FLASH>::T&
    peripheral_t<STM32F0x2, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32F0x8, FLASH>::T&
    peripheral_t<STM32F0x8, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32F0x0, GPIOA>::T&
    peripheral_t<STM32F0x0, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32F0x1, GPIOA>::T&
    peripheral_t<STM32F0x1, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32F0x2, GPIOA>::T&
    peripheral_t<STM32F0x2, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32F0x8, GPIOA>::T&
    peripheral_t<STM32F0x8, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32F0x0, GPIOB>::T&
    peripheral_t<STM32F0x0, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32F0x0, GPIOC>::T&
    peripheral_t<STM32F0x0, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32F0x0, GPIOD>::T&
    peripheral_t<STM32F0x0, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32F0x0, GPIOF>::T&
    peripheral_t<STM32F0x0, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32F0x1, GPIOB>::T&
    peripheral_t<STM32F0x1, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32F0x1, GPIOC>::T&
    peripheral_t<STM32F0x1, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32F0x1, GPIOD>::T&
    peripheral_t<STM32F0x1, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32F0x1, GPIOE>::T&
    peripheral_t<STM32F0x1, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32F0x1, GPIOF>::T&
    peripheral_t<STM32F0x1, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32F0x2, GPIOB>::T&
    peripheral_t<STM32F0x2, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32F0x2, GPIOC>::T&
    peripheral_t<STM32F0x2, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32F0x2, GPIOD>::T&
    peripheral_t<STM32F0x2, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32F0x2, GPIOE>::T&
    peripheral_t<STM32F0x2, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32F0x2, GPIOF>::T&
    peripheral_t<STM32F0x2, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32F0x8, GPIOB>::T&
    peripheral_t<STM32F0x8, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32F0x8, GPIOC>::T&
    peripheral_t<STM32F0x8, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32F0x8, GPIOD>::T&
    peripheral_t<STM32F0x8, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32F0x8, GPIOE>::T&
    peripheral_t<STM32F0x8, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32F0x8, GPIOF>::T&
    peripheral_t<STM32F0x8, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, GPIOF>::T*
        >(0x48001400);

typename peripheral_t<STM32F0x0, I2C1>::T&
    peripheral_t<STM32F0x0, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32F0x0, I2C2>::T&
    peripheral_t<STM32F0x0, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32F0x1, I2C1>::T&
    peripheral_t<STM32F0x1, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32F0x1, I2C2>::T&
    peripheral_t<STM32F0x1, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32F0x2, I2C1>::T&
    peripheral_t<STM32F0x2, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32F0x2, I2C2>::T&
    peripheral_t<STM32F0x2, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32F0x8, I2C1>::T&
    peripheral_t<STM32F0x8, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32F0x8, I2C2>::T&
    peripheral_t<STM32F0x8, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32F0x0, IWDG>::T&
    peripheral_t<STM32F0x0, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32F0x1, IWDG>::T&
    peripheral_t<STM32F0x1, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32F0x2, IWDG>::T&
    peripheral_t<STM32F0x2, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32F0x8, IWDG>::T&
    peripheral_t<STM32F0x8, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32F0x0, NVIC>::T&
    peripheral_t<STM32F0x0, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32F0x1, NVIC>::T&
    peripheral_t<STM32F0x1, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32F0x2, NVIC>::T&
    peripheral_t<STM32F0x2, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32F0x8, NVIC>::T&
    peripheral_t<STM32F0x8, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32F0x0, PWR>::T&
    peripheral_t<STM32F0x0, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32F0x1, PWR>::T&
    peripheral_t<STM32F0x1, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32F0x2, PWR>::T&
    peripheral_t<STM32F0x2, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32F0x8, PWR>::T&
    peripheral_t<STM32F0x8, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, PWR>::T*
        >(0x40007000);

typename peripheral_t<STM32F0x0, RCC>::T&
    peripheral_t<STM32F0x0, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32F0x1, RCC>::T&
    peripheral_t<STM32F0x1, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32F0x2, RCC>::T&
    peripheral_t<STM32F0x2, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32F0x8, RCC>::T&
    peripheral_t<STM32F0x8, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, RCC>::T*
        >(0x40021000);

typename peripheral_t<STM32F0x0, RTC>::T&
    peripheral_t<STM32F0x0, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32F0x1, RTC>::T&
    peripheral_t<STM32F0x1, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32F0x2, RTC>::T&
    peripheral_t<STM32F0x2, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32F0x8, RTC>::T&
    peripheral_t<STM32F0x8, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32F0x0, SCB>::T&
    peripheral_t<STM32F0x0, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32F0x1, SCB>::T&
    peripheral_t<STM32F0x1, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32F0x2, SCB>::T&
    peripheral_t<STM32F0x2, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32F0x8, SCB>::T&
    peripheral_t<STM32F0x8, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32F0x0, SPI1>::T&
    peripheral_t<STM32F0x0, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32F0x0, SPI2>::T&
    peripheral_t<STM32F0x0, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32F0x2, SPI1>::T&
    peripheral_t<STM32F0x2, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32F0x2, SPI2>::T&
    peripheral_t<STM32F0x2, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32F0x8, SPI1>::T&
    peripheral_t<STM32F0x8, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32F0x8, SPI2>::T&
    peripheral_t<STM32F0x8, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32F0x1, SPI1>::T&
    peripheral_t<STM32F0x1, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32F0x1, SPI2>::T&
    peripheral_t<STM32F0x1, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32F0x0, STK>::T&
    peripheral_t<STM32F0x0, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32F0x1, STK>::T&
    peripheral_t<STM32F0x1, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32F0x2, STK>::T&
    peripheral_t<STM32F0x2, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32F0x8, STK>::T&
    peripheral_t<STM32F0x8, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32F0x0, SYSCFG>::T&
    peripheral_t<STM32F0x0, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32F0x1, SYSCFG_COMP>::T&
    peripheral_t<STM32F0x1, SYSCFG_COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, SYSCFG_COMP>::T*
        >(0x40010000);

typename peripheral_t<STM32F0x2, SYSCFG_COMP>::T&
    peripheral_t<STM32F0x2, SYSCFG_COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, SYSCFG_COMP>::T*
        >(0x40010000);

typename peripheral_t<STM32F0x8, SYSCFG_COMP>::T&
    peripheral_t<STM32F0x8, SYSCFG_COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, SYSCFG_COMP>::T*
        >(0x40010000);

typename peripheral_t<STM32F0x0, TIM1>::T&
    peripheral_t<STM32F0x0, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32F0x1, TIM1>::T&
    peripheral_t<STM32F0x1, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32F0x2, TIM1>::T&
    peripheral_t<STM32F0x2, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32F0x8, TIM1>::T&
    peripheral_t<STM32F0x8, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32F0x0, TIM3>::T&
    peripheral_t<STM32F0x0, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32F0x1, TIM2>::T&
    peripheral_t<STM32F0x1, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32F0x1, TIM3>::T&
    peripheral_t<STM32F0x1, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32F0x2, TIM2>::T&
    peripheral_t<STM32F0x2, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32F0x2, TIM3>::T&
    peripheral_t<STM32F0x2, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32F0x8, TIM2>::T&
    peripheral_t<STM32F0x8, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32F0x8, TIM3>::T&
    peripheral_t<STM32F0x8, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32F0x0, TIM6>::T&
    peripheral_t<STM32F0x0, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32F0x0, TIM7>::T&
    peripheral_t<STM32F0x0, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32F0x1, TIM6>::T&
    peripheral_t<STM32F0x1, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32F0x1, TIM7>::T&
    peripheral_t<STM32F0x1, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32F0x2, TIM6>::T&
    peripheral_t<STM32F0x2, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32F0x2, TIM7>::T&
    peripheral_t<STM32F0x2, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32F0x8, TIM6>::T&
    peripheral_t<STM32F0x8, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32F0x8, TIM7>::T&
    peripheral_t<STM32F0x8, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32F0x0, TIM14>::T&
    peripheral_t<STM32F0x0, TIM14>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM14>::T*
        >(0x40002000);

typename peripheral_t<STM32F0x1, TIM14>::T&
    peripheral_t<STM32F0x1, TIM14>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM14>::T*
        >(0x40002000);

typename peripheral_t<STM32F0x2, TIM14>::T&
    peripheral_t<STM32F0x2, TIM14>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM14>::T*
        >(0x40002000);

typename peripheral_t<STM32F0x8, TIM14>::T&
    peripheral_t<STM32F0x8, TIM14>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM14>::T*
        >(0x40002000);

typename peripheral_t<STM32F0x0, TIM15>::T&
    peripheral_t<STM32F0x0, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32F0x1, TIM15>::T&
    peripheral_t<STM32F0x1, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32F0x2, TIM15>::T&
    peripheral_t<STM32F0x2, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32F0x8, TIM15>::T&
    peripheral_t<STM32F0x8, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32F0x0, TIM16>::T&
    peripheral_t<STM32F0x0, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32F0x0, TIM17>::T&
    peripheral_t<STM32F0x0, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32F0x1, TIM16>::T&
    peripheral_t<STM32F0x1, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32F0x1, TIM17>::T&
    peripheral_t<STM32F0x1, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32F0x2, TIM16>::T&
    peripheral_t<STM32F0x2, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32F0x2, TIM17>::T&
    peripheral_t<STM32F0x2, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32F0x8, TIM16>::T&
    peripheral_t<STM32F0x8, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32F0x8, TIM17>::T&
    peripheral_t<STM32F0x8, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32F0x1, TSC>::T&
    peripheral_t<STM32F0x1, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32F0x2, TSC>::T&
    peripheral_t<STM32F0x2, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32F0x8, TSC>::T&
    peripheral_t<STM32F0x8, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32F0x0, USART1>::T&
    peripheral_t<STM32F0x0, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32F0x0, USART2>::T&
    peripheral_t<STM32F0x0, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32F0x0, USART3>::T&
    peripheral_t<STM32F0x0, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32F0x0, USART4>::T&
    peripheral_t<STM32F0x0, USART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32F0x0, USART5>::T&
    peripheral_t<STM32F0x0, USART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART5>::T*
        >(0x40005000);

typename peripheral_t<STM32F0x0, USART6>::T&
    peripheral_t<STM32F0x0, USART6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USART6>::T*
        >(0x40011400);

typename peripheral_t<STM32F0x1, USART1>::T&
    peripheral_t<STM32F0x1, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32F0x1, USART2>::T&
    peripheral_t<STM32F0x1, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32F0x1, USART3>::T&
    peripheral_t<STM32F0x1, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32F0x1, USART4>::T&
    peripheral_t<STM32F0x1, USART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32F0x1, USART5>::T&
    peripheral_t<STM32F0x1, USART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART5>::T*
        >(0x40005000);

typename peripheral_t<STM32F0x1, USART6>::T&
    peripheral_t<STM32F0x1, USART6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART6>::T*
        >(0x40011400);

typename peripheral_t<STM32F0x1, USART7>::T&
    peripheral_t<STM32F0x1, USART7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART7>::T*
        >(0x40011800);

typename peripheral_t<STM32F0x1, USART8>::T&
    peripheral_t<STM32F0x1, USART8>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USART8>::T*
        >(0x40011c00);

typename peripheral_t<STM32F0x2, USART1>::T&
    peripheral_t<STM32F0x2, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32F0x2, USART2>::T&
    peripheral_t<STM32F0x2, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32F0x2, USART3>::T&
    peripheral_t<STM32F0x2, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32F0x2, USART4>::T&
    peripheral_t<STM32F0x2, USART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, USART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32F0x8, USART1>::T&
    peripheral_t<STM32F0x8, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32F0x8, USART2>::T&
    peripheral_t<STM32F0x8, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32F0x8, USART3>::T&
    peripheral_t<STM32F0x8, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32F0x8, USART4>::T&
    peripheral_t<STM32F0x8, USART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32F0x8, USART5>::T&
    peripheral_t<STM32F0x8, USART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART5>::T*
        >(0x40005000);

typename peripheral_t<STM32F0x8, USART6>::T&
    peripheral_t<STM32F0x8, USART6>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART6>::T*
        >(0x40011400);

typename peripheral_t<STM32F0x8, USART7>::T&
    peripheral_t<STM32F0x8, USART7>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART7>::T*
        >(0x40011800);

typename peripheral_t<STM32F0x8, USART8>::T&
    peripheral_t<STM32F0x8, USART8>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USART8>::T*
        >(0x40011c00);

typename peripheral_t<STM32F0x0, USB>::T&
    peripheral_t<STM32F0x0, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, USB>::T*
        >(0x40005c00);

typename peripheral_t<STM32F0x1, USB>::T&
    peripheral_t<STM32F0x1, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, USB>::T*
        >(0x40005c00);

typename peripheral_t<STM32F0x2, USB>::T&
    peripheral_t<STM32F0x2, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, USB>::T*
        >(0x40005c00);

typename peripheral_t<STM32F0x8, USB>::T&
    peripheral_t<STM32F0x8, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, USB>::T*
        >(0x40005c00);

typename peripheral_t<STM32F0x0, WWDG>::T&
    peripheral_t<STM32F0x0, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x0, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32F0x1, WWDG>::T&
    peripheral_t<STM32F0x1, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x1, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32F0x2, WWDG>::T&
    peripheral_t<STM32F0x2, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x2, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32F0x8, WWDG>::T&
    peripheral_t<STM32F0x8, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32F0x8, WWDG>::T*
        >(0x40002c00);

