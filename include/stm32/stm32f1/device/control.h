#pragma once

////
//
//      STM32F1 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32F100, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, AFIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_AFIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_AFIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_AFIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, BKP>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_BKPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_BKPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_BKPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FSMCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FSMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOA>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPAEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPARST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOB>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPBEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPBRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOD>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPDEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPDRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOE>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPEEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPERST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOF>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPFEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPFRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, GPIOG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, USART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, USART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F100, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, ADC2>>
{
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC2RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, AFIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_AFIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_AFIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_AFIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, BKP>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_BKPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_BKPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_BKPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FSMCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FSMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOA>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPAEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPARST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOB>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPBEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPBRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOD>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPDEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPDRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOE>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPEEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPERST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOF>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPFEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPFRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, GPIOG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM10EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM11EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM9EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F101, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, AFIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_AFIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_AFIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_AFIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, BKP>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_BKPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_BKPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_BKPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, GPIOA>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPAEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPARST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, GPIOB>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPBEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPBRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, GPIOC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, GPIOD>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPDEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPDRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F102, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, ADC3>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC3EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC3RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, AFIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_AFIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_AFIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_AFIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, BKP>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_BKPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_BKPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_BKPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, FSMC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FSMCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FSMCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOA>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPAEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPARST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOB>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPBEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPBRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOD>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPDEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPDRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOE>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPEEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPERST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOF>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPFEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPFRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, GPIOG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, SDIO>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_SDIOEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_SDIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM10>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM10EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM10RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM10EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM11>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM11EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM11RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM11EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM12>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM12EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM12RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM12EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM13>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM13EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM13RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM13EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM8EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM8RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, TIM9>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM9EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM9RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM9EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_UART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, USB>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F103, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, ADC1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, ADC2>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADC2EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADC2RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADC2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, AFIO>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_AFIOEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_AFIORST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_AFIOEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, BKP>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_BKPEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_BKPRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_BKPEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, CAN1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CAN1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CAN1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CAN1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, CAN2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CAN2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CAN2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CAN2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, ETHMAC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ETHMACEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_ETHMACRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ETHMACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, ETHMACRX>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ETHMACRXEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ETHMACRXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, ETHMACTX>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_ETHMACTXEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_ETHMACTXEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, FLITF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, GPIOA>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPAEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPARST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, GPIOB>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPBEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPBRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, GPIOC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, GPIOD>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPDEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPDRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, GPIOE>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_IOPEEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_IOPERST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_IOPEEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, OTGFS>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_OTGFSEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_OTGFSRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_OTGFSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, SPI3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, UART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART4EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, UART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_UART5EN; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_UART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, USART4>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, USART5>>
{
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART5RST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F107, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};
