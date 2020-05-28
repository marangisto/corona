#pragma once

////
//
//      STM32G0 peripherals
//
////

typename peripheral_t<STM32G030, ADC>::T& peripheral_t<STM32G030, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G031, ADC>::T& peripheral_t<STM32G031, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G041, ADC>::T& peripheral_t<STM32G041, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G070, ADC>::T& peripheral_t<STM32G070, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G071, ADC>::T& peripheral_t<STM32G071, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G081, ADC>::T& peripheral_t<STM32G081, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, ADC>::T*>(0x40012400);

typename peripheral_t<STM32G041, AES>::T& peripheral_t<STM32G041, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, AES>::T*>(0x40026000);

typename peripheral_t<STM32G081, AES>::T& peripheral_t<STM32G081, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, AES>::T*>(0x40026000);

typename peripheral_t<STM32G070, HDMI_CEC>::T& peripheral_t<STM32G070, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, HDMI_CEC>::T*>(0x40007800);

typename peripheral_t<STM32G071, HDMI_CEC>::T& peripheral_t<STM32G071, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, HDMI_CEC>::T*>(0x40007800);

typename peripheral_t<STM32G081, HDMI_CEC>::T& peripheral_t<STM32G081, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, HDMI_CEC>::T*>(0x40007800);

typename peripheral_t<STM32G070, COMP>::T& peripheral_t<STM32G070, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G071, COMP>::T& peripheral_t<STM32G071, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G081, COMP>::T& peripheral_t<STM32G081, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, COMP>::T*>(0x40010200);

typename peripheral_t<STM32G030, CRC>::T& peripheral_t<STM32G030, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G031, CRC>::T& peripheral_t<STM32G031, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G041, CRC>::T& peripheral_t<STM32G041, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G070, CRC>::T& peripheral_t<STM32G070, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G071, CRC>::T& peripheral_t<STM32G071, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G081, CRC>::T& peripheral_t<STM32G081, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, CRC>::T*>(0x40023000);

typename peripheral_t<STM32G070, DAC1>::T& peripheral_t<STM32G070, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32G071, DAC1>::T& peripheral_t<STM32G071, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32G081, DAC1>::T& peripheral_t<STM32G081, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32G030, DBG>::T& peripheral_t<STM32G030, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G031, DBG>::T& peripheral_t<STM32G031, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G041, DBG>::T& peripheral_t<STM32G041, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G070, DBG>::T& peripheral_t<STM32G070, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G071, DBG>::T& peripheral_t<STM32G071, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G081, DBG>::T& peripheral_t<STM32G081, DBG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, DBG>::T*>(0x40015800);

typename peripheral_t<STM32G030, DMA>::T& peripheral_t<STM32G030, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G031, DMA>::T& peripheral_t<STM32G031, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G041, DMA>::T& peripheral_t<STM32G041, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G070, DMA>::T& peripheral_t<STM32G070, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G071, DMA>::T& peripheral_t<STM32G071, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G081, DMA>::T& peripheral_t<STM32G081, DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, DMA>::T*>(0x40020000);

typename peripheral_t<STM32G030, DMAMUX>::T& peripheral_t<STM32G030, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G031, DMAMUX>::T& peripheral_t<STM32G031, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G041, DMAMUX>::T& peripheral_t<STM32G041, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G070, DMAMUX>::T& peripheral_t<STM32G070, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G071, DMAMUX>::T& peripheral_t<STM32G071, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G081, DMAMUX>::T& peripheral_t<STM32G081, DMAMUX>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, DMAMUX>::T*>(0x40020800);

typename peripheral_t<STM32G030, EXTI>::T& peripheral_t<STM32G030, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G031, EXTI>::T& peripheral_t<STM32G031, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G041, EXTI>::T& peripheral_t<STM32G041, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G070, EXTI>::T& peripheral_t<STM32G070, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G071, EXTI>::T& peripheral_t<STM32G071, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G081, EXTI>::T& peripheral_t<STM32G081, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, EXTI>::T*>(0x40021800);

typename peripheral_t<STM32G030, FPU_CPACR>::T& peripheral_t<STM32G030, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G031, FPU_CPACR>::T& peripheral_t<STM32G031, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G041, FPU_CPACR>::T& peripheral_t<STM32G041, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32G030, FPU>::T& peripheral_t<STM32G030, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G031, FPU>::T& peripheral_t<STM32G031, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G041, FPU>::T& peripheral_t<STM32G041, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32G030, FLASH>::T& peripheral_t<STM32G030, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G031, FLASH>::T& peripheral_t<STM32G031, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G041, FLASH>::T& peripheral_t<STM32G041, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G070, FLASH>::T& peripheral_t<STM32G070, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G071, FLASH>::T& peripheral_t<STM32G071, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G081, FLASH>::T& peripheral_t<STM32G081, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32G030, GPIOA>::T& peripheral_t<STM32G030, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G031, GPIOA>::T& peripheral_t<STM32G031, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G041, GPIOA>::T& peripheral_t<STM32G041, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G070, GPIOA>::T& peripheral_t<STM32G070, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G071, GPIOA>::T& peripheral_t<STM32G071, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G081, GPIOA>::T& peripheral_t<STM32G081, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, GPIOA>::T*>(0x50000000);

typename peripheral_t<STM32G030, GPIOB>::T& peripheral_t<STM32G030, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G030, GPIOC>::T& peripheral_t<STM32G030, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G030, GPIOD>::T& peripheral_t<STM32G030, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G030, GPIOF>::T& peripheral_t<STM32G030, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G031, GPIOB>::T& peripheral_t<STM32G031, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G031, GPIOC>::T& peripheral_t<STM32G031, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G031, GPIOD>::T& peripheral_t<STM32G031, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G031, GPIOF>::T& peripheral_t<STM32G031, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G041, GPIOB>::T& peripheral_t<STM32G041, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G041, GPIOC>::T& peripheral_t<STM32G041, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G041, GPIOD>::T& peripheral_t<STM32G041, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G041, GPIOF>::T& peripheral_t<STM32G041, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G070, GPIOB>::T& peripheral_t<STM32G070, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G070, GPIOC>::T& peripheral_t<STM32G070, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G070, GPIOD>::T& peripheral_t<STM32G070, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G070, GPIOF>::T& peripheral_t<STM32G070, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G071, GPIOB>::T& peripheral_t<STM32G071, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G071, GPIOC>::T& peripheral_t<STM32G071, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G071, GPIOD>::T& peripheral_t<STM32G071, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G071, GPIOF>::T& peripheral_t<STM32G071, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G081, GPIOB>::T& peripheral_t<STM32G081, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, GPIOB>::T*>(0x50000400);

typename peripheral_t<STM32G081, GPIOC>::T& peripheral_t<STM32G081, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, GPIOC>::T*>(0x50000800);

typename peripheral_t<STM32G081, GPIOD>::T& peripheral_t<STM32G081, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, GPIOD>::T*>(0x50000c00);

typename peripheral_t<STM32G081, GPIOF>::T& peripheral_t<STM32G081, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, GPIOF>::T*>(0x50001400);

typename peripheral_t<STM32G030, I2C1>::T& peripheral_t<STM32G030, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G030, I2C2>::T& peripheral_t<STM32G030, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G031, I2C1>::T& peripheral_t<STM32G031, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G031, I2C2>::T& peripheral_t<STM32G031, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G041, I2C1>::T& peripheral_t<STM32G041, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G041, I2C2>::T& peripheral_t<STM32G041, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G070, I2C1>::T& peripheral_t<STM32G070, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G070, I2C2>::T& peripheral_t<STM32G070, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G071, I2C1>::T& peripheral_t<STM32G071, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G071, I2C2>::T& peripheral_t<STM32G071, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G081, I2C1>::T& peripheral_t<STM32G081, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32G081, I2C2>::T& peripheral_t<STM32G081, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32G030, IWDG>::T& peripheral_t<STM32G030, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G031, IWDG>::T& peripheral_t<STM32G031, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G041, IWDG>::T& peripheral_t<STM32G041, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G070, IWDG>::T& peripheral_t<STM32G070, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G071, IWDG>::T& peripheral_t<STM32G071, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G081, IWDG>::T& peripheral_t<STM32G081, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32G031, LPTIM1>::T& peripheral_t<STM32G031, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32G031, LPTIM2>::T& peripheral_t<STM32G031, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32G041, LPTIM1>::T& peripheral_t<STM32G041, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32G041, LPTIM2>::T& peripheral_t<STM32G041, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32G070, LPTIM1>::T& peripheral_t<STM32G070, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32G070, LPTIM2>::T& peripheral_t<STM32G070, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32G071, LPTIM1>::T& peripheral_t<STM32G071, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32G071, LPTIM2>::T& peripheral_t<STM32G071, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32G081, LPTIM1>::T& peripheral_t<STM32G081, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32G081, LPTIM2>::T& peripheral_t<STM32G081, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32G030, MPU>::T& peripheral_t<STM32G030, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G031, MPU>::T& peripheral_t<STM32G031, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G041, MPU>::T& peripheral_t<STM32G041, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G070, MPU>::T& peripheral_t<STM32G070, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G071, MPU>::T& peripheral_t<STM32G071, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G081, MPU>::T& peripheral_t<STM32G081, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32G030, NVIC>::T& peripheral_t<STM32G030, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G031, NVIC>::T& peripheral_t<STM32G031, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G041, NVIC>::T& peripheral_t<STM32G041, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G070, NVIC>::T& peripheral_t<STM32G070, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G071, NVIC>::T& peripheral_t<STM32G071, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G081, NVIC>::T& peripheral_t<STM32G081, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32G030, NVIC_STIR>::T& peripheral_t<STM32G030, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G031, NVIC_STIR>::T& peripheral_t<STM32G031, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G041, NVIC_STIR>::T& peripheral_t<STM32G041, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32G030, PWR>::T& peripheral_t<STM32G030, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G031, PWR>::T& peripheral_t<STM32G031, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G041, PWR>::T& peripheral_t<STM32G041, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G070, PWR>::T& peripheral_t<STM32G070, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G071, PWR>::T& peripheral_t<STM32G071, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G081, PWR>::T& peripheral_t<STM32G081, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, PWR>::T*>(0x40007000);

typename peripheral_t<STM32G030, RCC>::T& peripheral_t<STM32G030, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G031, RCC>::T& peripheral_t<STM32G031, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G041, RCC>::T& peripheral_t<STM32G041, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G070, RCC>::T& peripheral_t<STM32G070, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G071, RCC>::T& peripheral_t<STM32G071, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G081, RCC>::T& peripheral_t<STM32G081, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, RCC>::T*>(0x40021000);

typename peripheral_t<STM32G041, RNG>::T& peripheral_t<STM32G041, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, RNG>::T*>(0x40025000);

typename peripheral_t<STM32G070, RNG>::T& peripheral_t<STM32G070, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, RNG>::T*>(0x40025000);

typename peripheral_t<STM32G071, RNG>::T& peripheral_t<STM32G071, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, RNG>::T*>(0x40025000);

typename peripheral_t<STM32G081, RNG>::T& peripheral_t<STM32G081, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, RNG>::T*>(0x40025000);

typename peripheral_t<STM32G030, RTC>::T& peripheral_t<STM32G030, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G031, RTC>::T& peripheral_t<STM32G031, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G041, RTC>::T& peripheral_t<STM32G041, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G070, RTC>::T& peripheral_t<STM32G070, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G071, RTC>::T& peripheral_t<STM32G071, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G081, RTC>::T& peripheral_t<STM32G081, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, RTC>::T*>(0x40002800);

typename peripheral_t<STM32G030, SCB>::T& peripheral_t<STM32G030, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G031, SCB>::T& peripheral_t<STM32G031, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G041, SCB>::T& peripheral_t<STM32G041, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G070, SCB>::T& peripheral_t<STM32G070, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G071, SCB>::T& peripheral_t<STM32G071, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G081, SCB>::T& peripheral_t<STM32G081, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32G030, SCB_ACTRL>::T& peripheral_t<STM32G030, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G031, SCB_ACTRL>::T& peripheral_t<STM32G031, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G041, SCB_ACTRL>::T& peripheral_t<STM32G041, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32G030, SPI1>::T& peripheral_t<STM32G030, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G030, SPI2>::T& peripheral_t<STM32G030, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G031, SPI1>::T& peripheral_t<STM32G031, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G031, SPI2>::T& peripheral_t<STM32G031, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G041, SPI1>::T& peripheral_t<STM32G041, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G041, SPI2>::T& peripheral_t<STM32G041, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G070, SPI1>::T& peripheral_t<STM32G070, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G070, SPI2>::T& peripheral_t<STM32G070, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G071, SPI1>::T& peripheral_t<STM32G071, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G071, SPI2>::T& peripheral_t<STM32G071, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G081, SPI1>::T& peripheral_t<STM32G081, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32G081, SPI2>::T& peripheral_t<STM32G081, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32G030, STK>::T& peripheral_t<STM32G030, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G031, STK>::T& peripheral_t<STM32G031, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G041, STK>::T& peripheral_t<STM32G041, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G070, STK>::T& peripheral_t<STM32G070, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G071, STK>::T& peripheral_t<STM32G071, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G081, STK>::T& peripheral_t<STM32G081, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, STK>::T*>(0xe000e010);

typename peripheral_t<STM32G030, SYSCFG>::T& peripheral_t<STM32G030, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G031, SYSCFG>::T& peripheral_t<STM32G031, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G041, SYSCFG>::T& peripheral_t<STM32G041, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32G030, SYSCFG_ITLINE>::T& peripheral_t<STM32G030, SYSCFG_ITLINE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, SYSCFG_ITLINE>::T*>(0x40010080);

typename peripheral_t<STM32G031, SYSCFG_ITLINE>::T& peripheral_t<STM32G031, SYSCFG_ITLINE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, SYSCFG_ITLINE>::T*>(0x40010080);

typename peripheral_t<STM32G041, SYSCFG_ITLINE>::T& peripheral_t<STM32G041, SYSCFG_ITLINE>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, SYSCFG_ITLINE>::T*>(0x40010080);

typename peripheral_t<STM32G070, SYSCFG_VREFBUF>::T& peripheral_t<STM32G070, SYSCFG_VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, SYSCFG_VREFBUF>::T*>(0x40010000);

typename peripheral_t<STM32G071, SYSCFG_VREFBUF>::T& peripheral_t<STM32G071, SYSCFG_VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, SYSCFG_VREFBUF>::T*>(0x40010000);

typename peripheral_t<STM32G081, SYSCFG_VREFBUF>::T& peripheral_t<STM32G081, SYSCFG_VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, SYSCFG_VREFBUF>::T*>(0x40010000);

typename peripheral_t<STM32G030, TAMP>::T& peripheral_t<STM32G030, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G031, TAMP>::T& peripheral_t<STM32G031, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G041, TAMP>::T& peripheral_t<STM32G041, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G070, TAMP>::T& peripheral_t<STM32G070, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G071, TAMP>::T& peripheral_t<STM32G071, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G081, TAMP>::T& peripheral_t<STM32G081, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TAMP>::T*>(0x4000b000);

typename peripheral_t<STM32G030, TIM16>::T& peripheral_t<STM32G030, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G030, TIM17>::T& peripheral_t<STM32G030, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G031, TIM16>::T& peripheral_t<STM32G031, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G031, TIM17>::T& peripheral_t<STM32G031, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G041, TIM16>::T& peripheral_t<STM32G041, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G041, TIM17>::T& peripheral_t<STM32G041, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G070, TIM16>::T& peripheral_t<STM32G070, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G070, TIM17>::T& peripheral_t<STM32G070, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G070, TIM15>::T& peripheral_t<STM32G070, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G081, TIM16>::T& peripheral_t<STM32G081, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G081, TIM17>::T& peripheral_t<STM32G081, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G081, TIM15>::T& peripheral_t<STM32G081, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G030, TIM1>::T& peripheral_t<STM32G030, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G031, TIM1>::T& peripheral_t<STM32G031, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G041, TIM1>::T& peripheral_t<STM32G041, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G030, TIM14>::T& peripheral_t<STM32G030, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G031, TIM14>::T& peripheral_t<STM32G031, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G041, TIM14>::T& peripheral_t<STM32G041, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G070, TIM14>::T& peripheral_t<STM32G070, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G071, TIM14>::T& peripheral_t<STM32G071, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G081, TIM14>::T& peripheral_t<STM32G081, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32G030, TIM2>::T& peripheral_t<STM32G030, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G030, TIM3>::T& peripheral_t<STM32G030, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G031, TIM2>::T& peripheral_t<STM32G031, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G031, TIM3>::T& peripheral_t<STM32G031, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G041, TIM2>::T& peripheral_t<STM32G041, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G041, TIM3>::T& peripheral_t<STM32G041, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G070, TIM2>::T& peripheral_t<STM32G070, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G070, TIM3>::T& peripheral_t<STM32G070, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G071, TIM2>::T& peripheral_t<STM32G071, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G071, TIM3>::T& peripheral_t<STM32G071, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G081, TIM2>::T& peripheral_t<STM32G081, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32G081, TIM3>::T& peripheral_t<STM32G081, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32G070, TIM1>::T& peripheral_t<STM32G070, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G071, TIM1>::T& peripheral_t<STM32G071, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G081, TIM1>::T& peripheral_t<STM32G081, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32G070, TIM6>::T& peripheral_t<STM32G070, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G070, TIM7>::T& peripheral_t<STM32G070, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G071, TIM6>::T& peripheral_t<STM32G071, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G071, TIM7>::T& peripheral_t<STM32G071, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G081, TIM6>::T& peripheral_t<STM32G081, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32G081, TIM7>::T& peripheral_t<STM32G081, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32G071, TIM16>::T& peripheral_t<STM32G071, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32G071, TIM17>::T& peripheral_t<STM32G071, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32G071, TIM15>::T& peripheral_t<STM32G071, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32G070, UCPD1>::T& peripheral_t<STM32G070, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G070, UCPD2>::T& peripheral_t<STM32G070, UCPD2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, UCPD2>::T*>(0x4000a400);

typename peripheral_t<STM32G071, UCPD1>::T& peripheral_t<STM32G071, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G071, UCPD2>::T& peripheral_t<STM32G071, UCPD2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, UCPD2>::T*>(0x4000a400);

typename peripheral_t<STM32G081, UCPD1>::T& peripheral_t<STM32G081, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, UCPD1>::T*>(0x4000a000);

typename peripheral_t<STM32G081, UCPD2>::T& peripheral_t<STM32G081, UCPD2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, UCPD2>::T*>(0x4000a400);

typename peripheral_t<STM32G030, USART1>::T& peripheral_t<STM32G030, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G030, USART2>::T& peripheral_t<STM32G030, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G031, USART1>::T& peripheral_t<STM32G031, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G031, USART2>::T& peripheral_t<STM32G031, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G041, USART1>::T& peripheral_t<STM32G041, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G041, USART2>::T& peripheral_t<STM32G041, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G070, USART1>::T& peripheral_t<STM32G070, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G070, USART2>::T& peripheral_t<STM32G070, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G070, USART3>::T& peripheral_t<STM32G070, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G070, USART4>::T& peripheral_t<STM32G070, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32G071, USART1>::T& peripheral_t<STM32G071, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G071, USART2>::T& peripheral_t<STM32G071, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G071, USART3>::T& peripheral_t<STM32G071, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G071, USART4>::T& peripheral_t<STM32G071, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32G081, USART1>::T& peripheral_t<STM32G081, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, USART1>::T*>(0x40013800);

typename peripheral_t<STM32G081, USART2>::T& peripheral_t<STM32G081, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, USART2>::T*>(0x40004400);

typename peripheral_t<STM32G081, USART3>::T& peripheral_t<STM32G081, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, USART3>::T*>(0x40004800);

typename peripheral_t<STM32G081, USART4>::T& peripheral_t<STM32G081, USART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, USART4>::T*>(0x40004c00);

typename peripheral_t<STM32G031, LPUART1>::T& peripheral_t<STM32G031, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G041, LPUART1>::T& peripheral_t<STM32G041, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G070, LPUART1>::T& peripheral_t<STM32G070, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G071, LPUART1>::T& peripheral_t<STM32G071, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G081, LPUART1>::T& peripheral_t<STM32G081, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32G030, VREFBUF>::T& peripheral_t<STM32G030, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G031, VREFBUF>::T& peripheral_t<STM32G031, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G041, VREFBUF>::T& peripheral_t<STM32G041, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32G030, WWDG>::T& peripheral_t<STM32G030, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G030, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G031, WWDG>::T& peripheral_t<STM32G031, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G031, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G041, WWDG>::T& peripheral_t<STM32G041, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G041, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G070, WWDG>::T& peripheral_t<STM32G070, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G070, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G071, WWDG>::T& peripheral_t<STM32G071, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G071, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32G081, WWDG>::T& peripheral_t<STM32G081, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32G081, WWDG>::T*>(0x40002c00);

