#pragma once

////
//
//      STM32L1 peripherals
//
////

typename peripheral_t<STM32L100, ADC>::T& peripheral_t<STM32L100, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L151, ADC>::T& peripheral_t<STM32L151, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L152, ADC>::T& peripheral_t<STM32L152, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L162, ADC>::T& peripheral_t<STM32L162, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, ADC>::T*>(0x40012400);

typename peripheral_t<STM32L100, AES>::T& peripheral_t<STM32L100, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, AES>::T*>(0x50060000);

typename peripheral_t<STM32L151, AES>::T& peripheral_t<STM32L151, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, AES>::T*>(0x50060000);

typename peripheral_t<STM32L152, AES>::T& peripheral_t<STM32L152, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, AES>::T*>(0x50060000);

typename peripheral_t<STM32L162, AES>::T& peripheral_t<STM32L162, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, AES>::T*>(0x50060000);

typename peripheral_t<STM32L100, COMP>::T& peripheral_t<STM32L100, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, COMP>::T*>(0x40007c00);

typename peripheral_t<STM32L151, COMP>::T& peripheral_t<STM32L151, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, COMP>::T*>(0x40007c00);

typename peripheral_t<STM32L152, COMP>::T& peripheral_t<STM32L152, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, COMP>::T*>(0x40007c00);

typename peripheral_t<STM32L162, COMP>::T& peripheral_t<STM32L162, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, COMP>::T*>(0x40007c00);

typename peripheral_t<STM32L100, CRC>::T& peripheral_t<STM32L100, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L151, CRC>::T& peripheral_t<STM32L151, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L152, CRC>::T& peripheral_t<STM32L152, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L162, CRC>::T& peripheral_t<STM32L162, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L100, DAC>::T& peripheral_t<STM32L100, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L151, DAC>::T& peripheral_t<STM32L151, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L152, DAC>::T& peripheral_t<STM32L152, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L162, DAC>::T& peripheral_t<STM32L162, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, DAC>::T*>(0x40007400);

typename peripheral_t<STM32L100, DBGMCU>::T& peripheral_t<STM32L100, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32L151, DBGMCU>::T& peripheral_t<STM32L151, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32L152, DBGMCU>::T& peripheral_t<STM32L152, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32L162, DBGMCU>::T& peripheral_t<STM32L162, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32L100, DMA1>::T& peripheral_t<STM32L100, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32L100, DMA2>::T& peripheral_t<STM32L100, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32L151, DMA1>::T& peripheral_t<STM32L151, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32L151, DMA2>::T& peripheral_t<STM32L151, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32L152, DMA1>::T& peripheral_t<STM32L152, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32L152, DMA2>::T& peripheral_t<STM32L152, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32L162, DMA1>::T& peripheral_t<STM32L162, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, DMA1>::T*>(0x40026000);

typename peripheral_t<STM32L162, DMA2>::T& peripheral_t<STM32L162, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, DMA2>::T*>(0x40026400);

typename peripheral_t<STM32L100, EXTI>::T& peripheral_t<STM32L100, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L151, EXTI>::T& peripheral_t<STM32L151, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L152, EXTI>::T& peripheral_t<STM32L152, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L162, EXTI>::T& peripheral_t<STM32L162, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32L100, FSMC>::T& peripheral_t<STM32L100, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32L151, FSMC>::T& peripheral_t<STM32L151, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32L152, FSMC>::T& peripheral_t<STM32L152, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32L162, FSMC>::T& peripheral_t<STM32L162, FSMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, FSMC>::T*>(0xa0000000);

typename peripheral_t<STM32L100, FLASH>::T& peripheral_t<STM32L100, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32L151, FLASH>::T& peripheral_t<STM32L151, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32L152, FLASH>::T& peripheral_t<STM32L152, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32L162, FLASH>::T& peripheral_t<STM32L162, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, FLASH>::T*>(0x40023c00);

typename peripheral_t<STM32L100, GPIOA>::T& peripheral_t<STM32L100, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32L151, GPIOA>::T& peripheral_t<STM32L151, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32L152, GPIOA>::T& peripheral_t<STM32L152, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32L162, GPIOA>::T& peripheral_t<STM32L162, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOA>::T*>(0x40020000);

typename peripheral_t<STM32L100, GPIOB>::T& peripheral_t<STM32L100, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32L151, GPIOB>::T& peripheral_t<STM32L151, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32L152, GPIOB>::T& peripheral_t<STM32L152, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32L162, GPIOB>::T& peripheral_t<STM32L162, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOB>::T*>(0x40020400);

typename peripheral_t<STM32L100, GPIOC>::T& peripheral_t<STM32L100, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32L100, GPIOD>::T& peripheral_t<STM32L100, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32L100, GPIOH>::T& peripheral_t<STM32L100, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, GPIOH>::T*>(0x40021400);

typename peripheral_t<STM32L151, GPIOC>::T& peripheral_t<STM32L151, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32L151, GPIOD>::T& peripheral_t<STM32L151, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32L151, GPIOE>::T& peripheral_t<STM32L151, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOE>::T*>(0x40021000);

typename peripheral_t<STM32L151, GPIOF>::T& peripheral_t<STM32L151, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOF>::T*>(0x40021800);

typename peripheral_t<STM32L151, GPIOG>::T& peripheral_t<STM32L151, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOG>::T*>(0x40021c00);

typename peripheral_t<STM32L151, GPIOH>::T& peripheral_t<STM32L151, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, GPIOH>::T*>(0x40021400);

typename peripheral_t<STM32L152, GPIOC>::T& peripheral_t<STM32L152, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32L152, GPIOD>::T& peripheral_t<STM32L152, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32L152, GPIOE>::T& peripheral_t<STM32L152, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOE>::T*>(0x40021000);

typename peripheral_t<STM32L152, GPIOF>::T& peripheral_t<STM32L152, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOF>::T*>(0x40021800);

typename peripheral_t<STM32L152, GPIOG>::T& peripheral_t<STM32L152, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOG>::T*>(0x40021c00);

typename peripheral_t<STM32L152, GPIOH>::T& peripheral_t<STM32L152, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, GPIOH>::T*>(0x40021400);

typename peripheral_t<STM32L162, GPIOC>::T& peripheral_t<STM32L162, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOC>::T*>(0x40020800);

typename peripheral_t<STM32L162, GPIOD>::T& peripheral_t<STM32L162, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOD>::T*>(0x40020c00);

typename peripheral_t<STM32L162, GPIOE>::T& peripheral_t<STM32L162, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOE>::T*>(0x40021000);

typename peripheral_t<STM32L162, GPIOF>::T& peripheral_t<STM32L162, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOF>::T*>(0x40021800);

typename peripheral_t<STM32L162, GPIOG>::T& peripheral_t<STM32L162, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOG>::T*>(0x40021c00);

typename peripheral_t<STM32L162, GPIOH>::T& peripheral_t<STM32L162, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, GPIOH>::T*>(0x40021400);

typename peripheral_t<STM32L100, I2C1>::T& peripheral_t<STM32L100, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L100, I2C2>::T& peripheral_t<STM32L100, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L151, I2C1>::T& peripheral_t<STM32L151, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L151, I2C2>::T& peripheral_t<STM32L151, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L152, I2C1>::T& peripheral_t<STM32L152, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L152, I2C2>::T& peripheral_t<STM32L152, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L162, I2C1>::T& peripheral_t<STM32L162, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L162, I2C2>::T& peripheral_t<STM32L162, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L100, IWDG>::T& peripheral_t<STM32L100, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L151, IWDG>::T& peripheral_t<STM32L151, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L152, IWDG>::T& peripheral_t<STM32L152, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L162, IWDG>::T& peripheral_t<STM32L162, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L100, LCD>::T& peripheral_t<STM32L100, LCD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, LCD>::T*>(0x40002400);

typename peripheral_t<STM32L151, LCD>::T& peripheral_t<STM32L151, LCD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, LCD>::T*>(0x40002400);

typename peripheral_t<STM32L152, LCD>::T& peripheral_t<STM32L152, LCD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, LCD>::T*>(0x40002400);

typename peripheral_t<STM32L162, LCD>::T& peripheral_t<STM32L162, LCD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, LCD>::T*>(0x40002400);

typename peripheral_t<STM32L100, MPU>::T& peripheral_t<STM32L100, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L151, MPU>::T& peripheral_t<STM32L151, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L152, MPU>::T& peripheral_t<STM32L152, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L162, MPU>::T& peripheral_t<STM32L162, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32L100, NVIC>::T& peripheral_t<STM32L100, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L151, NVIC>::T& peripheral_t<STM32L151, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L152, NVIC>::T& peripheral_t<STM32L152, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L162, NVIC>::T& peripheral_t<STM32L162, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L100, NVIC_STIR>::T& peripheral_t<STM32L100, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L151, NVIC_STIR>::T& peripheral_t<STM32L151, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L152, NVIC_STIR>::T& peripheral_t<STM32L152, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L162, NVIC_STIR>::T& peripheral_t<STM32L162, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L100, OPAMP>::T& peripheral_t<STM32L100, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, OPAMP>::T*>(0x40007c5c);

typename peripheral_t<STM32L151, OPAMP>::T& peripheral_t<STM32L151, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, OPAMP>::T*>(0x40007c5c);

typename peripheral_t<STM32L152, OPAMP>::T& peripheral_t<STM32L152, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, OPAMP>::T*>(0x40007c5c);

typename peripheral_t<STM32L162, OPAMP>::T& peripheral_t<STM32L162, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, OPAMP>::T*>(0x40007c5c);

typename peripheral_t<STM32L100, PWR>::T& peripheral_t<STM32L100, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L151, PWR>::T& peripheral_t<STM32L151, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L152, PWR>::T& peripheral_t<STM32L152, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L162, PWR>::T& peripheral_t<STM32L162, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L100, RCC>::T& peripheral_t<STM32L100, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, RCC>::T*>(0x40023800);

typename peripheral_t<STM32L151, RCC>::T& peripheral_t<STM32L151, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, RCC>::T*>(0x40023800);

typename peripheral_t<STM32L162, RCC>::T& peripheral_t<STM32L162, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, RCC>::T*>(0x40023800);

typename peripheral_t<STM32L152, RCC>::T& peripheral_t<STM32L152, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, RCC>::T*>(0x40023800);

typename peripheral_t<STM32L100, RI>::T& peripheral_t<STM32L100, RI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, RI>::T*>(0x40007c04);

typename peripheral_t<STM32L151, RI>::T& peripheral_t<STM32L151, RI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, RI>::T*>(0x40007c04);

typename peripheral_t<STM32L152, RI>::T& peripheral_t<STM32L152, RI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, RI>::T*>(0x40007c04);

typename peripheral_t<STM32L162, RI>::T& peripheral_t<STM32L162, RI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, RI>::T*>(0x40007c04);

typename peripheral_t<STM32L100, RTC>::T& peripheral_t<STM32L100, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L151, RTC>::T& peripheral_t<STM32L151, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L152, RTC>::T& peripheral_t<STM32L152, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L162, RTC>::T& peripheral_t<STM32L162, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L100, SCB_ACTRL>::T& peripheral_t<STM32L100, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32L151, SCB_ACTRL>::T& peripheral_t<STM32L151, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32L152, SCB_ACTRL>::T& peripheral_t<STM32L152, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32L162, SCB_ACTRL>::T& peripheral_t<STM32L162, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32L100, SCB>::T& peripheral_t<STM32L100, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L151, SCB>::T& peripheral_t<STM32L151, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L152, SCB>::T& peripheral_t<STM32L152, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L162, SCB>::T& peripheral_t<STM32L162, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32L100, SDIO>::T& peripheral_t<STM32L100, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32L151, SDIO>::T& peripheral_t<STM32L151, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32L152, SDIO>::T& peripheral_t<STM32L152, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32L162, SDIO>::T& peripheral_t<STM32L162, SDIO>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SDIO>::T*>(0x40012c00);

typename peripheral_t<STM32L100, SPI1>::T& peripheral_t<STM32L100, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L100, SPI2>::T& peripheral_t<STM32L100, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L100, SPI3>::T& peripheral_t<STM32L100, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L151, SPI1>::T& peripheral_t<STM32L151, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L151, SPI2>::T& peripheral_t<STM32L151, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L151, SPI3>::T& peripheral_t<STM32L151, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L162, SPI1>::T& peripheral_t<STM32L162, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L162, SPI2>::T& peripheral_t<STM32L162, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L162, SPI3>::T& peripheral_t<STM32L162, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L152, SPI1>::T& peripheral_t<STM32L152, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L152, SPI2>::T& peripheral_t<STM32L152, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L152, SPI3>::T& peripheral_t<STM32L152, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L100, STK>::T& peripheral_t<STM32L100, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L151, STK>::T& peripheral_t<STM32L151, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L152, STK>::T& peripheral_t<STM32L152, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L162, STK>::T& peripheral_t<STM32L162, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, STK>::T*>(0xe000e010);

typename peripheral_t<STM32L100, SYSCFG>::T& peripheral_t<STM32L100, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L151, SYSCFG>::T& peripheral_t<STM32L151, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L152, SYSCFG>::T& peripheral_t<STM32L152, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L162, SYSCFG>::T& peripheral_t<STM32L162, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L100, TIM10>::T& peripheral_t<STM32L100, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM10>::T*>(0x40010c00);

typename peripheral_t<STM32L100, TIM11>::T& peripheral_t<STM32L100, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM11>::T*>(0x40011000);

typename peripheral_t<STM32L162, TIM10>::T& peripheral_t<STM32L162, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM10>::T*>(0x40010c00);

typename peripheral_t<STM32L162, TIM11>::T& peripheral_t<STM32L162, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM11>::T*>(0x40011000);

typename peripheral_t<STM32L100, TIM2>::T& peripheral_t<STM32L100, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L100, TIM3>::T& peripheral_t<STM32L100, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L100, TIM4>::T& peripheral_t<STM32L100, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L100, TIM5>::T& peripheral_t<STM32L100, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L151, TIM2>::T& peripheral_t<STM32L151, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L151, TIM3>::T& peripheral_t<STM32L151, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L151, TIM4>::T& peripheral_t<STM32L151, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L151, TIM5>::T& peripheral_t<STM32L151, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L152, TIM2>::T& peripheral_t<STM32L152, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L152, TIM3>::T& peripheral_t<STM32L152, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L152, TIM4>::T& peripheral_t<STM32L152, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L152, TIM5>::T& peripheral_t<STM32L152, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L162, TIM2>::T& peripheral_t<STM32L162, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L162, TIM3>::T& peripheral_t<STM32L162, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L162, TIM4>::T& peripheral_t<STM32L162, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L162, TIM5>::T& peripheral_t<STM32L162, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L100, TIM6>::T& peripheral_t<STM32L100, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L100, TIM7>::T& peripheral_t<STM32L100, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L151, TIM6>::T& peripheral_t<STM32L151, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L151, TIM7>::T& peripheral_t<STM32L151, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L152, TIM6>::T& peripheral_t<STM32L152, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L152, TIM7>::T& peripheral_t<STM32L152, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L162, TIM6>::T& peripheral_t<STM32L162, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L162, TIM7>::T& peripheral_t<STM32L162, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L100, TIM9>::T& peripheral_t<STM32L100, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, TIM9>::T*>(0x40010800);

typename peripheral_t<STM32L151, TIM9>::T& peripheral_t<STM32L151, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM9>::T*>(0x40010800);

typename peripheral_t<STM32L152, TIM9>::T& peripheral_t<STM32L152, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM9>::T*>(0x40010800);

typename peripheral_t<STM32L162, TIM9>::T& peripheral_t<STM32L162, TIM9>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, TIM9>::T*>(0x40010800);

typename peripheral_t<STM32L151, TIM10>::T& peripheral_t<STM32L151, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM10>::T*>(0x40010c00);

typename peripheral_t<STM32L152, TIM10>::T& peripheral_t<STM32L152, TIM10>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM10>::T*>(0x40010c00);

typename peripheral_t<STM32L151, TIM11>::T& peripheral_t<STM32L151, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, TIM11>::T*>(0x40011000);

typename peripheral_t<STM32L152, TIM11>::T& peripheral_t<STM32L152, TIM11>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, TIM11>::T*>(0x40011000);

typename peripheral_t<STM32L100, USART1>::T& peripheral_t<STM32L100, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L100, USART2>::T& peripheral_t<STM32L100, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L100, USART3>::T& peripheral_t<STM32L100, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L100, USART4>::T& peripheral_t<STM32L100, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32L100, USART5>::T& peripheral_t<STM32L100, USART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USART5>::T*>(0x40005000);

typename peripheral_t<STM32L151, USART1>::T& peripheral_t<STM32L151, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L151, USART2>::T& peripheral_t<STM32L151, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L151, USART3>::T& peripheral_t<STM32L151, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L151, UART4>::T& peripheral_t<STM32L151, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32L151, UART5>::T& peripheral_t<STM32L151, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, UART5>::T*>(0x40005000);

typename peripheral_t<STM32L152, USART1>::T& peripheral_t<STM32L152, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L152, USART2>::T& peripheral_t<STM32L152, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L152, USART3>::T& peripheral_t<STM32L152, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L152, UART4>::T& peripheral_t<STM32L152, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32L152, UART5>::T& peripheral_t<STM32L152, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, UART5>::T*>(0x40005000);

typename peripheral_t<STM32L162, USART1>::T& peripheral_t<STM32L162, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L162, USART2>::T& peripheral_t<STM32L162, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L162, USART3>::T& peripheral_t<STM32L162, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L162, UART4>::T& peripheral_t<STM32L162, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32L162, UART5>::T& peripheral_t<STM32L162, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, UART5>::T*>(0x40005000);

typename peripheral_t<STM32L100, USB>::T& peripheral_t<STM32L100, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USB>::T*>(0x40005c00);

typename peripheral_t<STM32L100, USB_SRAM>::T& peripheral_t<STM32L100, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L151, USB>::T& peripheral_t<STM32L151, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, USB>::T*>(0x40005c00);

typename peripheral_t<STM32L151, USB_SRAM>::T& peripheral_t<STM32L151, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L152, USB>::T& peripheral_t<STM32L152, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, USB>::T*>(0x40005c00);

typename peripheral_t<STM32L152, USB_SRAM>::T& peripheral_t<STM32L152, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L162, USB>::T& peripheral_t<STM32L162, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, USB>::T*>(0x40005c00);

typename peripheral_t<STM32L162, USB_SRAM>::T& peripheral_t<STM32L162, USB_SRAM>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, USB_SRAM>::T*>(0x40006000);

typename peripheral_t<STM32L100, WWDG>::T& peripheral_t<STM32L100, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L100, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L151, WWDG>::T& peripheral_t<STM32L151, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L151, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L152, WWDG>::T& peripheral_t<STM32L152, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L152, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L162, WWDG>::T& peripheral_t<STM32L162, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L162, WWDG>::T*>(0x40002c00);

