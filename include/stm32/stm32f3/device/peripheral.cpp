#pragma once

////
//
//      STM32F3 peripherals
//
////

typename peripheral_t<STM32F301, ADC>::T& peripheral_t<STM32F301, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, ADC>::T*>(0x50000000);

typename peripheral_t<STM32F302, ADC1>::T& peripheral_t<STM32F302, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32F302, ADC2>::T& peripheral_t<STM32F302, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32F302, ADC3>::T& peripheral_t<STM32F302, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32F302, ADC4>::T& peripheral_t<STM32F302, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32F3x4, ADC1>::T& peripheral_t<STM32F3x4, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32F3x4, ADC2>::T& peripheral_t<STM32F3x4, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32F3x8, ADC2>::T& peripheral_t<STM32F3x8, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, ADC2>::T*>(0x50000400);

typename peripheral_t<STM32F302, ADC1_2>::T& peripheral_t<STM32F302, ADC1_2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC1_2>::T*>(0x50000300);

typename peripheral_t<STM32F302, ADC3_4>::T& peripheral_t<STM32F302, ADC3_4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, ADC3_4>::T*>(0x50000700);

typename peripheral_t<STM32F303, ADC1_2>::T& peripheral_t<STM32F303, ADC1_2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC1_2>::T*>(0x50000300);

typename peripheral_t<STM32F303, ADC3_4>::T& peripheral_t<STM32F303, ADC3_4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC3_4>::T*>(0x50000700);

typename peripheral_t<STM32F303, ADC1>::T& peripheral_t<STM32F303, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32F303, ADC2>::T& peripheral_t<STM32F303, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC2>::T*>(0x50000100);

typename peripheral_t<STM32F303, ADC3>::T& peripheral_t<STM32F303, ADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC3>::T*>(0x50000400);

typename peripheral_t<STM32F303, ADC4>::T& peripheral_t<STM32F303, ADC4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, ADC4>::T*>(0x50000500);

typename peripheral_t<STM32F373, ADC>::T& peripheral_t<STM32F373, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, ADC>::T*>(0x40012400);

typename peripheral_t<STM32F3x8, ADC1>::T& peripheral_t<STM32F3x8, ADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, ADC1>::T*>(0x50000000);

typename peripheral_t<STM32F3x4, ADC_Common>::T& peripheral_t<STM32F3x4, ADC_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, ADC_Common>::T*>(0x50000300);

typename peripheral_t<STM32F302, CAN>::T& peripheral_t<STM32F302, CAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, CAN>::T*>(0x40006400);

typename peripheral_t<STM32F303, CAN>::T& peripheral_t<STM32F303, CAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, CAN>::T*>(0x40006400);

typename peripheral_t<STM32F373, CAN>::T& peripheral_t<STM32F373, CAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, CAN>::T*>(0x40006400);

typename peripheral_t<STM32F3x4, CAN>::T& peripheral_t<STM32F3x4, CAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, CAN>::T*>(0x40006400);

typename peripheral_t<STM32F3x8, CAN>::T& peripheral_t<STM32F3x8, CAN>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, CAN>::T*>(0x40006400);

typename peripheral_t<STM32F373, CEC>::T& peripheral_t<STM32F373, CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, CEC>::T*>(0x40007800);

typename peripheral_t<STM32F301, CRC>::T& peripheral_t<STM32F301, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F302, CRC>::T& peripheral_t<STM32F302, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F303, CRC>::T& peripheral_t<STM32F303, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F373, CRC>::T& peripheral_t<STM32F373, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F3x4, CRC>::T& peripheral_t<STM32F3x4, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F3x8, CRC>::T& peripheral_t<STM32F3x8, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, CRC>::T*>(0x40023000);

typename peripheral_t<STM32F301, DAC1>::T& peripheral_t<STM32F301, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F302, DAC>::T& peripheral_t<STM32F302, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, DAC>::T*>(0x40007400);

typename peripheral_t<STM32F303, DAC>::T& peripheral_t<STM32F303, DAC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, DAC>::T*>(0x40007400);

typename peripheral_t<STM32F373, DAC1>::T& peripheral_t<STM32F373, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F3x4, DAC1>::T& peripheral_t<STM32F3x4, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F3x4, DAC2>::T& peripheral_t<STM32F3x4, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, DAC2>::T*>(0x40009800);

typename peripheral_t<STM32F3x8, DAC1>::T& peripheral_t<STM32F3x8, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32F301, DAC2>::T& peripheral_t<STM32F301, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, DAC2>::T*>(0x40009800);

typename peripheral_t<STM32F373, DAC2>::T& peripheral_t<STM32F373, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, DAC2>::T*>(0x40009800);

typename peripheral_t<STM32F3x8, DAC2>::T& peripheral_t<STM32F3x8, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, DAC2>::T*>(0x40009800);

typename peripheral_t<STM32F301, DBGMCU>::T& peripheral_t<STM32F301, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F302, DBGMCU>::T& peripheral_t<STM32F302, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F303, DBGMCU>::T& peripheral_t<STM32F303, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F373, DBGMCU>::T& peripheral_t<STM32F373, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F3x4, DBGMCU>::T& peripheral_t<STM32F3x4, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F3x8, DBGMCU>::T& peripheral_t<STM32F3x8, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, DBGMCU>::T*>(0xe0042000);

typename peripheral_t<STM32F301, DMA1>::T& peripheral_t<STM32F301, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F302, DMA1>::T& peripheral_t<STM32F302, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F302, DMA2>::T& peripheral_t<STM32F302, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F303, DMA1>::T& peripheral_t<STM32F303, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F303, DMA2>::T& peripheral_t<STM32F303, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F373, DMA1>::T& peripheral_t<STM32F373, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F373, DMA2>::T& peripheral_t<STM32F373, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F3x4, DMA1>::T& peripheral_t<STM32F3x4, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F3x8, DMA1>::T& peripheral_t<STM32F3x8, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32F3x8, DMA2>::T& peripheral_t<STM32F3x8, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32F301, EXTI>::T& peripheral_t<STM32F301, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F3x8, EXTI>::T& peripheral_t<STM32F3x8, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F302, EXTI>::T& peripheral_t<STM32F302, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F303, EXTI>::T& peripheral_t<STM32F303, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F373, EXTI>::T& peripheral_t<STM32F373, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F3x4, EXTI>::T& peripheral_t<STM32F3x4, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, EXTI>::T*>(0x40010400);

typename peripheral_t<STM32F302, FMC>::T& peripheral_t<STM32F302, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, FMC>::T*>(0xa0000000);

typename peripheral_t<STM32F303, FMC>::T& peripheral_t<STM32F303, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, FMC>::T*>(0xa0000400);

typename peripheral_t<STM32F3x8, FMC>::T& peripheral_t<STM32F3x8, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, FMC>::T*>(0xa0000400);

typename peripheral_t<STM32F301, FPU>::T& peripheral_t<STM32F301, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F302, FPU>::T& peripheral_t<STM32F302, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F303, FPU>::T& peripheral_t<STM32F303, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F373, FPU>::T& peripheral_t<STM32F373, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F3x4, FPU>::T& peripheral_t<STM32F3x4, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F3x8, FPU>::T& peripheral_t<STM32F3x8, FPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, FPU>::T*>(0xe000ef34);

typename peripheral_t<STM32F301, FPU_CPACR>::T& peripheral_t<STM32F301, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F302, FPU_CPACR>::T& peripheral_t<STM32F302, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F303, FPU_CPACR>::T& peripheral_t<STM32F303, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F373, FPU_CPACR>::T& peripheral_t<STM32F373, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F3x4, FPU_CPACR>::T& peripheral_t<STM32F3x4, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F3x8, FPU_CPACR>::T& peripheral_t<STM32F3x8, FPU_CPACR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, FPU_CPACR>::T*>(0xe000ed88);

typename peripheral_t<STM32F301, Flash>::T& peripheral_t<STM32F301, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F302, Flash>::T& peripheral_t<STM32F302, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F303, Flash>::T& peripheral_t<STM32F303, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F3x4, Flash>::T& peripheral_t<STM32F3x4, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F373, Flash>::T& peripheral_t<STM32F373, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F3x8, Flash>::T& peripheral_t<STM32F3x8, Flash>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, Flash>::T*>(0x40022000);

typename peripheral_t<STM32F301, GPIOA>::T& peripheral_t<STM32F301, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F301, GPIOB>::T& peripheral_t<STM32F301, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F3x4, GPIOB>::T& peripheral_t<STM32F3x4, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F301, GPIOC>::T& peripheral_t<STM32F301, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F301, GPIOD>::T& peripheral_t<STM32F301, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F301, GPIOF>::T& peripheral_t<STM32F301, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F3x4, GPIOC>::T& peripheral_t<STM32F3x4, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F3x4, GPIOD>::T& peripheral_t<STM32F3x4, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F3x4, GPIOF>::T& peripheral_t<STM32F3x4, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F302, GPIOA>::T& peripheral_t<STM32F302, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F303, GPIOA>::T& peripheral_t<STM32F303, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F373, GPIOA>::T& peripheral_t<STM32F373, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F3x4, GPIOA>::T& peripheral_t<STM32F3x4, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F3x8, GPIOA>::T& peripheral_t<STM32F3x8, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOA>::T*>(0x48000000);

typename peripheral_t<STM32F3x8, GPIOH>::T& peripheral_t<STM32F3x8, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOH>::T*>(0x48001c00);

typename peripheral_t<STM32F302, GPIOB>::T& peripheral_t<STM32F302, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F302, GPIOC>::T& peripheral_t<STM32F302, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F302, GPIOD>::T& peripheral_t<STM32F302, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F302, GPIOE>::T& peripheral_t<STM32F302, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32F302, GPIOF>::T& peripheral_t<STM32F302, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F302, GPIOG>::T& peripheral_t<STM32F302, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32F302, GPIOH>::T& peripheral_t<STM32F302, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, GPIOH>::T*>(0x48001c00);

typename peripheral_t<STM32F303, GPIOB>::T& peripheral_t<STM32F303, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F303, GPIOC>::T& peripheral_t<STM32F303, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F303, GPIOD>::T& peripheral_t<STM32F303, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F303, GPIOE>::T& peripheral_t<STM32F303, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32F303, GPIOF>::T& peripheral_t<STM32F303, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F303, GPIOG>::T& peripheral_t<STM32F303, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32F303, GPIOH>::T& peripheral_t<STM32F303, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, GPIOH>::T*>(0x48001c00);

typename peripheral_t<STM32F373, GPIOB>::T& peripheral_t<STM32F373, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F373, GPIOD>::T& peripheral_t<STM32F373, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F3x8, GPIOB>::T& peripheral_t<STM32F3x8, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOB>::T*>(0x48000400);

typename peripheral_t<STM32F3x8, GPIOD>::T& peripheral_t<STM32F3x8, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOD>::T*>(0x48000c00);

typename peripheral_t<STM32F373, GPIOC>::T& peripheral_t<STM32F373, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F373, GPIOE>::T& peripheral_t<STM32F373, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32F373, GPIOF>::T& peripheral_t<STM32F373, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F3x8, GPIOC>::T& peripheral_t<STM32F3x8, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOC>::T*>(0x48000800);

typename peripheral_t<STM32F3x8, GPIOE>::T& peripheral_t<STM32F3x8, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOE>::T*>(0x48001000);

typename peripheral_t<STM32F3x8, GPIOF>::T& peripheral_t<STM32F3x8, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOF>::T*>(0x48001400);

typename peripheral_t<STM32F3x8, GPIOG>::T& peripheral_t<STM32F3x8, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, GPIOG>::T*>(0x48001800);

typename peripheral_t<STM32F3x4, HRTIM_Master>::T& peripheral_t<STM32F3x4, HRTIM_Master>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_Master>::T*>(0x40017400);

typename peripheral_t<STM32F3x4, HRTIM_TIMA>::T& peripheral_t<STM32F3x4, HRTIM_TIMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_TIMA>::T*>(0x40017480);

typename peripheral_t<STM32F3x4, HRTIM_TIMB>::T& peripheral_t<STM32F3x4, HRTIM_TIMB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_TIMB>::T*>(0x40017500);

typename peripheral_t<STM32F3x4, HRTIM_TIMC>::T& peripheral_t<STM32F3x4, HRTIM_TIMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_TIMC>::T*>(0x40017580);

typename peripheral_t<STM32F3x4, HRTIM_TIMD>::T& peripheral_t<STM32F3x4, HRTIM_TIMD>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_TIMD>::T*>(0x40017600);

typename peripheral_t<STM32F3x4, HRTIM_TIME>::T& peripheral_t<STM32F3x4, HRTIM_TIME>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_TIME>::T*>(0x40017680);

typename peripheral_t<STM32F3x4, HRTIM_Common>::T& peripheral_t<STM32F3x4, HRTIM_Common>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, HRTIM_Common>::T*>(0x40017780);

typename peripheral_t<STM32F301, I2C1>::T& peripheral_t<STM32F301, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F301, I2C2>::T& peripheral_t<STM32F301, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F301, I2C3>::T& peripheral_t<STM32F301, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32F302, I2C1>::T& peripheral_t<STM32F302, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F302, I2C2>::T& peripheral_t<STM32F302, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F302, I2C3>::T& peripheral_t<STM32F302, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32F303, I2C1>::T& peripheral_t<STM32F303, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F303, I2C2>::T& peripheral_t<STM32F303, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F303, I2C3>::T& peripheral_t<STM32F303, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32F373, I2C1>::T& peripheral_t<STM32F373, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F373, I2C2>::T& peripheral_t<STM32F373, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F3x4, I2C1>::T& peripheral_t<STM32F3x4, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F3x4, I2C2>::T& peripheral_t<STM32F3x4, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F3x4, I2C3>::T& peripheral_t<STM32F3x4, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32F3x8, I2C1>::T& peripheral_t<STM32F3x8, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32F3x8, I2C2>::T& peripheral_t<STM32F3x8, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32F3x8, I2C3>::T& peripheral_t<STM32F3x8, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, I2C3>::T*>(0x40007800);

typename peripheral_t<STM32F301, IWDG>::T& peripheral_t<STM32F301, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F302, IWDG>::T& peripheral_t<STM32F302, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F303, IWDG>::T& peripheral_t<STM32F303, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F373, IWDG>::T& peripheral_t<STM32F373, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F3x4, IWDG>::T& peripheral_t<STM32F3x4, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F3x8, IWDG>::T& peripheral_t<STM32F3x8, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32F301, MPU>::T& peripheral_t<STM32F301, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F302, MPU>::T& peripheral_t<STM32F302, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F303, MPU>::T& peripheral_t<STM32F303, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F373, MPU>::T& peripheral_t<STM32F373, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F3x4, MPU>::T& peripheral_t<STM32F3x4, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F3x8, MPU>::T& peripheral_t<STM32F3x8, MPU>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, MPU>::T*>(0xe000ed90);

typename peripheral_t<STM32F301, NVIC>::T& peripheral_t<STM32F301, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F302, NVIC>::T& peripheral_t<STM32F302, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F373, NVIC>::T& peripheral_t<STM32F373, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F3x4, NVIC>::T& peripheral_t<STM32F3x4, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F3x8, NVIC>::T& peripheral_t<STM32F3x8, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F301, NVIC_STIR>::T& peripheral_t<STM32F301, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F302, NVIC_STIR>::T& peripheral_t<STM32F302, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F303, NVIC_STIR>::T& peripheral_t<STM32F303, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F373, NVIC_STIR>::T& peripheral_t<STM32F373, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F3x4, NVIC_STIR>::T& peripheral_t<STM32F3x4, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F3x8, NVIC_STIR>::T& peripheral_t<STM32F3x8, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32F303, NVIC>::T& peripheral_t<STM32F303, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32F301, PWR>::T& peripheral_t<STM32F301, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F373, PWR>::T& peripheral_t<STM32F373, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F3x8, PWR>::T& peripheral_t<STM32F3x8, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F302, PWR>::T& peripheral_t<STM32F302, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F303, PWR>::T& peripheral_t<STM32F303, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F3x4, PWR>::T& peripheral_t<STM32F3x4, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, PWR>::T*>(0x40007000);

typename peripheral_t<STM32F301, RCC>::T& peripheral_t<STM32F301, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F302, RCC>::T& peripheral_t<STM32F302, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F303, RCC>::T& peripheral_t<STM32F303, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F373, RCC>::T& peripheral_t<STM32F373, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F3x8, RCC>::T& peripheral_t<STM32F3x8, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F3x4, RCC>::T& peripheral_t<STM32F3x4, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, RCC>::T*>(0x40021000);

typename peripheral_t<STM32F301, RTC>::T& peripheral_t<STM32F301, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F373, RTC>::T& peripheral_t<STM32F373, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F3x8, RTC>::T& peripheral_t<STM32F3x8, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F302, RTC>::T& peripheral_t<STM32F302, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F303, RTC>::T& peripheral_t<STM32F303, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F3x4, RTC>::T& peripheral_t<STM32F3x4, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, RTC>::T*>(0x40002800);

typename peripheral_t<STM32F301, SCB>::T& peripheral_t<STM32F301, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F302, SCB>::T& peripheral_t<STM32F302, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F303, SCB>::T& peripheral_t<STM32F303, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F373, SCB>::T& peripheral_t<STM32F373, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F3x4, SCB>::T& peripheral_t<STM32F3x4, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F3x8, SCB>::T& peripheral_t<STM32F3x8, SCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SCB>::T*>(0xe000ed00);

typename peripheral_t<STM32F301, SCB_ACTRL>::T& peripheral_t<STM32F301, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F302, SCB_ACTRL>::T& peripheral_t<STM32F302, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F303, SCB_ACTRL>::T& peripheral_t<STM32F303, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F373, SCB_ACTRL>::T& peripheral_t<STM32F373, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F3x4, SCB_ACTRL>::T& peripheral_t<STM32F3x4, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F3x8, SCB_ACTRL>::T& peripheral_t<STM32F3x8, SCB_ACTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SCB_ACTRL>::T*>(0xe000e008);

typename peripheral_t<STM32F373, SDADC1>::T& peripheral_t<STM32F373, SDADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SDADC1>::T*>(0x40016000);

typename peripheral_t<STM32F373, SDADC2>::T& peripheral_t<STM32F373, SDADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SDADC2>::T*>(0x40016400);

typename peripheral_t<STM32F373, SDADC3>::T& peripheral_t<STM32F373, SDADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SDADC3>::T*>(0x40016800);

typename peripheral_t<STM32F3x8, SDADC1>::T& peripheral_t<STM32F3x8, SDADC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SDADC1>::T*>(0x40016000);

typename peripheral_t<STM32F3x8, SDADC2>::T& peripheral_t<STM32F3x8, SDADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SDADC2>::T*>(0x40016400);

typename peripheral_t<STM32F3x8, SDADC3>::T& peripheral_t<STM32F3x8, SDADC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SDADC3>::T*>(0x40016800);

typename peripheral_t<STM32F301, SPI1>::T& peripheral_t<STM32F301, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F301, SPI2>::T& peripheral_t<STM32F301, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F301, SPI3>::T& peripheral_t<STM32F301, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F301, I2S2ext>::T& peripheral_t<STM32F301, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F301, I2S3ext>::T& peripheral_t<STM32F301, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F373, SPI1>::T& peripheral_t<STM32F373, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F373, SPI2>::T& peripheral_t<STM32F373, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F373, SPI3>::T& peripheral_t<STM32F373, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F373, I2S2ext>::T& peripheral_t<STM32F373, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F373, I2S3ext>::T& peripheral_t<STM32F373, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F3x4, SPI3>::T& peripheral_t<STM32F3x4, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F3x4, SPI1>::T& peripheral_t<STM32F3x4, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F3x8, SPI1>::T& peripheral_t<STM32F3x8, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F3x8, SPI2>::T& peripheral_t<STM32F3x8, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F3x8, SPI3>::T& peripheral_t<STM32F3x8, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F3x8, I2S2ext>::T& peripheral_t<STM32F3x8, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F3x8, I2S3ext>::T& peripheral_t<STM32F3x8, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F3x8, SPI4>::T& peripheral_t<STM32F3x8, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32F302, SPI1>::T& peripheral_t<STM32F302, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F302, SPI2>::T& peripheral_t<STM32F302, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F302, SPI3>::T& peripheral_t<STM32F302, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F302, SPI4>::T& peripheral_t<STM32F302, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32F303, SPI1>::T& peripheral_t<STM32F303, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32F303, SPI2>::T& peripheral_t<STM32F303, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F303, SPI3>::T& peripheral_t<STM32F303, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32F303, SPI4>::T& peripheral_t<STM32F303, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SPI4>::T*>(0x40013c00);

typename peripheral_t<STM32F302, I2S2ext>::T& peripheral_t<STM32F302, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F302, I2S3ext>::T& peripheral_t<STM32F302, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F303, I2S2ext>::T& peripheral_t<STM32F303, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F303, I2S3ext>::T& peripheral_t<STM32F303, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F3x4, SPI2>::T& peripheral_t<STM32F3x4, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32F3x4, I2S2ext>::T& peripheral_t<STM32F3x4, I2S2ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, I2S2ext>::T*>(0x40003400);

typename peripheral_t<STM32F3x4, I2S3ext>::T& peripheral_t<STM32F3x4, I2S3ext>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, I2S3ext>::T*>(0x40004000);

typename peripheral_t<STM32F301, STK>::T& peripheral_t<STM32F301, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F302, STK>::T& peripheral_t<STM32F302, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F303, STK>::T& peripheral_t<STM32F303, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F373, STK>::T& peripheral_t<STM32F373, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F3x4, STK>::T& peripheral_t<STM32F3x4, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F3x8, STK>::T& peripheral_t<STM32F3x8, STK>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, STK>::T*>(0xe000e010);

typename peripheral_t<STM32F301, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F301, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F302, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F302, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F373, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F373, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F3x8, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F3x8, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F3x4, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F3x4, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F303, SYSCFG_COMP_OPAMP>::T& peripheral_t<STM32F303, SYSCFG_COMP_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, SYSCFG_COMP_OPAMP>::T*>(0x40010000);

typename peripheral_t<STM32F301, TIM2>::T& peripheral_t<STM32F301, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F301, TIM15>::T& peripheral_t<STM32F301, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F373, TIM15>::T& peripheral_t<STM32F373, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F3x8, TIM15>::T& peripheral_t<STM32F3x8, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F301, TIM16>::T& peripheral_t<STM32F301, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F301, TIM17>::T& peripheral_t<STM32F301, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F373, TIM16>::T& peripheral_t<STM32F373, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F373, TIM17>::T& peripheral_t<STM32F373, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F3x8, TIM16>::T& peripheral_t<STM32F3x8, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F3x8, TIM17>::T& peripheral_t<STM32F3x8, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F3x8, TIM20>::T& peripheral_t<STM32F3x8, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32F301, TIM6>::T& peripheral_t<STM32F301, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F301, TIM7>::T& peripheral_t<STM32F301, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F373, TIM6>::T& peripheral_t<STM32F373, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F373, TIM7>::T& peripheral_t<STM32F373, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F373, TIM18>::T& peripheral_t<STM32F373, TIM18>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM18>::T*>(0x40009c00);

typename peripheral_t<STM32F3x8, TIM6>::T& peripheral_t<STM32F3x8, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F3x8, TIM7>::T& peripheral_t<STM32F3x8, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F3x8, TIM18>::T& peripheral_t<STM32F3x8, TIM18>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM18>::T*>(0x40009c00);

typename peripheral_t<STM32F301, TIM1>::T& peripheral_t<STM32F301, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F373, TIM2>::T& peripheral_t<STM32F373, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F3x8, TIM2>::T& peripheral_t<STM32F3x8, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F373, TIM5>::T& peripheral_t<STM32F373, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F3x8, TIM5>::T& peripheral_t<STM32F3x8, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32F373, TIM3>::T& peripheral_t<STM32F373, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F373, TIM4>::T& peripheral_t<STM32F373, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F373, TIM19>::T& peripheral_t<STM32F373, TIM19>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM19>::T*>(0x40015c00);

typename peripheral_t<STM32F3x4, TIM3>::T& peripheral_t<STM32F3x4, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F3x8, TIM3>::T& peripheral_t<STM32F3x8, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F3x8, TIM4>::T& peripheral_t<STM32F3x8, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F3x8, TIM19>::T& peripheral_t<STM32F3x8, TIM19>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM19>::T*>(0x40015c00);

typename peripheral_t<STM32F373, TIM13>::T& peripheral_t<STM32F373, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F373, TIM14>::T& peripheral_t<STM32F373, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F3x8, TIM13>::T& peripheral_t<STM32F3x8, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM13>::T*>(0x40001c00);

typename peripheral_t<STM32F3x8, TIM14>::T& peripheral_t<STM32F3x8, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM14>::T*>(0x40002000);

typename peripheral_t<STM32F373, TIM12>::T& peripheral_t<STM32F373, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F3x8, TIM12>::T& peripheral_t<STM32F3x8, TIM12>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM12>::T*>(0x40001800);

typename peripheral_t<STM32F302, TIM2>::T& peripheral_t<STM32F302, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F302, TIM3>::T& peripheral_t<STM32F302, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F302, TIM4>::T& peripheral_t<STM32F302, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F303, TIM2>::T& peripheral_t<STM32F303, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F303, TIM3>::T& peripheral_t<STM32F303, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32F303, TIM4>::T& peripheral_t<STM32F303, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32F302, TIM15>::T& peripheral_t<STM32F302, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F303, TIM15>::T& peripheral_t<STM32F303, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F3x4, TIM15>::T& peripheral_t<STM32F3x4, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32F302, TIM16>::T& peripheral_t<STM32F302, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F302, TIM17>::T& peripheral_t<STM32F302, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F303, TIM16>::T& peripheral_t<STM32F303, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F303, TIM17>::T& peripheral_t<STM32F303, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F3x4, TIM16>::T& peripheral_t<STM32F3x4, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32F3x4, TIM17>::T& peripheral_t<STM32F3x4, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32F302, TIM6>::T& peripheral_t<STM32F302, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F302, TIM7>::T& peripheral_t<STM32F302, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F303, TIM6>::T& peripheral_t<STM32F303, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F303, TIM7>::T& peripheral_t<STM32F303, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F3x4, TIM6>::T& peripheral_t<STM32F3x4, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32F3x4, TIM7>::T& peripheral_t<STM32F3x4, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32F302, TIM1>::T& peripheral_t<STM32F302, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F302, TIM20>::T& peripheral_t<STM32F302, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32F303, TIM1>::T& peripheral_t<STM32F303, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F303, TIM20>::T& peripheral_t<STM32F303, TIM20>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM20>::T*>(0x40015000);

typename peripheral_t<STM32F3x4, TIM1>::T& peripheral_t<STM32F3x4, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F3x8, TIM1>::T& peripheral_t<STM32F3x8, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32F3x8, TIM8>::T& peripheral_t<STM32F3x8, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F302, TIM8>::T& peripheral_t<STM32F302, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F303, TIM8>::T& peripheral_t<STM32F303, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32F3x4, TIM2>::T& peripheral_t<STM32F3x4, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32F301, TSC>::T& peripheral_t<STM32F301, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F302, TSC>::T& peripheral_t<STM32F302, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F303, TSC>::T& peripheral_t<STM32F303, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F373, TSC>::T& peripheral_t<STM32F373, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F3x4, TSC>::T& peripheral_t<STM32F3x4, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F3x8, TSC>::T& peripheral_t<STM32F3x8, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, TSC>::T*>(0x40024000);

typename peripheral_t<STM32F301, USART1>::T& peripheral_t<STM32F301, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F301, USART2>::T& peripheral_t<STM32F301, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F301, USART3>::T& peripheral_t<STM32F301, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F302, USART1>::T& peripheral_t<STM32F302, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F302, USART2>::T& peripheral_t<STM32F302, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F302, USART3>::T& peripheral_t<STM32F302, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F302, UART4>::T& peripheral_t<STM32F302, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F302, UART5>::T& peripheral_t<STM32F302, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F303, USART1>::T& peripheral_t<STM32F303, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F303, USART2>::T& peripheral_t<STM32F303, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F303, USART3>::T& peripheral_t<STM32F303, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F303, UART4>::T& peripheral_t<STM32F303, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F303, UART5>::T& peripheral_t<STM32F303, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F373, USART1>::T& peripheral_t<STM32F373, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F373, USART2>::T& peripheral_t<STM32F373, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F373, USART3>::T& peripheral_t<STM32F373, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F3x4, USART1>::T& peripheral_t<STM32F3x4, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F3x4, USART2>::T& peripheral_t<STM32F3x4, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F3x4, USART3>::T& peripheral_t<STM32F3x4, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F3x8, USART1>::T& peripheral_t<STM32F3x8, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, USART1>::T*>(0x40013800);

typename peripheral_t<STM32F3x8, USART2>::T& peripheral_t<STM32F3x8, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, USART2>::T*>(0x40004400);

typename peripheral_t<STM32F3x8, USART3>::T& peripheral_t<STM32F3x8, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, USART3>::T*>(0x40004800);

typename peripheral_t<STM32F3x8, UART4>::T& peripheral_t<STM32F3x8, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32F3x8, UART5>::T& peripheral_t<STM32F3x8, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, UART5>::T*>(0x40005000);

typename peripheral_t<STM32F302, USB_FS>::T& peripheral_t<STM32F302, USB_FS>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, USB_FS>::T*>(0x40005c00);

typename peripheral_t<STM32F303, USB_FS>::T& peripheral_t<STM32F303, USB_FS>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, USB_FS>::T*>(0x40005c00);

typename peripheral_t<STM32F373, USB>::T& peripheral_t<STM32F373, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F3x8, USB>::T& peripheral_t<STM32F3x8, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, USB>::T*>(0x40005c00);

typename peripheral_t<STM32F301, WWDG>::T& peripheral_t<STM32F301, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F301, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F302, WWDG>::T& peripheral_t<STM32F302, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F302, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F303, WWDG>::T& peripheral_t<STM32F303, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F303, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F373, WWDG>::T& peripheral_t<STM32F373, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F373, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F3x4, WWDG>::T& peripheral_t<STM32F3x4, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x4, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32F3x8, WWDG>::T& peripheral_t<STM32F3x8, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32F3x8, WWDG>::T*>(0x40002c00);

