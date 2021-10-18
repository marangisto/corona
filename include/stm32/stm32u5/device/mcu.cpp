#pragma once

////
//
//      STM32U5 peripheral instances
//
///

typename peripheral_t<STM32U5xx, ADC1>::T&
    peripheral_t<STM32U5xx, ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, ADC1>::T*
        >(0x42028000);

typename peripheral_t<STM32U5xx, SEC_ADC1>::T&
    peripheral_t<STM32U5xx, SEC_ADC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_ADC1>::T*
        >(0x52028000);

typename peripheral_t<STM32U5xx, ADC4>::T&
    peripheral_t<STM32U5xx, ADC4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, ADC4>::T*
        >(0x46021000);

typename peripheral_t<STM32U5xx, SEC_ADC4>::T&
    peripheral_t<STM32U5xx, SEC_ADC4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_ADC4>::T*
        >(0x56021000);

typename peripheral_t<STM32U5xx, ADF1>::T&
    peripheral_t<STM32U5xx, ADF1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, ADF1>::T*
        >(0x46024000);

typename peripheral_t<STM32U5xx, SEC_ADF1>::T&
    peripheral_t<STM32U5xx, SEC_ADF1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_ADF1>::T*
        >(0x56024000);

typename peripheral_t<STM32U5xx, AES>::T&
    peripheral_t<STM32U5xx, AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, AES>::T*
        >(0x420c0000);

typename peripheral_t<STM32U5xx, SEC_AES>::T&
    peripheral_t<STM32U5xx, SEC_AES>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_AES>::T*
        >(0x520c0000);

typename peripheral_t<STM32U5xx, COMP>::T&
    peripheral_t<STM32U5xx, COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, COMP>::T*
        >(0x46005400);

typename peripheral_t<STM32U5xx, SEC_COMP>::T&
    peripheral_t<STM32U5xx, SEC_COMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_COMP>::T*
        >(0x56005400);

typename peripheral_t<STM32U5xx, CORDIC>::T&
    peripheral_t<STM32U5xx, CORDIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, CORDIC>::T*
        >(0x40021000);

typename peripheral_t<STM32U5xx, SEC_CORDIC>::T&
    peripheral_t<STM32U5xx, SEC_CORDIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_CORDIC>::T*
        >(0x50021000);

typename peripheral_t<STM32U5xx, CRC>::T&
    peripheral_t<STM32U5xx, CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, CRC>::T*
        >(0x40023000);

typename peripheral_t<STM32U5xx, SEC_CRC>::T&
    peripheral_t<STM32U5xx, SEC_CRC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_CRC>::T*
        >(0x50023000);

typename peripheral_t<STM32U5xx, CRS>::T&
    peripheral_t<STM32U5xx, CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, CRS>::T*
        >(0x40006000);

typename peripheral_t<STM32U5xx, SEC_CRS>::T&
    peripheral_t<STM32U5xx, SEC_CRS>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_CRS>::T*
        >(0x50006000);

typename peripheral_t<STM32U5xx, DAC1>::T&
    peripheral_t<STM32U5xx, DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DAC1>::T*
        >(0x46021800);

typename peripheral_t<STM32U5xx, SEC_DAC1>::T&
    peripheral_t<STM32U5xx, SEC_DAC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DAC1>::T*
        >(0x56021800);

typename peripheral_t<STM32U5xx, DBGMCU>::T&
    peripheral_t<STM32U5xx, DBGMCU>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DBGMCU>::T*
        >(0xe0044000);

typename peripheral_t<STM32U5xx, DCACHE>::T&
    peripheral_t<STM32U5xx, DCACHE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DCACHE>::T*
        >(0x40031400);

typename peripheral_t<STM32U5xx, SEC_DCACHE>::T&
    peripheral_t<STM32U5xx, SEC_DCACHE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DCACHE>::T*
        >(0x50031400);

typename peripheral_t<STM32U5xx, DCMI>::T&
    peripheral_t<STM32U5xx, DCMI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DCMI>::T*
        >(0x4202c000);

typename peripheral_t<STM32U5xx, SEC_DCMI>::T&
    peripheral_t<STM32U5xx, SEC_DCMI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DCMI>::T*
        >(0x5202c000);

typename peripheral_t<STM32U5xx, DLYBOS1>::T&
    peripheral_t<STM32U5xx, DLYBOS1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DLYBOS1>::T*
        >(0x420cf000);

typename peripheral_t<STM32U5xx, DLYBOS2>::T&
    peripheral_t<STM32U5xx, DLYBOS2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DLYBOS2>::T*
        >(0x420cf400);

typename peripheral_t<STM32U5xx, DLYBSD1>::T&
    peripheral_t<STM32U5xx, DLYBSD1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DLYBSD1>::T*
        >(0x420c8400);

typename peripheral_t<STM32U5xx, DLYBSD2>::T&
    peripheral_t<STM32U5xx, DLYBSD2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DLYBSD2>::T*
        >(0x420c8800);

typename peripheral_t<STM32U5xx, SEC_DLYBOS1>::T&
    peripheral_t<STM32U5xx, SEC_DLYBOS1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DLYBOS1>::T*
        >(0x520cf000);

typename peripheral_t<STM32U5xx, SEC_DLYBOS2>::T&
    peripheral_t<STM32U5xx, SEC_DLYBOS2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DLYBOS2>::T*
        >(0x520cf400);

typename peripheral_t<STM32U5xx, SEC_DLYBSD1>::T&
    peripheral_t<STM32U5xx, SEC_DLYBSD1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DLYBSD1>::T*
        >(0x520c8400);

typename peripheral_t<STM32U5xx, SEC_DLYBSD2>::T&
    peripheral_t<STM32U5xx, SEC_DLYBSD2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DLYBSD2>::T*
        >(0x520c8800);

typename peripheral_t<STM32U5xx, DMA2D>::T&
    peripheral_t<STM32U5xx, DMA2D>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, DMA2D>::T*
        >(0x4002b000);

typename peripheral_t<STM32U5xx, SEC_DMA2D>::T&
    peripheral_t<STM32U5xx, SEC_DMA2D>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_DMA2D>::T*
        >(0x5002b000);

typename peripheral_t<STM32U5xx, EXTI>::T&
    peripheral_t<STM32U5xx, EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, EXTI>::T*
        >(0x46022000);

typename peripheral_t<STM32U5xx, SEC_EXTI>::T&
    peripheral_t<STM32U5xx, SEC_EXTI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_EXTI>::T*
        >(0x56022000);

typename peripheral_t<STM32U5xx, FDCAN1>::T&
    peripheral_t<STM32U5xx, FDCAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, FDCAN1>::T*
        >(0x4000a400);

typename peripheral_t<STM32U5xx, FDCAN1_RAM>::T&
    peripheral_t<STM32U5xx, FDCAN1_RAM>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, FDCAN1_RAM>::T*
        >(0x4000ac00);

typename peripheral_t<STM32U5xx, SEC_FDCAN1>::T&
    peripheral_t<STM32U5xx, SEC_FDCAN1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_FDCAN1>::T*
        >(0x5000a400);

typename peripheral_t<STM32U5xx, SEC_FDCAN1_RAM>::T&
    peripheral_t<STM32U5xx, SEC_FDCAN1_RAM>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_FDCAN1_RAM>::T*
        >(0x5000ac00);

typename peripheral_t<STM32U5xx, FLASH>::T&
    peripheral_t<STM32U5xx, FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, FLASH>::T*
        >(0x40022000);

typename peripheral_t<STM32U5xx, SEC_FLASH>::T&
    peripheral_t<STM32U5xx, SEC_FLASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_FLASH>::T*
        >(0x50022000);

typename peripheral_t<STM32U5xx, FMAC>::T&
    peripheral_t<STM32U5xx, FMAC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, FMAC>::T*
        >(0x40021400);

typename peripheral_t<STM32U5xx, SEC_FMAC>::T&
    peripheral_t<STM32U5xx, SEC_FMAC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_FMAC>::T*
        >(0x50021400);

typename peripheral_t<STM32U5xx, FMC>::T&
    peripheral_t<STM32U5xx, FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, FMC>::T*
        >(0x420d0400);

typename peripheral_t<STM32U5xx, SEC_FMC>::T&
    peripheral_t<STM32U5xx, SEC_FMC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_FMC>::T*
        >(0x520d0400);

typename peripheral_t<STM32U5xx, GPDMA1>::T&
    peripheral_t<STM32U5xx, GPDMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPDMA1>::T*
        >(0x40020000);

typename peripheral_t<STM32U5xx, SEC_GPDMA1>::T&
    peripheral_t<STM32U5xx, SEC_GPDMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPDMA1>::T*
        >(0x50020000);

typename peripheral_t<STM32U5xx, GPIOA>::T&
    peripheral_t<STM32U5xx, GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOA>::T*
        >(0x42020000);

typename peripheral_t<STM32U5xx, SEC_GPIOA>::T&
    peripheral_t<STM32U5xx, SEC_GPIOA>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOA>::T*
        >(0x52020000);

typename peripheral_t<STM32U5xx, GPIOB>::T&
    peripheral_t<STM32U5xx, GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOB>::T*
        >(0x42020400);

typename peripheral_t<STM32U5xx, SEC_GPIOB>::T&
    peripheral_t<STM32U5xx, SEC_GPIOB>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOB>::T*
        >(0x52020400);

typename peripheral_t<STM32U5xx, GPIOC>::T&
    peripheral_t<STM32U5xx, GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOC>::T*
        >(0x42020800);

typename peripheral_t<STM32U5xx, GPIOD>::T&
    peripheral_t<STM32U5xx, GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOD>::T*
        >(0x42020c00);

typename peripheral_t<STM32U5xx, GPIOE>::T&
    peripheral_t<STM32U5xx, GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOE>::T*
        >(0x42021000);

typename peripheral_t<STM32U5xx, GPIOF>::T&
    peripheral_t<STM32U5xx, GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOF>::T*
        >(0x42021400);

typename peripheral_t<STM32U5xx, GPIOG>::T&
    peripheral_t<STM32U5xx, GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOG>::T*
        >(0x42021800);

typename peripheral_t<STM32U5xx, GPIOH>::T&
    peripheral_t<STM32U5xx, GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOH>::T*
        >(0x42021c00);

typename peripheral_t<STM32U5xx, SEC_GPIOC>::T&
    peripheral_t<STM32U5xx, SEC_GPIOC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOC>::T*
        >(0x52020800);

typename peripheral_t<STM32U5xx, SEC_GPIOD>::T&
    peripheral_t<STM32U5xx, SEC_GPIOD>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOD>::T*
        >(0x52020c00);

typename peripheral_t<STM32U5xx, SEC_GPIOE>::T&
    peripheral_t<STM32U5xx, SEC_GPIOE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOE>::T*
        >(0x52021000);

typename peripheral_t<STM32U5xx, SEC_GPIOF>::T&
    peripheral_t<STM32U5xx, SEC_GPIOF>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOF>::T*
        >(0x52021400);

typename peripheral_t<STM32U5xx, SEC_GPIOG>::T&
    peripheral_t<STM32U5xx, SEC_GPIOG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOG>::T*
        >(0x52021800);

typename peripheral_t<STM32U5xx, SEC_GPIOH>::T&
    peripheral_t<STM32U5xx, SEC_GPIOH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOH>::T*
        >(0x52021c00);

typename peripheral_t<STM32U5xx, GPIOI>::T&
    peripheral_t<STM32U5xx, GPIOI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GPIOI>::T*
        >(0x42022000);

typename peripheral_t<STM32U5xx, SEC_GPIOI>::T&
    peripheral_t<STM32U5xx, SEC_GPIOI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GPIOI>::T*
        >(0x52022000);

typename peripheral_t<STM32U5xx, GTZC1_MPCBB1>::T&
    peripheral_t<STM32U5xx, GTZC1_MPCBB1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC1_MPCBB1>::T*
        >(0x40032c00);

typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB1>::T&
    peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB1>::T*
        >(0x50032c00);

typename peripheral_t<STM32U5xx, GTZC1_MPCBB2>::T&
    peripheral_t<STM32U5xx, GTZC1_MPCBB2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC1_MPCBB2>::T*
        >(0x40033000);

typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB2>::T&
    peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB2>::T*
        >(0x50033000);

typename peripheral_t<STM32U5xx, GTZC1_MPCBB3>::T&
    peripheral_t<STM32U5xx, GTZC1_MPCBB3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC1_MPCBB3>::T*
        >(0x40033400);

typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB3>::T&
    peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC1_MPCBB3>::T*
        >(0x50033400);

typename peripheral_t<STM32U5xx, GTZC1_TZIC>::T&
    peripheral_t<STM32U5xx, GTZC1_TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC1_TZIC>::T*
        >(0x40032800);

typename peripheral_t<STM32U5xx, SEC_GTZC1_TZIC>::T&
    peripheral_t<STM32U5xx, SEC_GTZC1_TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC1_TZIC>::T*
        >(0x50032800);

typename peripheral_t<STM32U5xx, GTZC1_TZSC>::T&
    peripheral_t<STM32U5xx, GTZC1_TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC1_TZSC>::T*
        >(0x40032400);

typename peripheral_t<STM32U5xx, SEC_GTZC1_TZSC>::T&
    peripheral_t<STM32U5xx, SEC_GTZC1_TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC1_TZSC>::T*
        >(0x50032400);

typename peripheral_t<STM32U5xx, GTZC2_MPCBB4>::T&
    peripheral_t<STM32U5xx, GTZC2_MPCBB4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC2_MPCBB4>::T*
        >(0x46023800);

typename peripheral_t<STM32U5xx, SEC_GTZC2_MPCBB4>::T&
    peripheral_t<STM32U5xx, SEC_GTZC2_MPCBB4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC2_MPCBB4>::T*
        >(0x56023800);

typename peripheral_t<STM32U5xx, GTZC2_TZIC>::T&
    peripheral_t<STM32U5xx, GTZC2_TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC2_TZIC>::T*
        >(0x46023400);

typename peripheral_t<STM32U5xx, SEC_GTZC2_TZIC>::T&
    peripheral_t<STM32U5xx, SEC_GTZC2_TZIC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC2_TZIC>::T*
        >(0x56023400);

typename peripheral_t<STM32U5xx, GTZC2_TZSC>::T&
    peripheral_t<STM32U5xx, GTZC2_TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, GTZC2_TZSC>::T*
        >(0x46023000);

typename peripheral_t<STM32U5xx, SEC_GTZC2_TZSC>::T&
    peripheral_t<STM32U5xx, SEC_GTZC2_TZSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_GTZC2_TZSC>::T*
        >(0x56023000);

typename peripheral_t<STM32U5xx, HASH>::T&
    peripheral_t<STM32U5xx, HASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, HASH>::T*
        >(0x420c0400);

typename peripheral_t<STM32U5xx, SEC_HASH>::T&
    peripheral_t<STM32U5xx, SEC_HASH>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_HASH>::T*
        >(0x520c0400);

typename peripheral_t<STM32U5xx, I2C1>::T&
    peripheral_t<STM32U5xx, I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, I2C1>::T*
        >(0x40005400);

typename peripheral_t<STM32U5xx, I2C2>::T&
    peripheral_t<STM32U5xx, I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, I2C2>::T*
        >(0x40005800);

typename peripheral_t<STM32U5xx, I2C3>::T&
    peripheral_t<STM32U5xx, I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, I2C3>::T*
        >(0x46002800);

typename peripheral_t<STM32U5xx, I2C4>::T&
    peripheral_t<STM32U5xx, I2C4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, I2C4>::T*
        >(0x40008400);

typename peripheral_t<STM32U5xx, SEC_I2C1>::T&
    peripheral_t<STM32U5xx, SEC_I2C1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_I2C1>::T*
        >(0x50005400);

typename peripheral_t<STM32U5xx, SEC_I2C2>::T&
    peripheral_t<STM32U5xx, SEC_I2C2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_I2C2>::T*
        >(0x50005800);

typename peripheral_t<STM32U5xx, SEC_I2C3>::T&
    peripheral_t<STM32U5xx, SEC_I2C3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_I2C3>::T*
        >(0x56002800);

typename peripheral_t<STM32U5xx, SEC_I2C4>::T&
    peripheral_t<STM32U5xx, SEC_I2C4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_I2C4>::T*
        >(0x50008400);

typename peripheral_t<STM32U5xx, ICACHE>::T&
    peripheral_t<STM32U5xx, ICACHE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, ICACHE>::T*
        >(0x40030400);

typename peripheral_t<STM32U5xx, SEC_ICACHE>::T&
    peripheral_t<STM32U5xx, SEC_ICACHE>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_ICACHE>::T*
        >(0x50030400);

typename peripheral_t<STM32U5xx, IWDG>::T&
    peripheral_t<STM32U5xx, IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, IWDG>::T*
        >(0x40003000);

typename peripheral_t<STM32U5xx, SEC_IWDG>::T&
    peripheral_t<STM32U5xx, SEC_IWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_IWDG>::T*
        >(0x50003000);

typename peripheral_t<STM32U5xx, LPDMA1>::T&
    peripheral_t<STM32U5xx, LPDMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPDMA1>::T*
        >(0x46025000);

typename peripheral_t<STM32U5xx, SEC_LPDMA1>::T&
    peripheral_t<STM32U5xx, SEC_LPDMA1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPDMA1>::T*
        >(0x56025000);

typename peripheral_t<STM32U5xx, LPGPIO1>::T&
    peripheral_t<STM32U5xx, LPGPIO1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPGPIO1>::T*
        >(0x46020000);

typename peripheral_t<STM32U5xx, SEC_LPGPIO1>::T&
    peripheral_t<STM32U5xx, SEC_LPGPIO1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPGPIO1>::T*
        >(0x56020000);

typename peripheral_t<STM32U5xx, LPTIM1>::T&
    peripheral_t<STM32U5xx, LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPTIM1>::T*
        >(0x46004400);

typename peripheral_t<STM32U5xx, LPTIM2>::T&
    peripheral_t<STM32U5xx, LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPTIM2>::T*
        >(0x40009400);

typename peripheral_t<STM32U5xx, LPTIM3>::T&
    peripheral_t<STM32U5xx, LPTIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPTIM3>::T*
        >(0x46004800);

typename peripheral_t<STM32U5xx, SEC_LPTIM1>::T&
    peripheral_t<STM32U5xx, SEC_LPTIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPTIM1>::T*
        >(0x56004400);

typename peripheral_t<STM32U5xx, SEC_LPTIM2>::T&
    peripheral_t<STM32U5xx, SEC_LPTIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPTIM2>::T*
        >(0x50009400);

typename peripheral_t<STM32U5xx, SEC_LPTIM3>::T&
    peripheral_t<STM32U5xx, SEC_LPTIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPTIM3>::T*
        >(0x56004800);

typename peripheral_t<STM32U5xx, LPTIM4>::T&
    peripheral_t<STM32U5xx, LPTIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPTIM4>::T*
        >(0x46004c00);

typename peripheral_t<STM32U5xx, SEC_LPTIM4>::T&
    peripheral_t<STM32U5xx, SEC_LPTIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPTIM4>::T*
        >(0x56004c00);

typename peripheral_t<STM32U5xx, LPUART1>::T&
    peripheral_t<STM32U5xx, LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, LPUART1>::T*
        >(0x46002400);

typename peripheral_t<STM32U5xx, SEC_LPUART1>::T&
    peripheral_t<STM32U5xx, SEC_LPUART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_LPUART1>::T*
        >(0x56002400);

typename peripheral_t<STM32U5xx, MDF1>::T&
    peripheral_t<STM32U5xx, MDF1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, MDF1>::T*
        >(0x40025000);

typename peripheral_t<STM32U5xx, SEC_MDF1>::T&
    peripheral_t<STM32U5xx, SEC_MDF1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_MDF1>::T*
        >(0x50025000);

typename peripheral_t<STM32U5xx, OCTOSPI1>::T&
    peripheral_t<STM32U5xx, OCTOSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OCTOSPI1>::T*
        >(0x420d1400);

typename peripheral_t<STM32U5xx, OCTOSPI2>::T&
    peripheral_t<STM32U5xx, OCTOSPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OCTOSPI2>::T*
        >(0x420d2400);

typename peripheral_t<STM32U5xx, SEC_OCTOSPI1>::T&
    peripheral_t<STM32U5xx, SEC_OCTOSPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OCTOSPI1>::T*
        >(0x520d1400);

typename peripheral_t<STM32U5xx, SEC_OCTOSPI2>::T&
    peripheral_t<STM32U5xx, SEC_OCTOSPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OCTOSPI2>::T*
        >(0x520d2400);

typename peripheral_t<STM32U5xx, OCTOSPIM>::T&
    peripheral_t<STM32U5xx, OCTOSPIM>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OCTOSPIM>::T*
        >(0x420c4000);

typename peripheral_t<STM32U5xx, SEC_OCTOSPIM>::T&
    peripheral_t<STM32U5xx, SEC_OCTOSPIM>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OCTOSPIM>::T*
        >(0x520c4000);

typename peripheral_t<STM32U5xx, OPAMP>::T&
    peripheral_t<STM32U5xx, OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OPAMP>::T*
        >(0x46005000);

typename peripheral_t<STM32U5xx, SEC_OPAMP>::T&
    peripheral_t<STM32U5xx, SEC_OPAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OPAMP>::T*
        >(0x56005000);

typename peripheral_t<STM32U5xx, OTFDEC1>::T&
    peripheral_t<STM32U5xx, OTFDEC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OTFDEC1>::T*
        >(0x420c5000);

typename peripheral_t<STM32U5xx, OTFDEC2>::T&
    peripheral_t<STM32U5xx, OTFDEC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OTFDEC2>::T*
        >(0x420c5400);

typename peripheral_t<STM32U5xx, SEC_OTFDEC1>::T&
    peripheral_t<STM32U5xx, SEC_OTFDEC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OTFDEC1>::T*
        >(0x520c5000);

typename peripheral_t<STM32U5xx, SEC_OTFDEC2>::T&
    peripheral_t<STM32U5xx, SEC_OTFDEC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OTFDEC2>::T*
        >(0x520c5400);

typename peripheral_t<STM32U5xx, OTG_FS>::T&
    peripheral_t<STM32U5xx, OTG_FS>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, OTG_FS>::T*
        >(0x42038000);

typename peripheral_t<STM32U5xx, SEC_OTG_FS>::T&
    peripheral_t<STM32U5xx, SEC_OTG_FS>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_OTG_FS>::T*
        >(0x52038000);

typename peripheral_t<STM32U5xx, PKA>::T&
    peripheral_t<STM32U5xx, PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, PKA>::T*
        >(0x420c2000);

typename peripheral_t<STM32U5xx, SEC_PKA>::T&
    peripheral_t<STM32U5xx, SEC_PKA>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_PKA>::T*
        >(0x520c2000);

typename peripheral_t<STM32U5xx, PSSI>::T&
    peripheral_t<STM32U5xx, PSSI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, PSSI>::T*
        >(0x4202c400);

typename peripheral_t<STM32U5xx, SEC_PSSI>::T&
    peripheral_t<STM32U5xx, SEC_PSSI>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_PSSI>::T*
        >(0x5202c400);

typename peripheral_t<STM32U5xx, PWR>::T&
    peripheral_t<STM32U5xx, PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, PWR>::T*
        >(0x46020800);

typename peripheral_t<STM32U5xx, SEC_PWR>::T&
    peripheral_t<STM32U5xx, SEC_PWR>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_PWR>::T*
        >(0x56020800);

typename peripheral_t<STM32U5xx, RAMCFG>::T&
    peripheral_t<STM32U5xx, RAMCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, RAMCFG>::T*
        >(0x40026000);

typename peripheral_t<STM32U5xx, SEC_RAMCFG>::T&
    peripheral_t<STM32U5xx, SEC_RAMCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_RAMCFG>::T*
        >(0x50026000);

typename peripheral_t<STM32U5xx, RCC>::T&
    peripheral_t<STM32U5xx, RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, RCC>::T*
        >(0x46020c00);

typename peripheral_t<STM32U5xx, SEC_RCC>::T&
    peripheral_t<STM32U5xx, SEC_RCC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_RCC>::T*
        >(0x56020c00);

typename peripheral_t<STM32U5xx, RNG>::T&
    peripheral_t<STM32U5xx, RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, RNG>::T*
        >(0x420c0800);

typename peripheral_t<STM32U5xx, SEC_RNG>::T&
    peripheral_t<STM32U5xx, SEC_RNG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_RNG>::T*
        >(0x520c0800);

typename peripheral_t<STM32U5xx, RTC>::T&
    peripheral_t<STM32U5xx, RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, RTC>::T*
        >(0x46007800);

typename peripheral_t<STM32U5xx, SEC_RTC>::T&
    peripheral_t<STM32U5xx, SEC_RTC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_RTC>::T*
        >(0x56007800);

typename peripheral_t<STM32U5xx, SAES>::T&
    peripheral_t<STM32U5xx, SAES>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SAES>::T*
        >(0x420c0c00);

typename peripheral_t<STM32U5xx, SEC_SAES>::T&
    peripheral_t<STM32U5xx, SEC_SAES>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SAES>::T*
        >(0x520c0c00);

typename peripheral_t<STM32U5xx, SAI1>::T&
    peripheral_t<STM32U5xx, SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SAI1>::T*
        >(0x40015400);

typename peripheral_t<STM32U5xx, SAI2>::T&
    peripheral_t<STM32U5xx, SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SAI2>::T*
        >(0x40015800);

typename peripheral_t<STM32U5xx, SEC_SAI1>::T&
    peripheral_t<STM32U5xx, SEC_SAI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SAI1>::T*
        >(0x50015400);

typename peripheral_t<STM32U5xx, SEC_SAI2>::T&
    peripheral_t<STM32U5xx, SEC_SAI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SAI2>::T*
        >(0x50015800);

typename peripheral_t<STM32U5xx, SDMMC1>::T&
    peripheral_t<STM32U5xx, SDMMC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SDMMC1>::T*
        >(0x420c8000);

typename peripheral_t<STM32U5xx, SDMMC2>::T&
    peripheral_t<STM32U5xx, SDMMC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SDMMC2>::T*
        >(0x420c8c00);

typename peripheral_t<STM32U5xx, SEC_SDMMC1>::T&
    peripheral_t<STM32U5xx, SEC_SDMMC1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SDMMC1>::T*
        >(0x520c8000);

typename peripheral_t<STM32U5xx, SEC_SDMMC2>::T&
    peripheral_t<STM32U5xx, SEC_SDMMC2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SDMMC2>::T*
        >(0x520c8c00);

typename peripheral_t<STM32U5xx, SEC_SPI1>::T&
    peripheral_t<STM32U5xx, SEC_SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SPI1>::T*
        >(0x50013000);

typename peripheral_t<STM32U5xx, SEC_SPI2>::T&
    peripheral_t<STM32U5xx, SEC_SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SPI2>::T*
        >(0x50003800);

typename peripheral_t<STM32U5xx, SEC_SPI3>::T&
    peripheral_t<STM32U5xx, SEC_SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SPI3>::T*
        >(0x56002000);

typename peripheral_t<STM32U5xx, SPI1>::T&
    peripheral_t<STM32U5xx, SPI1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SPI1>::T*
        >(0x40013000);

typename peripheral_t<STM32U5xx, SPI2>::T&
    peripheral_t<STM32U5xx, SPI2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SPI2>::T*
        >(0x40003800);

typename peripheral_t<STM32U5xx, SPI3>::T&
    peripheral_t<STM32U5xx, SPI3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SPI3>::T*
        >(0x46002000);

typename peripheral_t<STM32U5xx, SEC_SYSCFG>::T&
    peripheral_t<STM32U5xx, SEC_SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_SYSCFG>::T*
        >(0x56000400);

typename peripheral_t<STM32U5xx, SYSCFG>::T&
    peripheral_t<STM32U5xx, SYSCFG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SYSCFG>::T*
        >(0x46000400);

typename peripheral_t<STM32U5xx, SEC_TAMP>::T&
    peripheral_t<STM32U5xx, SEC_TAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TAMP>::T*
        >(0x56007c00);

typename peripheral_t<STM32U5xx, TAMP>::T&
    peripheral_t<STM32U5xx, TAMP>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TAMP>::T*
        >(0x46007c00);

typename peripheral_t<STM32U5xx, SEC_TIM1>::T&
    peripheral_t<STM32U5xx, SEC_TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM1>::T*
        >(0x50012c00);

typename peripheral_t<STM32U5xx, SEC_TIM8>::T&
    peripheral_t<STM32U5xx, SEC_TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM8>::T*
        >(0x50013400);

typename peripheral_t<STM32U5xx, TIM1>::T&
    peripheral_t<STM32U5xx, TIM1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM1>::T*
        >(0x40012c00);

typename peripheral_t<STM32U5xx, TIM8>::T&
    peripheral_t<STM32U5xx, TIM8>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM8>::T*
        >(0x40013400);

typename peripheral_t<STM32U5xx, SEC_TIM2>::T&
    peripheral_t<STM32U5xx, SEC_TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM2>::T*
        >(0x50000000);

typename peripheral_t<STM32U5xx, SEC_TIM3>::T&
    peripheral_t<STM32U5xx, SEC_TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM3>::T*
        >(0x50000400);

typename peripheral_t<STM32U5xx, SEC_TIM4>::T&
    peripheral_t<STM32U5xx, SEC_TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM4>::T*
        >(0x50000800);

typename peripheral_t<STM32U5xx, SEC_TIM5>::T&
    peripheral_t<STM32U5xx, SEC_TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM5>::T*
        >(0x50000c00);

typename peripheral_t<STM32U5xx, TIM2>::T&
    peripheral_t<STM32U5xx, TIM2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM2>::T*
        >(0x40000000);

typename peripheral_t<STM32U5xx, TIM3>::T&
    peripheral_t<STM32U5xx, TIM3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM3>::T*
        >(0x40000400);

typename peripheral_t<STM32U5xx, TIM4>::T&
    peripheral_t<STM32U5xx, TIM4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM4>::T*
        >(0x40000800);

typename peripheral_t<STM32U5xx, TIM5>::T&
    peripheral_t<STM32U5xx, TIM5>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM5>::T*
        >(0x40000c00);

typename peripheral_t<STM32U5xx, SEC_TIM6>::T&
    peripheral_t<STM32U5xx, SEC_TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM6>::T*
        >(0x50001000);

typename peripheral_t<STM32U5xx, SEC_TIM7>::T&
    peripheral_t<STM32U5xx, SEC_TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM7>::T*
        >(0x50001400);

typename peripheral_t<STM32U5xx, TIM6>::T&
    peripheral_t<STM32U5xx, TIM6>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM6>::T*
        >(0x40001000);

typename peripheral_t<STM32U5xx, TIM7>::T&
    peripheral_t<STM32U5xx, TIM7>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM7>::T*
        >(0x40001400);

typename peripheral_t<STM32U5xx, SEC_TIM15>::T&
    peripheral_t<STM32U5xx, SEC_TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM15>::T*
        >(0x50014000);

typename peripheral_t<STM32U5xx, TIM15>::T&
    peripheral_t<STM32U5xx, TIM15>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM15>::T*
        >(0x40014000);

typename peripheral_t<STM32U5xx, SEC_TIM16>::T&
    peripheral_t<STM32U5xx, SEC_TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM16>::T*
        >(0x50014400);

typename peripheral_t<STM32U5xx, SEC_TIM17>::T&
    peripheral_t<STM32U5xx, SEC_TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TIM17>::T*
        >(0x50014800);

typename peripheral_t<STM32U5xx, TIM16>::T&
    peripheral_t<STM32U5xx, TIM16>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM16>::T*
        >(0x40014400);

typename peripheral_t<STM32U5xx, TIM17>::T&
    peripheral_t<STM32U5xx, TIM17>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TIM17>::T*
        >(0x40014800);

typename peripheral_t<STM32U5xx, SEC_TSC>::T&
    peripheral_t<STM32U5xx, SEC_TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_TSC>::T*
        >(0x50024000);

typename peripheral_t<STM32U5xx, TSC>::T&
    peripheral_t<STM32U5xx, TSC>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, TSC>::T*
        >(0x40024000);

typename peripheral_t<STM32U5xx, SEC_UCPD1>::T&
    peripheral_t<STM32U5xx, SEC_UCPD1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_UCPD1>::T*
        >(0x5000dc00);

typename peripheral_t<STM32U5xx, UCPD1>::T&
    peripheral_t<STM32U5xx, UCPD1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, UCPD1>::T*
        >(0x4000dc00);

typename peripheral_t<STM32U5xx, SEC_UART4>::T&
    peripheral_t<STM32U5xx, SEC_UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_UART4>::T*
        >(0x50004c00);

typename peripheral_t<STM32U5xx, SEC_UART5>::T&
    peripheral_t<STM32U5xx, SEC_UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_UART5>::T*
        >(0x50005000);

typename peripheral_t<STM32U5xx, SEC_USART1>::T&
    peripheral_t<STM32U5xx, SEC_USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_USART1>::T*
        >(0x50013800);

typename peripheral_t<STM32U5xx, SEC_USART2>::T&
    peripheral_t<STM32U5xx, SEC_USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_USART2>::T*
        >(0x50004400);

typename peripheral_t<STM32U5xx, SEC_USART3>::T&
    peripheral_t<STM32U5xx, SEC_USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_USART3>::T*
        >(0x50004800);

typename peripheral_t<STM32U5xx, UART4>::T&
    peripheral_t<STM32U5xx, UART4>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, UART4>::T*
        >(0x40004c00);

typename peripheral_t<STM32U5xx, UART5>::T&
    peripheral_t<STM32U5xx, UART5>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, UART5>::T*
        >(0x40005000);

typename peripheral_t<STM32U5xx, USART1>::T&
    peripheral_t<STM32U5xx, USART1>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, USART1>::T*
        >(0x40013800);

typename peripheral_t<STM32U5xx, USART2>::T&
    peripheral_t<STM32U5xx, USART2>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, USART2>::T*
        >(0x40004400);

typename peripheral_t<STM32U5xx, USART3>::T&
    peripheral_t<STM32U5xx, USART3>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, USART3>::T*
        >(0x40004800);

typename peripheral_t<STM32U5xx, SEC_VREFBUF>::T&
    peripheral_t<STM32U5xx, SEC_VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_VREFBUF>::T*
        >(0x56007400);

typename peripheral_t<STM32U5xx, VREFBUF>::T&
    peripheral_t<STM32U5xx, VREFBUF>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, VREFBUF>::T*
        >(0x46007400);

typename peripheral_t<STM32U5xx, SEC_WWDG>::T&
    peripheral_t<STM32U5xx, SEC_WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, SEC_WWDG>::T*
        >(0x50002c00);

typename peripheral_t<STM32U5xx, WWDG>::T&
    peripheral_t<STM32U5xx, WWDG>::V = *reinterpret_cast
        <typename peripheral_t<STM32U5xx, WWDG>::T*
        >(0x40002c00);

