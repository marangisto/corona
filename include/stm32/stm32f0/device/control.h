#pragma once

////
//
//      STM32F0 peripheral clock control
//
////

template<typename PERIPHERAL>
struct clock_control_t {};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DBGMCURST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, GPIOD>>
{
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, USB>>
{
    static void reset() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBRST; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x0, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DBGMCURST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART6>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART6EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART7>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART7EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USART8>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART8EN; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART8EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, USB>>
{
    static void reset() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBRST; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x1, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DBGMCURST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, USB>>
{
    static void reset() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBRST; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x2, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, ADC>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_ADCEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_ADCRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_ADCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, CAN>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CANEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CANRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CANEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, CRC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_CRCEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_CRCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, CRS>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_CRSEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_CRSRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_CRSEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, DAC>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_DACEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_DACRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_DACEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, DBGMCU>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_DBGMCUEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_DBGMCURST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_DBGMCUEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, DMA1>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA1EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, DMA2>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_DMA2EN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_DMA2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, FLASH>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_FLITFEN; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_FLITFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, GPIOA>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPAEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPARST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPAEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, GPIOB>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPBEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPBRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPBEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, GPIOC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, GPIOD>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPDEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPDRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPDEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, GPIOF>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_IOPFEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_IOPFRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_IOPFEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, I2C1>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C1EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C1RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, I2C2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_I2C2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_I2C2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_I2C2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, PWR>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_PWREN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_PWRRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_PWREN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, SPI1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SPI1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SPI1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SPI1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, SPI2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_SPI2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_SPI2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_SPI2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, SYSCFG>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_SYSCFGEN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_SYSCFGRST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_SYSCFGEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM14>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM14EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM14RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM14EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM15>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM15EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM15RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM15EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM16>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM16EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM16RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM16EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM17>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_TIM17EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_TIM17RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_TIM17EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM6>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM6EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM6RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM6EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TIM7>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_TIM7EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_TIM7RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_TIM7EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, TSC>>
{
    static void enable() { rcc_t::V.AHBENR |= rcc_t::T::AHBENR_TSCEN; }
    static void reset() { rcc_t::V.AHBRSTR |= rcc_t::T::AHBRSTR_TSCRST; }
    static void disable() { rcc_t::V.AHBENR &= ~rcc_t::T::AHBENR_TSCEN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USART1>>
{
    static void enable() { rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_USART1EN; }
    static void reset() { rcc_t::V.APB2RSTR |= rcc_t::T::APB2RSTR_USART1RST; }
    static void disable() { rcc_t::V.APB2ENR &= ~rcc_t::T::APB2ENR_USART1EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USART2>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART2EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART2RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART2EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USART3>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART3EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART3RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART3EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USART4>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART4EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART4RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART4EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USART5>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USART5EN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USART5RST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_USART5EN; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, USB>>
{
    static void reset() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_USBRST; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_USBRST; }
};

template<>
struct clock_control_t<peripheral_t<STM32F0x8, WWDG>>
{
    static void enable() { rcc_t::V.APB1ENR |= rcc_t::T::APB1ENR_WWDGEN; }
    static void reset() { rcc_t::V.APB1RSTR |= rcc_t::T::APB1RSTR_WWDGRST; }
    static void disable() { rcc_t::V.APB1ENR &= ~rcc_t::T::APB1ENR_WWDGEN; }
};
