#pragma once

////
//
//      STM32WB peripheral instances
//
///

typename peripheral_t<STM32WB10_CM4, ADC1>::T&
    peripheral_t<STM32WB10_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, ADC1>::T*
        >(0x40012400);

typename peripheral_t<STM32WB15_CM4, ADC1>::T&
    peripheral_t<STM32WB15_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, ADC1>::T*
        >(0x40012400);

typename peripheral_t<STM32WB30_CM4, ADC1>::T&
    peripheral_t<STM32WB30_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32WB35_CM4, ADC1>::T&
    peripheral_t<STM32WB35_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32WB50_CM4, ADC1>::T&
    peripheral_t<STM32WB50_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32WB55_CM4, ADC1>::T&
    peripheral_t<STM32WB55_CM4, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, ADC1>::T*
        >(0x50040000);

typename peripheral_t<STM32WB35_CM4, AES1>::T&
    peripheral_t<STM32WB35_CM4, AES1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, AES1>::T*
        >(0x50060000);

typename peripheral_t<STM32WB55_CM4, AES1>::T&
    peripheral_t<STM32WB55_CM4, AES1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, AES1>::T*
        >(0x50060000);

typename peripheral_t<STM32WB15_CM4, AES2>::T&
    peripheral_t<STM32WB15_CM4, AES2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, AES2>::T*
        >(0x58001800);

typename peripheral_t<STM32WB30_CM4, AES2>::T&
    peripheral_t<STM32WB30_CM4, AES2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, AES2>::T*
        >(0x58001800);

typename peripheral_t<STM32WB35_CM4, AES2>::T&
    peripheral_t<STM32WB35_CM4, AES2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, AES2>::T*
        >(0x58001800);

typename peripheral_t<STM32WB50_CM4, AES2>::T&
    peripheral_t<STM32WB50_CM4, AES2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, AES2>::T*
        >(0x58001800);

typename peripheral_t<STM32WB55_CM4, AES2>::T&
    peripheral_t<STM32WB55_CM4, AES2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, AES2>::T*
        >(0x58001800);

typename peripheral_t<STM32WB15_CM4, COMP>::T&
    peripheral_t<STM32WB15_CM4, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WB35_CM4, COMP>::T&
    peripheral_t<STM32WB35_CM4, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WB55_CM4, COMP>::T&
    peripheral_t<STM32WB55_CM4, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, COMP>::T*
        >(0x40010200);

typename peripheral_t<STM32WB10_CM4, CRC>::T&
    peripheral_t<STM32WB10_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB15_CM4, CRC>::T&
    peripheral_t<STM32WB15_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB30_CM4, CRC>::T&
    peripheral_t<STM32WB30_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB35_CM4, CRC>::T&
    peripheral_t<STM32WB35_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB50_CM4, CRC>::T&
    peripheral_t<STM32WB50_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB55_CM4, CRC>::T&
    peripheral_t<STM32WB55_CM4, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32WB35_CM4, CRS>::T&
    peripheral_t<STM32WB35_CM4, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32WB55_CM4, CRS>::T&
    peripheral_t<STM32WB55_CM4, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32WB10_CM4, DBGMCU>::T&
    peripheral_t<STM32WB10_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB15_CM4, DBGMCU>::T&
    peripheral_t<STM32WB15_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB30_CM4, DBGMCU>::T&
    peripheral_t<STM32WB30_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB35_CM4, DBGMCU>::T&
    peripheral_t<STM32WB35_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB50_CM4, DBGMCU>::T&
    peripheral_t<STM32WB50_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB55_CM4, DBGMCU>::T&
    peripheral_t<STM32WB55_CM4, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, DBGMCU>::T*
        >(0xe0042000);

typename peripheral_t<STM32WB10_CM4, DMA1>::T&
    peripheral_t<STM32WB10_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB15_CM4, DMA1>::T&
    peripheral_t<STM32WB15_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB30_CM4, DMA1>::T&
    peripheral_t<STM32WB30_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB35_CM4, DMA1>::T&
    peripheral_t<STM32WB35_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB50_CM4, DMA1>::T&
    peripheral_t<STM32WB50_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB55_CM4, DMA1>::T&
    peripheral_t<STM32WB55_CM4, DMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, DMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32WB35_CM4, DMA2>::T&
    peripheral_t<STM32WB35_CM4, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WB50_CM4, DMA2>::T&
    peripheral_t<STM32WB50_CM4, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WB55_CM4, DMA2>::T&
    peripheral_t<STM32WB55_CM4, DMA2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, DMA2>::T*
        >(0x40020400);

typename peripheral_t<STM32WB10_CM4, DMAMUX>::T&
    peripheral_t<STM32WB10_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WB15_CM4, DMAMUX>::T&
    peripheral_t<STM32WB15_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WB30_CM4, DMAMUX>::T&
    peripheral_t<STM32WB30_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WB35_CM4, DMAMUX>::T&
    peripheral_t<STM32WB35_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WB50_CM4, DMAMUX>::T&
    peripheral_t<STM32WB50_CM4, DMAMUX>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, DMAMUX>::T*
        >(0x40020800);

typename peripheral_t<STM32WB55_CM4, DMAMUX1>::T&
    peripheral_t<STM32WB55_CM4, DMAMUX1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, DMAMUX1>::T*
        >(0x40020800);

typename peripheral_t<STM32WB10_CM4, EXTI>::T&
    peripheral_t<STM32WB10_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB15_CM4, EXTI>::T&
    peripheral_t<STM32WB15_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB30_CM4, EXTI>::T&
    peripheral_t<STM32WB30_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB35_CM4, EXTI>::T&
    peripheral_t<STM32WB35_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB50_CM4, EXTI>::T&
    peripheral_t<STM32WB50_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB55_CM4, EXTI>::T&
    peripheral_t<STM32WB55_CM4, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, EXTI>::T*
        >(0x58000800);

typename peripheral_t<STM32WB10_CM4, FLASH>::T&
    peripheral_t<STM32WB10_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB15_CM4, FLASH>::T&
    peripheral_t<STM32WB15_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB30_CM4, FLASH>::T&
    peripheral_t<STM32WB30_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB35_CM4, FLASH>::T&
    peripheral_t<STM32WB35_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB50_CM4, FLASH>::T&
    peripheral_t<STM32WB50_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB55_CM4, FLASH>::T&
    peripheral_t<STM32WB55_CM4, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, FLASH>::T*
        >(0x58004000);

typename peripheral_t<STM32WB10_CM4, FPU>::T&
    peripheral_t<STM32WB10_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB15_CM4, FPU>::T&
    peripheral_t<STM32WB15_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB30_CM4, FPU>::T&
    peripheral_t<STM32WB30_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB35_CM4, FPU>::T&
    peripheral_t<STM32WB35_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB50_CM4, FPU>::T&
    peripheral_t<STM32WB50_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB55_CM4, FPU>::T&
    peripheral_t<STM32WB55_CM4, FPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, FPU>::T*
        >(0xe000ef34);

typename peripheral_t<STM32WB10_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB10_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB15_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB15_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB30_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB30_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB35_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB35_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB50_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB50_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB55_CM4, FPU_CPACR>::T&
    peripheral_t<STM32WB55_CM4, FPU_CPACR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, FPU_CPACR>::T*
        >(0xe000ed88);

typename peripheral_t<STM32WB10_CM4, GPIOA>::T&
    peripheral_t<STM32WB10_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB15_CM4, GPIOA>::T&
    peripheral_t<STM32WB15_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB30_CM4, GPIOA>::T&
    peripheral_t<STM32WB30_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB35_CM4, GPIOA>::T&
    peripheral_t<STM32WB35_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB50_CM4, GPIOA>::T&
    peripheral_t<STM32WB50_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB55_CM4, GPIOA>::T&
    peripheral_t<STM32WB55_CM4, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOA>::T*
        >(0x48000000);

typename peripheral_t<STM32WB10_CM4, GPIOB>::T&
    peripheral_t<STM32WB10_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB15_CM4, GPIOB>::T&
    peripheral_t<STM32WB15_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB30_CM4, GPIOB>::T&
    peripheral_t<STM32WB30_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB35_CM4, GPIOB>::T&
    peripheral_t<STM32WB35_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB50_CM4, GPIOB>::T&
    peripheral_t<STM32WB50_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB55_CM4, GPIOB>::T&
    peripheral_t<STM32WB55_CM4, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOB>::T*
        >(0x48000400);

typename peripheral_t<STM32WB10_CM4, GPIOC>::T&
    peripheral_t<STM32WB10_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB15_CM4, GPIOC>::T&
    peripheral_t<STM32WB15_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB30_CM4, GPIOC>::T&
    peripheral_t<STM32WB30_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB35_CM4, GPIOC>::T&
    peripheral_t<STM32WB35_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB50_CM4, GPIOC>::T&
    peripheral_t<STM32WB50_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB55_CM4, GPIOC>::T&
    peripheral_t<STM32WB55_CM4, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOC>::T*
        >(0x48000800);

typename peripheral_t<STM32WB55_CM4, GPIOD>::T&
    peripheral_t<STM32WB55_CM4, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOD>::T*
        >(0x48000c00);

typename peripheral_t<STM32WB10_CM4, GPIOE>::T&
    peripheral_t<STM32WB10_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB15_CM4, GPIOE>::T&
    peripheral_t<STM32WB15_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB30_CM4, GPIOE>::T&
    peripheral_t<STM32WB30_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB35_CM4, GPIOE>::T&
    peripheral_t<STM32WB35_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB50_CM4, GPIOE>::T&
    peripheral_t<STM32WB50_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB55_CM4, GPIOE>::T&
    peripheral_t<STM32WB55_CM4, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOE>::T*
        >(0x48001000);

typename peripheral_t<STM32WB10_CM4, GPIOH>::T&
    peripheral_t<STM32WB10_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB15_CM4, GPIOH>::T&
    peripheral_t<STM32WB15_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB30_CM4, GPIOH>::T&
    peripheral_t<STM32WB30_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB35_CM4, GPIOH>::T&
    peripheral_t<STM32WB35_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB50_CM4, GPIOH>::T&
    peripheral_t<STM32WB50_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB55_CM4, GPIOH>::T&
    peripheral_t<STM32WB55_CM4, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, GPIOH>::T*
        >(0x48001c00);

typename peripheral_t<STM32WB10_CM4, HSEM>::T&
    peripheral_t<STM32WB10_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB15_CM4, HSEM>::T&
    peripheral_t<STM32WB15_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB30_CM4, HSEM>::T&
    peripheral_t<STM32WB30_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB35_CM4, HSEM>::T&
    peripheral_t<STM32WB35_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB50_CM4, HSEM>::T&
    peripheral_t<STM32WB50_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB55_CM4, HSEM>::T&
    peripheral_t<STM32WB55_CM4, HSEM>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, HSEM>::T*
        >(0x58001400);

typename peripheral_t<STM32WB10_CM4, I2C1>::T&
    peripheral_t<STM32WB10_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB15_CM4, I2C1>::T&
    peripheral_t<STM32WB15_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB30_CM4, I2C1>::T&
    peripheral_t<STM32WB30_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB35_CM4, I2C1>::T&
    peripheral_t<STM32WB35_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB35_CM4, I2C3>::T&
    peripheral_t<STM32WB35_CM4, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32WB50_CM4, I2C1>::T&
    peripheral_t<STM32WB50_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB55_CM4, I2C1>::T&
    peripheral_t<STM32WB55_CM4, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32WB55_CM4, I2C3>::T&
    peripheral_t<STM32WB55_CM4, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, I2C3>::T*
        >(0x40005c00);

typename peripheral_t<STM32WB10_CM4, IPCC>::T&
    peripheral_t<STM32WB10_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB15_CM4, IPCC>::T&
    peripheral_t<STM32WB15_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB30_CM4, IPCC>::T&
    peripheral_t<STM32WB30_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB35_CM4, IPCC>::T&
    peripheral_t<STM32WB35_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB50_CM4, IPCC>::T&
    peripheral_t<STM32WB50_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB55_CM4, IPCC>::T&
    peripheral_t<STM32WB55_CM4, IPCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, IPCC>::T*
        >(0x58000c00);

typename peripheral_t<STM32WB10_CM4, IWDG>::T&
    peripheral_t<STM32WB10_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB15_CM4, IWDG>::T&
    peripheral_t<STM32WB15_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB30_CM4, IWDG>::T&
    peripheral_t<STM32WB30_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB35_CM4, IWDG>::T&
    peripheral_t<STM32WB35_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB50_CM4, IWDG>::T&
    peripheral_t<STM32WB50_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB55_CM4, IWDG>::T&
    peripheral_t<STM32WB55_CM4, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32WB55_CM4, LCD>::T&
    peripheral_t<STM32WB55_CM4, LCD>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, LCD>::T*
        >(0x40002400);

typename peripheral_t<STM32WB10_CM4, LPTIM1>::T&
    peripheral_t<STM32WB10_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB10_CM4, LPTIM2>::T&
    peripheral_t<STM32WB10_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB15_CM4, LPTIM1>::T&
    peripheral_t<STM32WB15_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB15_CM4, LPTIM2>::T&
    peripheral_t<STM32WB15_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB30_CM4, LPTIM1>::T&
    peripheral_t<STM32WB30_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB30_CM4, LPTIM2>::T&
    peripheral_t<STM32WB30_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB35_CM4, LPTIM1>::T&
    peripheral_t<STM32WB35_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB35_CM4, LPTIM2>::T&
    peripheral_t<STM32WB35_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB50_CM4, LPTIM1>::T&
    peripheral_t<STM32WB50_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB50_CM4, LPTIM2>::T&
    peripheral_t<STM32WB50_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB55_CM4, LPTIM1>::T&
    peripheral_t<STM32WB55_CM4, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, LPTIM1>::T*
        >(0x40007c00);

typename peripheral_t<STM32WB55_CM4, LPTIM2>::T&
    peripheral_t<STM32WB55_CM4, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32WB10_CM4, MPU>::T&
    peripheral_t<STM32WB10_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB15_CM4, MPU>::T&
    peripheral_t<STM32WB15_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB30_CM4, MPU>::T&
    peripheral_t<STM32WB30_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB35_CM4, MPU>::T&
    peripheral_t<STM32WB35_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB50_CM4, MPU>::T&
    peripheral_t<STM32WB50_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB55_CM4, MPU>::T&
    peripheral_t<STM32WB55_CM4, MPU>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, MPU>::T*
        >(0xe000ed90);

typename peripheral_t<STM32WB10_CM4, NVIC>::T&
    peripheral_t<STM32WB10_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB15_CM4, NVIC>::T&
    peripheral_t<STM32WB15_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB30_CM4, NVIC>::T&
    peripheral_t<STM32WB30_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB35_CM4, NVIC>::T&
    peripheral_t<STM32WB35_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB50_CM4, NVIC>::T&
    peripheral_t<STM32WB50_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB55_CM4, NVIC>::T&
    peripheral_t<STM32WB55_CM4, NVIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, NVIC>::T*
        >(0xe000e100);

typename peripheral_t<STM32WB10_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB10_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB15_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB15_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB30_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB30_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB35_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB35_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB50_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB50_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB55_CM4, NVIC_STIR>::T&
    peripheral_t<STM32WB55_CM4, NVIC_STIR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, NVIC_STIR>::T*
        >(0xe000ef00);

typename peripheral_t<STM32WB10_CM4, PKA>::T&
    peripheral_t<STM32WB10_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB15_CM4, PKA>::T&
    peripheral_t<STM32WB15_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB30_CM4, PKA>::T&
    peripheral_t<STM32WB30_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB50_CM4, PKA>::T&
    peripheral_t<STM32WB50_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB35_CM4, PKA>::T&
    peripheral_t<STM32WB35_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB55_CM4, PKA>::T&
    peripheral_t<STM32WB55_CM4, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, PKA>::T*
        >(0x58002000);

typename peripheral_t<STM32WB10_CM4, PWR>::T&
    peripheral_t<STM32WB10_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB15_CM4, PWR>::T&
    peripheral_t<STM32WB15_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB30_CM4, PWR>::T&
    peripheral_t<STM32WB30_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB35_CM4, PWR>::T&
    peripheral_t<STM32WB35_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB50_CM4, PWR>::T&
    peripheral_t<STM32WB50_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB55_CM4, PWR>::T&
    peripheral_t<STM32WB55_CM4, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, PWR>::T*
        >(0x58000400);

typename peripheral_t<STM32WB35_CM4, QUADSPI1>::T&
    peripheral_t<STM32WB35_CM4, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32WB55_CM4, QUADSPI1>::T&
    peripheral_t<STM32WB55_CM4, QUADSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, QUADSPI1>::T*
        >(0xa0001000);

typename peripheral_t<STM32WB10_CM4, RCC>::T&
    peripheral_t<STM32WB10_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB15_CM4, RCC>::T&
    peripheral_t<STM32WB15_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB30_CM4, RCC>::T&
    peripheral_t<STM32WB30_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB50_CM4, RCC>::T&
    peripheral_t<STM32WB50_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB35_CM4, RCC>::T&
    peripheral_t<STM32WB35_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB55_CM4, RCC>::T&
    peripheral_t<STM32WB55_CM4, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, RCC>::T*
        >(0x58000000);

typename peripheral_t<STM32WB10_CM4, RNG>::T&
    peripheral_t<STM32WB10_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB15_CM4, RNG>::T&
    peripheral_t<STM32WB15_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB30_CM4, RNG>::T&
    peripheral_t<STM32WB30_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB35_CM4, RNG>::T&
    peripheral_t<STM32WB35_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB50_CM4, RNG>::T&
    peripheral_t<STM32WB50_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB55_CM4, RNG>::T&
    peripheral_t<STM32WB55_CM4, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, RNG>::T*
        >(0x58001000);

typename peripheral_t<STM32WB10_CM4, RTC>::T&
    peripheral_t<STM32WB10_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB15_CM4, RTC>::T&
    peripheral_t<STM32WB15_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB30_CM4, RTC>::T&
    peripheral_t<STM32WB30_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB35_CM4, RTC>::T&
    peripheral_t<STM32WB35_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB50_CM4, RTC>::T&
    peripheral_t<STM32WB50_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB55_CM4, RTC>::T&
    peripheral_t<STM32WB55_CM4, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, RTC>::T*
        >(0x40002800);

typename peripheral_t<STM32WB35_CM4, SAI1>::T&
    peripheral_t<STM32WB35_CM4, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32WB55_CM4, SAI1>::T&
    peripheral_t<STM32WB55_CM4, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32WB50_CM4, SCB>::T&
    peripheral_t<STM32WB50_CM4, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32WB55_CM4, SCB>::T&
    peripheral_t<STM32WB55_CM4, SCB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SCB>::T*
        >(0xe000ed00);

typename peripheral_t<STM32WB10_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB10_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB15_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB15_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB30_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB30_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB35_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB35_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB50_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB50_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB55_CM4, SCB_ACTRL>::T&
    peripheral_t<STM32WB55_CM4, SCB_ACTRL>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SCB_ACTRL>::T*
        >(0xe000e008);

typename peripheral_t<STM32WB10_CM4, SPI1>::T&
    peripheral_t<STM32WB10_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB15_CM4, SPI1>::T&
    peripheral_t<STM32WB15_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB30_CM4, SPI1>::T&
    peripheral_t<STM32WB30_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB35_CM4, SPI1>::T&
    peripheral_t<STM32WB35_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB50_CM4, SPI1>::T&
    peripheral_t<STM32WB50_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB55_CM4, SPI1>::T&
    peripheral_t<STM32WB55_CM4, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32WB55_CM4, SPI2>::T&
    peripheral_t<STM32WB55_CM4, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32WB50_CM4, STK>::T&
    peripheral_t<STM32WB50_CM4, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32WB55_CM4, STK>::T&
    peripheral_t<STM32WB55_CM4, STK>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, STK>::T*
        >(0xe000e010);

typename peripheral_t<STM32WB10_CM4, SYSCFG>::T&
    peripheral_t<STM32WB10_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB15_CM4, SYSCFG>::T&
    peripheral_t<STM32WB15_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB30_CM4, SYSCFG>::T&
    peripheral_t<STM32WB30_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB35_CM4, SYSCFG>::T&
    peripheral_t<STM32WB35_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB50_CM4, SYSCFG>::T&
    peripheral_t<STM32WB50_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB55_CM4, SYSCFG>::T&
    peripheral_t<STM32WB55_CM4, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, SYSCFG>::T*
        >(0x40010000);

typename peripheral_t<STM32WB10_CM4, TIM1>::T&
    peripheral_t<STM32WB10_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB15_CM4, TIM1>::T&
    peripheral_t<STM32WB15_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB30_CM4, TIM1>::T&
    peripheral_t<STM32WB30_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB35_CM4, TIM1>::T&
    peripheral_t<STM32WB35_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB50_CM4, TIM1>::T&
    peripheral_t<STM32WB50_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB55_CM4, TIM1>::T&
    peripheral_t<STM32WB55_CM4, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32WB10_CM4, TIM2>::T&
    peripheral_t<STM32WB10_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB15_CM4, TIM2>::T&
    peripheral_t<STM32WB15_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB30_CM4, TIM2>::T&
    peripheral_t<STM32WB30_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB35_CM4, TIM2>::T&
    peripheral_t<STM32WB35_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB50_CM4, TIM2>::T&
    peripheral_t<STM32WB50_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB55_CM4, TIM2>::T&
    peripheral_t<STM32WB55_CM4, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32WB30_CM4, TIM16>::T&
    peripheral_t<STM32WB30_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WB35_CM4, TIM16>::T&
    peripheral_t<STM32WB35_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WB50_CM4, TIM16>::T&
    peripheral_t<STM32WB50_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WB55_CM4, TIM16>::T&
    peripheral_t<STM32WB55_CM4, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32WB55_CM4, TIM17>::T&
    peripheral_t<STM32WB55_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WB30_CM4, TIM17>::T&
    peripheral_t<STM32WB30_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WB35_CM4, TIM17>::T&
    peripheral_t<STM32WB35_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WB50_CM4, TIM17>::T&
    peripheral_t<STM32WB50_CM4, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32WB10_CM4, TSC>::T&
    peripheral_t<STM32WB10_CM4, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32WB15_CM4, TSC>::T&
    peripheral_t<STM32WB15_CM4, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32WB55_CM4, TSC>::T&
    peripheral_t<STM32WB55_CM4, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32WB10_CM4, USART1>::T&
    peripheral_t<STM32WB10_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB15_CM4, LPUART1>::T&
    peripheral_t<STM32WB15_CM4, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WB15_CM4, USART1>::T&
    peripheral_t<STM32WB15_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB30_CM4, USART1>::T&
    peripheral_t<STM32WB30_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB35_CM4, LPUART1>::T&
    peripheral_t<STM32WB35_CM4, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WB35_CM4, USART1>::T&
    peripheral_t<STM32WB35_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB50_CM4, USART1>::T&
    peripheral_t<STM32WB50_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB55_CM4, LPUART1>::T&
    peripheral_t<STM32WB55_CM4, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, LPUART1>::T*
        >(0x40008000);

typename peripheral_t<STM32WB55_CM4, USART1>::T&
    peripheral_t<STM32WB55_CM4, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32WB35_CM4, USB>::T&
    peripheral_t<STM32WB35_CM4, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, USB>::T*
        >(0x40006800);

typename peripheral_t<STM32WB55_CM4, USB>::T&
    peripheral_t<STM32WB55_CM4, USB>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, USB>::T*
        >(0x40006800);

typename peripheral_t<STM32WB10_CM4, WWDG>::T&
    peripheral_t<STM32WB10_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB10_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WB15_CM4, WWDG>::T&
    peripheral_t<STM32WB15_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB15_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WB30_CM4, WWDG>::T&
    peripheral_t<STM32WB30_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB30_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WB35_CM4, WWDG>::T&
    peripheral_t<STM32WB35_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB35_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WB50_CM4, WWDG>::T&
    peripheral_t<STM32WB50_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB50_CM4, WWDG>::T*
        >(0x40002c00);

typename peripheral_t<STM32WB55_CM4, WWDG>::T&
    peripheral_t<STM32WB55_CM4, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32WB55_CM4, WWDG>::T*
        >(0x40002c00);

