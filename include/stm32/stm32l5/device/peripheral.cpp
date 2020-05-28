#pragma once

////
//
//      STM32L5 peripherals
//
////

typename peripheral_t<STM32L552, ADC_COMMON>::T& peripheral_t<STM32L552, ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, ADC_COMMON>::T*>(0x42028300);

typename peripheral_t<STM32L552, SEC_ADC_COMMON>::T& peripheral_t<STM32L552, SEC_ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_ADC_COMMON>::T*>(0x52028300);

typename peripheral_t<STM32L562, ADC_COMMON>::T& peripheral_t<STM32L562, ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, ADC_COMMON>::T*>(0x42028300);

typename peripheral_t<STM32L562, SEC_ADC_COMMON>::T& peripheral_t<STM32L562, SEC_ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_ADC_COMMON>::T*>(0x52028300);

typename peripheral_t<STM32L552, ADC>::T& peripheral_t<STM32L552, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, ADC>::T*>(0x42028000);

typename peripheral_t<STM32L552, SEC_ADC>::T& peripheral_t<STM32L552, SEC_ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_ADC>::T*>(0x52028000);

typename peripheral_t<STM32L562, ADC>::T& peripheral_t<STM32L562, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, ADC>::T*>(0x42028000);

typename peripheral_t<STM32L562, SEC_ADC>::T& peripheral_t<STM32L562, SEC_ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_ADC>::T*>(0x52028000);

typename peripheral_t<STM32L562, AES>::T& peripheral_t<STM32L562, AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, AES>::T*>(0x420c0000);

typename peripheral_t<STM32L562, SEC_AES>::T& peripheral_t<STM32L562, SEC_AES>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_AES>::T*>(0x520c0000);

typename peripheral_t<STM32L552, COMP>::T& peripheral_t<STM32L552, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, COMP>::T*>(0x40010200);

typename peripheral_t<STM32L552, SEC_COMP>::T& peripheral_t<STM32L552, SEC_COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_COMP>::T*>(0x50010200);

typename peripheral_t<STM32L562, COMP>::T& peripheral_t<STM32L562, COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, COMP>::T*>(0x40010200);

typename peripheral_t<STM32L562, SEC_COMP>::T& peripheral_t<STM32L562, SEC_COMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_COMP>::T*>(0x50010200);

typename peripheral_t<STM32L552, CRC>::T& peripheral_t<STM32L552, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L552, SEC_CRC>::T& peripheral_t<STM32L552, SEC_CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_CRC>::T*>(0x50023000);

typename peripheral_t<STM32L562, CRC>::T& peripheral_t<STM32L562, CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, CRC>::T*>(0x40023000);

typename peripheral_t<STM32L562, SEC_CRC>::T& peripheral_t<STM32L562, SEC_CRC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_CRC>::T*>(0x50023000);

typename peripheral_t<STM32L552, CRS>::T& peripheral_t<STM32L552, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, CRS>::T*>(0x40006000);

typename peripheral_t<STM32L552, SEC_CRS>::T& peripheral_t<STM32L552, SEC_CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_CRS>::T*>(0x50006000);

typename peripheral_t<STM32L562, CRS>::T& peripheral_t<STM32L562, CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, CRS>::T*>(0x40006000);

typename peripheral_t<STM32L562, SEC_CRS>::T& peripheral_t<STM32L562, SEC_CRS>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_CRS>::T*>(0x50006000);

typename peripheral_t<STM32L552, DAC1>::T& peripheral_t<STM32L552, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32L552, DAC2>::T& peripheral_t<STM32L552, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DAC2>::T*>(0x50007400);

typename peripheral_t<STM32L562, DAC1>::T& peripheral_t<STM32L562, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DAC1>::T*>(0x40007400);

typename peripheral_t<STM32L562, DAC2>::T& peripheral_t<STM32L562, DAC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DAC2>::T*>(0x50007400);

typename peripheral_t<STM32L552, DBGMCU>::T& peripheral_t<STM32L552, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DBGMCU>::T*>(0xe0044000);

typename peripheral_t<STM32L562, DBGMCU>::T& peripheral_t<STM32L562, DBGMCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DBGMCU>::T*>(0xe0044000);

typename peripheral_t<STM32L552, DCB>::T& peripheral_t<STM32L552, DCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DCB>::T*>(0xe000ee08);

typename peripheral_t<STM32L562, DCB>::T& peripheral_t<STM32L562, DCB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DCB>::T*>(0xe000ee08);

typename peripheral_t<STM32L552, DFSDM1>::T& peripheral_t<STM32L552, DFSDM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DFSDM1>::T*>(0x40016000);

typename peripheral_t<STM32L552, SEC_DFSDM1>::T& peripheral_t<STM32L552, SEC_DFSDM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_DFSDM1>::T*>(0x50016000);

typename peripheral_t<STM32L562, DFSDM1>::T& peripheral_t<STM32L562, DFSDM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DFSDM1>::T*>(0x40016000);

typename peripheral_t<STM32L562, SEC_DFSDM1>::T& peripheral_t<STM32L562, SEC_DFSDM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_DFSDM1>::T*>(0x50016000);

typename peripheral_t<STM32L552, DMA1>::T& peripheral_t<STM32L552, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L552, SEC_DMA1>::T& peripheral_t<STM32L552, SEC_DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_DMA1>::T*>(0x50020000);

typename peripheral_t<STM32L552, DMA2>::T& peripheral_t<STM32L552, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32L552, SEC_DMA2>::T& peripheral_t<STM32L552, SEC_DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_DMA2>::T*>(0x50020400);

typename peripheral_t<STM32L562, DMA1>::T& peripheral_t<STM32L562, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DMA1>::T*>(0x40020000);

typename peripheral_t<STM32L562, SEC_DMA1>::T& peripheral_t<STM32L562, SEC_DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_DMA1>::T*>(0x50020000);

typename peripheral_t<STM32L562, DMA2>::T& peripheral_t<STM32L562, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DMA2>::T*>(0x40020400);

typename peripheral_t<STM32L562, SEC_DMA2>::T& peripheral_t<STM32L562, SEC_DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_DMA2>::T*>(0x50020400);

typename peripheral_t<STM32L552, DMAMUX1>::T& peripheral_t<STM32L552, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32L552, SEC_DMAMUX1>::T& peripheral_t<STM32L552, SEC_DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_DMAMUX1>::T*>(0x50020800);

typename peripheral_t<STM32L562, DMAMUX1>::T& peripheral_t<STM32L562, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, DMAMUX1>::T*>(0x40020800);

typename peripheral_t<STM32L562, SEC_DMAMUX1>::T& peripheral_t<STM32L562, SEC_DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_DMAMUX1>::T*>(0x50020800);

typename peripheral_t<STM32L552, EXTI>::T& peripheral_t<STM32L552, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, EXTI>::T*>(0x4002f400);

typename peripheral_t<STM32L552, SEC_EXTI>::T& peripheral_t<STM32L552, SEC_EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_EXTI>::T*>(0x5002f400);

typename peripheral_t<STM32L562, EXTI>::T& peripheral_t<STM32L562, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, EXTI>::T*>(0x4002f400);

typename peripheral_t<STM32L562, SEC_EXTI>::T& peripheral_t<STM32L562, SEC_EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_EXTI>::T*>(0x5002f400);

typename peripheral_t<STM32L552, FDCAN1>::T& peripheral_t<STM32L552, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, FDCAN1>::T*>(0x4000a400);

typename peripheral_t<STM32L552, SEC_FDCAN1>::T& peripheral_t<STM32L552, SEC_FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_FDCAN1>::T*>(0x5000a400);

typename peripheral_t<STM32L562, FDCAN1>::T& peripheral_t<STM32L562, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, FDCAN1>::T*>(0x4000a400);

typename peripheral_t<STM32L562, SEC_FDCAN1>::T& peripheral_t<STM32L562, SEC_FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_FDCAN1>::T*>(0x5000a400);

typename peripheral_t<STM32L552, FMC>::T& peripheral_t<STM32L552, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, FMC>::T*>(0x44020000);

typename peripheral_t<STM32L552, SEC_FMC>::T& peripheral_t<STM32L552, SEC_FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_FMC>::T*>(0x54020000);

typename peripheral_t<STM32L562, FMC>::T& peripheral_t<STM32L562, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, FMC>::T*>(0x44020000);

typename peripheral_t<STM32L562, SEC_FMC>::T& peripheral_t<STM32L562, SEC_FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_FMC>::T*>(0x54020000);

typename peripheral_t<STM32L552, FLASH>::T& peripheral_t<STM32L552, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L552, SEC_FLASH>::T& peripheral_t<STM32L552, SEC_FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_FLASH>::T*>(0x50022000);

typename peripheral_t<STM32L562, FLASH>::T& peripheral_t<STM32L562, FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, FLASH>::T*>(0x40022000);

typename peripheral_t<STM32L562, SEC_FLASH>::T& peripheral_t<STM32L562, SEC_FLASH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_FLASH>::T*>(0x50022000);

typename peripheral_t<STM32L552, GPIOA>::T& peripheral_t<STM32L552, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOA>::T*>(0x42020000);

typename peripheral_t<STM32L552, SEC_GPIOA>::T& peripheral_t<STM32L552, SEC_GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOA>::T*>(0x52020000);

typename peripheral_t<STM32L562, GPIOA>::T& peripheral_t<STM32L562, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOA>::T*>(0x42020000);

typename peripheral_t<STM32L562, SEC_GPIOA>::T& peripheral_t<STM32L562, SEC_GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOA>::T*>(0x52020000);

typename peripheral_t<STM32L552, GPIOB>::T& peripheral_t<STM32L552, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOB>::T*>(0x42020400);

typename peripheral_t<STM32L552, SEC_GPIOB>::T& peripheral_t<STM32L552, SEC_GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOB>::T*>(0x52020400);

typename peripheral_t<STM32L562, GPIOB>::T& peripheral_t<STM32L562, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOB>::T*>(0x42020400);

typename peripheral_t<STM32L562, SEC_GPIOB>::T& peripheral_t<STM32L562, SEC_GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOB>::T*>(0x52020400);

typename peripheral_t<STM32L552, GPIOC>::T& peripheral_t<STM32L552, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOC>::T*>(0x42020800);

typename peripheral_t<STM32L552, GPIOD>::T& peripheral_t<STM32L552, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOD>::T*>(0x42020c00);

typename peripheral_t<STM32L552, GPIOE>::T& peripheral_t<STM32L552, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOE>::T*>(0x42021000);

typename peripheral_t<STM32L552, GPIOF>::T& peripheral_t<STM32L552, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOF>::T*>(0x42021400);

typename peripheral_t<STM32L552, GPIOG>::T& peripheral_t<STM32L552, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOG>::T*>(0x42021800);

typename peripheral_t<STM32L552, SEC_GPIOC>::T& peripheral_t<STM32L552, SEC_GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOC>::T*>(0x52020800);

typename peripheral_t<STM32L552, SEC_GPIOD>::T& peripheral_t<STM32L552, SEC_GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOD>::T*>(0x52020c00);

typename peripheral_t<STM32L552, SEC_GPIOE>::T& peripheral_t<STM32L552, SEC_GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOE>::T*>(0x52021000);

typename peripheral_t<STM32L552, SEC_GPIOF>::T& peripheral_t<STM32L552, SEC_GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOF>::T*>(0x52021400);

typename peripheral_t<STM32L552, SEC_GPIOG>::T& peripheral_t<STM32L552, SEC_GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOG>::T*>(0x52021800);

typename peripheral_t<STM32L562, GPIOC>::T& peripheral_t<STM32L562, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOC>::T*>(0x42020800);

typename peripheral_t<STM32L562, GPIOD>::T& peripheral_t<STM32L562, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOD>::T*>(0x42020c00);

typename peripheral_t<STM32L562, GPIOE>::T& peripheral_t<STM32L562, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOE>::T*>(0x42021000);

typename peripheral_t<STM32L562, GPIOF>::T& peripheral_t<STM32L562, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOF>::T*>(0x42021400);

typename peripheral_t<STM32L562, GPIOG>::T& peripheral_t<STM32L562, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOG>::T*>(0x42021800);

typename peripheral_t<STM32L562, SEC_GPIOC>::T& peripheral_t<STM32L562, SEC_GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOC>::T*>(0x52020800);

typename peripheral_t<STM32L562, SEC_GPIOD>::T& peripheral_t<STM32L562, SEC_GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOD>::T*>(0x52020c00);

typename peripheral_t<STM32L562, SEC_GPIOE>::T& peripheral_t<STM32L562, SEC_GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOE>::T*>(0x52021000);

typename peripheral_t<STM32L562, SEC_GPIOF>::T& peripheral_t<STM32L562, SEC_GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOF>::T*>(0x52021400);

typename peripheral_t<STM32L562, SEC_GPIOG>::T& peripheral_t<STM32L562, SEC_GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOG>::T*>(0x52021800);

typename peripheral_t<STM32L552, GPIOH>::T& peripheral_t<STM32L552, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GPIOH>::T*>(0x42021c00);

typename peripheral_t<STM32L552, SEC_GPIOH>::T& peripheral_t<STM32L552, SEC_GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GPIOH>::T*>(0x52021c00);

typename peripheral_t<STM32L562, GPIOH>::T& peripheral_t<STM32L562, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GPIOH>::T*>(0x42021c00);

typename peripheral_t<STM32L562, SEC_GPIOH>::T& peripheral_t<STM32L562, SEC_GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GPIOH>::T*>(0x52021c00);

typename peripheral_t<STM32L552, GTZC_MPCBB1>::T& peripheral_t<STM32L552, GTZC_MPCBB1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GTZC_MPCBB1>::T*>(0x40032c00);

typename peripheral_t<STM32L562, GTZC_MPCBB1>::T& peripheral_t<STM32L562, GTZC_MPCBB1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GTZC_MPCBB1>::T*>(0x40032c00);

typename peripheral_t<STM32L552, GTZC_MPCBB2>::T& peripheral_t<STM32L552, GTZC_MPCBB2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GTZC_MPCBB2>::T*>(0x40033000);

typename peripheral_t<STM32L562, GTZC_MPCBB2>::T& peripheral_t<STM32L562, GTZC_MPCBB2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GTZC_MPCBB2>::T*>(0x40033000);

typename peripheral_t<STM32L552, GTZC_TZIC>::T& peripheral_t<STM32L552, GTZC_TZIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GTZC_TZIC>::T*>(0x40032800);

typename peripheral_t<STM32L552, SEC_GTZC_TZIC>::T& peripheral_t<STM32L552, SEC_GTZC_TZIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GTZC_TZIC>::T*>(0x50032800);

typename peripheral_t<STM32L562, GTZC_TZIC>::T& peripheral_t<STM32L562, GTZC_TZIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GTZC_TZIC>::T*>(0x40032800);

typename peripheral_t<STM32L562, SEC_GTZC_TZIC>::T& peripheral_t<STM32L562, SEC_GTZC_TZIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GTZC_TZIC>::T*>(0x50032800);

typename peripheral_t<STM32L552, GTZC_TZSC>::T& peripheral_t<STM32L552, GTZC_TZSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, GTZC_TZSC>::T*>(0x40032400);

typename peripheral_t<STM32L552, SEC_GTZC_TZSC>::T& peripheral_t<STM32L552, SEC_GTZC_TZSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GTZC_TZSC>::T*>(0x50032400);

typename peripheral_t<STM32L562, GTZC_TZSC>::T& peripheral_t<STM32L562, GTZC_TZSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, GTZC_TZSC>::T*>(0x40032400);

typename peripheral_t<STM32L562, SEC_GTZC_TZSC>::T& peripheral_t<STM32L562, SEC_GTZC_TZSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GTZC_TZSC>::T*>(0x50032400);

typename peripheral_t<STM32L552, I2C1>::T& peripheral_t<STM32L552, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L552, I2C2>::T& peripheral_t<STM32L552, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L552, I2C3>::T& peripheral_t<STM32L552, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32L552, I2C4>::T& peripheral_t<STM32L552, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32L552, SEC_I2C1>::T& peripheral_t<STM32L552, SEC_I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_I2C1>::T*>(0x50005400);

typename peripheral_t<STM32L552, SEC_I2C2>::T& peripheral_t<STM32L552, SEC_I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_I2C2>::T*>(0x50005800);

typename peripheral_t<STM32L552, SEC_I2C3>::T& peripheral_t<STM32L552, SEC_I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_I2C3>::T*>(0x50005c00);

typename peripheral_t<STM32L552, SEC_I2C4>::T& peripheral_t<STM32L552, SEC_I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_I2C4>::T*>(0x50008400);

typename peripheral_t<STM32L562, I2C1>::T& peripheral_t<STM32L562, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, I2C1>::T*>(0x40005400);

typename peripheral_t<STM32L562, I2C2>::T& peripheral_t<STM32L562, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, I2C2>::T*>(0x40005800);

typename peripheral_t<STM32L562, I2C3>::T& peripheral_t<STM32L562, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, I2C3>::T*>(0x40005c00);

typename peripheral_t<STM32L562, I2C4>::T& peripheral_t<STM32L562, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, I2C4>::T*>(0x40008400);

typename peripheral_t<STM32L562, SEC_I2C1>::T& peripheral_t<STM32L562, SEC_I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_I2C1>::T*>(0x50005400);

typename peripheral_t<STM32L562, SEC_I2C2>::T& peripheral_t<STM32L562, SEC_I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_I2C2>::T*>(0x50005800);

typename peripheral_t<STM32L562, SEC_I2C3>::T& peripheral_t<STM32L562, SEC_I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_I2C3>::T*>(0x50005c00);

typename peripheral_t<STM32L562, SEC_I2C4>::T& peripheral_t<STM32L562, SEC_I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_I2C4>::T*>(0x50008400);

typename peripheral_t<STM32L552, ICACHE>::T& peripheral_t<STM32L552, ICACHE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, ICACHE>::T*>(0x40030400);

typename peripheral_t<STM32L552, SEC_ICACHE>::T& peripheral_t<STM32L552, SEC_ICACHE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_ICACHE>::T*>(0x50030400);

typename peripheral_t<STM32L562, ICACHE>::T& peripheral_t<STM32L562, ICACHE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, ICACHE>::T*>(0x40030400);

typename peripheral_t<STM32L562, SEC_ICACHE>::T& peripheral_t<STM32L562, SEC_ICACHE>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_ICACHE>::T*>(0x50030400);

typename peripheral_t<STM32L552, IWDG>::T& peripheral_t<STM32L552, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L552, SEC_IWDG>::T& peripheral_t<STM32L552, SEC_IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_IWDG>::T*>(0x50003000);

typename peripheral_t<STM32L562, IWDG>::T& peripheral_t<STM32L562, IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, IWDG>::T*>(0x40003000);

typename peripheral_t<STM32L562, SEC_IWDG>::T& peripheral_t<STM32L562, SEC_IWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_IWDG>::T*>(0x50003000);

typename peripheral_t<STM32L552, LPTIM1>::T& peripheral_t<STM32L552, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32L552, LPTIM2>::T& peripheral_t<STM32L552, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32L552, LPTIM3>::T& peripheral_t<STM32L552, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, LPTIM3>::T*>(0x40009800);

typename peripheral_t<STM32L552, SEC_LPTIM1>::T& peripheral_t<STM32L552, SEC_LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_LPTIM1>::T*>(0x50007c00);

typename peripheral_t<STM32L552, SEC_LPTIM2>::T& peripheral_t<STM32L552, SEC_LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_LPTIM2>::T*>(0x50009400);

typename peripheral_t<STM32L552, SEC_LPTIM3>::T& peripheral_t<STM32L552, SEC_LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_LPTIM3>::T*>(0x50009800);

typename peripheral_t<STM32L562, LPTIM1>::T& peripheral_t<STM32L562, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, LPTIM1>::T*>(0x40007c00);

typename peripheral_t<STM32L562, LPTIM2>::T& peripheral_t<STM32L562, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, LPTIM2>::T*>(0x40009400);

typename peripheral_t<STM32L562, LPTIM3>::T& peripheral_t<STM32L562, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, LPTIM3>::T*>(0x40009800);

typename peripheral_t<STM32L562, SEC_LPTIM1>::T& peripheral_t<STM32L562, SEC_LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_LPTIM1>::T*>(0x50007c00);

typename peripheral_t<STM32L562, SEC_LPTIM2>::T& peripheral_t<STM32L562, SEC_LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_LPTIM2>::T*>(0x50009400);

typename peripheral_t<STM32L562, SEC_LPTIM3>::T& peripheral_t<STM32L562, SEC_LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_LPTIM3>::T*>(0x50009800);

typename peripheral_t<STM32L552, NVIC>::T& peripheral_t<STM32L552, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L562, NVIC>::T& peripheral_t<STM32L562, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32L552, NVIC_STIR>::T& peripheral_t<STM32L552, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L562, NVIC_STIR>::T& peripheral_t<STM32L562, NVIC_STIR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, NVIC_STIR>::T*>(0xe000ef00);

typename peripheral_t<STM32L552, OPAMP>::T& peripheral_t<STM32L552, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, OPAMP>::T*>(0x40007800);

typename peripheral_t<STM32L552, SEC_OPAMP>::T& peripheral_t<STM32L552, SEC_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_OPAMP>::T*>(0x50007800);

typename peripheral_t<STM32L562, OPAMP>::T& peripheral_t<STM32L562, OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, OPAMP>::T*>(0x40007800);

typename peripheral_t<STM32L562, SEC_OPAMP>::T& peripheral_t<STM32L562, SEC_OPAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_OPAMP>::T*>(0x50007800);

typename peripheral_t<STM32L562, OTFDEC1>::T& peripheral_t<STM32L562, OTFDEC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, OTFDEC1>::T*>(0x420c5000);

typename peripheral_t<STM32L562, SEC_OTFDEC1>::T& peripheral_t<STM32L562, SEC_OTFDEC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_OTFDEC1>::T*>(0x520c5000);

typename peripheral_t<STM32L552, OCTOSPI1>::T& peripheral_t<STM32L552, OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, OCTOSPI1>::T*>(0x44021000);

typename peripheral_t<STM32L552, SEC_OCTOSPI1>::T& peripheral_t<STM32L552, SEC_OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_OCTOSPI1>::T*>(0x54021000);

typename peripheral_t<STM32L562, OCTOSPI1>::T& peripheral_t<STM32L562, OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, OCTOSPI1>::T*>(0x44021000);

typename peripheral_t<STM32L562, SEC_OCTOSPI1>::T& peripheral_t<STM32L562, SEC_OCTOSPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_OCTOSPI1>::T*>(0x54021000);

typename peripheral_t<STM32L562, PKA>::T& peripheral_t<STM32L562, PKA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, PKA>::T*>(0x420c2000);

typename peripheral_t<STM32L562, SEC_PKA>::T& peripheral_t<STM32L562, SEC_PKA>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_PKA>::T*>(0x520c2000);

typename peripheral_t<STM32L552, PWR>::T& peripheral_t<STM32L552, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L552, SEC_PWR>::T& peripheral_t<STM32L552, SEC_PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_PWR>::T*>(0x50007000);

typename peripheral_t<STM32L562, PWR>::T& peripheral_t<STM32L562, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, PWR>::T*>(0x40007000);

typename peripheral_t<STM32L562, SEC_PWR>::T& peripheral_t<STM32L562, SEC_PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_PWR>::T*>(0x50007000);

typename peripheral_t<STM32L552, RCC>::T& peripheral_t<STM32L552, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L552, SEC_RCC>::T& peripheral_t<STM32L552, SEC_RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_RCC>::T*>(0x50021000);

typename peripheral_t<STM32L562, RCC>::T& peripheral_t<STM32L562, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, RCC>::T*>(0x40021000);

typename peripheral_t<STM32L562, SEC_RCC>::T& peripheral_t<STM32L562, SEC_RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_RCC>::T*>(0x50021000);

typename peripheral_t<STM32L552, RNG>::T& peripheral_t<STM32L552, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, RNG>::T*>(0x420c0800);

typename peripheral_t<STM32L552, SEC_RNG>::T& peripheral_t<STM32L552, SEC_RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_RNG>::T*>(0x520c0800);

typename peripheral_t<STM32L562, RNG>::T& peripheral_t<STM32L562, RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, RNG>::T*>(0x420c0800);

typename peripheral_t<STM32L562, SEC_RNG>::T& peripheral_t<STM32L562, SEC_RNG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_RNG>::T*>(0x520c0800);

typename peripheral_t<STM32L552, RTC>::T& peripheral_t<STM32L552, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L552, SEC_RTC>::T& peripheral_t<STM32L552, SEC_RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_RTC>::T*>(0x50002800);

typename peripheral_t<STM32L562, RTC>::T& peripheral_t<STM32L562, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, RTC>::T*>(0x40002800);

typename peripheral_t<STM32L562, SEC_RTC>::T& peripheral_t<STM32L562, SEC_RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_RTC>::T*>(0x50002800);

typename peripheral_t<STM32L552, SAI1>::T& peripheral_t<STM32L552, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SAI1>::T*>(0x40015400);

typename peripheral_t<STM32L552, SAI2>::T& peripheral_t<STM32L552, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SAI2>::T*>(0x40015800);

typename peripheral_t<STM32L552, SEC_SAI1>::T& peripheral_t<STM32L552, SEC_SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SAI1>::T*>(0x50015400);

typename peripheral_t<STM32L552, SEC_SAI2>::T& peripheral_t<STM32L552, SEC_SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SAI2>::T*>(0x50015800);

typename peripheral_t<STM32L562, SAI1>::T& peripheral_t<STM32L562, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SAI1>::T*>(0x40015400);

typename peripheral_t<STM32L562, SAI2>::T& peripheral_t<STM32L562, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SAI2>::T*>(0x40015800);

typename peripheral_t<STM32L562, SEC_SAI1>::T& peripheral_t<STM32L562, SEC_SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SAI1>::T*>(0x50015400);

typename peripheral_t<STM32L562, SEC_SAI2>::T& peripheral_t<STM32L562, SEC_SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SAI2>::T*>(0x50015800);

typename peripheral_t<STM32L552, SDMMC1>::T& peripheral_t<STM32L552, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SDMMC1>::T*>(0x420c8000);

typename peripheral_t<STM32L552, SEC_SDMMC1>::T& peripheral_t<STM32L552, SEC_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SDMMC1>::T*>(0x520c8000);

typename peripheral_t<STM32L562, SDMMC1>::T& peripheral_t<STM32L562, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SDMMC1>::T*>(0x420c8000);

typename peripheral_t<STM32L562, SEC_SDMMC1>::T& peripheral_t<STM32L562, SEC_SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SDMMC1>::T*>(0x520c8000);

typename peripheral_t<STM32L552, SEC_GTZC_MPCBB1>::T& peripheral_t<STM32L552, SEC_GTZC_MPCBB1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GTZC_MPCBB1>::T*>(0x50032c00);

typename peripheral_t<STM32L562, SEC_GTZC_MPCBB1>::T& peripheral_t<STM32L562, SEC_GTZC_MPCBB1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GTZC_MPCBB1>::T*>(0x50032c00);

typename peripheral_t<STM32L552, SEC_GTZC_MPCBB2>::T& peripheral_t<STM32L552, SEC_GTZC_MPCBB2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_GTZC_MPCBB2>::T*>(0x50033000);

typename peripheral_t<STM32L562, SEC_GTZC_MPCBB2>::T& peripheral_t<STM32L562, SEC_GTZC_MPCBB2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_GTZC_MPCBB2>::T*>(0x50033000);

typename peripheral_t<STM32L552, SPI1>::T& peripheral_t<STM32L552, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L552, SPI2>::T& peripheral_t<STM32L552, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L552, SPI3>::T& peripheral_t<STM32L552, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L552, SEC_SPI1>::T& peripheral_t<STM32L552, SEC_SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SPI1>::T*>(0x50013000);

typename peripheral_t<STM32L552, SEC_SPI2>::T& peripheral_t<STM32L552, SEC_SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SPI2>::T*>(0x50003800);

typename peripheral_t<STM32L552, SEC_SPI3>::T& peripheral_t<STM32L552, SEC_SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SPI3>::T*>(0x50003c00);

typename peripheral_t<STM32L562, SPI1>::T& peripheral_t<STM32L562, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SPI1>::T*>(0x40013000);

typename peripheral_t<STM32L562, SPI2>::T& peripheral_t<STM32L562, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SPI2>::T*>(0x40003800);

typename peripheral_t<STM32L562, SPI3>::T& peripheral_t<STM32L562, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SPI3>::T*>(0x40003c00);

typename peripheral_t<STM32L562, SEC_SPI1>::T& peripheral_t<STM32L562, SEC_SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SPI1>::T*>(0x50013000);

typename peripheral_t<STM32L562, SEC_SPI2>::T& peripheral_t<STM32L562, SEC_SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SPI2>::T*>(0x50003800);

typename peripheral_t<STM32L562, SEC_SPI3>::T& peripheral_t<STM32L562, SEC_SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SPI3>::T*>(0x50003c00);

typename peripheral_t<STM32L552, SYSCFG>::T& peripheral_t<STM32L552, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L552, SEC_SYSCFG>::T& peripheral_t<STM32L552, SEC_SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_SYSCFG>::T*>(0x50010000);

typename peripheral_t<STM32L562, SYSCFG>::T& peripheral_t<STM32L562, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SYSCFG>::T*>(0x40010000);

typename peripheral_t<STM32L562, SEC_SYSCFG>::T& peripheral_t<STM32L562, SEC_SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_SYSCFG>::T*>(0x50010000);

typename peripheral_t<STM32L552, TAMP>::T& peripheral_t<STM32L552, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TAMP>::T*>(0x40003400);

typename peripheral_t<STM32L552, SEC_TAMP>::T& peripheral_t<STM32L552, SEC_TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TAMP>::T*>(0x50003400);

typename peripheral_t<STM32L562, TAMP>::T& peripheral_t<STM32L562, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TAMP>::T*>(0x40003400);

typename peripheral_t<STM32L562, SEC_TAMP>::T& peripheral_t<STM32L562, SEC_TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TAMP>::T*>(0x50003400);

typename peripheral_t<STM32L552, TIM1>::T& peripheral_t<STM32L552, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32L552, SEC_TIM1>::T& peripheral_t<STM32L552, SEC_TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM1>::T*>(0x50012c00);

typename peripheral_t<STM32L562, TIM1>::T& peripheral_t<STM32L562, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM1>::T*>(0x40012c00);

typename peripheral_t<STM32L562, SEC_TIM1>::T& peripheral_t<STM32L562, SEC_TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM1>::T*>(0x50012c00);

typename peripheral_t<STM32L552, TIM15>::T& peripheral_t<STM32L552, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32L552, SEC_TIM15>::T& peripheral_t<STM32L552, SEC_TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM15>::T*>(0x50014000);

typename peripheral_t<STM32L562, TIM15>::T& peripheral_t<STM32L562, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM15>::T*>(0x40014000);

typename peripheral_t<STM32L562, SEC_TIM15>::T& peripheral_t<STM32L562, SEC_TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM15>::T*>(0x50014000);

typename peripheral_t<STM32L552, TIM16>::T& peripheral_t<STM32L552, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32L552, SEC_TIM16>::T& peripheral_t<STM32L552, SEC_TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM16>::T*>(0x50014400);

typename peripheral_t<STM32L562, TIM16>::T& peripheral_t<STM32L562, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM16>::T*>(0x40014400);

typename peripheral_t<STM32L562, SEC_TIM16>::T& peripheral_t<STM32L562, SEC_TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM16>::T*>(0x50014400);

typename peripheral_t<STM32L552, TIM17>::T& peripheral_t<STM32L552, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32L552, SEC_TIM17>::T& peripheral_t<STM32L552, SEC_TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM17>::T*>(0x50014800);

typename peripheral_t<STM32L562, TIM17>::T& peripheral_t<STM32L562, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM17>::T*>(0x40014800);

typename peripheral_t<STM32L562, SEC_TIM17>::T& peripheral_t<STM32L562, SEC_TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM17>::T*>(0x50014800);

typename peripheral_t<STM32L552, TIM2>::T& peripheral_t<STM32L552, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L552, SEC_TIM2>::T& peripheral_t<STM32L552, SEC_TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM2>::T*>(0x50000000);

typename peripheral_t<STM32L562, TIM2>::T& peripheral_t<STM32L562, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32L562, SEC_TIM2>::T& peripheral_t<STM32L562, SEC_TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM2>::T*>(0x50000000);

typename peripheral_t<STM32L552, TIM3>::T& peripheral_t<STM32L552, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L552, SEC_TIM3>::T& peripheral_t<STM32L552, SEC_TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM3>::T*>(0x50000400);

typename peripheral_t<STM32L562, TIM3>::T& peripheral_t<STM32L562, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM3>::T*>(0x40000400);

typename peripheral_t<STM32L562, SEC_TIM3>::T& peripheral_t<STM32L562, SEC_TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM3>::T*>(0x50000400);

typename peripheral_t<STM32L552, TIM4>::T& peripheral_t<STM32L552, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L552, SEC_TIM4>::T& peripheral_t<STM32L552, SEC_TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM4>::T*>(0x50000800);

typename peripheral_t<STM32L552, TIM5>::T& peripheral_t<STM32L552, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L552, SEC_TIM5>::T& peripheral_t<STM32L552, SEC_TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM5>::T*>(0x50000c00);

typename peripheral_t<STM32L562, TIM4>::T& peripheral_t<STM32L562, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM4>::T*>(0x40000800);

typename peripheral_t<STM32L562, SEC_TIM4>::T& peripheral_t<STM32L562, SEC_TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM4>::T*>(0x50000800);

typename peripheral_t<STM32L562, TIM5>::T& peripheral_t<STM32L562, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM5>::T*>(0x40000c00);

typename peripheral_t<STM32L562, SEC_TIM5>::T& peripheral_t<STM32L562, SEC_TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM5>::T*>(0x50000c00);

typename peripheral_t<STM32L552, TIM6>::T& peripheral_t<STM32L552, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L552, SEC_TIM6>::T& peripheral_t<STM32L552, SEC_TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM6>::T*>(0x50001000);

typename peripheral_t<STM32L552, TIM7>::T& peripheral_t<STM32L552, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L552, SEC_TIM7>::T& peripheral_t<STM32L552, SEC_TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM7>::T*>(0x50001400);

typename peripheral_t<STM32L562, TIM6>::T& peripheral_t<STM32L562, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM6>::T*>(0x40001000);

typename peripheral_t<STM32L562, SEC_TIM6>::T& peripheral_t<STM32L562, SEC_TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM6>::T*>(0x50001000);

typename peripheral_t<STM32L562, TIM7>::T& peripheral_t<STM32L562, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM7>::T*>(0x40001400);

typename peripheral_t<STM32L562, SEC_TIM7>::T& peripheral_t<STM32L562, SEC_TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM7>::T*>(0x50001400);

typename peripheral_t<STM32L552, TIM8>::T& peripheral_t<STM32L552, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32L552, SEC_TIM8>::T& peripheral_t<STM32L552, SEC_TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TIM8>::T*>(0x50013400);

typename peripheral_t<STM32L562, TIM8>::T& peripheral_t<STM32L562, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TIM8>::T*>(0x40013400);

typename peripheral_t<STM32L562, SEC_TIM8>::T& peripheral_t<STM32L562, SEC_TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TIM8>::T*>(0x50013400);

typename peripheral_t<STM32L552, TSC>::T& peripheral_t<STM32L552, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, TSC>::T*>(0x40024000);

typename peripheral_t<STM32L552, SEC_TSC>::T& peripheral_t<STM32L552, SEC_TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_TSC>::T*>(0x50024000);

typename peripheral_t<STM32L562, TSC>::T& peripheral_t<STM32L562, TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, TSC>::T*>(0x40024000);

typename peripheral_t<STM32L562, SEC_TSC>::T& peripheral_t<STM32L562, SEC_TSC>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_TSC>::T*>(0x50024000);

typename peripheral_t<STM32L552, UCPD1>::T& peripheral_t<STM32L552, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, UCPD1>::T*>(0x4000dc00);

typename peripheral_t<STM32L552, SEC_UCPD1>::T& peripheral_t<STM32L552, SEC_UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_UCPD1>::T*>(0x5000dc00);

typename peripheral_t<STM32L562, UCPD1>::T& peripheral_t<STM32L562, UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, UCPD1>::T*>(0x4000dc00);

typename peripheral_t<STM32L562, SEC_UCPD1>::T& peripheral_t<STM32L562, SEC_UCPD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_UCPD1>::T*>(0x5000dc00);

typename peripheral_t<STM32L552, LPUART1>::T& peripheral_t<STM32L552, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32L552, SEC_LPUART1>::T& peripheral_t<STM32L552, SEC_LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_LPUART1>::T*>(0x50008000);

typename peripheral_t<STM32L562, LPUART1>::T& peripheral_t<STM32L562, LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, LPUART1>::T*>(0x40008000);

typename peripheral_t<STM32L562, SEC_LPUART1>::T& peripheral_t<STM32L562, SEC_LPUART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_LPUART1>::T*>(0x50008000);

typename peripheral_t<STM32L552, USART1>::T& peripheral_t<STM32L552, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L552, SEC_USART1>::T& peripheral_t<STM32L552, SEC_USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_USART1>::T*>(0x50013800);

typename peripheral_t<STM32L552, USART2>::T& peripheral_t<STM32L552, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L552, SEC_USART2>::T& peripheral_t<STM32L552, SEC_USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_USART2>::T*>(0x50004400);

typename peripheral_t<STM32L552, USART3>::T& peripheral_t<STM32L552, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L552, SEC_USART3>::T& peripheral_t<STM32L552, SEC_USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_USART3>::T*>(0x50004800);

typename peripheral_t<STM32L552, UART4>::T& peripheral_t<STM32L552, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32L552, UART5>::T& peripheral_t<STM32L552, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, UART5>::T*>(0x40005000);

typename peripheral_t<STM32L552, SEC_UART4>::T& peripheral_t<STM32L552, SEC_UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_UART4>::T*>(0x50004c00);

typename peripheral_t<STM32L552, SEC_UART5>::T& peripheral_t<STM32L552, SEC_UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_UART5>::T*>(0x50005000);

typename peripheral_t<STM32L562, USART1>::T& peripheral_t<STM32L562, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, USART1>::T*>(0x40013800);

typename peripheral_t<STM32L562, SEC_USART1>::T& peripheral_t<STM32L562, SEC_USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_USART1>::T*>(0x50013800);

typename peripheral_t<STM32L562, USART2>::T& peripheral_t<STM32L562, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, USART2>::T*>(0x40004400);

typename peripheral_t<STM32L562, SEC_USART2>::T& peripheral_t<STM32L562, SEC_USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_USART2>::T*>(0x50004400);

typename peripheral_t<STM32L562, USART3>::T& peripheral_t<STM32L562, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, USART3>::T*>(0x40004800);

typename peripheral_t<STM32L562, SEC_USART3>::T& peripheral_t<STM32L562, SEC_USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_USART3>::T*>(0x50004800);

typename peripheral_t<STM32L562, UART4>::T& peripheral_t<STM32L562, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, UART4>::T*>(0x40004c00);

typename peripheral_t<STM32L562, UART5>::T& peripheral_t<STM32L562, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, UART5>::T*>(0x40005000);

typename peripheral_t<STM32L562, SEC_UART4>::T& peripheral_t<STM32L562, SEC_UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_UART4>::T*>(0x50004c00);

typename peripheral_t<STM32L562, SEC_UART5>::T& peripheral_t<STM32L562, SEC_UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_UART5>::T*>(0x50005000);

typename peripheral_t<STM32L552, USB>::T& peripheral_t<STM32L552, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, USB>::T*>(0x4000d400);

typename peripheral_t<STM32L552, SEC_USB>::T& peripheral_t<STM32L552, SEC_USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_USB>::T*>(0x5000d400);

typename peripheral_t<STM32L562, USB>::T& peripheral_t<STM32L562, USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, USB>::T*>(0x4000d400);

typename peripheral_t<STM32L562, SEC_USB>::T& peripheral_t<STM32L562, SEC_USB>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_USB>::T*>(0x5000d400);

typename peripheral_t<STM32L552, VREFBUF>::T& peripheral_t<STM32L552, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32L552, SEC_VREFBUF>::T& peripheral_t<STM32L552, SEC_VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_VREFBUF>::T*>(0x50010030);

typename peripheral_t<STM32L562, VREFBUF>::T& peripheral_t<STM32L562, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, VREFBUF>::T*>(0x40010030);

typename peripheral_t<STM32L562, SEC_VREFBUF>::T& peripheral_t<STM32L562, SEC_VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_VREFBUF>::T*>(0x50010030);

typename peripheral_t<STM32L552, WWDG>::T& peripheral_t<STM32L552, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L552, SEC_WWDG>::T& peripheral_t<STM32L552, SEC_WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L552, SEC_WWDG>::T*>(0x50002c00);

typename peripheral_t<STM32L562, WWDG>::T& peripheral_t<STM32L562, WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, WWDG>::T*>(0x40002c00);

typename peripheral_t<STM32L562, SEC_WWDG>::T& peripheral_t<STM32L562, SEC_WWDG>::V =
    *reinterpret_cast<typename peripheral_t<STM32L562, SEC_WWDG>::T*>(0x50002c00);

