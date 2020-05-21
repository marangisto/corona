#pragma once

////
//
//      STM32F3 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32F301, ADC1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC1EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC1RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F301, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, ADC12>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC12EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, ADC34>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC34EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC34RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC34EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOE>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPEEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPERST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, USART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F302, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, ADC12>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC12EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, ADC34>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC34EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC34RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC34EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, DAC2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DAC2EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DAC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, FMC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FMCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_FMCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOE>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPEEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPERST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOG>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPGEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPGRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, GPIOH>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPHEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPHRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPHEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, I2C3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F303, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, DAC3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DAC3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DAC3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DAC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOE>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPEEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPERST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SDAD1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SDAD2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SDAD3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM18>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM18EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM18RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM18EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM19>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM19EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM19RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM19EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F373, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, ADC12>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC12EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC12RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, ADC34>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ADC34EN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ADC34RST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ADC34EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOE>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPEEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPERST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, UART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, UART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, USART3>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x4, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, DAC3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DAC3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DAC3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DAC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, DMA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMAEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOE>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPEEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPERST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SDAD1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SDAD2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SDAD3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SDAD3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SDAD3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SDAD3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM18>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM18EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM18RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM18EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM19>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM19EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM19RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM19EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F3x8, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};
