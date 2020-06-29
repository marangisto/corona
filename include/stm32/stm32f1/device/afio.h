#pragma once

////
//
//      STM32F1 AFIO peripherals
//
///

// AFIO: Alternate function I/O

struct stm32f100_afio_t
{
    volatile uint32_t EVCR; // Event Control Register (AFIO_EVCR)
    volatile uint32_t MAPR; // AF remap and debug I/O configuration register (AFIO_MAPR)
    volatile uint32_t EXTICR1; // External interrupt configuration register 1 (AFIO_EXTICR1)
    volatile uint32_t EXTICR2; // External interrupt configuration register 2 (AFIO_EXTICR2)
    volatile uint32_t EXTICR3; // External interrupt configuration register 3 (AFIO_EXTICR3)
    volatile uint32_t EXTICR4; // External interrupt configuration register 4 (AFIO_EXTICR4)
    reserved_t<0x1> _0x18;
    volatile uint32_t MAPR2; // AF remap and debug I/O configuration register

    static constexpr uint32_t EVCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EVCR_PIN; // Pin selection
    typedef bit_field_t<4, 0x7> EVCR_PORT; // Port selection
    static constexpr uint32_t EVCR_EVOE = 0x80; // Event Output Enable

    static constexpr uint32_t MAPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR_SPI1_REMAP = 0x1; // SPI1 remapping
    static constexpr uint32_t MAPR_I2C1_REMAP = 0x2; // I2C1 remapping
    static constexpr uint32_t MAPR_USART1_REMAP = 0x4; // USART1 remapping
    static constexpr uint32_t MAPR_USART2_REMAP = 0x8; // USART2 remapping
    typedef bit_field_t<4, 0x3> MAPR_USART3_REMAP; // USART3 remapping
    typedef bit_field_t<6, 0x3> MAPR_TIM1_REMAP; // TIM1 remapping
    typedef bit_field_t<8, 0x3> MAPR_TIM2_REMAP; // TIM2 remapping
    typedef bit_field_t<10, 0x3> MAPR_TIM3_REMAP; // TIM3 remapping
    static constexpr uint32_t MAPR_TIM4_REMAP = 0x1000; // TIM4 remapping
    static constexpr uint32_t MAPR_PD01_REMAP = 0x8000; // Port D0/Port D1 mapping on OSCIN/OSCOUT
    static constexpr uint32_t MAPR_TIM5CH4_IREMAP = 0x10000; // Set and cleared by software
    typedef bit_field_t<24, 0x7> MAPR_SWJ_CFG; // Serial wire JTAG configuration

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI0 configuration
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI1 configuration
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI2 configuration
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI3 configuration

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI4 configuration
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI5 configuration
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI6 configuration
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI7 configuration

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI8 configuration
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI9 configuration
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10 configuration
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI11 configuration

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12 configuration
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13 configuration
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14 configuration
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI15 configuration


    static constexpr uint32_t MAPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR2_TIM15_REMAP = 0x1; // TIM15 remapping
    static constexpr uint32_t MAPR2_TIM16_REMAP = 0x2; // TIM16 remapping
    static constexpr uint32_t MAPR2_TIM17_REMAP = 0x4; // TIM17 remapping
    static constexpr uint32_t MAPR2_TIM13_REMAP = 0x100; // TIM13 remapping
    static constexpr uint32_t MAPR2_TIM14_REMAP = 0x200; // TIM14 remapping
    static constexpr uint32_t MAPR2_FSMC_NADV = 0x400; // NADV connect/disconnect
    static constexpr uint32_t MAPR2_CEC_REMAP = 0x8; // CEC remapping
    static constexpr uint32_t MAPR2_TIM1_DMA_REMAP = 0x10; // TIM1 DMA remapping
    static constexpr uint32_t MAPR2_TIM67_DAC_DMA_REMAP = 0x800; // TIM67_DAC DMA remapping
    static constexpr uint32_t MAPR2_TIM12_REMAP = 0x1000; // TIM12 remapping
    static constexpr uint32_t MAPR2_MISC_REMAP = 0x2000; // Miscellaneous features remapping
};

// AFIO: Alternate function I/O

struct stm32f101_afio_t
{
    volatile uint32_t EVCR; // Event Control Register (AFIO_EVCR)
    volatile uint32_t MAPR; // AF remap and debug I/O configuration register (AFIO_MAPR)
    volatile uint32_t EXTICR1; // External interrupt configuration register 1 (AFIO_EXTICR1)
    volatile uint32_t EXTICR2; // External interrupt configuration register 2 (AFIO_EXTICR2)
    volatile uint32_t EXTICR3; // External interrupt configuration register 3 (AFIO_EXTICR3)
    volatile uint32_t EXTICR4; // External interrupt configuration register 4 (AFIO_EXTICR4)
    reserved_t<0x1> _0x18;
    volatile uint32_t MAPR2; // AF remap and debug I/O configuration register

    static constexpr uint32_t EVCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EVCR_PIN; // Pin selection
    typedef bit_field_t<4, 0x7> EVCR_PORT; // Port selection
    static constexpr uint32_t EVCR_EVOE = 0x80; // Event Output Enable

    static constexpr uint32_t MAPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR_SPI1_REMAP = 0x1; // SPI1 remapping
    static constexpr uint32_t MAPR_I2C1_REMAP = 0x2; // I2C1 remapping
    static constexpr uint32_t MAPR_USART1_REMAP = 0x4; // USART1 remapping
    static constexpr uint32_t MAPR_USART2_REMAP = 0x8; // USART2 remapping
    typedef bit_field_t<4, 0x3> MAPR_USART3_REMAP; // USART3 remapping
    typedef bit_field_t<6, 0x3> MAPR_TIM1_REMAP; // TIM1 remapping
    typedef bit_field_t<8, 0x3> MAPR_TIM2_REMAP; // TIM2 remapping
    typedef bit_field_t<10, 0x3> MAPR_TIM3_REMAP; // TIM3 remapping
    static constexpr uint32_t MAPR_TIM4_REMAP = 0x1000; // TIM4 remapping
    typedef bit_field_t<13, 0x3> MAPR_CAN_REMAP; // CAN1 remapping
    static constexpr uint32_t MAPR_PD01_REMAP = 0x8000; // Port D0/Port D1 mapping on OSCIN/OSCOUT
    static constexpr uint32_t MAPR_TIM5CH4_IREMAP = 0x10000; // Set and cleared by software
    static constexpr uint32_t MAPR_ADC1_ETRGINJ_REMAP = 0x20000; // ADC 1 External trigger injected conversion remapping
    static constexpr uint32_t MAPR_ADC1_ETRGREG_REMAP = 0x40000; // ADC 1 external trigger regular conversion remapping
    static constexpr uint32_t MAPR_ADC2_ETRGINJ_REMAP = 0x80000; // ADC 2 external trigger injected conversion remapping
    static constexpr uint32_t MAPR_ADC2_ETRGREG_REMAP = 0x100000; // ADC 2 external trigger regular conversion remapping
    typedef bit_field_t<24, 0x7> MAPR_SWJ_CFG; // Serial wire JTAG configuration

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI0 configuration
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI1 configuration
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI2 configuration
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI3 configuration

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI4 configuration
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI5 configuration
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI6 configuration
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI7 configuration

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI8 configuration
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI9 configuration
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10 configuration
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI11 configuration

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12 configuration
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13 configuration
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14 configuration
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI15 configuration


    static constexpr uint32_t MAPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR2_TIM9_REMAP = 0x20; // TIM9 remapping
    static constexpr uint32_t MAPR2_TIM10_REMAP = 0x40; // TIM10 remapping
    static constexpr uint32_t MAPR2_TIM11_REMAP = 0x80; // TIM11 remapping
    static constexpr uint32_t MAPR2_TIM13_REMAP = 0x100; // TIM13 remapping
    static constexpr uint32_t MAPR2_TIM14_REMAP = 0x200; // TIM14 remapping
    static constexpr uint32_t MAPR2_FSMC_NADV = 0x400; // NADV connect/disconnect
};

// AFIO: Alternate function I/O

struct stm32f107_afio_t
{
    volatile uint32_t EVCR; // Event Control Register (AFIO_EVCR)
    volatile uint32_t MAPR; // AF remap and debug I/O configuration register (AFIO_MAPR)
    volatile uint32_t EXTICR1; // External interrupt configuration register 1 (AFIO_EXTICR1)
    volatile uint32_t EXTICR2; // External interrupt configuration register 2 (AFIO_EXTICR2)
    volatile uint32_t EXTICR3; // External interrupt configuration register 3 (AFIO_EXTICR3)
    volatile uint32_t EXTICR4; // External interrupt configuration register 4 (AFIO_EXTICR4)
    reserved_t<0x1> _0x18;
    volatile uint32_t MAPR2; // AF remap and debug I/O configuration register

    static constexpr uint32_t EVCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EVCR_PIN; // Pin selection
    typedef bit_field_t<4, 0x7> EVCR_PORT; // Port selection
    static constexpr uint32_t EVCR_EVOE = 0x80; // Event Output Enable

    static constexpr uint32_t MAPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR_SPI1_REMAP = 0x1; // SPI1 remapping
    static constexpr uint32_t MAPR_I2C1_REMAP = 0x2; // I2C1 remapping
    static constexpr uint32_t MAPR_USART1_REMAP = 0x4; // USART1 remapping
    static constexpr uint32_t MAPR_USART2_REMAP = 0x8; // USART2 remapping
    typedef bit_field_t<4, 0x3> MAPR_USART3_REMAP; // USART3 remapping
    typedef bit_field_t<6, 0x3> MAPR_TIM1_REMAP; // TIM1 remapping
    typedef bit_field_t<8, 0x3> MAPR_TIM2_REMAP; // TIM2 remapping
    typedef bit_field_t<10, 0x3> MAPR_TIM3_REMAP; // TIM3 remapping
    static constexpr uint32_t MAPR_TIM4_REMAP = 0x1000; // TIM4 remapping
    typedef bit_field_t<13, 0x3> MAPR_CAN1_REMAP; // CAN1 remapping
    static constexpr uint32_t MAPR_PD01_REMAP = 0x8000; // Port D0/Port D1 mapping on OSCIN/OSCOUT
    static constexpr uint32_t MAPR_TIM5CH4_IREMAP = 0x10000; // Set and cleared by software
    static constexpr uint32_t MAPR_ETH_REMAP = 0x200000; // Ethernet MAC I/O remapping
    static constexpr uint32_t MAPR_CAN2_REMAP = 0x400000; // CAN2 I/O remapping
    static constexpr uint32_t MAPR_MII_RMII_SEL = 0x800000; // MII or RMII selection
    typedef bit_field_t<24, 0x7> MAPR_SWJ_CFG; // Serial wire JTAG configuration
    static constexpr uint32_t MAPR_SPI3_REMAP = 0x10000000; // SPI3/I2S3 remapping
    static constexpr uint32_t MAPR_TIM2ITR1_IREMAP = 0x20000000; // TIM2 internal trigger 1 remapping
    static constexpr uint32_t MAPR_PTP_PPS_REMAP = 0x40000000; // Ethernet PTP PPS remapping

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI0 configuration
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI1 configuration
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI2 configuration
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI3 configuration

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI4 configuration
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI5 configuration
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI6 configuration
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI7 configuration

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI8 configuration
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI9 configuration
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10 configuration
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI11 configuration

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12 configuration
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13 configuration
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14 configuration
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI15 configuration


    static constexpr uint32_t MAPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MAPR2_TIM9_REMAP = 0x20; // TIM9 remapping
    static constexpr uint32_t MAPR2_TIM10_REMAP = 0x40; // TIM10 remapping
    static constexpr uint32_t MAPR2_TIM11_REMAP = 0x80; // TIM11 remapping
    static constexpr uint32_t MAPR2_TIM13_REMAP = 0x100; // TIM13 remapping
    static constexpr uint32_t MAPR2_TIM14_REMAP = 0x200; // TIM14 remapping
    static constexpr uint32_t MAPR2_FSMC_NADV = 0x400; // NADV connect/disconnect
};

template<>
struct peripheral_t<STM32F100, AFIO>
{
    using T = stm32f100_afio_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, AFIO>
{
    using T = stm32f101_afio_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, AFIO>
{
    using T = stm32f101_afio_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, AFIO>
{
    using T = stm32f101_afio_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, AFIO>
{
    using T = stm32f107_afio_t;
    static T& V;
};

using afio_t = peripheral_t<svd, AFIO>;

template<int INST> struct afio_traits {};

template<> struct afio_traits<0>
{
    using afio = afio_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_AFIOEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_AFIOEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_AFIORST;
    }
};
