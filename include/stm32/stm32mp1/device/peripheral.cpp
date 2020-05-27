#pragma once

////
//
//      STM32MP1 peripherals
//
////

typename peripheral_t<STM32MP15xxx, ADC>::T& peripheral_t<STM32MP15xxx, ADC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ADC>::T*>(0x48003000);

typename peripheral_t<STM32MP15xxx, ADC_COMMON>::T& peripheral_t<STM32MP15xxx, ADC_COMMON>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ADC_COMMON>::T*>(0x48003300);

typename peripheral_t<STM32MP15xxx, ADC2>::T& peripheral_t<STM32MP15xxx, ADC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ADC2>::T*>(0x48003100);

typename peripheral_t<STM32MP15xxx, AXIMC_MX>::T& peripheral_t<STM32MP15xxx, AXIMC_MX>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, AXIMC_MX>::T*>(0x57042024);

typename peripheral_t<STM32MP15xxx, BSEC>::T& peripheral_t<STM32MP15xxx, BSEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, BSEC>::T*>(0x5c005000);

typename peripheral_t<STM32MP15xxx, CCU>::T& peripheral_t<STM32MP15xxx, CCU>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, CCU>::T*>(0x44010000);

typename peripheral_t<STM32MP15xxx, CRC1>::T& peripheral_t<STM32MP15xxx, CRC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, CRC1>::T*>(0x58009000);

typename peripheral_t<STM32MP15xxx, CRC2>::T& peripheral_t<STM32MP15xxx, CRC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, CRC2>::T*>(0x4c004000);

typename peripheral_t<STM32MP15xxx, CRYP1>::T& peripheral_t<STM32MP15xxx, CRYP1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, CRYP1>::T*>(0x54001000);

typename peripheral_t<STM32MP15xxx, CRYP2>::T& peripheral_t<STM32MP15xxx, CRYP2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, CRYP2>::T*>(0x4c005000);

typename peripheral_t<STM32MP15xxx, DAC1>::T& peripheral_t<STM32MP15xxx, DAC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DAC1>::T*>(0x40017000);

typename peripheral_t<STM32MP15xxx, DCMI>::T& peripheral_t<STM32MP15xxx, DCMI>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DCMI>::T*>(0x4c006000);

typename peripheral_t<STM32MP15xxx, DDRCTRL>::T& peripheral_t<STM32MP15xxx, DDRCTRL>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DDRCTRL>::T*>(0x5a003000);

typename peripheral_t<STM32MP15xxx, DDRPERFM>::T& peripheral_t<STM32MP15xxx, DDRPERFM>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DDRPERFM>::T*>(0x5a007000);

typename peripheral_t<STM32MP15xxx, DDRPHYC>::T& peripheral_t<STM32MP15xxx, DDRPHYC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DDRPHYC>::T*>(0x5a004000);

typename peripheral_t<STM32MP15xxx, DFSDM1>::T& peripheral_t<STM32MP15xxx, DFSDM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DFSDM1>::T*>(0x4400d000);

typename peripheral_t<STM32MP15xxx, DLYBSD1>::T& peripheral_t<STM32MP15xxx, DLYBSD1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DLYBSD1>::T*>(0x58006000);

typename peripheral_t<STM32MP15xxx, DLYBSD2>::T& peripheral_t<STM32MP15xxx, DLYBSD2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DLYBSD2>::T*>(0x58008000);

typename peripheral_t<STM32MP15xxx, DLYBSD3>::T& peripheral_t<STM32MP15xxx, DLYBSD3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DLYBSD3>::T*>(0x48005000);

typename peripheral_t<STM32MP15xxx, DLYBQS>::T& peripheral_t<STM32MP15xxx, DLYBQS>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DLYBQS>::T*>(0x58004000);

typename peripheral_t<STM32MP15xxx, DMA1>::T& peripheral_t<STM32MP15xxx, DMA1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DMA1>::T*>(0x48000000);

typename peripheral_t<STM32MP15xxx, DMA2>::T& peripheral_t<STM32MP15xxx, DMA2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DMA2>::T*>(0x48001000);

typename peripheral_t<STM32MP15xxx, DMAMUX1>::T& peripheral_t<STM32MP15xxx, DMAMUX1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DMAMUX1>::T*>(0x48002000);

typename peripheral_t<STM32MP15xxx, DSIHOST1>::T& peripheral_t<STM32MP15xxx, DSIHOST1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DSIHOST1>::T*>(0x5a000000);

typename peripheral_t<STM32MP15xxx, DTS>::T& peripheral_t<STM32MP15xxx, DTS>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, DTS>::T*>(0x50028000);

typename peripheral_t<STM32MP15xxx, ETZPC>::T& peripheral_t<STM32MP15xxx, ETZPC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ETZPC>::T*>(0x5c007000);

typename peripheral_t<STM32MP15xxx, EXTI>::T& peripheral_t<STM32MP15xxx, EXTI>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, EXTI>::T*>(0x5000d000);

typename peripheral_t<STM32MP15xxx, ETH_MAC_MMC>::T& peripheral_t<STM32MP15xxx, ETH_MAC_MMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ETH_MAC_MMC>::T*>(0x5800a000);

typename peripheral_t<STM32MP15xxx, ETH_MTL>::T& peripheral_t<STM32MP15xxx, ETH_MTL>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ETH_MTL>::T*>(0x5800ac00);

typename peripheral_t<STM32MP15xxx, ETH_DMA>::T& peripheral_t<STM32MP15xxx, ETH_DMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, ETH_DMA>::T*>(0x5800b000);

typename peripheral_t<STM32MP15xxx, FDCAN1>::T& peripheral_t<STM32MP15xxx, FDCAN1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, FDCAN1>::T*>(0x4400e000);

typename peripheral_t<STM32MP15xxx, FDCAN2>::T& peripheral_t<STM32MP15xxx, FDCAN2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, FDCAN2>::T*>(0x4400f000);

typename peripheral_t<STM32MP15xxx, FMC>::T& peripheral_t<STM32MP15xxx, FMC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, FMC>::T*>(0x58002000);

typename peripheral_t<STM32MP15xxx, GICC>::T& peripheral_t<STM32MP15xxx, GICC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GICC>::T*>(0xa0022000);

typename peripheral_t<STM32MP15xxx, GICD>::T& peripheral_t<STM32MP15xxx, GICD>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GICD>::T*>(0xa0021000);

typename peripheral_t<STM32MP15xxx, GICH>::T& peripheral_t<STM32MP15xxx, GICH>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GICH>::T*>(0xa0024000);

typename peripheral_t<STM32MP15xxx, GICV>::T& peripheral_t<STM32MP15xxx, GICV>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GICV>::T*>(0xa0026000);

typename peripheral_t<STM32MP15xxx, GPIOA>::T& peripheral_t<STM32MP15xxx, GPIOA>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOA>::T*>(0x50002000);

typename peripheral_t<STM32MP15xxx, GPIOB>::T& peripheral_t<STM32MP15xxx, GPIOB>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOB>::T*>(0x50003000);

typename peripheral_t<STM32MP15xxx, GPIOC>::T& peripheral_t<STM32MP15xxx, GPIOC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOC>::T*>(0x50004000);

typename peripheral_t<STM32MP15xxx, GPIOD>::T& peripheral_t<STM32MP15xxx, GPIOD>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOD>::T*>(0x50005000);

typename peripheral_t<STM32MP15xxx, GPIOE>::T& peripheral_t<STM32MP15xxx, GPIOE>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOE>::T*>(0x50006000);

typename peripheral_t<STM32MP15xxx, GPIOF>::T& peripheral_t<STM32MP15xxx, GPIOF>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOF>::T*>(0x50007000);

typename peripheral_t<STM32MP15xxx, GPIOG>::T& peripheral_t<STM32MP15xxx, GPIOG>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOG>::T*>(0x50008000);

typename peripheral_t<STM32MP15xxx, GPIOH>::T& peripheral_t<STM32MP15xxx, GPIOH>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOH>::T*>(0x50009000);

typename peripheral_t<STM32MP15xxx, GPIOI>::T& peripheral_t<STM32MP15xxx, GPIOI>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOI>::T*>(0x5000a000);

typename peripheral_t<STM32MP15xxx, GPIOJ>::T& peripheral_t<STM32MP15xxx, GPIOJ>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOJ>::T*>(0x5000b000);

typename peripheral_t<STM32MP15xxx, GPIOK>::T& peripheral_t<STM32MP15xxx, GPIOK>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOK>::T*>(0x5000c000);

typename peripheral_t<STM32MP15xxx, GPIOZ>::T& peripheral_t<STM32MP15xxx, GPIOZ>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, GPIOZ>::T*>(0x54004000);

typename peripheral_t<STM32MP15xxx, HASH1>::T& peripheral_t<STM32MP15xxx, HASH1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, HASH1>::T*>(0x54002000);

typename peripheral_t<STM32MP15xxx, HASH2>::T& peripheral_t<STM32MP15xxx, HASH2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, HASH2>::T*>(0x4c002000);

typename peripheral_t<STM32MP15xxx, HDMI_CEC>::T& peripheral_t<STM32MP15xxx, HDMI_CEC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, HDMI_CEC>::T*>(0x40016000);

typename peripheral_t<STM32MP15xxx, HDP>::T& peripheral_t<STM32MP15xxx, HDP>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, HDP>::T*>(0x5002a000);

typename peripheral_t<STM32MP15xxx, HSEM>::T& peripheral_t<STM32MP15xxx, HSEM>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, HSEM>::T*>(0x4c000000);

typename peripheral_t<STM32MP15xxx, I2C2>::T& peripheral_t<STM32MP15xxx, I2C2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C2>::T*>(0x40013000);

typename peripheral_t<STM32MP15xxx, I2C1>::T& peripheral_t<STM32MP15xxx, I2C1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C1>::T*>(0x40012000);

typename peripheral_t<STM32MP15xxx, I2C3>::T& peripheral_t<STM32MP15xxx, I2C3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C3>::T*>(0x40014000);

typename peripheral_t<STM32MP15xxx, I2C4>::T& peripheral_t<STM32MP15xxx, I2C4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C4>::T*>(0x5c002000);

typename peripheral_t<STM32MP15xxx, I2C5>::T& peripheral_t<STM32MP15xxx, I2C5>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C5>::T*>(0x40015000);

typename peripheral_t<STM32MP15xxx, I2C6>::T& peripheral_t<STM32MP15xxx, I2C6>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, I2C6>::T*>(0x5c009000);

typename peripheral_t<STM32MP15xxx, IPCC>::T& peripheral_t<STM32MP15xxx, IPCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, IPCC>::T*>(0x4c001000);

typename peripheral_t<STM32MP15xxx, IWDG1>::T& peripheral_t<STM32MP15xxx, IWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, IWDG1>::T*>(0x5c003000);

typename peripheral_t<STM32MP15xxx, IWDG2>::T& peripheral_t<STM32MP15xxx, IWDG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, IWDG2>::T*>(0x5a002000);

typename peripheral_t<STM32MP15xxx, LPTIM1>::T& peripheral_t<STM32MP15xxx, LPTIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LPTIM1>::T*>(0x40009000);

typename peripheral_t<STM32MP15xxx, LPTIM2>::T& peripheral_t<STM32MP15xxx, LPTIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LPTIM2>::T*>(0x50021000);

typename peripheral_t<STM32MP15xxx, LPTIM3>::T& peripheral_t<STM32MP15xxx, LPTIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LPTIM3>::T*>(0x50022000);

typename peripheral_t<STM32MP15xxx, LPTIM4>::T& peripheral_t<STM32MP15xxx, LPTIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LPTIM4>::T*>(0x50023000);

typename peripheral_t<STM32MP15xxx, LPTIM5>::T& peripheral_t<STM32MP15xxx, LPTIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LPTIM5>::T*>(0x50024000);

typename peripheral_t<STM32MP15xxx, LTDC>::T& peripheral_t<STM32MP15xxx, LTDC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, LTDC>::T*>(0x5a001000);

typename peripheral_t<STM32MP15xxx, MDIOS>::T& peripheral_t<STM32MP15xxx, MDIOS>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, MDIOS>::T*>(0x4001c000);

typename peripheral_t<STM32MP15xxx, MDMA>::T& peripheral_t<STM32MP15xxx, MDMA>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, MDMA>::T*>(0x58000000);

typename peripheral_t<STM32MP15xxx, NVIC>::T& peripheral_t<STM32MP15xxx, NVIC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, NVIC>::T*>(0xe000e100);

typename peripheral_t<STM32MP15xxx, OTGHSFS1>::T& peripheral_t<STM32MP15xxx, OTGHSFS1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, OTGHSFS1>::T*>(0x49000000);

typename peripheral_t<STM32MP15xxx, PWR>::T& peripheral_t<STM32MP15xxx, PWR>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, PWR>::T*>(0x50001000);

typename peripheral_t<STM32MP15xxx, QUADSPI>::T& peripheral_t<STM32MP15xxx, QUADSPI>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, QUADSPI>::T*>(0x58003000);

typename peripheral_t<STM32MP15xxx, RCC>::T& peripheral_t<STM32MP15xxx, RCC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, RCC>::T*>(0x50000000);

typename peripheral_t<STM32MP15xxx, RNG1>::T& peripheral_t<STM32MP15xxx, RNG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, RNG1>::T*>(0x54003000);

typename peripheral_t<STM32MP15xxx, RNG2>::T& peripheral_t<STM32MP15xxx, RNG2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, RNG2>::T*>(0x4c003000);

typename peripheral_t<STM32MP15xxx, RTC>::T& peripheral_t<STM32MP15xxx, RTC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, RTC>::T*>(0x5c004000);

typename peripheral_t<STM32MP15xxx, SAI1>::T& peripheral_t<STM32MP15xxx, SAI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SAI1>::T*>(0x4400a000);

typename peripheral_t<STM32MP15xxx, SAI2>::T& peripheral_t<STM32MP15xxx, SAI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SAI2>::T*>(0x4400b000);

typename peripheral_t<STM32MP15xxx, SAI3>::T& peripheral_t<STM32MP15xxx, SAI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SAI3>::T*>(0x4400c000);

typename peripheral_t<STM32MP15xxx, SAI4>::T& peripheral_t<STM32MP15xxx, SAI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SAI4>::T*>(0x50027000);

typename peripheral_t<STM32MP15xxx, SDMMC1>::T& peripheral_t<STM32MP15xxx, SDMMC1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SDMMC1>::T*>(0x58005000);

typename peripheral_t<STM32MP15xxx, SDMMC2>::T& peripheral_t<STM32MP15xxx, SDMMC2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SDMMC2>::T*>(0x58007000);

typename peripheral_t<STM32MP15xxx, SDMMC3>::T& peripheral_t<STM32MP15xxx, SDMMC3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SDMMC3>::T*>(0x48004000);

typename peripheral_t<STM32MP15xxx, SPDIFRX>::T& peripheral_t<STM32MP15xxx, SPDIFRX>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPDIFRX>::T*>(0x4000d000);

typename peripheral_t<STM32MP15xxx, SPI1>::T& peripheral_t<STM32MP15xxx, SPI1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI1>::T*>(0x44004000);

typename peripheral_t<STM32MP15xxx, SPI2>::T& peripheral_t<STM32MP15xxx, SPI2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI2>::T*>(0x4000b000);

typename peripheral_t<STM32MP15xxx, SPI3>::T& peripheral_t<STM32MP15xxx, SPI3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI3>::T*>(0x4000c000);

typename peripheral_t<STM32MP15xxx, SPI4>::T& peripheral_t<STM32MP15xxx, SPI4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI4>::T*>(0x44005000);

typename peripheral_t<STM32MP15xxx, SPI5>::T& peripheral_t<STM32MP15xxx, SPI5>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI5>::T*>(0x44009000);

typename peripheral_t<STM32MP15xxx, SPI6>::T& peripheral_t<STM32MP15xxx, SPI6>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SPI6>::T*>(0x5c001000);

typename peripheral_t<STM32MP15xxx, STGENC>::T& peripheral_t<STM32MP15xxx, STGENC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, STGENC>::T*>(0x5c008000);

typename peripheral_t<STM32MP15xxx, STGENR>::T& peripheral_t<STM32MP15xxx, STGENR>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, STGENR>::T*>(0x5a005000);

typename peripheral_t<STM32MP15xxx, SYSCFG>::T& peripheral_t<STM32MP15xxx, SYSCFG>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, SYSCFG>::T*>(0x50020000);

typename peripheral_t<STM32MP15xxx, TAMP>::T& peripheral_t<STM32MP15xxx, TAMP>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TAMP>::T*>(0x5c00a000);

typename peripheral_t<STM32MP15xxx, TIM1>::T& peripheral_t<STM32MP15xxx, TIM1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM1>::T*>(0x44000000);

typename peripheral_t<STM32MP15xxx, TIM13>::T& peripheral_t<STM32MP15xxx, TIM13>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM13>::T*>(0x40007000);

typename peripheral_t<STM32MP15xxx, TIM14>::T& peripheral_t<STM32MP15xxx, TIM14>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM14>::T*>(0x40008000);

typename peripheral_t<STM32MP15xxx, TIM2>::T& peripheral_t<STM32MP15xxx, TIM2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM2>::T*>(0x40000000);

typename peripheral_t<STM32MP15xxx, TIM3>::T& peripheral_t<STM32MP15xxx, TIM3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM3>::T*>(0x40001000);

typename peripheral_t<STM32MP15xxx, TIM4>::T& peripheral_t<STM32MP15xxx, TIM4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM4>::T*>(0x40002000);

typename peripheral_t<STM32MP15xxx, TIM5>::T& peripheral_t<STM32MP15xxx, TIM5>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM5>::T*>(0x40003000);

typename peripheral_t<STM32MP15xxx, TIM6>::T& peripheral_t<STM32MP15xxx, TIM6>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM6>::T*>(0x40004000);

typename peripheral_t<STM32MP15xxx, TIM7>::T& peripheral_t<STM32MP15xxx, TIM7>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM7>::T*>(0x40005000);

typename peripheral_t<STM32MP15xxx, TIM8>::T& peripheral_t<STM32MP15xxx, TIM8>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM8>::T*>(0x44001000);

typename peripheral_t<STM32MP15xxx, TIM15>::T& peripheral_t<STM32MP15xxx, TIM15>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM15>::T*>(0x44006000);

typename peripheral_t<STM32MP15xxx, TIM16>::T& peripheral_t<STM32MP15xxx, TIM16>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM16>::T*>(0x44007000);

typename peripheral_t<STM32MP15xxx, TIM17>::T& peripheral_t<STM32MP15xxx, TIM17>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TIM17>::T*>(0x44008000);

typename peripheral_t<STM32MP15xxx, TZC>::T& peripheral_t<STM32MP15xxx, TZC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, TZC>::T*>(0x5c006000);

typename peripheral_t<STM32MP15xxx, USART1>::T& peripheral_t<STM32MP15xxx, USART1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, USART1>::T*>(0x5c000000);

typename peripheral_t<STM32MP15xxx, USART2>::T& peripheral_t<STM32MP15xxx, USART2>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, USART2>::T*>(0x4000e000);

typename peripheral_t<STM32MP15xxx, USART3>::T& peripheral_t<STM32MP15xxx, USART3>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, USART3>::T*>(0x4000f000);

typename peripheral_t<STM32MP15xxx, UART4>::T& peripheral_t<STM32MP15xxx, UART4>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, UART4>::T*>(0x40010000);

typename peripheral_t<STM32MP15xxx, UART5>::T& peripheral_t<STM32MP15xxx, UART5>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, UART5>::T*>(0x40011000);

typename peripheral_t<STM32MP15xxx, USART6>::T& peripheral_t<STM32MP15xxx, USART6>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, USART6>::T*>(0x44003000);

typename peripheral_t<STM32MP15xxx, UART7>::T& peripheral_t<STM32MP15xxx, UART7>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, UART7>::T*>(0x40018000);

typename peripheral_t<STM32MP15xxx, UART8>::T& peripheral_t<STM32MP15xxx, UART8>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, UART8>::T*>(0x40019000);

typename peripheral_t<STM32MP15xxx, USBPHYC>::T& peripheral_t<STM32MP15xxx, USBPHYC>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, USBPHYC>::T*>(0x5a006000);

typename peripheral_t<STM32MP15xxx, VREFBUF>::T& peripheral_t<STM32MP15xxx, VREFBUF>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, VREFBUF>::T*>(0x50025000);

typename peripheral_t<STM32MP15xxx, WWDG1>::T& peripheral_t<STM32MP15xxx, WWDG1>::V =
    *reinterpret_cast<typename peripheral_t<STM32MP15xxx, WWDG1>::T*>(0x4000a000);

